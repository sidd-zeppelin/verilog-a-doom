module pipeline_ex (
    input         clk,
    input         rst,
    input  [63:0] ex_pc, ex_pc4,
    input  [63:0] ex_rs1_data, ex_rs2_data, ex_immediate,
    input  [4:0]  ex_rs1, ex_rs2, ex_rd,
    input  [2:0]  ex_funct3,
    input  [6:0]  ex_funct7,
    input         ex_ALUSrc,
    input  [1:0]  ex_ALUOp, ex_ALUSrcA,
    input         ex_Branch, ex_Jump,
    // forwarding inputs 
    input  [1:0]  ForwardA, ForwardB,
    input  [63:0] forward_mem_data, forward_wb_data,
    // outputs
    output [63:0] ex_alu_result,
    output        ex_alu_zero,
    output [63:0] ex_forwarded_rs2,
    output [63:0] ex_branch_target,
    output        ex_branch_taken,
    output        multdiv_busy
);
    // forwarding mux — operand a
    reg [63:0] fwd_rs1;
    always @(*) begin
        case (ForwardA)
            2'b01:   fwd_rs1 = forward_mem_data;
            2'b10:   fwd_rs1 = forward_wb_data;
            default: fwd_rs1 = ex_rs1_data;
        endcase
    end
    
    reg [63:0] alu_op_a;
    always @(*) begin
        case (ex_ALUSrcA)
            2'b01:   alu_op_a = ex_pc;
            2'b10:   alu_op_a = 64'b0;
            default: alu_op_a = fwd_rs1;
        endcase
    end

    // forwarding mux — operand b (pre-alusrc)
    reg [63:0] fwd_rs2;
    always @(*) begin
        case (ForwardB)
            2'b01:   fwd_rs2 = forward_mem_data;
            2'b10:   fwd_rs2 = forward_wb_data;
            default: fwd_rs2 = ex_rs2_data;
        endcase
    end
    assign ex_forwarded_rs2 = fwd_rs2;

    // alusrc mux
    wire [63:0] alu_op_b;
    assign alu_op_b = ex_ALUSrc ? ex_immediate : fwd_rs2;

    wire [3:0] alu_ctrl;
    alu_control u_alu_ctrl (
        .ALUOp       (ex_ALUOp),
        .funct3      (ex_funct3),
        .funct7_bit5 (ex_funct7[5]),
        .ALUControl  (alu_ctrl)
    );

    wire [63:0] alu_res;
    alu u_alu (
        .a         (alu_op_a),
        .b         (alu_op_b),
        .opcode    (alu_ctrl),
        .result    (alu_res),
        .zero_flag (ex_alu_zero)
    );

    wire is_m_ext = (ex_ALUOp == 2'b10) && (ex_funct7 == 7'b0000001);
    wire [63:0] multdiv_result;

    multdiv_64b u_multdiv (
        .clk      (clk),
        .rst      (rst),
        .is_m_ext (is_m_ext),
        .funct3   (ex_funct3),
        .a        (alu_op_a),
        .b        (alu_op_b),
        .result   (multdiv_result),
        .busy     (multdiv_busy)
    );

    assign ex_alu_result = is_m_ext ? multdiv_result : alu_res;

    wire [63:0] bta_result;
    branch_target_adder u_bta (
        .pc_current    (ex_pc),
        .offset        (ex_immediate),
        .branch_target (bta_result)
    );

    // Jump target logic
    // JALR is Jump and uses ALUSrc
    wire is_jalr = ex_Jump & ex_ALUSrc;
    assign ex_branch_target = is_jalr ? {ex_alu_result[63:1], 1'b0} : bta_result;

    // Branch condition evaluation based on funct3
    reg branch_cond;
    always @(*) begin
        case (ex_funct3)
            3'b000:  branch_cond =  ex_alu_zero;                        // beq
            3'b001:  branch_cond = ~ex_alu_zero;                        // bne
            3'b100:  branch_cond =  ex_alu_result[63];                  // blt  (SUB result negative)
            3'b101:  branch_cond = ~ex_alu_result[63] | ex_alu_zero;    // bge
            3'b110:  branch_cond = ~ex_alu_zero & (alu_op_a < fwd_rs2); // bltu (unsigned)
            3'b111:  branch_cond =  ex_alu_zero | (alu_op_a >= fwd_rs2);// bgeu (unsigned)
            default: branch_cond = 1'b0;
        endcase
    end
    assign ex_branch_taken = (ex_Branch & branch_cond) | ex_Jump;
endmodule
