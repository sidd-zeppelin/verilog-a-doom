module pc_adder_4 (
    input  wire [63:0] pc_current,
    output wire [63:0] pc_plus_4
);

    wire        cout;
    wire        carry_into_msb;

    rca_64b adder_inst (
        .a(pc_current),
        .b(64'h0000_0000_0000_0004),
        .cin(1'b0),
        .sum(pc_plus_4),
        .cout(cout),
        .carry_into_msb(carry_into_msb)
    );

endmodule
