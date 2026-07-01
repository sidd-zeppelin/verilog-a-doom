// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsoc_top.h for the primary calling header

#ifndef VERILATED_VSOC_TOP___024ROOT_H_
#define VERILATED_VSOC_TOP___024ROOT_H_  // guard

#include "verilated.h"
class Vsoc_top_cla_64b;


class Vsoc_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsoc_top___024root final {
  public:
    // CELLS
    Vsoc_top_cla_64b* __PVT__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst;
    Vsoc_top_cla_64b* __PVT__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst;
    Vsoc_top_cla_64b* __PVT__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        VL_IN8(buttons,7,0);
        VL_OUT8(leds,7,0);
        VL_OUT8(vga_hsync,0,0);
        VL_OUT8(vga_vsync,0,0);
        VL_OUT8(vga_r,3,0);
        VL_OUT8(vga_g,3,0);
        VL_OUT8(vga_b,3,0);
        VL_OUT8(spi_sck,0,0);
        VL_OUT8(spi_mosi,0,0);
        VL_IN8(spi_miso,0,0);
        VL_OUT8(spi_cs_n,0,0);
        VL_OUT8(dbg_vga_we,0,0);
        CData/*0:0*/ soc_top__DOT__vga_write_req;
        CData/*0:0*/ soc_top__DOT__clint_write_req;
        CData/*0:0*/ soc_top__DOT__timer_interrupt;
        CData/*1:0*/ soc_top__DOT__clk_div;
        CData/*0:0*/ soc_top__DOT__clk_25mhz;
        CData/*7:0*/ soc_top__DOT__led_reg;
        CData/*0:0*/ soc_top__DOT__u_core__DOT__pc_stall;
        CData/*0:0*/ soc_top__DOT__u_core__DOT__id_ex_stall;
        CData/*0:0*/ soc_top__DOT__u_core__DOT__id_ex_flush_ext;
        CData/*1:0*/ soc_top__DOT__u_core__DOT__ForwardA;
        CData/*1:0*/ soc_top__DOT__u_core__DOT__ForwardB;
        CData/*0:0*/ soc_top__DOT__u_core__DOT__id_RegWrite;
        CData/*0:0*/ soc_top__DOT__u_core__DOT__id_MemRead;
        CData/*0:0*/ soc_top__DOT__u_core__DOT__id_MemWrite;
        CData/*1:0*/ soc_top__DOT__u_core__DOT__id_MemToReg;
        CData/*1:0*/ soc_top__DOT__u_core__DOT__id_ALUOp;
        CData/*1:0*/ soc_top__DOT__u_core__DOT__id_ALUSrcA;
        CData/*0:0*/ soc_top__DOT__u_core__DOT__id_ALUSrc;
        CData/*0:0*/ soc_top__DOT__u_core__DOT__id_Branch;
        CData/*0:0*/ soc_top__DOT__u_core__DOT__id_Jump;
        CData/*0:0*/ soc_top__DOT__u_core__DOT__id_is_csr;
        CData/*0:0*/ soc_top__DOT__u_core__DOT__id_is_mret;
        CData/*0:0*/ soc_top__DOT__u_core__DOT__id_is_32bit;
        CData/*0:0*/ soc_top__DOT__u_core__DOT__ex_RegWrite;
        CData/*0:0*/ soc_top__DOT__u_core__DOT__ex_MemRead;
        CData/*0:0*/ soc_top__DOT__u_core__DOT__ex_MemWrite;
        CData/*1:0*/ soc_top__DOT__u_core__DOT__ex_MemToReg;
        CData/*1:0*/ soc_top__DOT__u_core__DOT__ex_ALUOp;
        CData/*1:0*/ soc_top__DOT__u_core__DOT__ex_ALUSrcA;
        CData/*0:0*/ soc_top__DOT__u_core__DOT__ex_ALUSrc;
        CData/*0:0*/ soc_top__DOT__u_core__DOT__ex_Branch;
        CData/*0:0*/ soc_top__DOT__u_core__DOT__ex_Jump;
        CData/*4:0*/ soc_top__DOT__u_core__DOT__ex_rs1;
        CData/*4:0*/ soc_top__DOT__u_core__DOT__ex_rs2;
        CData/*4:0*/ soc_top__DOT__u_core__DOT__ex_rd;
        CData/*2:0*/ soc_top__DOT__u_core__DOT__ex_funct3;
        CData/*6:0*/ soc_top__DOT__u_core__DOT__ex_funct7;
        CData/*0:0*/ soc_top__DOT__u_core__DOT__ex_is_csr;
        CData/*0:0*/ soc_top__DOT__u_core__DOT__ex_is_mret;
        CData/*0:0*/ soc_top__DOT__u_core__DOT__ex_is_32bit;
        CData/*0:0*/ soc_top__DOT__u_core__DOT__ex_branch_taken;
        CData/*0:0*/ soc_top__DOT__u_core__DOT__take_trap;
        CData/*0:0*/ soc_top__DOT__u_core__DOT__mem_RegWrite;
        CData/*0:0*/ soc_top__DOT__u_core__DOT__mem_MemRead;
        CData/*0:0*/ soc_top__DOT__u_core__DOT__mem_MemWrite;
        CData/*1:0*/ soc_top__DOT__u_core__DOT__mem_MemToReg;
        CData/*4:0*/ soc_top__DOT__u_core__DOT__mem_rd;
        CData/*2:0*/ soc_top__DOT__u_core__DOT__mem_funct3;
        CData/*0:0*/ soc_top__DOT__u_core__DOT__wb_RegWrite;
        CData/*1:0*/ soc_top__DOT__u_core__DOT__wb_MemToReg;
    };
    struct {
        CData/*4:0*/ soc_top__DOT__u_core__DOT__wb_rd;
        CData/*0:0*/ soc_top__DOT__u_core__DOT____Vcellinp__u_if_id__flush;
        CData/*0:0*/ soc_top__DOT__u_core__DOT____Vcellinp__u_id_ex__flush;
        CData/*0:0*/ soc_top__DOT__u_core__DOT__u_id__DOT____VdfgRegularize_hf18c6620_0_0;
        CData/*3:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__alu_ctrl;
        CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__is_m_ext;
        CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__csr_write_en;
        CData/*1:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__state;
        CData/*7:0*/ soc_top__DOT__u_spi__DOT__clk_div;
        CData/*0:0*/ soc_top__DOT__u_spi__DOT__busy;
        CData/*7:0*/ soc_top__DOT__u_spi__DOT__shift_reg;
        CData/*7:0*/ soc_top__DOT__u_spi__DOT__rx_data;
        CData/*2:0*/ soc_top__DOT__u_spi__DOT__state;
        CData/*7:0*/ soc_top__DOT__u_spi__DOT__clk_cnt;
        CData/*2:0*/ soc_top__DOT__u_spi__DOT__bit_cnt;
        CData/*0:0*/ soc_top__DOT__u_vga__DOT__in_window;
        CData/*7:0*/ soc_top__DOT__u_vga__DOT__vga_pixel_data;
        CData/*0:0*/ soc_top__DOT__u_vga__DOT__h_sync_d;
        CData/*0:0*/ soc_top__DOT__u_vga__DOT__v_sync_d;
        CData/*0:0*/ soc_top__DOT__u_vga__DOT__video_active_d;
        CData/*0:0*/ soc_top__DOT__u_vga__DOT__in_window_d;
        CData/*0:0*/ __VdfgRegularize_he50b618e_0_33;
        CData/*0:0*/ __VdfgRegularize_he50b618e_0_35;
        CData/*0:0*/ __VdfgRegularize_he50b618e_0_36;
        CData/*0:0*/ __VdfgRegularize_he50b618e_0_37;
        CData/*0:0*/ __VdfgRegularize_he50b618e_0_38;
        CData/*7:0*/ __Vdly__soc_top__DOT__u_spi__DOT__clk_div;
        CData/*7:0*/ __Vdly__soc_top__DOT__u_spi__DOT__shift_reg;
        CData/*2:0*/ __Vdly__soc_top__DOT__u_spi__DOT__state;
        CData/*7:0*/ __Vdly__soc_top__DOT__u_spi__DOT__clk_cnt;
        CData/*2:0*/ __Vdly__soc_top__DOT__u_spi__DOT__bit_cnt;
        CData/*7:0*/ __VdlyVal__soc_top__DOT__u_ram__DOT__memory__v0;
        CData/*0:0*/ __VdlySet__soc_top__DOT__u_ram__DOT__memory__v0;
        CData/*7:0*/ __VdlyVal__soc_top__DOT__u_ram__DOT__memory__v1;
        CData/*0:0*/ __VdlySet__soc_top__DOT__u_ram__DOT__memory__v1;
        CData/*7:0*/ __VdlyVal__soc_top__DOT__u_ram__DOT__memory__v2;
        CData/*7:0*/ __VdlyVal__soc_top__DOT__u_ram__DOT__memory__v3;
        CData/*0:0*/ __VdlySet__soc_top__DOT__u_ram__DOT__memory__v3;
        CData/*7:0*/ __VdlyVal__soc_top__DOT__u_ram__DOT__memory__v4;
        CData/*7:0*/ __VdlyVal__soc_top__DOT__u_ram__DOT__memory__v5;
        CData/*7:0*/ __VdlyVal__soc_top__DOT__u_ram__DOT__memory__v6;
        CData/*7:0*/ __VdlyVal__soc_top__DOT__u_ram__DOT__memory__v7;
        CData/*0:0*/ __VdlySet__soc_top__DOT__u_ram__DOT__memory__v7;
        CData/*7:0*/ __VdlyVal__soc_top__DOT__u_ram__DOT__memory__v8;
        CData/*7:0*/ __VdlyVal__soc_top__DOT__u_ram__DOT__memory__v9;
        CData/*7:0*/ __VdlyVal__soc_top__DOT__u_ram__DOT__memory__v10;
        CData/*7:0*/ __VdlyVal__soc_top__DOT__u_ram__DOT__memory__v11;
        CData/*7:0*/ __VdlyVal__soc_top__DOT__u_ram__DOT__memory__v12;
        CData/*7:0*/ __VdlyVal__soc_top__DOT__u_ram__DOT__memory__v13;
        CData/*7:0*/ __VdlyVal__soc_top__DOT__u_ram__DOT__memory__v14;
        CData/*7:0*/ __VdlyVal__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v0;
        CData/*0:0*/ __VdlySet__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v0;
        CData/*7:0*/ __VdlyVal__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v1;
        CData/*0:0*/ __VdlySet__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v1;
        CData/*7:0*/ __VdlyVal__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v2;
        CData/*7:0*/ __VdlyVal__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v3;
        CData/*0:0*/ __VdlySet__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v3;
        CData/*7:0*/ __VdlyVal__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v4;
        CData/*7:0*/ __VdlyVal__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v5;
        CData/*7:0*/ __VdlyVal__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v6;
        CData/*7:0*/ __VdlyVal__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v7;
        CData/*0:0*/ __VdlySet__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v7;
        CData/*7:0*/ __VdlyVal__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v8;
        CData/*7:0*/ __VdlyVal__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v9;
    };
    struct {
        CData/*7:0*/ __VdlyVal__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v10;
        CData/*7:0*/ __VdlyVal__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v11;
        CData/*7:0*/ __VdlyVal__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v12;
        CData/*7:0*/ __VdlyVal__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v13;
        CData/*7:0*/ __VdlyVal__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v14;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__soc_top__DOT__clk_25mhz__0;
        VL_OUT16(dbg_vga_addr,15,0);
        SData/*11:0*/ soc_top__DOT__u_core__DOT__ex_funct12;
        SData/*9:0*/ soc_top__DOT__u_vga__DOT__u_timing__DOT__h_count;
        SData/*9:0*/ soc_top__DOT__u_vga__DOT__u_timing__DOT__v_count;
        SData/*9:0*/ __Vdly__soc_top__DOT__u_vga__DOT__u_timing__DOT__h_count;
        SData/*9:0*/ __Vdly__soc_top__DOT__u_vga__DOT__u_timing__DOT__v_count;
        SData/*15:0*/ __VdlyDim0__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v0;
        SData/*15:0*/ __VdlyDim0__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v1;
        SData/*15:0*/ __VdlyDim0__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v2;
        SData/*15:0*/ __VdlyDim0__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v3;
        SData/*15:0*/ __VdlyDim0__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v4;
        SData/*15:0*/ __VdlyDim0__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v5;
        SData/*15:0*/ __VdlyDim0__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v6;
        SData/*15:0*/ __VdlyDim0__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v7;
        SData/*15:0*/ __VdlyDim0__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v8;
        SData/*15:0*/ __VdlyDim0__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v9;
        SData/*15:0*/ __VdlyDim0__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v10;
        SData/*15:0*/ __VdlyDim0__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v11;
        SData/*15:0*/ __VdlyDim0__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v12;
        SData/*15:0*/ __VdlyDim0__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v13;
        SData/*15:0*/ __VdlyDim0__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v14;
        IData/*31:0*/ soc_top__DOT__u_core__DOT__id_instruction;
        VlWide<4>/*127:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__mul_signed;
        IData/*23:0*/ __VdlyDim0__soc_top__DOT__u_ram__DOT__memory__v0;
        IData/*23:0*/ __VdlyDim0__soc_top__DOT__u_ram__DOT__memory__v1;
        IData/*23:0*/ __VdlyDim0__soc_top__DOT__u_ram__DOT__memory__v2;
        IData/*23:0*/ __VdlyDim0__soc_top__DOT__u_ram__DOT__memory__v3;
        IData/*23:0*/ __VdlyDim0__soc_top__DOT__u_ram__DOT__memory__v4;
        IData/*23:0*/ __VdlyDim0__soc_top__DOT__u_ram__DOT__memory__v5;
        IData/*23:0*/ __VdlyDim0__soc_top__DOT__u_ram__DOT__memory__v6;
        IData/*23:0*/ __VdlyDim0__soc_top__DOT__u_ram__DOT__memory__v7;
        IData/*23:0*/ __VdlyDim0__soc_top__DOT__u_ram__DOT__memory__v8;
        IData/*23:0*/ __VdlyDim0__soc_top__DOT__u_ram__DOT__memory__v9;
        IData/*23:0*/ __VdlyDim0__soc_top__DOT__u_ram__DOT__memory__v10;
        IData/*23:0*/ __VdlyDim0__soc_top__DOT__u_ram__DOT__memory__v11;
        IData/*23:0*/ __VdlyDim0__soc_top__DOT__u_ram__DOT__memory__v12;
        IData/*23:0*/ __VdlyDim0__soc_top__DOT__u_ram__DOT__memory__v13;
        IData/*23:0*/ __VdlyDim0__soc_top__DOT__u_ram__DOT__memory__v14;
        IData/*31:0*/ __VactIterCount;
        VL_OUT64(dbg_vga_data,63,0);
        QData/*63:0*/ soc_top__DOT__ram_read_data;
        QData/*63:0*/ soc_top__DOT__vga_read_data;
        QData/*63:0*/ soc_top__DOT__u_core__DOT__if_pc;
        QData/*63:0*/ soc_top__DOT__u_core__DOT__if_pc4;
        QData/*63:0*/ soc_top__DOT__u_core__DOT__id_pc;
        QData/*63:0*/ soc_top__DOT__u_core__DOT__id_pc4;
        QData/*63:0*/ soc_top__DOT__u_core__DOT__id_immediate;
        QData/*63:0*/ soc_top__DOT__u_core__DOT__ex_pc;
        QData/*63:0*/ soc_top__DOT__u_core__DOT__ex_pc4;
        QData/*63:0*/ soc_top__DOT__u_core__DOT__ex_rs1_data;
        QData/*63:0*/ soc_top__DOT__u_core__DOT__ex_rs2_data;
        QData/*63:0*/ soc_top__DOT__u_core__DOT__ex_immediate;
        QData/*63:0*/ soc_top__DOT__u_core__DOT__ex_alu_result;
        QData/*63:0*/ soc_top__DOT__u_core__DOT__ex_branch_target;
        QData/*63:0*/ soc_top__DOT__u_core__DOT__trap_target_pc;
    };
    struct {
        QData/*63:0*/ soc_top__DOT__u_core__DOT__mem_alu_result;
        QData/*63:0*/ soc_top__DOT__u_core__DOT__mem_rs2_data;
        QData/*63:0*/ soc_top__DOT__u_core__DOT__mem_pc4;
        QData/*63:0*/ soc_top__DOT__u_core__DOT__wb_read_data;
        QData/*63:0*/ soc_top__DOT__u_core__DOT__wb_alu_result;
        QData/*63:0*/ soc_top__DOT__u_core__DOT__wb_pc4;
        QData/*63:0*/ soc_top__DOT__u_core__DOT__wb_write_data;
        QData/*63:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__fwd_rs1;
        QData/*63:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a;
        QData/*63:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__fwd_rs2;
        QData/*63:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b;
        QData/*63:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__alu_res;
        QData/*63:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__multdiv_result;
        QData/*63:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__alu_result_raw;
        QData/*63:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__csr_rdata;
        QData/*63:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__csr_write_data;
        QData/*63:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__mepc_out;
        QData/*63:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__mtvec_out;
        QData/*63:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__sll_res;
        QData/*63:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__srl_res;
        QData/*63:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__sra_res;
        QData/*63:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__mstatus;
        QData/*63:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__mcause;
        QData/*63:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__mie;
        QData/*63:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__mscratch;
        QData/*63:0*/ soc_top__DOT__u_clint__DOT__mtime;
        QData/*63:0*/ soc_top__DOT__u_clint__DOT__mtimecmp;
        QData/*63:0*/ __Vdly__soc_top__DOT__u_clint__DOT__mtime;
        VlUnpacked<QData/*63:0*/, 32> soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers;
        VlUnpacked<CData/*7:0*/, 16777216> soc_top__DOT__u_ram__DOT__memory;
        VlUnpacked<CData/*7:0*/, 65536> soc_top__DOT__u_vga__DOT__u_ram__DOT__memory;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    };

    // INTERNAL VARIABLES
    Vsoc_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vsoc_top___024root(Vsoc_top__Syms* symsp, const char* namep);
    ~Vsoc_top___024root();
    VL_UNCOPYABLE(Vsoc_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
