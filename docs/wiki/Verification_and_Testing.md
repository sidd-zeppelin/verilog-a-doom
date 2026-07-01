# Verification and Testing: Trust but Verify

When you write software (like Python or C), you can hit "Run", see an error, change a line of code, and hit "Run" again in five seconds. 

Hardware engineering does not work like this. If you design a processor, burn it into physical silicon, and then realize you made a tiny mistake in the `add` instruction, you just wasted a million dollars. 

You must prove that your hardware is 100% mathematically perfect *before* you ever build it. We do this using **Verification and Testing**.

## The Automated Factory (Python + cocotb)

We built an entire automated testing factory (`tests/test_pipeline.py`) using Python and a tool called `cocotb`. 

Instead of sitting at a computer and manually checking math equations, our Python factory does this automatically:
1. It writes thousands of random Assembly instructions.
2. It translates them into binary.
3. It creates a **Golden Model**. This is a fake software version of our processor running entirely in Python. It asks the Golden Model: *"If I run this code, what should the final answer be?"*
4. It feeds the exact same binary code into our Verilog hardware simulation.
5. It runs the simulation for thousands of clock cycles.
6. It pulls the final answers out of the hardware's pockets (the Register File) and compares them to the Golden Model's answers.

If even a single bit is different, the factory alarms go off!

Our processor currently passes an absolutely brutal suite of **107 automated test cases** with zero failures.

| Category | What it Tests | Why it Matters |
| :--- | :--- | :--- |
| **Basic Math** | Simple Addition/Subtraction | Proves the base ALU works. |
| **Data Forwarding** | The Time Machine | Proves data teleports correctly to prevent traffic jams. |
| **Load-Use Stalls** | The Traffic Cop | Proves the pipeline freezes instead of reading garbage data from the warehouse. |
| **Branch Flushes** | The Reset Button | Proves the processor can successfully delete incorrect instructions when it loops. |
| **Extreme Hazards** | Complete Chaos | Tests what happens when the processor jumps, stalls, and forwards data all on the exact same clock cycle. |

## Waveform Analysis: X-Ray Vision

Sometimes, a test fails, and you don't know why. You know the final answer was `7` instead of `8`, but you don't know which specific logic gate broke.

We use **VCD Waveforms** and a tool called `GTKWave`. 

This is literally an X-Ray machine for the processor. It allows us to freeze time and look at the electrical voltage (1 or 0) of every single microscopic wire inside the processor at any given nanosecond! 

We generated **28 targeted X-Ray scenarios**. We used these to visually prove that the Traffic Cop throws the stop sign on the exact right clock cycle, and that the Time Machine intercepts data before it hits the Register File. 

Without this X-Ray vision, building the Multi-Cycle M-Extension would have been impossible!

[Next: Architectural Design Choices](Architectural_Design_Choices.md)
