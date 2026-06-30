import os
import cocotb
from cocotb.triggers import Timer
from cocotb_test.simulator import run

def to_unsigned(val, bits=64):
    return val & ((1 << bits) - 1)

def to_signed(val, bits=64):
    u = to_unsigned(val, bits)
    if u & (1 << (bits - 1)):
        return u - (1 << bits)
    return u

@cocotb.test()
async def alu_exhaustive_test(dut):
    """Exhaustive testing of all ALU operations."""
    test_cases = [
        # (opcode, name, a, b, expected_result)
        (0, "ADD", 10, 20, 30),
        (0, "ADD", -10, 20, 10),
        (8, "SUB", 20, 5, 15),
        (8, "SUB", 5, 20, -15),
        (7, "AND", 0b1100, 0b1010, 0b1000),
        (6, "OR",  0b1100, 0b1010, 0b1110),
        (4, "XOR", 0b1100, 0b1010, 0b0110),
        
        # Shifts
        (1, "SLL", 0x1, 4, 0x10),
        (5, "SRL", 0x10, 4, 0x1),
        (13, "SRA", -16, 2, -4),
        (13, "SRA", 16, 2, 4),
        
        # Set Less Than
        (2, "SLT", -10, 5, 1),
        (2, "SLT", 5, -10, 0),
        (2, "SLT", 10, 10, 0),
        (3, "SLTU", -10, 5, 0),  # -10 is large unsigned
        (3, "SLTU", 5, -10, 1),
        (3, "SLTU", 10, 10, 0),
    ]

    for opcode, name, a, b, expected in test_cases:
        dut.a.value = to_unsigned(a)
        dut.b.value = to_unsigned(b)
        dut.opcode.value = opcode
        
        await Timer(1, unit='ns')
        
        result_val = int(dut.result.value)
        expected_unsigned = to_unsigned(expected)
        
        assert result_val == expected_unsigned, f"{name} Failed: {a} op {b} = {result_val} (expected {expected_unsigned})"
        
        # Check Zero Flag
        expected_zero = 1 if expected_unsigned == 0 else 0
        assert int(dut.zero_flag.value) == expected_zero, f"{name} Zero Flag Failed for result {result_val}"

def test_alu():
    src_dir = os.path.abspath(os.path.join(os.path.dirname(__file__), "..", "src"))
    run(
        verilog_sources=[
            os.path.join(src_dir, "timescale.v"),
            os.path.join(src_dir, "alu.v"),
            os.path.join(src_dir, "addsub_rca_64b.v"), 
            os.path.join(src_dir, "rca_64b.v"),
            os.path.join(src_dir, "fa_1b.v"),
            os.path.join(src_dir, "and_64b.v"),
            os.path.join(src_dir, "or_64b.v"),
            os.path.join(src_dir, "xor_64b.v"),
            os.path.join(src_dir, "sll_64b.v"),
            os.path.join(src_dir, "srl_64b.v"),
            os.path.join(src_dir, "sra_64b.v"),
            os.path.join(src_dir, "slt_64b.v"),
            os.path.join(src_dir, "sltu_64b.v")
        ],
        toplevel="alu",
        module="test_alu"
    )
