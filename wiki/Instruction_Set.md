# Instruction Set Architecture: The Vocabulary

If the processor is a brain, the **Instruction Set Architecture (ISA)** is its vocabulary. 

Just like humans speak English or Spanish, our processor speaks **RISC-V**. RISC stands for "Reduced Instruction Set Computer". The philosophy is simple: instead of giving the processor a dictionary of 10,000 complicated words, we give it a tiny vocabulary of about 40 extremely simple words (Instructions). By combining these 40 simple words in clever ways, a programmer can make the processor do literally anything—even run a 3D game like DOOM!

Every single instruction is exactly 32 bits long (a string of 32 ones and zeros). The processor looks at these bits and groups them into different "Formats" or "Types" so it knows how to read them.

## Base Memory Operations
The processor supports the fundamental 64-bit doubleword load and store operations.
| Instruction | Name | Operation | Description |
| :--- | :--- | :--- | :--- |
| `ld` | Load Doubleword | `rd = mem[rs1 + imm]` | Loads 64 bits from memory into the destination register. |
| `sd` | Store Doubleword | `mem[rs1 + imm] = rs2` | Stores 64 bits from a source register into memory. |

## R-Type Instructions (Register to Register)
The processor supports all ten fundamental register to register mathematical operations. These operations take two source registers (`rs1` and `rs2`) and save the result into a destination register (`rd`).

| Instruction | Name | Operation | Description |
| :--- | :--- | :--- | :--- |
| `add` | Add | `rd = rs1 + rs2` | Adds two registers together. |
| `sub` | Subtract | `rd = rs1 - rs2` | Subtracts `rs2` from `rs1`. |
| `and` | Bitwise AND | `rd = rs1 & rs2` | Performs a logical AND on every bit. |
| `or` | Bitwise OR | `rd = rs1 | rs2` | Performs a logical OR on every bit. |
| `xor` | Bitwise XOR | `rd = rs1 ^ rs2` | Performs a logical Exclusive OR on every bit. |
| `sll` | Shift Left Logical | `rd = rs1 << rs2[5:0]` | Shifts bits left, filling with zeros. |
| `srl` | Shift Right Logical | `rd = rs1 >> rs2[5:0]` | Shifts bits right, filling with zeros. |
| `sra` | Shift Right Arith. | `rd = rs1 >> rs2[5:0]` | Shifts bits right, filling with the sign bit to preserve negative numbers. |
| `slt` | Set Less Than | `rd = (rs1 < rs2) ? 1 : 0` | Sets `rd` to 1 if `rs1` is less than `rs2` (signed comparison). |
| `sltu` | Set Less Than Unsigned | `rd = (rs1 < rs2) ? 1 : 0` | Sets `rd` to 1 if `rs1` is less than `rs2` (unsigned comparison). |

## I-Type Instructions (Immediate Operations)
The processor supports all nine immediate mathematical operations. Instead of using a second register, these instructions perform math using a sign-extended constant number (`imm`) embedded directly inside the instruction.

| Instruction | Name | Operation | Description |
| :--- | :--- | :--- | :--- |
| `addi` | Add Immediate | `rd = rs1 + imm` | Adds a constant to a register. |
| `andi` | AND Immediate | `rd = rs1 & imm` | Performs a logical AND with a constant. |
| `ori` | OR Immediate | `rd = rs1 | imm` | Performs a logical OR with a constant. |
| `xori` | XOR Immediate | `rd = rs1 ^ imm` | Performs a logical XOR with a constant. |
| `slli` | Shift Left Logic Imm. | `rd = rs1 << imm[5:0]` | Shifts bits left by a constant amount. |
| `srli` | Shift Right Logic Imm. | `rd = rs1 >> imm[5:0]` | Shifts bits right by a constant amount, filling with zeros. |
| `srai` | Shift Right Arith. Imm. | `rd = rs1 >> imm[5:0]` | Shifts bits right by a constant, filling with the sign bit. |
| `slti` | Set Less Than Imm. | `rd = (rs1 < imm) ? 1 : 0` | Sets `rd` to 1 if `rs1` is less than the constant (signed). |
| `sltiu` | Set Less Than Unsigned Imm. | `rd = (rs1 < imm) ? 1 : 0` | Sets `rd` to 1 if `rs1` is less than the constant (unsigned). |

