OUTPUT_ARCH("riscv")
ENTRY(_start)

MEMORY
{
  ram (rwx) : ORIGIN = 0x00000000, LENGTH = 16M
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
    __global_pointer$ = . + 0x800;
    *(.data)
    *(.data.*)
    *(.sdata)
    *(.sdata.*)
  } > ram

  .bss : {
    __bss_start = .;
    *(.bss)
    *(.bss.*)
    *(.sbss*)
    *(COMMON)
    __bss_end = .;
  } > ram

  /* End of BSS, start of heap for malloc */
  . = ALIGN(8);
  _end = .;
  PROVIDE(end = .);

  /* Stack at the top of RAM */
  __stack_top = ORIGIN(ram) + LENGTH(ram);
}
