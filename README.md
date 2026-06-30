# RV64 DOOM Processor 👾

A fully custom 64-bit RISC-V (RV64IM) pipelined processor written from scratch in Verilog, designed specifically with the goal of running the classic 1993 game **DOOM** natively on bare metal.

## 🎓 Origins: From Coursework to DOOM

This project was initially born as a team project for a university course on **Introduction to Processor Architecture**. In its original form, it was a standard 5-stage pipelined RISC-V CPU capable of executing basic arithmetic and logic instructions. 

However, we decided to push the limits of what we built. We are currently extending the processor architecture into a full **System-on-Chip (SoC)** capable of executing complex C programs, interfacing with memory-mapped peripherals, and ultimately booting and running the DOOM engine entirely in hardware.

---

## ⚙️ How DOOM Works (And Why It's Hard)

Released in 1993, DOOM is famous for pioneering 3D graphics in video games. But interestingly, DOOM **predates modern 3D Graphics Processing Units (GPUs)**. 

### The Raycasting Engine
The game does not use polygons or a graphics card. Instead, the DOOM engine uses a brilliant mathematical trick called **Raycasting**. The map is actually entirely 2D (viewed from top-down). To render a frame, the CPU shoots invisible "rays" out of the player's eyes for every single vertical column of pixels on the screen. It uses trigonometry to calculate exactly where the ray hits a wall, how far away that wall is, and how tall the wall should be drawn on the screen to simulate 3D perspective.

### The Hardware Toll
Because all of this 3D rendering is faked using 2D math, the main CPU has to execute millions of **Multiplication and Division** operations every single second to figure out what color each pixel should be.

If a processor has to calculate multiplication using slow `ADD` loops, the game will run like a slideshow. To solve this, we extended our processor from standard `RV64I` to **`RV64IM`**, writing a custom, deterministic, multi-cycle **Hardware Math State Machine** into the Execute stage of our pipeline. This dedicated math hardware allows the CPU to crunch the massive number of multiplications required by the raycasting engine without stalling the entire clock frequency.

---

## 🌉 Bridging DOOM to the Hardware

Running a massive PC game on a custom Verilog processor requires bridging the gap between high-level C code and raw electrical signals. Here is how we are achieving it:

### 1. Bare-Metal Cross-Compilation
We use a stripped-down, portable version of the DOOM engine written in C (such as `doomgeneric`). Because there is no operating system (no Windows, no Linux), we use a **RISC-V GCC Cross-Compiler** (`riscv64-unknown-elf-gcc`) to compile the C code directly into raw RISC-V machine code. We extract these raw binary instructions and flash them into our processor's Instruction Memory (ROM).

### 2. Memory-Mapped I/O (MMIO)
For the game to be playable, it needs to read player inputs and draw pixels to a screen. Since our processor doesn't have an operating system to handle USB drivers or HDMI cables, we use **Memory-Mapped I/O**.

We are building a **Memory Bus** that connects the processor to the RAM, but also intercepts specific memory addresses and reroutes them to hardware peripherals:

* **Controller Input (Read):** When the C code tries to read from a specific memory address (e.g., `0x4000_0000`), the Memory Bus routes that request to a hardware controller interface. Pushing a physical button on a controller drives electrical pins high, which the processor instantly reads as data.
* **Video Output (Write):** We designate a large chunk of memory as the **Framebuffer**. When DOOM finishes rendering a frame, it writes the colors of the pixels into this memory. We will build a dedicated Video Controller (e.g., a VGA driver) that constantly scans this memory block and converts the bytes directly into RGB electrical signals for a monitor.

### 3. The System-on-Chip (SoC)
By combining the RV64IM CPU core, the Hardware Multiplier, the System Memory, the Memory Bus, and the MMIO Peripherals into a single cohesive unit, we elevate the project from a simple processor into a complete System-on-Chip capable of running one of the most famous games in history.

---

## 🛠️ Project Structure & Documentation

* `src/`: The Verilog source code for the processor and peripherals.
* `tests/`: Exhaustive Python/`cocotb` testbenches for verifying the pipeline, forwarding logic, hazards, and the ISA.
* `docs/wiki/`: In-depth educational documentation breaking down every component of the processor.

> **Want to learn how the processor works?** Check out the [Wiki](docs/wiki/Home.md) for deep dives into logic gates, the ALU, pipeline stages, hazards, and more!
