import os
import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, Timer
from cocotb_test.simulator import run
from riscv_assembler import RISCVAssembler

@cocotb.test()
async def test_csr_timer_interrupt(dut):
    """Test that a timer interrupt occurs and MRET returns correctly."""
    
    # We will write a program that:
    # 1. Sets mtvec to the interrupt handler address (e.g. 0x40)
    # 2. Sets mtimecmp to 50
    # 3. Enables MIE in mstatus and MTIE in mie
    # 4. Enters an infinite loop
    # 5. Handler: writes 0x42 to memory (to signal it ran) and executes mret.
    # We will verify memory gets 0x42.

    # 0xE000 = 57344 = 0xE000
    
    # 0x0000_0000:
    prog = [
        # Setup mtvec = 0x40 (address 64)
        "addi x1, x0, 64", 
        "csrrw x0, 0x305, x1", # mtvec = x1
        
        # Setup mtimecmp = 50
        "lui x2, 14",      # 14 = 0xE. x2 = 0xE000
        "addi x3, x0, 50",
        "sd x3, 0(x2)",    # clint[0] (mtimecmp) = 50
        
        # Enable mie.MTIE (bit 7)
        "addi x4, x0, 128", 
        "csrrw x0, 0x304, x4", # mie = 128
        
        # Enable mstatus.MIE (bit 3)
        "addi x5, x0, 8",
        "csrrw x0, 0x300, x5", # mstatus = 8
        
        # Infinite loop
        # loop: j loop
        "jal x0, -4",      # PC = PC - 4 (jump to itself)
        
        # NOPs to pad to 0x40
        "nop", "nop", "nop", "nop", "nop"
    ]
    
    # Ensure handler is at 0x40 (16 words = 64 bytes)
    while len(prog) < 16:
        prog.append("nop")
        
    # Handler (at 0x40):
    prog.extend([
        "lui x6, 1",       # x6 = 0x1000 (RAM)
        "addi x7, x0, 66", # x7 = 0x42
        "sb x7, 0(x6)",    # mem[0x1000] = 0x42
        
        # Set mtimecmp extremely high so we don't trap again immediately
        "addi x8, x0, -1", # x8 = 0xFFFFFFFF
        "lui x2, 14",
        "sd x8, 0(x2)",
        
        "mret",            # return to loop
        "nop", "nop", "nop"
    ])
    
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
    
    # Wait 200 cycles. The interrupt should fire at mtime=50.
    for _ in range(200):
        await RisingEdge(dut.clk)
        
    # Check RAM
    # RAM is inside dut.u_ram.memory
    ram_val = int(dut.u_ram.memory[0].value)
    assert ram_val == 0x42, f"Handler did not run or write failed. RAM[0] = {hex(ram_val)}"

def test_interrupts():
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
        module="test_interrupts",
        extra_args=["-Wno-fatal"],
        includes=[os.path.abspath(os.path.join(os.path.dirname(__file__), ".."))]
    )
