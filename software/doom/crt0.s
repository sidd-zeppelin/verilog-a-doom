.section .text.init
.global _start
_start:
    /* Stack was initialized by bootloader, we just call main */
    call main

hang:
    j hang
