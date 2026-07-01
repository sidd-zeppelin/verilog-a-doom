# SPI Controller (`spi_controller.v`)

To boot DOOM, the processor needs a way to load the game's assets (textures, maps, sounds) into RAM. Since we don't have a hard drive, we load the `.WAD` files directly from a physical **SD Card**. 

SD Cards can operate in an older, simpler legacy mode called **SPI** (Serial Peripheral Interface). To communicate with the SD card, we built a custom SPI Master Controller.

## Register Map
The SPI controller is memory-mapped to base address `0xD000`. It exposes two 64-bit registers:

1. **`SPI_DATA` (`0xD000`)**
   - **Write:** Writing a byte (8 bits) into this register instantly begins a transmission sequence over the MOSI pin.
   - **Read:** Reading this register returns the last byte received over the MISO pin.

2. **`SPI_CTRL` (`0xD008`)**
   - **Write `[0]`:** Drives the `SPI_CS` (Chip Select) pin. `0` = Active, `1` = Inactive.
   - **Write `[15:8]`:** Sets the `clk_div` (Clock Divider) parameter. This allows the software to configure the SPI frequency natively (e.g., initialization requires 400kHz, while data reads can run at 25MHz).
   - **Read `[1]`:** Returns the `busy` status flag. `1` = Currently transmitting, `0` = Idle.

## Hardware State Machine
The SPI controller operates via a synchronous Finite State Machine (FSM):

1. **`IDLE`**: Waits for `write_req` to `SPI_DATA`. Once triggered, it latches the data into a `shift_reg`, asserts the `busy` bit, and transitions to `SETUP`.
2. **`SETUP`**: Puts the Most Significant Bit (MSB) onto the `MOSI` pin and waits for `clk_div` ticks to ensure data stability. Transitions to `HIGH`.
3. **`HIGH`**: Pulls the `SCK` (Serial Clock) pin `HIGH`. The SD card samples our `MOSI` data. We simultaneously sample the `MISO` line and shift the data into our register. Transitions to `LOW`.
4. **`LOW`**: Pulls the `SCK` pin `LOW`. Repeats this process until all 8 bits are shifted.
5. **`DONE`**: Commits the shifted `MISO` byte to `rx_data`, pulls `busy` back to `0`, and returns to `IDLE`.

## Assembly Driver Example
Because the SPI transmission takes many clock cycles, the CPU cannot simply write to `SPI_DATA` and immediately read the response. It must continuously poll the `busy` bit.

```assembly
# Assume x1 = 0xD000 (SPI Base Address)

# Start Transmission (Write 0x40 to SPI_DATA)
addi x3, x0, 0x40
sb x3, 0(x1)

# Polling Loop
wait_on_busy:
    ld x4, 8(x1)         # Read SPI_CTRL
    andi x4, x4, 2       # Extract bit [1] (busy bit)
    bne x4, x0, wait_on_busy  # Loop if busy == 1

# Transmission complete, read the response
lb x5, 0(x1)             # Read SPI_DATA
```
