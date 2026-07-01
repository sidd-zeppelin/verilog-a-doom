`timescale 1ns/1ps

module tb_spi_only;
    reg clk;
    reg rst;
    
    reg read_req;
    reg write_req;
    reg [3:0] address;
    reg [63:0] write_data;
    wire [63:0] read_data;

    wire sck;
    wire mosi;
    reg miso;
    wire cs_n;

    spi_controller dut (
        .clk(clk),
        .rst(rst),
        .read_req(read_req),
        .write_req(write_req),
        .address(address),
        .write_data(write_data),
        .read_data(read_data),
        .sck(sck),
        .mosi(mosi),
        .miso(miso),
        .cs_n(cs_n)
    );

    initial begin
        $dumpfile("sim_build/dump_spi.vcd");
        $dumpvars(0, tb_spi_only);
        
        clk = 0;
        rst = 1;
        read_req = 0;
        write_req = 0;
        address = 0;
        write_data = 0;
        miso = 1;
        
        #25;
        rst = 0;
        
        // Write SPI_CTRL
        #10;
        write_req = 1;
        address = 8;
        write_data = 64'h0000_0000_0000_0200; // clk_div = 2, cs_n = 0
        #10;
        write_req = 0;
        
        // Write SPI_DATA
        #10;
        write_req = 1;
        address = 0;
        write_data = 64'h90;
        #10;
        write_req = 0;
        
        #2000;
        $finish;
    end
    
    always #5 clk = ~clk;

endmodule
