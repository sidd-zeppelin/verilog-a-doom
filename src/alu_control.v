module alu_control (
    input  [1:0] ALUOp,
    input        funct7_bit5, // instruction[30]
    input  [2:0] funct3,      // instruction[14:12]
    output reg [3:0] ALUControl
);
    localparam [3:0] ALU_ADD  = 4'b0000;
    localparam [3:0] ALU_SLL  = 4'b0001;
    localparam [3:0] ALU_SLT  = 4'b0010;
    localparam [3:0] ALU_SLTU = 4'b0011;
    localparam [3:0] ALU_XOR  = 4'b0100;
    localparam [3:0] ALU_SRL  = 4'b0101;
    localparam [3:0] ALU_OR   = 4'b0110;
    localparam [3:0] ALU_AND  = 4'b0111;
    localparam [3:0] ALU_SUB  = 4'b1000;
    localparam [3:0] ALU_SRA  = 4'b1101;
    localparam [3:0] ALU_INV  = 4'b1111;

    always @(*) begin
        case (ALUOp)
            2'b00: begin
                // ld, sd, addi address/arith path
                ALUControl = ALU_ADD;
            end
            2'b01: begin
                // beq compare path
                ALUControl = ALU_SUB;
            end
            2'b10: begin
                // R-type decode using funct fields
                case (funct3)
                    3'b000: ALUControl = funct7_bit5 ? ALU_SUB : ALU_ADD; // sub/add
                    3'b001: ALUControl = ALU_SLL;  // sll
                    3'b010: ALUControl = ALU_SLT;  // slt
                    3'b011: ALUControl = ALU_SLTU; // sltu
                    3'b100: ALUControl = ALU_XOR;  // xor
                    3'b101: ALUControl = funct7_bit5 ? ALU_SRA : ALU_SRL; // sra/srl
                    3'b110: ALUControl = ALU_OR;   // or
                    3'b111: ALUControl = ALU_AND;  // and
                endcase
            end
            2'b11: begin
                // I-type arithmetic/logical decode
                case (funct3)
                    3'b000: ALUControl = ALU_ADD;  // addi
                    3'b001: ALUControl = ALU_SLL;  // slli
                    3'b010: ALUControl = ALU_SLT;  // slti
                    3'b011: ALUControl = ALU_SLTU; // sltiu
                    3'b100: ALUControl = ALU_XOR;  // xori
                    3'b101: ALUControl = funct7_bit5 ? ALU_SRA : ALU_SRL; // srai/srli
                    3'b110: ALUControl = ALU_OR;   // ori
                    3'b111: ALUControl = ALU_AND;  // andi
                endcase
            end
            default: ALUControl = ALU_INV;
        endcase
    end
endmodule
