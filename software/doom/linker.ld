OUTPUT_ARCH("riscv")
ENTRY(_start)

MEMORY
{
  /* The bootloader places us at 0x1000 */
  ram (rwx) : ORIGIN = 0x00001000, LENGTH = 0x1000 /* 4KB */
}

SECTIONS
{
  .text : {
    *(.text.init)
    *(.text)
    *(.text.*)
    *(.rodata*)
  } > ram

  .data : {
    *(.data)
    *(.data.*)
    *(.sdata*)
  } > ram

  .bss : {
    *(.bss)
    *(.bss.*)
    *(.sbss*)
    *(COMMON)
  } > ram
}
