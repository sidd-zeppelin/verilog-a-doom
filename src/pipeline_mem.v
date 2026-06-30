module pipeline_mem (
    input         clk,
    input         rst,
    input         mem_MemRead, mem_MemWrite,
    input  [63:0] mem_alu_result, mem_rs2_data,
    input  [2:0]  mem_funct3,
    output [63:0] mem_read_data,

    // External Memory Interface
    output        dmem_read_req,
    output        dmem_write_req,
    output [63:0] dmem_address,
    output [63:0] dmem_write_data,
    output [2:0]  dmem_funct3,
    input  [63:0] dmem_read_data_in
);
    assign dmem_read_req   = mem_MemRead;
    assign dmem_write_req  = mem_MemWrite;
    assign dmem_address    = mem_alu_result;
    assign dmem_write_data = mem_rs2_data;
    assign dmem_funct3     = mem_funct3;
    
    assign mem_read_data   = dmem_read_data_in;
endmodule
