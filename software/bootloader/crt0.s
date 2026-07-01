.section .text.init
.global _start
_start:
    /* Initialize stack pointer to 0x2000 (top of 8KB RAM) */
    /* 0x2000 = 8192 = 2 * 4096 = 2 << 12 */
    lui sp, 2
    
    /* Call C main function */
    call main

hang:
    j hang
