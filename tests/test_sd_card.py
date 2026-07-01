import os
import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, FallingEdge, Timer, Join
from cocotb_test.simulator import run
# pyrefly: ignore [missing-import]
from riscv_assembler import RISCVAssembler

class MockSDCard:
    def __init__(self, dut, initial_state="IDLE"):
        self.dut = dut
        self.dut.spi_miso.value = 1 # Pull up MISO
        
        self.rx_buffer = []
        self.tx_queue = []
        
        self.shift_in = 0
        self.shift_out = 0xFF
        self.bit_count = 0
        
        self.state = initial_state
        self.is_acmd = False
        
        # Dummy sector data for CMD17
        self.sector_data = [i % 256 for i in range(512)]

        self._coro = cocotb.start_soon(self._run())

    async def _run(self):
        while True:
            # Wait for SCK rising edge
            await RisingEdge(self.dut.spi_sck)
            
            # If CS is high, ignore (though we still shift MISO if we want)
            if self.dut.spi_cs_n.value == 1:
                self.dut.spi_miso.value = 1
                continue
            
            # Sample MOSI
            bit_in = int(self.dut.spi_mosi.value)
            self.shift_in = ((self.shift_in << 1) | bit_in) & 0xFF
            
            # Wait for SCK falling edge to shift out next bit
            await FallingEdge(self.dut.spi_sck)
            
            self.bit_count += 1
            if self.bit_count == 8:
                self._handle_byte(self.shift_in)
                self.bit_count = 0
                self.shift_in = 0
                
                # Load next byte to send
                if len(self.tx_queue) > 0:
                    self.shift_out = self.tx_queue.pop(0)
                else:
                    self.shift_out = 0xFF
            else:
                self.shift_out = (self.shift_out << 1) & 0xFF
                
            # Drive MISO
            self.dut.spi_miso.value = (self.shift_out >> 7) & 0x1

    def _handle_byte(self, byte):
        # We process incoming bytes
        self.rx_buffer.append(byte)
        
        # A command is 6 bytes starting with 01xxxxxx (0x40 | cmd)
        if len(self.rx_buffer) >= 6:
            # Look for start bit
            while len(self.rx_buffer) >= 6 and (self.rx_buffer[0] & 0xC0) != 0x40:
                self.rx_buffer.pop(0)
                
            if len(self.rx_buffer) == 6:
                cmd = self.rx_buffer[0] & 0x3F
                arg = (self.rx_buffer[1] << 24) | (self.rx_buffer[2] << 16) | (self.rx_buffer[3] << 8) | self.rx_buffer[4]
                crc = self.rx_buffer[5]
                
                self._process_cmd(cmd, arg, crc)
                self.rx_buffer = [] # Clear buffer after command

    def _process_cmd(self, cmd, arg, crc):
        print(f"[SD CARD] Received CMD{cmd} Arg: 0x{arg:08X} CRC: 0x{crc:02X}")
        
        if cmd == 0: # GO_IDLE_STATE
            self.state = "IDLE"
            self.tx_queue.append(0x01) # R1 response: In Idle State
            
        elif cmd == 8: # SEND_IF_COND
            self.tx_queue.append(0x01) # R1: In Idle State
            self.tx_queue.append(0x00) # R7: 4 bytes
            self.tx_queue.append(0x00)
            self.tx_queue.append(0x01) # Voltage accepted
            self.tx_queue.append(0xAA) # Echo pattern
            
        elif cmd == 55: # APP_CMD
            self.is_acmd = True
            self.tx_queue.append(0x01) # R1: In Idle State
            
        elif cmd == 41: # SD_SEND_OP_COND (ACMD41)
            if self.is_acmd:
                self.state = "READY"
                self.tx_queue.append(0x00) # R1: Ready (0x00)
            else:
                self.tx_queue.append(0x05) # R1: Illegal Command
            self.is_acmd = False
            
        elif cmd == 17: # READ_SINGLE_BLOCK
            if self.state == "READY":
                self.tx_queue.append(0x00) # R1: OK
                self.tx_queue.append(0xFF) # Dummy byte before token
                self.tx_queue.append(0xFE) # Data Token
                self.tx_queue.extend(self.sector_data) # 512 bytes
                self.tx_queue.append(0xAA) # CRC 1
                self.tx_queue.append(0xBB) # CRC 2
            else:
                self.tx_queue.append(0x05) # Illegal
                
        else:
            self.tx_queue.append(0x05) # Illegal command

