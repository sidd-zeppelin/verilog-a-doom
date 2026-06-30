module rca_64b(
    input  wire [63:0] a,
    input  wire [63:0] b,
    input  wire        cin,
    output wire [63:0] sum,
    output wire        cout,
    output wire        carry_into_msb
);

    wire [64:0] carry;
    assign carry[0] = cin;

    genvar i;
    generate
        for(i = 0; i < 64; i = i + 1) begin : rca_gen
            fa_1b fa_inst (
                .a(a[i]),
                .b(b[i]),
                .cin(carry[i]),
                .sum(sum[i]),
                .cout(carry[i+1])
            );
        end
    endgenerate

    assign carry_into_msb = carry[63];
    assign cout           = carry[64];

endmodule
