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
    input         ex_is_csr, ex_is_mret, ex_is_32bit,
    input  [11:0] ex_funct12,
    input         timer_interrupt,
    input         take_trap,
    input  [63:0] trap_pc,
    // forwarding inputs 
    input  [1:0]  ForwardA, ForwardB,
    input  [63:0] forward_mem_data, forward_wb_data,
    // outputs
    output [63:0] ex_alu_result,
    output        ex_alu_zero,
    output [63:0] ex_forwarded_rs2,
    output [63:0] ex_branch_target,
    output        ex_branch_taken,
    output        multdiv_busy,
    output [63:0] trap_target_pc,
    output        mstatus_mie,
    output        mie_mtie
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

    wire [63:0] alu_result_raw;
    assign alu_result_raw = is_m_ext ? multdiv_result : alu_res;

    wire [63:0] alu_result_32;
    assign alu_result_32 = {{32{alu_result_raw[31]}}, alu_result_raw[31:0]};

    wire [63:0] alu_result_mux;
    assign alu_result_mux = ex_is_32bit ? alu_result_32 : alu_result_raw;

    // CSR Logic
    wire is_csr_rs_rc = (ex_funct3 == 3'b010) | (ex_funct3 == 3'b011) | (ex_funct3 == 3'b110) | (ex_funct3 == 3'b111);
    wire csr_write_en = ex_is_csr & ~(is_csr_rs_rc & (ex_rs1 == 5'b0));
    wire csr_read_en = ex_is_csr;
    
    wire [63:0] csr_rdata;
    reg  [63:0] csr_write_data;
    
    always @(*) begin
        case (ex_funct3)
            3'b001: csr_write_data = fwd_rs1;
            3'b010: csr_write_data = csr_rdata | fwd_rs1;
            3'b011: csr_write_data = csr_rdata & ~fwd_rs1;
            3'b101: csr_write_data = {59'b0, ex_rs1};
            3'b110: csr_write_data = csr_rdata | {59'b0, ex_rs1};
            3'b111: csr_write_data = csr_rdata & ~{59'b0, ex_rs1};
            default: csr_write_data = fwd_rs1;
        endcase
    end

    wire [63:0] mepc_out;
    wire [63:0] mtvec_out;

    csr_regfile u_csr (
        .clk(clk),
        .rst(rst),
        .csr_addr(ex_funct12),
        .csr_wdata(csr_write_data),
        .csr_write(csr_write_en),
        .csr_read(csr_read_en),
        .csr_rdata(csr_rdata),
        .timer_interrupt(timer_interrupt),
        .take_trap(take_trap),
        .trap_pc(trap_pc),
        .is_mret(ex_is_mret),
        .mepc(mepc_out),
        .mtvec(mtvec_out),
        .mstatus_mie(mstatus_mie),
        .mie_mtie(mie_mtie)
    );

    assign ex_alu_result = ex_is_csr ? csr_rdata : alu_result_mux;
    assign trap_target_pc = ex_is_mret ? mepc_out : mtvec_out;

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
