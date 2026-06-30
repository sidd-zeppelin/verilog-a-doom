# fibonacci.s
# Calculate first 10 fibonacci numbers and store them in memory starting at address 0x0

    addi x1, x0, 0      # x1 = 0 (Fib[0])
    addi x2, x0, 1      # x2 = 1 (Fib[1])
    addi x3, x0, 0      # x3 = 0 (Memory pointer)
    addi x4, x0, 10     # x4 = 10 (Loop counter)
    
    # Store first two
    sd x1, 0(x3)        # Mem[0] = 0
    addi x3, x3, 8      # ptr += 8
    sd x2, 0(x3)        # Mem[8] = 1
    addi x3, x3, 8      # ptr += 8
    addi x4, x4, -2     # count -= 2
    
loop:
    add x5, x1, x2      # x5 = x1 + x2
    sd x5, 0(x3)        # Mem[ptr] = x5
    addi x3, x3, 8      # ptr += 8
    
    # Shift registers
    add x1, x0, x2      # x1 = x2
    add x2, x0, x5      # x2 = x5
    
    addi x4, x4, -1     # count -= 1
    beq x4, x0, end     # if count == 0, end loop
    beq x0, x0, loop    # else jump back to loop

end:
    add x0, x0, x0      # NOP to clear pipeline
    add x0, x0, x0
    add x0, x0, x0
    add x0, x0, x0
