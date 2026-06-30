# The 'M' Extension: Hardware Math

The original DOOM game (released in 1993) is famous because it actually **predates 3D Graphics Cards (GPUs)!** 

It doesn't use a graphics card at all. Instead, it uses a genius math trick called "Raycasting" to draw 3D walls using purely 2D math. This means the main CPU has to do millions of multiplication and division calculations every single second to figure out what color each pixel on the screen should be.

If we rely on our base processor to do multiplication using slow `add` loops (adding `100` fifty times to calculate `100 * 50`), the game will be a slideshow. To fix this, we implemented the **RISC-V 'M' Extension**. We built a massive hardware multiplier directly into the Execute stage of the pipeline!

## The Speed Limit (Multi-Cycle Execution)

Hardware multipliers are incredibly complex circuits made of thousands of logic gates. 

Remember our Timing Contract? Electricity travels fast, but not instantly. If we tried to force data to travel through thousands of multiplier gates in a single clock cycle, the signal wouldn't make it to the end before the clock ticked again. The processor would capture garbage data. The only way to fix that would be to drastically slow down the entire system clock frequency for the whole processor, punishing every single instruction just because multiplication is slow.

Instead, we designed a **Multi-Cycle Hardware Multiplier** (`src/multdiv_64b.v`). 

Think of it as a heavy-machinery station on our assembly line. It cannot finish its job in one cycle. It acts as an independent state machine that crunches the math over 3 discrete clock cycles: `CALC1`, `CALC2`, and `CALC3`.

## Stopping the Conveyor Belt

Because the Multiplier takes multiple cycles to produce an answer, the rest of the processor cannot just blindly keep moving! If the assembly line keeps pushing instructions forward while the heavy machinery is stuck, they will crash into each other.

We had to completely rewire the `hazard_detection_unit.v` (the Traffic Cop) to support a global pipeline stall.

When a `mul` or `div` instruction enters the Execute stage:
1. The `multdiv_64b` block wakes up and immediately flips on a bright red `busy` warning light.
2. The Traffic Cop sees the `busy` signal and throws the emergency brakes on the entire processor:
   - **PC Stall**: The Program Counter is frozen. Stop fetching new blueprints!
   - **IF/ID Stall**: The Decode stage is frozen.
   - **ID/EX Stall**: The Execute stage itself is frozen, holding the `mul` instruction perfectly steady on the belt so the Multiplier has a stable input.
   - **EX/MEM Flush**: Because the Execute stage is stuck, we don't want the downstream Memory stage to accidentally execute the same instruction 3 times in a row! So, the Traffic Cop continuously injects `NOP` (blank) bubbles into the Memory stage while the Multiplier is busy.

### The Timing Synchronization Bug
This stall mechanism is highly sensitive to exact clock synchronization. Originally, we designed the multiplier to have a 4th `DONE` state. However, we discovered a fatal synchronization bug: dropping the `busy` signal during the `DONE` state caused the Traffic Cop to lift the pipeline locks **one cycle too early**. Because the locks lifted early, the very next instruction in the Decode stage would slide into the Execute stage and instantly overwrite the `mul` pipeline registers right before the `mul` answer could be safely transferred to the Memory stage.

By refactoring the logic into a purely deterministic 3-cycle calculation (`CALC1` -> `CALC2` -> `CALC3`) and holding the `busy` signal until the exact moment `CALC3` evaluates to false, the multiplier maintains the lock precisely long enough for the final result to safely cross the boundary into the Memory stage pipeline register.

[Next: Control and Decoding](Control_and_Decoding.md)
