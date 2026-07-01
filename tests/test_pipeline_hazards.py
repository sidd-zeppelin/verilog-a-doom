import os
import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge
from cocotb_test.simulator import run
from riscv_assembler import RISCVAssembler

async def run_program(dut, prog, cycles=30):
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

    for cycle in range(cycles):
        await RisingEdge(dut.clk)
        x1 = int(dut.u_core.u_id.u_regfile.registers[1].value)
        x2 = int(dut.u_core.u_id.u_regfile.registers[2].value)
        x3 = int(dut.u_core.u_id.u_regfile.registers[3].value)
        x4 = int(dut.u_core.u_id.u_regfile.registers[4].value)
        pc = int(dut.u_core.u_pc.pc_current.value)
        print(f"Cycle {cycle:2d}: PC={pc:4d} | x1={x1:4d} | x2={x2:4d} | x3={x3:4d} | x4={x4:4d}")

@cocotb.test()
async def test_raw_hazard_ex_forwarding(dut):
    """Test EX-to-EX forwarding."""
    # addi x1, x0, 10
    # add  x2, x1, x1 -> x2 should be 20 (x1 forwarded from EX)
    prog = [
        "addi x1, x0, 10",
        "add x2, x1, x1",
        "nop", "nop", "nop", "nop", "nop"
    ]
    await run_program(dut, prog)
    assert int(dut.u_core.u_id.u_regfile.registers[2].value) == 20, "EX-to-EX forwarding failed"

@cocotb.test()
async def test_raw_hazard_mem_forwarding(dut):
    """Test MEM-to-EX forwarding."""
    # addi x1, x0, 10
    # nop
    # add x2, x1, x0 -> x2 should be 10 (x1 forwarded from MEM)
    prog = [
        "addi x1, x0, 10",
        "nop",
        "add x2, x1, x0",
        "nop", "nop", "nop", "nop"
    ]
    await run_program(dut, prog)
    assert int(dut.u_core.u_id.u_regfile.registers[2].value) == 10, "MEM-to-EX forwarding failed"

@cocotb.test()
async def test_load_use_stall(dut):
    """Test load-use hazard stall and forwarding."""
    # addi x1, x0, 0x100  # Setup memory address
    # addi x2, x0, 42     # Setup data
    # sw x2, 0(x1)        # Store data
    # lw x3, 0(x1)        # Load data back into x3
    # add x4, x3, x3      # Load-Use hazard! x4 should be 84 (42+42)
    prog = [
        "lui x1, 1",
        "addi x2, x0, 42",
        "sw x2, 0(x1)",
        "lw x3, 0(x1)",
        "add x4, x3, x3",
        "nop", "nop", "nop", "nop", "nop", "nop"
    ]
    await run_program(dut, prog, cycles=40)
    assert int(dut.u_core.u_id.u_regfile.registers[4].value) == 84, "Load-Use stall/forwarding failed"

@cocotb.test()
async def test_control_hazard_branch_taken(dut):
    """Test branch taken flushes."""
    # addi x1, x0, 1
    # addi x2, x0, 1
    # beq x1, x2, 8     # Branch taken (+8 means skip next two instructions)
    # addi x3, x0, 99   # Should be flushed
    # addi x4, x0, 99   # Should be flushed
    # addi x5, x0, 42   # Target
    prog = [
        "addi x1, x0, 1",
        "addi x2, x0, 1",
        "beq x1, x2, 12", # PC+12 from beq
        "addi x3, x0, 99",
        "addi x4, x0, 99",
        "addi x5, x0, 42",
        "nop", "nop", "nop", "nop", "nop"
    ]
    await run_program(dut, prog)
    assert int(dut.u_core.u_id.u_regfile.registers[3].value) == 0, "Instruction 1 not flushed"
    assert int(dut.u_core.u_id.u_regfile.registers[4].value) == 0, "Instruction 2 not flushed"
    assert int(dut.u_core.u_id.u_regfile.registers[5].value) == 42, "Branch target not reached"

@cocotb.test()
async def test_control_hazard_branch_not_taken(dut):
    """Test branch not taken does NOT flush."""
    # addi x1, x0, 1
    # addi x2, x0, 2
    # beq x1, x2, 12
    # addi x3, x0, 42   # Should NOT be flushed
    prog = [
        "addi x1, x0, 1",
        "addi x2, x0, 2",
        "beq x1, x2, 12",
        "addi x3, x0, 42",
        "nop", "nop", "nop", "nop", "nop"
    ]
    await run_program(dut, prog)
    assert int(dut.u_core.u_id.u_regfile.registers[3].value) == 42, "Instruction falsely flushed"

@cocotb.test()
async def test_control_hazard_jump(dut):
    """Test jal jump flushes."""
    # jal x1, 12        # Jump, x1 gets PC+4
    # addi x2, x0, 99   # Should be flushed
    # addi x3, x0, 99   # Should be flushed
    # addi x4, x0, 42   # Target
    prog = [
        "jal x1, 12",
        "addi x2, x0, 99",
        "addi x3, x0, 99",
        "addi x4, x0, 42",
        "nop", "nop", "nop", "nop", "nop"
    ]
    await run_program(dut, prog)
    assert int(dut.u_core.u_id.u_regfile.registers[2].value) == 0, "Jump instruction 1 not flushed"
    assert int(dut.u_core.u_id.u_regfile.registers[3].value) == 0, "Jump instruction 2 not flushed"
    assert int(dut.u_core.u_id.u_regfile.registers[4].value) == 42, "Jump target not reached"
    assert int(dut.u_core.u_id.u_regfile.registers[1].value) == 4, "jal rd value incorrect"

def test_pipeline_hazards():
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
        module="test_pipeline_hazards",
        extra_args=["-Wno-fatal"],
        includes=[os.path.abspath(os.path.join(os.path.dirname(__file__), ".."))]
    )
