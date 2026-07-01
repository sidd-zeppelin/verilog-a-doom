module memory_bus (
    input clk,
    input reset,
    
    // Core Data Interface
    input        dmem_read_req,
    input        dmem_write_req,
    input [63:0] dmem_address,
    input [63:0] dmem_write_data,
    input [2:0]  dmem_funct3,
    output reg [63:0] dmem_read_data_in,
    
    // RAM Interface (0x0000 - 0x1FFF, 8KB)
    output reg        ram_read_req,
    output reg        ram_write_req,
    output [12:0]     ram_address,
    output [63:0]     ram_write_data,
    output [2:0]      ram_funct3,
    input  [63:0]     ram_read_data,
    
    // VGA Interface (0x2000 - 0x5FFF)
    output reg        vga_read_req,
    output reg        vga_write_req,
    output [13:0]     vga_address,
    output [63:0]     vga_write_data,
    output [2:0]      vga_funct3,
    input  [63:0]     vga_read_data,
    
    // SPI Controller Interface (0xD000 - 0xD0FF)
    output reg        spi_read_req,
    output reg        spi_write_req,
    output [3:0]      spi_address,
    output [63:0]     spi_write_data,
    input  [63:0]     spi_read_data,

    // CLINT Interface (0xE000 - 0xE00F)
    output reg        clint_read_req,
    output reg        clint_write_req,
    output [3:0]      clint_address,
    output [63:0]     clint_write_data,
    input  [63:0]     clint_read_data,

    // IO Interface (0xF000 - 0xF0FF)
    output reg        io_read_req,
    output reg        io_write_req,
    output [7:0]      io_address,
    output [63:0]     io_write_data,
    output [2:0]      io_funct3,
    input  [63:0]     io_read_data
);

    // Common write data / funct3 are broadcasted
    assign ram_write_data = dmem_write_data;
    assign ram_funct3     = dmem_funct3;
    
    assign vga_write_data = dmem_write_data;
    assign vga_funct3     = dmem_funct3;
    
    assign spi_write_data = dmem_write_data;

    assign io_write_data  = dmem_write_data;
    assign io_funct3      = dmem_funct3;

    assign clint_write_data = dmem_write_data;
    
    // Address masking (subtracted to get 0-based index)
    assign ram_address   = dmem_address[12:0]; // 0x0000-0x1FFF is directly the lower 13 bits
    assign vga_address   = (dmem_address - 64'h2000);
    assign spi_address   = (dmem_address - 64'hD000);
    assign clint_address = (dmem_address - 64'hE000);
    assign io_address    = (dmem_address - 64'hF000);

    // Address Decoding
    always @(*) begin
        ram_read_req  = 1'b0;
        ram_write_req = 1'b0;
        vga_read_req  = 1'b0;
        vga_write_req = 1'b0;
        spi_read_req  = 1'b0;
        spi_write_req = 1'b0;
        clint_read_req = 1'b0;
        clint_write_req = 1'b0;
        io_read_req   = 1'b0;
        io_write_req  = 1'b0;
        dmem_read_data_in = 64'b0;

        if (dmem_address < 64'h2000) begin
            // System RAM Access (0x0000 - 0x1FFF)
            ram_read_req  = dmem_read_req;
            ram_write_req = dmem_write_req;
            dmem_read_data_in = ram_read_data;
        end else if (dmem_address >= 64'h2000 && dmem_address < 64'h6000) begin
            // VGA Access
            vga_read_req  = dmem_read_req;
            vga_write_req = dmem_write_req;
            dmem_read_data_in = vga_read_data;
        end else if (dmem_address >= 64'hD000 && dmem_address < 64'hD100) begin
            // SPI Access
            spi_read_req  = dmem_read_req;
            spi_write_req = dmem_write_req;
            dmem_read_data_in = spi_read_data;
        end else if (dmem_address >= 64'hE000 && dmem_address < 64'hE010) begin
            // CLINT Access
            clint_read_req  = dmem_read_req;
            clint_write_req = dmem_write_req;
            dmem_read_data_in = clint_read_data;
        end else if (dmem_address >= 64'hF000 && dmem_address < 64'hF100) begin
            // IO Access
            io_read_req   = dmem_read_req;
            io_write_req  = dmem_write_req;
            dmem_read_data_in = io_read_data;
        end
    end
endmodule
