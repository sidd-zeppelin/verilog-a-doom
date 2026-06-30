module pc_64b (
    input  wire        clk,
    input  wire        rst,
    input  wire        en,
    input  wire [63:0] pc_next,
    output reg  [63:0] pc_current
);

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            pc_current <= 64'h0000_0000_0000_0000;
        end else if (en) begin
            pc_current <= pc_next;
        end
    end

endmodule
