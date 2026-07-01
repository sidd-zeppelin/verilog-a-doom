module immediate_generator (
    input  [31:0] instruction,
    output reg [63:0] immediate
);
    wire [6:0] opcode;
    assign opcode = instruction[6:0];

    always @(*) begin
        case (opcode)
            7'b0010011, // I-type arithmetic: addi
            7'b0011011, // I-type arithmetic 32-bit: addiw
            7'b0000011, // I-type loads: ld
            7'b1100111: // I-type jump: jalr
                immediate = {{52{instruction[31]}}, instruction[31:20]};

            7'b0100011: // S-type stores: sd
                immediate = {{52{instruction[31]}}, instruction[31:25], instruction[11:7]};

            7'b1100011: // B-type branches: beq, bne, etc.
                immediate = {{51{instruction[31]}}, instruction[31], instruction[7],
                             instruction[30:25], instruction[11:8], 1'b0};

            7'b1101111: // J-type jump: jal
                immediate = {{43{instruction[31]}}, instruction[31], instruction[19:12],
                             instruction[20], instruction[30:21], 1'b0};

            7'b0110111, // U-type: lui
            7'b0010111: // U-type: auipc
                immediate = {{32{instruction[31]}}, instruction[31:12], 12'b0};

            default:
                immediate = 64'd0;
        endcase
    end
endmodule
