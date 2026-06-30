module pipeline_wb (
    input  [1:0]  wb_MemToReg,
    input  [63:0] wb_alu_result, wb_read_data, wb_pc4,
    output reg [63:0] wb_write_data
);
    always @(*) begin
        case (wb_MemToReg)
            2'b01:   wb_write_data = wb_read_data;   // load
            2'b10:   wb_write_data = wb_pc4;         // jal
            default: wb_write_data = wb_alu_result;  // alu
        endcase
    end
endmodule
