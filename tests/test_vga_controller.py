import os
import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, Timer
from cocotb_test.simulator import run
# pyrefly: ignore [missing-import]
from riscv_assembler import RISCVAssembler

@cocotb.test()
async def test_vga_mmio_write(dut):
    """Test that the CPU can write to VGA RAM via MMIO."""
    # Program: Write color 0xE3 (red-ish) to first pixel of VGA memory (0x2000)
    prog = [
        "lui x1, 2",        # x1 = 0x2000
        "addi x2, x0, 227", # x2 = 0xE3 (227)
        "sb x2, 0(x1)",     # mem[0x2000] = 0xE3
        "nop", "nop", "nop", "nop", "nop"
    ]
    
    hex_prog = RISCVAssembler.assemble_to_hex(prog)
    for i, w in enumerate(hex_prog):
        dut.u_ram.memory[i*4].value = int(w[6:8], 16)
        dut.u_ram.memory[i*4+1].value = int(w[4:6], 16)
        dut.u_ram.memory[i*4+2].value = int(w[2:4], 16)
        dut.u_ram.memory[i*4+3].value = int(w[0:2], 16)
    dut.u_ram.use_little_endian.value = 1

    cocotb.start_soon(Clock(dut.clk, 10, unit="ns").start())
    
    dut.rst.value = 1
    await RisingEdge(dut.clk)
    dut.rst.value = 0
    await RisingEdge(dut.clk)
    
    for _ in range(40):
        await RisingEdge(dut.clk)
        
    # Check that VGA RAM received the write
    # The VGA RAM is inside: dut.u_vga.u_ram.memory
    pixel_0 = int(dut.u_vga.u_ram.memory[0].value)
    assert pixel_0 == 227, f"VGA RAM pixel 0 was {pixel_0}, expected 227 (0xE3)"

@cocotb.test()
async def test_vga_timing(dut):
    """Test that VGA HSYNC signals are generated."""
    cocotb.start_soon(Clock(dut.clk, 10, unit="ns").start())

    dut.rst.value = 1
    for _ in range(10):
        await RisingEdge(dut.clk)
    dut.rst.value = 0
    
    # Run for 5000 system clocks
    hsync_dropped = False
    for i in range(5000):
        await RisingEdge(dut.clk)
        if dut.vga_hsync.value == 0:
            hsync_dropped = True
            break
            
    assert hsync_dropped, "HSYNC never pulsed low!"

@cocotb.test()
async def test_vga_vsync(dut):
    """Test that VGA VSYNC signal is generated."""
    cocotb.start_soon(Clock(dut.clk, 10, unit="ns").start())
    
    dut.rst.value = 1
    for _ in range(10):
        await RisingEdge(dut.clk)
    dut.rst.value = 0
    
    clk_25mhz = dut.u_vga.clk_25mhz
    
    # VSYNC happens when v_count >= (480 + 10) = 490
    while int(dut.u_vga.u_timing.v_count.value) < 490:
        await RisingEdge(clk_25mhz)
        
    # Due to 1 cycle delay for sync signals in vga_controller, wait one more
    await RisingEdge(clk_25mhz)
    assert int(dut.vga_vsync.value) == 0, "VSYNC should be active (low) at line 490"
    
    while int(dut.u_vga.u_timing.v_count.value) < 492:
        await RisingEdge(clk_25mhz)
        
    await RisingEdge(clk_25mhz)
    assert int(dut.vga_vsync.value) == 1, "VSYNC should be inactive (high) at line 492"

