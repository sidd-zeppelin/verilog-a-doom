# The Basics of RISC-V

Before we dive into how the silicon and logic gates work, let's understand the language we are trying to teach our processor to speak: **RISC-V**.

RISC stands for "Reduced Instruction Set Computer". The core philosophy is that a processor shouldn't try to do 1,000 complicated things. It should do 40 incredibly simple things, incredibly fast. If you want to do something complicated (like calculate a square root), you just combine a bunch of the simple instructions together!

## The 32 Pockets (Registers)

If you are doing a complex algebra problem, you use a scratchpad to hold your numbers. The processor uses **Registers**. These are 32 ultra-fast memory slots built directly into the processor core. We call them `x0` through `x31`. 

While the hardware physically treats almost all of these pockets identically, human programmers and compilers agreed on a strict set of rules (a "convention") for how to use them. This ensures that different parts of a program don't accidentally overwrite each other's data:

| Register | Name | What it's Conventionally Used For |
| :--- | :--- | :--- |
| `x0` | `zero` | **The Black Hole.** This register is physically hardwired to `0`. If you read it, you get `0`. If you write to it, the data is instantly destroyed. It's incredibly useful for clearing data or ignoring answers. |
| `x1` | `ra` | **Return Address.** If you jump to a function (like `calculate_health()`), `x1` stores the line of code you came from so the function knows how to get back to the main program when it finishes! |
| `x2` | `sp` | **Stack Pointer.** Points to a massive chunk of RAM used for temporary memory. |
| `x3` | `gp` | **Global Pointer.** Points to global variables in RAM. |
| `x4` | `tp` | **Thread Pointer.** Used in complex operating systems for multi-threading. |
| `x5` - `x7` | `t0`-`t2` | **Temporary Pockets.** Use these for quick math. If you call a function, don't expect the data to still be here when you get back. The function is allowed to overwrite these! |
| `x8` - `x9` | `s0`-`s1` | **Saved Pockets.** These are safe. If you call a function, the function is legally required to put your data back in these pockets exactly how it found it before returning. |
| `x10` - `x17` | `a0`-`a7` | **Arguments.** If you are sending data *into* a function (like sending `100` and `50` to a `multiply()` function), you put the numbers here. The function also uses `x10` to hand the final answer back to you. |
| `x18` - `x27` | `s2`-`s11` | More Saved Pockets. |
| `x28` - `x31` | `t3`-`t6` | More Temporary Pockets. |

## Slicing the 32 Bits (Instruction Formats)

Every single instruction in RISC-V is exactly 32 bits long (a string of 32 ones and zeros). 
How does the processor know if `00000000010100010000000010110011` means "Add", "Subtract", or "Jump"?

It slices the 32 bits into specific chunks. There are a few different "Formats", but the most common is the **R-Type (Register Type)** used for standard math.

Here is how an R-Type instruction is sliced up:

1. **`opcode` (Bits 0-6)**: The last 7 bits. This tells the processor the general category. For example, `0110011` means *"This is an R-Type Math operation!"*
2. **`rd` (Bits 7-11)**: The Destination Register (5 bits). This tells the processor *which* of the 32 pockets to save the final answer in. (e.g., `00001` means pocket `x1`).
3. **`funct3` (Bits 12-14)**: A 3-bit sub-category. If the opcode says "Math", `funct3 = 000` means Add/Subtract, `funct3 = 111` means AND.
4. **`rs1` (Bits 15-19)**: Source Register 1. The first pocket to read data from.
5. **`rs2` (Bits 20-24)**: Source Register 2. The second pocket to read data from.
6. **`funct7` (Bits 25-31)**: The final modifier. Since `funct3 = 000` is used for *both* Add and Subtract, `funct7` breaks the tie. If it's all zeros, the ALU Adds. If it's `0100000`, the ALU Subtracts!

By shuffling these chunks around, the processor can define completely different instruction formats (like the I-Type for constant numbers, or B-Type for branches), all while keeping the instruction exactly 32 bits long!

[Next: Basic Building Blocks](Basic_Building_Blocks.md)
