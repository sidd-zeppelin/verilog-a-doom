# Hardware Math Extension (`RV64IM`)

The original base architecture of this processor is `RV64I` (Integer operations). To run DOOM, which relies heavily on a 3D raycasting engine, the processor must execute millions of multiplications and divisions every second. 

Calculating multiplication using standard `ADD` loops in software takes hundreds of clock cycles per operation, completely stalling the game's framerate. To solve this, we implemented the **M-Extension** (Hardware Multiply/Divide) natively into our pipeline.

## The Hardware Math Unit (`multdiv_64b.v`)
The M-Extension hardware sits directly inside the **Execute (EX)** stage of the pipeline alongside the standard ALU. It intercepts instructions with the `OP` opcode and a specific `funct7` value (`0x01`).

### Shift-Add Algorithm
Rather than building a massively parallel combinational array multiplier (which consumes enormous physical die area and restricts maximum clock frequency), we opted for a deterministic **Multi-Cycle Shift-Add Multiplier**.

1. **State Machine**: The multiplier operates via an internal state machine, iterating 64 times (for 64-bit operands).
2. **Execution**: On every clock cycle, it checks the Least Significant Bit (LSB) of the multiplier. If the bit is `1`, it adds the multiplicand to an accumulator. It then shifts the multiplier right and the multiplicand left.
3. **Completion**: After 64 cycles, the result is fully computed.

### Pipeline Synchronization & Stalls
Because a standard pipeline assumes every instruction takes exactly 1 cycle in the EX stage, the hardware multiplier requires stalling the entire pipeline while it crunches the numbers.

When an `MUL` instruction enters EX:
1. The multiplier asserts a `busy` signal (`multdiv_busy = 1`).
2. The `hazard_detection_unit.v` reads this `busy` signal and instantly asserts `pc_stall`, `if_id_stall`, `id_ex_stall`, and flushes the `ex_mem_reg`. 
3. This creates a safe "bubble" behind the multiplier, freezing the front-half of the processor while the math completes.
4. Once the state machine finishes, it drops the `busy` signal. The pipeline resumes seamlessly, passing the calculated product into the MEM and WB stages.
