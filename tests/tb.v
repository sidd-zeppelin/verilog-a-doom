`timescale 1ns/1ps

module tb;
    reg clk;
    reg rst;
    
    wire spi_sck;
    wire spi_mosi;
    wire spi_miso;
    wire spi_cs_n;

    soc_top dut (
        .clk(clk),
        .rst(rst),
        .spi_sck(spi_sck),
        .spi_mosi(spi_mosi),
        .spi_miso(spi_miso),
        .spi_cs_n(spi_cs_n)
    );

    assign spi_miso = 1'b1;

    initial begin
        $dumpfile("sim_build/dump.vcd");
        $dumpvars(0, tb);
        
        // initialize memory
        // lui x1, 13 (0000d0b7)
        dut.u_ram.memory[0] = 8'hB7;
        dut.u_ram.memory[1] = 8'hD0;
        dut.u_ram.memory[2] = 8'h00;
        dut.u_ram.memory[3] = 8'h00;
        
        // addi x2, x0, 512 (02000113)
        dut.u_ram.memory[4] = 8'h13;
        dut.u_ram.memory[5] = 8'h01;
        dut.u_ram.memory[6] = 8'h00;
        dut.u_ram.memory[7] = 8'h02;
        
        // sd x2, 8(x1) (0020b423)
        dut.u_ram.memory[8] = 8'h23;
        dut.u_ram.memory[9] = 8'hB4;
        dut.u_ram.memory[10] = 8'h20;
        dut.u_ram.memory[11] = 8'h00;
        
        // addi x3, x0, 90 (05a00193)
        dut.u_ram.memory[12] = 8'h93;
        dut.u_ram.memory[13] = 8'h01;
        dut.u_ram.memory[14] = 8'hA0;
        dut.u_ram.memory[15] = 8'h05;
        
        // sb x3, 0(x1) (00308023)
        dut.u_ram.memory[16] = 8'h23;
        dut.u_ram.memory[17] = 8'h80;
        dut.u_ram.memory[18] = 8'h30;
        dut.u_ram.memory[19] = 8'h00;
        
        // ld x4, 8(x1) (0080b203)
        dut.u_ram.memory[20] = 8'h03;
        dut.u_ram.memory[21] = 8'hB2;
        dut.u_ram.memory[22] = 8'h80;
        dut.u_ram.memory[23] = 8'h00;
        
        // andi x4, x4, 2 (00227213)
        dut.u_ram.memory[24] = 8'h13;
        dut.u_ram.memory[25] = 8'h72;
        dut.u_ram.memory[26] = 8'h22;
        dut.u_ram.memory[27] = 8'h00;
        
        // bne x4, x0, -8 (fe021ce3)
        dut.u_ram.memory[28] = 8'hE3;
        dut.u_ram.memory[29] = 8'h1C;
        dut.u_ram.memory[30] = 8'h02;
        dut.u_ram.memory[31] = 8'hFE;
        
        dut.u_core.u_if.u_imem.use_little_endian = 1;

        clk = 0;
        rst = 1;
        #25;
        rst = 0;
        
        #2000;
        $finish;
    end
    
    always #5 begin
        clk = ~clk;
        $dumpflush;
    end

endmodule
