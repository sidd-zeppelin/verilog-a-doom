module hazard_detection_unit (
    input        ex_MemRead,
    input  [4:0] ex_rd,
    input  [4:0] id_rs1,
    input  [4:0] id_rs2,
    input        id_uses_rs2,
    input        multdiv_busy,
    output       pc_stall,
    output       if_id_stall,
    output       id_ex_stall,
    output       id_ex_flush,
    output       ex_mem_flush
);
    wire rs1_hazard = (ex_rd == id_rs1);
    wire rs2_hazard = id_uses_rs2 && (ex_rd == id_rs2);
    wire load_use_hazard = ex_MemRead && (ex_rd != 5'b0) && (rs1_hazard || rs2_hazard);

    assign pc_stall     = load_use_hazard | multdiv_busy;
    assign if_id_stall  = load_use_hazard | multdiv_busy;
    assign id_ex_stall  = multdiv_busy;
    assign id_ex_flush  = load_use_hazard;
    assign ex_mem_flush = multdiv_busy;
endmodule
