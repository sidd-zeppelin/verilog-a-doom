#include "Vsoc_top.h"
#include "verilated.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <fcntl.h>
#include <unistd.h>
#include <cstring>
#include <chrono>

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vsoc_top* top = new Vsoc_top;
    
    // Set non-blocking stdin for input polling
    int flags = fcntl(STDIN_FILENO, F_GETFL, 0);
    fcntl(STDIN_FILENO, F_SETFL, flags | O_NONBLOCK);
    
    // Disable stdout buffering so Python gets data immediately
    setvbuf(stdout, NULL, _IONBF, 0);
    
    // Reset sequence
    top->clk = 0;
    top->rst = 1;
    top->buttons = 0;
    top->spi_miso = 1; // SD card MISO idle high
    
    for(int i = 0; i < 20; i++) {
        top->clk = !top->clk;
        top->eval();
    }
    
    top->rst = 0;
    
    // 320x200 RGB framebuffer
    std::vector<uint8_t> fb(320 * 200 * 3, 0);
    
    // Game loop
    uint64_t cycles = 0;
    uint8_t btn_state = 0;
    bool vga_ever_written = false;
    auto t_start = std::chrono::steady_clock::now();
    
    while (!Verilated::gotFinish()) {
        top->clk = !top->clk;
        top->eval();
        cycles++;
        
        // Intercept VGA writes
        if (top->dbg_vga_we) {
            uint16_t addr = top->dbg_vga_addr;
            if (addr < 64000) {
                if (!vga_ever_written) {
                    std::cerr << "[DIAG] First VGA write at cycle " << cycles << std::endl;
                    vga_ever_written = true;
                }
                uint8_t val = top->dbg_vga_data & 0xFF;
                // Decode RGB332: RRRGGGBB
                uint8_t r = ((val >> 5) & 0x7) * 255 / 7;
                uint8_t g = ((val >> 2) & 0x7) * 255 / 7;
                uint8_t b = (val & 0x3) * 255 / 3;
                fb[addr * 3 + 0] = r;
                fb[addr * 3 + 1] = g;
                fb[addr * 3 + 2] = b;
            }
        }
        
        // Poll input from Python every 10000 cycles
        if (cycles % 10000 == 0) {
            char buf;
            while (read(STDIN_FILENO, &buf, 1) == 1) {
                btn_state = (uint8_t)buf;
            }
            top->buttons = btn_state;
        }
        
        // Print simulation speed every 1M cycles
        if (cycles % 1000000 == 0 && cycles > 0) {
            auto now = std::chrono::steady_clock::now();
            double elapsed = std::chrono::duration<double>(now - t_start).count();
            std::cerr << "[DIAG] " << cycles << " cycles in " 
                      << elapsed << "s = " << (cycles / elapsed / 1000.0) << " Kcycles/s"
                      << (vga_ever_written ? " (VGA active)" : " (no VGA writes yet)") 
                      << std::endl;
        }

        // Send a frame to Python every 100,000 cycles
        if (cycles % 100000 == 0) {
            // Check for crash: __wrap_I_Error fills all pixels with 0xE0 (red)
            // and encodes the error string in row 1 (indices 320-639)
            if (fb[0] == 0xE0 && fb[1] == 0xE0 && fb[2] == 0xE0 && fb[320] != 0xE0 && fb[320] != 0) {
                std::string errmsg;
                for (int i = 0; i < 319 && fb[320 + i] != 0; i++) {
                    errmsg += (char)fb[320 + i];
                }
                std::cerr << "[CRASH] DOOM I_Error: \"" << errmsg << "\" at cycle " << cycles << std::endl;
            } else if (fb[0] == 0xE0 && fb[1] == 0xE0 && fb[320] == 0xE0) {
                std::cerr << "[CRASH] exit() called (no I_Error message) at cycle " << cycles << std::endl;
            }

            std::cout.write("FRM", 3);
            std::cout.write((char*)fb.data(), fb.size());
            std::cout.flush();
        }
    }
    
    delete top;
    return 0;
}

