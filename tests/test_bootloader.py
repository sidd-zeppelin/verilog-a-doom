import os
import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, FallingEdge
from cocotb_test.simulator import run

class MockSDCard:
    def __init__(self, dut, initial_state="IDLE", sector_128_data=None):
        self.dut = dut
        self.dut.spi_miso.value = 1
        
        self.rx_buffer = []
        self.tx_queue = []
        
        self.shift_in = 0
        self.shift_out = 0xFF
        self.bit_count = 0
        
        self.state = initial_state
        self.is_acmd = False
        
        self.sector_128_data = sector_128_data if sector_128_data else [0]*512
        
        self._coro = cocotb.start_soon(self._run())

    async def _run(self):
        prev_cs = 1
        while True:
            await RisingEdge(self.dut.spi_sck)
            
            curr_cs = int(self.dut.spi_cs_n.value)
            if curr_cs != prev_cs:
                print(f"[SD CARD] CS_N changed from {prev_cs} to {curr_cs}")
            prev_cs = curr_cs
            
            if curr_cs == 1:
                self.dut.spi_miso.value = 1
                continue
            
            bit_in = int(self.dut.spi_mosi.value)
            self.shift_in = ((self.shift_in << 1) | bit_in) & 0xFF
            
            await FallingEdge(self.dut.spi_sck)
            
            self.bit_count += 1
            if self.bit_count == 8:
                self._handle_byte(self.shift_in)
                self.bit_count = 0
                self.shift_in = 0
                
                if len(self.tx_queue) > 0:
                    self.shift_out = self.tx_queue.pop(0)
                else:
                    self.shift_out = 0xFF
            else:
                self.shift_out = (self.shift_out << 1) & 0xFF
                
            self.dut.spi_miso.value = (self.shift_out >> 7) & 0x1

    def _handle_byte(self, byte):
        print(f"[SD CARD] Received Byte: 0x{byte:02X}")
        self.rx_buffer.append(byte)
        if len(self.rx_buffer) >= 6:
            while len(self.rx_buffer) >= 6 and (self.rx_buffer[0] & 0xC0) != 0x40:
                self.rx_buffer.pop(0)
                
            if len(self.rx_buffer) == 6:
                cmd = self.rx_buffer[0] & 0x3F
                arg = (self.rx_buffer[1] << 24) | (self.rx_buffer[2] << 16) | (self.rx_buffer[3] << 8) | self.rx_buffer[4]
                crc = self.rx_buffer[5]
                self._process_cmd(cmd, arg, crc)
                self.rx_buffer = []

    def _process_cmd(self, cmd, arg, crc):
        print(f"[SD CARD] Received CMD{cmd} Arg: 0x{arg:08X}")
        
        if cmd == 0:
            self.state = "IDLE"
            self.tx_queue.append(0x01)
        elif cmd == 8:
            self.tx_queue.extend([0x01, 0x00, 0x00, 0x01, 0xAA])
        elif cmd == 55:
            self.is_acmd = True
            self.tx_queue.append(0x01)
        elif cmd == 41:
            if self.is_acmd:
                self.state = "READY"
                self.tx_queue.append(0x00)
            else:
                self.tx_queue.append(0x05)
            self.is_acmd = False
        elif cmd == 17:
            if self.state == "READY":
                self.tx_queue.append(0x00)
                self.tx_queue.append(0xFF)
                self.tx_queue.append(0xFE)
                if arg == 128:
                    self.tx_queue.extend(self.sector_128_data[:512])
                else:
                    self.tx_queue.extend([0]*512)
                self.tx_queue.extend([0xAA, 0xBB])
            else:
                self.tx_queue.append(0x05)
        else:
            self.tx_queue.append(0x05)


class VirtualMonitor:
    def __init__(self, dut):
        self.dut = dut
        self.pixels = [[(0,0,0) for _ in range(128)] for _ in range(128)]
        self.h_active = False
        self.v_active = False
        self.x = 0
        self.y = 0
        self.frames = 0
        self._coro = cocotb.start_soon(self._run())

    async def _run(self):
        while True:
            await RisingEdge(self.dut.clk)
            
            hsync = int(self.dut.vga_hsync.value)
            vsync = int(self.dut.vga_vsync.value)
            
            # The vga_timing module produces video_on when we are in active area
            # We don't have direct access to video_on, but we can reconstruct coordinates from sync signals.
            # However, since this is a long end-to-end test, we can just dump the VGA RAM instead of capturing pixels!
            # Since the game writes to VGA RAM directly (at 0x2000), we can just read the RAM after the simulation runs!


