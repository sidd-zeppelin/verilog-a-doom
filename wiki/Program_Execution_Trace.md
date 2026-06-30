# Program Execution Trace: The Assembly Line in Action

We have talked about assembly lines, traffic cops, and time machines. But how does it all actually look when it runs together? 

To demonstrate how the five-stage pipeline, hazard detection, and data forwarding all choreograph a perfect dance, let's walk through the execution of a real program cycle by cycle.

## The Sum Array Program

This simple Assembly program uses a loop to add four numbers (`10, 20, 30, 40`) that have been stored in the Data Memory warehouse. It forces the processor to use every single trick we've built.

```assembly
# --- Phase 1: Initialize the Loop ---
addi x5, x0, 0     # Set sum to 0 (Pocket 5)
addi x6, x0, 0     # Set memory address to 0 (Pocket 6)
addi x7, x0, 32    # Set limit to 32 (4 items * 8 bytes each)

# --- Phase 2: The Loop Body ---
ld   x8, 0(x6)     # LOAD: Get memory at the address, put in Pocket 8
add  x5, x5, x8    # MATH: Add Pocket 8 to the Sum <-- WARNING: HAZARD!
addi x6, x6, 8     # MATH: Move the address forward by 8 bytes
bne  x6, x7, -12   # BRANCH: If address is NOT 32, jump back to the LOAD!

# --- Phase 3: After the Loop ---
addi x9, x5, 0     # Copy the final sum to Pocket 9
```

## Cycle by Cycle Trace

The table below shows exactly where each instruction lives on the assembly line during the first iteration of the loop.

| Cycle | Station 1 (Fetch) | Station 2 (Decode) | Station 3 (Execute) | Station 4 (Memory) | Station 5 (Write Back) | Notes |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| **12** | `ld x8` | `addi x7` | `addi x6` | `addi x5` | *(empty)* | Phase 1 finishes. The `ld` enters the building. |
| **13** | `add x5` | `ld x8` | `addi x7` | `addi x6` | `addi x5` | The `ld` reaches the Decoder. |
| **14** | `addi x6` | `add x5` | `ld x8` | `addi x7` | `addi x6` | **DANGER!** The `add` is in Decode, and it desperately needs `x8`. But `ld` hasn't fetched it yet! |
| **15** | `addi x6` | `add x5` | *(STALLED!)* | `ld x8` | `addi x7` | **The Traffic Cop hits the Brakes!** The assembly line is stalled. A blank bubble is pushed into Execute. |
| **16** | `bne x6` | `addi x6` | `add x5` | *(STALLED!)* | `ld x8` | The `ld` finishes getting the data from the warehouse. **The Time Machine activates!** It teleports `x8` backwards directly into the `add`! |
| **17** | `ld x8` | `bne x6` | `addi x6` | `add x5` | *(STALLED!)* | The `bne` branch evaluates. It realizes we need to loop back! |
| **18** | `addi x9` | *(FLUSHED!)* | *(FLUSHED!)* | `addi x6` | `add x5` | **The Flush!** The processor realizes it fetched the wrong instructions. It violently deletes them from the belt! |
| **19** | `ld x8` | *(empty)* | *(empty)* | *(FLUSHED!)* | `addi x6` | The loop successfully jumps back and restarts. |

### The Dance Broken Down
1. **Cycle 14**: The Traffic Cop (Hazard Detection Unit) looks at the belt and realizes `add` needs `x8`, but `ld` hasn't actually fetched it from the warehouse yet.
2. **Cycle 15**: The Traffic Cop slams the brakes. The `add` is forced to wait in the Decode station for an extra second, wasting a cycle (the stall bubble).
3. **Cycle 16**: The `ld` reaches Write Back. The Time Machine (Forwarding Unit) intercepts the `x8` data and passes it directly to the `add` instruction which finally moved into Execute.
4. **Cycle 17**: The `bne` branch evaluates in the Execute stage. The processor realizes it needs to loop back, but it has already speculatively fetched the next two instructions (`ld` and `addi x9`).
5. **Cycle 18**: The processor violently flushes the pipeline, erasing the two incorrect instructions, and correctly forces the Program Counter to jump back to the top of the loop.

This incredibly complex, tightly choreographed dance happens **fifty million times a second** to run DOOM!

[Next: Verification and Testing](Verification_and_Testing.md)
