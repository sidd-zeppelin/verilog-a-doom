CC = riscv64-unknown-elf-gcc
OBJCOPY = riscv64-unknown-elf-objcopy

CFLAGS = -march=rv64im -mabi=lp64 -ffreestanding -nostdlib -O2
LDFLAGS = -Wl,-T,linker.ld

all: doom.bin

doom.elf: crt0.s doom.c
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^

doom.bin: doom.elf
	$(OBJCOPY) -O binary $< $@

clean:
	rm -f *.elf *.bin
