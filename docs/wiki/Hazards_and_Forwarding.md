# Hazards and Forwarding: Traffic Control

The assembly line (Pipeline) is incredibly fast, but it creates massive traffic problems. When five instructions are running simultaneously on the same assembly line, they can accidentally trip over each other. 

In processor design, these traffic accidents are called **Hazards**.

## Data Hazards: The "I Need That!" Problem

Imagine two instructions back-to-back:
1. `add x1, x2, x3` (Add x2 and x3, save the answer into pocket x1)
2. `sub x4, x1, x5` (Subtract x5 from x1, save the answer into pocket x4)

Notice the problem? The second instruction desperately needs the math answer that the first instruction is calculating (`x1`). 

But remember the assembly line! The first instruction won't finish writing its answer into the Register File until **Stage 5 (Write Back)**. However, the second instruction is right behind it on the belt, and it needs to read that answer back in **Stage 2 (Decode)**. 

If we don't do anything, the second instruction will reach into pocket `x1` too early, pull out stale, incorrect garbage data, and the math will be completely wrong!

### The Solution: Forwarding (The Time Machine)
To fix this, we built a **Forwarding Unit** (`src/hazards/forwarding_unit.v`). 

Think of the Forwarding Unit as an incredibly fast mail-delivery tube. It looks ahead down the assembly line. If it sees that Stage 4 (Memory) or Stage 5 (Write Back) is currently holding the *exact* math answer that Stage 3 (Execute) needs right now, it intercepts that answer. Instead of waiting for it to be written to the Register File, it teleports the answer backwards in time directly into the ALU!

Here is the exact Verilog code that controls the time machine. It checks if the Memory stage intends to write to a register (`mem_RegWrite`), makes sure it isn't the cursed zero register (`mem_rd != 5'b0`), and checks if that destination register perfectly matches the source register the Execute stage is asking for (`mem_rd == ex_rs1`):

```verilog
    always @(*) begin
        ForwardA = 2'b00;

        // Distance-1 Forwarding: Teleport from Memory Stage to Execute Stage
        if (mem_RegWrite && (mem_rd != 5'b0) && (mem_rd == ex_rs1)) begin
            ForwardA = 2'b01;
            
        // Distance-2 Forwarding: Teleport from Write Back Stage to Execute Stage
        end else if (wb_RegWrite && (wb_rd != 5'b0) && (wb_rd == ex_rs1)) begin
            ForwardA = 2'b10;
        end
    end
```

## Load-Use Hazards: The "It's Not Here Yet!" Problem

Sometimes, the Forwarding time machine isn't fast enough. 

If an instruction is a `ld` (Load), it is pulling data out of the massive Amazon warehouse (the Data Memory). That data physically does not arrive from the warehouse until the very end of **Stage 4 (Memory)**. 

If the very next instruction needs that data for math in **Stage 3 (Execute)**, we have a fatal problem. We can't teleport the data backwards because the data *literally does not exist yet*. The warehouse hasn't delivered it!

To solve this, we use the **Hazard Detection Unit** (`src/hazards/hazard_detection_unit.v`). This acts like a traffic cop. When it sees a Load-Use hazard about to happen, it throws up a stop sign and **Stalls** the pipeline. 
It freezes the Fetch and Decode stages for exactly one clock cycle, forcing the Execute stage to sit empty. This 1-cycle delay gives the warehouse enough time to deliver the data, and then the Forwarding Unit safely teleports it.

## Control Hazards: The "Wrong Turn" Problem

Branch instructions (`beq`, `bne`) make decisions. They say: *"If A equals B, skip the next 10 lines of code and jump somewhere else."*

The problem is that the processor doesn't actually do the math to realize it needs to jump until **Stage 3 (Execute)**. 

Because the assembly line never stops moving, by the time we realize we need to jump, the processor has already blindly fetched two wrong instructions into Stage 1 and Stage 2!

### The Solution: The Flush
When the Execute stage finally realizes a branch is true (`branch_taken = 1`), it screams back down the assembly line to hit the reset button. 

The processor **Flushes** the pipeline. It completely deletes the two incorrect instructions that sneaked into Stage 1 and Stage 2, replacing them with `NOP` (No Operation) bubbles. It then forces the Program Counter to jump to the correct line of code.

[Next: The M Extension](The_M_Extension.md)
