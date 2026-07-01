`define SYS_MEM_SIZE 16777216

module system_memory (
    input clk,
    input reset,
    
    // Port A: Instruction Fetch (Read-Only Combinational)
    input  [63:0] imem_address,
    output [31:0] imem_instruction,
    
    // Port B: Data Access (Synchronous Read/Write)
    input  [23:0] dmem_address, // 16MB is 24 bits
    input  [63:0] dmem_write_data,
    input         dmem_read_req,
    input         dmem_write_req,
    input  [2:0]  dmem_funct3,
    output reg [63:0] dmem_read_data
);

    reg [7:0] memory [0:`SYS_MEM_SIZE-1];
    
    // Auto-load firmware
    initial begin
        $readmemh("instructions.txt", memory);
    end
    
    // Hardcode little-endian for RISC-V GCC
    wire use_little_endian = 1'b1;

    // ----------------------------------------------------
    // Port A: Instruction Fetch (Combinational)
    // ----------------------------------------------------
    wire [23:0] pc_idx = imem_address[23:0];
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