## B-Type Instructions (Branches)
The processor supports all six RISC V branch conditions. If the condition is true, the program counter jumps to `PC + imm`. This allows the compiler to write highly optimized loops and decision trees.

| Instruction | Name | Condition | Description |
| :--- | :--- | :--- | :--- |
| `beq` | Branch if Equal | `rs1 == rs2` | Jumps if the two registers are exactly equal. |
| `bne` | Branch if Not Equal | `rs1 != rs2` | Jumps if the two registers are different. |
| `blt` | Branch if Less Than | `rs1 < rs2` | Jumps if `rs1` is less than `rs2` (signed). |
| `bge` | Branch if Greater/Equal | `rs1 >= rs2` | Jumps if `rs1` is greater than or equal to `rs2` (signed). |
| `bltu` | Branch if Less Than Unsigned | `rs1 < rs2` | Jumps if `rs1` is less than `rs2` (unsigned). |
| `bgeu` | Branch if Greater/Equal Unsigned| `rs1 >= rs2` | Jumps if `rs1` is greater than or equal to `rs2` (unsigned). |

## M-Type Instructions (Hardware Math)
To support 3D rendering in DOOM, we implemented the RV64M extension. These instructions utilize the multi-cycle hardware multiplier and divider.

| Instruction | Name | Operation | Description |
| :--- | :--- | :--- | :--- |
| `mul` | Multiply | `rd = (rs1 * rs2)[63:0]` | Computes the lower 64 bits of the product. |
| `mulh` | Multiply High | `rd = (rs1 * rs2)[127:64]` | Computes the upper 64 bits of the signed product. |
| `mulhsu` | Multiply High Signed/Unsigned | `rd = (rs1 * rs2)[127:64]` | Upper 64 bits of signed `rs1` times unsigned `rs2`. |
| `mulhu` | Multiply High Unsigned | `rd = (rs1 * rs2)[127:64]` | Computes the upper 64 bits of the unsigned product. |
| `div` | Divide | `rd = rs1 / rs2` | Signed integer division. |
| `divu` | Divide Unsigned | `rd = rs1 / rs2` | Unsigned integer division. |
| `rem` | Remainder | `rd = rs1 % rs2` | Signed integer remainder. |
| `remu` | Remainder Unsigned | `rd = rs1 % rs2` | Unsigned integer remainder. |

## U-Type Instructions (Upper Immediate)
The processor supports the two fundamental U-Type instructions used for building massive 32-bit constants and calculating memory addresses.

| Instruction | Name | Operation | Description |
| :--- | :--- | :--- | :--- |
| `lui` | Load Upper Immediate | `rd = imm << 12` | Loads a 20-bit constant into the top 20 bits of the register. |
| `auipc` | Add Upper Immediate to PC | `rd = PC + (imm << 12)` | Calculates a PC-relative memory address. |

## J-Type Instructions (Jumps)
The processor supports both unconditional jumps, which are essential for function calls and returning from functions.

| Instruction | Name | Operation | Description |
| :--- | :--- | :--- | :--- |
| `jal` | Jump and Link | `rd = PC + 4; PC = PC + imm` | Jumps to a relative address and saves the return address in `rd`. |
| `jalr` | Jump and Link Register | `rd = PC + 4; PC = rs1 + imm` | Jumps to an absolute address (calculated from a register) and saves the return address. |

By supporting this expansive subset of the RV64IM architecture, the processor is able to efficiently execute the millions of instructions generated by a C compiler for a game engine.
[Next: Control and Decoding](Control_and_Decoding.md)
