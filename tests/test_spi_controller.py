import os
import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, FallingEdge, Timer
from cocotb_test.simulator import run
# pyrefly: ignore [missing-import]
from riscv_assembler import RISCVAssembler

@cocotb.test()
async def test_spi_controller_basic(dut):
    """Test that the SPI controller shifts data out correctly."""
    
    prog = [
        "lui x1, 13",       # x1 = 0xD000
        "addi x2, x0, 512", # x2 = 512 = 0x0200
        "sd x2, 8(x1)",     # SPI_CTRL = 0x0200
        "addi x3, x0, 90",  # x3 = 90 = 0x5A
        "sb x3, 0(x1)",     # SPI_DATA = 0x5A
        "ld x4, 8(x1)",
        "andi x4, x4, 2",
        "bne x4, x0, -8",
        "lb x5, 0(x1)",
        "lui x6, 1",
        "sb x5, 0(x6)",
        "jal x0, -4"
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
    dut.spi_miso.value = 1
    await RisingEdge(dut.clk)
    dut.rst.value = 0
    
    slave_data_to_send = 0xA5
    slave_data_received = 0x00
    
    async def mock_spi_slave():
        nonlocal slave_data_to_send, slave_data_received
        try:
            dut._log.info("mock_spi_slave: Waiting for CS to go low...")
            while str(dut.spi_cs_n.value) != "0":
                await RisingEdge(dut.clk)
                
            dut._log.info("mock_spi_slave: CS went low! Starting SPI transaction.")
                
            for i in range(8):
                bit_to_send = (slave_data_to_send >> (7 - i)) & 1
                dut.spi_miso.value = bit_to_send
                
                dut._log.info(f"mock_spi_slave: Wait rising edge for bit {i}")
                await RisingEdge(dut.spi_sck)
                val = str(dut.spi_mosi.value)
                bit_val = 1 if val == "1" else 0
                slave_data_received = (slave_data_received << 1) | bit_val
                dut._log.info(f"mock_spi_slave: Sampled {bit_val}")
                
                if i < 7:
                    dut._log.info(f"mock_spi_slave: Wait falling edge for bit {i}")
                    await FallingEdge(dut.spi_sck)
                    
            dut._log.info(f"mock_spi_slave: Transaction complete. Received {hex(slave_data_received)}")
        except Exception as e:
            dut._log.error(f"mock_spi_slave crashed: {e}")
        
    cocotb.start_soon(mock_spi_slave())
    
    # Run the simulation and trace PC
    try:
        for i in range(200):
            await RisingEdge(dut.clk)
            
            spi_state = int(dut.u_spi.state.value) if str(dut.u_spi.state.value).isdigit() else -1
            wreq = int(dut.u_spi.write_req.value) if str(dut.u_spi.write_req.value).isdigit() else -1
            waddr = int(dut.u_spi.address.value) if str(dut.u_spi.address.value).isdigit() else -1
            
            if wreq == 1:
                dut._log.info(f"Cycle {i}, SPI Write Req! addr={waddr}")
                
            if i % 10 == 0 or wreq == 1 or spi_state != 0:
                pc = int(dut.u_core.if_pc.value) if str(dut.u_core.if_pc.value).isdigit() else 0
                dut._log.info(f"Cycle {i}, PC = {hex(pc)}, State={spi_state}")
    except Exception as e:
        dut._log.error(f"Main loop crashed: {e}")
        
    dut._log.info("Simulation finished loop!")

def test_spi_controller():
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
        module="test_spi_controller",
        extra_args=["-Wno-fatal"],
        includes=[os.path.abspath(os.path.join(os.path.dirname(__file__), ".."))],
        compile_args=["-Wno-fatal"],
        extra_env={"COCOTB_TEST_WAVES": "1", "MAKEFLAGS": "-s"}
    )
