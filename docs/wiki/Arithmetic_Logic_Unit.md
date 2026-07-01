# The Arithmetic Logic Unit: The Calculator

We now have single components that can add, AND, OR, and XOR data together. But a processor needs a central place to do all of its math. We need to bundle all of our basic building blocks into one giant, powerful calculator. 

This giant calculator is called the **Arithmetic Logic Unit (ALU)**. You can see how we built ours in `src/alu.v`.

## The Brain of the Calculator

Think of the ALU as a calculator with two screens for entering numbers (Input A and Input B), but it doesn't have buttons for `+`, `-`, or `*`. Instead, it has a 4-bit wire plugged into its side called the **opcode**. 

The processor sends a 4-bit binary code down this wire to tell the ALU exactly what math operation to perform. For example, if the processor sends `0000`, the ALU adds the numbers. If it sends `0111`, it performs a bitwise AND.

### The Parallel Architecture Hack

If you were building this in the real world, you might try to build a very complex, intertwined circuit that dynamically switches its logic gates to save electricity depending on what the opcode is. 

In digital design, this is incredibly hard to get right. Instead, we used a genius structural hack: **Parallel Computation**.

Inside our `alu.v` module, we literally copy-pasted every single math unit we built and wired them *all* directly to Input A and Input B. 

When you put two numbers into the ALU, **every single math operation happens simultaneously**. The Adder adds them, the XOR gate XORs them, the Shifters shift them. They all blindly compute their specific answers at the exact same time.

How do we pick the right answer? We use a giant 10-way **Multiplexer** (think of it like a giant train track switch). 

```verilog
    // A giant multiplexer that throws away 9 answers and keeps the 1 right answer
    always @(*) begin
        result = 64'b0;

        case (opcode)
            4'b0000: result = addsub_res;  // If opcode is 0000, select the Adder's answer
            4'b0001: result = sll_res;     // If opcode is 0001, select the Shifter's answer
            4'b0010: result = slt_res;
            4'b0100: result = xor_res;
            // ... and so on
        endcase
    end
```

The multiplexer looks at the 4-bit `opcode`, connects the output wire to the correct math unit, and literally throws the other 9 incorrect answers in the trash! 

Why do we do this? Because silicon space on modern chips is cheap, but debugging complex logic is hard. This "Parallel-Compute-Then-Select" architecture makes the ALU incredibly structurally simple and almost impossible to break.

## Flags: Sending Signals Back

The ALU doesn't just calculate answers; it also acts as an early warning system for the processor. It has three special output wires called **Flags** that send a single `1` or `0` back to the processor to give it context about the math it just did.

* **The Zero Flag**: This is the most important flag. If the ALU calculates a result, and the answer is exactly `0`, this wire turns on (`1`). The processor uses this flag to make decisions (like "If A - B = 0, then A and B are equal, so Jump to another part of the code!").
* **The Carry Flag**: If you add two massive 64-bit numbers, and the answer is too big to fit inside 64 bits, the 65th bit falls off the edge. This flag turns on to warn the processor that data was lost.
* **The Overflow Flag**: Similar to the Carry flag, but for negative numbers. If you add two positive numbers and the answer is so big that it accidentally flips the sign bit (making the computer think it's negative), this flag yells "Warning! Math overflow!"

Now that we have a massive, fully functioning calculator, we have a new problem. How do we *remember* the answers it calculates?

[Next: State and Memory](State_and_Memory.md)
