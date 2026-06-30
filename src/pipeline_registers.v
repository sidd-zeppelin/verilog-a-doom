// if/id register
module if_id_reg (
    input             clk, rst, stall, flush,
    input  [63:0]     if_pc, if_pc4,
    input  [31:0]     if_instruction,
    output reg [63:0] id_pc, id_pc4,
    output reg [31:0] id_instruction
);
    always @(posedge clk or posedge rst) begin
        if (rst || flush) begin
            id_pc          <= 64'b0;
            id_pc4         <= 64'b0;
            id_instruction <= 32'h0000_0013; // nop
        end else if (!stall) begin
            id_pc          <= if_pc;
            id_pc4         <= if_pc4;
            id_instruction <= if_instruction;
        end
    end
endmodule

// id/ex register
module id_ex_reg (
    input            clk, rst, stall, flush,
    input            id_RegWrite, id_MemRead, id_MemWrite,
    input  [1:0]     id_MemToReg, id_ALUOp, id_ALUSrcA,
    input            id_ALUSrc, id_Branch, id_Jump,
    input  [63:0]    id_pc, id_pc4, id_rs1_data, id_rs2_data, id_immediate,
    input  [4:0]     id_rs1, id_rs2, id_rd,
    input  [2:0]     id_funct3,
    input  [6:0]     id_funct7,

    output reg           ex_RegWrite, ex_MemRead, ex_MemWrite,
    output reg [1:0]     ex_MemToReg, ex_ALUOp, ex_ALUSrcA,
    output reg           ex_ALUSrc, ex_Branch, ex_Jump,
    output reg [63:0]    ex_pc, ex_pc4, ex_rs1_data, ex_rs2_data, ex_immediate,
    output reg [4:0]     ex_rs1, ex_rs2, ex_rd,
    output reg [2:0]     ex_funct3,
    output reg [6:0]     ex_funct7
);
    always @(posedge clk or posedge rst) begin
        if (rst || flush) begin
            ex_RegWrite  <= 0; ex_MemRead  <= 0; ex_MemWrite <= 0;
            ex_MemToReg  <= 0; ex_ALUOp   <= 0; ex_ALUSrcA <= 0;
            ex_ALUSrc    <= 0; ex_Branch  <= 0; ex_Jump     <= 0;
            ex_pc        <= 0; ex_pc4     <= 0;
            ex_rs1_data  <= 0; ex_rs2_data <= 0; ex_immediate <= 0;
            ex_rs1       <= 0; ex_rs2     <= 0; ex_rd       <= 0;
            ex_funct3    <= 0; ex_funct7  <= 0;
        end else if (!stall) begin
            ex_RegWrite  <= id_RegWrite; ex_MemRead  <= id_MemRead;
            ex_MemWrite  <= id_MemWrite; ex_MemToReg <= id_MemToReg;
            ex_ALUOp     <= id_ALUOp;    ex_ALUSrcA  <= id_ALUSrcA;
            ex_ALUSrc    <= id_ALUSrc;
            ex_Branch    <= id_Branch;  ex_Jump      <= id_Jump;
            ex_pc        <= id_pc;      ex_pc4       <= id_pc4;
            ex_rs1_data  <= id_rs1_data; ex_rs2_data <= id_rs2_data;
            ex_immediate <= id_immediate;
            ex_rs1       <= id_rs1; ex_rs2 <= id_rs2; ex_rd <= id_rd;
            ex_funct3    <= id_funct3;  ex_funct7   <= id_funct7;
        end
    end
endmodule

// ex/mem register
module ex_mem_reg (
    input            clk, rst, flush,
    input            ex_RegWrite, ex_MemRead, ex_MemWrite,
    input  [1:0]     ex_MemToReg,
    input            ex_Branch, ex_Jump,
    input  [63:0]    ex_alu_result, ex_rs2_data, ex_branch_target, ex_pc4,
    input            ex_alu_zero,
    input  [4:0]     ex_rd,
    input  [2:0]     ex_funct3,

    output reg           mem_RegWrite, mem_MemRead, mem_MemWrite,
    output reg [1:0]     mem_MemToReg,
    output reg           mem_Branch, mem_Jump,
    output reg [63:0]    mem_alu_result, mem_rs2_data, mem_branch_target, mem_pc4,
    output reg           mem_alu_zero,
    output reg [4:0]     mem_rd,
    output reg [2:0]     mem_funct3
);
    always @(posedge clk or posedge rst) begin
        if (rst || flush) begin
            mem_RegWrite      <= 0; mem_MemRead  <= 0; mem_MemWrite <= 0;
            mem_MemToReg      <= 0; mem_Branch   <= 0; mem_Jump     <= 0;
            mem_alu_result    <= 0; mem_rs2_data <= 0;
            mem_branch_target <= 0; mem_pc4      <= 0;
            mem_alu_zero      <= 0; mem_rd       <= 0; mem_funct3   <= 0;
        end else begin
            mem_RegWrite      <= ex_RegWrite;  mem_MemRead  <= ex_MemRead;
            mem_MemWrite      <= ex_MemWrite;  mem_MemToReg <= ex_MemToReg;
            mem_Branch        <= ex_Branch;    mem_Jump     <= ex_Jump;
            mem_alu_result    <= ex_alu_result; mem_rs2_data <= ex_rs2_data;
            mem_branch_target <= ex_branch_target; mem_pc4  <= ex_pc4;
            mem_alu_zero      <= ex_alu_zero;  mem_rd       <= ex_rd;
            mem_funct3        <= ex_funct3;
        end
    end
endmodule

// mem/wb register
module mem_wb_reg (
    input            clk, rst,
    input            mem_RegWrite,
    input  [1:0]     mem_MemToReg,
    input  [63:0]    mem_read_data, mem_alu_result, mem_pc4,
    input  [4:0]     mem_rd,

    output reg           wb_RegWrite,
    output reg [1:0]     wb_MemToReg,
    output reg [63:0]    wb_read_data, wb_alu_result, wb_pc4,
    output reg [4:0]     wb_rd
);
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            wb_RegWrite   <= 0; wb_MemToReg   <= 0;
            wb_read_data  <= 0; wb_alu_result <= 0;
            wb_pc4        <= 0; wb_rd         <= 0;
        end else begin
            wb_RegWrite   <= mem_RegWrite;  wb_MemToReg  <= mem_MemToReg;
            wb_read_data  <= mem_read_data; wb_alu_result <= mem_alu_result;
            wb_pc4        <= mem_pc4;       wb_rd        <= mem_rd;
        end
    end
endmodule
