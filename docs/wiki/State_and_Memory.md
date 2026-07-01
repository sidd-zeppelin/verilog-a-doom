# State and Memory: The Computer's Scratchpad

Up until now, we've only talked about logic gates and the Arithmetic Logic Unit (ALU). These are called **Combinational Logic**. 

Combinational logic is like a pipe with water flowing through it. If you put a `5` and a `3` into the Adder, it instantly spits out an `8`. But the moment you disconnect the `5` and `3`, the `8` vanishes! Combinational logic has absolute zero memory. It cannot remember what it did a microsecond ago.

To build a real computer, we need **Sequential Logic**. We need circuits that can "latch" onto data and hold it forever, even after the input wires are disconnected. This is called **State**.

## The Register File: The Processor's Pockets

Imagine you are trying to solve a massive algebra problem, but you aren't allowed to use a piece of paper. You have to hold every single number in your head. You'd probably forget a number and fail pretty quickly. 

The processor has the exact same problem. When it calculates a number using the ALU, it needs a place to write that number down so it can use it later. 

The **Register File** (`src/register_file.v`) is a bank of 32 ultra-fast memory slots built directly into the core of the processor. Think of it like 32 tiny pockets. Each pocket can hold exactly one 64-bit number. 

Because we built a RISC-V processor, there are a few absolute, unbreakable rules for these pockets:
1. **Two Hands out, One Hand in:** The Register File has *two* read ports and *one* write port. This means the processor can reach into two pockets at the exact same time to grab numbers (like getting `A` and `B` for the ALU), but it can only put *one* calculated answer back into a pocket per clock tick.
2. **The Magic Zero Pocket:** Register 0 (`x0`) is cursed. It is permanently, physically hardwired to the number `0`. If you try to write the number `99` into Register 0, the Register File completely ignores you. If you read from Register 0, you will *always* get `0`. This sounds useless, but it's actually an incredibly clever trick that compilers use to easily clear data or ignore results!

Look at the Verilog code below. Notice how data is only saved on the `posedge clk` (the exact millisecond the clock ticks), and how `rd != 5'b00000` literally prevents the processor from overwriting Register 0:

```verilog
    // Synchronous write and reset
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            // When the reset button is pressed, empty all pockets
            for (i = 0; i < 32; i = i + 1) begin
                registers[i] <= 64'h0000_0000_0000_0000;
            end
        end else if (reg_write && rd != 5'b00000) begin
            // Save the data, but ONLY if the destination pocket (rd) is NOT pocket zero
            registers[rd] <= write_data;
        end
    end
```

## Program Memory: The Recipe Book

If the Register File holds the ingredients (data), the **Instruction Memory** (`src/instruction_mem.v`) holds the recipe. 

When you write code in C or Assembly, it gets compiled into thousands of 32-bit binary instructions. We flash these instructions into a Read-Only Memory (ROM) chip. Every time the processor's metronome (the clock) ticks, it asks the Instruction Memory: *"What is the 32-bit instruction at line 14?"* The memory spits the instruction out, and the processor executes it.

## Data Memory: The Giant Warehouse

If the Register File is the processor's pockets, the **Data Memory** (`src/data_mem.v`) is a gigantic Amazon warehouse across the street.

The processor only has 32 pockets. DOOM has thousands of variables, monster coordinates, and pixel colors. They will never fit in 32 pockets! 

When the processor runs out of pocket space, it packages up the data and sends it across the street to the Data Memory. This is called a **Store** operation. 
When it needs that data back to do math on it, it sends a request to the warehouse, which ships the data back into one of the 32 pockets. This is called a **Load** operation. 

Loading and Storing takes time, which is why processors try to keep their most frequently used data in their pockets (the Register File) for as long as possible.

[Next: Timing and Logic](Timing_and_Logic.md)
