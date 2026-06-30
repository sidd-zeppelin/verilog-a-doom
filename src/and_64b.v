module and_64b(
    input wire [63:0] a,
    input wire [63:0] b,
    output wire [63:0] result
);

    genvar i;
    generate
        for(i = 0; i < 64; i = i + 1) begin : and_64b
            assign result[i] = a[i] & b[i];
        end
    endgenerate
endmodule