module spi_controller (
    input  wire        clk,
    input  wire        rst,
    
    // Memory mapped interface
    input  wire        read_req,
    input  wire        write_req,
    input  wire [3:0]  address,
    input  wire [63:0] write_data,
    output reg  [63:0] read_data,

    // SPI Interface
    output reg         sck,
    output reg         mosi,
    input  wire        miso,
    output reg         cs_n
);
    // Registers
    reg [7:0] clk_div;
    reg       busy;
    reg [7:0] shift_reg;
    reg [7:0] rx_data;

    // State machine
    reg [2:0] state;
    reg [7:0] clk_cnt;
    reg [2:0] bit_cnt;

    localparam IDLE  = 3'd0;
    localparam SETUP = 3'd1;
    localparam HIGH  = 3'd2;
    localparam LOW   = 3'd3;
    localparam DONE  = 3'd4;

    always @(posedge clk) begin
        if (rst) begin
            cs_n      <= 1'b1;
            clk_div   <= 8'd0;
            busy      <= 1'b0;
            shift_reg <= 8'b0;
            rx_data   <= 8'b0;
            sck       <= 1'b0;
            mosi      <= 1'b0;
            state     <= IDLE;
            clk_cnt   <= 8'd0;
            bit_cnt   <= 3'd0;
        end else begin
            // Memory mapped write
            if (write_req && state == IDLE) begin
                if (address == 4'h0) begin
                    // Write to SPI_DATA starts transmission
                    shift_reg <= write_data[7:0];
                    busy      <= 1'b1;
                    state     <= SETUP;
                    clk_cnt   <= 8'd0;
                    bit_cnt   <= 3'd7;
                end else if (address == 4'h8) begin
                    // Write to SPI_CTRL
                    cs_n    <= write_data[0];
                    clk_div <= write_data[15:8];
                end
            end

            // State Machine for SPI Master (Mode 0: CPOL=0, CPHA=0)
            case (state)
                IDLE: begin
                    sck <= 1'b0;
                end

                SETUP: begin
                    // Put MSB on MOSI before SCK goes high
                    mosi <= shift_reg[7];
                    if (clk_cnt == clk_div) begin
                        clk_cnt <= 8'd0;
                        state   <= HIGH;
                    end else begin
                        clk_cnt <= clk_cnt + 1;
                    end
                end

                HIGH: begin
                    sck <= 1'b1;
                    if (clk_cnt == clk_div) begin
                        clk_cnt <= 8'd0;
                        // Sample MISO and shift left
                        shift_reg <= {shift_reg[6:0], miso}; 
                        state <= LOW;
                    end else begin
                        clk_cnt <= clk_cnt + 1;
                    end
                end

                LOW: begin
                    sck <= 1'b0;
                    if (clk_cnt == clk_div) begin
                        clk_cnt <= 8'd0;
                        if (bit_cnt == 0) begin
                            state <= DONE;
                        end else begin
                            bit_cnt <= bit_cnt - 1;
                            state <= SETUP;
                        end
                    end else begin
                        clk_cnt <= clk_cnt + 1;
                    end
                end

                DONE: begin
                    rx_data <= shift_reg;
                    busy <= 1'b0;
                    state <= IDLE;
                end
            endcase
        end
    end

    // Memory mapped read
    always @(*) begin
        read_data = 64'b0;
        if (read_req) begin
            if (address == 4'h0) begin
                read_data = {56'b0, rx_data};
            end else if (address == 4'h8) begin
                read_data = {48'b0, clk_div, 6'b0, busy, cs_n};
            end
        end
    end

endmodule
