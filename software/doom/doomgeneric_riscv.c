#include "doomkeys.h"
#include "doomgeneric.h"
#include <stdint.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

#define VGA_FB    ((volatile uint8_t*)0x01000000)
#define IO_BTNS   ((volatile uint64_t*)0x10020000)
#define CLINT_TIME ((volatile uint64_t*)0x10010000)

// Intercept I_Error via --wrap=I_Error linker flag.
// Writes the error format string to VGA row 1 as raw bytes so the
// emulator can decode and print it, then triggers the red crash screen.
void __wrap_I_Error(char *error, ...) {
    volatile uint8_t *fb = VGA_FB;
    // Encode error string into VGA row 1 (pixels 320-639)
    const char *p = error ? error : "(null)";
    int i = 0;
    while (p[i] && i < 319) {
        fb[320 + i] = (uint8_t)p[i];
        i++;
    }
    fb[320 + i] = 0; // null terminator
    // Fill entire screen red to signal crash
    for (int j = 0; j < 320 * 200; j++) fb[j] = 0xE0;
    for(;;);
}
void DG_Init() {
    // Write a solid white rectangle to the top-left 10x10 pixels
    // as a canary to verify the CPU reaches here AND VGA writes work.
    volatile uint8_t *fb = VGA_FB;
    for (int y = 0; y < 10; y++) {
        for (int x = 0; x < 10; x++) {
            fb[y * DOOMGENERIC_RESX + x] = 0xFF; // white in RGB332
        }
    }
}

void DG_DrawFrame() {
    // Canary: paint row 0 green to confirm DG_DrawFrame is being called
    volatile uint8_t *canary_fb = VGA_FB;
    for (int x = 0; x < DOOMGENERIC_RESX; x++) canary_fb[x] = 0x1C; // green in RGB332

    // DOOM outputs a DOOMGENERIC_RESX * DOOMGENERIC_RESY buffer of 32-bit colors.
    // We convert this to our 8-bit RGB332 hardware format.
    for (int y = 0; y < DOOMGENERIC_RESY; y++) {
        for (int x = 0; x < DOOMGENERIC_RESX; x++) {
            uint32_t px = DG_ScreenBuffer[y * DOOMGENERIC_RESX + x];
            
            uint8_t r = (px >> 16) & 0xFF;
            uint8_t g = (px >> 8) & 0xFF;
            uint8_t b = px & 0xFF;
            
            // Convert to RGB332
            // R: top 3 bits, G: top 3 bits, B: top 2 bits
            uint8_t r_3 = r >> 5;
            uint8_t g_3 = g >> 5;
            uint8_t b_2 = b >> 6;
            
            uint8_t rgb332 = (r_3 << 5) | (g_3 << 2) | b_2;
            
            VGA_FB[y * DOOMGENERIC_RESX + x] = rgb332;
        }
    }
}

void DG_SleepMs(uint32_t ms) {
    uint32_t start = DG_GetTicksMs();
    while (DG_GetTicksMs() - start < ms) {
        // busy wait
    }
}

uint32_t DG_GetTicksMs() {
    // Verilator runs at ~2.15M full clock cycles per second.
    // CLINT mtime increments every cycle.
    // Divide by 2150 so that 1 second of simulation ≈ 1000ms of game time.
    uint64_t mtime = *CLINT_TIME;
    return (uint32_t)(mtime / 2150);
}

int DG_GetKey(int* pressed, unsigned char* key) {
    static uint8_t last_btns = 0;
    uint8_t btns = (uint8_t)(*IO_BTNS);
    
    // Check for differences
    uint8_t diff = btns ^ last_btns;
    if (diff == 0) return 0;
    
    // Find the first bit that changed
    for (int i = 0; i < 8; i++) {
        if (diff & (1 << i)) {
            *pressed = (btns & (1 << i)) ? 1 : 0;
            last_btns ^= (1 << i); // toggle that bit so we don't process it again next time
            
            switch (i) {
                case 0: *key = KEY_UPARROW; break;
                case 1: *key = KEY_DOWNARROW; break;
                case 2: *key = KEY_LEFTARROW; break;
                case 3: *key = KEY_RIGHTARROW; break;
                case 4: *key = KEY_FIRE; break;
                case 5: *key = KEY_USE; break;
                default: return 0;
            }
            return 1;
        }
    }
    return 0;
}

void DG_SetWindowTitle(const char * title) {
    // We don't have a window title.
}

int main(int argc, char **argv) {
    doomgeneric_Create(argc, argv);
    while (1) {
        doomgeneric_Tick();
    }
    return 0;
}
