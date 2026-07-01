module cla_64b (
    input  wire [63:0] a,
    input  wire [63:0] b,
    input  wire        cin,
    output wire [63:0] sum,
    output wire        cout,
    output wire        carry_into_msb
);
    wire [3:0] p, g;
    wire [4:0] c;

    assign c[0] = cin;
    assign c[1] = g[0] | (p[0] & cin);
    assign c[2] = g[1] | (p[1] & g[0]) | (p[1] & p[0] & cin);
    assign c[3] = g[2] | (p[2] & g[1]) | (p[2] & p[1] & g[0]) | (p[2] & p[1] & p[0] & cin);
    assign c[4] = g[3] | (p[3] & g[2]) | (p[3] & p[2] & g[1]) | (p[3] & p[2] & p[1] & g[0]) | (p[3] & p[2] & p[1] & p[0] & cin);
    
    wire c63_from_last;

    cla_16b block0 (.a(a[15:0]),  .b(b[15:0]),  .cin(c[0]), .sum(sum[15:0]),  .g_out(g[0]), .p_out(p[0]), .c15_out());
    cla_16b block1 (.a(a[31:16]), .b(b[31:16]), .cin(c[1]), .sum(sum[31:16]), .g_out(g[1]), .p_out(p[1]), .c15_out());
    cla_16b block2 (.a(a[47:32]), .b(b[47:32]), .cin(c[2]), .sum(sum[47:32]), .g_out(g[2]), .p_out(p[2]), .c15_out());
    cla_16b block3 (.a(a[63:48]), .b(b[63:48]), .cin(c[3]), .sum(sum[63:48]), .g_out(g[3]), .p_out(p[3]), .c15_out(c63_from_last));

    assign cout = c[4];
    assign carry_into_msb = c63_from_last;

endmodule
