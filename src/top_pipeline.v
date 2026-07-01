`include "src/pc_64b.v"
`include "src/pipeline_if.v"
`include "src/pipeline_id.v"
`include "src/multdiv_64b.v"
`include "src/pipeline_ex.v"
`include "src/pipeline_mem.v"
`include "src/pipeline_wb.v"
`include "src/pipeline_registers.v"
`include "src/hazards/forwarding_unit.v"
`include "src/hazards/hazard_detection_unit.v"
`include "src/pc_adder_4.v"
`include "src/register_file.v"
`include "src/control_unit.v"
`include "src/immediate_generator.v"
`include "src/alu_control.v"
`include "src/alu.v"
`include "src/branch_target_adder.v"
`include "src/addsub_rca_64b.v"
`include "src/rca_64b.v"
`include "src/fa_1b.v"
`include "src/and_64b.v"
`include "src/or_64b.v"
`include "src/xor_64b.v"
`include "src/sll_64b.v"
`include "src/srl_64b.v"
`include "src/sra_64b.v"
`include "src/slt_64b.v"
`include "src/sltu_64b.v"

module top_pipeline (
    input clk,
    input rst,

    // Instruction Memory Interface
    output [63:0] imem_address,
    input  [31:0] imem_instruction,

    // Data Memory Interface
    output        dmem_read_req,
    output        dmem_write_req,
    output [63:0] dmem_address,
    output [63:0] dmem_write_data,
    output [2:0]  dmem_funct3,
    input  [63:0] dmem_read_data_in,

    // Interrupts
    input         timer_interrupt
);
    // ----------------------------------------------------
    // hazard / forwarding control
    // ----------------------------------------------------
    wire        pc_stall;
    wire        if_id_stall;
    wire        id_ex_stall;
    wire        if_id_flush_ext;
    wire        id_ex_flush_ext;
    wire        ex_mem_flush;
    wire        multdiv_busy;
    wire [1:0]  ForwardA;
    wire [1:0]  ForwardB;

    // ----------------------------------------------------
    // if stage wires
    // ----------------------------------------------------
    wire [63:0] if_pc, if_pc4;
    wire [31:0] if_instruction;
    
    assign imem_address = if_pc;
    assign if_instruction = imem_instruction;

    // ----------------------------------------------------
    // if/id register outputs
    // ----------------------------------------------------
    wire [63:0] id_pc, id_pc4;
    wire [31:0] id_instruction;

    // ----------------------------------------------------
    // id stage outputs
    // ----------------------------------------------------
    wire        id_RegWrite, id_MemRead, id_MemWrite;
    wire [1:0]  id_MemToReg, id_ALUOp, id_ALUSrcA;
    wire        id_ALUSrc, id_Branch, id_Jump;
    wire [63:0] id_rs1_data, id_rs2_data, id_immediate;
    wire [4:0]  id_rs1, id_rs2, id_rd;
    wire [2:0]  id_funct3;
    wire [6:0]  id_funct7;
    wire [11:0] id_funct12;
    wire        id_is_csr, id_is_mret, id_is_32bit;
    wire [63:0] id_pc_out, id_pc4_out;

    // ----------------------------------------------------
    // id/ex register outputs
    // ----------------------------------------------------
    wire        ex_RegWrite, ex_MemRead, ex_MemWrite;
    wire [1:0]  ex_MemToReg, ex_ALUOp, ex_ALUSrcA;
    wire        ex_ALUSrc, ex_Branch, ex_Jump;
    wire [63:0] ex_pc, ex_pc4, ex_rs1_data, ex_rs2_data, ex_immediate;
    wire [4:0]  ex_rs1, ex_rs2, ex_rd;
    wire [2:0]  ex_funct3;
    wire [6:0]  ex_funct7;
    wire [11:0] ex_funct12;
    wire        ex_is_csr, ex_is_mret, ex_is_32bit;

    // ----------------------------------------------------
    // ex stage outputs
    // ----------------------------------------------------
    wire [63:0] ex_alu_result, ex_forwarded_rs2, ex_branch_target;
    wire        ex_alu_zero, ex_branch_taken;
    wire [63:0] trap_target_pc;
    wire        mstatus_mie, mie_mtie;

    // Trap Logic
    wire trap_pending = timer_interrupt & mstatus_mie & mie_mtie;
    // We only take a trap if there's no branch or flush happening from EX
    wire take_trap = trap_pending & ~(ex_branch_taken | ex_is_mret | ex_mem_flush);
    wire [63:0] trap_pc = id_pc;
    wire trap_flush = take_trap | ex_is_mret;

    // ----------------------------------------------------
    // ex/mem register outputs
    // ----------------------------------------------------
    wire        mem_RegWrite, mem_MemRead, mem_MemWrite;
    wire [1:0]  mem_MemToReg;
    wire        mem_Branch, mem_Jump, mem_alu_zero;
    wire [63:0] mem_alu_result, mem_rs2_data, mem_branch_target, mem_pc4;
    wire [4:0]  mem_rd;
    wire [2:0]  mem_funct3;

    // ----------------------------------------------------
    // mem stage outputs
    // ----------------------------------------------------
    wire [63:0] mem_read_data;

    // ----------------------------------------------------
    // mem/wb register outputs
    // ----------------------------------------------------
    wire        wb_RegWrite;
    wire [1:0]  wb_MemToReg;
    wire [63:0] wb_read_data, wb_alu_result, wb_pc4;
    wire [4:0]  wb_rd;

    // ----------------------------------------------------
    // wb stage output
    // ----------------------------------------------------
    wire [63:0] wb_write_data;

    // ----------------------------------------------------
    // pc-next mux: branch taken -> target, else pc+4
    // ----------------------------------------------------
    wire [63:0] pc_next;
    assign pc_next = take_trap ? trap_target_pc : 
                     ex_is_mret ? trap_target_pc : 
                     ex_branch_taken ? ex_branch_target : 
                     if_pc4;

    // forwarded data buses for ex stage
    wire [63:0] forward_mem_data = mem_alu_result;
    wire [63:0] forward_wb_data  = wb_write_data;

    // rs2 is only a real source for these ISA formats in this project subset.
    wire [6:0] id_opcode = id_instruction[6:0];
    wire id_uses_rs2 =
        (id_opcode == 7'b0110011) || // r-type
        (id_opcode == 7'b0100011) || // store
        (id_opcode == 7'b1100011);   // branch

    forwarding_unit u_forwarding (
        .ex_rs1       (ex_rs1),
        .ex_rs2       (ex_rs2),
        .mem_rd       (mem_rd),
        .wb_rd        (wb_rd),
        .mem_RegWrite (mem_RegWrite),
        .wb_RegWrite  (wb_RegWrite),
        .ForwardA     (ForwardA),
        .ForwardB     (ForwardB)
    );

    hazard_detection_unit u_hazard (
        .ex_MemRead   (ex_MemRead),
        .ex_rd        (ex_rd),
        .id_rs1       (id_rs1),
        .id_rs2       (id_rs2),
        .id_uses_rs2  (id_uses_rs2),
        .multdiv_busy (multdiv_busy),
        .pc_stall     (pc_stall),
        .if_id_stall  (if_id_stall),
        .id_ex_stall  (id_ex_stall),
        .id_ex_flush  (id_ex_flush_ext),
        .ex_mem_flush (ex_mem_flush)
    );

    assign if_id_flush_ext = 1'b0;

    // ----------------------------------------------------
    // stage / register instantiations
    // ----------------------------------------------------
    pc_64b u_pc (
        .clk        (clk),
        .rst        (rst),
        .en         (~pc_stall),
        .pc_next    (pc_next),
        .pc_current (if_pc)
    );

    pipeline_if u_if (
        .if_pc          (if_pc),
        .if_pc4         (if_pc4)
    );

    if_id_reg u_if_id (
        .clk            (clk),
        .rst            (rst),
        .stall          (if_id_stall),
        .flush          (if_id_flush_ext | ex_branch_taken | trap_flush),
        .if_pc          (if_pc),
        .if_pc4         (if_pc4),
        .if_instruction (if_instruction),
        .id_pc          (id_pc),
        .id_pc4         (id_pc4),
        .id_instruction (id_instruction)
    );

    pipeline_id u_id (
        .clk           (clk),
        .rst           (rst),
        .id_instruction(id_instruction),
        .id_pc         (id_pc),
        .id_pc4        (id_pc4),
        .wb_rd         (wb_rd),
        .wb_write_data (wb_write_data),
        .wb_RegWrite   (wb_RegWrite),
        .id_RegWrite   (id_RegWrite),
        .id_MemRead    (id_MemRead),
        .id_MemWrite   (id_MemWrite),
        .id_MemToReg   (id_MemToReg),
        .id_ALUSrc     (id_ALUSrc),
        .id_Branch     (id_Branch),
        .id_Jump       (id_Jump),
        .id_ALUOp      (id_ALUOp),
        .id_ALUSrcA    (id_ALUSrcA),
        .id_rs1_data   (id_rs1_data),
        .id_rs2_data   (id_rs2_data),
        .id_immediate  (id_immediate),
        .id_rs1        (id_rs1),
        .id_rs2        (id_rs2),
        .id_rd         (id_rd),
        .id_funct3     (id_funct3),
        .id_funct7     (id_funct7),
        .id_funct12    (id_funct12),
        .id_is_csr     (id_is_csr),
        .id_is_mret    (id_is_mret),
        .id_is_32bit   (id_is_32bit),
        .id_pc_out     (id_pc_out),
        .id_pc4_out    (id_pc4_out)
    );

    id_ex_reg u_id_ex (
        .clk           (clk),
        .rst           (rst),
        .stall         (id_ex_stall),
        .flush         (id_ex_flush_ext | ex_branch_taken | trap_flush),
        .id_RegWrite   (id_RegWrite),
        .id_MemRead    (id_MemRead),
        .id_MemWrite   (id_MemWrite),
        .id_MemToReg   (id_MemToReg),
        .id_ALUSrc     (id_ALUSrc),
        .id_Branch     (id_Branch),
        .id_Jump       (id_Jump),
        .id_is_csr     (id_is_csr),
        .id_is_mret    (id_is_mret),
        .id_is_32bit   (id_is_32bit),
        .id_ALUOp      (id_ALUOp),
        .id_ALUSrcA    (id_ALUSrcA),
        .id_pc         (id_pc_out),
        .id_pc4        (id_pc4_out),
        .id_rs1_data   (id_rs1_data),
        .id_rs2_data   (id_rs2_data),
        .id_immediate  (id_immediate),
        .id_rs1        (id_rs1),
        .id_rs2        (id_rs2),
        .id_rd         (id_rd),
        .id_funct3     (id_funct3),
        .id_funct7     (id_funct7),
        .id_funct12    (id_funct12),
        .ex_RegWrite   (ex_RegWrite),
        .ex_MemRead    (ex_MemRead),
        .ex_MemWrite   (ex_MemWrite),
        .ex_MemToReg   (ex_MemToReg),
        .ex_ALUSrc     (ex_ALUSrc),
        .ex_Branch     (ex_Branch),
        .ex_Jump       (ex_Jump),
        .ex_is_csr     (ex_is_csr),
        .ex_is_mret    (ex_is_mret),
        .ex_is_32bit   (ex_is_32bit),
        .ex_ALUOp      (ex_ALUOp),
        .ex_ALUSrcA    (ex_ALUSrcA),
        .ex_pc         (ex_pc),
        .ex_pc4        (ex_pc4),
        .ex_rs1_data   (ex_rs1_data),
        .ex_rs2_data   (ex_rs2_data),
        .ex_immediate  (ex_immediate),
        .ex_rs1        (ex_rs1),
        .ex_rs2        (ex_rs2),
        .ex_rd         (ex_rd),
        .ex_funct3     (ex_funct3),
        .ex_funct7     (ex_funct7),
        .ex_funct12    (ex_funct12)
    );

    pipeline_ex u_ex (
        .clk               (clk),
        .rst               (rst),
        .ex_pc             (ex_pc),
        .ex_pc4            (ex_pc4),
        .ex_rs1_data       (ex_rs1_data),
        .ex_rs2_data       (ex_rs2_data),
        .ex_immediate      (ex_immediate),
        .ex_rs1            (ex_rs1),
        .ex_rs2            (ex_rs2),
        .ex_rd             (ex_rd),
        .ex_funct3         (ex_funct3),
        .ex_funct7         (ex_funct7),
        .ex_funct12        (ex_funct12),
        .ex_is_csr         (ex_is_csr),
        .ex_is_mret        (ex_is_mret),
        .ex_is_32bit       (ex_is_32bit),
        .timer_interrupt   (timer_interrupt),
        .take_trap         (take_trap),
        .trap_pc           (trap_pc),
        .ex_ALUSrc         (ex_ALUSrc),
        .ex_ALUOp          (ex_ALUOp),
        .ex_ALUSrcA        (ex_ALUSrcA),
        .ex_Branch         (ex_Branch),
        .ex_Jump           (ex_Jump),
        .ForwardA          (ForwardA),
        .ForwardB          (ForwardB),
        .forward_mem_data  (forward_mem_data),
        .forward_wb_data   (forward_wb_data),
        .ex_alu_result     (ex_alu_result),
        .ex_alu_zero       (ex_alu_zero),
        .ex_forwarded_rs2  (ex_forwarded_rs2),
        .ex_branch_target  (ex_branch_target),
        .ex_branch_taken   (ex_branch_taken),
        .multdiv_busy      (multdiv_busy),
        .trap_target_pc    (trap_target_pc),
        .mstatus_mie       (mstatus_mie),
        .mie_mtie          (mie_mtie)
    );

    ex_mem_reg u_ex_mem (
        .clk                (clk),
        .rst                (rst),
        .flush              (ex_mem_flush),
        .ex_RegWrite        (ex_RegWrite),
        .ex_MemRead         (ex_MemRead),
        .ex_MemWrite        (ex_MemWrite),
        .ex_MemToReg        (ex_MemToReg),
        .ex_Branch          (ex_Branch),
        .ex_Jump            (ex_Jump),
        .ex_alu_result      (ex_alu_result),
        .ex_alu_zero        (ex_alu_zero),
        .ex_rs2_data        (ex_forwarded_rs2),
        .ex_rd              (ex_rd),
        .ex_branch_target   (ex_branch_target),
        .ex_pc4             (ex_pc4),
        .ex_funct3          (ex_funct3),
        .mem_RegWrite       (mem_RegWrite),
        .mem_MemRead        (mem_MemRead),
        .mem_MemWrite       (mem_MemWrite),
        .mem_MemToReg       (mem_MemToReg),
        .mem_Branch         (mem_Branch),
        .mem_Jump           (mem_Jump),
        .mem_alu_result     (mem_alu_result),
        .mem_alu_zero       (mem_alu_zero),
        .mem_rs2_data       (mem_rs2_data),
        .mem_rd             (mem_rd),
        .mem_branch_target  (mem_branch_target),
        .mem_pc4            (mem_pc4),
        .mem_funct3         (mem_funct3)
    );

    pipeline_mem u_mem (
        .clk               (clk),
        .rst               (rst),
        .mem_MemRead       (mem_MemRead),
        .mem_MemWrite      (mem_MemWrite),
        .mem_alu_result    (mem_alu_result),
        .mem_rs2_data      (mem_rs2_data),
        .mem_funct3        (mem_funct3),
        .mem_read_data     (mem_read_data),
        // External Memory Interface
        .dmem_read_req     (dmem_read_req),
        .dmem_write_req    (dmem_write_req),
        .dmem_address      (dmem_address),
        .dmem_write_data   (dmem_write_data),
        .dmem_funct3       (dmem_funct3),
        .dmem_read_data_in (dmem_read_data_in)
    );

    mem_wb_reg u_mem_wb (
        .clk            (clk),
        .rst            (rst),
        .mem_RegWrite   (mem_RegWrite),
        .mem_MemToReg   (mem_MemToReg),
        .mem_read_data  (mem_read_data),
        .mem_alu_result (mem_alu_result),
        .mem_rd         (mem_rd),
        .mem_pc4        (mem_pc4),
        .wb_RegWrite    (wb_RegWrite),
        .wb_MemToReg    (wb_MemToReg),
        .wb_read_data   (wb_read_data),
        .wb_alu_result  (wb_alu_result),
        .wb_rd          (wb_rd),
        .wb_pc4         (wb_pc4)
    );

    pipeline_wb u_wb (
        .wb_MemToReg   (wb_MemToReg),
        .wb_alu_result (wb_alu_result),
        .wb_read_data  (wb_read_data),
        .wb_pc4        (wb_pc4),
        .wb_write_data (wb_write_data)
    );

endmodule
