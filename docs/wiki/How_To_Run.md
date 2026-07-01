# How to Run the Code

This project simulates a full RISC-V System-on-Chip (SoC) capable of running C programs and games (like DOOM). You can run this project in two primary ways: via the automated Python test suite, or interactively using our high-speed Emulator.

## Prerequisites & Dependencies

To run the repository, you need the following tools installed on your system:

1. **Python 3.10+**: Used for our verification framework and emulator frontend.
2. **`uv` Package Manager** (or standard `pip`): To install Python dependencies.
3. **Verilator**: The high-performance C++ compiler for SystemVerilog (version 5.0+ recommended).
4. **RISC-V GCC Toolchain**: Specifically `riscv64-unknown-elf-gcc`, required to compile the C game code (`doom.c` and `bootloader.c`) into RISC-V machine code.
5. **Make**: For building the software and C++ emulator.

## 1. Installing Python Dependencies

All of our Python dependencies (like `cocotb`, `pytest`, and `pygame`) are managed via standard Python packaging. To install them, run:

```bash
uv pip install -e .
# OR if you are using standard pip:
pip install -r requirements.txt
```

## 2. Compiling the Software (The Game)

Before you can run the CPU, you need a program for it to execute. The software is located in the `software/` directory.

1. **Compile the Bootloader**:
   ```bash
   make -C software/bootloader
   ```
   *This compiles `bootloader.c` into `bootloader.hex`, which Verilator loads into the simulated Instruction RAM.*

2. **Compile the Game (Doom)**:
   ```bash
   make -C software/doom
   ```
   *This compiles `doom.c` into `doom.bin`, which the Bootloader will load over SPI from our simulated SD Card.*

## 3. Running the Interactive Emulator (Play the Game!)

The fastest and most fun way to run the SoC is via the **Interactive Emulator**. We built a custom frontend that uses Verilator to simulate the hardware at blazing speeds, and Pygame to display the VGA output and capture keyboard inputs.

Simply execute the automated run script from the root of the project:

```bash
./play.sh
```

- **What it does**: It compiles the SoC into C++, copies the `bootloader.hex` into the correct spot, and launches the Pygame window.
- **Controls**: Use **WASD** or **Arrow Keys** to move, **Space** to Fire, and **E** to interact.

## 4. Running the Automated Test Suite

If you are modifying the processor's Verilog source code and want to verify that you haven't broken the pipeline, you should run the `cocotb` test suite.

Run the tests using `pytest` and specify Verilator as the simulation backend:

```bash
SIM=verilator uv run pytest tests/
```

- Tests cover individual pipeline features (Hazards, ALUs) and end-to-end integration (SD Card Bootloading, Interrupts, etc).
- Check the `tests/` directory for individual test scripts. You can run a specific test by appending the file path (e.g., `uv run pytest tests/test_alu.py`).
