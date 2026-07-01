`define SYS_MEM_SIZE 8192

module system_memory (
    input clk,
    input reset,
    
    // Port A: Instruction Fetch (Read-Only Combinational)
    input  [63:0] imem_address,
    output [31:0] imem_instruction,
    
    // Port B: Data Access (Synchronous Read/Write)
    input  [12:0] dmem_address, // 8KB is 13 bits
    input  [63:0] dmem_write_data,
    input         dmem_read_req,
    input         dmem_write_req,
    input  [2:0]  dmem_funct3,
    output reg [63:0] dmem_read_data
);

    reg [7:0] memory [0:`SYS_MEM_SIZE-1];
    
    // ----------------------------------------------------
    // Initialization & Auto-Detection
    // ----------------------------------------------------
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

    initial begin
        // Read byte-addressed hex from instructions.txt 
        $readmemh("instructions.txt", memory);
        // Patch any locations readmemh left as 'x' to 0x00
        for (i = 0; i < `SYS_MEM_SIZE; i = i + 1) begin
            if (memory[i] === 8'hx)
                memory[i] = 8'h00;
        end

        // Auto-detect byte order from the first chunk of non-zero instructions.
        be_score = 0;
        le_score = 0;
        for (scan_idx = 0; scan_idx < 256; scan_idx = scan_idx + 4) begin
            word_be = {memory[scan_idx], memory[scan_idx + 1], memory[scan_idx + 2], memory[scan_idx + 3]};
            word_le = {memory[scan_idx + 3], memory[scan_idx + 2], memory[scan_idx + 1], memory[scan_idx]};

            if (word_be != 32'b0 || word_le != 32'b0) begin
                if (is_supported_opcode(word_be[6:0])) be_score = be_score + 1;
                if (is_supported_opcode(word_le[6:0])) le_score = le_score + 1;
            end
        end

        use_little_endian = (le_score > be_score);
    end

    // ----------------------------------------------------
    // Port A: Instruction Fetch (Combinational)
    // ----------------------------------------------------
    wire [12:0] pc_idx = imem_address[12:0];
    assign imem_instruction = use_little_endian ? {
        memory[pc_idx + 3],
        memory[pc_idx + 2],
        memory[pc_idx + 1],
        memory[pc_idx]
    } : {
        memory[pc_idx],
        memory[pc_idx + 1],
        memory[pc_idx + 2],
        memory[pc_idx + 3]
    };

    // ----------------------------------------------------
    // Port B: Data Access (Synchronous)
    // ----------------------------------------------------
    always @(posedge clk) begin
        if (dmem_write_req) begin
            if (dmem_funct3 == 3'b000) begin // sb
                memory[dmem_address] <= dmem_write_data[7:0];
            end else if (dmem_funct3 == 3'b001) begin // sh
                memory[dmem_address]   <= dmem_write_data[7:0];
                memory[dmem_address+1] <= dmem_write_data[15:8];
            end else if (dmem_funct3 == 3'b010) begin // sw
                memory[dmem_address]   <= dmem_write_data[7:0];
                memory[dmem_address+1] <= dmem_write_data[15:8];
                memory[dmem_address+2] <= dmem_write_data[23:16];
                memory[dmem_address+3] <= dmem_write_data[31:24];
            end else if (dmem_funct3 == 3'b011) begin // sd
                memory[dmem_address]   <= dmem_write_data[7:0];
                memory[dmem_address+1] <= dmem_write_data[15:8];
                memory[dmem_address+2] <= dmem_write_data[23:16];
                memory[dmem_address+3] <= dmem_write_data[31:24];
                memory[dmem_address+4] <= dmem_write_data[39:32];
                memory[dmem_address+5] <= dmem_write_data[47:40];
                memory[dmem_address+6] <= dmem_write_data[55:48];
                memory[dmem_address+7] <= dmem_write_data[63:56];
            end
        end
    end

    always @(*) begin
        if (dmem_read_req) begin
            case (dmem_funct3)
                3'b000: dmem_read_data = {{56{memory[dmem_address][7]}}, memory[dmem_address]}; // lb
                3'b001: dmem_read_data = {{48{memory[dmem_address+1][7]}}, memory[dmem_address+1], memory[dmem_address]}; // lh
                3'b010: dmem_read_data = {{32{memory[dmem_address+3][7]}}, memory[dmem_address+3], memory[dmem_address+2], memory[dmem_address+1], memory[dmem_address]}; // lw
                3'b011: dmem_read_data = {memory[dmem_address+7], memory[dmem_address+6], memory[dmem_address+5], memory[dmem_address+4],
                                     memory[dmem_address+3], memory[dmem_address+2], memory[dmem_address+1], memory[dmem_address]}; // ld
                3'b100: dmem_read_data = {56'b0, memory[dmem_address]}; // lbu
                3'b101: dmem_read_data = {48'b0, memory[dmem_address+1], memory[dmem_address]}; // lhu
                3'b110: dmem_read_data = {32'b0, memory[dmem_address+3], memory[dmem_address+2], memory[dmem_address+1], memory[dmem_address]}; // lwu
                default: dmem_read_data = 64'b0;
            endcase
        end else begin
            dmem_read_data = 64'b0;
        end
    end
endmodule
