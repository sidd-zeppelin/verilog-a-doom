module vga_ram (
    // Port A (CPU Interface)
    input wire clk_cpu,
    input wire [13:0] cpu_address, // 0-based offset, 16384 bytes
    input wire [63:0] cpu_write_data,
    input wire cpu_write_req,
    input wire [2:0] cpu_funct3,
    output reg [63:0] cpu_read_data,

    // Port B (VGA Interface)
    input wire clk_vga,
    input wire [13:0] vga_address,
    output reg [7:0] vga_read_data
);

    // 16 KB Memory
    reg [7:0] memory [0:16383];

    // Initialize to black
    integer i;
    initial begin
        for (i = 0; i < 16384; i = i + 1) begin
            memory[i] = 8'b00000000;
        end
    end

    // ----------------------------------------------------
    // Port A: CPU Write and Read (Synchronous to CPU clock)
    // ----------------------------------------------------
    always @(posedge clk_cpu) begin
        if (cpu_write_req) begin
            if (cpu_funct3 == 3'b000) begin // sb
                memory[cpu_address] <= cpu_write_data[7:0];
            end else if (cpu_funct3 == 3'b001) begin // sh
                memory[cpu_address]   <= cpu_write_data[7:0];
                memory[cpu_address+1] <= cpu_write_data[15:8];
            end else if (cpu_funct3 == 3'b010) begin // sw
                memory[cpu_address]   <= cpu_write_data[7:0];
                memory[cpu_address+1] <= cpu_write_data[15:8];
                memory[cpu_address+2] <= cpu_write_data[23:16];
                memory[cpu_address+3] <= cpu_write_data[31:24];
            end else if (cpu_funct3 == 3'b011) begin // sd
                memory[cpu_address]   <= cpu_write_data[7:0];
                memory[cpu_address+1] <= cpu_write_data[15:8];
                memory[cpu_address+2] <= cpu_write_data[23:16];
                memory[cpu_address+3] <= cpu_write_data[31:24];
                memory[cpu_address+4] <= cpu_write_data[39:32];
                memory[cpu_address+5] <= cpu_write_data[47:40];
                memory[cpu_address+6] <= cpu_write_data[55:48];
                memory[cpu_address+7] <= cpu_write_data[63:56];
            end
        end
        
        // Read Port A (Combinational read behavior via continuous assign is hard to infer BRAM)
        // Since original data_mem uses combinational read, we might want to do the same for compatibility
        // But for BRAM, synchronous read is better. We will output immediately to match data_mem.v
    end

    // CPU Combinational Read to match pipeline expectations
    always @(*) begin
        case (cpu_funct3)
            3'b000: cpu_read_data = {{56{memory[cpu_address][7]}}, memory[cpu_address]}; // lb
            3'b001: cpu_read_data = {{48{memory[cpu_address+1][7]}}, memory[cpu_address+1], memory[cpu_address]}; // lh
            3'b010: cpu_read_data = {{32{memory[cpu_address+3][7]}}, memory[cpu_address+3], memory[cpu_address+2], memory[cpu_address+1], memory[cpu_address]}; // lw
            3'b011: cpu_read_data = {memory[cpu_address+7], memory[cpu_address+6], memory[cpu_address+5], memory[cpu_address+4],
                                     memory[cpu_address+3], memory[cpu_address+2], memory[cpu_address+1], memory[cpu_address]}; // ld
            3'b100: cpu_read_data = {56'b0, memory[cpu_address]}; // lbu
            3'b101: cpu_read_data = {48'b0, memory[cpu_address+1], memory[cpu_address]}; // lhu
            3'b110: cpu_read_data = {32'b0, memory[cpu_address+3], memory[cpu_address+2], memory[cpu_address+1], memory[cpu_address]}; // lwu
            default: cpu_read_data = 64'b0;
        endcase
    end

    // ----------------------------------------------------
    // Port B: VGA Read (Synchronous to VGA clock)
    // ----------------------------------------------------
    always @(posedge clk_vga) begin
        vga_read_data <= memory[vga_address];
    end

endmodule
