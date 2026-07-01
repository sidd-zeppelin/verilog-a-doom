.section .text.init
.global _start
_start:
    /* Initialize Global Pointer (if needed) */
.option push
.option norelax
    la gp, __global_pointer$
.option pop

    /* Setup Stack Pointer */
    la sp, __stack_top

    /* Zero out BSS section */
    la a0, __bss_start
    la a1, __bss_end
    bgeu a0, a1, bss_done
bss_loop:
    sd zero, 0(a0)
    addi a0, a0, 8
    bltu a0, a1, bss_loop
bss_done:

    /* Set up arguments for main(argc, argv) */
    li a0, 0
    li a1, 0
    
    /* Call main */
    call main

hang:
    j hang
