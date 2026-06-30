module pipeline_if (
    input  [63:0] if_pc,
    output [63:0] if_pc4,
    output [31:0] if_instruction
);
    pc_adder_4 u_pc4 (
        .pc_current (if_pc),
        .pc_plus_4  (if_pc4)
    );

    instruction_mem u_imem (
        .addr  (if_pc),
        .instr (if_instruction)
    );
endmodule