async def run_program(dut, prog_hex, cycles=1000, initial_state="IDLE"):
    for i in range(4096):
        dut.u_ram.memory[i].value = 0
        
    for i, w in enumerate(prog_hex):
        dut.u_ram.memory[i*4].value = int(w[6:8], 16)
        dut.u_ram.memory[i*4+1].value = int(w[4:6], 16)
        dut.u_ram.memory[i*4+2].value = int(w[2:4], 16)
        dut.u_ram.memory[i*4+3].value = int(w[0:2], 16)

    dut.u_ram.use_little_endian.value = 1

    cocotb.start_soon(Clock(dut.clk, 20, unit="ns").start()) # 50MHz
    
    sd_card = MockSDCard(dut, initial_state=initial_state)
    
    dut.rst.value = 1
    await RisingEdge(dut.clk)
    dut.rst.value = 0
    await RisingEdge(dut.clk)
    
    # Run the processor
    for cycle in range(cycles):
        await RisingEdge(dut.clk)
        
        if cycle % 100 == 0:
            pc = int(dut.u_core.u_pc.pc_current.value)
            print(f"Cycle {cycle}: PC = {pc}")
        
        # Break early if PC is stuck in an infinite loop without memory access
        # Wait, if we are polling SPI busy, the PC loops. So we just run for fixed cycles.
        
    return sd_card

