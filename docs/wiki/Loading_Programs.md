# Loading Programs: Talking to the Machine

If the Instruction Set Architecture (ISA) is the processor's vocabulary, how do we actually *speak* to it? 

If you shouted "Add 5 and 3!" at the silicon chip, nothing would happen. The processor only understands raw, 32-bit binary numbers. For example, if you want it to add two registers together, you literally have to feed it the electrical signal `00000000010100010000000010110011`. 

Humans are terrible at reading or writing a million ones and zeros. It would take you years to write a game like DOOM by hand like this.

## Assembly Language: The Middleman

To fix this, computer scientists invented **Assembly Language**. It is a slightly-more-human-readable version of binary. Instead of typing ones and zeros, you type a mnemonic (a short word) like `add x1, x2, x3`. 

But the processor still doesn't speak Assembly. It only speaks binary. So we need a translator.

In our testing environment, we built a custom Python tool called the **Micro Assembler** (`tests/riscv_assembler.py`). This tool acts as a robotic translator. It reads our human-readable `add x1, x2, x3` text file and automatically translates it into the exact hex codes and binary strings the processor needs. 

Here is a snippet of that python code showing how it pieces the binary formats together for load instructions like `ld` (Load Doubleword):

```python
        # The Assembler looks for the words 'lb', 'lw', 'ld', etc.
        if mnem in ['lb', 'lh', 'lw', 'ld', 'lbu', 'lhu', 'lwu']:
            # It expects a format like: ld x1, 8(x2)
            rd = args[0]
            offset, rs1_part = args[1].split('(')
            rs1 = rs1_part.strip(')')
            
            # It looks up the exact 3-bit binary code (funct3) for the word
            funct3 = {'lb':0, 'lh':1, 'lw':2, 'ld':3, 'lbu':4, 'lhu':5, 'lwu':6}[mnem]
            
            # It glues all the binary bits together and spits out a 32-bit hex code!
            return cls.encode_i(int(offset, 0), rs1, funct3, rd, 0x03)
```

## How DOOM is Made: The Compiler

Writing a massive 3D game like DOOM in Assembly would still take a lifetime. Modern developers write games in higher-level languages like **C** or **C++**. 

To run DOOM on our custom processor, we follow a massive translation chain:
1. We take the open-source C code for the game (words like `if (player_health < 0) { player_die(); }`).
2. We run a program called a **Compiler**. The compiler's only job is to translate the C code into millions of RISC-V Assembly instructions (`add`, `bne`, `ld`).
3. The compiler then runs the Assembler (just like our Python script) to translate those millions of Assembly instructions into raw binary and hex files.

### Flashing the Brain
Finally, we have a massive file full of hex numbers (called `instructions.txt`). How do we get it *inside* the processor?

When our processor boots up, we use a special Verilog hardware command called `$readmemh` (Read Memory Hex). This command acts like a giant vacuum cleaner. It sucks all the hex numbers out of the text file and permanently burns them into the Instruction Memory (`src/instruction_mem.v`). 

```verilog
    // When the processor turns on (initial)...
    initial begin
        // Suck the hex codes from instructions.txt directly into the 'mem' array 
        $readmemh("instructions.txt", mem);
        
        // Clean up any empty pockets we didn't use by stuffing them with zeros
        for (i = 0; i < `IMEM_SIZE; i = i + 1) begin
            if (mem[i] === 8'hx)
                mem[i] = 8'h00;
        end
    end
```

Once loaded, the Clock starts ticking. The Program Counter asks for the first instruction, the pipeline starts moving, the math is calculated, the pixels are drawn to the screen, and you are playing DOOM!

[Next: System On Chip](System_On_Chip.md)
