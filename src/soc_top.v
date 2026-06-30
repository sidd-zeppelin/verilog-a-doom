module soc_top (
    input clk,
    input rst,
    // Controller Input
    input  [7:0] buttons,
    // Debug Output
    output [7:0] leds,
    // VGA
    output vga_hsync,
    output vga_vsync,
    output [3:0] vga_r,
    output [3:0] vga_g,
    output [3:0] vga_b
);

    // ----------------------------------------------------
    // Processor Core
    // ----------------------------------------------------
    wire [63:0] imem_address;
    wire [31:0] imem_instruction;
    
    wire        dmem_read_req;
    wire        dmem_write_req;
    wire [63:0] dmem_address;
    wire [63:0] dmem_write_data;
    wire [2:0]  dmem_funct3;
    wire [63:0] dmem_read_data_in;

    top_pipeline u_core (
        .clk               (clk),
        .rst               (rst),
        .imem_address      (imem_address),
        .imem_instruction  (imem_instruction),
        .dmem_read_req     (dmem_read_req),
        .dmem_write_req    (dmem_write_req),
        .dmem_address      (dmem_address),
        .dmem_write_data   (dmem_write_data),
        .dmem_funct3       (dmem_funct3),
        .dmem_read_data_in (dmem_read_data_in)
    );

    // ----------------------------------------------------
    // Instruction ROM
    // ----------------------------------------------------
    instruction_mem u_rom (
        .addr        (imem_address),
        .instr       (imem_instruction)
    );

    // ----------------------------------------------------
    // Memory Bus / Interconnect
    // ----------------------------------------------------
    wire        ram_read_req, ram_write_req;
    wire [9:0]  ram_address;
    wire [63:0] ram_write_data;
    wire [2:0]  ram_funct3;
    wire [63:0] ram_read_data;

    wire        vga_read_req, vga_write_req;
    wire [13:0] vga_address;
    wire [63:0] vga_write_data;
    wire [2:0]  vga_funct3;
    wire [63:0] vga_read_data;

    wire        io_read_req, io_write_req;
    wire [7:0]  io_address;
    wire [63:0] io_write_data;
    wire [2:0]  io_funct3;
    wire [63:0] io_read_data;

    memory_bus u_bus (
        .clk               (clk),
        .reset             (rst),
        
        .dmem_read_req     (dmem_read_req),
        .dmem_write_req    (dmem_write_req),
        .dmem_address      (dmem_address),
        .dmem_write_data   (dmem_write_data),
        .dmem_funct3       (dmem_funct3),
        .dmem_read_data_in (dmem_read_data_in),
        
        .ram_read_req      (ram_read_req),
        .ram_write_req     (ram_write_req),
        .ram_address       (ram_address),
        .ram_write_data    (ram_write_data),
        .ram_funct3        (ram_funct3),
        .ram_read_data     (ram_read_data),
        
        .vga_read_req      (vga_read_req),
        .vga_write_req     (vga_write_req),
        .vga_address       (vga_address),
        .vga_write_data    (vga_write_data),
        .vga_funct3        (vga_funct3),
        .vga_read_data     (vga_read_data),
        
        .io_read_req       (io_read_req),
        .io_write_req      (io_write_req),
        .io_address        (io_address),
        .io_write_data     (io_write_data),
        .io_funct3         (io_funct3),
        .io_read_data      (io_read_data)
    );

    // ----------------------------------------------------
    // System RAM (Data Memory)
    // ----------------------------------------------------
    data_mem u_ram (
        .clk        (clk),
        .reset      (rst),
        .address    (ram_address),
        .write_data (ram_write_data),
        .MemRead    (ram_read_req),
        .MemWrite   (ram_write_req),
        .funct3     (ram_funct3),
        .read_data  (ram_read_data)
    );

    // ----------------------------------------------------
    // Peripherals (VGA & IO Dummy for now)
    // ----------------------------------------------------
    assign vga_read_data = 64'b0;
    assign vga_hsync = 1'b0;
    assign vga_vsync = 1'b0;
    assign vga_r = 4'b0;
    assign vga_g = 4'b0;
    assign vga_b = 4'b0;

    assign io_read_data = (io_address == 8'h00) ? {56'b0, buttons} : 64'b0;
    
    reg [7:0] led_reg;
    always @(posedge clk) begin
        if (rst) led_reg <= 8'b0;
        else if (io_write_req && io_address == 8'h04) led_reg <= io_write_data[7:0];
    end
    assign leds = led_reg;

endmodule
