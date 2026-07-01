#include "Vsoc_top.h"
#include "verilated.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <fcntl.h>
#include <unistd.h>
#include <chrono>

class MockSDCard {
    enum State { IDLE, READY };
    State state = IDLE;
    bool is_acmd = false;
    std::vector<uint8_t> tx_queue;
    std::vector<uint8_t> rx_buffer;
    uint8_t shift_in = 0;
    uint8_t shift_out = 0xFF;
    int bit_count = 0;
    std::vector<uint8_t> doom_data;

public:
    MockSDCard(const char* doom_bin_path) {
        std::ifstream file(doom_bin_path, std::ios::binary);
        if (file) {
            doom_data = std::vector<uint8_t>(std::istreambuf_iterator<char>(file), {});
        } else {
            std::cerr << "Emulator: Failed to open " << doom_bin_path << std::endl;
        }
        while(doom_data.size() < 512) doom_data.push_back(0);
    }
    
    void process(bool sck_pos, bool sck_neg, bool cs_n, bool mosi, uint8_t &miso) {
        if (cs_n) {
            miso = 1;
            return;
        }
        if (sck_pos) {
            shift_in = ((shift_in << 1) | mosi) & 0xFF;
        }
        if (sck_neg) {
            bit_count++;
            if (bit_count == 8) {
                handle_byte(shift_in);
                bit_count = 0;
                shift_in = 0;
                if (!tx_queue.empty()) {
                    shift_out = tx_queue.front();
                    tx_queue.erase(tx_queue.begin());
                } else {
                    shift_out = 0xFF;
                }
            } else {
                shift_out = (shift_out << 1) & 0xFF;
            }
        }
        miso = (shift_out >> 7) & 1;
    }
    
private:
    void handle_byte(uint8_t byte) {
        rx_buffer.push_back(byte);
        while (rx_buffer.size() >= 6 && (rx_buffer[0] & 0xC0) != 0x40) {
            rx_buffer.erase(rx_buffer.begin());
        }
        if (rx_buffer.size() == 6) {
            uint8_t cmd = rx_buffer[0] & 0x3F;
            uint32_t arg = (rx_buffer[1] << 24) | (rx_buffer[2] << 16) | (rx_buffer[3] << 8) | rx_buffer[4];
            
            if (cmd == 0) { 
                state = IDLE; tx_queue.push_back(0x01); 
            } else if (cmd == 8) { 
                tx_queue.insert(tx_queue.end(), {0x01, 0x00, 0x00, 0x01, 0xAA}); 
            } else if (cmd == 55) { 
                is_acmd = true; tx_queue.push_back(0x01); 
            } else if (cmd == 41) {
                if (is_acmd) { state = READY; tx_queue.push_back(0x00); }
                else { tx_queue.push_back(0x05); }
                is_acmd = false;
            } else if (cmd == 17) {
                if (state == READY) {
                    tx_queue.insert(tx_queue.end(), {0x00, 0xFF, 0xFE});
                    
                    // Arg is sector number. Sector 128 starts at byte 0 of doom_data
                    if (arg >= 128) {
                        int offset = (arg - 128) * 512;
                        for (int i = 0; i < 512; i++) {
                            if (offset + i < doom_data.size())
                                tx_queue.push_back(doom_data[offset + i]);
                            else
                                tx_queue.push_back(0);
                        }
                    } else {
                        for (int i = 0; i < 512; i++) tx_queue.push_back(0);
                    }
                    tx_queue.push_back(0xAA);
                    tx_queue.push_back(0xBB);
                } else {
                    tx_queue.push_back(0x05);
                }
            } else {
                tx_queue.push_back(0x05);
            }
            rx_buffer.clear();
        }
    }
};

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vsoc_top* top = new Vsoc_top;
    
    // Set non-blocking stdin
    int flags = fcntl(STDIN_FILENO, F_GETFL, 0);
    fcntl(STDIN_FILENO, F_SETFL, flags | O_NONBLOCK);
    
    // Disable stdout buffering so Python gets data immediately
    setvbuf(stdout, NULL, _IONBF, 0);
    
    MockSDCard sd_card("software/doom/doom.bin");
    
    top->clk = 0;
    top->rst = 1;
    top->buttons = 0;
    
    for(int i = 0; i < 10; i++) {
        top->clk = !top->clk;
        top->eval();
    }
    
    top->rst = 0;
    
    bool prev_sck = top->spi_sck;
    
    // 128x128 RGB framebuffer
    std::vector<uint8_t> fb(128 * 128 * 3, 0);
    
    // Game Loop
    uint64_t cycles = 0;
    uint8_t btn_state = 0;
    
    while (!Verilated::gotFinish()) {
        top->clk = !top->clk;
        top->eval();
        cycles++;
        
        // Handle SPI
        bool sck = top->spi_sck;
        bool sck_pos = (sck && !prev_sck);
        bool sck_neg = (!sck && prev_sck);
        sd_card.process(sck_pos, sck_neg, top->spi_cs_n, top->spi_mosi, top->spi_miso);
        prev_sck = sck;
        
        // Intercept VGA writes
        if (top->dbg_vga_we) {
            uint16_t addr = top->dbg_vga_addr;
            if (addr < 16384) {
                uint8_t val = top->dbg_vga_data & 0xFF;
                // RRRGGGBB
                uint8_t r = ((val >> 5) & 0x7) * 255 / 7;
                uint8_t g = ((val >> 2) & 0x7) * 255 / 7;
                uint8_t b = (val & 0x3) * 255 / 3;
                
                fb[addr * 3 + 0] = r;
                fb[addr * 3 + 1] = g;
                fb[addr * 3 + 2] = b;
            }
        }
        
        // Read input from Python every 10000 cycles
        if (cycles % 10000 == 0) {
            char buf;
            while (read(STDIN_FILENO, &buf, 1) == 1) {
                btn_state = (uint8_t)buf;
            }
            top->buttons = btn_state;
        }
        
        // Send frame to Python every 500,000 cycles (~100 fps simulated)
        if (cycles % 500000 == 0) {
            // Write sync token
            std::cout.write("FRM", 3);
            std::cout.write((char*)fb.data(), fb.size());
            std::cout.flush();
        }
    }
    
    delete top;
    return 0;
}
