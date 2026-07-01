# Pipeline Stages: The Assembly Line

If you were building a car entirely by yourself, you would build the engine, attach the wheels, paint it, and then drive it out of the garage. Only *then* could you start building the second car. This is called a **Single-Cycle Processor**. It's incredibly slow because while you are painting the car, your wrench is sitting on the floor, completely unused. 

To solve this, Henry Ford invented the assembly line. Station 1 builds the engine. Station 2 attaches the wheels. Station 3 paints it. 

As soon as Station 1 finishes the first engine, it passes it to Station 2 and *immediately* starts building the second engine. By the time the first car is being painted, there are three cars on the belt simultaneously. 

This is exactly how our processor works! It's called **Pipelining**, and you can see the entire assembly line wired together in `src/top_pipeline.v`.

## The Five Stations

We divide the work of running a single line of code into five distinct stages. 

### Stage 1: Instruction Fetch (IF)
*(The Blueprint Reader)*
This stage (`src/pipeline_if.v`) is responsible for fetching the next instruction from memory. It holds a special counter called the Program Counter (PC). Every clock cycle, it sends the counter value to the Instruction Memory, grabs the 32-bit binary instruction, and calculates `PC + 4` to point to the next instruction in line.

### Stage 2: Instruction Decode (ID)
*(The Translator)*
Once we have the 32-bit instruction, it looks like pure gibberish (e.g., `00000000010100010000000010110011`). The decode stage (`src/pipeline_id.v`) slices this binary string apart into chunks to figure out what it means. 
* It extracts the `opcode` and wakes up the Control Unit to figure out what math to do.
* It extracts the register numbers (`rs1` and `rs2`) and reaches into the Register File (the pockets) to pull out the actual data needed for the math.

### Stage 3: Execute (EX)
*(The Calculator)*
Now that we have our data and know what to do, we hand it off to the Execute stage (`src/pipeline_ex.v`). This is where the giant Arithmetic Logic Unit (ALU) lives. It instantly crunches the numbers. If the instruction is asking to jump to a different part of the code (a Branch), this stage also compares the numbers to decide if the jump should happen.

### Stage 4: Memory (MEM)
*(The Warehouse Worker)*
Most instructions (like `add` or `sub`) skip this stage completely. But if the instruction is a Load or a Store, this stage (`src/pipeline_mem.v`) does the heavy lifting. It talks to the massive Data Memory warehouse to either save data into it or pull data out of it.

### Stage 5: Write Back (WB)
*(The Secretary)*
The final stage (`src/pipeline_wb.v`) takes the final answer and writes it safely back into the Register File scratchpad. The answer might be the math calculated in the Execute stage, or it might be the data loaded from the Memory stage. Once it is written back, the instruction is officially retired and leaves the assembly line.

## Pipeline Registers: The Conveyor Belt Walls

If we just wired these five stages directly together, the data would instantly smash into each other. The ALU would be trying to add numbers while the Decode stage is swapping them out!

To prevent this, we place massive physical concrete barriers between every single stage. These are called **Pipeline Registers** (found in `src/pipeline_registers.v`). 

There are four walls: `if_id_reg`, `id_ex_reg`, `ex_mem_reg`, and `mem_wb_reg`. 

These walls are wired directly to the Clock (the metronome we talked about earlier). When the clock ticks, the walls instantly open, swallow the data from the previous stage, and slam shut. They hold that data perfectly steady for the next stage to use, completely shielding it from whatever chaos is happening behind it on the assembly line.

Here is the exact code for the `id_ex_reg` wall. Notice how it grabs all the signals and holds them steady inside new `ex_` wires:

```verilog
    always @(posedge clk or posedge rst) begin
        if (rst || flush) begin
            ex_RegWrite  <= 0; // If flushed, wipe the data clean
        end else if (!stall) begin
            // On the clock tick, grab the data from Decode (id) 
            // and pass it to Execute (ex)
            ex_RegWrite  <= id_RegWrite; 
            ex_MemRead   <= id_MemRead;
            ex_rs1_data  <= id_rs1_data;
        end
    end
```

Pipelining makes our processor 5 times faster, but it introduces a massive new problem. What happens if Station 2 needs a part that Station 4 hasn't finished painting yet? 

[Next: Hazards and Forwarding](Hazards_and_Forwarding.md)
