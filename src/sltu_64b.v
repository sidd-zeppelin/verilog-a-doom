module sltu_64b (
    input  wire [63:0] rs1,
    input  wire [63:0] rs2,
    output wire [63:0] result
);

    wire less_unsigned;

    assign less_unsigned = (rs1 < rs2);
    assign result = {63'b0, less_unsigned};

endmodule
