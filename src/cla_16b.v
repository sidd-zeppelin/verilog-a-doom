module cla_16b (
    input  wire [15:0] a,
    input  wire [15:0] b,
    input  wire        cin,
    output wire [15:0] sum,
    output wire        g_out,
    output wire        p_out,
    output wire        c15_out
);
    wire [3:0] p, g;
    wire [4:0] c;

    assign c[0] = cin;
    assign c[1] = g[0] | (p[0] & cin);
    assign c[2] = g[1] | (p[1] & g[0]) | (p[1] & p[0] & cin);
    assign c[3] = g[2] | (p[2] & g[1]) | (p[2] & p[1] & g[0]) | (p[2] & p[1] & p[0] & cin);
    
    wire c3_from_last;

    cla_4b block0 (.a(a[3:0]),   .b(b[3:0]),   .cin(c[0]), .sum(sum[3:0]),   .g_out(g[0]), .p_out(p[0]), .c3_out());
    cla_4b block1 (.a(a[7:4]),   .b(b[7:4]),   .cin(c[1]), .sum(sum[7:4]),   .g_out(g[1]), .p_out(p[1]), .c3_out());
    cla_4b block2 (.a(a[11:8]),  .b(b[11:8]),  .cin(c[2]), .sum(sum[11:8]),  .g_out(g[2]), .p_out(p[2]), .c3_out());
    cla_4b block3 (.a(a[15:12]), .b(b[15:12]), .cin(c[3]), .sum(sum[15:12]), .g_out(g[3]), .p_out(p[3]), .c3_out(c3_from_last));

    assign p_out = p[0] & p[1] & p[2] & p[3];
    assign g_out = g[3] | (p[3] & g[2]) | (p[3] & p[2] & g[1]) | (p[3] & p[2] & p[1] & g[0]);
    assign c15_out = c3_from_last;

endmodule