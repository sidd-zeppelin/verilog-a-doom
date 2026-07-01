#include "Vsoc_top.h"
#include "verilated.h"
#include <iostream>

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vsoc_top* top = new Vsoc_top;
    
    top->clk = 0;
    top->rst = 1;
    
    // reset
    for(int i = 0; i < 5; i++) {
        top->clk = !top->clk;
        top->eval();
    }
    
    top->rst = 0;
    
    // simulate
    long long ticks = 0;
    while (!Verilated::gotFinish() && ticks < 200000) {
        top->clk = !top->clk;
        top->eval();
        ticks++;
        if (ticks % 10000 == 0) {
            std::cout << "Tick: " << ticks << std::endl;
        }
    }
    
    std::cout << "Finished Simulation at tick " << ticks << std::endl;
    delete top;
    return 0;
}
