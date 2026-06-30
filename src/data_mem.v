module data_mem (
    input clk,
    input reset,
    input [9:0] address,        
    input [63:0] write_data,    
    input MemRead,              
    input MemWrite,
    input [2:0] funct3,             
    output reg [63:0] read_data 
);

    reg [7:0] memory [0:1023]; 
    integer i;

    // Write on posedge clk
    always @(posedge clk) begin
        if (reset) begin
            for (i = 0; i < 1024; i = i + 1) memory[i] <= 8'b0;
        end else if (MemWrite) begin
            if (funct3 == 3'b000) begin // sb
                memory[address] <= write_data[7:0];
            end else if (funct3 == 3'b001) begin // sh
                memory[address]   <= write_data[7:0];
                memory[address+1] <= write_data[15:8];
            end else if (funct3 == 3'b010) begin // sw
                memory[address]   <= write_data[7:0];
                memory[address+1] <= write_data[15:8];
                memory[address+2] <= write_data[23:16];
                memory[address+3] <= write_data[31:24];
            end else if (funct3 == 3'b011) begin // sd
                memory[address]   <= write_data[7:0];
                memory[address+1] <= write_data[15:8];
                memory[address+2] <= write_data[23:16];
                memory[address+3] <= write_data[31:24];
                memory[address+4] <= write_data[39:32];
                memory[address+5] <= write_data[47:40];
                memory[address+6] <= write_data[55:48];
                memory[address+7] <= write_data[63:56];
            end
        end
    end

    // Read 
    always @(*) begin
        if (MemRead) begin
            case (funct3)
                3'b000: read_data = {{56{memory[address][7]}}, memory[address]}; // lb
                3'b001: read_data = {{48{memory[address+1][7]}}, memory[address+1], memory[address]}; // lh
                3'b010: read_data = {{32{memory[address+3][7]}}, memory[address+3], memory[address+2], memory[address+1], memory[address]}; // lw
                3'b011: read_data = {memory[address+7], memory[address+6], memory[address+5], memory[address+4],
                                     memory[address+3], memory[address+2], memory[address+1], memory[address]}; // ld
                3'b100: read_data = {56'b0, memory[address]}; // lbu
                3'b101: read_data = {48'b0, memory[address+1], memory[address]}; // lhu
                3'b110: read_data = {32'b0, memory[address+3], memory[address+2], memory[address+1], memory[address]}; // lwu
                default: read_data = 64'b0;
            endcase
        end else begin
            read_data = 64'b0;
        end
    end
endmodule
