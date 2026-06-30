module slt_64b (
    input  wire [63:0] rs1,
    input  wire [63:0] rs2,
    output wire [63:0] result
);

    wire rs1_sign;
    wire rs2_sign;
    wire signs_different;
    wire rs1_less_rs2_unsigned;
    wire rs1_less_rs2_signed;

    assign rs1_sign = rs1[63];
    assign rs2_sign = rs2[63];

    assign signs_different = (rs1_sign != rs2_sign);

    assign rs1_less_rs2_unsigned = (rs1 < rs2);

    assign rs1_less_rs2_signed = (signs_different == 1'b1) ? rs1_sign : rs1_less_rs2_unsigned;
    assign result = {63'b0, rs1_less_rs2_signed};

endmodule