@cocotb.test()
async def test_sd_card_initialization(dut):
    """Test SD Card Initialization using RISC-V assembly."""
    
    # Register map
    # x1 = SPI_BASE (0xD000)
    # x2 = Temp / CMD
    # x3 = Temp / ARG
    # x4 = Loop Counters
    # x5 = Polling / Result
    
    # Function: send_byte
    # Transmits x10 over SPI. Assumes x1 == 0xD000.
    # We will write this inline to save complexity, or use jump/link.
    
    # We will compute branch offsets manually since we don't have a label assembler.
    # Instruction offsets in bytes (4 bytes per instruction).
    
    prog = [
        # Setup base address
        "lui x1, 13",       # 0: x1 = 0xD000 (13 << 12)
        
        # 1. 80 Dummy Clocks (CS=1)
        "addi x2, x0, 1",
        "sd x2, 8(x1)",     # 4: SPI_CTRL = 1 (CS_N = 1, div = 0)
        
        "addi x4, x0, 10",  # 8: x4 = 10 (send 10 bytes)
        
        # LOOP_DUMMY:
        "addi x2, x0, 255", 
        "sb x2, 0(x1)",     # 12: SPI_DATA = 0xFF
        
        # POLL_BUSY_DUMMY:
        "ld x5, 8(x1)",     # 16: Read SPI_CTRL
        "andi x5, x5, 2",   # 20: Extract busy bit
        "bne x5, x0, -8",   # 24: Loop to POLL_BUSY_DUMMY if busy (PC - 8 = 16)
        
        "addi x4, x4, -1",  # 28: x4--
        "bne x4, x0, -20",  # 32: Loop to LOOP_DUMMY if > 0 (PC - 20 = 12)
        
        # 2. Assert CS (CS=0)
        "addi x2, x0, 0",
        "sd x2, 8(x1)",     # 36: SPI_CTRL = 0 (CS_N = 0)
        
        # 3. SEND CMD0: 40 00 00 00 00 95
        # Since we don't have arrays, we send them sequentially
        "addi x2, x0, 64", "sb x2, 0(x1)", "ld x5, 8(x1)", "andi x5, x5, 2", "bne x5, x0, -8", # 40, 44, 48, 52, 56
        "addi x2, x0, 0",  "sb x2, 0(x1)", "ld x5, 8(x1)", "andi x5, x5, 2", "bne x5, x0, -8", # 60, 64, 68, 72, 76
        "addi x2, x0, 0",  "sb x2, 0(x1)", "ld x5, 8(x1)", "andi x5, x5, 2", "bne x5, x0, -8", # 80, 84, 88, 92, 96
        "addi x2, x0, 0",  "sb x2, 0(x1)", "ld x5, 8(x1)", "andi x5, x5, 2", "bne x5, x0, -8", # 100, 104, 108, 112, 116
        "addi x2, x0, 0",  "sb x2, 0(x1)", "ld x5, 8(x1)", "andi x5, x5, 2", "bne x5, x0, -8", # 120, 124, 128, 132, 136
        "addi x2, x0, 149","sb x2, 0(x1)", "ld x5, 8(x1)", "andi x5, x5, 2", "bne x5, x0, -8", # 140, 144, 148, 152, 156 (0x95 = 149)
        
        # WAIT CMD0 RESPONSE (Wait for 0x01)
        # POLL_CMD0_RESP:
        "addi x2, x0, 255", "sb x2, 0(x1)", "ld x5, 8(x1)", "andi x5, x5, 2", "bne x5, x0, -8", # 160, 164, 168, 172, 176 (Send 0xFF to read)
        "lb x5, 0(x1)",     # 180: Read SPI_DATA
        "addi x2, x0, 1",
        "bne x5, x2, -24",  # 188: if response != 1, loop back to POLL_CMD0_RESP (188 - 24 = 164. Wait, 188 - 28 = 160)
        # Fix offset: POLL_CMD0_RESP is at 160. Current is 188. Offset = -28.
        # Let's verify: 188 - 28 = 160.
    ]
    
    # This is getting tedious to write manually and extremely error prone with offsets.
    # Let's write a mini-assembler preprocessor for labels!
    
    prog_src = """
        lui x1, 13
        addi x2, x0, 1
        sd x2, 8(x1)
        addi x4, x0, 10
        
    loop_dummy:
        addi x2, x0, 255
        sb x2, 0(x1)
    poll_busy_dummy:
        ld x5, 8(x1)
        andi x5, x5, 2
        bne x5, x0, poll_busy_dummy
        addi x4, x4, -1
        bne x4, x0, loop_dummy
        
        addi x2, x0, 0
        sd x2, 8(x1)
        
        # Send CMD0
        addi x2, x0, 64
        jal x3, send_byte
        addi x2, x0, 0
        jal x3, send_byte
        addi x2, x0, 0
        jal x3, send_byte
        addi x2, x0, 0
        jal x3, send_byte
        addi x2, x0, 0
        jal x3, send_byte
        addi x2, x0, 149
        jal x3, send_byte
        
    wait_cmd0:
        addi x2, x0, 255
        jal x3, send_byte
        lbu x5, 0(x1)
        addi x2, x0, 1
        bne x5, x2, wait_cmd0
        
        # Send CMD8
        addi x2, x0, 72
        jal x3, send_byte
        addi x2, x0, 0
        jal x3, send_byte
        addi x2, x0, 0
        jal x3, send_byte
        addi x2, x0, 1
        jal x3, send_byte
        addi x2, x0, 170
        jal x3, send_byte
        addi x2, x0, 135
        jal x3, send_byte
        
    wait_cmd8:
        addi x2, x0, 255
        jal x3, send_byte
        lbu x5, 0(x1)
        addi x2, x0, 1
        bne x5, x2, wait_cmd8
        
        # Read 4 bytes of R7 response
        addi x2, x0, 255
        jal x3, send_byte
        addi x2, x0, 255
        jal x3, send_byte
        addi x2, x0, 255
        jal x3, send_byte
        addi x2, x0, 255
        jal x3, send_byte
        
    acmd_loop:
        # Send CMD55
        addi x2, x0, 119
        jal x3, send_byte
        addi x2, x0, 0
        jal x3, send_byte
        addi x2, x0, 0
        jal x3, send_byte
        addi x2, x0, 0
        jal x3, send_byte
        addi x2, x0, 0
        jal x3, send_byte
        addi x2, x0, 101
        jal x3, send_byte
        
    wait_cmd55:
        addi x2, x0, 255
        jal x3, send_byte
        lbu x5, 0(x1)
        addi x2, x0, 1
        bne x5, x2, wait_cmd55
        
        # Send ACMD41
        addi x2, x0, 105
        jal x3, send_byte
        addi x2, x0, 64
        jal x3, send_byte
        addi x2, x0, 0
        jal x3, send_byte
        addi x2, x0, 0
        jal x3, send_byte
        addi x2, x0, 0
        jal x3, send_byte
        addi x2, x0, 119
        jal x3, send_byte
        
    wait_acmd41:
        addi x2, x0, 255
        jal x3, send_byte
        lbu x5, 0(x1)
        bne x5, x0, acmd_loop
        
    end_loop:
        beq x0, x0, end_loop
        
    send_byte:
        sb x2, 0(x1)
    send_byte_poll:
        ld x6, 8(x1)
        andi x6, x6, 2
        bne x6, x0, send_byte_poll
        jalr x0, x3, 0
    """
    
    # Mini assembler preprocessor
    labels = {}
    instructions = []
    
    # Pass 1: resolve labels
    pc = 0
    for line in prog_src.strip().split('\n'):
        line = line.strip().split('#')[0].strip()
        if not line:
            continue
        if line.endswith(':'):
            labels[line[:-1]] = pc
        else:
            instructions.append(line)
            pc += 4
            
    # Pass 2: substitute labels
    final_prog = []
    pc = 0
    for inst in instructions:
        parts = inst.replace(',', ' ').split()
        for i, part in enumerate(parts):
            if part in labels:
                offset = labels[part] - pc
                parts[i] = str(offset)
        
        # Reconstruct instruction
        if len(parts) >= 3 and parts[0] in ['beq', 'bne', 'blt', 'bge', 'bltu', 'bgeu']:
            # bne x5 x0 -8 -> bne x5, x0, -8
            final_prog.append(f"{parts[0]} {parts[1]}, {parts[2]}, {parts[3]}")
        elif len(parts) >= 2 and parts[0] in ['jal']:
            final_prog.append(f"{parts[0]} {parts[1]}, {parts[2]}")
        else:
            final_prog.append(inst)
        pc += 4

    hex_prog = RISCVAssembler.assemble_to_hex(final_prog)
    
    # 200,000 cycles is generous enough for the initialization sequence 
    # (about 80 bytes sent * 8 cycles/byte * 3 instructions loop = ~2000 cycles + overhead)
    # Using 10000 to be safe.
    sd_card = await run_program(dut, hex_prog, cycles=10000)
    
    assert sd_card.state == "READY", f"SD Card failed to initialize! State: {sd_card.state}"

