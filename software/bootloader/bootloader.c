#include <stdint.h>

#define SPI_DATA (*(volatile uint64_t*)0xD000)
#define SPI_CTRL (*(volatile uint64_t*)0xD008)

#define SD_CS_HIGH() do { SPI_CTRL = 1; } while(0)
#define SD_CS_LOW()  do { SPI_CTRL = 0; } while(0)
#define SPI_BUSY()   (SPI_CTRL & 2)

uint8_t spi_transfer(uint8_t data) {
    SPI_DATA = data;
    while (SPI_BUSY());
    return (uint8_t)SPI_DATA;
}

uint8_t sd_command(uint8_t cmd, uint32_t arg, uint8_t crc) {
    // Wait for SD card to be ready (send 0xFF until not busy)
    // For our simple bootloader, we just send dummy bytes
    spi_transfer(0xFF);
    
    // Send command
    spi_transfer(cmd | 0x40);
    spi_transfer((arg >> 24) & 0xFF);
    spi_transfer((arg >> 16) & 0xFF);
    spi_transfer((arg >> 8) & 0xFF);
    spi_transfer(arg & 0xFF);
    spi_transfer(crc);
    
    // Wait for response (bit 7 == 0)
    uint8_t resp;
    for (int i = 0; i < 10; i++) {
        resp = spi_transfer(0xFF);
        if ((resp & 0x80) == 0) {
            break;
        }
    }
    return resp;
}

void main() {
    // 1. Send >= 74 dummy clocks with CS high
    SD_CS_HIGH();
    for (int i = 0; i < 10; i++) {
        spi_transfer(0xFF);
    }
    
    // 2. Initialize SD Card (SPI Mode)
    SD_CS_LOW();
    
    // CMD0 (GO_IDLE_STATE)
    sd_command(0, 0, 0x95);
    
    // CMD8 (SEND_IF_COND)
    sd_command(8, 0x000001AA, 0x87);
    spi_transfer(0xFF);
    spi_transfer(0xFF);
    spi_transfer(0xFF);
    spi_transfer(0xFF);
    
    // ACMD41 loop
    uint8_t resp = 1;
    while (resp != 0) {
        // CMD55 (APP_CMD)
        sd_command(55, 0, 0x65);
        // ACMD41 (SD_SEND_OP_COND)
        resp = sd_command(41, 0x40000000, 0x77);
    }
    
    // 3. Load Application (Sector 128) -> memory address 0x1000
    // CMD17 (READ_SINGLE_BLOCK)
    sd_command(17, 128, 0xFF); // Sector 128
    
    // Wait for Data Token (0xFE)
    while (spi_transfer(0xFF) != 0xFE);
    
    // Read 512 bytes into RAM at 0x1000
    uint8_t* app_ram = (uint8_t*)0x1000;
    for (int i = 0; i < 512; i++) {
        app_ram[i] = spi_transfer(0xFF);
    }
    
    // Read 2 CRC bytes
    spi_transfer(0xFF);
    spi_transfer(0xFF);
    
    SD_CS_HIGH();
    
    // 4. Branch to Application!
    void (*app_entry)(void) = (void(*)(void))0x1000;
    app_entry();
    
    // Fallback infinite loop
    while(1);
}
