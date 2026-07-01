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
# Copy bootloader to instructions.txt so Verilator loads it
cp software/bootloader/bootloader.hex instructions.txt
# Run the pygame frontend
uv run python software/emulator/play.py
