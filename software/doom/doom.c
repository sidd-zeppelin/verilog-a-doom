#include <stdint.h>

#define VGA_FB ((volatile uint8_t*)0x01000000)
#define IO_BTNS ((volatile uint64_t*)0x10020000)

void main() {
    int px = 160;
    int py = 100;
    
    while(1) {
        // Read 64-bit MMIO, buttons are in the lower 8 bits
        uint64_t btns = *IO_BTNS;
        
        // Update position based on buttons
        if (btns & (1 << 0)) py--; // UP
        if (btns & (1 << 1)) py++; // DOWN
        if (btns & (1 << 2)) px--; // LEFT
        if (btns & (1 << 3)) px++; // RIGHT
        
        // Clamp to screen bounds (inside the border)
        if (px < 6) px = 6;
        if (px > 313) px = 313;
        if (py < 6) py = 6;
        if (py > 193) py = 193;
        
        // Render 320x200
        for (int y = 0; y < 200; y++) {
            for (int x = 0; x < 320; x++) {
                // Address calculation: y * 320 + x
                int index = (y * 320) + x;
                uint8_t color;
                
                if (x < 4 || x > 315 || y < 4 || y > 195) {
                    // Red Border
                    color = 0xE0; 
                } else if (x >= px - 2 && x <= px + 2 && y >= py - 2 && y <= py + 2) {
                    // Green Player Square
                    color = 0x1C; 
                } else {
                    // XOR Pattern (Cyan/Blue) Background
                    uint8_t pattern = (uint8_t)(x ^ y);
                    color = ((pattern & 0x7) << 2) | (pattern & 0x3);
                }
                
                VGA_FB[index] = color;
            }
        }
    }
}
