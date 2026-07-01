CC = riscv64-unknown-elf-gcc
OBJCOPY = riscv64-unknown-elf-objcopy

CFLAGS = -march=rv64im -mabi=lp64 -ffreestanding -nostdlib -O2
LDFLAGS = -Wl,-T,linker.ld

all: bootloader.hex

bootloader.elf: crt0.s bootloader.c
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^

bootloader.bin: bootloader.elf
	$(OBJCOPY) -O binary $< $@

bootloader.hex: bootloader.elf
	$(OBJCOPY) -O verilog --verilog-data-width=1 $< $@

clean:
	rm -f *.elf *.bin *.hex
