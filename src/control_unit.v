module control_unit (
    input  [6:0]     opcode,
    output reg       Branch,
    output reg       Jump,
    output reg       MemRead,
    output reg [1:0] MemtoReg,  // 00=alu, 01=mem, 10=pc+4
    output reg [1:0] ALUOp,
    output reg       MemWrite,
    output reg       ALUSrc,
    output reg [1:0] ALUSrcA,   // 00=rs1, 01=pc, 10=0
    output reg       RegWrite
);
    always @(*) begin
        Branch   = 1'b0;
        Jump     = 1'b0;
        MemRead  = 1'b0;
        MemtoReg = 2'b00;
        ALUOp    = 2'b00;
        MemWrite = 1'b0;
        ALUSrc   = 1'b0;
        ALUSrcA  = 2'b00;
        RegWrite = 1'b0;

        case (opcode)
            7'b0110011: begin // r-type
                ALUOp    = 2'b10;
                RegWrite = 1'b1;
            end
            7'b0010011: begin // I-type arithmetic
                ALUOp    = 2'b11;
                RegWrite = 1'b1;
                ALUSrc   = 1'b1;
            end
            7'b0000011: begin // loads
                ALUOp    = 2'b00;
                MemRead  = 1'b1;
                MemtoReg = 2'b01;
                RegWrite = 1'b1;
                ALUSrc   = 1'b1;
            end
            7'b0100011: begin // stores
                ALUOp    = 2'b00;
                MemWrite = 1'b1;
                ALUSrc   = 1'b1;
            end
            7'b1100011: begin // branches
                Branch   = 1'b1;
                ALUOp    = 2'b01;
            end
            7'b1101111: begin // jal
                Jump     = 1'b1;
                RegWrite = 1'b1;
                MemtoReg = 2'b10; // Use pc+4
            end
            7'b1100111: begin // jalr
                Jump     = 1'b1;
                RegWrite = 1'b1;
                MemtoReg = 2'b10; // Use pc+4
                ALUSrc   = 1'b1;  // Pass rs1 to adder, target is (rs1 + imm)
                ALUOp    = 2'b00; // ADD
            end
            7'b0110111: begin // lui
                RegWrite = 1'b1;
                ALUSrc   = 1'b1;
                ALUSrcA  = 2'b10; // 0
                ALUOp    = 2'b00; // ADD
            end
            7'b0010111: begin // auipc
                RegWrite = 1'b1;
                ALUSrc   = 1'b1;
                ALUSrcA  = 2'b01; // PC
                ALUOp    = 2'b00; // ADD
            end
        endcase
    end
endmodule
