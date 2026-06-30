module forwarding_unit (
    input  [4:0] ex_rs1,
    input  [4:0] ex_rs2,
    input  [4:0] mem_rd,
    input  [4:0] wb_rd,
    input        mem_RegWrite,
    input        wb_RegWrite,
    output reg [1:0] ForwardA,
    output reg [1:0] ForwardB
);
    always @(*) begin
        ForwardA = 2'b00;
        ForwardB = 2'b00;

        // Prefer the closest producer (MEM stage) over WB stage.
        if (mem_RegWrite && (mem_rd != 5'b0) && (mem_rd == ex_rs1)) begin
            ForwardA = 2'b01;
        end else if (wb_RegWrite && (wb_rd != 5'b0) && (wb_rd == ex_rs1)) begin
            ForwardA = 2'b10;
        end

        if (mem_RegWrite && (mem_rd != 5'b0) && (mem_rd == ex_rs2)) begin
            ForwardB = 2'b01;
        end else if (wb_RegWrite && (wb_rd != 5'b0) && (wb_rd == ex_rs2)) begin
            ForwardB = 2'b10;
        end
    end
endmodule
