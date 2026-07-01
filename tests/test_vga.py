import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, Timer
from cocotb_test.simulator import run
import os

class RISCVAssembler:
    """Mini RISC-V Assembler from test_isa_exhaustive"""
    @staticmethod
    def reg(name):
        if name.startswith('x'): return int(name[1:])
        return 0

    @staticmethod
    def encode_r(rs2, rs1, funct3, rd, opcode, funct7):
        return (funct7 << 25) | (RISCVAssembler.reg(rs2) << 20) | (RISCVAssembler.reg(rs1) << 15) | (funct3 << 12) | (RISCVAssembler.reg(rd) << 7) | opcode

    @staticmethod
    def encode_i(imm, rs1, funct3, rd, opcode):
        return ((imm & 0xFFF) << 20) | (RISCVAssembler.reg(rs1) << 15) | (funct3 << 12) | (RISCVAssembler.reg(rd) << 7) | opcode

    @staticmethod
    def encode_s(imm, rs2, rs1, funct3, opcode):
        imm_11_5 = (imm >> 5) & 0x7F
        imm_4_0 = imm & 0x1F
        return (imm_11_5 << 25) | (RISCVAssembler.reg(rs2) << 20) | (RISCVAssembler.reg(rs1) << 15) | (funct3 << 12) | (imm_4_0 << 7) | opcode

    @staticmethod
    def encode_b(imm, rs2, rs1, funct3, opcode):
        imm_12 = (imm >> 12) & 0x1
        imm_11 = (imm >> 11) & 0x1
        imm_10_5 = (imm >> 5) & 0x3F
        imm_4_1 = (imm >> 1) & 0xF
        return (imm_12 << 31) | (imm_10_5 << 25) | (RISCVAssembler.reg(rs2) << 20) | (RISCVAssembler.reg(rs1) << 15) | (funct3 << 12) | (imm_4_1 << 8) | (imm_11 << 7) | opcode

    @staticmethod
    def encode_u(imm, rd, opcode):
        return ((imm & 0xFFFFF) << 12) | (RISCVAssembler.reg(rd) << 7) | opcode

    @staticmethod
    def encode_j(imm, rd, opcode):
        imm_20 = (imm >> 20) & 0x1
        imm_19_12 = (imm >> 12) & 0xFF
        imm_11 = (imm >> 11) & 0x1
        imm_10_1 = (imm >> 1) & 0x3FF
        return (imm_20 << 31) | (imm_10_1 << 21) | (imm_11 << 20) | (imm_19_12 << 12) | (RISCVAssembler.reg(rd) << 7) | opcode

    @classmethod
    def assemble(cls, instruction):
        parts = instruction.replace(',', ' ').split()
        mnem = parts[0]
        args = parts[1:]
        
        if mnem == 'add':  return cls.encode_r(args[2], args[1], 0x0, args[0], 0x33, 0x00)
        if mnem == 'sub':  return cls.encode_r(args[2], args[1], 0x0, args[0], 0x33, 0x20)
        if mnem == 'sll':  return cls.encode_r(args[2], args[1], 0x1, args[0], 0x33, 0x00)
        if mnem == 'slt':  return cls.encode_r(args[2], args[1], 0x2, args[0], 0x33, 0x00)
        if mnem == 'sltu': return cls.encode_r(args[2], args[1], 0x3, args[0], 0x33, 0x00)
        if mnem == 'xor':  return cls.encode_r(args[2], args[1], 0x4, args[0], 0x33, 0x00)
        if mnem == 'srl':  return cls.encode_r(args[2], args[1], 0x5, args[0], 0x33, 0x00)
        if mnem == 'sra':  return cls.encode_r(args[2], args[1], 0x5, args[0], 0x33, 0x20)
        if mnem == 'or':   return cls.encode_r(args[2], args[1], 0x6, args[0], 0x33, 0x00)
        if mnem == 'and':  return cls.encode_r(args[2], args[1], 0x7, args[0], 0x33, 0x00)

        if mnem == 'addi': return cls.encode_i(int(args[2], 0), args[1], 0x0, args[0], 0x13)
        if mnem == 'slli': return cls.encode_i(int(args[2], 0), args[1], 0x1, args[0], 0x13)
        if mnem == 'slti': return cls.encode_i(int(args[2], 0), args[1], 0x2, args[0], 0x13)
        if mnem == 'sltiu':return cls.encode_i(int(args[2], 0), args[1], 0x3, args[0], 0x13)
        if mnem == 'xori': return cls.encode_i(int(args[2], 0), args[1], 0x4, args[0], 0x13)
        if mnem == 'srli': return cls.encode_i(int(args[2], 0), args[1], 0x5, args[0], 0x13)
        if mnem == 'srai': return cls.encode_i(int(args[2], 0) | 0x400, args[1], 0x5, args[0], 0x13)
        if mnem == 'ori':  return cls.encode_i(int(args[2], 0), args[1], 0x6, args[0], 0x13)
        if mnem == 'andi': return cls.encode_i(int(args[2], 0), args[1], 0x7, args[0], 0x13)

        if mnem in ['lb', 'lh', 'lw', 'ld', 'lbu', 'lhu', 'lwu']:
            funct3 = {'lb':0, 'lh':1, 'lw':2, 'ld':3, 'lbu':4, 'lhu':5, 'lwu':6}[mnem]
            offset, rs1 = args[1].split('(')
            rs1 = rs1.strip(')')
            return cls.encode_i(int(offset, 0), rs1, funct3, args[0], 0x03)

        if mnem in ['sb', 'sh', 'sw', 'sd']:
            funct3 = {'sb':0, 'sh':1, 'sw':2, 'sd':3}[mnem]
            offset, rs1 = args[1].split('(')
            rs1 = rs1.strip(')')
            return cls.encode_s(int(offset, 0), args[0], rs1, funct3, 0x23)

        if mnem in ['beq', 'bne', 'blt', 'bge', 'bltu', 'bgeu']:
            funct3 = {'beq':0, 'bne':1, 'blt':4, 'bge':5, 'bltu':6, 'bgeu':7}[mnem]
            return cls.encode_b(int(args[2], 0), args[1], args[0], funct3, 0x63)

        if mnem == 'lui':   return cls.encode_u(int(args[1], 0), args[0], 0x37)
        if mnem == 'auipc': return cls.encode_u(int(args[1], 0), args[0], 0x17)
        if mnem == 'jal':   return cls.encode_j(int(args[1], 0), args[0], 0x6F)
        if mnem == 'jalr':  return cls.encode_i(int(args[2], 0), args[1], 0x0, args[0], 0x67)

        return 0

    @classmethod
    def assemble_to_hex(cls, instructions):
        return [f"{cls.assemble(inst):08x}" for inst in instructions]

