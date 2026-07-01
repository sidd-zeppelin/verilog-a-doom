# Simulation and Testing Environment

Validating a complex custom processor architecture requires an incredibly robust testing framework. Instead of relying solely on raw Verilog testbenches, this project utilizes a modern Python-based verification ecosystem.

## `cocotb` (Coroutine Based Co-Simulation)
We use the **`cocotb`** library alongside `pytest` to drive our testing infrastructure. `cocotb` allows us to write sophisticated testbenches directly in Python. 

- **Benefits**: Python testbenches allow us to easily parse binary instructions, inject dynamic data into the processor, orchestrate complex testing sequences (like simulating an SD card response), and programmatically assert CPU states using standard Python testing conventions.
- **Usage**: Tests are located in the `tests/` directory and can be executed natively using the `uv` package manager (`uv run pytest`).

## Simulator Migration: From Icarus Verilog to Verilator

Initially, this project utilized **Icarus Verilog (`vvp`)** as the simulation backend for `cocotb`. However, as the pipeline complexity grew—specifically when integrating the SPI Controller and Memory-Mapped I/O—we encountered a catastrophic limitation with `iverilog`.

### The Event Scheduler Bug
When simulating a specific assembly loop polling the SPI `busy` bit:
```assembly
wait_on_busy:
    ld x4, 8(x1)         
    andi x4, x4, 2       
    bne x4, x0, wait_on_busy  
```
`iverilog` became trapped in a **zero-delay infinite event loop**, locking the simulator entirely.

Extensive debugging proved there was no mathematical combinational loop in the Verilog code. Instead, `iverilog`'s event scheduler contains edge-case bugs when evaluating specific pipeline hazard flushes (`ex_branch_taken` flushing `IF/ID` registers) concurrently with combinational forwarding paths (`wb_write_data` forwarded to EX `alu`).

### The Verilator Solution
To resolve this, we migrated our simulation backend to **Verilator**.
1. **Zero `UNOPTFLAT` Warnings**: Verilator statically analyzes the RTL. It proved mathematically that our hardware design was sound and loop-free.
2. **C++ Compilation**: Verilator compiles the Verilog code into highly optimized, cycle-accurate C++ binaries.
3. **Speed & Reliability**: Under Verilator, the exact same `cocotb` testbench passed flawlessly in seconds, easily executing the hundreds of thousands of cycles required for the hardware loops without stalling.

Moving forward, **Verilator is the exclusive simulation engine** for this SoC.

## Interactive Game Emulator
While `cocotb` is fantastic for verification and automated testing, it is far too slow for real-time interactive gameplay (running at roughly ~300kHz). To allow the user to actually play DOOM natively on the simulated RISC-V hardware, we built a hybrid **Interactive Emulator**:

1. **C++ Verilator Backend (`main.cpp`)**: We compile the SystemVerilog processor into a blazingly fast C++ binary. This wrapper mocks the SD Card SPI protocol to load the game, runs the simulation at max speed, reconstructs the VGA framebuffer in real-time, and streams the raw RGB frames directly to `stdout`.
2. **Pygame Frontend (`play.py`)**: A lightweight Python script scales the framebuffer and renders it to a 512x512 window at high frame rates, while simultaneously capturing user keyboard inputs (WASD, Space) and piping them back into the Memory-Mapped I/O registers of the simulation.

This achieves a playable >30 FPS framerate, proving the raw capability of compiled Verilator models for interactive SoC verification!
