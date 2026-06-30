
module register_file (
    input  wire        clk,
    input  wire        rst,
    input  wire [4:0]  rs1,
    input  wire [4:0]  rs2,
    input  wire [4:0]  rd,
    input  wire [63:0] write_data,
    input  wire        reg_write,
    output wire [63:0] read_data1,
    output wire [63:0] read_data2,
    output wire        zero_flag
);

    // Array is exposed for the testbench to read upon simulation completion
    reg [63:0] registers [0:31];

    integer i;

    // Synchronous write and reset
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            for (i = 0; i < 32; i = i + 1) begin
                registers[i] <= 64'h0000_0000_0000_0000;
            end
        end else if (reg_write && rd != 5'b00000) begin
            // x0 is protected from being overwritten
            registers[rd] <= write_data;
        end
    end

    // Direct asynchronous array read (no ternary muxes, improving timing)
    assign read_data1 = registers[rs1];
    assign read_data2 = registers[rs2];

    assign zero_flag = (read_data1 == read_data2);

endmodule
