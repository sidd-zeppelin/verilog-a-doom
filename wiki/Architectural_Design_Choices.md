# Architectural Design Choices: The Clever Hacks

Building a processor requires making hundreds of small decisions. While many textbooks outline the basics of pipelining, real-world engineering requires making clever hacks to save money, improve speed, or make the code easier to write. 

Here are the unique design choices we made that make this processor special.

## 1. The Smart Traffic Cop (`id_uses_rs2`)

A standard Traffic Cop (Hazard Detection Unit) is a bit dumb. If it sees a Load instruction followed by *any* instruction, it immediately throws up a Stop Sign and stalls the pipeline just to be safe. 

But what if the next instruction is an `addi` (Add Immediate)? 
`addi` doesn't actually need to read data from the second pocket (`rs2`). It gets its second number directly from the instruction's embedded constant! The Traffic Cop shouldn't stall for no reason!

We built a **Smart Decoder**. It intercepts the instruction and evaluates: *"Does this instruction ACTUALLY need the second pocket?"* 
It passes a special `id_uses_rs2` wire to the Traffic Cop. If this wire is `0`, the Traffic Cop completely ignores the hazard and lets the assembly line keep moving at top speed!

## 2. The `ALUOp = 11` Hack

In most RISC-V designs, both R-Type (register math) and I-Type (constant math) instructions use the exact same `ALUOp = 10` code from the main Control Unit. 

However, this creates a massive headache when trying to decode shift instructions like `srai` (Shift Right Arithmetic Immediate). For `srai`, the flag that tells the ALU to do an *Arithmetic* shift instead of a *Logical* shift is hidden inside the scrambled immediate constant, NOT in the standard `funct7` location!

Instead of writing a massive, complicated if-statement to handle this one edge case, we created a hack. We explicitly assigned a unique, completely custom `ALUOp = 11` to all I-Type instructions. 
This elegantly signals the downstream ALU Control micromanager: *"Hey! Look at the immediate bits for the shift flag, not the standard bits!"*

## 3. Parallel-Compute-Then-Select

As mentioned in the ALU chapter, trying to build a complex, intertwined ALU that shares logic gates to save electricity is a nightmare to debug. 

We opted for a purely structural parallel-compute design. All 10 functional units (the adders, shifters, and logic gates) execute their math on the data simultaneously. A giant multiplexer simply throws away the 9 incorrect answers. 
This makes the code incredibly easy to read and made adding the M-Extension infinitely easier.

## 4. WB-to-ID Register File Bypass

A very subtle hazard exists in the Register File. 
What happens if the Write Back stage tries to write the number `99` into Pocket 5 at the exact same millisecond that the Decode stage tries to read from Pocket 5? 

Because our Register File only saves data when the clock ticks, the read happens *before* the write actually lands. The Decode stage would read the old garbage data!

Instead of wasting a clock cycle stalling the pipeline, we added an **Explicit Bypass Wire** inside the Decode stage. If the read pocket perfectly matches the write pocket, the Decode stage intercepts the `99` straight off the incoming wire from the Write Back stage and uses it immediately, bypassing the physical pocket entirely!

## 5. Automatic Endianness Detection

Different computer companies (like Intel and Apple) store bytes of data backwards from each other. This is called Big-Endian vs Little-Endian. 

If we compiled DOOM on a Windows PC and tried to run it on a Mac processor, the game would crash immediately because all the numbers would be backwards. 

Instead of hardcoding our processor, we built an **Automatic Scanner** directly into the Instruction Memory. 
When the processor boots up, it scans the first 256 bytes of the loaded program. It tries assembling the bytes forwards and backwards, and counts which way produces the most valid RISC-V instructions. It then locks in the winning configuration forever! Our processor can run DOOM compiled from any computer on earth.

## 6. Static Predict-Not-Taken Policy

When the processor sees a Branch (like an `if` statement), it has to guess whether it will jump or not. If it guesses wrong, it has to flush the pipeline.

We implemented a strict **"Predict-Not-Taken"** policy. The processor is an extreme pessimist. It *always* assumes branches will fail, and just keeps fetching the very next line of code. 

If the branch is actually taken, the processor panics, flushes the pipeline, and incurs a 2-cycle penalty. While we could build a complex AI "Branch Predictor" to guess correctly 90% of the time, this simple static policy drastically simplifies the hardware while maintaining perfectly fine performance for standard game logic.
