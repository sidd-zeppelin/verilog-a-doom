# System On Chip: Escaping the Brain

Up to this point, we have only talked about the core processor (the brain). But a brain in a jar is completely useless. It can't see anything, and it can't interact with the world. 

To play a game like DOOM, we need a screen to see the graphics and a controller to shoot the demons. 

When we take our processor brain and wire it up to external hardware (like RAM, Video Output, and Controllers) all inside a single silicon chip, we call it a **System on Chip (SoC)**. You can see how we wired our entire system together in `src/soc_top.v`.

## The Memory Bus: The Grand Highway

We can't wire the processor's output pins directly to every single device. It would be a chaotic mess of cables. Instead, we use a **Memory Bus** (`src/memory_bus.v`). 

Think of the Memory Bus as a central, high-speed data highway. The processor core sits at the top of the highway. It sends out a single request: *"I want to Load the data located at Address 0x200!"*

The Memory Bus receives this request, acts like a traffic router, looks at the address, and figures out exactly which building on the highway has that data. It drives to the building, grabs the data, and drives it back to the processor.

## Memory Mapped I/O: Tricking the Brain

How does the Memory Bus know which building to drive to? It uses a genius technique called **Memory Mapping**. 

We assign different address zones to different physical pieces of hardware. 
* **Zone 1 (Address 0x100 to 0x1FF)**: This is the actual Data Memory warehouse (the RAM). 
* **Zone 2 (Address 0x200 to 0x2FF)**: We wired this zone directly to a VGA Video Controller. 
* **Zone 3 (Address 0x00)**: We wired this exact address to the buttons on a physical game controller.

### The Magic Trick
Here is the brilliant part: **The processor has no idea what a screen or a controller is.** It is completely blind. It thinks it is just reading and writing numbers to a massive RAM chip. 

If the DOOM code wants to draw a red pixel on the screen, it executes a `sd` (Store) instruction to Address `0x200`. The processor thinks it's saving a number to RAM. But the Memory Bus intercepts the data, realizes the address is in Zone 2, and violently forces that number into the VGA cable. Magically, a red pixel appears on your monitor!

Here is the exact Verilog code from `src/soc_top.v` that handles the player's controller inputs. The processor executes a `ld` (Load) instruction asking for the data at Address `0x00`. We intercept that request and instantly inject the live, physical button states!

```verilog
    // Address 0x00 is physically mapped to the controller buttons!
    // If the processor asks for address 0x00, we trick it and give it the 'buttons' wire.
    // If it asks for any other address, we give it zeros (for now).
    assign io_read_data = (io_address == 8'h00) ? {56'b0, buttons} : 64'b0;
```

By using Memory Mapped I/O, the processor never needs to be rewritten to support new hardware. If you want to add an internet connection or a sound card, you just plug it into the Memory Bus highway, assign it a fake memory address, and the processor instantly knows how to use it!

[Next: Program Execution Trace](Program_Execution_Trace.md)
