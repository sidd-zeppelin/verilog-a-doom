OUTPUT_ARCH("riscv")
ENTRY(_start)

MEMORY
{
  ram (rwx) : ORIGIN = 0x00000000, LENGTH = 0x2000 /* 8KB */
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
