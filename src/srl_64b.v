module srl_64b (
    input  wire [63:0] a,
    input  wire [5:0]  shamt,
    output wire [63:0] result
);

    wire [63:0] s1;
    wire [63:0] s2;
    wire [63:0] s3;
    wire [63:0] s4;
    wire [63:0] s5;
    wire [63:0] s6;

    genvar i;

    generate
        for (i = 0; i < 64; i = i + 1) begin : SRL_1
            assign s1[i] = (shamt[0] == 1'b1 && (i + 1) < 64) ? a[i+1] : (shamt[0] == 1'b1 && (i + 1) >= 64) ? 1'b0 : a[i];
        end
    endgenerate

    generate
        for (i = 0; i < 64; i = i + 1) begin : SRL_2
            assign s2[i] = (shamt[1] == 1'b1 && (i + 2) < 64) ? s1[i+2] : (shamt[1] == 1'b1 && (i + 2) >= 64) ? 1'b0 : s1[i];
        end
    endgenerate

    generate
        for (i = 0; i < 64; i = i + 1) begin : SRL_4
            assign s3[i] = (shamt[2] == 1'b1 && (i + 4) < 64) ? s2[i+4] : (shamt[2] == 1'b1 && (i + 4) >= 64) ? 1'b0 : s2[i];
        end
    endgenerate

    generate
        for (i = 0; i < 64; i = i + 1) begin : SRL_8
            assign s4[i] = (shamt[3] == 1'b1 && (i + 8) < 64) ? s3[i+8] : (shamt[3] == 1'b1 && (i + 8) >= 64) ? 1'b0 : s3[i];
        end
    endgenerate

    generate
        for (i = 0; i < 64; i = i + 1) begin : SRL_16
            assign s5[i] = (shamt[4] == 1'b1 && (i + 16) < 64) ? s4[i+16] : (shamt[4] == 1'b1 && (i + 16) >= 64) ? 1'b0 : s4[i];
        end
    endgenerate

    generate
        for (i = 0; i < 64; i = i + 1) begin : SRL_32
            assign s6[i] = (shamt[5] == 1'b1 && (i + 32) < 64) ? s5[i+32] : (shamt[5] == 1'b1 && (i + 32) >= 64) ? 1'b0 : s5[i];
        end
    endgenerate

    assign result = s6;

endmodule
