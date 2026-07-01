#!/bin/bash

# Exit on error
set -e

echo "====================================="
echo " Building Verilog-A-Doom Emulator"
echo "====================================="

# Compile Verilog to C++
# We suppress fatal warnings because there might be some minor combinational loops or unassigned signals.
verilator -Wno-fatal -Isrc --cc src/soc_top.v --exe software/emulator/main.cpp

# Build the C++ executable
echo "Compiling C++ backend..."
make -C obj_dir -f Vsoc_top.mk Vsoc_top

echo "====================================="
echo " Starting Game Frontend"
echo "====================================="
# Build DOOM binary for RISC-V if not up to date
echo "Building DOOM binary..."
make -C software/doom

# Convert doom.elf to Verilog hex format for $readmemh
echo "Converting doom binary to hex format..."
riscv64-unknown-elf-objcopy -O verilog --verilog-data-width=1 software/doom/doom.elf instructions.txt

# Run the pygame frontend
uv run python software/emulator/play.py
