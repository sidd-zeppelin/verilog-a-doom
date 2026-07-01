module clint (
    input clk,
    input rst,

    // MMIO Interface
    input clint_read_req,
    input clint_write_req,
    input [3:0] clint_address, // 4-bit offset
    input [63:0] clint_write_data,
    output reg [63:0] clint_read_data,

    output timer_interrupt
);
    reg [63:0] mtime;
    reg [63:0] mtimecmp;

    assign timer_interrupt = (mtime >= mtimecmp);

    always @(posedge clk) begin
        if (rst) begin
            mtime <= 64'b0;
            mtimecmp <= 64'hFFFFFFFFFFFFFFFF; // Max value so no immediate interrupt
        end else begin
            mtime <= mtime + 1; // Increment every cycle
            
            if (clint_write_req) begin
                if (clint_address == 4'h0) mtimecmp <= clint_write_data;
                if (clint_address == 4'h8) mtime <= clint_write_data;
            end
        end
    end

    always @(*) begin
        if (clint_read_req) begin
            if (clint_address == 4'h0) clint_read_data = mtimecmp;
            else if (clint_address == 4'h8) clint_read_data = mtime;
            else clint_read_data = 64'b0;
        end else begin
            clint_read_data = 64'b0;
        end
    end
endmodule