@cocotb.test()
async def test_vga_pixel_output_and_scaling(dut):
    """Test that VGA outputs correct scaled RGB colors and blanks outside window."""
    cocotb.start_soon(Clock(dut.clk, 10, unit="ns").start())
    
    dut.rst.value = 1
    for _ in range(10):
        await RisingEdge(dut.clk)
    dut.rst.value = 0
    
    # Write a test pattern directly to VGA RAM to speed up simulation
    # Pixel (0,0) in fb is at memory[0]. We set it to 0xE3 (111_000_11 -> R=7, G=0, B=3)
    # RGB444 should be R=F (1111), G=0 (0000), B=F (1111)
    dut.u_vga.u_ram.memory[0].value = 0xE3
    
    # Pixel (1,0) in fb is at memory[1]. We set it to 0x1C (000_111_00 -> R=0, G=7, B=0)
    # RGB444 should be R=0, G=F, B=0
    dut.u_vga.u_ram.memory[1].value = 0x1C
    
    # Pixel (0,1) in fb is at memory[128]. We set it to 0x03 (000_000_11 -> R=0, G=0, B=3)
    # RGB444 should be R=0, G=0, B=F
    dut.u_vga.u_ram.memory[128].value = 0x03
    
    clk_25mhz = dut.u_vga.clk_25mhz
    
    # Fast forward to just before the display window
    while int(dut.u_vga.u_timing.pixel_y.value) < 112:
        await RisingEdge(clk_25mhz)
        
    while int(dut.u_vga.u_timing.pixel_x.value) < 191:
        await RisingEdge(clk_25mhz)
        
    # Now at X=191, Y=112. Output should be 0 because we are outside window.
    await RisingEdge(clk_25mhz)
    assert int(dut.vga_r.value) == 0, "Outside window should be blanked"
    
    # Next cycle, X=192 (inside window!). fb_x=0, fb_y=0
    await RisingEdge(clk_25mhz)
    assert int(dut.vga_r.value) == 0xF, f"Expected R=0xF, got {int(dut.vga_r.value)}"
    assert int(dut.vga_g.value) == 0x0, f"Expected G=0x0, got {int(dut.vga_g.value)}"
    assert int(dut.vga_b.value) == 0xF, f"Expected B=0xF, got {int(dut.vga_b.value)}"
    
    # Due to 2x scaling, X=193 should also be fb_x=0, fb_y=0
    await RisingEdge(clk_25mhz)
    assert int(dut.vga_r.value) == 0xF, f"Expected R=0xF, got {int(dut.vga_r.value)}"
    
    # X=194 should be fb_x=1, fb_y=0. Color is 0x1C (R=0, G=F, B=0)
    await RisingEdge(clk_25mhz)
    assert int(dut.vga_r.value) == 0x0
    assert int(dut.vga_g.value) == 0xF
    assert int(dut.vga_b.value) == 0x0
    
    # X=195 should be fb_x=1, fb_y=0
    await RisingEdge(clk_25mhz)
    assert int(dut.vga_g.value) == 0xF
    
    # Check Y scaling (Y=113 should still be fb_y=0)
    while int(dut.u_vga.u_timing.pixel_y.value) < 113:
        await RisingEdge(clk_25mhz)
    while int(dut.u_vga.u_timing.pixel_x.value) < 192:
        await RisingEdge(clk_25mhz)
        
    await RisingEdge(clk_25mhz)
    assert int(dut.vga_r.value) == 0xF, f"Y scaling failed, R={int(dut.vga_r.value)}"
    
    # Check Y=114 (fb_y=1). fb_x=0 -> Color 0x03 (R=0, G=0, B=F)
    while int(dut.u_vga.u_timing.pixel_y.value) < 114:
        await RisingEdge(clk_25mhz)
    while int(dut.u_vga.u_timing.pixel_x.value) < 192:
        await RisingEdge(clk_25mhz)
        
    await RisingEdge(clk_25mhz)
    assert int(dut.vga_r.value) == 0x0
    assert int(dut.vga_g.value) == 0x0
    assert int(dut.vga_b.value) == 0xF

@cocotb.test()
async def test_vga_mmio_boundaries(dut):
    """Test CPU writes to the boundaries of VGA RAM (0x2000 and 0x5FFF)."""
    prog = [
        "lui x1, 2",        # x1 = 0x2000
        "addi x2, x0, 170", # x2 = 0xAA
        "sb x2, 0(x1)",     # mem[0x2000] = 0xAA
        
        "lui x1, 6",        # x1 = 0x6000
        "addi x1, x1, -1",  # x1 = 0x5FFF
        "addi x2, x0, 85",  # x2 = 0x55
        "sb x2, 0(x1)",     # mem[0x5FFF] = 0x55
        "nop", "nop", "nop", "nop", "nop"
    ]
    
    hex_prog = RISCVAssembler.assemble_to_hex(prog)
    for i, w in enumerate(hex_prog):
        dut.u_ram.memory[i*4].value = int(w[6:8], 16)
        dut.u_ram.memory[i*4+1].value = int(w[4:6], 16)
        dut.u_ram.memory[i*4+2].value = int(w[2:4], 16)
        dut.u_ram.memory[i*4+3].value = int(w[0:2], 16)
    dut.u_ram.use_little_endian.value = 1

    cocotb.start_soon(Clock(dut.clk, 10, unit="ns").start())
    
    dut.rst.value = 1
    for _ in range(10):
        await RisingEdge(dut.clk)
    dut.rst.value = 0
    
    for _ in range(60):
        await RisingEdge(dut.clk)
        
    assert int(dut.u_vga.u_ram.memory[0].value) == 0xAA, "Failed to write to 0x2000"
    assert int(dut.u_vga.u_ram.memory[16383].value) == 0x55, "Failed to write to 0x5FFF"

def test_vga_controller():
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
        module="test_vga_controller",
        extra_args=["-Wno-fatal"],
        includes=[os.path.abspath(os.path.join(os.path.dirname(__file__), ".."))]
    )