class VirtualMonitor:
    """A virtual VGA monitor to capture pixels output from the SoC"""
    def __init__(self, dut):
        self.dut = dut
        self.pixels = []
        self.frame_width = 640
        self.frame_height = 480
        self.active_frame = []
        self.current_row = []
        self.frames = []
        self.frame_done = False
        
        # Start monitoring
        cocotb.start_soon(self._monitor())
        
    async def _monitor(self):
        # We need to sample at 25MHz. The SoC generates clk_25mhz by dividing the main clk by 4.
        # But we can just monitor the main clock and only sample when the signals change, 
        # or wait for the VSYNC / HSYNC directly.
        # Actually, let's just sample at every posedge of the main clock, but we only care when clk_25mhz is 1.
        # Since vga_hsync, vga_vsync, vga_r, vga_g, vga_b are driven by clk_25mhz, we can just look for changes
        # or we can sample precisely on the rising edge of the main clock when clk_25mhz transitions.
        
        # To make it simple, we will sample the VGA signals once per VGA clock cycle.
        # But we don't have clk_25mhz exported to top level directly.
        # Let's just sample at the SoC clk, but filter out duplicate pixels.
        
        last_vsync = 1
        last_hsync = 1
        
        # We need a robust way to capture 25MHz pixels from a 100MHz clock.
        # Since 1 pixel = 4 CPU clocks, we can just wait for CPU clock rising edges, 
        # and if the RGB values change, or we just count clocks.
        
        # Better: we know that VGA Controller outputs vga_hsync, vga_vsync.
        # HSYNC goes low for 96 pixel clocks (384 CPU clocks).
        # We can synchronize to HSYNC and then count CPU clocks.
        
        # For a full simulation we can just look at `video_active` but that's internal.
        # We know the active window is when RGB is not 0 (except if it is black).
        # Wait, if it's black, RGB is 0. 
        # Standard VGA: 
        # H_DISPLAY = 640, H_FRONT = 16, H_SYNC = 96, H_BACK = 48
        # V_DISPLAY = 480, V_FRONT = 10, V_SYNC = 2, V_BACK = 33
        
        while True:
            await RisingEdge(self.dut.clk)
            
            # Since clk_25mhz is clk / 4, we only want to sample every 4 cycles.
            # We can sync by observing h_sync falling edge!
            if self.dut.vga_hsync.value == 0 and last_hsync == 1:
                # We are at the start of H_SYNC.
                # H_SYNC is 96 VGA cycles. H_BACK is 48 VGA cycles.
                # Total = 144 VGA cycles = 576 CPU cycles until active region!
                for _ in range(576):
                    await RisingEdge(self.dut.clk)
                
                # Now we are in the active region for this line! (640 pixels)
                row = []
                for _ in range(640):
                    # Sample the pixel
                    r = int(self.dut.vga_r.value)
                    g = int(self.dut.vga_g.value)
                    b = int(self.dut.vga_b.value)
                    
                    # Convert 4-bit to 8-bit for saving
                    r = (r << 4) | r
                    g = (g << 4) | g
                    b = (b << 4) | b
                    row.append((r, g, b))
                    
                    # Wait 4 CPU clocks for the next pixel
                    for _ in range(4):
                        await RisingEdge(self.dut.clk)
                
                # Active region done.
                self.active_frame.append(row)
                
                # Are we done with a frame?
                # V_DISPLAY is 480 lines. We only capture lines that happen during VSYNC high, but wait...
                # VSYNC goes low for 2 lines.
                # If we just capture 480 lines AFTER VSYNC goes high, we get a full frame.
                if len(self.active_frame) == 480:
                    self.frames.append(self.active_frame)
                    self.active_frame = []
                    self.frame_done = True
            
            last_hsync = int(self.dut.vga_hsync.value) if self.dut.vga_hsync.value.is_resolvable else 1
            
            if self.dut.vga_vsync.value == 0 and last_vsync == 1:
                # VSYNC falling edge. Reset frame capture just to be safe.
                self.active_frame = []
                
            last_vsync = int(self.dut.vga_vsync.value) if self.dut.vga_vsync.value.is_resolvable else 1

    def save_frame(self, filename="frame.ppm", frame_idx=0):
        if frame_idx >= len(self.frames):
            print("Frame not found!")
            return
            
        frame = self.frames[frame_idx]
        with open(filename, "w") as f:
            f.write(f"P3\n{self.frame_width} {self.frame_height}\n255\n")
            for row in frame:
                for r, g, b in row:
                    f.write(f"{r} {g} {b} ")
                f.write("\n")
        print(f"Saved {filename}")

