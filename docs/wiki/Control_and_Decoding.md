# Control and Decoding: The Traffic Cop

We have all these amazing components: The ALU calculator, the Register File pockets, the Memory warehouse, and the massive Multiplexer train-switches connecting them all together. 

But if they are all just sitting there, how do they know *what* to do? How does the processor read a random 32-bit string of binary (like `00000000010100010000000010110011`) and magically know that it means "Add 5 to Register 1"?

The answer is the **Control Unit** (`src/control_unit.v`). 

Think of the Control Unit as a hyper-vigilant Traffic Cop standing in the middle of a busy intersection. 

## The Control Signals (Traffic Lights)

When the 32-bit instruction enters Stage 2 (Decode), the Traffic Cop looks exclusively at the last 7 bits (the `opcode`). Based *only* on those 7 bits, it flips a bunch of red and green traffic lights for the entire rest of the processor.

These traffic lights are called **Control Signals**. They travel alongside the data down the assembly line. Here is the secret decoder ring the Traffic Cop uses:

| Instruction Type | ALUOp | RegWrite | MemRead | MemWrite | ALUSrc | Branch |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| **R-type** (e.g., `add`) | `10` | 1 | 0 | 0 | 0 | 0 |
| **I-type** (e.g., `addi`) | `11` | 1 | 0 | 0 | 1 | 0 |
| **Load** (e.g., `ld`) | `00` | 1 | 1 | 0 | 1 | 0 |
| **Store** (e.g., `sd`) | `00` | 0 | 0 | 1 | 1 | 0 |
| **Branch** (e.g., `beq`) | `01` | 0 | 0 | 0 | 0 | 1 |

Let's look at the `Store` row as an example. If the instruction is a `sd` (Store Doubleword), it means we want to take data from our pockets and put it in the warehouse. Look at the traffic lights the cop flips:
* `MemWrite = 1`: The cop yells at the Data Memory warehouse to open its loading dock!
* `RegWrite = 0`: The cop locks the Register File so we don't accidentally overwrite our pockets!
* `ALUSrc = 1`: The cop throws a track switch so the ALU adds the memory address offset instead of another register.

## ALU Control: The Micro-Manager

The main Traffic Cop is great for general directions, but it doesn't know the specifics. It doesn't know the difference between `add` and `sub`—it just knows they are both "R-type" math instructions. 

It passes a 2-bit code called `ALUOp` down the assembly line to a micromanager called the **ALU Control** (`src/alu_control.v`). 

The ALU Control looks at the `ALUOp`, and then looks at the middle bits of the 32-bit instruction (`funct3` and `funct7`). It combines these together to generate a highly specific 4-bit PIN code. 

It hands this 4-bit PIN code directly to the giant Multiplexer inside the ALU to select the exact right math answer:

| 4-bit PIN Code | Math Selected | Behind the Scenes (Verilog Module) |
| :--- | :--- | :--- |
| `0000` | ADD | Selects the 64-bit Ripple Carry Adder output |
| `1000` | SUB | Selects the Adder output (but tells it to flip the B bits!) |
| `0111` | AND | Selects the 64-bit bitwise AND gate output |
| `0001` | SLL | Selects the 6-stage Barrel Shifter (Shift Left) |

## The Immediate Generator: The Scrambler

In code, you often type things like `x1 = x2 + 5`. The number `5` is a constant. We don't want to waste time loading `5` from the memory warehouse, so the compiler actually hides the binary code for `5` *inside* the 32-bit instruction itself! This is called an **Immediate**.

The problem? To make everything fit neatly into 32 bits, the compiler slices the Immediate into tiny pieces and scrambles them all over the instruction. 

The **Immediate Generator** (`src/immediate_generator.v`) is a dedicated circuit that acts like a puzzle solver. It looks at the 32-bit instruction, extracts all the scrambled pieces of the constant, glues them back together in the correct order, and stretches it out to 64 bits so the ALU can do math with it!

[Next: Instruction Set Architecture](Instruction_Set.md)