@cocotb.test()
async def test_bootloader(dut):
    """End-to-End Test: Bootloader -> SD Card Read -> Load Game -> Write VGA RAM"""
    
    # 1. Load Bootloader into RAM
    bootloader_path = os.path.join(os.path.dirname(__file__), "..", "software", "bootloader", "bootloader.hex")
    with open(bootloader_path, 'r') as f:
        ram_idx = 0
        for line in f:
            if line.startswith('@'):
                continue
            for byte_str in line.strip().split():
                if ram_idx < 8192:
                    dut.u_ram.memory[ram_idx].value = int(byte_str, 16)
                    ram_idx += 1

    # Force little-endian to match RISC-V C compiler conventions
    dut.u_ram.use_little_endian.value = 1

    # 2. Load Doom Game binary into SD Card Sector 128
    doom_path = os.path.join(os.path.dirname(__file__), "..", "software", "doom", "doom.bin")
    with open(doom_path, 'rb') as f:
        doom_data = list(f.read())
    
    # Pad to 512 bytes
    while len(doom_data) < 512:
        doom_data.append(0)
        
    sd_card = MockSDCard(dut, sector_128_data=doom_data)

    # 3. Start Clock
    cocotb.start_soon(Clock(dut.clk, 20, unit="ns").start()) # 50MHz

    # 4. Reset
    dut.rst.value = 1
    await RisingEdge(dut.clk)
    dut.rst.value = 0
    await RisingEdge(dut.clk)
    
    # 5. Run for a generous amount of cycles to allow:
    # - Bootloader SD initialization (~2000 cycles)
    # - Bootloader SD block read (~25000 cycles)
    # - Doom Game VGA drawing loop (~128*128*10 = ~160000 cycles)
    
    # Total ~200,000 cycles should be plenty. Let's trace it.
    vga_written = False
    pixels_drawn = 0
    
    # Total ~3,000,000 cycles to allow SPI loading and some drawing
    for cycle in range(3000000):
        await RisingEdge(dut.clk)
        
        if int(dut.vga_write_req.value) == 1:
            pixels_drawn += 1
            if not vga_written:
                print(f"C{cycle}: FIRST VGA PIXEL DRAWN!")
                vga_written = True
                
            if pixels_drawn > 15000: # About 1 frame (128x128=16384)
                print(f"C{cycle}: Rendered a full frame! Breaking early.")
                break
            
        if vga_written and pixels_drawn % 1000 == 0:
            pass # Keep it quiet
            
    print("Simulation complete! Dumping VGA RAM to frame.ppm...")
    
    # 6. Dump VGA RAM to PPM image!
    with open("frame.ppm", "w") as f:
        f.write("P3\n128 128\n255\n")
        for y in range(128):
            for x in range(128):
                # VGA RAM is an array of 16384 bytes
                # Index is {y[6:0], x[6:0]} = (y << 7) | x
                idx = (y << 7) | x
                val = int(dut.u_vga.u_ram.memory[idx].value)
                
                # Format: RRRGGGBB
                r_val = (val >> 5) & 0x7
                g_val = (val >> 2) & 0x7
                b_val = val & 0x3
                
                # Scale to 8-bit
                r_8 = (r_val * 255) // 7
                g_8 = (g_val * 255) // 7
                b_8 = (b_val * 255) // 3
                
                f.write(f"{r_8} {g_8} {b_8}\n")

    # Assert that the VGA RAM isn't completely empty!
    non_zero = 0
    for idx in range(16384):
        if int(dut.u_vga.u_ram.memory[idx].value) != 0:
            non_zero += 1
            
    print(f"Non-zero pixels drawn: {non_zero}")
    assert non_zero > 0, "VGA RAM is completely empty! The game didn't draw anything!"

def test_bootloader_runner():
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
        module="test_bootloader",
        extra_args=["-Wno-fatal"],
        includes=[os.path.abspath(os.path.join(os.path.dirname(__file__), ".."))]
    )