async def run_program(dut, prog_hex, cycles=1000):
    for i in range(4096):
        dut.u_ram.memory[i].value = 0
        
    for i, w in enumerate(prog_hex):
        dut.u_ram.memory[i*4].value = int(w[6:8], 16)
        dut.u_ram.memory[i*4+1].value = int(w[4:6], 16)
        dut.u_ram.memory[i*4+2].value = int(w[2:4], 16)
        dut.u_ram.memory[i*4+3].value = int(w[0:2], 16)

    dut.rst.value = 1
    await RisingEdge(dut.clk)
    dut.rst.value = 0
    await RisingEdge(dut.clk)
    
    # Run the processor
    for cycle in range(cycles):
        await RisingEdge(dut.clk)

@cocotb.test()
async def test_vga_controller(dut):
    """Test VGA Controller and generate a frame."""
    cocotb.start_soon(Clock(dut.clk, 1, units="ns").start())
    
    prog_src = """
        lui x1, 2          # x1 = 0x2000 (VGA RAM Base)
        addi x2, x0, 128   # max y
        addi x4, x0, 0     # y = 0
    loop_y:
        addi x3, x0, 128   # max x
        addi x5, x0, 0     # x = 0
    loop_x:
        # calculate color: (x ^ y) & 0xFF
        xor x6, x4, x5
        andi x6, x6, 255
        
        # calculate address: x1 + (y * 128 + x)
        # y * 128 is y << 7
        slli x7, x4, 7
        add x7, x7, x5
        add x7, x7, x1
        
        # store pixel
        sb x6, 0(x7)
        
        # x++
        addi x5, x5, 1
        bne x5, x3, loop_x
        
        # y++
        addi x4, x4, 1
        bne x4, x2, loop_y
        
    end_loop:
        beq x0, x0, end_loop
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
    
    # Load program
    for i in range(4096):
        dut.u_ram.memory[i].value = 0
        
    for i, w in enumerate(hex_prog):
        dut.u_ram.memory[i*4].value = int(w[6:8], 16)
        dut.u_ram.memory[i*4+1].value = int(w[4:6], 16)
        dut.u_ram.memory[i*4+2].value = int(w[2:4], 16)
        dut.u_ram.memory[i*4+3].value = int(w[0:2], 16)

    dut.rst.value = 1
    await RisingEdge(dut.clk)
    dut.rst.value = 0
    await RisingEdge(dut.clk)
    
    monitor = VirtualMonitor(dut)
    
    # 1 full VGA frame is 800 * 525 = 420,000 VGA cycles = 1,680,000 CPU cycles.
    # The CPU loop is 128x128 = 16384 pixels.
    # Each pixel takes ~10 instructions * 1 cycle = ~160,000 CPU cycles.
    # So the CPU will easily finish drawing BEFORE the first frame is fully rendered!
    
    # Wait until 1 frame is captured
    cycles = 0
    while not monitor.frame_done and cycles < 2000000:
        await RisingEdge(dut.clk)
        cycles += 1
        
        # Stop processor from running indefinitely if it gets stuck
        if cycles % 100000 == 0:
            print(f"Simulated {cycles} CPU cycles...")
            
    assert monitor.frame_done, "Timed out waiting for VGA frame!"
    
    print("Frame captured successfully!")
    monitor.save_frame("frame.ppm")

def test_vga():
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
        module="test_vga",
        extra_args=["-Wno-fatal"],
        includes=[os.path.abspath(os.path.join(os.path.dirname(__file__), ".."))],
        compile_args=["-Wno-fatal"],
        extra_env={"MAKEFLAGS": "-s"}
    )
