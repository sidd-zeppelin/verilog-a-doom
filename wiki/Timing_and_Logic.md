# Timing and Logic: The Metronome

Imagine a marching band with a hundred musicians. If they all started playing their instruments at random speeds, it would sound like chaos. They need a conductor swinging a baton to keep everyone perfectly synchronized.

A processor has the exact same problem. Electricity travels incredibly fast, but it doesn't travel instantly. If data races through the logic gates too fast, it crashes into the next part of the processor before that part is ready. 

To solve this, we use a **Clock**. 

The Clock is an electrical signal that bounces between `1` and `0` millions of times per second. It acts like the processor's metronome. Every time the clock goes from `0` to `1` (which we call the **positive edge** or `posedge`), the processor takes one single "step" forward.

To understand how the clock controls the chaos, you must understand the difference between two types of logic.

## Combinational Logic: The Sprinters (Unclocked)

Combinational elements have no memory and do not care about the clock. As soon as you give them input, they instantly sprint to produce an output. 

Imagine water flowing through pipes. The moment you turn on the faucet (the inputs), the water rushes through the pipes (the logic gates), and comes out the other end (the output). 

In our processor, these modules are purely combinational:
1. **The Arithmetic Logic Unit (ALU)**: The moment it receives two numbers, it instantly computes the math.
2. **The Adders**: The `pc_adder_4.v` instantly calculates `PC + 4`. 
3. **The Hazard and Forwarding Units**: These act like traffic cameras. The moment they see a hazard, they instantly yell "Stop!"

Because they sprint, they cause a problem: they finish their jobs way too fast. If we let them run wild, they would constantly overwrite each other's data.

## Sequential Logic: The Toll Booths (Clocked)

To control the sprinters, we use Sequential elements. These elements are physically wired to the Clock. 

Think of sequential elements as Toll Booths with red lights. The sprinters (data from the combinational logic) run as fast as they can, but when they hit a sequential element, they crash into a closed gate. They must stand there and wait.

When the clock ticks (the `posedge`), the toll booth gate opens for exactly one microsecond, lets the data pass through, and slams shut again. 

In our processor, these elements are sequential:
1. **The Program Counter (`pc_64b.v`)**: It holds the current line of code steady until the clock ticks, then grabs the next line.
2. **The Pipeline Registers**: These are massive concrete walls we built inside the processor. They catch the math from the ALU, hold it steady, and only release it to the memory stage when the clock ticks.
3. **The Register File and Data Memory**: They only permanently save data into their pockets on the clock tick.

## The Timing Contract

The entire processor works because of one beautiful, synchronized dance called the **Timing Contract**:

1. The clock ticks. The sequential Toll Booths open and release their data.
2. The combinational Sprinters (the ALU, the Adders) grab that data and race through their logic gates.
3. The Sprinters finish their math and crash into the *next* Toll Booth down the line. They wait.
4. The clock ticks again. The Toll Booths capture the Sprinters' answers and release them to the next stage.

If the Sprinters take too long to do their math (for example, if a Multiplication circuit is too slow), they won't reach the Toll Booth before the clock ticks. This causes the processor to capture garbage data. This is why hardware engineers are obsessed with "Meeting Timing" and why complex math (like the M-Extension) forces us to stall the processor!

[Next: Pipeline Stages](Pipeline_Stages.md)
