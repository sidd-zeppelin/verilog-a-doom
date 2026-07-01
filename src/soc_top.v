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
    output [3:0] vga_b,
    // SPI (SD Card)
    output spi_sck,
    output spi_mosi,
    input  spi_miso,
    output spi_cs_n,
    
    // Debug Interface for Fast Emulator
    output        dbg_vga_we,
    output [15:0] dbg_vga_addr,
    output [63:0] dbg_vga_data
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
        .dmem_read_data_in (dmem_read_data_in),
        .timer_interrupt   (timer_interrupt)
    );

    // ----------------------------------------------------
    // Memory Bus / Interconnect
    // ----------------------------------------------------
    wire        ram_read_req, ram_write_req;
    wire [23:0] ram_address;
    wire [63:0] ram_write_data;
    wire [2:0]  ram_funct3;
    wire [63:0] ram_read_data;

    wire        vga_read_req, vga_write_req;
    wire [15:0] vga_address;
    wire [63:0] vga_write_data;
    wire [2:0]  vga_funct3;
    wire [63:0] vga_read_data;

    assign dbg_vga_we = vga_write_req;
    assign dbg_vga_addr = vga_address;
    assign dbg_vga_data = vga_write_data;

    wire        io_read_req, io_write_req;
    wire [7:0]  io_address;
    wire [63:0] io_write_data;
    wire [2:0]  io_funct3;
    wire [63:0] io_read_data;

    wire        clint_read_req, clint_write_req;
    wire [3:0]  clint_address;
    wire [63:0] clint_write_data;
    wire [63:0] clint_read_data;
    wire        timer_interrupt;

    wire        spi_read_req, spi_write_req;
    wire [3:0]  spi_address;
    wire [63:0] spi_write_data;
    wire [63:0] spi_read_data;

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

        .spi_read_req      (spi_read_req),
        .spi_write_req     (spi_write_req),
        .spi_address       (spi_address),
        .spi_write_data    (spi_write_data),
        .spi_read_data     (spi_read_data),

        .clint_read_req    (clint_read_req),
        .clint_write_req   (clint_write_req),
        .clint_address     (clint_address),
        .clint_write_data  (clint_write_data),
        .clint_read_data   (clint_read_data),
        
        .io_read_req       (io_read_req),
        .io_write_req      (io_write_req),
        .io_address        (io_address),
        .io_write_data     (io_write_data),
        .io_funct3         (io_funct3),
        .io_read_data      (io_read_data)
    );

    // ----------------------------------------------------
    // System Memory (Instruction & Data)
    // ----------------------------------------------------
    system_memory u_ram (
        .clk              (clk),
        .reset            (rst),
        .imem_address     (imem_address),
        .imem_instruction (imem_instruction),
        .dmem_address     (ram_address),
        .dmem_write_data  (ram_write_data),
        .dmem_read_req    (ram_read_req),
        .dmem_write_req   (ram_write_req),
        .dmem_funct3      (ram_funct3),
        .dmem_read_data   (ram_read_data)
    );

    // ----------------------------------------------------
    // Core Local Interruptor (CLINT)
    // ----------------------------------------------------
    clint u_clint (
        .clk              (clk),
        .rst              (rst),
        .clint_read_req   (clint_read_req),
        .clint_write_req  (clint_write_req),
        .clint_address    (clint_address),
        .clint_write_data (clint_write_data),
        .clint_read_data  (clint_read_data),
        .timer_interrupt  (timer_interrupt)
    );

    // ----------------------------------------------------
    // SPI Controller (SD Card Interface)
    // ----------------------------------------------------
    spi_controller u_spi (
        .clk        (clk),
        .rst        (rst),
        .read_req   (spi_read_req),
        .write_req  (spi_write_req),
        .address    (spi_address),
        .write_data (spi_write_data),
        .read_data  (spi_read_data),
        .sck        (spi_sck),
        .mosi       (spi_mosi),
        .miso       (spi_miso),
        .cs_n       (spi_cs_n)
    );

    // ----------------------------------------------------
    // VGA Controller (25MHz pixel clock)
    // ----------------------------------------------------
    reg [1:0] clk_div;
    always @(posedge clk) begin
        if (rst) clk_div <= 2'b00;
        else clk_div <= clk_div + 1;
    end
    wire clk_25mhz = clk_div[1];

    vga_controller u_vga (
        .clk_cpu(clk),
        .rst(rst),
        .cpu_address(vga_address),
        .cpu_write_data(vga_write_data),
        .cpu_write_req(vga_write_req),
        .cpu_funct3(vga_funct3),
        .cpu_read_data(vga_read_data),

        .clk_25mhz(clk_25mhz),
        .vga_hsync(vga_hsync),
        .vga_vsync(vga_vsync),
        .vga_r(vga_r),
        .vga_g(vga_g),
        .vga_b(vga_b)
    );

    assign io_read_data = (io_address == 8'h00) ? {56'b0, buttons} : 64'b0;
    
    reg [7:0] led_reg;
    always @(posedge clk) begin
        if (rst) led_reg <= 8'b0;
        else if (io_write_req && io_address == 8'h04) led_reg <= io_write_data[7:0];
    end
    assign leds = led_reg;

endmodule
