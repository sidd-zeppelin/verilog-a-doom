module branch_target_adder (
    input  wire [63:0] pc_current,
    input  wire [63:0] offset,
    output wire [63:0] branch_target
);

    wire        cout;
    wire        carry_into_msb;

    rca_64b adder_inst (
        .a(pc_current),
        .b(offset),
        .cin(1'b0),
        .sum(branch_target),
        .cout(cout),
        .carry_into_msb(carry_into_msb)
    );

endmodule