@cocotb.test()
async def test_sd_card_read_block(dut):
    """Test SD Card CMD17 Block Read."""
    # Program to read 512 bytes using CMD17 and store them to 0x2000
    prog_src = """
        lui x1, 13          # SPI base 0xD000
        lui x7, 1           # Data memory base 0x1000
        
        # Assert CS=0
        addi x2, x0, 0
        sd x2, 8(x1)
        
        # Send CMD17 (0x40 | 17 = 81)
        addi x2, x0, 81
        jal x3, send_byte
        addi x2, x0, 0
        jal x3, send_byte
        addi x2, x0, 0
        jal x3, send_byte
        addi x2, x0, 0
        jal x3, send_byte
        addi x2, x0, 0
        jal x3, send_byte
        addi x2, x0, 255
        jal x3, send_byte
        
    wait_cmd17:
        addi x2, x0, 255
        jal x3, send_byte
        lbu x5, 0(x1)
        bne x5, x0, wait_cmd17
        
    wait_token:
        addi x2, x0, 255
        jal x3, send_byte
        lbu x5, 0(x1)
        # 0xFE is -2 in signed 8-bit, or 254
        addi x2, x0, 254
        bne x5, x2, wait_token
        
        # Read 512 bytes
        addi x4, x0, 512
        add x8, x0, x7      # x8 = pointer to 0x1000
        
    read_loop:
        addi x2, x0, 255
        jal x3, send_byte
        lbu x5, 0(x1)
        
        # Store byte
        sb x5, 0(x8)
        addi x8, x8, 1
        
        addi x4, x4, -1
        bne x4, x0, read_loop
        
        # Read 2 CRC bytes
        addi x2, x0, 255
        jal x3, send_byte
        addi x2, x0, 255
        jal x3, send_byte
        
        # Deassert CS=1
        addi x2, x0, 1
        sd x2, 8(x1)
        
    end_loop:
        beq x0, x0, end_loop
        
    send_byte:
        sb x2, 0(x1)
    send_byte_poll:
        ld x6, 8(x1)
        andi x6, x6, 2
        bne x6, x0, send_byte_poll
        jalr x0, x3, 0
    """
    
    labels = {}
    instructions = []
    pc = 0
    for line in prog_src.strip().split('\n'):
        line = line.strip().split('#')[0].strip()
        if not line: continue
        if line.endswith(':'):
            labels[line[:-1]] = pc
        else:
            instructions.append(line)
            pc += 4
            
    final_prog = []
    pc = 0
    for inst in instructions:
        parts = inst.replace(',', ' ').split()
        for i, part in enumerate(parts):
            if part in labels:
                parts[i] = str(labels[part] - pc)
        if len(parts) >= 3 and parts[0] in ['beq', 'bne']:
            final_prog.append(f"{parts[0]} {parts[1]}, {parts[2]}, {parts[3]}")
        elif len(parts) >= 2 and parts[0] in ['jal']:
            final_prog.append(f"{parts[0]} {parts[1]}, {parts[2]}")
        else:
            final_prog.append(inst)
        pc += 4

    hex_prog = RISCVAssembler.assemble_to_hex(final_prog)
    
    # 512 bytes * 8 cycles = 4096 SPI cycles + CPU overhead = ~25000 cycles
    sd_card = await run_program(dut, hex_prog, cycles=35000, initial_state="READY")
    
    # Verify memory
    dmem = dut.u_ram.memory
    for i in range(512):
        val = int(dmem[4096 + i].value)
        expected = i % 256
        assert val == expected, f"Data mismatch at {4096 + i}: got {val}, expected {expected}"

def test_sd_card():
    src_dir = os.path.abspath(os.path.join(os.path.dirname(__file__), "..", "src"))
    run(
        verilog_sources=[
            os.path.join(src_dir, "timescale.v"), 
            os.path.join(src_dir, "soc_top.v"),
            os.path.join(src_dir, "top_pipeline.v"),
            os.path.join(src_dir, "memory_bus.v"),
            os.path.join(src_dir, "vga_controller.v"),
            os.path.join(src_dir, "vga_timing.v"),
            os.path.join(src_dir, "vga_ram.v"),
            os.path.join(src_dir, "clint.v"),
            os.path.join(src_dir, "csr_regfile.v"),
            os.path.join(src_dir, "spi_controller.v"),
            os.path.join(src_dir, "system_memory.v")
        ],
        toplevel="soc_top",
        module="test_sd_card",
        extra_args=["-Wno-fatal"],
        includes=[os.path.abspath(os.path.join(os.path.dirname(__file__), ".."))],
        compile_args=["-Wno-fatal"],
        extra_env={"MAKEFLAGS": "-s"}
    )
