# Basic Building Blocks: From Gates to Math

Have you ever wondered how a computer actually *does* math? It doesn't have a brain. It doesn't know what the number "5" is. All a computer processor has inside it are microscopic electronic switches called **transistors**. 

By wiring these switches together in very specific patterns, we can create **Logic Gates**. These gates are the absolute fundamental building blocks of our RISC-V processor. If you understand these, you can understand the entire computer.

You can find all of the base components we are about to discuss in the `src/` directory of the project.

## 1. Logic Gates: The Decision Makers

Imagine a simple electrical circuit with a battery, a lightbulb, and two light switches connected in a row. For the lightbulb to turn on, you must flip Switch A **AND** Switch B. If only one is flipped, the circuit is broken, and the bulb stays dark.

That is exactly how a digital **AND Gate** works! 

Instead of physical switches, we use transistors. We represent a high electrical voltage (like 3.3 Volts) as a **`1`** (True), and a low voltage (0 Volts) as a **`0`** (False). 

Our processor is a 64-bit machine. This means it processes numbers that are 64 ones-and-zeros long. To handle this, we built arrays of 64 logic gates sitting side-by-side:

* **The AND Gate** (`src/and_64b.v`): This gate compares two 64-bit numbers. For every single bit, it outputs a `1` *only* if the top bit AND the bottom bit are both `1`. We use this later to "mask" or hide certain bits of data.
* **The OR Gate** (`src/or_64b.v`): This gate outputs a `1` if the top bit OR the bottom bit (or both) are `1`. We use this to combine data together.
* **The XOR Gate** (`src/xor_64b.v`): XOR stands for "Exclusive OR". It outputs a `1` *only* if the inputs are different (one is `1` and the other is `0`). If they are both the same, it outputs `0`. This is the secret ingredient for doing addition, as we are about to see!

## 2. The Full Adder: Teaching Rocks to Add

Logic gates are great for making simple True/False decisions, but we are trying to build a computer that can run DOOM. We need it to do real math. 

How do we build a circuit that knows that `1 + 1 = 2`?

In binary, `1 + 1` is written as `10` (which is a `0` with a `1` carried over to the next column). We can build a circuit that perfectly mimics this binary math using just a few XOR, AND, and OR gates. This circuit is called a **Full Adder**.

If you look at our `src/fa_1b.v` code, you will see exactly how we wired it:

```verilog
module fa_1b(
    input wire a,       // The top bit (e.g., 1)
    input wire b,       // The bottom bit (e.g., 1)
    input wire cin,     // The 'carry in' from the previous column
    output wire sum,    // The answer bit for this column
    output wire cout    // The 'carry out' to pass to the next column
);
    // XOR gates calculate the Sum. 
    // If a and b are different, sum is 1. If they are both 1, sum is 0 (and we carry).
    wire x1;
    xor (x1, a, b);
    xor (sum, x1, cin);
    
    // AND and OR gates calculate if we need to Carry a 1 to the next column.
    wire c1, c2;
    and (c1, a, b);
    and (c2, x1, cin);
    or (cout, c1, c2);
endmodule
```

This tiny circuit can only add three single bits together. That's not very useful for a 64-bit processor. So, how do we add massive 64-bit numbers?

## 3. The Ripple Carry Adder: A Chain Reaction

Imagine you are doing long addition on a piece of paper. You add the far-right column, write down the sum, and carry a '1' over to the next column. You then add that column, carry over to the next, and so on.

We make our processor do the exact same thing by chaining 64 Full Adders together!

In `src/rca_64b.v` (Ripple Carry Adder), we wired 64 `fa_1b` modules in a massive line. 
1. We feed the very first bit of our two massive numbers into Adder #0.
2. It calculates the sum, and wires its `cout` (carry out) wire directly into the `cin` (carry in) of Adder #1.
3. Adder #1 does its math and passes its carry to Adder #2. 
4. This "ripples" all the way down the chain until Adder #63 spits out the final bit.

### The Subtraction Trick
Wait, what about subtraction? Do we need to build a massive "Ripple Carry Subtractor"? 

No! Hardware engineers are lazy, and silicon space is expensive. We can use a genius mathematical trick called **Two's Complement**. 

To calculate `A - B`, we can just flip every single bit inside `B` (turn `1`s to `0`s, and `0`s to `1`s), and then add `1`. 
Mathematically, `A + (Flipped B) + 1` gives the exact same binary answer as `A - B`!

In our `src/addsub_rca_64b.v` module, we put a switch on the input. If the processor asks to Subtract, we flip all the bits of `B` using XOR gates, and we force the very first `cin` (Carry In) of Adder #0 to be a `1`. The Ripple Carry Adder does its normal addition, but spits out a perfectly subtracted number!

Now that we have circuits that can do logic and math, we need to bundle them all together into the brain of the processor.

[Next: Arithmetic Logic Unit](Arithmetic_Logic_Unit.md)
