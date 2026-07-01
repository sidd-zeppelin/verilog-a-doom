module addsub_cla_64b(
    input  wire [63:0] a,
    input  wire [63:0] b,
    input  wire        sub,
    output wire [63:0] result,
    output wire        cout,
    output wire        overflow
);

    wire [63:0] use_b;
    wire        carry_into_msb;

    assign use_b = b ^ {64{sub}};

    cla_64b cla_inst (
        .a(a),
        .b(use_b),
        .cin(sub),
        .sum(result),
        .cout(cout),
        .carry_into_msb(carry_into_msb)
    );

    assign overflow = carry_into_msb ^ cout;

endmodule
