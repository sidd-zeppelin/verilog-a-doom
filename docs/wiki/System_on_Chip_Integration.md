# System-on-Chip Integration

Transforming a basic processor core into a full System-on-Chip (SoC) requires connecting the core to various peripherals (RAM, Display, Timers, SD Card). In this project, we accomplish this via a centralized **Memory Bus** and **Memory-Mapped I/O (MMIO)**.

## The Memory Bus (`memory_bus.v`)
Instead of having dedicated I/O instructions like `IN` or `OUT` (as seen in some architectures like x86), RISC-V uses MMIO. This means reading from or writing to a peripheral device looks exactly the same as reading from or writing to RAM.

The Memory Bus sits between the processor's Data Memory interface (MEM stage) and the peripherals. It intercepts the physical address of any `ld` (load) or `sd` (store) instruction and routes the request to the correct hardware module based on a predefined **Memory Map**.

### Memory Map
The RV64 DOOM SoC uses the following address mapping:

| Start Address | End Address | Hardware Peripheral | Description |
|---------------|-------------|---------------------|-------------|
| `0x0000`      | `0x1000`    | **Reserved**        | Reserved for Boot ROM / Interrupt Vectors. |
| `0x1000`      | `0x2000`    | **IMEM**            | Instruction Memory (Read-Only). |
| `0x2000`      | `0x3000`    | **DMEM**            | General purpose RAM for data and stack. |
| `0x3000`      | `0x4000`    | **GPIO / IO**       | General Purpose I/O (e.g., Controller Inputs). |
| `0xB000`      | `0xC000`    | **VGA FB**          | Video Framebuffer (mapped to screen pixels). |
| `0xC000`      | `0xD000`    | **CLINT**           | Core Local Interruptor (Timers & Interrupts). |
| `0xD000`      | `0xD100`    | **SPI**             | SPI Master Controller (SD Card Interface). |

## How MMIO Works in the Pipeline
1. **Execute (EX) Stage**: The ALU calculates the target physical memory address (e.g., `addi x1, x0, 0xD000`).
2. **Memory (MEM) Stage**: The `mem_alu_result` is passed to the `dmem_address` pin. The `MemRead` or `MemWrite` signals are asserted.
3. **Memory Bus Routing**: The `memory_bus.v` receives the `dmem_address`. If it sees `0xD000`, it asserts the `spi_write_req` instead of the `ram_write_req`.
4. **Peripheral Response**: The target peripheral processes the data. If it is a read request, it drives `read_data` back to the bus.
5. **Writeback (WB) Stage**: The data returned from the bus is muxed into the processor's register file, completely abstracting the hardware peripheral away from the software.

This architecture ensures that the C code compiling the DOOM engine can freely read controllers and draw graphics simply by using pointer dereferencing in C (`*(volatile int*)0xD000 = data;`).
