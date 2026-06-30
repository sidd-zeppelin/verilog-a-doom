`define IMEM_SIZE 4096

module instruction_mem (
    input  [63:0] addr,          // 64-bit PC input
    output [31:0] instr          // 32-bit Instruction output
);

    // Declare memory array 8-bit wide byte-addressed
    reg [7:0] mem [0:`IMEM_SIZE-1];
    integer i;
    integer be_score, le_score;
    integer scan_idx;
    reg [31:0] word_be, word_le;
    reg use_little_endian;

    function is_supported_opcode;
        input [6:0] opcode;
        begin
            case (opcode)
                7'b0110011, // r-type
                7'b0010011, // i-type (addi)
                7'b0000011, // loads
                7'b0100011, // stores
                7'b1100011: // branches
                    is_supported_opcode = 1'b1;
                default:
                    is_supported_opcode = 1'b0;
            endcase
        end
    endfunction

    // Initialize memory
    initial begin
        // Read byte-addressed hex from instructions.txt 
        $readmemh("instructions.txt", mem);
        // Patch any locations readmemh left as 'x' to 0x00
        for (i = 0; i < `IMEM_SIZE; i = i + 1) begin
            if (mem[i] === 8'hx)
                mem[i] = 8'h00;
        end

        // Auto-detect byte order from the first chunk of non-zero instructions.
        // This supports both [MSB..LSB] and [LSB..MSB] line ordering.
        be_score = 0;
        le_score = 0;
        for (scan_idx = 0; scan_idx < 256; scan_idx = scan_idx + 4) begin
            word_be = {mem[scan_idx], mem[scan_idx + 1], mem[scan_idx + 2], mem[scan_idx + 3]};
            word_le = {mem[scan_idx + 3], mem[scan_idx + 2], mem[scan_idx + 1], mem[scan_idx]};

            if (word_be != 32'b0 || word_le != 32'b0) begin
                if (is_supported_opcode(word_be[6:0])) be_score = be_score + 1;
                if (is_supported_opcode(word_le[6:0])) le_score = le_score + 1;
            end
        end

        use_little_endian = (le_score > be_score);
    end

    // Fetch Logic 
    wire [11:0] pc_idx = addr[11:0];
    assign instr = use_little_endian ? {
        mem[pc_idx + 3],
        mem[pc_idx + 2],
        mem[pc_idx + 1],
        mem[pc_idx]
    } : {
        mem[pc_idx],
        mem[pc_idx + 1],
        mem[pc_idx + 2],
        mem[pc_idx + 3]
    };

endmodule
