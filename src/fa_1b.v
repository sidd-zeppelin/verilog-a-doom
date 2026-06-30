module fa_1b(
    input wire a,
    input wire b,
    input wire cin,
    output wire sum,
    output wire cout
);

    wire x1;
    xor (x1, a, b);
    xor (sum, x1, cin);
    
    wire c1;
    and (c1, a, b);
    wire c2;
    and (c2, x1, cin);
    or (cout, c1, c2);

endmodule