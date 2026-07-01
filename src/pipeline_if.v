module pipeline_if (
    input  [63:0] if_pc,
    output [63:0] if_pc4
);
    pc_adder_4 u_pc4 (
        .pc_current (if_pc),
        .pc_plus_4  (if_pc4)
    );

    // Instruction fetch is now performed externally by system_memory
endmodule
