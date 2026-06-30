import os
import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge
from cocotb_test.simulator import run
from riscv_assembler import RISCVAssembler

async def run_program(dut, prog, cycles=30):
    hex_prog = RISCVAssembler.assemble_to_hex(prog)
    
    # Inject directly into memory instead of relying on readmemh which only runs once
    for i, w in enumerate(hex_prog):
        dut.u_core.u_if.u_imem.mem[i*4].value = int(w[6:8], 16)
        dut.u_core.u_if.u_imem.mem[i*4+1].value = int(w[4:6], 16)
        dut.u_core.u_if.u_imem.mem[i*4+2].value = int(w[2:4], 16)
        dut.u_core.u_if.u_imem.mem[i*4+3].value = int(w[0:2], 16)

    # Force little endian mode
    dut.u_core.u_if.u_imem.use_little_endian.value = 1

    cocotb.start_soon(Clock(dut.clk, 10, unit="ns").start())
    
    dut.rst.value = 1
    await RisingEdge(dut.clk)
    dut.rst.value = 0
    await RisingEdge(dut.clk)
    for cycle in range(cycles):
        await RisingEdge(dut.clk)
        x1 = int(dut.u_core.u_id.u_regfile.registers[1].value)
        x2 = int(dut.u_core.u_id.u_regfile.registers[2].value)
        x3 = int(dut.u_core.u_id.u_regfile.registers[3].value)
        x4 = int(dut.u_core.u_id.u_regfile.registers[4].value)
        pc = int(dut.u_core.u_pc.pc_current.value)
        print(f"Cycle {cycle:2d}: PC={pc:4d} | x1={x1:4d} | x2={x2:4d} | x3={x3:4d} | x4={x4:4d}")

@cocotb.test()
async def test_r_type_instructions(dut):
    """Test all R-type instructions."""
    prog = [
        "addi x1, x0, 15",  # x1 = 15
        "addi x2, x0, 3",   # x2 = 3
        "add x3, x1, x2",   # x3 = 18
        "sub x4, x1, x2",   # x4 = 12
        "sll x5, x1, x2",   # x5 = 15 << 3 = 120
        "slt x6, x1, x2",   # x6 = 0 (15 < 3 is false)
        "slt x7, x2, x1",   # x7 = 1 (3 < 15 is true)
        "xor x8, x1, x2",   # x8 = 15 ^ 3 = 12
        "srl x9, x1, x2",   # x9 = 15 >> 3 = 1
        "or x10, x1, x2",   # x10 = 15 | 3 = 15
        "and x11, x1, x2",  # x11 = 15 & 3 = 3
        "nop", "nop", "nop", "nop", "nop"
    ]
    await run_program(dut, prog, cycles=40)
    
    reg = dut.u_core.u_id.u_regfile.registers
    assert int(reg[3].value) == 18, "ADD failed"
    assert int(reg[4].value) == 12, "SUB failed"
    assert int(reg[5].value) == 120, "SLL failed"
    assert int(reg[6].value) == 0, "SLT (false) failed"
    assert int(reg[7].value) == 1, "SLT (true) failed"
    assert int(reg[8].value) == 12, "XOR failed"
    assert int(reg[9].value) == 1, "SRL failed"
    assert int(reg[10].value) == 15, "OR failed"
    assert int(reg[11].value) == 3, "AND failed"

@cocotb.test()
async def test_i_type_instructions(dut):
    """Test I-type logic instructions."""
    prog = [
        "addi x1, x0, 15",
        "xori x2, x1, 3",   # x2 = 15 ^ 3 = 12
        "ori x3, x1, 16",   # x3 = 15 | 16 = 31
        "andi x4, x1, 7",   # x4 = 15 & 7 = 7
        "slli x5, x1, 2",   # x5 = 15 << 2 = 60
        "srli x6, x1, 1",   # x6 = 15 >> 1 = 7
        "nop", "nop", "nop", "nop", "nop"
    ]
    await run_program(dut, prog)
    reg = dut.u_core.u_id.u_regfile.registers
    assert int(reg[2].value) == 12, "XORI failed"
    assert int(reg[3].value) == 31, "ORI failed"
    assert int(reg[4].value) == 7, "ANDI failed"
    assert int(reg[5].value) == 60, "SLLI failed"
    assert int(reg[6].value) == 7, "SRLI failed"

@cocotb.test()
async def test_memory_instructions(dut):
    """Test memory access instructions (load/store)."""
    prog = [
        "lui x1, 1",         # Base address (RAM starts at 0x1000 = 4096)
        "addi x2, x0, 42",
        "sw x2, 4(x1)",      # mem[0x1004] = 42
        "lw x3, 4(x1)",      # x3 = 42
        "nop", "nop", "nop", "nop", "nop"
    ]
    await run_program(dut, prog, cycles=40)
    assert int(dut.u_core.u_id.u_regfile.registers[3].value) == 42, "LW/SW failed"

@cocotb.test()
async def test_u_type_instructions(dut):
    """Test U-type instructions."""
    prog = [
        "lui x1, 0x12345",  # x1 = 0x12345000
        "auipc x2, 0x1000", # x2 = PC + 0x1000000. PC is 4 for auipc. So x2 = 0x1000004
        "nop", "nop", "nop", "nop", "nop"
    ]
    await run_program(dut, prog)
    reg = dut.u_core.u_id.u_regfile.registers
    assert int(reg[1].value) == 0x12345000, "LUI failed"
    assert int(reg[2].value) == 0x1000004, "AUIPC failed"

@cocotb.test()
async def test_m_type_instructions(dut):
    """Test M-type hardware math instructions."""
    prog = [
        "addi x1, x0, 10",
        "addi x2, x0, 5",
        "mul x3, x1, x2",    # x3 = 10 * 5 = 50
        "div x4, x1, x2",    # x4 = 10 / 5 = 2
        "rem x5, x1, x2",    # x5 = 10 % 5 = 0
        "addi x6, x0, 13",
        "div x7, x6, x2",    # x7 = 13 / 5 = 2
        "rem x8, x6, x2",    # x8 = 13 % 5 = 3
        "nop", "nop", "nop", "nop", "nop", "nop", "nop", "nop"
    ]
    # Because M-extension instructions stall the pipeline for 4 cycles each,
    # we need more clock cycles for this program to finish.
    await run_program(dut, prog, cycles=60)
    
    reg = dut.u_core.u_id.u_regfile.registers
    assert int(reg[3].value) == 50, "MUL failed"
    assert int(reg[4].value) == 2, "DIV failed"
    assert int(reg[5].value) == 0, "REM failed"
    assert int(reg[7].value) == 2, "DIV failed (remainder truncated)"
    assert int(reg[8].value) == 3, "REM failed (non-zero)"

def test_isa_exhaustive():
    src_dir = os.path.abspath(os.path.join(os.path.dirname(__file__), "..", "src"))
    run(
        verilog_sources=[
            os.path.join(src_dir, "timescale.v"), 
            os.path.join(src_dir, "soc_top.v"),
            os.path.join(src_dir, "top_pipeline.v"),
            os.path.join(src_dir, "memory_bus.v")
        ],
        toplevel="soc_top",
        module="test_isa_exhaustive",
        includes=[os.path.abspath(os.path.join(os.path.dirname(__file__), ".."))]
    )
