// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsoc_top.h for the primary calling header

#include "Vsoc_top__pch.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsoc_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vsoc_top___024root___eval_triggers__act(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___eval_triggers__act\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((((IData)(vlSelfRef.soc_top__DOT__clk_25mhz) 
                                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__clk_25mhz__0))) 
                                                      << 2U) 
                                                     | ((((IData)(vlSelfRef.rst) 
                                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst__0))) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__clk_25mhz__0 
        = vlSelfRef.soc_top__DOT__clk_25mhz;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsoc_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vsoc_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vsoc_top___024root___nba_sequent__TOP__0(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__0\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __Vdly__soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__mstatus;
    __Vdly__soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__mstatus = 0;
    // Body
    __Vdly__soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__mstatus 
        = vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__mstatus;
    vlSelfRef.__Vdly__soc_top__DOT__u_clint__DOT__mtime 
        = vlSelfRef.soc_top__DOT__u_clint__DOT__mtime;
    vlSelfRef.__Vdly__soc_top__DOT__u_spi__DOT__clk_div 
        = vlSelfRef.soc_top__DOT__u_spi__DOT__clk_div;
    vlSelfRef.__Vdly__soc_top__DOT__u_spi__DOT__shift_reg 
        = vlSelfRef.soc_top__DOT__u_spi__DOT__shift_reg;
    vlSelfRef.__Vdly__soc_top__DOT__u_spi__DOT__state 
        = vlSelfRef.soc_top__DOT__u_spi__DOT__state;
    vlSelfRef.__Vdly__soc_top__DOT__u_spi__DOT__clk_cnt 
        = vlSelfRef.soc_top__DOT__u_spi__DOT__clk_cnt;
    vlSelfRef.__Vdly__soc_top__DOT__u_spi__DOT__bit_cnt 
        = vlSelfRef.soc_top__DOT__u_spi__DOT__bit_cnt;
    vlSelfRef.__VdlySet__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v0 = 0U;
    vlSelfRef.__VdlySet__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v1 = 0U;
    vlSelfRef.__VdlySet__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v3 = 0U;
    vlSelfRef.__VdlySet__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v7 = 0U;
    vlSelfRef.__VdlySet__soc_top__DOT__u_ram__DOT__memory__v0 = 0U;
    vlSelfRef.__VdlySet__soc_top__DOT__u_ram__DOT__memory__v1 = 0U;
    vlSelfRef.__VdlySet__soc_top__DOT__u_ram__DOT__memory__v3 = 0U;
    vlSelfRef.__VdlySet__soc_top__DOT__u_ram__DOT__memory__v7 = 0U;
    if (vlSelfRef.rst) {
        vlSelfRef.soc_top__DOT__clk_div = 0U;
        __Vdly__soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__mstatus = 0ULL;
        vlSelfRef.__Vdly__soc_top__DOT__u_clint__DOT__mtime = 0ULL;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__mscratch = 0ULL;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__mcause = 0ULL;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__mtvec_out = 0ULL;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__mie = 0ULL;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__mepc_out = 0ULL;
        vlSelfRef.soc_top__DOT__led_reg = 0U;
    } else {
        vlSelfRef.soc_top__DOT__clk_div = (3U & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.soc_top__DOT__clk_div)));
        if (vlSelfRef.soc_top__DOT__u_core__DOT__take_trap) {
            __Vdly__soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__mstatus 
                = ((0xffffffffffffff7fULL & __Vdly__soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__mstatus) 
                   | ((QData)((IData)((1U & (IData)(
                                                    (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__mstatus 
                                                     >> 3U))))) 
                      << 7U));
            __Vdly__soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__mstatus 
                = (0xfffffffffffffff7ULL & __Vdly__soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__mstatus);
            vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__mcause = 0x8000000000000007ULL;
            vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__mepc_out 
                = vlSelfRef.soc_top__DOT__u_core__DOT__id_pc;
        } else {
            if (vlSelfRef.soc_top__DOT__u_core__DOT__ex_is_mret) {
                __Vdly__soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__mstatus 
                    = ((0xfffffffffffffff7ULL & __Vdly__soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__mstatus) 
                       | ((QData)((IData)((1U & (IData)(
                                                        (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__mstatus 
                                                         >> 7U))))) 
                          << 3U));
                __Vdly__soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__mstatus 
                    = (0x0000000000000080ULL | __Vdly__soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__mstatus);
            } else if (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__csr_write_en) {
                if ((0x0300U == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_funct12))) {
                    __Vdly__soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__mstatus 
                        = vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__csr_write_data;
                }
            }
            if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_is_mret)))) {
                if (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__csr_write_en) {
                    if ((0x0300U != (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_funct12))) {
                        if ((0x0304U != (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_funct12))) {
                            if ((0x0305U != (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_funct12))) {
                                if ((0x0340U != (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_funct12))) {
                                    if ((0x0341U != (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_funct12))) {
                                        if ((0x0342U 
                                             == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_funct12))) {
                                            vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__mcause 
                                                = vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__csr_write_data;
                                        }
                                    }
                                    if ((0x0341U == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_funct12))) {
                                        vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__mepc_out 
                                            = vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__csr_write_data;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        vlSelfRef.__Vdly__soc_top__DOT__u_clint__DOT__mtime 
            = (1ULL + vlSelfRef.soc_top__DOT__u_clint__DOT__mtime);
        if (vlSelfRef.soc_top__DOT__clint_write_req) {
            if ((8U == (0x0000000fU & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)))) {
                vlSelfRef.__Vdly__soc_top__DOT__u_clint__DOT__mtime 
                    = vlSelfRef.soc_top__DOT__u_core__DOT__mem_rs2_data;
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__take_trap)))) {
            if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_is_mret)))) {
                if (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__csr_write_en) {
                    if ((0x0300U != (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_funct12))) {
                        if ((0x0304U != (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_funct12))) {
                            if ((0x0305U != (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_funct12))) {
                                if ((0x0340U == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_funct12))) {
                                    vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__mscratch 
                                        = vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__csr_write_data;
                                }
                            }
                            if ((0x0305U == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_funct12))) {
                                vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__mtvec_out 
                                    = vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__csr_write_data;
                            }
                        }
                        if ((0x0304U == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_funct12))) {
                            vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__mie 
                                = vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__csr_write_data;
                        }
                    }
                }
            }
        }
        if ((((0x0000000000002000ULL <= vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result) 
              & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_35)) 
                 & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_36)) 
                    & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_37)) 
                       & ((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_38) 
                          & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_MemWrite)))))) 
             & (4U == (0x000000ffU & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result))))) {
            vlSelfRef.soc_top__DOT__led_reg = (0x000000ffU 
                                               & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_rs2_data));
        }
    }
    if (vlSelfRef.soc_top__DOT__vga_write_req) {
        if ((0U == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_funct3))) {
            vlSelfRef.__VdlyVal__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v0 
                = (0x000000ffU & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_rs2_data));
            vlSelfRef.__VdlyDim0__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v0 
                = (0x00003fffU & ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result) 
                                  - (IData)(0x2000U)));
            vlSelfRef.__VdlySet__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v0 = 1U;
        } else if ((1U == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_funct3))) {
            vlSelfRef.__VdlyVal__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v1 
                = (0x000000ffU & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_rs2_data));
            vlSelfRef.__VdlyDim0__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v1 
                = (0x00003fffU & ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result) 
                                  - (IData)(0x2000U)));
            vlSelfRef.__VdlySet__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v1 = 1U;
            vlSelfRef.__VdlyVal__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v2 
                = (0x000000ffU & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__mem_rs2_data 
                                          >> 8U)));
            vlSelfRef.__VdlyDim0__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v2 
                = (0x00003fffU & ((IData)(1U) + ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result) 
                                                 - (IData)(0x2000U))));
        } else if ((2U == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_funct3))) {
            vlSelfRef.__VdlyVal__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v3 
                = (0x000000ffU & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_rs2_data));
            vlSelfRef.__VdlyDim0__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v3 
                = (0x00003fffU & ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result) 
                                  - (IData)(0x2000U)));
            vlSelfRef.__VdlySet__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v3 = 1U;
            vlSelfRef.__VdlyVal__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v4 
                = (0x000000ffU & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__mem_rs2_data 
                                          >> 8U)));
            vlSelfRef.__VdlyDim0__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v4 
                = (0x00003fffU & ((IData)(1U) + ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result) 
                                                 - (IData)(0x2000U))));
            vlSelfRef.__VdlyVal__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v5 
                = (0x000000ffU & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__mem_rs2_data 
                                          >> 0x10U)));
            vlSelfRef.__VdlyDim0__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v5 
                = (0x00003fffU & ((IData)(2U) + ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result) 
                                                 - (IData)(0x2000U))));
            vlSelfRef.__VdlyVal__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v6 
                = (0x000000ffU & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__mem_rs2_data 
                                          >> 0x18U)));
            vlSelfRef.__VdlyDim0__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v6 
                = (0x00003fffU & ((IData)(3U) + ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result) 
                                                 - (IData)(0x2000U))));
        } else if ((3U == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_funct3))) {
            vlSelfRef.__VdlyVal__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v7 
                = (0x000000ffU & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_rs2_data));
            vlSelfRef.__VdlyDim0__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v7 
                = (0x00003fffU & ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result) 
                                  - (IData)(0x2000U)));
            vlSelfRef.__VdlySet__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v7 = 1U;
            vlSelfRef.__VdlyVal__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v8 
                = (0x000000ffU & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__mem_rs2_data 
                                          >> 8U)));
            vlSelfRef.__VdlyDim0__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v8 
                = (0x00003fffU & ((IData)(1U) + ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result) 
                                                 - (IData)(0x2000U))));
            vlSelfRef.__VdlyVal__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v9 
                = (0x000000ffU & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__mem_rs2_data 
                                          >> 0x10U)));
            vlSelfRef.__VdlyDim0__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v9 
                = (0x00003fffU & ((IData)(2U) + ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result) 
                                                 - (IData)(0x2000U))));
            vlSelfRef.__VdlyVal__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v10 
                = (0x000000ffU & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__mem_rs2_data 
                                          >> 0x18U)));
            vlSelfRef.__VdlyDim0__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v10 
                = (0x00003fffU & ((IData)(3U) + ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result) 
                                                 - (IData)(0x2000U))));
            vlSelfRef.__VdlyVal__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v11 
                = (0x000000ffU & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__mem_rs2_data 
                                          >> 0x20U)));
            vlSelfRef.__VdlyDim0__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v11 
                = (0x00003fffU & ((IData)(4U) + ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result) 
                                                 - (IData)(0x2000U))));
            vlSelfRef.__VdlyVal__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v12 
                = (0x000000ffU & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__mem_rs2_data 
                                          >> 0x28U)));
            vlSelfRef.__VdlyDim0__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v12 
                = (0x00003fffU & ((IData)(5U) + ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result) 
                                                 - (IData)(0x2000U))));
            vlSelfRef.__VdlyVal__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v13 
                = (0x000000ffU & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__mem_rs2_data 
                                          >> 0x30U)));
            vlSelfRef.__VdlyDim0__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v13 
                = (0x00003fffU & ((IData)(6U) + ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result) 
                                                 - (IData)(0x2000U))));
            vlSelfRef.__VdlyVal__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v14 
                = (0x000000ffU & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__mem_rs2_data 
                                          >> 0x38U)));
            vlSelfRef.__VdlyDim0__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v14 
                = (0x00003fffU & ((IData)(7U) + ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result) 
                                                 - (IData)(0x2000U))));
        }
    }
    if (((0x0000000000002000ULL > vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result) 
         & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_MemWrite))) {
        if ((0U == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_funct3))) {
            vlSelfRef.__VdlyVal__soc_top__DOT__u_ram__DOT__memory__v0 
                = (0x000000ffU & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_rs2_data));
            vlSelfRef.__VdlyDim0__soc_top__DOT__u_ram__DOT__memory__v0 
                = (0x00001fffU & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result));
            vlSelfRef.__VdlySet__soc_top__DOT__u_ram__DOT__memory__v0 = 1U;
        } else if ((1U == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_funct3))) {
            vlSelfRef.__VdlyVal__soc_top__DOT__u_ram__DOT__memory__v1 
                = (0x000000ffU & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_rs2_data));
            vlSelfRef.__VdlyDim0__soc_top__DOT__u_ram__DOT__memory__v1 
                = (0x00001fffU & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result));
            vlSelfRef.__VdlySet__soc_top__DOT__u_ram__DOT__memory__v1 = 1U;
            vlSelfRef.__VdlyVal__soc_top__DOT__u_ram__DOT__memory__v2 
                = (0x000000ffU & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__mem_rs2_data 
                                          >> 8U)));
            vlSelfRef.__VdlyDim0__soc_top__DOT__u_ram__DOT__memory__v2 
                = (0x00001fffU & ((IData)(1U) + (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)));
        } else if ((2U == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_funct3))) {
            vlSelfRef.__VdlyVal__soc_top__DOT__u_ram__DOT__memory__v3 
                = (0x000000ffU & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_rs2_data));
            vlSelfRef.__VdlyDim0__soc_top__DOT__u_ram__DOT__memory__v3 
                = (0x00001fffU & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result));
            vlSelfRef.__VdlySet__soc_top__DOT__u_ram__DOT__memory__v3 = 1U;
            vlSelfRef.__VdlyVal__soc_top__DOT__u_ram__DOT__memory__v4 
                = (0x000000ffU & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__mem_rs2_data 
                                          >> 8U)));
            vlSelfRef.__VdlyDim0__soc_top__DOT__u_ram__DOT__memory__v4 
                = (0x00001fffU & ((IData)(1U) + (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)));
            vlSelfRef.__VdlyVal__soc_top__DOT__u_ram__DOT__memory__v5 
                = (0x000000ffU & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__mem_rs2_data 
                                          >> 0x10U)));
            vlSelfRef.__VdlyDim0__soc_top__DOT__u_ram__DOT__memory__v5 
                = (0x00001fffU & ((IData)(2U) + (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)));
            vlSelfRef.__VdlyVal__soc_top__DOT__u_ram__DOT__memory__v6 
                = (0x000000ffU & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__mem_rs2_data 
                                          >> 0x18U)));
            vlSelfRef.__VdlyDim0__soc_top__DOT__u_ram__DOT__memory__v6 
                = (0x00001fffU & ((IData)(3U) + (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)));
        } else if ((3U == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_funct3))) {
            vlSelfRef.__VdlyVal__soc_top__DOT__u_ram__DOT__memory__v7 
                = (0x000000ffU & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_rs2_data));
            vlSelfRef.__VdlyDim0__soc_top__DOT__u_ram__DOT__memory__v7 
                = (0x00001fffU & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result));
            vlSelfRef.__VdlySet__soc_top__DOT__u_ram__DOT__memory__v7 = 1U;
            vlSelfRef.__VdlyVal__soc_top__DOT__u_ram__DOT__memory__v8 
                = (0x000000ffU & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__mem_rs2_data 
                                          >> 8U)));
            vlSelfRef.__VdlyDim0__soc_top__DOT__u_ram__DOT__memory__v8 
                = (0x00001fffU & ((IData)(1U) + (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)));
            vlSelfRef.__VdlyVal__soc_top__DOT__u_ram__DOT__memory__v9 
                = (0x000000ffU & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__mem_rs2_data 
                                          >> 0x10U)));
            vlSelfRef.__VdlyDim0__soc_top__DOT__u_ram__DOT__memory__v9 
                = (0x00001fffU & ((IData)(2U) + (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)));
            vlSelfRef.__VdlyVal__soc_top__DOT__u_ram__DOT__memory__v10 
                = (0x000000ffU & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__mem_rs2_data 
                                          >> 0x18U)));
            vlSelfRef.__VdlyDim0__soc_top__DOT__u_ram__DOT__memory__v10 
                = (0x00001fffU & ((IData)(3U) + (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)));
            vlSelfRef.__VdlyVal__soc_top__DOT__u_ram__DOT__memory__v11 
                = (0x000000ffU & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__mem_rs2_data 
                                          >> 0x20U)));
            vlSelfRef.__VdlyDim0__soc_top__DOT__u_ram__DOT__memory__v11 
                = (0x00001fffU & ((IData)(4U) + (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)));
            vlSelfRef.__VdlyVal__soc_top__DOT__u_ram__DOT__memory__v12 
                = (0x000000ffU & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__mem_rs2_data 
                                          >> 0x28U)));
            vlSelfRef.__VdlyDim0__soc_top__DOT__u_ram__DOT__memory__v12 
                = (0x00001fffU & ((IData)(5U) + (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)));
            vlSelfRef.__VdlyVal__soc_top__DOT__u_ram__DOT__memory__v13 
                = (0x000000ffU & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__mem_rs2_data 
                                          >> 0x30U)));
            vlSelfRef.__VdlyDim0__soc_top__DOT__u_ram__DOT__memory__v13 
                = (0x00001fffU & ((IData)(6U) + (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)));
            vlSelfRef.__VdlyVal__soc_top__DOT__u_ram__DOT__memory__v14 
                = (0x000000ffU & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__mem_rs2_data 
                                          >> 0x38U)));
            vlSelfRef.__VdlyDim0__soc_top__DOT__u_ram__DOT__memory__v14 
                = (0x00001fffU & ((IData)(7U) + (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)));
        }
    }
    vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__mstatus 
        = __Vdly__soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__mstatus;
    vlSelfRef.soc_top__DOT__clk_25mhz = (1U & ((IData)(vlSelfRef.soc_top__DOT__clk_div) 
                                               >> 1U));
    vlSelfRef.leds = vlSelfRef.soc_top__DOT__led_reg;
}

void Vsoc_top___024root___nba_sequent__TOP__1(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__1\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__soc_top__DOT__u_vga__DOT__u_timing__DOT__h_count 
        = vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__h_count;
    vlSelfRef.__Vdly__soc_top__DOT__u_vga__DOT__u_timing__DOT__v_count 
        = vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__v_count;
    if (vlSelfRef.rst) {
        vlSelfRef.__Vdly__soc_top__DOT__u_vga__DOT__u_timing__DOT__h_count = 0U;
        vlSelfRef.__Vdly__soc_top__DOT__u_vga__DOT__u_timing__DOT__v_count = 0U;
    } else if ((0x031fU == (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__h_count))) {
        vlSelfRef.__Vdly__soc_top__DOT__u_vga__DOT__u_timing__DOT__v_count 
            = ((0x020cU == (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__v_count))
                ? 0U : (0x000003ffU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__v_count))));
        vlSelfRef.__Vdly__soc_top__DOT__u_vga__DOT__u_timing__DOT__h_count = 0U;
    } else {
        vlSelfRef.__Vdly__soc_top__DOT__u_vga__DOT__u_timing__DOT__h_count 
            = (0x000003ffU & ((IData)(1U) + (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__h_count)));
    }
    vlSelfRef.soc_top__DOT__u_vga__DOT__h_sync_d = 
        ((IData)(vlSelfRef.rst) || (1U & (~ ((0x0290U 
                                              <= (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__h_count)) 
                                             & (0x02f0U 
                                                > (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__h_count))))));
    vlSelfRef.soc_top__DOT__u_vga__DOT__v_sync_d = 
        ((IData)(vlSelfRef.rst) || (1U & (~ ((0x01eaU 
                                              <= (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__v_count)) 
                                             & (0x01ecU 
                                                > (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__v_count))))));
    vlSelfRef.soc_top__DOT__u_vga__DOT__in_window_d 
        = ((1U & (~ (IData)(vlSelfRef.rst))) && (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__in_window));
    vlSelfRef.soc_top__DOT__u_vga__DOT__video_active_d 
        = ((1U & (~ (IData)(vlSelfRef.rst))) && ((0x0280U 
                                                  > (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__h_count)) 
                                                 & (0x01e0U 
                                                    > (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__v_count))));
    vlSelfRef.vga_hsync = vlSelfRef.soc_top__DOT__u_vga__DOT__h_sync_d;
    vlSelfRef.vga_vsync = vlSelfRef.soc_top__DOT__u_vga__DOT__v_sync_d;
}

extern const VlUnpacked<CData/*3:0*/, 64> Vsoc_top__ConstPool__TABLE_h4c20ea82_0;

void Vsoc_top___024root___nba_sequent__TOP__2(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__2\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_1;
    __VdfgRegularize_h6e95ff9d_0_1 = 0;
    QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_2;
    __VdfgRegularize_h6e95ff9d_0_2 = 0;
    QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_3;
    __VdfgRegularize_h6e95ff9d_0_3 = 0;
    CData/*1:0*/ __Vdly__soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__state;
    __Vdly__soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__state = 0;
    CData/*0:0*/ __VdlySet__soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers__v0;
    __VdlySet__soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers__v0 = 0;
    QData/*63:0*/ __VdlyVal__soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers__v32;
    __VdlyVal__soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers__v32 = 0;
    CData/*4:0*/ __VdlyDim0__soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers__v32;
    __VdlyDim0__soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers__v32 = 0;
    CData/*0:0*/ __VdlySet__soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers__v32;
    __VdlySet__soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers__v32 = 0;
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<4>/*127:0*/ __Vtemp_6;
    VlWide<4>/*127:0*/ __Vtemp_7;
    // Body
    __Vdly__soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__state 
        = vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__state;
    __VdlySet__soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers__v0 = 0U;
    __VdlySet__soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers__v32 = 0U;
    vlSelfRef.soc_top__DOT__u_core__DOT__mem_funct3 
        = (((IData)(vlSelfRef.rst) | (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__id_ex_stall))
            ? 0U : (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_funct3));
    if (vlSelfRef.rst) {
        __VdlySet__soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers__v0 = 1U;
        __Vdly__soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__state = 0U;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__multdiv_result = 0ULL;
        vlSelfRef.soc_top__DOT__u_core__DOT__wb_MemToReg = 0U;
    } else {
        if (((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__wb_RegWrite) 
             & (0U != (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__wb_rd)))) {
            __VdlyVal__soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers__v32 
                = vlSelfRef.soc_top__DOT__u_core__DOT__wb_write_data;
            __VdlyDim0__soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers__v32 
                = vlSelfRef.soc_top__DOT__u_core__DOT__wb_rd;
            __VdlySet__soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers__v32 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__state))) {
            __Vdly__soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__state 
                = ((1U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__state))
                    ? 0U : 3U);
        } else if ((1U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__state))) {
            __Vdly__soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__state = 2U;
        } else if (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__is_m_ext) {
            __Vdly__soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__state = 1U;
            __Vtemp_1[0U] = (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a);
            __Vtemp_1[1U] = (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                     >> 0x00000020U));
            __Vtemp_1[2U] = 0U;
            __Vtemp_1[3U] = 0U;
            __Vtemp_2[0U] = (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b);
            __Vtemp_2[1U] = (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                     >> 0x00000020U));
            __Vtemp_2[2U] = 0U;
            __Vtemp_2[3U] = 0U;
            VL_MUL_W(4, __Vtemp_3, __Vtemp_1, __Vtemp_2);
            VL_EXTENDS_WQ(128,64, __Vtemp_4, vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a);
            __Vtemp_5[0U] = (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b);
            __Vtemp_5[1U] = (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                     >> 0x00000020U));
            __Vtemp_5[2U] = 0U;
            VL_EXTENDS_WW(128,65, __Vtemp_6, __Vtemp_5);
            VL_MULS_WWW(128, __Vtemp_7, __Vtemp_4, __Vtemp_6);
            vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__multdiv_result 
                = ((4U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_funct3))
                    ? ((2U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_funct3))
                        ? ((1U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_funct3))
                            ? ((0ULL == vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b)
                                ? vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a
                                : VL_MODDIV_QQQ(64, vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a, vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b))
                            : ((0ULL == vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b)
                                ? vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a
                                : VL_MODDIVS_QQQ(64, vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a, vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b)))
                        : ((1U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_funct3))
                            ? ((0ULL == vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b)
                                ? 0xffffffffffffffffULL
                                : VL_DIV_QQQ(64, vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a, vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b))
                            : ((0ULL == vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b)
                                ? 0xffffffffffffffffULL
                                : VL_DIVS_QQQ(64, vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a, vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b))))
                    : ((2U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_funct3))
                        ? ((1U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_funct3))
                            ? (((QData)((IData)(__Vtemp_3[3U])) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  __Vtemp_3[2U])))
                            : (((QData)((IData)(__Vtemp_7[3U])) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  __Vtemp_7[2U]))))
                        : ((1U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_funct3))
                            ? (((QData)((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__mul_signed[3U])) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__mul_signed[2U])))
                            : (((QData)((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__mul_signed[1U])) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__mul_signed[0U]))))));
        }
        vlSelfRef.soc_top__DOT__u_core__DOT__wb_MemToReg 
            = vlSelfRef.soc_top__DOT__u_core__DOT__mem_MemToReg;
    }
    vlSelfRef.soc_top__DOT__u_core__DOT__mem_MemToReg 
        = (((IData)(vlSelfRef.rst) | (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__id_ex_stall))
            ? 0U : (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_MemToReg));
    vlSelfRef.soc_top__DOT__u_core__DOT__wb_pc4 = ((IData)(vlSelfRef.rst)
                                                    ? 0ULL
                                                    : vlSelfRef.soc_top__DOT__u_core__DOT__mem_pc4);
    vlSelfRef.soc_top__DOT__u_core__DOT__mem_pc4 = 
        (((IData)(vlSelfRef.rst) | (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__id_ex_stall))
          ? 0ULL : vlSelfRef.soc_top__DOT__u_core__DOT__ex_pc4);
    if (vlSelfRef.rst) {
        vlSelfRef.soc_top__DOT__u_core__DOT__wb_alu_result = 0ULL;
        vlSelfRef.soc_top__DOT__u_core__DOT__wb_read_data = 0ULL;
    } else {
        vlSelfRef.soc_top__DOT__u_core__DOT__wb_alu_result 
            = vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result;
        vlSelfRef.soc_top__DOT__u_core__DOT__wb_read_data 
            = ((0x0000000000002000ULL > vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)
                ? vlSelfRef.soc_top__DOT__ram_read_data
                : ((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_35)
                    ? vlSelfRef.soc_top__DOT__vga_read_data
                    : ((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_36)
                        ? (((0x0000000000002000ULL 
                             <= vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result) 
                            & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_35)) 
                               & ((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_36) 
                                  & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_MemRead))))
                            ? ((0U == (0x0000000fU 
                                       & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)))
                                ? (QData)((IData)(vlSelfRef.soc_top__DOT__u_spi__DOT__rx_data))
                                : ((8U == (0x0000000fU 
                                           & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)))
                                    ? (QData)((IData)(
                                                      (((IData)(vlSelfRef.soc_top__DOT__u_spi__DOT__clk_div) 
                                                        << 8U) 
                                                       | (((IData)(vlSelfRef.soc_top__DOT__u_spi__DOT__busy) 
                                                           << 1U) 
                                                          | (IData)(vlSelfRef.spi_cs_n)))))
                                    : 0ULL)) : 0ULL)
                        : ((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_37)
                            ? (((0x0000000000002000ULL 
                                 <= vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result) 
                                & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_35)) 
                                   & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_36)) 
                                      & ((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_37) 
                                         & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_MemRead)))))
                                ? ((0U == (0x0000000fU 
                                           & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)))
                                    ? vlSelfRef.soc_top__DOT__u_clint__DOT__mtimecmp
                                    : ((8U == (0x0000000fU 
                                               & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)))
                                        ? vlSelfRef.soc_top__DOT__u_clint__DOT__mtime
                                        : 0ULL)) : 0ULL)
                            : ((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_38)
                                ? ((0U == (0x000000ffU 
                                           & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)))
                                    ? (QData)((IData)(vlSelfRef.buttons))
                                    : 0ULL) : 0ULL)))));
    }
    if (((IData)(vlSelfRef.rst) | (IData)(vlSelfRef.soc_top__DOT__u_core__DOT____Vcellinp__u_id_ex__flush))) {
        vlSelfRef.soc_top__DOT__u_core__DOT__ex_Branch = 0U;
        vlSelfRef.soc_top__DOT__u_core__DOT__ex_Jump = 0U;
        vlSelfRef.soc_top__DOT__u_core__DOT__ex_is_32bit = 0U;
        vlSelfRef.soc_top__DOT__u_core__DOT__ex_is_csr = 0U;
        vlSelfRef.soc_top__DOT__u_core__DOT__ex_ALUOp = 0U;
        vlSelfRef.soc_top__DOT__u_core__DOT__ex_funct7 = 0U;
        vlSelfRef.soc_top__DOT__u_core__DOT__ex_ALUSrcA = 0U;
        vlSelfRef.soc_top__DOT__u_core__DOT__ex_rs1 = 0U;
        vlSelfRef.soc_top__DOT__u_core__DOT__ex_ALUSrc = 0U;
        vlSelfRef.soc_top__DOT__u_core__DOT__ex_pc = 0ULL;
        vlSelfRef.soc_top__DOT__u_core__DOT__ex_rs2 = 0U;
        vlSelfRef.soc_top__DOT__u_core__DOT__ex_immediate = 0ULL;
        vlSelfRef.soc_top__DOT__u_core__DOT__ex_rs1_data = 0ULL;
        vlSelfRef.soc_top__DOT__u_core__DOT__ex_rs2_data = 0ULL;
    } else if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__id_ex_stall)))) {
        vlSelfRef.soc_top__DOT__u_core__DOT__ex_Branch 
            = vlSelfRef.soc_top__DOT__u_core__DOT__id_Branch;
        vlSelfRef.soc_top__DOT__u_core__DOT__ex_Jump 
            = vlSelfRef.soc_top__DOT__u_core__DOT__id_Jump;
        vlSelfRef.soc_top__DOT__u_core__DOT__ex_is_32bit 
            = vlSelfRef.soc_top__DOT__u_core__DOT__id_is_32bit;
        vlSelfRef.soc_top__DOT__u_core__DOT__ex_is_csr 
            = vlSelfRef.soc_top__DOT__u_core__DOT__id_is_csr;
        vlSelfRef.soc_top__DOT__u_core__DOT__ex_ALUOp 
            = vlSelfRef.soc_top__DOT__u_core__DOT__id_ALUOp;
        vlSelfRef.soc_top__DOT__u_core__DOT__ex_funct7 
            = (vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction 
               >> 0x00000019U);
        vlSelfRef.soc_top__DOT__u_core__DOT__ex_ALUSrcA 
            = vlSelfRef.soc_top__DOT__u_core__DOT__id_ALUSrcA;
        vlSelfRef.soc_top__DOT__u_core__DOT__ex_rs1 
            = (0x0000001fU & (vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction 
                              >> 0x0000000fU));
        vlSelfRef.soc_top__DOT__u_core__DOT__ex_ALUSrc 
            = vlSelfRef.soc_top__DOT__u_core__DOT__id_ALUSrc;
        vlSelfRef.soc_top__DOT__u_core__DOT__ex_pc 
            = vlSelfRef.soc_top__DOT__u_core__DOT__id_pc;
        vlSelfRef.soc_top__DOT__u_core__DOT__ex_rs2 
            = (0x0000001fU & (vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction 
                              >> 0x00000014U));
        vlSelfRef.soc_top__DOT__u_core__DOT__ex_immediate 
            = vlSelfRef.soc_top__DOT__u_core__DOT__id_immediate;
        vlSelfRef.soc_top__DOT__u_core__DOT__ex_rs1_data 
            = (((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT____VdfgRegularize_hf18c6620_0_0) 
                & ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__wb_rd) 
                   == (0x0000001fU & (vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction 
                                      >> 0x0000000fU))))
                ? vlSelfRef.soc_top__DOT__u_core__DOT__wb_write_data
                : vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers
               [(0x0000001fU & (vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction 
                                >> 0x0000000fU))]);
        vlSelfRef.soc_top__DOT__u_core__DOT__ex_rs2_data 
            = (((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT____VdfgRegularize_hf18c6620_0_0) 
                & ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__wb_rd) 
                   == (0x0000001fU & (vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction 
                                      >> 0x00000014U))))
                ? vlSelfRef.soc_top__DOT__u_core__DOT__wb_write_data
                : vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers
               [(0x0000001fU & (vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction 
                                >> 0x00000014U))]);
    }
    vlSelfRef.soc_top__DOT__u_core__DOT__wb_rd = ((IData)(vlSelfRef.rst)
                                                   ? 0U
                                                   : (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_rd));
    vlSelfRef.soc_top__DOT__u_core__DOT__mem_rd = (
                                                   ((IData)(vlSelfRef.rst) 
                                                    | (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__id_ex_stall))
                                                    ? 0U
                                                    : (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_rd));
    vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__state 
        = __Vdly__soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__state;
    if (__VdlySet__soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers__v0) {
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers[0U] = 0ULL;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers[1U] = 0ULL;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers[2U] = 0ULL;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers[3U] = 0ULL;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers[4U] = 0ULL;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers[5U] = 0ULL;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers[6U] = 0ULL;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers[7U] = 0ULL;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers[8U] = 0ULL;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers[9U] = 0ULL;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers[0x0aU] = 0ULL;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers[0x0bU] = 0ULL;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers[0x0cU] = 0ULL;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers[0x0dU] = 0ULL;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers[0x0eU] = 0ULL;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers[0x0fU] = 0ULL;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers[0x10U] = 0ULL;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers[0x11U] = 0ULL;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers[0x12U] = 0ULL;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers[0x13U] = 0ULL;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers[0x14U] = 0ULL;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers[0x15U] = 0ULL;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers[0x16U] = 0ULL;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers[0x17U] = 0ULL;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers[0x18U] = 0ULL;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers[0x19U] = 0ULL;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers[0x1aU] = 0ULL;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers[0x1bU] = 0ULL;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers[0x1cU] = 0ULL;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers[0x1dU] = 0ULL;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers[0x1eU] = 0ULL;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers[0x1fU] = 0ULL;
    }
    if (__VdlySet__soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers__v32) {
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers[__VdlyDim0__soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers__v32] 
            = __VdlyVal__soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers__v32;
    }
    vlSelfRef.soc_top__DOT__u_core__DOT__wb_RegWrite 
        = ((1U & (~ (IData)(vlSelfRef.rst))) && (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_RegWrite));
    vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__is_m_ext 
        = ((2U == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_ALUOp)) 
           & (1U == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_funct7)));
    vlSelfRef.soc_top__DOT__u_core__DOT__mem_MemRead 
        = ((1U & (~ ((IData)(vlSelfRef.rst) | (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__id_ex_stall)))) 
           && (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_MemRead));
    vlSelfRef.soc_top__DOT__u_core__DOT__wb_write_data 
        = ((1U == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__wb_MemToReg))
            ? vlSelfRef.soc_top__DOT__u_core__DOT__wb_read_data
            : ((2U == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__wb_MemToReg))
                ? vlSelfRef.soc_top__DOT__u_core__DOT__wb_pc4
                : vlSelfRef.soc_top__DOT__u_core__DOT__wb_alu_result));
    vlSelfRef.soc_top__DOT__u_core__DOT__mem_RegWrite 
        = ((1U & (~ ((IData)(vlSelfRef.rst) | (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__id_ex_stall)))) 
           && (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_RegWrite));
    if (((IData)(vlSelfRef.rst) | (IData)(vlSelfRef.soc_top__DOT__u_core__DOT____Vcellinp__u_if_id__flush))) {
        vlSelfRef.soc_top__DOT__u_core__DOT__id_pc = 0ULL;
    } else if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__pc_stall)))) {
        vlSelfRef.soc_top__DOT__u_core__DOT__id_pc 
            = vlSelfRef.soc_top__DOT__u_core__DOT__if_pc;
    }
    if (((IData)(vlSelfRef.rst) | (IData)(vlSelfRef.soc_top__DOT__u_core__DOT____Vcellinp__u_id_ex__flush))) {
        vlSelfRef.soc_top__DOT__u_core__DOT__ex_funct12 = 0U;
        vlSelfRef.soc_top__DOT__u_core__DOT__ex_funct3 = 0U;
        vlSelfRef.soc_top__DOT__u_core__DOT__ex_MemToReg = 0U;
        vlSelfRef.soc_top__DOT__u_core__DOT__ex_pc4 = 0ULL;
    } else if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__id_ex_stall)))) {
        vlSelfRef.soc_top__DOT__u_core__DOT__ex_funct12 
            = (vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction 
               >> 0x00000014U);
        vlSelfRef.soc_top__DOT__u_core__DOT__ex_funct3 
            = (7U & (vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction 
                     >> 0x0000000cU));
        vlSelfRef.soc_top__DOT__u_core__DOT__ex_MemToReg 
            = vlSelfRef.soc_top__DOT__u_core__DOT__id_MemToReg;
        vlSelfRef.soc_top__DOT__u_core__DOT__ex_pc4 
            = vlSelfRef.soc_top__DOT__u_core__DOT__id_pc4;
    }
    if (((IData)(vlSelfRef.rst) | (IData)(vlSelfRef.soc_top__DOT__u_core__DOT____Vcellinp__u_if_id__flush))) {
        vlSelfRef.soc_top__DOT__u_core__DOT__id_pc4 = 0ULL;
    } else if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__pc_stall)))) {
        vlSelfRef.soc_top__DOT__u_core__DOT__id_pc4 
            = vlSelfRef.soc_top__DOT__u_core__DOT__if_pc4;
    }
    if (((IData)(vlSelfRef.rst) | (IData)(vlSelfRef.soc_top__DOT__u_core__DOT____Vcellinp__u_id_ex__flush))) {
        vlSelfRef.soc_top__DOT__u_core__DOT__ex_MemRead = 0U;
        vlSelfRef.soc_top__DOT__u_core__DOT__ex_RegWrite = 0U;
        vlSelfRef.soc_top__DOT__u_core__DOT__ex_rd = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__id_ex_stall)))) {
        vlSelfRef.soc_top__DOT__u_core__DOT__ex_MemRead 
            = vlSelfRef.soc_top__DOT__u_core__DOT__id_MemRead;
        vlSelfRef.soc_top__DOT__u_core__DOT__ex_RegWrite 
            = vlSelfRef.soc_top__DOT__u_core__DOT__id_RegWrite;
        vlSelfRef.soc_top__DOT__u_core__DOT__ex_rd 
            = (0x0000001fU & (vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction 
                              >> 7U));
    }
    if (((IData)(vlSelfRef.rst) | (IData)(vlSelfRef.soc_top__DOT__u_core__DOT____Vcellinp__u_if_id__flush))) {
        vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction = 0x00000013U;
    } else if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__pc_stall)))) {
        vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction 
            = ((IData)(vlSelfRef.soc_top__DOT__u_ram__DOT__use_little_endian)
                ? (((vlSelfRef.soc_top__DOT__u_ram__DOT__memory
                     [(0x00001fffU & ((IData)(3U) + (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__if_pc)))] 
                     << 0x00000018U) | (vlSelfRef.soc_top__DOT__u_ram__DOT__memory
                                        [(0x00001fffU 
                                          & ((IData)(2U) 
                                             + (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__if_pc)))] 
                                        << 0x00000010U)) 
                   | ((vlSelfRef.soc_top__DOT__u_ram__DOT__memory
                       [(0x00001fffU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__if_pc)))] 
                       << 8U) | vlSelfRef.soc_top__DOT__u_ram__DOT__memory
                      [(0x00001fffU & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__if_pc))]))
                : (((vlSelfRef.soc_top__DOT__u_ram__DOT__memory
                     [(0x00001fffU & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__if_pc))] 
                     << 0x00000018U) | (vlSelfRef.soc_top__DOT__u_ram__DOT__memory
                                        [(0x00001fffU 
                                          & ((IData)(1U) 
                                             + (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__if_pc)))] 
                                        << 0x00000010U)) 
                   | ((vlSelfRef.soc_top__DOT__u_ram__DOT__memory
                       [(0x00001fffU & ((IData)(2U) 
                                        + (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__if_pc)))] 
                       << 8U) | vlSelfRef.soc_top__DOT__u_ram__DOT__memory
                      [(0x00001fffU & ((IData)(3U) 
                                       + (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__if_pc)))])));
    }
    if (vlSelfRef.rst) {
        vlSelfRef.soc_top__DOT__u_core__DOT__if_pc = 0ULL;
    } else if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__pc_stall)))) {
        vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
            = ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__take_trap)
                ? vlSelfRef.soc_top__DOT__u_core__DOT__trap_target_pc
                : ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_is_mret)
                    ? vlSelfRef.soc_top__DOT__u_core__DOT__trap_target_pc
                    : ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_branch_taken)
                        ? vlSelfRef.soc_top__DOT__u_core__DOT__ex_branch_target
                        : vlSelfRef.soc_top__DOT__u_core__DOT__if_pc4)));
    }
    if (((IData)(vlSelfRef.rst) | (IData)(vlSelfRef.soc_top__DOT__u_core__DOT____Vcellinp__u_id_ex__flush))) {
        vlSelfRef.soc_top__DOT__u_core__DOT__ex_is_mret = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__id_ex_stall)))) {
        vlSelfRef.soc_top__DOT__u_core__DOT__ex_is_mret 
            = vlSelfRef.soc_top__DOT__u_core__DOT__id_is_mret;
    }
    vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT____VdfgRegularize_hf18c6620_0_0 
        = ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__wb_RegWrite) 
           & (0U != (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__wb_rd)));
    vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__csr_write_en 
        = ((~ (((2U == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_funct3)) 
                | ((3U == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_funct3)) 
                   | ((6U == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_funct3)) 
                      | (7U == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_funct3))))) 
               & (0U == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_rs1)))) 
           & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_is_csr));
    __Vtableidx1 = ((0x00000020U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_funct7)) 
                    | (((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_funct3) 
                        << 2U) | (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_ALUOp)));
    vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_ctrl 
        = Vsoc_top__ConstPool__TABLE_h4c20ea82_0[__Vtableidx1];
    vlSelfRef.soc_top__DOT__u_core__DOT__ForwardA = 0U;
    if ((((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_RegWrite) 
          & (0U != (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_rd))) 
         & ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_rd) 
            == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_rs1)))) {
        vlSelfRef.soc_top__DOT__u_core__DOT__ForwardA = 1U;
    } else if ((((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__wb_RegWrite) 
                 & (0U != (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__wb_rd))) 
                & ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__wb_rd) 
                   == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_rs1)))) {
        vlSelfRef.soc_top__DOT__u_core__DOT__ForwardA = 2U;
    }
    vlSelfRef.soc_top__DOT__u_core__DOT__ForwardB = 0U;
    if ((((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_RegWrite) 
          & (0U != (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_rd))) 
         & ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_rd) 
            == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_rs2)))) {
        vlSelfRef.soc_top__DOT__u_core__DOT__ForwardB = 1U;
    } else if ((((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__wb_RegWrite) 
                 & (0U != (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__wb_rd))) 
                & ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__wb_rd) 
                   == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_rs2)))) {
        vlSelfRef.soc_top__DOT__u_core__DOT__ForwardB = 2U;
    }
    vlSelfRef.soc_top__DOT__u_core__DOT__id_is_32bit = 0U;
    vlSelfRef.soc_top__DOT__u_core__DOT__id_is_csr = 0U;
    vlSelfRef.soc_top__DOT__u_core__DOT__id_RegWrite = 0U;
    vlSelfRef.soc_top__DOT__u_core__DOT__id_ALUSrcA = 0U;
    vlSelfRef.soc_top__DOT__u_core__DOT__id_ALUSrc = 0U;
    vlSelfRef.soc_top__DOT__u_core__DOT__id_ALUOp = 0U;
    vlSelfRef.soc_top__DOT__u_core__DOT__id_MemToReg = 0U;
    vlSelfRef.soc_top__DOT__u_core__DOT__id_MemRead = 0U;
    vlSelfRef.soc_top__DOT__u_core__DOT__id_Jump = 0U;
    vlSelfRef.soc_top__DOT__u_core__DOT__id_Branch = 0U;
    if (((((((((0x33U == (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction)) 
               | (0x3bU == (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) 
              | (0x13U == (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) 
             | (0x1bU == (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) 
            | (3U == (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) 
           | (0x23U == (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) 
          | (0x63U == (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) 
         | (0x6fU == (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction)))) {
        if ((0x33U != (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) {
            if ((0x3bU == (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) {
                vlSelfRef.soc_top__DOT__u_core__DOT__id_is_32bit = 1U;
            } else if ((0x13U != (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) {
                if ((0x1bU == (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) {
                    vlSelfRef.soc_top__DOT__u_core__DOT__id_is_32bit = 1U;
                }
            }
            if ((0x3bU != (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) {
                if ((0x13U == (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) {
                    vlSelfRef.soc_top__DOT__u_core__DOT__id_ALUSrc = 1U;
                } else if ((0x1bU == (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) {
                    vlSelfRef.soc_top__DOT__u_core__DOT__id_ALUSrc = 1U;
                } else if ((3U == (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) {
                    vlSelfRef.soc_top__DOT__u_core__DOT__id_ALUSrc = 1U;
                } else if ((0x23U == (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) {
                    vlSelfRef.soc_top__DOT__u_core__DOT__id_ALUSrc = 1U;
                }
                if ((0x13U != (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) {
                    if ((0x1bU != (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) {
                        if ((3U == (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) {
                            vlSelfRef.soc_top__DOT__u_core__DOT__id_MemToReg = 1U;
                            vlSelfRef.soc_top__DOT__u_core__DOT__id_MemRead = 1U;
                        } else if ((0x23U != (0x0000007fU 
                                              & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) {
                            if ((0x63U != (0x0000007fU 
                                           & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) {
                                vlSelfRef.soc_top__DOT__u_core__DOT__id_MemToReg = 2U;
                            }
                        }
                        if ((3U != (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) {
                            if ((0x23U != (0x0000007fU 
                                           & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) {
                                if ((0x63U != (0x0000007fU 
                                               & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) {
                                    vlSelfRef.soc_top__DOT__u_core__DOT__id_Jump = 1U;
                                }
                                if ((0x63U == (0x0000007fU 
                                               & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) {
                                    vlSelfRef.soc_top__DOT__u_core__DOT__id_Branch = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((0x33U == (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) {
            vlSelfRef.soc_top__DOT__u_core__DOT__id_RegWrite = 1U;
            vlSelfRef.soc_top__DOT__u_core__DOT__id_ALUOp = 2U;
        } else if ((0x3bU == (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) {
            vlSelfRef.soc_top__DOT__u_core__DOT__id_RegWrite = 1U;
            vlSelfRef.soc_top__DOT__u_core__DOT__id_ALUOp = 2U;
        } else if ((0x13U == (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) {
            vlSelfRef.soc_top__DOT__u_core__DOT__id_RegWrite = 1U;
            vlSelfRef.soc_top__DOT__u_core__DOT__id_ALUOp = 3U;
        } else if ((0x1bU == (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) {
            vlSelfRef.soc_top__DOT__u_core__DOT__id_RegWrite = 1U;
            vlSelfRef.soc_top__DOT__u_core__DOT__id_ALUOp = 3U;
        } else if ((3U == (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) {
            vlSelfRef.soc_top__DOT__u_core__DOT__id_RegWrite = 1U;
            vlSelfRef.soc_top__DOT__u_core__DOT__id_ALUOp = 0U;
        } else {
            if ((0x23U != (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) {
                if ((0x63U != (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) {
                    vlSelfRef.soc_top__DOT__u_core__DOT__id_RegWrite = 1U;
                }
            }
            if ((0x23U == (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) {
                vlSelfRef.soc_top__DOT__u_core__DOT__id_ALUOp = 0U;
            } else if ((0x63U == (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) {
                vlSelfRef.soc_top__DOT__u_core__DOT__id_ALUOp = 1U;
            }
        }
    } else if ((0x67U == (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) {
        vlSelfRef.soc_top__DOT__u_core__DOT__id_RegWrite = 1U;
        vlSelfRef.soc_top__DOT__u_core__DOT__id_ALUSrc = 1U;
        vlSelfRef.soc_top__DOT__u_core__DOT__id_ALUOp = 0U;
        vlSelfRef.soc_top__DOT__u_core__DOT__id_MemToReg = 2U;
        vlSelfRef.soc_top__DOT__u_core__DOT__id_Jump = 1U;
    } else {
        if ((0x37U == (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) {
            vlSelfRef.soc_top__DOT__u_core__DOT__id_RegWrite = 1U;
            vlSelfRef.soc_top__DOT__u_core__DOT__id_ALUSrc = 1U;
            vlSelfRef.soc_top__DOT__u_core__DOT__id_ALUOp = 0U;
        } else if ((0x17U == (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) {
            vlSelfRef.soc_top__DOT__u_core__DOT__id_RegWrite = 1U;
            vlSelfRef.soc_top__DOT__u_core__DOT__id_ALUSrc = 1U;
            vlSelfRef.soc_top__DOT__u_core__DOT__id_ALUOp = 0U;
        } else if ((0x73U == (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) {
            if ((0U != (7U & (vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction 
                              >> 0x0000000cU)))) {
                vlSelfRef.soc_top__DOT__u_core__DOT__id_RegWrite = 1U;
            }
        }
        if ((0x37U != (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) {
            if ((0x17U != (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) {
                if ((0x73U == (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) {
                    if ((0U != (7U & (vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction 
                                      >> 0x0000000cU)))) {
                        vlSelfRef.soc_top__DOT__u_core__DOT__id_MemToReg = 0U;
                    }
                }
            }
        }
    }
    if ((2U & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction)) {
        if ((1U & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction)) {
            __VdfgRegularize_h6e95ff9d_0_2 = (((QData)((IData)(
                                                               (- (IData)(
                                                                          (vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction 
                                                                           >> 0x0000001fU))))) 
                                               << 0x00000020U) 
                                              | (QData)((IData)(
                                                                (0xfffff000U 
                                                                 & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))));
            __VdfgRegularize_h6e95ff9d_0_1 = (((- (QData)((IData)(
                                                                  (vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction 
                                                                   >> 0x0000001fU)))) 
                                               << 0x0000000cU) 
                                              | (QData)((IData)(
                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction 
                                                                 >> 0x00000014U))));
        } else {
            __VdfgRegularize_h6e95ff9d_0_2 = 0ULL;
            __VdfgRegularize_h6e95ff9d_0_1 = 0ULL;
        }
    } else {
        __VdfgRegularize_h6e95ff9d_0_2 = 0ULL;
        __VdfgRegularize_h6e95ff9d_0_1 = 0ULL;
    }
    vlSelfRef.soc_top__DOT__u_core__DOT__id_ex_flush_ext 
        = ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_MemRead) 
           & ((0U != (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_rd)) 
              & (((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_rd) 
                  == (0x0000001fU & (vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction 
                                     >> 0x0000000fU))) 
                 | (((0x33U == (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction)) 
                     | ((0x23U == (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction)) 
                        | (0x63U == (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction)))) 
                    & ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_rd) 
                       == (0x0000001fU & (vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction 
                                          >> 0x00000014U)))))));
    __VdfgRegularize_h6e95ff9d_0_3 = ((4U & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction)
                                       ? 0ULL : __VdfgRegularize_h6e95ff9d_0_1);
    vlSelfRef.soc_top__DOT__u_core__DOT__id_immediate 
        = ((0x00000040U & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction)
            ? ((0x00000020U & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction)
                ? ((0x00000010U & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction)
                    ? 0ULL : ((8U & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction)
                               ? ((4U & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction)
                                   ? ((2U & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction)
                                       ? ((1U & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction)
                                           ? (((- (QData)((IData)(
                                                                  (vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction 
                                                                   >> 0x0000001fU)))) 
                                               << 0x00000015U) 
                                              | (QData)((IData)(
                                                                ((((0x00000200U 
                                                                    & (vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction 
                                                                       >> 0x00000016U)) 
                                                                   | ((0x000001feU 
                                                                       & (vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction 
                                                                          >> 0x0000000bU)) 
                                                                      | (1U 
                                                                         & (vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction 
                                                                            >> 0x00000014U)))) 
                                                                  << 0x0000000bU) 
                                                                 | (0x000007feU 
                                                                    & (vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction 
                                                                       >> 0x00000014U))))))
                                           : 0ULL) : 0ULL)
                                   : 0ULL) : ((4U & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction)
                                               ? __VdfgRegularize_h6e95ff9d_0_1
                                               : ((2U 
                                                   & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction)
                                                   ? 
                                                  ((1U 
                                                    & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction)
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction 
                                                                         >> 0x0000001fU)))) 
                                                     << 0x0000000dU) 
                                                    | (QData)((IData)(
                                                                      ((((2U 
                                                                          & (vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction 
                                                                             >> 0x0000001eU)) 
                                                                         | (1U 
                                                                            & (vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction 
                                                                               >> 7U))) 
                                                                        << 0x0000000bU) 
                                                                       | ((0x000007e0U 
                                                                           & (vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction 
                                                                              >> 0x00000014U)) 
                                                                          | (0x0000001eU 
                                                                             & (vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction 
                                                                                >> 7U)))))))
                                                    : 0ULL)
                                                   : 0ULL))))
                : 0ULL) : ((0x00000020U & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction)
                            ? ((0x00000010U & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction)
                                ? ((8U & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction)
                                    ? 0ULL : ((4U & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction)
                                               ? __VdfgRegularize_h6e95ff9d_0_2
                                               : 0ULL))
                                : ((8U & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction)
                                    ? 0ULL : ((4U & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction)
                                               ? 0ULL
                                               : ((2U 
                                                   & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction)
                                                   ? 
                                                  ((1U 
                                                    & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction)
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction 
                                                                         >> 0x0000001fU)))) 
                                                     << 0x0000000cU) 
                                                    | (QData)((IData)(
                                                                      ((0x00000fe0U 
                                                                        & (vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction 
                                                                           >> 0x00000014U)) 
                                                                       | (0x0000001fU 
                                                                          & (vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction 
                                                                             >> 7U))))))
                                                    : 0ULL)
                                                   : 0ULL))))
                            : ((0x00000010U & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction)
                                ? ((8U & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction)
                                    ? __VdfgRegularize_h6e95ff9d_0_3
                                    : ((4U & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction)
                                        ? __VdfgRegularize_h6e95ff9d_0_2
                                        : __VdfgRegularize_h6e95ff9d_0_1))
                                : ((8U & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction)
                                    ? 0ULL : __VdfgRegularize_h6e95ff9d_0_3))));
    vlSelfRef.soc_top__DOT__u_core__DOT__id_is_mret = 0U;
    if ((1U & (~ ((((((((0x33U == (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction)) 
                        | (0x3bU == (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) 
                       | (0x13U == (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) 
                      | (0x1bU == (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) 
                     | (3U == (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) 
                    | (0x23U == (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) 
                   | (0x63U == (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) 
                  | (0x6fU == (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction)))))) {
        if ((0x67U != (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) {
            if ((0x37U != (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) {
                if ((0x17U != (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) {
                    if ((0x73U == (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) {
                        if ((0U != (7U & (vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction 
                                          >> 0x0000000cU)))) {
                            vlSelfRef.soc_top__DOT__u_core__DOT__id_is_csr = 1U;
                        }
                        if ((0U == (7U & (vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction 
                                          >> 0x0000000cU)))) {
                            if ((0x0302U == (vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction 
                                             >> 0x00000014U))) {
                                vlSelfRef.soc_top__DOT__u_core__DOT__id_is_mret = 1U;
                            }
                        }
                    }
                }
            }
            if ((0x37U == (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) {
                vlSelfRef.soc_top__DOT__u_core__DOT__id_ALUSrcA = 2U;
            } else if ((0x17U == (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) {
                vlSelfRef.soc_top__DOT__u_core__DOT__id_ALUSrcA = 1U;
            }
        }
    }
}

void Vsoc_top___024root___nba_sequent__TOP__3(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__3\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__u_core__DOT__if_pc4 = (
                                                   ((QData)((IData)(
                                                                    ((((((((2U 
                                                                            & (((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x0000003fU)) 
                                                                                ^ 
                                                                                ((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x0000003eU)) 
                                                                                & (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__rca_gen__BRA__62__KET____DOT__fa_inst__DOT__cin))) 
                                                                               << 1U)) 
                                                                           | (1U 
                                                                              & ((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x0000003eU)) 
                                                                                ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__rca_gen__BRA__62__KET____DOT__fa_inst__DOT__cin)))) 
                                                                          << 6U) 
                                                                         | (((2U 
                                                                              & (((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x0000003dU)) 
                                                                                ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__rca_gen__BRA__61__KET____DOT__fa_inst__DOT__cin)) 
                                                                                << 1U)) 
                                                                             | (1U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x0000003cU)) 
                                                                                ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__rca_gen__BRA__60__KET____DOT__fa_inst__DOT__cin)))) 
                                                                            << 4U)) 
                                                                        | ((((2U 
                                                                              & (((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x0000003bU)) 
                                                                                ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__rca_gen__BRA__59__KET____DOT__fa_inst__DOT__cin)) 
                                                                                << 1U)) 
                                                                             | (1U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x0000003aU)) 
                                                                                ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__rca_gen__BRA__58__KET____DOT__fa_inst__DOT__cin)))) 
                                                                            << 2U) 
                                                                           | ((2U 
                                                                               & (((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x00000039U)) 
                                                                                ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__rca_gen__BRA__57__KET____DOT__fa_inst__DOT__cin)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x00000038U)) 
                                                                                ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__rca_gen__BRA__56__KET____DOT__fa_inst__DOT__cin)))))) 
                                                                       << 0x00000018U) 
                                                                      | ((((((2U 
                                                                              & (((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x00000037U)) 
                                                                                ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__rca_gen__BRA__55__KET____DOT__fa_inst__DOT__cin)) 
                                                                                << 1U)) 
                                                                             | (1U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x00000036U)) 
                                                                                ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__rca_gen__BRA__54__KET____DOT__fa_inst__DOT__cin)))) 
                                                                            << 6U) 
                                                                           | (((2U 
                                                                                & (((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x00000035U)) 
                                                                                ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__rca_gen__BRA__53__KET____DOT__fa_inst__DOT__cin)) 
                                                                                << 1U)) 
                                                                               | (1U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x00000034U)) 
                                                                                ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__rca_gen__BRA__52__KET____DOT__fa_inst__DOT__cin)))) 
                                                                              << 4U)) 
                                                                          | ((((2U 
                                                                                & (((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x00000033U)) 
                                                                                ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__rca_gen__BRA__51__KET____DOT__fa_inst__DOT__cin)) 
                                                                                << 1U)) 
                                                                               | (1U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x00000032U)) 
                                                                                ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__rca_gen__BRA__50__KET____DOT__fa_inst__DOT__cin)))) 
                                                                              << 2U) 
                                                                             | ((2U 
                                                                                & (((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x00000031U)) 
                                                                                ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__rca_gen__BRA__49__KET____DOT__fa_inst__DOT__cin)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x00000030U)) 
                                                                                ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__rca_gen__BRA__48__KET____DOT__fa_inst__DOT__cin)))))) 
                                                                         << 0x00000010U)) 
                                                                     | (((((((2U 
                                                                              & (((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x0000002fU)) 
                                                                                ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__rca_gen__BRA__47__KET____DOT__fa_inst__DOT__cin)) 
                                                                                << 1U)) 
                                                                             | (1U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x0000002eU)) 
                                                                                ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__rca_gen__BRA__46__KET____DOT__fa_inst__DOT__cin)))) 
                                                                            << 6U) 
                                                                           | (((2U 
                                                                                & (((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x0000002dU)) 
                                                                                ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__rca_gen__BRA__45__KET____DOT__fa_inst__DOT__cin)) 
                                                                                << 1U)) 
                                                                               | (1U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x0000002cU)) 
                                                                                ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__rca_gen__BRA__44__KET____DOT__fa_inst__DOT__cin)))) 
                                                                              << 4U)) 
                                                                          | ((((2U 
                                                                                & (((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x0000002bU)) 
                                                                                ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__rca_gen__BRA__43__KET____DOT__fa_inst__DOT__cin)) 
                                                                                << 1U)) 
                                                                               | (1U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x0000002aU)) 
                                                                                ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__rca_gen__BRA__42__KET____DOT__fa_inst__DOT__cin)))) 
                                                                              << 2U) 
                                                                             | ((2U 
                                                                                & (((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x00000029U)) 
                                                                                ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__rca_gen__BRA__41__KET____DOT__fa_inst__DOT__cin)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x00000028U)) 
                                                                                ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__rca_gen__BRA__40__KET____DOT__fa_inst__DOT__cin)))))) 
                                                                         << 8U) 
                                                                        | (((((2U 
                                                                               & (((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x00000027U)) 
                                                                                ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__rca_gen__BRA__39__KET____DOT__fa_inst__DOT__cin)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x00000026U)) 
                                                                                ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__rca_gen__BRA__38__KET____DOT__fa_inst__DOT__cin)))) 
                                                                             << 6U) 
                                                                            | (((2U 
                                                                                & (((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x00000025U)) 
                                                                                ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__rca_gen__BRA__37__KET____DOT__fa_inst__DOT__cin)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x00000024U)) 
                                                                                ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__rca_gen__BRA__36__KET____DOT__fa_inst__DOT__cin)))) 
                                                                               << 4U)) 
                                                                           | ((((2U 
                                                                                & (((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x00000023U)) 
                                                                                ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__rca_gen__BRA__35__KET____DOT__fa_inst__DOT__cin)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x00000022U)) 
                                                                                ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__rca_gen__BRA__34__KET____DOT__fa_inst__DOT__cin)))) 
                                                                               << 2U) 
                                                                              | ((2U 
                                                                                & (((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x00000021U)) 
                                                                                ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__rca_gen__BRA__33__KET____DOT__fa_inst__DOT__cin)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x00000020U)) 
                                                                                ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__rca_gen__BRA__32__KET____DOT__fa_inst__DOT__cin)))))))))) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     ((((((((2U 
                                                                             & (((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x0000001fU)) 
                                                                                ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__rca_gen__BRA__31__KET____DOT__fa_inst__DOT__cin)) 
                                                                                << 1U)) 
                                                                            | (1U 
                                                                               & ((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x0000001eU)) 
                                                                                ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__rca_gen__BRA__30__KET____DOT__fa_inst__DOT__cin)))) 
                                                                           << 6U) 
                                                                          | (((2U 
                                                                               & (((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x0000001dU)) 
                                                                                ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__rca_gen__BRA__29__KET____DOT__fa_inst__DOT__cin)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x0000001cU)) 
                                                                                ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__rca_gen__BRA__28__KET____DOT__fa_inst__DOT__cin)))) 
                                                                             << 4U)) 
                                                                         | ((((2U 
                                                                               & (((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x0000001bU)) 
                                                                                ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__rca_gen__BRA__27__KET____DOT__fa_inst__DOT__cin)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x0000001aU)) 
                                                                                ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__rca_gen__BRA__26__KET____DOT__fa_inst__DOT__cin)))) 
                                                                             << 2U) 
                                                                            | ((2U 
                                                                                & (((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x00000019U)) 
                                                                                ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__rca_gen__BRA__25__KET____DOT__fa_inst__DOT__cin)) 
                                                                                << 1U)) 
                                                                               | (1U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x00000018U)) 
                                                                                ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__rca_gen__BRA__24__KET____DOT__fa_inst__DOT__cin)))))) 
                                                                        << 0x00000018U) 
                                                                       | ((((((2U 
                                                                               & (((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x00000017U)) 
                                                                                ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__rca_gen__BRA__23__KET____DOT__fa_inst__DOT__cin)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x00000016U)) 
                                                                                ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__rca_gen__BRA__22__KET____DOT__fa_inst__DOT__cin)))) 
                                                                             << 6U) 
                                                                            | (((2U 
                                                                                & (((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x00000015U)) 
                                                                                ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__rca_gen__BRA__21__KET____DOT__fa_inst__DOT__cin)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x00000014U)) 
                                                                                ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__rca_gen__BRA__20__KET____DOT__fa_inst__DOT__cin)))) 
                                                                               << 4U)) 
                                                                           | ((((2U 
                                                                                & (((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x00000013U)) 
                                                                                ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__rca_gen__BRA__19__KET____DOT__fa_inst__DOT__cin)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x00000012U)) 
                                                                                ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__rca_gen__BRA__18__KET____DOT__fa_inst__DOT__cin)))) 
                                                                               << 2U) 
                                                                              | ((2U 
                                                                                & (((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x00000011U)) 
                                                                                ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__rca_gen__BRA__17__KET____DOT__fa_inst__DOT__cin)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x00000010U)) 
                                                                                ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__rca_gen__BRA__16__KET____DOT__fa_inst__DOT__cin)))))) 
                                                                          << 0x00000010U)) 
                                                                      | (((((((2U 
                                                                               & (((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x0000000fU)) 
                                                                                ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__rca_gen__BRA__15__KET____DOT__fa_inst__DOT__cin)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x0000000eU)) 
                                                                                ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__rca_gen__BRA__14__KET____DOT__fa_inst__DOT__cin)))) 
                                                                             << 6U) 
                                                                            | (((2U 
                                                                                & (((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x0000000dU)) 
                                                                                ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__rca_gen__BRA__13__KET____DOT__fa_inst__DOT__cin)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x0000000cU)) 
                                                                                ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__rca_gen__BRA__12__KET____DOT__fa_inst__DOT__cin)))) 
                                                                               << 4U)) 
                                                                           | ((((2U 
                                                                                & (((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x0000000bU)) 
                                                                                ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__rca_gen__BRA__11__KET____DOT__fa_inst__DOT__cin)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x0000000aU)) 
                                                                                ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__rca_gen__BRA__10__KET____DOT__fa_inst__DOT__cin)))) 
                                                                               << 2U) 
                                                                              | ((2U 
                                                                                & (((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 9U)) 
                                                                                ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__rca_gen__BRA__9__KET____DOT__fa_inst__DOT__cin)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 8U)) 
                                                                                ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__rca_gen__BRA__8__KET____DOT__fa_inst__DOT__cin)))))) 
                                                                          << 8U) 
                                                                         | (((((2U 
                                                                                & (((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 7U)) 
                                                                                ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__rca_gen__BRA__7__KET____DOT__fa_inst__DOT__cin)) 
                                                                                << 1U)) 
                                                                               | (1U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 6U)) 
                                                                                ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__rca_gen__BRA__6__KET____DOT__fa_inst__DOT__cin)))) 
                                                                              << 6U) 
                                                                             | (((2U 
                                                                                & (((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 5U)) 
                                                                                ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__rca_gen__BRA__5__KET____DOT__fa_inst__DOT__cin)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 4U)) 
                                                                                ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__rca_gen__BRA__4__KET____DOT__fa_inst__DOT__cin)))) 
                                                                                << 4U)) 
                                                                            | ((8U 
                                                                                & (VL_REDXOR_4(
                                                                                (0x000000000000000cULL 
                                                                                & vlSelfRef.soc_top__DOT__u_core__DOT__if_pc)) 
                                                                                << 3U)) 
                                                                               | ((4U 
                                                                                & ((~ (IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 2U))) 
                                                                                << 2U)) 
                                                                                | (3U 
                                                                                & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__if_pc))))))))));
}

void Vsoc_top___024root___nba_sequent__TOP__4(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__4\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__u_vga__DOT__vga_pixel_data 
        = vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
        [((IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__in_window)
           ? ((0x00003f80U & (((IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__v_count) 
                               - (IData)(0x00000070U)) 
                              << 6U)) | (0x0000007fU 
                                         & (((IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__h_count) 
                                             - (IData)(0x000000c0U)) 
                                            >> 1U)))
           : 0U)];
}

void Vsoc_top___024root___nba_sequent__TOP__5(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__5\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__u_clint__DOT__mtime = vlSelfRef.__Vdly__soc_top__DOT__u_clint__DOT__mtime;
    if (vlSelfRef.__VdlySet__soc_top__DOT__u_ram__DOT__memory__v0) {
        vlSelfRef.soc_top__DOT__u_ram__DOT__memory[vlSelfRef.__VdlyDim0__soc_top__DOT__u_ram__DOT__memory__v0] 
            = vlSelfRef.__VdlyVal__soc_top__DOT__u_ram__DOT__memory__v0;
    }
    if (vlSelfRef.__VdlySet__soc_top__DOT__u_ram__DOT__memory__v1) {
        vlSelfRef.soc_top__DOT__u_ram__DOT__memory[vlSelfRef.__VdlyDim0__soc_top__DOT__u_ram__DOT__memory__v1] 
            = vlSelfRef.__VdlyVal__soc_top__DOT__u_ram__DOT__memory__v1;
        vlSelfRef.soc_top__DOT__u_ram__DOT__memory[vlSelfRef.__VdlyDim0__soc_top__DOT__u_ram__DOT__memory__v2] 
            = vlSelfRef.__VdlyVal__soc_top__DOT__u_ram__DOT__memory__v2;
    }
    if (vlSelfRef.__VdlySet__soc_top__DOT__u_ram__DOT__memory__v3) {
        vlSelfRef.soc_top__DOT__u_ram__DOT__memory[vlSelfRef.__VdlyDim0__soc_top__DOT__u_ram__DOT__memory__v3] 
            = vlSelfRef.__VdlyVal__soc_top__DOT__u_ram__DOT__memory__v3;
        vlSelfRef.soc_top__DOT__u_ram__DOT__memory[vlSelfRef.__VdlyDim0__soc_top__DOT__u_ram__DOT__memory__v4] 
            = vlSelfRef.__VdlyVal__soc_top__DOT__u_ram__DOT__memory__v4;
        vlSelfRef.soc_top__DOT__u_ram__DOT__memory[vlSelfRef.__VdlyDim0__soc_top__DOT__u_ram__DOT__memory__v5] 
            = vlSelfRef.__VdlyVal__soc_top__DOT__u_ram__DOT__memory__v5;
        vlSelfRef.soc_top__DOT__u_ram__DOT__memory[vlSelfRef.__VdlyDim0__soc_top__DOT__u_ram__DOT__memory__v6] 
            = vlSelfRef.__VdlyVal__soc_top__DOT__u_ram__DOT__memory__v6;
    }
    if (vlSelfRef.__VdlySet__soc_top__DOT__u_ram__DOT__memory__v7) {
        vlSelfRef.soc_top__DOT__u_ram__DOT__memory[vlSelfRef.__VdlyDim0__soc_top__DOT__u_ram__DOT__memory__v7] 
            = vlSelfRef.__VdlyVal__soc_top__DOT__u_ram__DOT__memory__v7;
        vlSelfRef.soc_top__DOT__u_ram__DOT__memory[vlSelfRef.__VdlyDim0__soc_top__DOT__u_ram__DOT__memory__v8] 
            = vlSelfRef.__VdlyVal__soc_top__DOT__u_ram__DOT__memory__v8;
        vlSelfRef.soc_top__DOT__u_ram__DOT__memory[vlSelfRef.__VdlyDim0__soc_top__DOT__u_ram__DOT__memory__v9] 
            = vlSelfRef.__VdlyVal__soc_top__DOT__u_ram__DOT__memory__v9;
        vlSelfRef.soc_top__DOT__u_ram__DOT__memory[vlSelfRef.__VdlyDim0__soc_top__DOT__u_ram__DOT__memory__v10] 
            = vlSelfRef.__VdlyVal__soc_top__DOT__u_ram__DOT__memory__v10;
        vlSelfRef.soc_top__DOT__u_ram__DOT__memory[vlSelfRef.__VdlyDim0__soc_top__DOT__u_ram__DOT__memory__v11] 
            = vlSelfRef.__VdlyVal__soc_top__DOT__u_ram__DOT__memory__v11;
        vlSelfRef.soc_top__DOT__u_ram__DOT__memory[vlSelfRef.__VdlyDim0__soc_top__DOT__u_ram__DOT__memory__v12] 
            = vlSelfRef.__VdlyVal__soc_top__DOT__u_ram__DOT__memory__v12;
        vlSelfRef.soc_top__DOT__u_ram__DOT__memory[vlSelfRef.__VdlyDim0__soc_top__DOT__u_ram__DOT__memory__v13] 
            = vlSelfRef.__VdlyVal__soc_top__DOT__u_ram__DOT__memory__v13;
        vlSelfRef.soc_top__DOT__u_ram__DOT__memory[vlSelfRef.__VdlyDim0__soc_top__DOT__u_ram__DOT__memory__v14] 
            = vlSelfRef.__VdlyVal__soc_top__DOT__u_ram__DOT__memory__v14;
    }
    if (vlSelfRef.__VdlySet__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v0) {
        vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory[vlSelfRef.__VdlyDim0__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v0] 
            = vlSelfRef.__VdlyVal__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v0;
    }
    if (vlSelfRef.__VdlySet__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v1) {
        vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory[vlSelfRef.__VdlyDim0__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v1] 
            = vlSelfRef.__VdlyVal__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v1;
        vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory[vlSelfRef.__VdlyDim0__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v2] 
            = vlSelfRef.__VdlyVal__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v2;
    }
    if (vlSelfRef.__VdlySet__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v3) {
        vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory[vlSelfRef.__VdlyDim0__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v3] 
            = vlSelfRef.__VdlyVal__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v3;
        vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory[vlSelfRef.__VdlyDim0__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v4] 
            = vlSelfRef.__VdlyVal__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v4;
        vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory[vlSelfRef.__VdlyDim0__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v5] 
            = vlSelfRef.__VdlyVal__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v5;
        vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory[vlSelfRef.__VdlyDim0__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v6] 
            = vlSelfRef.__VdlyVal__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v6;
    }
    if (vlSelfRef.__VdlySet__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v7) {
        vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory[vlSelfRef.__VdlyDim0__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v7] 
            = vlSelfRef.__VdlyVal__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v7;
        vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory[vlSelfRef.__VdlyDim0__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v8] 
            = vlSelfRef.__VdlyVal__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v8;
        vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory[vlSelfRef.__VdlyDim0__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v9] 
            = vlSelfRef.__VdlyVal__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v9;
        vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory[vlSelfRef.__VdlyDim0__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v10] 
            = vlSelfRef.__VdlyVal__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v10;
        vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory[vlSelfRef.__VdlyDim0__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v11] 
            = vlSelfRef.__VdlyVal__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v11;
        vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory[vlSelfRef.__VdlyDim0__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v12] 
            = vlSelfRef.__VdlyVal__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v12;
        vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory[vlSelfRef.__VdlyDim0__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v13] 
            = vlSelfRef.__VdlyVal__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v13;
        vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory[vlSelfRef.__VdlyDim0__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v14] 
            = vlSelfRef.__VdlyVal__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v14;
    }
    if (vlSelfRef.rst) {
        vlSelfRef.soc_top__DOT__u_clint__DOT__mtimecmp = 0xffffffffffffffffULL;
        vlSelfRef.spi_cs_n = 1U;
        vlSelfRef.__Vdly__soc_top__DOT__u_spi__DOT__clk_div = 0U;
        vlSelfRef.soc_top__DOT__u_spi__DOT__busy = 0U;
        vlSelfRef.__Vdly__soc_top__DOT__u_spi__DOT__shift_reg = 0U;
        vlSelfRef.soc_top__DOT__u_spi__DOT__rx_data = 0U;
        vlSelfRef.spi_sck = 0U;
        vlSelfRef.spi_mosi = 0U;
        vlSelfRef.__Vdly__soc_top__DOT__u_spi__DOT__state = 0U;
        vlSelfRef.__Vdly__soc_top__DOT__u_spi__DOT__clk_cnt = 0U;
        vlSelfRef.__Vdly__soc_top__DOT__u_spi__DOT__bit_cnt = 0U;
    } else {
        if (vlSelfRef.soc_top__DOT__clint_write_req) {
            if ((0U == (0x0000000fU & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)))) {
                vlSelfRef.soc_top__DOT__u_clint__DOT__mtimecmp 
                    = vlSelfRef.soc_top__DOT__u_core__DOT__mem_rs2_data;
            }
        }
        if ((((0x0000000000002000ULL <= vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result) 
              & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_35)) 
                 & ((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_36) 
                    & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_MemWrite)))) 
             & (0U == (IData)(vlSelfRef.soc_top__DOT__u_spi__DOT__state)))) {
            if ((0U == (0x0000000fU & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)))) {
                vlSelfRef.__Vdly__soc_top__DOT__u_spi__DOT__shift_reg 
                    = (0x000000ffU & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_rs2_data));
                vlSelfRef.soc_top__DOT__u_spi__DOT__busy = 1U;
                vlSelfRef.__Vdly__soc_top__DOT__u_spi__DOT__state = 1U;
                vlSelfRef.__Vdly__soc_top__DOT__u_spi__DOT__clk_cnt = 0U;
                vlSelfRef.__Vdly__soc_top__DOT__u_spi__DOT__bit_cnt = 7U;
            } else if ((8U == (0x0000000fU & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)))) {
                vlSelfRef.spi_cs_n = (1U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_rs2_data));
                vlSelfRef.__Vdly__soc_top__DOT__u_spi__DOT__clk_div 
                    = (0x000000ffU & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__mem_rs2_data 
                                              >> 8U)));
            }
        }
        if ((0U == (IData)(vlSelfRef.soc_top__DOT__u_spi__DOT__state))) {
            vlSelfRef.spi_sck = 0U;
        } else if ((1U == (IData)(vlSelfRef.soc_top__DOT__u_spi__DOT__state))) {
            vlSelfRef.spi_mosi = (1U & ((IData)(vlSelfRef.soc_top__DOT__u_spi__DOT__shift_reg) 
                                        >> 7U));
            if (((IData)(vlSelfRef.soc_top__DOT__u_spi__DOT__clk_cnt) 
                 == (IData)(vlSelfRef.soc_top__DOT__u_spi__DOT__clk_div))) {
                vlSelfRef.__Vdly__soc_top__DOT__u_spi__DOT__clk_cnt = 0U;
                vlSelfRef.__Vdly__soc_top__DOT__u_spi__DOT__state = 2U;
            } else {
                vlSelfRef.__Vdly__soc_top__DOT__u_spi__DOT__clk_cnt 
                    = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.soc_top__DOT__u_spi__DOT__clk_cnt)));
            }
        } else if ((2U == (IData)(vlSelfRef.soc_top__DOT__u_spi__DOT__state))) {
            vlSelfRef.spi_sck = 1U;
            if (((IData)(vlSelfRef.soc_top__DOT__u_spi__DOT__clk_cnt) 
                 == (IData)(vlSelfRef.soc_top__DOT__u_spi__DOT__clk_div))) {
                vlSelfRef.__Vdly__soc_top__DOT__u_spi__DOT__shift_reg 
                    = ((0x000000feU & ((IData)(vlSelfRef.soc_top__DOT__u_spi__DOT__shift_reg) 
                                       << 1U)) | (IData)(vlSelfRef.spi_miso));
                vlSelfRef.__Vdly__soc_top__DOT__u_spi__DOT__clk_cnt = 0U;
                vlSelfRef.__Vdly__soc_top__DOT__u_spi__DOT__state = 3U;
            } else {
                vlSelfRef.__Vdly__soc_top__DOT__u_spi__DOT__clk_cnt 
                    = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.soc_top__DOT__u_spi__DOT__clk_cnt)));
            }
        } else if ((3U == (IData)(vlSelfRef.soc_top__DOT__u_spi__DOT__state))) {
            vlSelfRef.spi_sck = 0U;
            if (((IData)(vlSelfRef.soc_top__DOT__u_spi__DOT__clk_cnt) 
                 == (IData)(vlSelfRef.soc_top__DOT__u_spi__DOT__clk_div))) {
                vlSelfRef.__Vdly__soc_top__DOT__u_spi__DOT__clk_cnt = 0U;
                if ((0U == (IData)(vlSelfRef.soc_top__DOT__u_spi__DOT__bit_cnt))) {
                    vlSelfRef.__Vdly__soc_top__DOT__u_spi__DOT__state = 4U;
                } else {
                    vlSelfRef.__Vdly__soc_top__DOT__u_spi__DOT__bit_cnt 
                        = (7U & ((IData)(vlSelfRef.soc_top__DOT__u_spi__DOT__bit_cnt) 
                                 - (IData)(1U)));
                    vlSelfRef.__Vdly__soc_top__DOT__u_spi__DOT__state = 1U;
                }
            } else {
                vlSelfRef.__Vdly__soc_top__DOT__u_spi__DOT__clk_cnt 
                    = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.soc_top__DOT__u_spi__DOT__clk_cnt)));
            }
        } else if ((4U == (IData)(vlSelfRef.soc_top__DOT__u_spi__DOT__state))) {
            vlSelfRef.soc_top__DOT__u_spi__DOT__rx_data 
                = vlSelfRef.soc_top__DOT__u_spi__DOT__shift_reg;
            vlSelfRef.soc_top__DOT__u_spi__DOT__busy = 0U;
            vlSelfRef.__Vdly__soc_top__DOT__u_spi__DOT__state = 0U;
        }
    }
    vlSelfRef.soc_top__DOT__u_spi__DOT__shift_reg = vlSelfRef.__Vdly__soc_top__DOT__u_spi__DOT__shift_reg;
    vlSelfRef.soc_top__DOT__u_spi__DOT__state = vlSelfRef.__Vdly__soc_top__DOT__u_spi__DOT__state;
    vlSelfRef.soc_top__DOT__u_spi__DOT__clk_cnt = vlSelfRef.__Vdly__soc_top__DOT__u_spi__DOT__clk_cnt;
    vlSelfRef.soc_top__DOT__u_spi__DOT__bit_cnt = vlSelfRef.__Vdly__soc_top__DOT__u_spi__DOT__bit_cnt;
    vlSelfRef.soc_top__DOT__u_spi__DOT__clk_div = vlSelfRef.__Vdly__soc_top__DOT__u_spi__DOT__clk_div;
    vlSelfRef.soc_top__DOT__timer_interrupt = (vlSelfRef.soc_top__DOT__u_clint__DOT__mtime 
                                               >= vlSelfRef.soc_top__DOT__u_clint__DOT__mtimecmp);
}

void Vsoc_top___024root___nba_comb__TOP__0(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__0\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__u_core__DOT__trap_target_pc 
        = ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_is_mret)
            ? vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__mepc_out
            : vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__mtvec_out);
    vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__csr_rdata 
        = ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_is_csr)
            ? ((0x0300U == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_funct12))
                ? vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__mstatus
                : ((0x0304U == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_funct12))
                    ? vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__mie
                    : ((0x0305U == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_funct12))
                        ? vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__mtvec_out
                        : ((0x0340U == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_funct12))
                            ? vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__mscratch
                            : ((0x0341U == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_funct12))
                                ? vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__mepc_out
                                : ((0x0342U == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_funct12))
                                    ? vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__mcause
                                    : ((0x0344U == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_funct12))
                                        ? (QData)((IData)(
                                                          ((IData)(vlSelfRef.soc_top__DOT__timer_interrupt) 
                                                           << 7U)))
                                        : 0ULL)))))))
            : 0ULL);
}

void Vsoc_top___024root___nba_sequent__TOP__6(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__6\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__v_count 
        = vlSelfRef.__Vdly__soc_top__DOT__u_vga__DOT__u_timing__DOT__v_count;
    vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__h_count 
        = vlSelfRef.__Vdly__soc_top__DOT__u_vga__DOT__u_timing__DOT__h_count;
    vlSelfRef.soc_top__DOT__u_vga__DOT__in_window = 
        ((0x00c0U <= (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__h_count)) 
         & ((0x01c0U > (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__h_count)) 
            & ((0x0070U <= (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__v_count)) 
               & (0x0170U > (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__v_count)))));
}

void Vsoc_top___024root___nba_comb__TOP__1(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__1\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.soc_top__DOT__u_vga__DOT__video_active_d) {
        if (vlSelfRef.soc_top__DOT__u_vga__DOT__in_window_d) {
            vlSelfRef.vga_r = ((0x0000000eU & ((IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__vga_pixel_data) 
                                               >> 4U)) 
                               | (1U & ((IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__vga_pixel_data) 
                                        >> 5U)));
            vlSelfRef.vga_g = ((0x0000000eU & ((IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__vga_pixel_data) 
                                               >> 1U)) 
                               | (1U & ((IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__vga_pixel_data) 
                                        >> 2U)));
            vlSelfRef.vga_b = ((0x0000000cU & ((IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__vga_pixel_data) 
                                               << 2U)) 
                               | (3U & (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__vga_pixel_data)));
        } else {
            vlSelfRef.vga_r = 0U;
            vlSelfRef.vga_g = 0U;
            vlSelfRef.vga_b = 0U;
        }
    } else {
        vlSelfRef.vga_r = 0U;
        vlSelfRef.vga_g = 0U;
        vlSelfRef.vga_b = 0U;
    }
}

void Vsoc_top___024root___nba_sequent__TOP__7(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__7\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__61__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__61__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__60__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__60__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__59__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__59__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__58__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__58__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__57__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__57__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__56__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__56__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__55__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__55__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__54__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__54__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__53__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__53__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__52__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__52__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__51__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__51__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__50__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__50__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__49__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__49__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__48__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__48__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__47__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__47__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__46__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__46__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__45__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__45__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__44__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__44__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__43__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__43__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__42__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__42__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__41__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__41__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__40__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__40__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__39__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__39__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__38__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__38__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__37__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__37__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__36__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__36__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__35__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__35__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__34__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__34__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__33__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__33__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__32__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__32__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__31__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__31__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__30__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__30__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__29__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__29__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__28__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__28__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__27__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__27__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__26__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__26__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__25__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__25__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__24__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__24__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__23__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__23__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__22__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__22__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__21__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__21__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__20__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__20__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__19__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__19__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__18__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__18__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__17__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__17__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__16__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__16__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__15__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__15__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__14__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__14__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__13__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__13__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__12__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__12__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__11__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__11__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__10__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__10__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__9__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__9__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__8__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__8__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__7__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__7__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__6__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__6__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__5__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__5__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__4__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__4__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__3__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__3__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__2__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__2__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__1__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__1__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__0__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__0__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__59__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__59__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__58__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__58__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__57__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__57__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__56__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__56__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__55__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__55__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__54__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__54__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__53__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__53__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__52__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__52__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__51__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__51__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__50__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__50__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__49__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__49__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__48__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__48__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__47__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__47__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__46__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__46__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__45__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__45__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__44__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__44__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__43__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__43__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__42__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__42__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__41__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__41__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__40__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__40__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__39__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__39__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__38__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__38__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__37__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__37__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__36__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__36__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__35__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__35__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__34__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__34__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__33__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__33__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__32__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__32__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__31__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__31__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__30__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__30__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__29__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__29__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__28__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__28__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__27__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__27__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__26__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__26__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__25__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__25__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__24__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__24__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__23__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__23__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__22__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__22__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__21__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__21__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__20__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__20__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__19__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__19__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__18__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__18__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__17__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__17__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__16__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__16__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__15__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__15__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__14__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__14__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__13__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__13__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__12__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__12__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__11__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__11__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__10__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__10__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__9__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__9__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__8__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__8__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__7__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__7__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__6__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__6__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__5__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__5__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__4__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__4__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__3__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__3__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__2__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__2__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__1__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__1__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__0__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__0__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__55__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__55__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__54__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__54__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__53__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__53__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__52__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__52__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__51__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__51__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__50__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__50__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__49__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__49__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__48__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__48__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__47__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__47__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__46__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__46__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__45__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__45__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__44__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__44__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__43__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__43__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__42__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__42__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__41__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__41__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__40__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__40__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__39__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__39__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__38__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__38__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__37__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__37__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__36__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__36__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__35__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__35__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__34__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__34__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__33__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__33__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__32__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__32__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__31__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__31__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__30__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__30__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__29__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__29__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__28__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__28__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__27__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__27__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__26__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__26__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__25__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__25__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__24__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__24__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__23__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__23__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__22__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__22__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__21__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__21__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__20__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__20__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__19__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__19__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__18__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__18__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__17__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__17__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__16__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__16__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__15__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__15__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__14__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__14__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__13__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__13__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__12__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__12__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__11__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__11__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__10__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__10__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__9__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__9__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__8__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__8__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__7__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__7__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__6__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__6__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__5__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__5__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__4__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__4__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__3__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__3__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__2__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__2__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__1__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__1__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__0__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__0__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__47__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__47__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__46__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__46__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__45__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__45__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__44__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__44__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__43__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__43__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__42__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__42__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__41__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__41__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__40__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__40__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__39__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__39__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__38__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__38__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__37__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__37__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__36__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__36__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__35__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__35__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__34__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__34__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__33__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__33__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__32__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__32__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__31__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__31__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__30__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__30__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__29__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__29__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__28__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__28__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__27__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__27__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__26__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__26__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__25__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__25__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__24__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__24__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__23__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__23__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__22__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__22__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__21__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__21__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__20__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__20__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__19__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__19__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__18__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__18__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__17__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__17__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__16__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__16__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__15__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__15__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__14__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__14__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__13__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__13__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__12__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__12__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__11__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__11__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__10__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__10__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__9__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__9__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__8__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__8__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__7__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__7__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__6__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__6__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__5__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__5__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__4__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__4__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__3__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__3__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__2__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__2__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__1__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__1__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__0__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__0__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__31__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__31__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__30__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__30__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__29__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__29__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__28__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__28__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__27__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__27__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__26__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__26__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__25__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__25__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__24__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__24__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__23__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__23__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__22__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__22__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__21__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__21__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__20__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__20__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__19__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__19__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__18__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__18__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__17__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__17__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__16__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__16__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__15__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__15__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__14__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__14__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__13__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__13__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__12__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__12__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__11__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__11__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__10__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__10__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__9__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__9__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__8__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__8__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__7__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__7__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__6__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__6__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__5__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__5__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__4__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__4__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__3__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__3__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__2__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__2__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__1__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__1__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__0__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__0__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__63__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__63__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__62__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__62__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__61__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__61__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__60__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__60__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__59__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__59__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__58__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__58__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__57__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__57__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__56__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__56__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__55__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__55__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__54__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__54__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__53__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__53__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__52__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__52__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__51__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__51__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__50__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__50__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__49__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__49__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__48__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__48__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__47__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__47__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__46__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__46__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__45__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__45__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__44__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__44__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__43__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__43__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__42__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__42__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__41__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__41__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__40__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__40__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__39__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__39__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__38__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__38__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__37__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__37__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__36__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__36__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__35__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__35__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__34__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__34__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__33__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__33__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__32__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__32__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__31__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__31__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__30__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__30__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__29__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__29__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__28__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__28__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__27__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__27__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__26__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__26__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__25__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__25__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__24__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__24__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__23__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__23__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__22__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__22__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__21__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__21__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__20__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__20__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__19__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__19__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__18__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__18__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__17__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__17__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__16__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__16__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__15__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__15__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__14__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__14__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__13__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__13__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__12__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__12__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__11__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__11__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__10__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__10__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__9__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__9__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__8__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__8__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__7__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__7__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__6__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__6__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__5__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__5__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__4__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__4__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__3__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__3__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__2__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__2__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__63__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__63__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__62__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__62__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__61__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__61__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__60__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__60__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__59__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__59__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__58__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__58__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__57__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__57__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__56__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__56__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__55__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__55__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__54__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__54__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__53__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__53__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__52__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__52__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__51__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__51__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__50__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__50__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__49__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__49__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__48__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__48__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__47__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__47__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__46__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__46__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__45__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__45__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__44__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__44__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__43__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__43__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__42__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__42__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__41__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__41__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__40__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__40__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__39__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__39__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__38__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__38__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__37__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__37__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__36__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__36__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__35__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__35__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__34__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__34__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__33__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__33__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__32__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__32__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__31__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__31__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__30__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__30__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__29__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__29__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__28__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__28__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__27__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__27__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__26__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__26__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__25__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__25__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__24__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__24__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__23__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__23__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__22__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__22__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__21__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__21__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__20__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__20__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__19__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__19__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__18__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__18__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__17__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__17__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__16__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__16__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__15__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__15__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__14__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__14__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__13__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__13__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__12__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__12__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__11__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__11__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__10__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__10__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__9__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__9__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__8__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__8__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__7__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__7__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__6__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__6__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__5__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__5__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__4__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__4__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__63__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__63__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__62__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__62__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__61__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__61__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__60__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__60__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__59__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__59__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__58__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__58__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__57__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__57__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__56__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__56__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__55__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__55__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__54__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__54__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__53__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__53__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__52__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__52__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__51__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__51__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__50__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__50__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__49__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__49__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__48__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__48__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__47__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__47__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__46__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__46__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__45__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__45__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__44__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__44__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__43__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__43__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__42__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__42__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__41__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__41__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__40__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__40__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__39__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__39__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__38__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__38__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__37__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__37__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__36__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__36__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__35__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__35__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__34__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__34__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__33__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__33__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__32__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__32__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__31__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__31__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__30__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__30__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__29__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__29__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__28__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__28__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__27__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__27__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__26__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__26__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__25__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__25__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__24__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__24__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__23__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__23__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__22__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__22__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__21__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__21__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__20__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__20__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__19__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__19__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__18__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__18__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__17__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__17__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__16__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__16__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__15__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__15__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__14__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__14__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__13__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__13__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__12__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__12__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__11__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__11__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__10__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__10__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__9__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__9__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__8__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__8__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__63__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__63__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__62__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__62__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__61__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__61__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__60__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__60__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__59__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__59__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__58__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__58__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__57__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__57__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__56__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__56__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__55__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__55__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__54__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__54__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__53__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__53__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__52__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__52__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__51__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__51__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__50__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__50__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__49__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__49__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__48__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__48__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__47__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__47__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__46__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__46__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__45__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__45__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__44__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__44__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__43__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__43__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__42__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__42__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__41__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__41__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__40__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__40__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__39__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__39__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__38__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__38__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__37__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__37__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__36__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__36__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__35__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__35__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__34__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__34__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__33__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__33__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__32__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__32__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__31__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__31__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__30__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__30__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__29__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__29__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__28__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__28__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__27__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__27__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__26__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__26__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__25__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__25__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__24__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__24__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__23__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__23__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__22__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__22__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__21__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__21__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__20__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__20__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__19__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__19__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__18__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__18__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__17__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__17__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__16__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__16__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__63__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__63__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__62__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__62__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__61__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__61__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__60__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__60__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__59__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__59__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__58__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__58__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__57__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__57__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__56__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__56__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__55__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__55__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__54__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__54__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__53__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__53__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__52__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__52__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__51__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__51__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__50__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__50__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__49__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__49__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__48__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__48__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__47__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__47__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__46__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__46__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__45__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__45__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__44__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__44__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__43__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__43__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__42__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__42__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__41__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__41__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__40__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__40__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__39__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__39__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__38__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__38__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__37__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__37__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__36__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__36__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__35__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__35__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__34__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__34__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__33__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__33__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__32__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__32__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s2__BRA__62__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s2__BRA__62__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s2__BRA__61__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s2__BRA__61__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s3__BRA__62__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s3__BRA__62__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s3__BRA__61__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s3__BRA__61__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s3__BRA__60__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s3__BRA__60__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s3__BRA__59__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s3__BRA__59__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s3__BRA__58__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s3__BRA__58__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s3__BRA__57__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s3__BRA__57__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__62__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__62__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__61__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__61__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__60__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__60__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__59__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__59__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__58__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__58__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__57__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__57__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__56__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__56__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__55__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__55__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__54__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__54__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__53__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__53__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__52__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__52__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__51__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__51__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__50__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__50__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__49__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__49__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__62__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__62__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__61__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__61__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__60__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__60__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__59__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__59__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__58__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__58__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__57__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__57__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__56__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__56__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__55__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__55__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__54__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__54__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__53__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__53__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__52__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__52__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__51__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__51__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__50__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__50__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__49__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__49__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__48__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__48__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__47__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__47__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__46__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__46__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__45__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__45__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__44__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__44__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__43__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__43__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__42__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__42__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__41__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__41__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__40__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__40__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__39__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__39__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__38__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__38__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__37__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__37__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__36__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__36__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__35__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__35__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__34__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__34__KET__ = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__33__KET__;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__33__KET__ = 0;
    CData/*0:0*/ __VdfgRegularize_he50b618e_0_1;
    __VdfgRegularize_he50b618e_0_1 = 0;
    CData/*0:0*/ __VdfgRegularize_he50b618e_0_2;
    __VdfgRegularize_he50b618e_0_2 = 0;
    CData/*0:0*/ __VdfgRegularize_he50b618e_0_3;
    __VdfgRegularize_he50b618e_0_3 = 0;
    CData/*0:0*/ __VdfgRegularize_he50b618e_0_4;
    __VdfgRegularize_he50b618e_0_4 = 0;
    CData/*0:0*/ __VdfgRegularize_he50b618e_0_5;
    __VdfgRegularize_he50b618e_0_5 = 0;
    CData/*0:0*/ __VdfgRegularize_he50b618e_0_6;
    __VdfgRegularize_he50b618e_0_6 = 0;
    CData/*0:0*/ __VdfgRegularize_he50b618e_0_7;
    __VdfgRegularize_he50b618e_0_7 = 0;
    CData/*0:0*/ __VdfgRegularize_he50b618e_0_8;
    __VdfgRegularize_he50b618e_0_8 = 0;
    CData/*0:0*/ __VdfgRegularize_he50b618e_0_9;
    __VdfgRegularize_he50b618e_0_9 = 0;
    CData/*0:0*/ __VdfgRegularize_he50b618e_0_10;
    __VdfgRegularize_he50b618e_0_10 = 0;
    CData/*0:0*/ __VdfgRegularize_he50b618e_0_11;
    __VdfgRegularize_he50b618e_0_11 = 0;
    CData/*0:0*/ __VdfgRegularize_he50b618e_0_12;
    __VdfgRegularize_he50b618e_0_12 = 0;
    CData/*0:0*/ __VdfgRegularize_he50b618e_0_13;
    __VdfgRegularize_he50b618e_0_13 = 0;
    CData/*0:0*/ __VdfgRegularize_he50b618e_0_14;
    __VdfgRegularize_he50b618e_0_14 = 0;
    CData/*0:0*/ __VdfgRegularize_he50b618e_0_15;
    __VdfgRegularize_he50b618e_0_15 = 0;
    CData/*0:0*/ __VdfgRegularize_he50b618e_0_16;
    __VdfgRegularize_he50b618e_0_16 = 0;
    CData/*0:0*/ __VdfgRegularize_he50b618e_0_17;
    __VdfgRegularize_he50b618e_0_17 = 0;
    CData/*0:0*/ __VdfgRegularize_he50b618e_0_18;
    __VdfgRegularize_he50b618e_0_18 = 0;
    CData/*0:0*/ __VdfgRegularize_he50b618e_0_19;
    __VdfgRegularize_he50b618e_0_19 = 0;
    CData/*0:0*/ __VdfgRegularize_he50b618e_0_20;
    __VdfgRegularize_he50b618e_0_20 = 0;
    CData/*0:0*/ __VdfgRegularize_he50b618e_0_21;
    __VdfgRegularize_he50b618e_0_21 = 0;
    CData/*0:0*/ __VdfgRegularize_he50b618e_0_22;
    __VdfgRegularize_he50b618e_0_22 = 0;
    CData/*0:0*/ __VdfgRegularize_he50b618e_0_23;
    __VdfgRegularize_he50b618e_0_23 = 0;
    CData/*0:0*/ __VdfgRegularize_he50b618e_0_24;
    __VdfgRegularize_he50b618e_0_24 = 0;
    CData/*0:0*/ __VdfgRegularize_he50b618e_0_25;
    __VdfgRegularize_he50b618e_0_25 = 0;
    CData/*0:0*/ __VdfgRegularize_he50b618e_0_26;
    __VdfgRegularize_he50b618e_0_26 = 0;
    CData/*0:0*/ __VdfgRegularize_he50b618e_0_27;
    __VdfgRegularize_he50b618e_0_27 = 0;
    CData/*0:0*/ __VdfgRegularize_he50b618e_0_28;
    __VdfgRegularize_he50b618e_0_28 = 0;
    CData/*0:0*/ __VdfgRegularize_he50b618e_0_29;
    __VdfgRegularize_he50b618e_0_29 = 0;
    CData/*0:0*/ __VdfgRegularize_he50b618e_0_30;
    __VdfgRegularize_he50b618e_0_30 = 0;
    CData/*0:0*/ __VdfgRegularize_he50b618e_0_31;
    __VdfgRegularize_he50b618e_0_31 = 0;
    CData/*0:0*/ __VdfgRegularize_he50b618e_0_32;
    __VdfgRegularize_he50b618e_0_32 = 0;
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    vlSelfRef.soc_top__DOT__u_core__DOT__mem_MemWrite 
        = ((1U & (~ ((IData)(vlSelfRef.rst) | (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__id_ex_stall)))) 
           && (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_MemWrite));
    if (((IData)(vlSelfRef.rst) | (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__id_ex_stall))) {
        vlSelfRef.soc_top__DOT__u_core__DOT__mem_rs2_data = 0ULL;
        vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result = 0ULL;
    } else {
        vlSelfRef.soc_top__DOT__u_core__DOT__mem_rs2_data 
            = vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__fwd_rs2;
        vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result 
            = vlSelfRef.soc_top__DOT__u_core__DOT__ex_alu_result;
    }
    if (((IData)(vlSelfRef.rst) | (IData)(vlSelfRef.soc_top__DOT__u_core__DOT____Vcellinp__u_id_ex__flush))) {
        vlSelfRef.soc_top__DOT__u_core__DOT__ex_MemWrite = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__id_ex_stall)))) {
        vlSelfRef.soc_top__DOT__u_core__DOT__ex_MemWrite 
            = vlSelfRef.soc_top__DOT__u_core__DOT__id_MemWrite;
    }
    vlSelfRef.dbg_vga_data = vlSelfRef.soc_top__DOT__u_core__DOT__mem_rs2_data;
    vlSelfRef.dbg_vga_addr = (0x00003fffU & ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result) 
                                             - (IData)(0x2000U)));
    vlSelfRef.__VdfgRegularize_he50b618e_0_38 = ((0x000000000000f000ULL 
                                                  <= vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result) 
                                                 & (0x000000000000f100ULL 
                                                    > vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result));
    vlSelfRef.__VdfgRegularize_he50b618e_0_36 = ((0x000000000000d000ULL 
                                                  <= vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result) 
                                                 & (0x000000000000d100ULL 
                                                    > vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result));
    vlSelfRef.__VdfgRegularize_he50b618e_0_37 = ((0x000000000000e000ULL 
                                                  <= vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result) 
                                                 & (0x000000000000e010ULL 
                                                    > vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result));
    vlSelfRef.__VdfgRegularize_he50b618e_0_35 = ((0x0000000000002000ULL 
                                                  <= vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result) 
                                                 & (0x0000000000006000ULL 
                                                    > vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result));
    vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__fwd_rs1 
        = ((1U == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ForwardA))
            ? vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result
            : ((2U == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ForwardA))
                ? vlSelfRef.soc_top__DOT__u_core__DOT__wb_write_data
                : vlSelfRef.soc_top__DOT__u_core__DOT__ex_rs1_data));
    vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__fwd_rs2 
        = ((1U == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ForwardB))
            ? vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result
            : ((2U == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ForwardB))
                ? vlSelfRef.soc_top__DOT__u_core__DOT__wb_write_data
                : vlSelfRef.soc_top__DOT__u_core__DOT__ex_rs2_data));
    vlSelfRef.soc_top__DOT__u_core__DOT__id_MemWrite = 0U;
    if (((((((((0x33U == (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction)) 
               | (0x3bU == (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) 
              | (0x13U == (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) 
             | (0x1bU == (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) 
            | (3U == (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) 
           | (0x23U == (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) 
          | (0x63U == (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) 
         | (0x6fU == (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction)))) {
        if ((0x33U != (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) {
            if ((0x3bU != (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) {
                if ((0x13U != (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) {
                    if ((0x1bU != (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) {
                        if ((3U != (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) {
                            if ((0x23U == (0x0000007fU 
                                           & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) {
                                vlSelfRef.soc_top__DOT__u_core__DOT__id_MemWrite = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.soc_top__DOT__u_core__DOT__id_ex_stall 
        = ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__is_m_ext) 
           & (3U != (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__state)));
    vlSelfRef.soc_top__DOT__clint_write_req = ((0x0000000000002000ULL 
                                                <= vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result) 
                                               & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_35)) 
                                                  & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_36)) 
                                                     & ((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_37) 
                                                        & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_MemWrite)))));
    vlSelfRef.soc_top__DOT__vga_write_req = ((0x0000000000002000ULL 
                                              <= vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result) 
                                             & ((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_35) 
                                                & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_MemWrite)));
    vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
        = ((1U == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_ALUSrcA))
            ? vlSelfRef.soc_top__DOT__u_core__DOT__ex_pc
            : ((2U == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_ALUSrcA))
                ? 0ULL : vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__fwd_rs1));
    vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
        = ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_ALUSrc)
            ? vlSelfRef.soc_top__DOT__u_core__DOT__ex_immediate
            : vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__fwd_rs2);
    vlSelfRef.soc_top__DOT__u_core__DOT__pc_stall = 
        ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__id_ex_flush_ext) 
         | (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__id_ex_stall));
    vlSelfRef.dbg_vga_we = vlSelfRef.soc_top__DOT__vga_write_req;
    VL_EXTENDS_WQ(128,64, __Vtemp_1, vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a);
    VL_EXTENDS_WQ(128,64, __Vtemp_2, vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b);
    VL_MULS_WWW(128, vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__mul_signed, __Vtemp_1, __Vtemp_2);
    vlSelfRef.__VdfgRegularize_he50b618e_0_33 = (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                                 < vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b);
    if ((1U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b))) {
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__60__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000003bU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__61__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000003cU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__58__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000039U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__59__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000003aU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__56__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000037U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__57__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000038U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__54__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000035U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__55__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000036U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__3__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 4U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__2__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 3U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__52__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000033U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__53__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000034U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__50__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000031U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__51__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000032U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__48__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000002fU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__49__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000030U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__46__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000002dU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__47__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000002eU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__5__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 6U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__4__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 5U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__44__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000002bU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__45__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000002cU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__42__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000029U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__43__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000002aU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__7__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 8U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__6__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 7U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__40__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000027U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__41__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000028U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__38__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000025U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__39__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000026U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__36__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000023U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__37__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000024U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__34__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000021U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__35__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000022U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__32__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000001fU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__33__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000020U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__30__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000001dU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__31__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000001eU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__9__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000000aU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__8__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 9U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__28__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000001bU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__29__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000001cU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__11__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000000cU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__10__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000000bU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__26__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000019U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__27__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000001aU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__24__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000017U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__25__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000018U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__13__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000000eU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__12__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000000dU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__22__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000015U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__23__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000016U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__20__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000013U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__21__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000014U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__15__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000010U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__14__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000000fU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__18__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000011U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__19__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000012U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__16__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000000fU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__17__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000010U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__14__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000000dU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__15__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000000eU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__12__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000000bU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__13__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000000cU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__10__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 9U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__11__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000000aU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__8__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 7U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__9__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 8U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__6__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 5U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__7__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 6U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__4__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 3U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__5__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 4U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__2__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 1U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__3__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 2U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__1__KET__ 
            = (1U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__17__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000012U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__16__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000011U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__19__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000014U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__18__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000013U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__21__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000016U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__20__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000015U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__23__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000018U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__22__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000017U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__25__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000001aU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__24__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000019U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__27__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000001cU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__26__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000001bU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__29__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000001eU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__28__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000001dU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__31__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000020U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__30__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000001fU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__33__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000022U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__35__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000024U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__37__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000026U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__39__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000028U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__41__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000002aU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__43__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000002cU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__45__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000002eU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__47__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000030U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__49__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000032U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__51__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000034U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__53__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000036U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__55__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000038U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__57__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000003aU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__59__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000003cU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__61__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000003eU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__32__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000021U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__34__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000023U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__36__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000025U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__38__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000027U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__40__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000029U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__42__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000002bU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__44__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000002dU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__46__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000002fU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__48__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000031U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__50__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000033U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__52__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000035U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__54__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000037U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__56__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000039U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__58__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000003bU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__60__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000003dU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__62__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000003fU)));
    } else {
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__60__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000003cU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__61__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000003dU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__58__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000003aU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__59__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000003bU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__56__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000038U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__57__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000039U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__54__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000036U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__55__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000037U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__3__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 3U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__2__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 2U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__52__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000034U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__53__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000035U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__50__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000032U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__51__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000033U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__48__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000030U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__49__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000031U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__46__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000002eU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__47__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000002fU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__5__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 5U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__4__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 4U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__44__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000002cU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__45__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000002dU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__42__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000002aU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__43__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000002bU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__7__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 7U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__6__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 6U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__40__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000028U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__41__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000029U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__38__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000026U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__39__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000027U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__36__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000024U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__37__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000025U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__34__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000022U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__35__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000023U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__32__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000020U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__33__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000021U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__30__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000001eU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__31__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000001fU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__9__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 9U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__8__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 8U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__28__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000001cU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__29__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000001dU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__11__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000000bU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__10__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000000aU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__26__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000001aU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__27__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000001bU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__24__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000018U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__25__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000019U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__13__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000000dU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__12__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000000cU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__22__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000016U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__23__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000017U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__20__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000014U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__21__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000015U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__15__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000000fU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__14__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000000eU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__18__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000012U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__19__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000013U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__16__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000010U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__17__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000011U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__14__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000000eU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__15__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000000fU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__12__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000000cU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__13__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000000dU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__10__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000000aU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__11__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000000bU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__8__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 8U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__9__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 9U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__6__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 6U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__7__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 7U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__4__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 4U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__5__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 5U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__2__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 2U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__3__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 3U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__1__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 1U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__17__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000011U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__16__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000010U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__19__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000013U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__18__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000012U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__21__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000015U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__20__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000014U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__23__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000017U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__22__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000016U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__25__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000019U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__24__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000018U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__27__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000001bU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__26__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000001aU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__29__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000001dU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__28__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000001cU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__31__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000001fU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__30__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000001eU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__33__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000021U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__35__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000023U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__37__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000025U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__39__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000027U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__41__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000029U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__43__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000002bU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__45__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000002dU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__47__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000002fU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__49__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000031U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__51__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000033U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__53__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000035U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__55__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000037U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__57__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000039U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__59__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000003bU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__61__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000003dU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__32__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000020U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__34__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000022U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__36__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000024U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__38__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000026U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__40__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000028U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__42__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000002aU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__44__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000002cU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__46__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000002eU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__48__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000030U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__50__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000032U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__52__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000034U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__54__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000036U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__56__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x00000038U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__58__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000003aU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__60__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000003cU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__62__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000003eU)));
    }
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__63__KET__ 
        = (IData)(((~ vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b) 
                   & (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                      >> 0x0000003fU)));
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__0__KET__ 
        = (1U & ((~ (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b)) 
                 & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a)));
    vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
        = (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
           ^ (- (QData)((IData)((8U == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_ctrl))))));
    if ((1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                       >> 1U)))) {
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__58__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__56__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__59__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__57__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__56__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__54__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__57__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__55__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__54__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__52__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__55__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__53__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__52__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__50__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__53__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__51__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__50__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__48__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__51__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__49__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__48__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__46__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__49__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__47__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__46__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__44__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__47__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__45__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__44__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__42__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__45__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__43__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__5__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__7__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__4__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__6__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__42__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__40__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__43__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__41__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__40__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__38__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__41__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__39__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__38__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__36__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__39__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__37__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__36__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__34__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__37__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__35__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__34__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__32__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__35__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__33__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__32__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__30__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__33__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__31__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__7__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__9__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__6__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__8__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__30__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__28__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__31__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__29__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__9__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__11__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__8__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__10__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__28__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__26__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__29__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__27__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__26__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__24__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__27__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__25__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__11__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__13__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__10__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__12__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__24__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__22__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__25__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__23__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__22__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__20__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__23__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__21__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__13__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__15__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__12__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__14__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__20__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__18__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__21__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__19__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__18__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__16__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__19__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__17__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__16__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__14__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__17__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__15__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__14__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__12__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__15__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__13__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__12__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__10__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__13__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__11__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__10__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__8__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__11__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__9__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__8__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__6__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__9__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__7__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__6__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__4__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__7__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__5__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__4__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__2__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__5__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__3__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__2__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__0__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__3__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__1__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__15__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__17__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__14__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__16__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__17__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__19__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__16__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__18__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__19__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__21__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__18__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__20__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__21__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__23__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__20__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__22__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__23__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__25__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__22__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__24__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__25__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__27__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__24__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__26__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__27__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__29__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__26__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__28__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__29__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__31__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__28__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__30__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__31__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__33__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__33__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__35__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__35__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__37__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__37__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__39__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__39__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__41__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__41__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__43__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__43__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__45__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__45__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__47__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__47__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__49__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__49__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__51__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__51__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__53__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__53__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__55__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__55__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__57__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__57__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__59__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__61__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__63__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s2__BRA__61__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000003fU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__59__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__61__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__30__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__32__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__32__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__34__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__34__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__36__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__36__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__38__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__38__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__40__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__40__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__42__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__42__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__44__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__44__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__46__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__46__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__48__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__48__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__50__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__50__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__52__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__52__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__54__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__54__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__56__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__56__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__58__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__58__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__60__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s2__BRA__62__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000003fU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__60__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__62__KET__;
    } else {
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__58__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__58__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__59__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__59__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__56__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__56__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__57__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__57__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__54__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__54__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__55__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__55__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__52__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__52__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__53__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__53__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__50__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__50__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__51__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__51__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__48__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__48__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__49__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__49__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__46__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__46__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__47__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__47__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__44__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__44__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__45__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__45__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__5__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__5__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__4__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__4__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__42__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__42__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__43__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__43__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__40__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__40__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__41__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__41__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__38__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__38__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__39__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__39__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__36__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__36__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__37__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__37__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__34__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__34__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__35__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__35__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__32__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__32__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__33__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__33__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__7__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__7__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__6__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__6__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__30__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__30__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__31__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__31__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__9__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__9__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__8__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__8__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__28__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__28__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__29__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__29__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__26__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__26__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__27__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__27__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__11__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__11__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__10__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__10__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__24__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__24__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__25__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__25__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__22__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__22__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__23__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__23__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__13__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__13__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__12__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__12__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__20__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__20__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__21__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__21__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__18__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__18__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__19__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__19__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__16__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__16__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__17__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__17__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__14__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__14__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__15__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__15__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__12__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__12__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__13__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__13__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__10__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__10__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__11__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__11__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__8__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__8__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__9__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__9__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__6__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__6__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__7__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__7__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__4__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__4__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__5__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__5__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__2__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__2__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__3__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__3__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__15__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__15__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__14__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__14__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__17__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__17__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__16__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__16__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__19__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__19__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__18__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__18__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__21__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__21__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__20__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__20__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__23__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__23__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__22__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__22__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__25__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__25__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__24__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__24__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__27__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__27__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__26__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__26__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__29__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__29__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__28__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__28__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__31__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__31__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__33__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__33__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__35__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__35__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__37__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__37__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__39__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__39__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__41__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__41__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__43__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__43__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__45__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__45__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__47__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__47__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__49__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__49__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__51__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__51__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__53__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__53__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__55__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__55__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__57__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__57__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__61__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__61__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s2__BRA__61__KET__ 
            = (1U & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__61__KET__));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__59__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__59__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__30__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__30__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__32__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__32__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__34__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__34__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__36__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__36__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__38__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__38__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__40__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__40__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__42__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__42__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__44__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__44__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__46__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__46__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__48__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__48__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__50__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__50__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__52__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__52__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__54__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__54__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__56__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__56__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__58__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__58__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s2__BRA__62__KET__ 
            = (1U & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__62__KET__));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__60__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__60__KET__;
    }
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__63__KET__ 
        = ((~ (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                       >> 1U))) & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__63__KET__));
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__0__KET__ 
        = ((~ (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                       >> 1U))) & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__0__KET__));
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__1__KET__ 
        = ((~ (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                       >> 1U))) & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__1__KET__));
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__62__KET__ 
        = ((~ (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                       >> 1U))) & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__62__KET__));
    if ((1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                       >> 2U)))) {
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__54__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__50__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__55__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__51__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__52__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__48__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__53__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__49__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__50__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__46__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__51__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__47__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__48__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__44__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__49__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__45__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__46__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__42__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__47__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__43__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__44__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__40__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__45__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__41__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__42__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__38__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__43__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__39__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__40__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__36__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__41__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__37__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__38__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__34__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__39__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__35__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__36__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__32__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__37__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__33__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__34__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__30__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__35__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__31__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__32__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__28__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__33__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__29__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__30__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__26__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__31__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__27__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__28__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__24__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__29__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__25__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__26__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__22__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__27__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__23__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__9__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__13__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__8__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__12__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__24__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__20__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__25__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__21__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__22__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__18__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__23__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__19__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__20__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__16__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__21__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__17__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__18__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__14__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__19__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__15__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__16__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__12__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__17__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__13__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__14__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__10__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__15__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__11__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__12__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__8__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__13__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__9__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__10__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__6__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__11__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__7__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__8__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__4__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__9__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__5__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__4__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__0__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__6__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__2__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__5__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__1__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__7__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__3__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__11__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__15__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__10__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__14__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__13__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__17__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__12__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__16__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__15__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__19__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__14__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__18__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__17__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__21__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__16__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__20__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__19__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__23__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__18__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__22__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__21__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__25__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__20__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__24__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__23__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__27__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__22__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__26__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__25__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__29__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__24__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__28__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__27__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__31__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__29__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__33__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__31__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__35__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__33__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__37__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__35__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__39__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__37__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__41__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__39__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__43__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__41__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__45__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__43__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__47__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__45__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__49__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__47__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__51__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__49__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__53__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__51__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__55__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__53__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__57__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__57__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__61__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s3__BRA__57__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s2__BRA__61__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s3__BRA__61__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000003fU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__59__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__63__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s3__BRA__59__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000003fU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__55__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__59__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__26__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__30__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__28__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__32__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__30__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__34__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__32__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__36__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__34__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__38__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__36__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__40__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__38__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__42__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__40__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__44__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__42__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__46__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__44__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__48__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__46__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__50__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__48__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__52__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__50__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__54__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__52__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__56__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__54__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__58__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__58__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__62__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s3__BRA__58__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s2__BRA__62__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s3__BRA__62__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000003fU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s3__BRA__60__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000003fU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__56__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__60__KET__;
    } else {
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__54__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__54__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__55__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__55__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__52__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__52__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__53__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__53__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__50__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__50__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__51__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__51__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__48__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__48__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__49__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__49__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__46__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__46__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__47__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__47__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__44__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__44__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__45__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__45__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__42__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__42__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__43__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__43__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__40__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__40__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__41__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__41__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__38__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__38__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__39__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__39__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__36__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__36__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__37__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__37__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__34__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__34__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__35__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__35__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__32__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__32__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__33__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__33__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__30__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__30__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__31__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__31__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__28__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__28__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__29__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__29__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__26__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__26__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__27__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__27__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__9__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__9__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__8__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__8__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__24__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__24__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__25__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__25__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__22__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__22__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__23__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__23__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__20__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__20__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__21__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__21__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__18__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__18__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__19__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__19__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__16__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__16__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__17__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__17__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__14__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__14__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__15__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__15__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__12__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__12__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__13__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__13__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__10__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__10__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__11__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__11__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__8__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__8__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__9__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__9__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__4__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__4__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__6__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__6__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__5__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__5__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__7__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__7__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__11__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__11__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__10__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__10__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__13__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__13__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__12__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__12__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__15__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__15__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__14__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__14__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__17__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__17__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__16__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__16__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__19__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__19__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__18__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__18__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__21__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__21__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__20__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__20__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__23__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__23__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__22__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__22__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__25__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__25__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__24__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__24__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__27__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__27__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__29__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__29__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__31__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__31__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__33__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__33__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__35__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__35__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__37__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__37__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__39__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__39__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__41__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__41__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__43__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__43__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__45__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__45__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__47__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__47__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__49__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__49__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__51__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__51__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__53__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__53__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__57__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__57__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s3__BRA__57__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__57__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s3__BRA__61__KET__ 
            = (1U & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s2__BRA__61__KET__));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__59__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__59__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s3__BRA__59__KET__ 
            = (1U & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__59__KET__));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__55__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__55__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__26__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__26__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__28__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__28__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__30__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__30__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__32__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__32__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__34__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__34__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__36__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__36__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__38__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__38__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__40__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__40__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__42__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__42__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__44__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__44__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__46__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__46__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__48__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__48__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__50__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__50__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__52__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__52__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__54__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__54__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__58__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__58__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s3__BRA__58__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__58__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s3__BRA__62__KET__ 
            = (1U & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s2__BRA__62__KET__));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s3__BRA__60__KET__ 
            = (1U & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__60__KET__));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__56__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__56__KET__;
    }
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__63__KET__ 
        = ((~ (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                       >> 2U))) & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__63__KET__));
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__0__KET__ 
        = ((~ (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                       >> 2U))) & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__0__KET__));
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__2__KET__ 
        = ((~ (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                       >> 2U))) & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__2__KET__));
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__1__KET__ 
        = ((~ (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                       >> 2U))) & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__1__KET__));
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__3__KET__ 
        = ((~ (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                       >> 2U))) & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__3__KET__));
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__61__KET__ 
        = ((~ (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                       >> 2U))) & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__61__KET__));
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__62__KET__ 
        = ((~ (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                       >> 2U))) & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__62__KET__));
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__60__KET__ 
        = ((~ (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                       >> 2U))) & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__60__KET__));
    if ((1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                       >> 3U)))) {
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__46__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__38__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__47__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__39__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__44__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__36__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__45__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__37__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__42__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__34__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__43__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__35__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__40__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__32__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__41__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__33__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__38__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__30__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__39__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__31__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__36__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__28__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__37__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__29__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__34__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__26__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__35__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__27__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__32__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__24__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__33__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__25__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__30__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__22__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__31__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__23__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__28__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__20__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__29__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__21__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__26__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__18__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__27__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__19__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__24__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__16__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__25__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__17__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__22__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__14__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__23__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__15__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__20__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__12__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__21__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__13__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__18__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__10__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__19__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__11__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__16__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__8__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__17__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__9__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__8__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__0__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__12__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__4__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__10__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__2__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__14__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__6__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__9__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__1__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__13__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__5__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__11__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__3__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__15__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__7__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__17__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__25__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__16__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__24__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__19__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__27__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__21__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__29__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__23__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__31__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__25__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__33__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__27__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__35__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__29__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__37__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__31__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__39__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__33__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__41__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__35__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__43__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__37__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__45__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__39__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__47__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__41__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__49__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__43__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__51__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__45__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__53__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__53__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__61__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__49__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__57__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__49__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s3__BRA__57__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__57__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000003fU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__53__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s3__BRA__61__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__61__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000003fU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__51__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__59__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__51__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s3__BRA__59__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__59__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000003fU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__55__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__63__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__55__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000003fU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__47__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__55__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__18__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__26__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__20__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__28__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__22__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__30__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__24__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__32__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__26__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__34__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__28__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__36__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__30__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__38__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__32__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__40__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__34__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__42__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__36__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__44__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__38__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__46__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__40__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__48__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__42__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__50__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__44__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__52__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__46__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__54__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__54__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__62__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__50__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__58__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__50__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s3__BRA__58__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__58__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000003fU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__54__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s3__BRA__62__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__62__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000003fU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__52__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__60__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__52__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s3__BRA__60__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__60__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000003fU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__56__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000003fU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__48__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__56__KET__;
    } else {
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__46__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__46__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__47__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__47__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__44__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__44__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__45__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__45__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__42__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__42__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__43__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__43__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__40__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__40__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__41__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__41__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__38__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__38__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__39__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__39__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__36__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__36__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__37__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__37__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__34__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__34__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__35__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__35__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__32__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__32__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__33__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__33__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__30__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__30__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__31__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__31__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__28__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__28__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__29__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__29__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__26__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__26__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__27__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__27__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__24__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__24__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__25__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__25__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__22__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__22__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__23__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__23__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__20__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__20__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__21__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__21__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__18__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__18__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__19__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__19__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__16__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__16__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__17__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__17__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__8__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__8__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__12__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__12__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__10__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__10__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__14__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__14__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__9__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__9__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__13__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__13__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__11__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__11__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__15__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__15__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__17__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__17__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__16__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__16__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__19__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__19__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__21__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__21__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__23__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__23__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__25__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__25__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__27__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__27__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__29__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__29__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__31__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__31__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__33__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__33__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__35__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__35__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__37__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__37__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__39__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__39__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__41__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__41__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__43__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__43__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__45__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__45__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__53__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__53__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__49__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__49__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__49__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__49__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__57__KET__ 
            = (1U & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s3__BRA__57__KET__));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__53__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__53__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__61__KET__ 
            = (1U & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s3__BRA__61__KET__));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__51__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__51__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__51__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__51__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__59__KET__ 
            = (1U & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s3__BRA__59__KET__));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__55__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__55__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__55__KET__ 
            = (1U & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__55__KET__));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__47__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__47__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__18__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__18__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__20__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__20__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__22__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__22__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__24__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__24__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__26__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__26__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__28__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__28__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__30__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__30__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__32__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__32__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__34__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__34__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__36__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__36__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__38__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__38__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__40__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__40__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__42__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__42__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__44__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__44__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__46__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__46__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__54__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__54__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__50__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__50__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__50__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__50__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__58__KET__ 
            = (1U & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s3__BRA__58__KET__));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__54__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__54__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__62__KET__ 
            = (1U & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s3__BRA__62__KET__));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__52__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__52__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__52__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__52__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__60__KET__ 
            = (1U & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s3__BRA__60__KET__));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__56__KET__ 
            = (1U & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__56__KET__));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__48__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__48__KET__;
    }
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__63__KET__ 
        = ((~ (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                       >> 3U))) & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__63__KET__));
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__0__KET__ 
        = ((~ (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                       >> 3U))) & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__0__KET__));
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__4__KET__ 
        = ((~ (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                       >> 3U))) & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__4__KET__));
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__2__KET__ 
        = ((~ (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                       >> 3U))) & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__2__KET__));
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__6__KET__ 
        = ((~ (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                       >> 3U))) & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__6__KET__));
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__1__KET__ 
        = ((~ (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                       >> 3U))) & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__1__KET__));
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__5__KET__ 
        = ((~ (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                       >> 3U))) & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__5__KET__));
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__3__KET__ 
        = ((~ (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                       >> 3U))) & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__3__KET__));
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__7__KET__ 
        = ((~ (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                       >> 3U))) & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__7__KET__));
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__61__KET__ 
        = ((~ (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                       >> 3U))) & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__61__KET__));
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__57__KET__ 
        = ((~ (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                       >> 3U))) & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__57__KET__));
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__59__KET__ 
        = ((~ (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                       >> 3U))) & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__59__KET__));
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__62__KET__ 
        = ((~ (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                       >> 3U))) & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__62__KET__));
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__58__KET__ 
        = ((~ (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                       >> 3U))) & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__58__KET__));
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__60__KET__ 
        = ((~ (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                       >> 3U))) & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__60__KET__));
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__56__KET__ 
        = ((~ (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                       >> 3U))) & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__56__KET__));
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__63__KET__ 
        = ((~ (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                       >> 4U))) & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__63__KET__));
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__0__KET__ 
        = ((~ (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                       >> 4U))) & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__0__KET__));
    if ((1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                       >> 4U)))) {
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__16__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__0__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__24__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__8__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__20__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__4__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__28__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__12__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__18__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__2__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__26__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__10__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__22__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__6__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__30__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__14__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__17__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__1__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__25__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__9__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__21__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__5__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__29__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__13__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__19__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__3__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__27__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__11__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__23__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__7__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__31__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__15__KET__;
        __VdfgRegularize_he50b618e_0_31 = (1U & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__17__KET__));
        __VdfgRegularize_he50b618e_0_29 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__19__KET__;
        __VdfgRegularize_he50b618e_0_27 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__21__KET__;
        __VdfgRegularize_he50b618e_0_25 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__23__KET__;
        __VdfgRegularize_he50b618e_0_23 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__25__KET__;
        __VdfgRegularize_he50b618e_0_21 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__27__KET__;
        __VdfgRegularize_he50b618e_0_19 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__29__KET__;
        __VdfgRegularize_he50b618e_0_17 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__31__KET__;
        __VdfgRegularize_he50b618e_0_15 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__33__KET__;
        __VdfgRegularize_he50b618e_0_13 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__35__KET__;
        __VdfgRegularize_he50b618e_0_11 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__37__KET__;
        __VdfgRegularize_he50b618e_0_9 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__39__KET__;
        __VdfgRegularize_he50b618e_0_7 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__41__KET__;
        __VdfgRegularize_he50b618e_0_5 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__43__KET__;
        __VdfgRegularize_he50b618e_0_3 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__45__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__45__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__61__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__37__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__53__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__41__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__57__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__33__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__49__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__33__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__49__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__49__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000003fU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__41__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__57__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__57__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000003fU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__37__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__53__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__53__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000003fU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__45__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__61__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__61__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000003fU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__43__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__59__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__35__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__51__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__35__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__51__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__51__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000003fU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__43__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__59__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__59__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000003fU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__39__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__55__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__39__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__55__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__55__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000003fU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__47__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__63__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__47__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000003fU)));
        __VdfgRegularize_he50b618e_0_1 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__47__KET__;
        __VdfgRegularize_he50b618e_0_30 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__18__KET__;
        __VdfgRegularize_he50b618e_0_28 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__20__KET__;
        __VdfgRegularize_he50b618e_0_26 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__22__KET__;
        __VdfgRegularize_he50b618e_0_24 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__24__KET__;
        __VdfgRegularize_he50b618e_0_22 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__26__KET__;
        __VdfgRegularize_he50b618e_0_20 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__28__KET__;
        __VdfgRegularize_he50b618e_0_18 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__30__KET__;
        __VdfgRegularize_he50b618e_0_16 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__32__KET__;
        __VdfgRegularize_he50b618e_0_14 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__34__KET__;
        __VdfgRegularize_he50b618e_0_12 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__36__KET__;
        __VdfgRegularize_he50b618e_0_10 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__38__KET__;
        __VdfgRegularize_he50b618e_0_8 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__40__KET__;
        __VdfgRegularize_he50b618e_0_6 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__42__KET__;
        __VdfgRegularize_he50b618e_0_4 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__44__KET__;
        __VdfgRegularize_he50b618e_0_2 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__46__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__46__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__62__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__38__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__54__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__42__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__58__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__34__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__50__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__34__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__50__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__50__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000003fU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__42__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__58__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__58__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000003fU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__38__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__54__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__54__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000003fU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__46__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__62__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__62__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000003fU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__44__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__60__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__36__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__52__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__36__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__52__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__52__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000003fU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__44__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__60__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__60__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000003fU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__40__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__56__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__40__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__56__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__56__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000003fU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__48__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000003fU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__32__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__48__KET__;
    } else {
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__16__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__16__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__24__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__24__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__20__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__20__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__28__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__28__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__18__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__18__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__26__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__26__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__22__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__22__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__30__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__30__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__17__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__17__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__25__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__25__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__21__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__21__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__29__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__29__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__19__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__19__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__27__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__27__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__23__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__23__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__31__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__31__KET__;
        if ((1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                           >> 3U)))) {
            __VdfgRegularize_he50b618e_0_31 = (1U & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__9__KET__));
            __VdfgRegularize_he50b618e_0_29 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__11__KET__;
            __VdfgRegularize_he50b618e_0_27 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__13__KET__;
            __VdfgRegularize_he50b618e_0_25 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__15__KET__;
            __VdfgRegularize_he50b618e_0_23 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__17__KET__;
            __VdfgRegularize_he50b618e_0_21 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__19__KET__;
            __VdfgRegularize_he50b618e_0_19 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__21__KET__;
            __VdfgRegularize_he50b618e_0_17 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__23__KET__;
            __VdfgRegularize_he50b618e_0_30 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__10__KET__;
            __VdfgRegularize_he50b618e_0_28 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__12__KET__;
            __VdfgRegularize_he50b618e_0_26 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__14__KET__;
            __VdfgRegularize_he50b618e_0_24 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__16__KET__;
            __VdfgRegularize_he50b618e_0_22 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__18__KET__;
            __VdfgRegularize_he50b618e_0_20 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__20__KET__;
            __VdfgRegularize_he50b618e_0_18 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__22__KET__;
        } else {
            if ((1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                               >> 2U)))) {
                __VdfgRegularize_he50b618e_0_31 = (1U 
                                                   & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__5__KET__));
                __VdfgRegularize_he50b618e_0_29 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__7__KET__;
                __VdfgRegularize_he50b618e_0_27 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__9__KET__;
                __VdfgRegularize_he50b618e_0_25 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__11__KET__;
                __VdfgRegularize_he50b618e_0_30 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__6__KET__;
                __VdfgRegularize_he50b618e_0_28 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__8__KET__;
                __VdfgRegularize_he50b618e_0_26 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__10__KET__;
            } else {
                if ((1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                   >> 1U)))) {
                    __VdfgRegularize_he50b618e_0_31 
                        = (1U & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__3__KET__));
                    __VdfgRegularize_he50b618e_0_29 
                        = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__5__KET__;
                    __VdfgRegularize_he50b618e_0_30 
                        = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__4__KET__;
                } else {
                    __VdfgRegularize_he50b618e_0_31 
                        = (1U & ((1U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b))
                                  ? (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                             >> 2U))
                                  : (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                             >> 1U))));
                    __VdfgRegularize_he50b618e_0_29 
                        = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__3__KET__;
                    __VdfgRegularize_he50b618e_0_30 
                        = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__2__KET__;
                }
                __VdfgRegularize_he50b618e_0_27 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__5__KET__;
                __VdfgRegularize_he50b618e_0_25 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__7__KET__;
                __VdfgRegularize_he50b618e_0_28 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__4__KET__;
                __VdfgRegularize_he50b618e_0_26 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__6__KET__;
            }
            __VdfgRegularize_he50b618e_0_23 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__9__KET__;
            __VdfgRegularize_he50b618e_0_21 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__11__KET__;
            __VdfgRegularize_he50b618e_0_19 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__13__KET__;
            __VdfgRegularize_he50b618e_0_17 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__15__KET__;
            __VdfgRegularize_he50b618e_0_24 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__8__KET__;
            __VdfgRegularize_he50b618e_0_22 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__10__KET__;
            __VdfgRegularize_he50b618e_0_20 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__12__KET__;
            __VdfgRegularize_he50b618e_0_18 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__14__KET__;
        }
        __VdfgRegularize_he50b618e_0_15 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__17__KET__;
        __VdfgRegularize_he50b618e_0_13 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__19__KET__;
        __VdfgRegularize_he50b618e_0_11 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__21__KET__;
        __VdfgRegularize_he50b618e_0_9 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__23__KET__;
        __VdfgRegularize_he50b618e_0_7 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__25__KET__;
        __VdfgRegularize_he50b618e_0_5 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__27__KET__;
        __VdfgRegularize_he50b618e_0_3 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__29__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__45__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__45__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__37__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__37__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__41__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__41__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__33__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__33__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__33__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__33__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__49__KET__ 
            = (1U & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__49__KET__));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__41__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__41__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__57__KET__ 
            = (1U & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__57__KET__));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__37__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__37__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__53__KET__ 
            = (1U & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__53__KET__));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__45__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__45__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__61__KET__ 
            = (1U & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__61__KET__));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__43__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__43__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__35__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__35__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__35__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__35__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__51__KET__ 
            = (1U & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__51__KET__));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__43__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__43__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__59__KET__ 
            = (1U & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__59__KET__));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__39__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__39__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__39__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__39__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__55__KET__ 
            = (1U & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__55__KET__));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__47__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__47__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__47__KET__ 
            = (1U & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__47__KET__));
        __VdfgRegularize_he50b618e_0_1 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__31__KET__;
        __VdfgRegularize_he50b618e_0_16 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__16__KET__;
        __VdfgRegularize_he50b618e_0_14 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__18__KET__;
        __VdfgRegularize_he50b618e_0_12 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__20__KET__;
        __VdfgRegularize_he50b618e_0_10 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__22__KET__;
        __VdfgRegularize_he50b618e_0_8 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__24__KET__;
        __VdfgRegularize_he50b618e_0_6 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__26__KET__;
        __VdfgRegularize_he50b618e_0_4 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__28__KET__;
        __VdfgRegularize_he50b618e_0_2 = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__30__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__46__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__46__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__38__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__38__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__42__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__42__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__34__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__34__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__34__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__34__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__50__KET__ 
            = (1U & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__50__KET__));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__42__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__42__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__58__KET__ 
            = (1U & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__58__KET__));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__38__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__38__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__54__KET__ 
            = (1U & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__54__KET__));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__46__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__46__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__62__KET__ 
            = (1U & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__62__KET__));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__44__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__44__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__36__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__36__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__36__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__36__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__52__KET__ 
            = (1U & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__52__KET__));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__44__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__44__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__60__KET__ 
            = (1U & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__60__KET__));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__40__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__40__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__40__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__40__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__56__KET__ 
            = (1U & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4__BRA__56__KET__));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__48__KET__ 
            = (1U & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__48__KET__));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__32__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__32__KET__;
    }
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__8__KET__ 
        = ((~ (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                       >> 4U))) & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__8__KET__));
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__4__KET__ 
        = ((~ (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                       >> 4U))) & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__4__KET__));
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__12__KET__ 
        = ((~ (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                       >> 4U))) & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__12__KET__));
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__2__KET__ 
        = ((~ (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                       >> 4U))) & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__2__KET__));
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__10__KET__ 
        = ((~ (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                       >> 4U))) & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__10__KET__));
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__6__KET__ 
        = ((~ (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                       >> 4U))) & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__6__KET__));
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__14__KET__ 
        = ((~ (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                       >> 4U))) & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__14__KET__));
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__1__KET__ 
        = ((~ (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                       >> 4U))) & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__1__KET__));
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__9__KET__ 
        = ((~ (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                       >> 4U))) & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__9__KET__));
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__5__KET__ 
        = ((~ (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                       >> 4U))) & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__5__KET__));
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__13__KET__ 
        = ((~ (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                       >> 4U))) & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__13__KET__));
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__3__KET__ 
        = ((~ (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                       >> 4U))) & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__3__KET__));
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__11__KET__ 
        = ((~ (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                       >> 4U))) & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__11__KET__));
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__7__KET__ 
        = ((~ (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                       >> 4U))) & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__7__KET__));
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__15__KET__ 
        = ((~ (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                       >> 4U))) & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__15__KET__));
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__61__KET__ 
        = ((~ (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                       >> 4U))) & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__61__KET__));
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__53__KET__ 
        = ((~ (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                       >> 4U))) & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__53__KET__));
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__57__KET__ 
        = ((~ (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                       >> 4U))) & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__57__KET__));
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__49__KET__ 
        = ((~ (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                       >> 4U))) & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__49__KET__));
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__59__KET__ 
        = ((~ (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                       >> 4U))) & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__59__KET__));
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__51__KET__ 
        = ((~ (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                       >> 4U))) & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__51__KET__));
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__55__KET__ 
        = ((~ (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                       >> 4U))) & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__55__KET__));
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__62__KET__ 
        = ((~ (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                       >> 4U))) & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__62__KET__));
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__54__KET__ 
        = ((~ (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                       >> 4U))) & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__54__KET__));
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__58__KET__ 
        = ((~ (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                       >> 4U))) & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__58__KET__));
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__50__KET__ 
        = ((~ (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                       >> 4U))) & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__50__KET__));
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__60__KET__ 
        = ((~ (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                       >> 4U))) & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__60__KET__));
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__52__KET__ 
        = ((~ (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                       >> 4U))) & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__52__KET__));
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__56__KET__ 
        = ((~ (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                       >> 4U))) & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__56__KET__));
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__48__KET__ 
        = ((~ (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                       >> 4U))) & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__48__KET__));
    vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__sll_res 
        = (((QData)((IData)(((((((((2U & (((1U & (IData)(
                                                         (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                          >> 5U)))
                                            ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__31__KET__)
                                            : ((1U 
                                                & (IData)(
                                                          (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                           >> 4U)))
                                                ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__47__KET__)
                                                : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                               >> 3U)))
                                                    ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__55__KET__)
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                >> 2U)))
                                                     ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__59__KET__)
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                 >> 1U)))
                                                      ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__61__KET__)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b))
                                                       ? (IData)(
                                                                 (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                                                  >> 0x0000003eU))
                                                       : (IData)(
                                                                 (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                                                  >> 0x0000003fU)))))))) 
                                          << 1U)) | 
                                   (1U & ((1U & (IData)(
                                                        (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                         >> 5U)))
                                           ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__30__KET__)
                                           : ((1U & (IData)(
                                                            (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                             >> 4U)))
                                               ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__46__KET__)
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                              >> 3U)))
                                                   ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__54__KET__)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                               >> 2U)))
                                                    ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__58__KET__)
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                >> 1U)))
                                                     ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__60__KET__)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b))
                                                      ? (IData)(
                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                                                 >> 0x0000003dU))
                                                      : (IData)(
                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                                                 >> 0x0000003eU)))))))))) 
                                  << 6U) | ((((1U & (IData)(
                                                            (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                             >> 5U)))
                                               ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__29__KET__)
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                              >> 4U)))
                                                   ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__45__KET__)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                               >> 3U)))
                                                    ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__53__KET__)
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                >> 2U)))
                                                     ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__57__KET__)
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                 >> 1U)))
                                                      ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__59__KET__)
                                                      : (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__61__KET__)))))) 
                                             << 5U) 
                                            | (((1U 
                                                 & (IData)(
                                                           (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                            >> 5U)))
                                                 ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__28__KET__)
                                                 : 
                                                ((1U 
                                                  & (IData)(
                                                            (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                             >> 4U)))
                                                  ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__44__KET__)
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                              >> 3U)))
                                                   ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__52__KET__)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                               >> 2U)))
                                                    ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__56__KET__)
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                >> 1U)))
                                                     ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__58__KET__)
                                                     : (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__60__KET__)))))) 
                                               << 4U))) 
                                | (((((1U & (IData)(
                                                    (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                     >> 5U)))
                                       ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__27__KET__)
                                       : ((1U & (IData)(
                                                        (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                         >> 4U)))
                                           ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__43__KET__)
                                           : ((1U & (IData)(
                                                            (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                             >> 3U)))
                                               ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__51__KET__)
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                              >> 2U)))
                                                   ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__55__KET__)
                                                   : (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__59__KET__))))) 
                                     << 3U) | (((1U 
                                                 & (IData)(
                                                           (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                            >> 5U)))
                                                 ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__26__KET__)
                                                 : 
                                                ((1U 
                                                  & (IData)(
                                                            (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                             >> 4U)))
                                                  ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__42__KET__)
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                              >> 3U)))
                                                   ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__50__KET__)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                               >> 2U)))
                                                    ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__54__KET__)
                                                    : (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__58__KET__))))) 
                                               << 2U)) 
                                   | ((((1U & (IData)(
                                                      (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                       >> 5U)))
                                         ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__25__KET__)
                                         : ((1U & (IData)(
                                                          (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                           >> 4U)))
                                             ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__41__KET__)
                                             : ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                            >> 3U)))
                                                 ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__49__KET__)
                                                 : 
                                                ((1U 
                                                  & (IData)(
                                                            (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                             >> 2U)))
                                                  ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__53__KET__)
                                                  : (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__57__KET__))))) 
                                       << 1U) | ((1U 
                                                  & (IData)(
                                                            (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                             >> 5U)))
                                                  ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__24__KET__)
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                              >> 4U)))
                                                   ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__40__KET__)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                               >> 3U)))
                                                    ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__48__KET__)
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                >> 2U)))
                                                     ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__52__KET__)
                                                     : (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__56__KET__)))))))) 
                               << 0x00000018U) | ((
                                                   (((((1U 
                                                        & (IData)(
                                                                  (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                   >> 5U)))
                                                        ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__23__KET__)
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                    >> 4U)))
                                                         ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__39__KET__)
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                     >> 3U)))
                                                          ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__47__KET__)
                                                          : (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__55__KET__)))) 
                                                      << 3U) 
                                                     | (((1U 
                                                          & (IData)(
                                                                    (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                     >> 5U)))
                                                          ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__22__KET__)
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                      >> 4U)))
                                                           ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__38__KET__)
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                       >> 3U)))
                                                            ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__46__KET__)
                                                            : (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__54__KET__)))) 
                                                        << 2U)) 
                                                    | ((((1U 
                                                          & (IData)(
                                                                    (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                     >> 5U)))
                                                          ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__21__KET__)
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                      >> 4U)))
                                                           ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__37__KET__)
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                       >> 3U)))
                                                            ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__45__KET__)
                                                            : (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__53__KET__)))) 
                                                        << 1U) 
                                                       | ((1U 
                                                           & (IData)(
                                                                     (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                      >> 5U)))
                                                           ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__20__KET__)
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                       >> 4U)))
                                                            ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__36__KET__)
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                        >> 3U)))
                                                             ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__44__KET__)
                                                             : (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__52__KET__)))))) 
                                                   << 0x00000014U) 
                                                  | ((((((1U 
                                                          & (IData)(
                                                                    (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                     >> 5U)))
                                                          ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__19__KET__)
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                      >> 4U)))
                                                           ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__35__KET__)
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                       >> 3U)))
                                                            ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__43__KET__)
                                                            : (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__51__KET__)))) 
                                                        << 3U) 
                                                       | (((1U 
                                                            & (IData)(
                                                                      (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                       >> 5U)))
                                                            ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__18__KET__)
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                        >> 4U)))
                                                             ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__34__KET__)
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                         >> 3U)))
                                                              ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__42__KET__)
                                                              : (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__50__KET__)))) 
                                                          << 2U)) 
                                                      | ((((1U 
                                                            & (IData)(
                                                                      (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                       >> 5U)))
                                                            ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__17__KET__)
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                        >> 4U)))
                                                             ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__33__KET__)
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                         >> 3U)))
                                                              ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__41__KET__)
                                                              : (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__49__KET__)))) 
                                                          << 1U) 
                                                         | ((1U 
                                                             & (IData)(
                                                                       (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                        >> 5U)))
                                                             ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__16__KET__)
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                         >> 4U)))
                                                              ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__32__KET__)
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                          >> 3U)))
                                                               ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__40__KET__)
                                                               : (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__48__KET__)))))) 
                                                     << 0x00000010U))) 
                             | ((((((((1U & (IData)(
                                                    (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                     >> 5U)))
                                       ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__15__KET__)
                                       : ((1U & (IData)(
                                                        (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                         >> 4U)))
                                           ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__31__KET__)
                                           : (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__47__KET__))) 
                                     << 3U) | (((1U 
                                                 & (IData)(
                                                           (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                            >> 5U)))
                                                 ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__14__KET__)
                                                 : 
                                                ((1U 
                                                  & (IData)(
                                                            (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                             >> 4U)))
                                                  ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__30__KET__)
                                                  : (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__46__KET__))) 
                                               << 2U)) 
                                   | ((((1U & (IData)(
                                                      (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                       >> 5U)))
                                         ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__13__KET__)
                                         : ((1U & (IData)(
                                                          (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                           >> 4U)))
                                             ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__29__KET__)
                                             : (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__45__KET__))) 
                                       << 1U) | ((1U 
                                                  & (IData)(
                                                            (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                             >> 5U)))
                                                  ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__12__KET__)
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                              >> 4U)))
                                                   ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__28__KET__)
                                                   : (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__44__KET__))))) 
                                  << 0x0000000cU) | 
                                 ((((((1U & (IData)(
                                                    (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                     >> 5U)))
                                       ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__11__KET__)
                                       : ((1U & (IData)(
                                                        (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                         >> 4U)))
                                           ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__27__KET__)
                                           : (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__43__KET__))) 
                                     << 3U) | (((1U 
                                                 & (IData)(
                                                           (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                            >> 5U)))
                                                 ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__10__KET__)
                                                 : 
                                                ((1U 
                                                  & (IData)(
                                                            (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                             >> 4U)))
                                                  ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__26__KET__)
                                                  : (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__42__KET__))) 
                                               << 2U)) 
                                   | ((((1U & (IData)(
                                                      (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                       >> 5U)))
                                         ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__9__KET__)
                                         : ((1U & (IData)(
                                                          (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                           >> 4U)))
                                             ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__25__KET__)
                                             : (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__41__KET__))) 
                                       << 1U) | ((1U 
                                                  & (IData)(
                                                            (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                             >> 5U)))
                                                  ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__8__KET__)
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                              >> 4U)))
                                                   ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__24__KET__)
                                                   : (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__40__KET__))))) 
                                  << 8U)) | (((((((1U 
                                                   & (IData)(
                                                             (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                              >> 5U)))
                                                   ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__7__KET__)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                               >> 4U)))
                                                    ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__23__KET__)
                                                    : (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__39__KET__))) 
                                                 << 3U) 
                                                | (((1U 
                                                     & (IData)(
                                                               (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                >> 5U)))
                                                     ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__6__KET__)
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                 >> 4U)))
                                                      ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__22__KET__)
                                                      : (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__38__KET__))) 
                                                   << 2U)) 
                                               | ((((1U 
                                                     & (IData)(
                                                               (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                >> 5U)))
                                                     ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__5__KET__)
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                 >> 4U)))
                                                      ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__21__KET__)
                                                      : (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__37__KET__))) 
                                                   << 1U) 
                                                  | ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                 >> 5U)))
                                                      ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__4__KET__)
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                  >> 4U)))
                                                       ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__20__KET__)
                                                       : (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__36__KET__))))) 
                                              << 4U) 
                                             | (((((1U 
                                                    & (IData)(
                                                              (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                               >> 5U)))
                                                    ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__3__KET__)
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                >> 4U)))
                                                     ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__19__KET__)
                                                     : (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__35__KET__))) 
                                                  << 3U) 
                                                 | (((1U 
                                                      & (IData)(
                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                 >> 5U)))
                                                      ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__2__KET__)
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                  >> 4U)))
                                                       ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__18__KET__)
                                                       : (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__34__KET__))) 
                                                    << 2U)) 
                                                | ((((1U 
                                                      & (IData)(
                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                 >> 5U)))
                                                      ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__1__KET__)
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                  >> 4U)))
                                                       ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__17__KET__)
                                                       : (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__33__KET__))) 
                                                    << 1U) 
                                                   | ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                  >> 5U)))
                                                       ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__0__KET__)
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                   >> 4U)))
                                                        ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__16__KET__)
                                                        : (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__32__KET__)))))))))) 
            << 0x00000020U) | (QData)((IData)((((((
                                                   (((((~ (IData)(
                                                                  (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                   >> 5U))) 
                                                       & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__31__KET__)) 
                                                      << 3U) 
                                                     | (((~ (IData)(
                                                                    (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                     >> 5U))) 
                                                         & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__30__KET__)) 
                                                        << 2U)) 
                                                    | ((((~ (IData)(
                                                                    (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                     >> 5U))) 
                                                         & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__29__KET__)) 
                                                        << 1U) 
                                                       | ((~ (IData)(
                                                                     (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                      >> 5U))) 
                                                          & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__28__KET__)))) 
                                                   << 0x0000000cU) 
                                                  | ((((((~ (IData)(
                                                                    (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                     >> 5U))) 
                                                         & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__27__KET__)) 
                                                        << 3U) 
                                                       | (((~ (IData)(
                                                                      (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                       >> 5U))) 
                                                           & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__26__KET__)) 
                                                          << 2U)) 
                                                      | ((((~ (IData)(
                                                                      (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                       >> 5U))) 
                                                           & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__25__KET__)) 
                                                          << 1U) 
                                                         | ((~ (IData)(
                                                                       (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                        >> 5U))) 
                                                            & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__24__KET__)))) 
                                                     << 8U)) 
                                                 | (((((((~ (IData)(
                                                                    (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                     >> 5U))) 
                                                         & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__23__KET__)) 
                                                        << 3U) 
                                                       | (((~ (IData)(
                                                                      (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                       >> 5U))) 
                                                           & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__22__KET__)) 
                                                          << 2U)) 
                                                      | ((((~ (IData)(
                                                                      (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                       >> 5U))) 
                                                           & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__21__KET__)) 
                                                          << 1U) 
                                                         | ((~ (IData)(
                                                                       (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                        >> 5U))) 
                                                            & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__20__KET__)))) 
                                                     << 4U) 
                                                    | (((((~ (IData)(
                                                                     (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                      >> 5U))) 
                                                          & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__19__KET__)) 
                                                         << 3U) 
                                                        | (((~ (IData)(
                                                                       (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                        >> 5U))) 
                                                            & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__18__KET__)) 
                                                           << 2U)) 
                                                       | ((((~ (IData)(
                                                                       (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                        >> 5U))) 
                                                            & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__17__KET__)) 
                                                           << 1U) 
                                                          | ((~ (IData)(
                                                                        (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                         >> 5U))) 
                                                             & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__16__KET__)))))) 
                                                << 0x00000010U) 
                                               | ((((((((~ (IData)(
                                                                   (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                    >> 5U))) 
                                                        & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__15__KET__)) 
                                                       << 3U) 
                                                      | (((~ (IData)(
                                                                     (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                      >> 5U))) 
                                                          & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__14__KET__)) 
                                                         << 2U)) 
                                                     | ((((~ (IData)(
                                                                     (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                      >> 5U))) 
                                                          & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__13__KET__)) 
                                                         << 1U) 
                                                        | ((~ (IData)(
                                                                      (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                       >> 5U))) 
                                                           & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__12__KET__)))) 
                                                    << 0x0000000cU) 
                                                   | ((((((~ (IData)(
                                                                     (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                      >> 5U))) 
                                                          & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__11__KET__)) 
                                                         << 3U) 
                                                        | (((~ (IData)(
                                                                       (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                        >> 5U))) 
                                                            & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__10__KET__)) 
                                                           << 2U)) 
                                                       | ((((~ (IData)(
                                                                       (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                        >> 5U))) 
                                                            & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__9__KET__)) 
                                                           << 1U) 
                                                          | ((~ (IData)(
                                                                        (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                         >> 5U))) 
                                                             & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__8__KET__)))) 
                                                      << 8U)) 
                                                  | (((((((~ (IData)(
                                                                     (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                      >> 5U))) 
                                                          & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__7__KET__)) 
                                                         << 3U) 
                                                        | (((~ (IData)(
                                                                       (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                        >> 5U))) 
                                                            & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__6__KET__)) 
                                                           << 2U)) 
                                                       | ((((~ (IData)(
                                                                       (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                        >> 5U))) 
                                                            & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__5__KET__)) 
                                                           << 1U) 
                                                          | ((~ (IData)(
                                                                        (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                         >> 5U))) 
                                                             & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__4__KET__)))) 
                                                      << 4U) 
                                                     | (((((~ (IData)(
                                                                      (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                       >> 5U))) 
                                                           & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__3__KET__)) 
                                                          << 3U) 
                                                         | (((~ (IData)(
                                                                        (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                         >> 5U))) 
                                                             & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__2__KET__)) 
                                                            << 2U)) 
                                                        | ((((~ (IData)(
                                                                        (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                         >> 5U))) 
                                                             & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__1__KET__)) 
                                                            << 1U) 
                                                           | ((~ (IData)(
                                                                         (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                          >> 5U))) 
                                                              & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__0__KET__))))))))));
    __VdfgRegularize_he50b618e_0_32 = (1U & ((1U & (IData)(
                                                           (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                            >> 5U)))
                                              ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__32__KET__)
                                              : ((1U 
                                                  & (IData)(
                                                            (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                             >> 4U)))
                                                  ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4__BRA__16__KET__)
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                              >> 3U)))
                                                   ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3__BRA__8__KET__)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                               >> 2U)))
                                                    ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__4__KET__)
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                >> 1U)))
                                                     ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__2__KET__)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b))
                                                      ? (IData)(
                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                                                 >> 1U))
                                                      : (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a))))))));
    vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__srl_res 
        = (((QData)((IData)(((((((((((~ (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                 >> 5U))) 
                                     & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__63__KET__)) 
                                    << 3U) | (((~ (IData)(
                                                          (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                           >> 5U))) 
                                               & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__62__KET__)) 
                                              << 2U)) 
                                  | ((((~ (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                   >> 5U))) 
                                       & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__61__KET__)) 
                                      << 1U) | ((~ (IData)(
                                                           (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                            >> 5U))) 
                                                & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__60__KET__)))) 
                                 << 0x0000000cU) | 
                                ((((((~ (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                 >> 5U))) 
                                     & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__59__KET__)) 
                                    << 3U) | (((~ (IData)(
                                                          (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                           >> 5U))) 
                                               & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__58__KET__)) 
                                              << 2U)) 
                                  | ((((~ (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                   >> 5U))) 
                                       & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__57__KET__)) 
                                      << 1U) | ((~ (IData)(
                                                           (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                            >> 5U))) 
                                                & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__56__KET__)))) 
                                 << 8U)) | (((((((~ (IData)(
                                                            (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                             >> 5U))) 
                                                 & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__55__KET__)) 
                                                << 3U) 
                                               | (((~ (IData)(
                                                              (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                               >> 5U))) 
                                                   & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__54__KET__)) 
                                                  << 2U)) 
                                              | ((((~ (IData)(
                                                              (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                               >> 5U))) 
                                                   & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__53__KET__)) 
                                                  << 1U) 
                                                 | ((~ (IData)(
                                                               (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                >> 5U))) 
                                                    & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__52__KET__)))) 
                                             << 4U) 
                                            | (((((~ (IData)(
                                                             (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                              >> 5U))) 
                                                  & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__51__KET__)) 
                                                 << 3U) 
                                                | (((~ (IData)(
                                                               (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                >> 5U))) 
                                                    & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__50__KET__)) 
                                                   << 2U)) 
                                               | ((((~ (IData)(
                                                               (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                >> 5U))) 
                                                    & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__49__KET__)) 
                                                   << 1U) 
                                                  | ((~ (IData)(
                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                 >> 5U))) 
                                                     & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__48__KET__)))))) 
                              << 0x00000010U) | (((
                                                   (((((~ (IData)(
                                                                  (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                   >> 5U))) 
                                                       & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__47__KET__)) 
                                                      << 3U) 
                                                     | (((~ (IData)(
                                                                    (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                     >> 5U))) 
                                                         & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__46__KET__)) 
                                                        << 2U)) 
                                                    | ((((~ (IData)(
                                                                    (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                     >> 5U))) 
                                                         & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__45__KET__)) 
                                                        << 1U) 
                                                       | ((~ (IData)(
                                                                     (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                      >> 5U))) 
                                                          & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__44__KET__)))) 
                                                   << 0x0000000cU) 
                                                  | ((((((~ (IData)(
                                                                    (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                     >> 5U))) 
                                                         & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__43__KET__)) 
                                                        << 3U) 
                                                       | (((~ (IData)(
                                                                      (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                       >> 5U))) 
                                                           & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__42__KET__)) 
                                                          << 2U)) 
                                                      | ((((~ (IData)(
                                                                      (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                       >> 5U))) 
                                                           & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__41__KET__)) 
                                                          << 1U) 
                                                         | ((~ (IData)(
                                                                       (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                        >> 5U))) 
                                                            & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__40__KET__)))) 
                                                     << 8U)) 
                                                 | (((((((~ (IData)(
                                                                    (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                     >> 5U))) 
                                                         & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__39__KET__)) 
                                                        << 3U) 
                                                       | (((~ (IData)(
                                                                      (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                       >> 5U))) 
                                                           & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__38__KET__)) 
                                                          << 2U)) 
                                                      | ((((~ (IData)(
                                                                      (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                       >> 5U))) 
                                                           & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__37__KET__)) 
                                                          << 1U) 
                                                         | ((~ (IData)(
                                                                       (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                        >> 5U))) 
                                                            & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__36__KET__)))) 
                                                     << 4U) 
                                                    | (((((~ (IData)(
                                                                     (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                      >> 5U))) 
                                                          & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__35__KET__)) 
                                                         << 3U) 
                                                        | (((~ (IData)(
                                                                       (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                        >> 5U))) 
                                                            & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__34__KET__)) 
                                                           << 2U)) 
                                                       | ((((~ (IData)(
                                                                       (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                        >> 5U))) 
                                                            & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__33__KET__)) 
                                                           << 1U) 
                                                          | ((~ (IData)(
                                                                        (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                         >> 5U))) 
                                                             & (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__32__KET__))))))))) 
            << 0x00000020U) | (QData)((IData)((((((
                                                   (((((1U 
                                                        & (IData)(
                                                                  (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                   >> 5U)))
                                                        ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__63__KET__)
                                                        : (IData)(__VdfgRegularize_he50b618e_0_1)) 
                                                      << 3U) 
                                                     | (((1U 
                                                          & (IData)(
                                                                    (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                     >> 5U)))
                                                          ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__62__KET__)
                                                          : (IData)(__VdfgRegularize_he50b618e_0_2)) 
                                                        << 2U)) 
                                                    | ((((1U 
                                                          & (IData)(
                                                                    (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                     >> 5U)))
                                                          ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__61__KET__)
                                                          : (IData)(__VdfgRegularize_he50b618e_0_3)) 
                                                        << 1U) 
                                                       | ((1U 
                                                           & (IData)(
                                                                     (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                      >> 5U)))
                                                           ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__60__KET__)
                                                           : (IData)(__VdfgRegularize_he50b618e_0_4)))) 
                                                   << 0x0000000cU) 
                                                  | ((((((1U 
                                                          & (IData)(
                                                                    (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                     >> 5U)))
                                                          ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__59__KET__)
                                                          : (IData)(__VdfgRegularize_he50b618e_0_5)) 
                                                        << 3U) 
                                                       | (((1U 
                                                            & (IData)(
                                                                      (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                       >> 5U)))
                                                            ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__58__KET__)
                                                            : (IData)(__VdfgRegularize_he50b618e_0_6)) 
                                                          << 2U)) 
                                                      | ((((1U 
                                                            & (IData)(
                                                                      (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                       >> 5U)))
                                                            ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__57__KET__)
                                                            : (IData)(__VdfgRegularize_he50b618e_0_7)) 
                                                          << 1U) 
                                                         | ((1U 
                                                             & (IData)(
                                                                       (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                        >> 5U)))
                                                             ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__56__KET__)
                                                             : (IData)(__VdfgRegularize_he50b618e_0_8)))) 
                                                     << 8U)) 
                                                 | (((((((1U 
                                                          & (IData)(
                                                                    (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                     >> 5U)))
                                                          ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__55__KET__)
                                                          : (IData)(__VdfgRegularize_he50b618e_0_9)) 
                                                        << 3U) 
                                                       | (((1U 
                                                            & (IData)(
                                                                      (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                       >> 5U)))
                                                            ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__54__KET__)
                                                            : (IData)(__VdfgRegularize_he50b618e_0_10)) 
                                                          << 2U)) 
                                                      | ((((1U 
                                                            & (IData)(
                                                                      (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                       >> 5U)))
                                                            ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__53__KET__)
                                                            : (IData)(__VdfgRegularize_he50b618e_0_11)) 
                                                          << 1U) 
                                                         | ((1U 
                                                             & (IData)(
                                                                       (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                        >> 5U)))
                                                             ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__52__KET__)
                                                             : (IData)(__VdfgRegularize_he50b618e_0_12)))) 
                                                     << 4U) 
                                                    | (((((1U 
                                                           & (IData)(
                                                                     (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                      >> 5U)))
                                                           ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__51__KET__)
                                                           : (IData)(__VdfgRegularize_he50b618e_0_13)) 
                                                         << 3U) 
                                                        | (((1U 
                                                             & (IData)(
                                                                       (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                        >> 5U)))
                                                             ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__50__KET__)
                                                             : (IData)(__VdfgRegularize_he50b618e_0_14)) 
                                                           << 2U)) 
                                                       | ((((1U 
                                                             & (IData)(
                                                                       (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                        >> 5U)))
                                                             ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__49__KET__)
                                                             : (IData)(__VdfgRegularize_he50b618e_0_15)) 
                                                           << 1U) 
                                                          | ((1U 
                                                              & (IData)(
                                                                        (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                         >> 5U)))
                                                              ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__48__KET__)
                                                              : (IData)(__VdfgRegularize_he50b618e_0_16)))))) 
                                                << 0x00000010U) 
                                               | ((((((((1U 
                                                         & (IData)(
                                                                   (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                    >> 5U)))
                                                         ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__47__KET__)
                                                         : (IData)(__VdfgRegularize_he50b618e_0_17)) 
                                                       << 3U) 
                                                      | (((1U 
                                                           & (IData)(
                                                                     (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                      >> 5U)))
                                                           ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__46__KET__)
                                                           : (IData)(__VdfgRegularize_he50b618e_0_18)) 
                                                         << 2U)) 
                                                     | ((((1U 
                                                           & (IData)(
                                                                     (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                      >> 5U)))
                                                           ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__45__KET__)
                                                           : (IData)(__VdfgRegularize_he50b618e_0_19)) 
                                                         << 1U) 
                                                        | ((1U 
                                                            & (IData)(
                                                                      (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                       >> 5U)))
                                                            ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__44__KET__)
                                                            : (IData)(__VdfgRegularize_he50b618e_0_20)))) 
                                                    << 0x0000000cU) 
                                                   | ((((((1U 
                                                           & (IData)(
                                                                     (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                      >> 5U)))
                                                           ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__43__KET__)
                                                           : (IData)(__VdfgRegularize_he50b618e_0_21)) 
                                                         << 3U) 
                                                        | (((1U 
                                                             & (IData)(
                                                                       (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                        >> 5U)))
                                                             ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__42__KET__)
                                                             : (IData)(__VdfgRegularize_he50b618e_0_22)) 
                                                           << 2U)) 
                                                       | ((((1U 
                                                             & (IData)(
                                                                       (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                        >> 5U)))
                                                             ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__41__KET__)
                                                             : (IData)(__VdfgRegularize_he50b618e_0_23)) 
                                                           << 1U) 
                                                          | ((1U 
                                                              & (IData)(
                                                                        (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                         >> 5U)))
                                                              ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__40__KET__)
                                                              : (IData)(__VdfgRegularize_he50b618e_0_24)))) 
                                                      << 8U)) 
                                                  | (((((((1U 
                                                           & (IData)(
                                                                     (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                      >> 5U)))
                                                           ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__39__KET__)
                                                           : (IData)(__VdfgRegularize_he50b618e_0_25)) 
                                                         << 3U) 
                                                        | (((1U 
                                                             & (IData)(
                                                                       (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                        >> 5U)))
                                                             ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__38__KET__)
                                                             : (IData)(__VdfgRegularize_he50b618e_0_26)) 
                                                           << 2U)) 
                                                       | ((((1U 
                                                             & (IData)(
                                                                       (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                        >> 5U)))
                                                             ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__37__KET__)
                                                             : (IData)(__VdfgRegularize_he50b618e_0_27)) 
                                                           << 1U) 
                                                          | ((1U 
                                                              & (IData)(
                                                                        (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                         >> 5U)))
                                                              ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__36__KET__)
                                                              : (IData)(__VdfgRegularize_he50b618e_0_28)))) 
                                                      << 4U) 
                                                     | (((((1U 
                                                            & (IData)(
                                                                      (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                       >> 5U)))
                                                            ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__35__KET__)
                                                            : (IData)(__VdfgRegularize_he50b618e_0_29)) 
                                                          << 3U) 
                                                         | (((1U 
                                                              & (IData)(
                                                                        (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                         >> 5U)))
                                                              ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__34__KET__)
                                                              : (IData)(__VdfgRegularize_he50b618e_0_30)) 
                                                            << 2U)) 
                                                        | ((((1U 
                                                              & (IData)(
                                                                        (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                         >> 5U)))
                                                              ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__33__KET__)
                                                              : (IData)(__VdfgRegularize_he50b618e_0_31)) 
                                                            << 1U) 
                                                           | (IData)(__VdfgRegularize_he50b618e_0_32)))))))));
    vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__sra_res 
        = (((QData)((IData)(((((((((2U & ((IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                                   >> 0x0000003fU)) 
                                          << 1U)) | 
                                   (1U & ((1U & (IData)(
                                                        (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                         >> 5U)))
                                           ? (IData)(
                                                     (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                                      >> 0x0000003fU))
                                           : (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__62__KET__)))) 
                                  << 6U) | (((2U & 
                                              (((1U 
                                                 & (IData)(
                                                           (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                            >> 5U)))
                                                 ? (IData)(
                                                           (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                                            >> 0x0000003fU))
                                                 : (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__61__KET__)) 
                                               << 1U)) 
                                             | (1U 
                                                & ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                               >> 5U)))
                                                    ? (IData)(
                                                              (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                                               >> 0x0000003fU))
                                                    : (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__60__KET__)))) 
                                            << 4U)) 
                                | ((((2U & (((1U & (IData)(
                                                           (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                            >> 5U)))
                                              ? (IData)(
                                                        (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                                         >> 0x0000003fU))
                                              : (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__59__KET__)) 
                                            << 1U)) 
                                     | (1U & ((1U & (IData)(
                                                            (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                             >> 5U)))
                                               ? (IData)(
                                                         (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                                          >> 0x0000003fU))
                                               : (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__58__KET__)))) 
                                    << 2U) | ((2U & 
                                               (((1U 
                                                  & (IData)(
                                                            (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                             >> 5U)))
                                                  ? (IData)(
                                                            (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                                             >> 0x0000003fU))
                                                  : (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__57__KET__)) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                >> 5U)))
                                                     ? (IData)(
                                                               (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                                                >> 0x0000003fU))
                                                     : (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__56__KET__)))))) 
                               << 0x00000018U) | ((
                                                   ((((2U 
                                                       & (((1U 
                                                            & (IData)(
                                                                      (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                       >> 5U)))
                                                            ? (IData)(
                                                                      (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                                                       >> 0x0000003fU))
                                                            : (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__55__KET__)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((1U 
                                                             & (IData)(
                                                                       (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                        >> 5U)))
                                                             ? (IData)(
                                                                       (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                                                        >> 0x0000003fU))
                                                             : (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__54__KET__)))) 
                                                     << 6U) 
                                                    | (((2U 
                                                         & (((1U 
                                                              & (IData)(
                                                                        (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                         >> 5U)))
                                                              ? (IData)(
                                                                        (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                                                         >> 0x0000003fU))
                                                              : (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__53__KET__)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & ((1U 
                                                               & (IData)(
                                                                         (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                          >> 5U)))
                                                               ? (IData)(
                                                                         (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                                                          >> 0x0000003fU))
                                                               : (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__52__KET__)))) 
                                                       << 4U)) 
                                                   | ((((2U 
                                                         & (((1U 
                                                              & (IData)(
                                                                        (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                         >> 5U)))
                                                              ? (IData)(
                                                                        (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                                                         >> 0x0000003fU))
                                                              : (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__51__KET__)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & ((1U 
                                                               & (IData)(
                                                                         (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                          >> 5U)))
                                                               ? (IData)(
                                                                         (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                                                          >> 0x0000003fU))
                                                               : (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__50__KET__)))) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & (((1U 
                                                               & (IData)(
                                                                         (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                          >> 5U)))
                                                               ? (IData)(
                                                                         (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                                                          >> 0x0000003fU))
                                                               : (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__49__KET__)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & ((1U 
                                                                & (IData)(
                                                                          (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                           >> 5U)))
                                                                ? (IData)(
                                                                          (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                                                           >> 0x0000003fU))
                                                                : (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__48__KET__)))))) 
                                                  << 0x00000010U)) 
                             | (((((((2U & (((1U & (IData)(
                                                           (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                            >> 5U)))
                                              ? (IData)(
                                                        (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                                         >> 0x0000003fU))
                                              : (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__47__KET__)) 
                                            << 1U)) 
                                     | (1U & ((1U & (IData)(
                                                            (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                             >> 5U)))
                                               ? (IData)(
                                                         (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                                          >> 0x0000003fU))
                                               : (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__46__KET__)))) 
                                    << 6U) | (((2U 
                                                & (((1U 
                                                     & (IData)(
                                                               (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                >> 5U)))
                                                     ? (IData)(
                                                               (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                                                >> 0x0000003fU))
                                                     : (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__45__KET__)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                 >> 5U)))
                                                      ? (IData)(
                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                                                 >> 0x0000003fU))
                                                      : (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__44__KET__)))) 
                                              << 4U)) 
                                  | ((((2U & (((1U 
                                                & (IData)(
                                                          (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                           >> 5U)))
                                                ? (IData)(
                                                          (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                                           >> 0x0000003fU))
                                                : (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__43__KET__)) 
                                              << 1U)) 
                                       | (1U & ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                            >> 5U)))
                                                 ? (IData)(
                                                           (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                                            >> 0x0000003fU))
                                                 : (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__42__KET__)))) 
                                      << 2U) | ((2U 
                                                 & (((1U 
                                                      & (IData)(
                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                 >> 5U)))
                                                      ? (IData)(
                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                                                 >> 0x0000003fU))
                                                      : (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__41__KET__)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                  >> 5U)))
                                                       ? (IData)(
                                                                 (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                                                  >> 0x0000003fU))
                                                       : (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__40__KET__)))))) 
                                 << 8U) | (((((2U & 
                                               (((1U 
                                                  & (IData)(
                                                            (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                             >> 5U)))
                                                  ? (IData)(
                                                            (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                                             >> 0x0000003fU))
                                                  : (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__39__KET__)) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                >> 5U)))
                                                     ? (IData)(
                                                               (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                                                >> 0x0000003fU))
                                                     : (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__38__KET__)))) 
                                             << 6U) 
                                            | (((2U 
                                                 & (((1U 
                                                      & (IData)(
                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                 >> 5U)))
                                                      ? (IData)(
                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                                                 >> 0x0000003fU))
                                                      : (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__37__KET__)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                  >> 5U)))
                                                       ? (IData)(
                                                                 (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                                                  >> 0x0000003fU))
                                                       : (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__36__KET__)))) 
                                               << 4U)) 
                                           | ((((2U 
                                                 & (((1U 
                                                      & (IData)(
                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                 >> 5U)))
                                                      ? (IData)(
                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                                                 >> 0x0000003fU))
                                                      : (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__35__KET__)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                  >> 5U)))
                                                       ? (IData)(
                                                                 (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                                                  >> 0x0000003fU))
                                                       : (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__34__KET__)))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                  >> 5U)))
                                                       ? (IData)(
                                                                 (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                                                  >> 0x0000003fU))
                                                       : (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__33__KET__)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & ((1U 
                                                        & (IData)(
                                                                  (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                   >> 5U)))
                                                        ? (IData)(
                                                                  (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                                                   >> 0x0000003fU))
                                                        : (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5__BRA__32__KET__)))))))))) 
            << 0x00000020U) | (QData)((IData)((((((
                                                   (((2U 
                                                      & (((1U 
                                                           & (IData)(
                                                                     (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                      >> 5U)))
                                                           ? (IData)(
                                                                     (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                                                      >> 0x0000003fU))
                                                           : (IData)(__VdfgRegularize_he50b618e_0_1)) 
                                                         << 1U)) 
                                                     | ((1U 
                                                         & (IData)(
                                                                   (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                    >> 5U)))
                                                         ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__62__KET__)
                                                         : (IData)(__VdfgRegularize_he50b618e_0_2))) 
                                                    << 6U) 
                                                   | ((((1U 
                                                         & (IData)(
                                                                   (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                    >> 5U)))
                                                         ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__61__KET__)
                                                         : (IData)(__VdfgRegularize_he50b618e_0_3)) 
                                                       << 5U) 
                                                      | (((1U 
                                                           & (IData)(
                                                                     (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                      >> 5U)))
                                                           ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__60__KET__)
                                                           : (IData)(__VdfgRegularize_he50b618e_0_4)) 
                                                         << 4U))) 
                                                  | (((((1U 
                                                         & (IData)(
                                                                   (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                    >> 5U)))
                                                         ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__59__KET__)
                                                         : (IData)(__VdfgRegularize_he50b618e_0_5)) 
                                                       << 3U) 
                                                      | (((1U 
                                                           & (IData)(
                                                                     (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                      >> 5U)))
                                                           ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__58__KET__)
                                                           : (IData)(__VdfgRegularize_he50b618e_0_6)) 
                                                         << 2U)) 
                                                     | ((((1U 
                                                           & (IData)(
                                                                     (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                      >> 5U)))
                                                           ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__57__KET__)
                                                           : (IData)(__VdfgRegularize_he50b618e_0_7)) 
                                                         << 1U) 
                                                        | ((1U 
                                                            & (IData)(
                                                                      (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                       >> 5U)))
                                                            ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__56__KET__)
                                                            : (IData)(__VdfgRegularize_he50b618e_0_8))))) 
                                                 << 0x00000018U) 
                                                | (((((((1U 
                                                         & (IData)(
                                                                   (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                    >> 5U)))
                                                         ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__55__KET__)
                                                         : (IData)(__VdfgRegularize_he50b618e_0_9)) 
                                                       << 3U) 
                                                      | (((1U 
                                                           & (IData)(
                                                                     (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                      >> 5U)))
                                                           ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__54__KET__)
                                                           : (IData)(__VdfgRegularize_he50b618e_0_10)) 
                                                         << 2U)) 
                                                     | ((((1U 
                                                           & (IData)(
                                                                     (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                      >> 5U)))
                                                           ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__53__KET__)
                                                           : (IData)(__VdfgRegularize_he50b618e_0_11)) 
                                                         << 1U) 
                                                        | ((1U 
                                                            & (IData)(
                                                                      (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                       >> 5U)))
                                                            ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__52__KET__)
                                                            : (IData)(__VdfgRegularize_he50b618e_0_12)))) 
                                                    << 0x00000014U) 
                                                   | ((((((1U 
                                                           & (IData)(
                                                                     (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                      >> 5U)))
                                                           ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__51__KET__)
                                                           : (IData)(__VdfgRegularize_he50b618e_0_13)) 
                                                         << 3U) 
                                                        | (((1U 
                                                             & (IData)(
                                                                       (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                        >> 5U)))
                                                             ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__50__KET__)
                                                             : (IData)(__VdfgRegularize_he50b618e_0_14)) 
                                                           << 2U)) 
                                                       | ((((1U 
                                                             & (IData)(
                                                                       (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                        >> 5U)))
                                                             ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__49__KET__)
                                                             : (IData)(__VdfgRegularize_he50b618e_0_15)) 
                                                           << 1U) 
                                                          | ((1U 
                                                              & (IData)(
                                                                        (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                         >> 5U)))
                                                              ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__48__KET__)
                                                              : (IData)(__VdfgRegularize_he50b618e_0_16)))) 
                                                      << 0x00000010U))) 
                                               | ((((((((1U 
                                                         & (IData)(
                                                                   (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                    >> 5U)))
                                                         ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__47__KET__)
                                                         : (IData)(__VdfgRegularize_he50b618e_0_17)) 
                                                       << 3U) 
                                                      | (((1U 
                                                           & (IData)(
                                                                     (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                      >> 5U)))
                                                           ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__46__KET__)
                                                           : (IData)(__VdfgRegularize_he50b618e_0_18)) 
                                                         << 2U)) 
                                                     | ((((1U 
                                                           & (IData)(
                                                                     (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                      >> 5U)))
                                                           ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__45__KET__)
                                                           : (IData)(__VdfgRegularize_he50b618e_0_19)) 
                                                         << 1U) 
                                                        | ((1U 
                                                            & (IData)(
                                                                      (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                       >> 5U)))
                                                            ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__44__KET__)
                                                            : (IData)(__VdfgRegularize_he50b618e_0_20)))) 
                                                    << 0x0000000cU) 
                                                   | ((((((1U 
                                                           & (IData)(
                                                                     (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                      >> 5U)))
                                                           ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__43__KET__)
                                                           : (IData)(__VdfgRegularize_he50b618e_0_21)) 
                                                         << 3U) 
                                                        | (((1U 
                                                             & (IData)(
                                                                       (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                        >> 5U)))
                                                             ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__42__KET__)
                                                             : (IData)(__VdfgRegularize_he50b618e_0_22)) 
                                                           << 2U)) 
                                                       | ((((1U 
                                                             & (IData)(
                                                                       (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                        >> 5U)))
                                                             ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__41__KET__)
                                                             : (IData)(__VdfgRegularize_he50b618e_0_23)) 
                                                           << 1U) 
                                                          | ((1U 
                                                              & (IData)(
                                                                        (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                         >> 5U)))
                                                              ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__40__KET__)
                                                              : (IData)(__VdfgRegularize_he50b618e_0_24)))) 
                                                      << 8U)) 
                                                  | (((((((1U 
                                                           & (IData)(
                                                                     (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                      >> 5U)))
                                                           ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__39__KET__)
                                                           : (IData)(__VdfgRegularize_he50b618e_0_25)) 
                                                         << 3U) 
                                                        | (((1U 
                                                             & (IData)(
                                                                       (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                        >> 5U)))
                                                             ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__38__KET__)
                                                             : (IData)(__VdfgRegularize_he50b618e_0_26)) 
                                                           << 2U)) 
                                                       | ((((1U 
                                                             & (IData)(
                                                                       (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                        >> 5U)))
                                                             ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__37__KET__)
                                                             : (IData)(__VdfgRegularize_he50b618e_0_27)) 
                                                           << 1U) 
                                                          | ((1U 
                                                              & (IData)(
                                                                        (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                         >> 5U)))
                                                              ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__36__KET__)
                                                              : (IData)(__VdfgRegularize_he50b618e_0_28)))) 
                                                      << 4U) 
                                                     | (((((1U 
                                                            & (IData)(
                                                                      (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                       >> 5U)))
                                                            ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__35__KET__)
                                                            : (IData)(__VdfgRegularize_he50b618e_0_29)) 
                                                          << 3U) 
                                                         | (((1U 
                                                              & (IData)(
                                                                        (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                         >> 5U)))
                                                              ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__34__KET__)
                                                              : (IData)(__VdfgRegularize_he50b618e_0_30)) 
                                                            << 2U)) 
                                                        | ((((1U 
                                                              & (IData)(
                                                                        (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                         >> 5U)))
                                                              ? (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5__BRA__33__KET__)
                                                              : (IData)(__VdfgRegularize_he50b618e_0_31)) 
                                                            << 1U) 
                                                           | (IData)(__VdfgRegularize_he50b618e_0_32)))))))));
}

void Vsoc_top___024root___nba_sequent__TOP__8(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__8\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__addsub_res;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__addsub_res = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__carry_into_msb;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__carry_into_msb = 0;
    // Body
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__carry_into_msb 
        = (1U & (((IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                           >> 0x0000003eU)) & (IData)(
                                                      (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                       >> 0x0000003eU))) 
                 | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__62__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__62__KET____DOT__fa_inst__DOT__cin))));
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__addsub_res 
        = (((QData)((IData)(((((((((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__63__KET____DOT__fa_inst__DOT__x1) 
                                     ^ (IData)(soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__carry_into_msb)) 
                                    << 3U) | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__62__KET____DOT__fa_inst__DOT__x1) 
                                               ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__62__KET____DOT__fa_inst__DOT__cin)) 
                                              << 2U)) 
                                  | ((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__61__KET____DOT__fa_inst__DOT__x1) 
                                       ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__61__KET____DOT__fa_inst__DOT__cin)) 
                                      << 1U) | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__60__KET____DOT__fa_inst__DOT__x1) 
                                                ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__60__KET____DOT__fa_inst__DOT__cin)))) 
                                 << 0x0000000cU) | 
                                ((((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__59__KET____DOT__fa_inst__DOT__x1) 
                                     ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__59__KET____DOT__fa_inst__DOT__cin)) 
                                    << 3U) | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__58__KET____DOT__fa_inst__DOT__x1) 
                                               ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__58__KET____DOT__fa_inst__DOT__cin)) 
                                              << 2U)) 
                                  | ((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__57__KET____DOT__fa_inst__DOT__x1) 
                                       ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__57__KET____DOT__fa_inst__DOT__cin)) 
                                      << 1U) | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__56__KET____DOT__fa_inst__DOT__x1) 
                                                ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__56__KET____DOT__fa_inst__DOT__cin)))) 
                                 << 8U)) | (((((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__55__KET____DOT__fa_inst__DOT__x1) 
                                                 ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__55__KET____DOT__fa_inst__DOT__cin)) 
                                                << 3U) 
                                               | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__54__KET____DOT__fa_inst__DOT__x1) 
                                                   ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__54__KET____DOT__fa_inst__DOT__cin)) 
                                                  << 2U)) 
                                              | ((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__53__KET____DOT__fa_inst__DOT__x1) 
                                                   ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__53__KET____DOT__fa_inst__DOT__cin)) 
                                                  << 1U) 
                                                 | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__52__KET____DOT__fa_inst__DOT__x1) 
                                                    ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__52__KET____DOT__fa_inst__DOT__cin)))) 
                                             << 4U) 
                                            | (((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__51__KET____DOT__fa_inst__DOT__x1) 
                                                  ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__51__KET____DOT__fa_inst__DOT__cin)) 
                                                 << 3U) 
                                                | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__50__KET____DOT__fa_inst__DOT__x1) 
                                                    ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__50__KET____DOT__fa_inst__DOT__cin)) 
                                                   << 2U)) 
                                               | ((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__49__KET____DOT__fa_inst__DOT__x1) 
                                                    ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__49__KET____DOT__fa_inst__DOT__cin)) 
                                                   << 1U) 
                                                  | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__48__KET____DOT__fa_inst__DOT__x1) 
                                                     ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__48__KET____DOT__fa_inst__DOT__cin)))))) 
                              << 0x00000010U) | (((
                                                   (((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__47__KET____DOT__fa_inst__DOT__x1) 
                                                       ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__47__KET____DOT__fa_inst__DOT__cin)) 
                                                      << 3U) 
                                                     | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__46__KET____DOT__fa_inst__DOT__x1) 
                                                         ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__46__KET____DOT__fa_inst__DOT__cin)) 
                                                        << 2U)) 
                                                    | ((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__45__KET____DOT__fa_inst__DOT__x1) 
                                                         ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__45__KET____DOT__fa_inst__DOT__cin)) 
                                                        << 1U) 
                                                       | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__44__KET____DOT__fa_inst__DOT__x1) 
                                                          ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__44__KET____DOT__fa_inst__DOT__cin)))) 
                                                   << 0x0000000cU) 
                                                  | ((((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__43__KET____DOT__fa_inst__DOT__x1) 
                                                         ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__43__KET____DOT__fa_inst__DOT__cin)) 
                                                        << 3U) 
                                                       | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__42__KET____DOT__fa_inst__DOT__x1) 
                                                           ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__42__KET____DOT__fa_inst__DOT__cin)) 
                                                          << 2U)) 
                                                      | ((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__41__KET____DOT__fa_inst__DOT__x1) 
                                                           ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__41__KET____DOT__fa_inst__DOT__cin)) 
                                                          << 1U) 
                                                         | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__40__KET____DOT__fa_inst__DOT__x1) 
                                                            ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__40__KET____DOT__fa_inst__DOT__cin)))) 
                                                     << 8U)) 
                                                 | (((((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__39__KET____DOT__fa_inst__DOT__x1) 
                                                         ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__39__KET____DOT__fa_inst__DOT__cin)) 
                                                        << 3U) 
                                                       | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__38__KET____DOT__fa_inst__DOT__x1) 
                                                           ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__38__KET____DOT__fa_inst__DOT__cin)) 
                                                          << 2U)) 
                                                      | ((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__37__KET____DOT__fa_inst__DOT__x1) 
                                                           ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__37__KET____DOT__fa_inst__DOT__cin)) 
                                                          << 1U) 
                                                         | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__36__KET____DOT__fa_inst__DOT__x1) 
                                                            ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__36__KET____DOT__fa_inst__DOT__cin)))) 
                                                     << 4U) 
                                                    | (((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__35__KET____DOT__fa_inst__DOT__x1) 
                                                          ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__35__KET____DOT__fa_inst__DOT__cin)) 
                                                         << 3U) 
                                                        | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__34__KET____DOT__fa_inst__DOT__x1) 
                                                            ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__34__KET____DOT__fa_inst__DOT__cin)) 
                                                           << 2U)) 
                                                       | ((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__33__KET____DOT__fa_inst__DOT__x1) 
                                                            ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__33__KET____DOT__fa_inst__DOT__cin)) 
                                                           << 1U) 
                                                          | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__32__KET____DOT__fa_inst__DOT__x1) 
                                                             ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__32__KET____DOT__fa_inst__DOT__cin))))))))) 
            << 0x00000020U) | (QData)((IData)((((((
                                                   (((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__31__KET____DOT__fa_inst__DOT__x1) 
                                                       ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__31__KET____DOT__fa_inst__DOT__cin)) 
                                                      << 3U) 
                                                     | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__30__KET____DOT__fa_inst__DOT__x1) 
                                                         ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__30__KET____DOT__fa_inst__DOT__cin)) 
                                                        << 2U)) 
                                                    | ((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__29__KET____DOT__fa_inst__DOT__x1) 
                                                         ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__29__KET____DOT__fa_inst__DOT__cin)) 
                                                        << 1U) 
                                                       | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__28__KET____DOT__fa_inst__DOT__x1) 
                                                          ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__28__KET____DOT__fa_inst__DOT__cin)))) 
                                                   << 0x0000000cU) 
                                                  | ((((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__27__KET____DOT__fa_inst__DOT__x1) 
                                                         ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__27__KET____DOT__fa_inst__DOT__cin)) 
                                                        << 3U) 
                                                       | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__26__KET____DOT__fa_inst__DOT__x1) 
                                                           ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__26__KET____DOT__fa_inst__DOT__cin)) 
                                                          << 2U)) 
                                                      | ((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__25__KET____DOT__fa_inst__DOT__x1) 
                                                           ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__25__KET____DOT__fa_inst__DOT__cin)) 
                                                          << 1U) 
                                                         | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__24__KET____DOT__fa_inst__DOT__x1) 
                                                            ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__24__KET____DOT__fa_inst__DOT__cin)))) 
                                                     << 8U)) 
                                                 | (((((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__23__KET____DOT__fa_inst__DOT__x1) 
                                                         ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__23__KET____DOT__fa_inst__DOT__cin)) 
                                                        << 3U) 
                                                       | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__22__KET____DOT__fa_inst__DOT__x1) 
                                                           ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__22__KET____DOT__fa_inst__DOT__cin)) 
                                                          << 2U)) 
                                                      | ((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__21__KET____DOT__fa_inst__DOT__x1) 
                                                           ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__21__KET____DOT__fa_inst__DOT__cin)) 
                                                          << 1U) 
                                                         | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__20__KET____DOT__fa_inst__DOT__x1) 
                                                            ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__20__KET____DOT__fa_inst__DOT__cin)))) 
                                                     << 4U) 
                                                    | (((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__19__KET____DOT__fa_inst__DOT__x1) 
                                                          ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__19__KET____DOT__fa_inst__DOT__cin)) 
                                                         << 3U) 
                                                        | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__18__KET____DOT__fa_inst__DOT__x1) 
                                                            ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__18__KET____DOT__fa_inst__DOT__cin)) 
                                                           << 2U)) 
                                                       | ((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__17__KET____DOT__fa_inst__DOT__x1) 
                                                            ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__17__KET____DOT__fa_inst__DOT__cin)) 
                                                           << 1U) 
                                                          | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__16__KET____DOT__fa_inst__DOT__x1) 
                                                             ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__16__KET____DOT__fa_inst__DOT__cin)))))) 
                                                << 0x00000010U) 
                                               | ((((((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__15__KET____DOT__fa_inst__DOT__x1) 
                                                        ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__15__KET____DOT__fa_inst__DOT__cin)) 
                                                       << 3U) 
                                                      | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__14__KET____DOT__fa_inst__DOT__x1) 
                                                          ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__14__KET____DOT__fa_inst__DOT__cin)) 
                                                         << 2U)) 
                                                     | ((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__13__KET____DOT__fa_inst__DOT__x1) 
                                                          ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__13__KET____DOT__fa_inst__DOT__cin)) 
                                                         << 1U) 
                                                        | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__12__KET____DOT__fa_inst__DOT__x1) 
                                                           ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__12__KET____DOT__fa_inst__DOT__cin)))) 
                                                    << 0x0000000cU) 
                                                   | ((((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__11__KET____DOT__fa_inst__DOT__x1) 
                                                          ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__11__KET____DOT__fa_inst__DOT__cin)) 
                                                         << 3U) 
                                                        | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__10__KET____DOT__fa_inst__DOT__x1) 
                                                            ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__10__KET____DOT__fa_inst__DOT__cin)) 
                                                           << 2U)) 
                                                       | ((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__9__KET____DOT__fa_inst__DOT__x1) 
                                                            ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__9__KET____DOT__fa_inst__DOT__cin)) 
                                                           << 1U) 
                                                          | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__8__KET____DOT__fa_inst__DOT__x1) 
                                                             ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__8__KET____DOT__fa_inst__DOT__cin)))) 
                                                      << 8U)) 
                                                  | (((((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__7__KET____DOT__fa_inst__DOT__x1) 
                                                          ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__7__KET____DOT__fa_inst__DOT__cin)) 
                                                         << 3U) 
                                                        | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__6__KET____DOT__fa_inst__DOT__x1) 
                                                            ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__6__KET____DOT__fa_inst__DOT__cin)) 
                                                           << 2U)) 
                                                       | ((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__5__KET____DOT__fa_inst__DOT__x1) 
                                                            ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__5__KET____DOT__fa_inst__DOT__cin)) 
                                                           << 1U) 
                                                          | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__4__KET____DOT__fa_inst__DOT__x1) 
                                                             ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__4__KET____DOT__fa_inst__DOT__cin)))) 
                                                      << 4U) 
                                                     | (((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__3__KET____DOT__fa_inst__DOT__x1) 
                                                           ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__3__KET____DOT__fa_inst__DOT__cin)) 
                                                          << 3U) 
                                                         | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__2__KET____DOT__fa_inst__DOT__x1) 
                                                             ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__2__KET____DOT__fa_inst__DOT__cin)) 
                                                            << 2U)) 
                                                        | ((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__1__KET____DOT__fa_inst__DOT__x1) 
                                                             ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__1__KET____DOT__fa_inst__DOT__cin)) 
                                                            << 1U) 
                                                           | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__PVT__rca_gen__BRA__0__KET____DOT__fa_inst__DOT__x1) 
                                                              ^ 
                                                              (8U 
                                                               == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_ctrl)))))))))));
    vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_res 
        = ((8U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_ctrl))
            ? ((4U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_ctrl))
                ? ((2U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_ctrl))
                    ? 0ULL : ((1U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_ctrl))
                               ? vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__sra_res
                               : 0ULL)) : ((2U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_ctrl))
                                            ? 0ULL : 
                                           ((1U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_ctrl))
                                             ? 0ULL
                                             : soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__addsub_res)))
            : ((4U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_ctrl))
                ? ((2U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_ctrl))
                    ? ((1U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_ctrl))
                        ? (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                           & vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b)
                        : (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                           | vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b))
                    : ((1U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_ctrl))
                        ? vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__srl_res
                        : (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                           ^ vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b)))
                : ((2U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_ctrl))
                    ? ((1U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_ctrl))
                        ? (QData)((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_33))
                        : (QData)((IData)((1U & (((1U 
                                                   & (IData)(
                                                             (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                                              >> 0x0000003fU))) 
                                                  == 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                              >> 0x0000003fU))))
                                                  ? (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_33)
                                                  : (IData)(
                                                            (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                                             >> 0x0000003fU)))))))
                    : ((1U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_ctrl))
                        ? vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__sll_res
                        : soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__addsub_res))));
    vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_result_raw 
        = ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__is_m_ext)
            ? vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__multdiv_result
            : vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_res);
}

void Vsoc_top___024root___nba_comb__TOP__2(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__2\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__vga_read_data = ((4U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_funct3))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_funct3))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_funct3))
                                                   ? 0ULL
                                                   : 
                                                  (((QData)((IData)(
                                                                    vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                                                    [
                                                                    (0x00003fffU 
                                                                     & ((IData)(3U) 
                                                                        + 
                                                                        ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result) 
                                                                         - (IData)(0x2000U))))])) 
                                                    << 0x00000018U) 
                                                   | (QData)((IData)(
                                                                     ((vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                                                       [
                                                                       (0x00003fffU 
                                                                        & ((IData)(2U) 
                                                                           + 
                                                                           ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result) 
                                                                            - (IData)(0x2000U))))] 
                                                                       << 0x00000010U) 
                                                                      | ((vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                                                          [
                                                                          (0x00003fffU 
                                                                           & ((IData)(1U) 
                                                                              + 
                                                                              ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result) 
                                                                               - (IData)(0x2000U))))] 
                                                                          << 8U) 
                                                                         | vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                                                         [
                                                                         (0x00003fffU 
                                                                          & ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result) 
                                                                             - (IData)(0x2000U)))]))))))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_funct3))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                                                    [
                                                                    (0x00003fffU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result) 
                                                                         - (IData)(0x2000U))))])) 
                                                    << 8U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                                                     [
                                                                     (0x00003fffU 
                                                                      & ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result) 
                                                                         - (IData)(0x2000U)))])))
                                                   : (QData)((IData)(
                                                                     vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                                                     [
                                                                     (0x00003fffU 
                                                                      & ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result) 
                                                                         - (IData)(0x2000U)))]))))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_funct3))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_funct3))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    (((vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                                                       [
                                                                       (0x00003fffU 
                                                                        & ((IData)(7U) 
                                                                           + 
                                                                           ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result) 
                                                                            - (IData)(0x2000U))))] 
                                                                       << 0x00000018U) 
                                                                      | (vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                                                         [
                                                                         (0x00003fffU 
                                                                          & ((IData)(6U) 
                                                                             + 
                                                                             ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result) 
                                                                              - (IData)(0x2000U))))] 
                                                                         << 0x00000010U)) 
                                                                     | ((vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                                                         [
                                                                         (0x00003fffU 
                                                                          & ((IData)(5U) 
                                                                             + 
                                                                             ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result) 
                                                                              - (IData)(0x2000U))))] 
                                                                         << 8U) 
                                                                        | vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                                                        [
                                                                        (0x00003fffU 
                                                                         & ((IData)(4U) 
                                                                            + 
                                                                            ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result) 
                                                                             - (IData)(0x2000U))))])))) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     (((vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                                                        [
                                                                        (0x00003fffU 
                                                                         & ((IData)(3U) 
                                                                            + 
                                                                            ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result) 
                                                                             - (IData)(0x2000U))))] 
                                                                        << 0x00000018U) 
                                                                       | (vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                                                          [
                                                                          (0x00003fffU 
                                                                           & ((IData)(2U) 
                                                                              + 
                                                                              ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result) 
                                                                               - (IData)(0x2000U))))] 
                                                                          << 0x00000010U)) 
                                                                      | ((vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                                                          [
                                                                          (0x00003fffU 
                                                                           & ((IData)(1U) 
                                                                              + 
                                                                              ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result) 
                                                                               - (IData)(0x2000U))))] 
                                                                          << 8U) 
                                                                         | vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                                                         [
                                                                         (0x00003fffU 
                                                                          & ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result) 
                                                                             - (IData)(0x2000U)))])))))
                                                   : 
                                                  (((QData)((IData)(
                                                                    (- (IData)(
                                                                               (1U 
                                                                                & (vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                                                                [
                                                                                (0x00003fffU 
                                                                                & ((IData)(3U) 
                                                                                + 
                                                                                ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result) 
                                                                                - (IData)(0x2000U))))] 
                                                                                >> 7U)))))) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     (((vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                                                        [
                                                                        (0x00003fffU 
                                                                         & ((IData)(3U) 
                                                                            + 
                                                                            ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result) 
                                                                             - (IData)(0x2000U))))] 
                                                                        << 0x00000018U) 
                                                                       | (vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                                                          [
                                                                          (0x00003fffU 
                                                                           & ((IData)(2U) 
                                                                              + 
                                                                              ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result) 
                                                                               - (IData)(0x2000U))))] 
                                                                          << 0x00000010U)) 
                                                                      | ((vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                                                          [
                                                                          (0x00003fffU 
                                                                           & ((IData)(1U) 
                                                                              + 
                                                                              ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result) 
                                                                               - (IData)(0x2000U))))] 
                                                                          << 8U) 
                                                                         | vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                                                         [
                                                                         (0x00003fffU 
                                                                          & ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result) 
                                                                             - (IData)(0x2000U)))]))))))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_funct3))
                                                   ? 
                                                  (((- (QData)((IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                                                           [
                                                                           (0x00003fffU 
                                                                            & ((IData)(1U) 
                                                                               + 
                                                                               ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result) 
                                                                                - (IData)(0x2000U))))] 
                                                                           >> 7U))))) 
                                                    << 0x00000010U) 
                                                   | (QData)((IData)(
                                                                     ((vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                                                       [
                                                                       (0x00003fffU 
                                                                        & ((IData)(1U) 
                                                                           + 
                                                                           ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result) 
                                                                            - (IData)(0x2000U))))] 
                                                                       << 8U) 
                                                                      | vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                                                      [
                                                                      (0x00003fffU 
                                                                       & ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result) 
                                                                          - (IData)(0x2000U)))]))))
                                                   : 
                                                  (((- (QData)((IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                                                           [
                                                                           (0x00003fffU 
                                                                            & ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result) 
                                                                               - (IData)(0x2000U)))] 
                                                                           >> 7U))))) 
                                                    << 8U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                                                     [
                                                                     (0x00003fffU 
                                                                      & ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result) 
                                                                         - (IData)(0x2000U)))]))))));
    vlSelfRef.soc_top__DOT__ram_read_data = (((0x0000000000002000ULL 
                                               > vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result) 
                                              & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_MemRead))
                                              ? ((4U 
                                                  & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_funct3))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_funct3))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_funct3))
                                                    ? 0ULL
                                                    : 
                                                   (((QData)((IData)(
                                                                     vlSelfRef.soc_top__DOT__u_ram__DOT__memory
                                                                     [
                                                                     (0x00001fffU 
                                                                      & ((IData)(3U) 
                                                                         + (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)))])) 
                                                     << 0x00000018U) 
                                                    | (QData)((IData)(
                                                                      ((vlSelfRef.soc_top__DOT__u_ram__DOT__memory
                                                                        [
                                                                        (0x00001fffU 
                                                                         & ((IData)(2U) 
                                                                            + (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)))] 
                                                                        << 0x00000010U) 
                                                                       | ((vlSelfRef.soc_top__DOT__u_ram__DOT__memory
                                                                           [
                                                                           (0x00001fffU 
                                                                            & ((IData)(1U) 
                                                                               + (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)))] 
                                                                           << 8U) 
                                                                          | vlSelfRef.soc_top__DOT__u_ram__DOT__memory
                                                                          [
                                                                          (0x00001fffU 
                                                                           & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result))]))))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_funct3))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelfRef.soc_top__DOT__u_ram__DOT__memory
                                                                     [
                                                                     (0x00001fffU 
                                                                      & ((IData)(1U) 
                                                                         + (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)))])) 
                                                     << 8U) 
                                                    | (QData)((IData)(
                                                                      vlSelfRef.soc_top__DOT__u_ram__DOT__memory
                                                                      [
                                                                      (0x00001fffU 
                                                                       & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result))])))
                                                    : (QData)((IData)(
                                                                      vlSelfRef.soc_top__DOT__u_ram__DOT__memory
                                                                      [
                                                                      (0x00001fffU 
                                                                       & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result))]))))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_funct3))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_funct3))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (((vlSelfRef.soc_top__DOT__u_ram__DOT__memory
                                                                        [
                                                                        (0x00001fffU 
                                                                         & ((IData)(7U) 
                                                                            + (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)))] 
                                                                        << 0x00000018U) 
                                                                       | (vlSelfRef.soc_top__DOT__u_ram__DOT__memory
                                                                          [
                                                                          (0x00001fffU 
                                                                           & ((IData)(6U) 
                                                                              + (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)))] 
                                                                          << 0x00000010U)) 
                                                                      | ((vlSelfRef.soc_top__DOT__u_ram__DOT__memory
                                                                          [
                                                                          (0x00001fffU 
                                                                           & ((IData)(5U) 
                                                                              + (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)))] 
                                                                          << 8U) 
                                                                         | vlSelfRef.soc_top__DOT__u_ram__DOT__memory
                                                                         [
                                                                         (0x00001fffU 
                                                                          & ((IData)(4U) 
                                                                             + (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)))])))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(
                                                                      (((vlSelfRef.soc_top__DOT__u_ram__DOT__memory
                                                                         [
                                                                         (0x00001fffU 
                                                                          & ((IData)(3U) 
                                                                             + (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)))] 
                                                                         << 0x00000018U) 
                                                                        | (vlSelfRef.soc_top__DOT__u_ram__DOT__memory
                                                                           [
                                                                           (0x00001fffU 
                                                                            & ((IData)(2U) 
                                                                               + (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)))] 
                                                                           << 0x00000010U)) 
                                                                       | ((vlSelfRef.soc_top__DOT__u_ram__DOT__memory
                                                                           [
                                                                           (0x00001fffU 
                                                                            & ((IData)(1U) 
                                                                               + (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)))] 
                                                                           << 8U) 
                                                                          | vlSelfRef.soc_top__DOT__u_ram__DOT__memory
                                                                          [
                                                                          (0x00001fffU 
                                                                           & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result))])))))
                                                    : 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.soc_top__DOT__u_ram__DOT__memory
                                                                                [
                                                                                (0x00001fffU 
                                                                                & ((IData)(3U) 
                                                                                + (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)))] 
                                                                                >> 7U)))))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(
                                                                      (((vlSelfRef.soc_top__DOT__u_ram__DOT__memory
                                                                         [
                                                                         (0x00001fffU 
                                                                          & ((IData)(3U) 
                                                                             + (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)))] 
                                                                         << 0x00000018U) 
                                                                        | (vlSelfRef.soc_top__DOT__u_ram__DOT__memory
                                                                           [
                                                                           (0x00001fffU 
                                                                            & ((IData)(2U) 
                                                                               + (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)))] 
                                                                           << 0x00000010U)) 
                                                                       | ((vlSelfRef.soc_top__DOT__u_ram__DOT__memory
                                                                           [
                                                                           (0x00001fffU 
                                                                            & ((IData)(1U) 
                                                                               + (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)))] 
                                                                           << 8U) 
                                                                          | vlSelfRef.soc_top__DOT__u_ram__DOT__memory
                                                                          [
                                                                          (0x00001fffU 
                                                                           & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result))]))))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_funct3))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (vlSelfRef.soc_top__DOT__u_ram__DOT__memory
                                                                            [
                                                                            (0x00001fffU 
                                                                             & ((IData)(1U) 
                                                                                + (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)))] 
                                                                            >> 7U))))) 
                                                     << 0x00000010U) 
                                                    | (QData)((IData)(
                                                                      ((vlSelfRef.soc_top__DOT__u_ram__DOT__memory
                                                                        [
                                                                        (0x00001fffU 
                                                                         & ((IData)(1U) 
                                                                            + (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)))] 
                                                                        << 8U) 
                                                                       | vlSelfRef.soc_top__DOT__u_ram__DOT__memory
                                                                       [
                                                                       (0x00001fffU 
                                                                        & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result))]))))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (vlSelfRef.soc_top__DOT__u_ram__DOT__memory
                                                                            [
                                                                            (0x00001fffU 
                                                                             & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result))] 
                                                                            >> 7U))))) 
                                                     << 8U) 
                                                    | (QData)((IData)(
                                                                      vlSelfRef.soc_top__DOT__u_ram__DOT__memory
                                                                      [
                                                                      (0x00001fffU 
                                                                       & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result))]))))))
                                              : 0ULL);
    vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__csr_write_data 
        = ((4U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_funct3))
            ? ((2U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_funct3))
                ? ((1U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_funct3))
                    ? ((~ (QData)((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_rs1))) 
                       & vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__csr_rdata)
                    : (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__csr_rdata 
                       | (QData)((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_rs1))))
                : ((1U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_funct3))
                    ? (QData)((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_rs1))
                    : vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__fwd_rs1))
            : ((2U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_funct3))
                ? ((1U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_funct3))
                    ? ((~ vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__fwd_rs1) 
                       & vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__csr_rdata)
                    : (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__csr_rdata 
                       | vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__fwd_rs1))
                : vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__fwd_rs1));
    vlSelfRef.soc_top__DOT__u_core__DOT__ex_alu_result 
        = ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_is_csr)
            ? vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__csr_rdata
            : ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_is_32bit)
                ? (((QData)((IData)((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_result_raw 
                                                           >> 0x0000001fU))))))) 
                    << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_result_raw)))
                : vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_result_raw));
    vlSelfRef.soc_top__DOT__u_core__DOT__ex_branch_taken 
        = (((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_Branch) 
            & ((4U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_funct3))
                ? ((2U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_funct3))
                    ? ((1U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_funct3))
                        ? ((0ULL == vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_res) 
                           | (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                              >= vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__fwd_rs2))
                        : ((0ULL != vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_res) 
                           & (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                              < vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__fwd_rs2)))
                    : ((1U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_funct3))
                        ? ((~ (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__ex_alu_result 
                                       >> 0x0000003fU))) 
                           | (0ULL == vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_res))
                        : (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__ex_alu_result 
                                   >> 0x0000003fU))))
                : ((~ ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_funct3) 
                       >> 1U)) & ((1U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_funct3))
                                   ? (0ULL != vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_res)
                                   : (0ULL == vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_res))))) 
           | (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_Jump));
    vlSelfRef.soc_top__DOT__u_core__DOT__ex_branch_target 
        = (((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_ALUSrc) 
            & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_Jump))
            ? (0xfffffffffffffffeULL & vlSelfRef.soc_top__DOT__u_core__DOT__ex_alu_result)
            : (((QData)((IData)(((((((((2U & ((((IData)(
                                                        (vlSelfRef.soc_top__DOT__u_core__DOT__ex_pc 
                                                         >> 0x0000003fU)) 
                                                ^ (IData)(
                                                          (vlSelfRef.soc_top__DOT__u_core__DOT__ex_immediate 
                                                           >> 0x0000003fU))) 
                                               ^ (((IData)(
                                                           (vlSelfRef.soc_top__DOT__u_core__DOT__ex_pc 
                                                            >> 0x0000003eU)) 
                                                   & (IData)(
                                                             (vlSelfRef.soc_top__DOT__u_core__DOT__ex_immediate 
                                                              >> 0x0000003eU))) 
                                                  | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__62__KET____DOT__fa_inst__DOT__x1) 
                                                     & (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__62__KET____DOT__fa_inst__DOT__cin)))) 
                                              << 1U)) 
                                       | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__62__KET____DOT__fa_inst__DOT__x1) 
                                          ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__62__KET____DOT__fa_inst__DOT__cin))) 
                                      << 6U) | ((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__61__KET____DOT__fa_inst__DOT__x1) 
                                                  ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__61__KET____DOT__fa_inst__DOT__cin)) 
                                                 << 5U) 
                                                | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__60__KET____DOT__fa_inst__DOT__x1) 
                                                    ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__60__KET____DOT__fa_inst__DOT__cin)) 
                                                   << 4U))) 
                                    | (((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__59__KET____DOT__fa_inst__DOT__x1) 
                                          ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__59__KET____DOT__fa_inst__DOT__cin)) 
                                         << 3U) | (
                                                   ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__58__KET____DOT__fa_inst__DOT__x1) 
                                                    ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__58__KET____DOT__fa_inst__DOT__cin)) 
                                                   << 2U)) 
                                       | ((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__57__KET____DOT__fa_inst__DOT__x1) 
                                            ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__57__KET____DOT__fa_inst__DOT__cin)) 
                                           << 1U) | 
                                          ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__56__KET____DOT__fa_inst__DOT__x1) 
                                           ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__56__KET____DOT__fa_inst__DOT__cin))))) 
                                   << 0x00000018U) 
                                  | (((((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__55__KET____DOT__fa_inst__DOT__x1) 
                                          ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__55__KET____DOT__fa_inst__DOT__cin)) 
                                         << 3U) | (
                                                   ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__54__KET____DOT__fa_inst__DOT__x1) 
                                                    ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__54__KET____DOT__fa_inst__DOT__cin)) 
                                                   << 2U)) 
                                       | ((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__53__KET____DOT__fa_inst__DOT__x1) 
                                            ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__53__KET____DOT__fa_inst__DOT__cin)) 
                                           << 1U) | 
                                          ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__52__KET____DOT__fa_inst__DOT__x1) 
                                           ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__52__KET____DOT__fa_inst__DOT__cin)))) 
                                      << 0x00000014U) 
                                     | ((((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__51__KET____DOT__fa_inst__DOT__x1) 
                                            ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__51__KET____DOT__fa_inst__DOT__cin)) 
                                           << 3U) | 
                                          (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__50__KET____DOT__fa_inst__DOT__x1) 
                                            ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__50__KET____DOT__fa_inst__DOT__cin)) 
                                           << 2U)) 
                                         | ((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__49__KET____DOT__fa_inst__DOT__x1) 
                                              ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__49__KET____DOT__fa_inst__DOT__cin)) 
                                             << 1U) 
                                            | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__48__KET____DOT__fa_inst__DOT__x1) 
                                               ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__48__KET____DOT__fa_inst__DOT__cin)))) 
                                        << 0x00000010U))) 
                                 | ((((((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__47__KET____DOT__fa_inst__DOT__x1) 
                                          ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__47__KET____DOT__fa_inst__DOT__cin)) 
                                         << 3U) | (
                                                   ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__46__KET____DOT__fa_inst__DOT__x1) 
                                                    ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__46__KET____DOT__fa_inst__DOT__cin)) 
                                                   << 2U)) 
                                       | ((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__45__KET____DOT__fa_inst__DOT__x1) 
                                            ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__45__KET____DOT__fa_inst__DOT__cin)) 
                                           << 1U) | 
                                          ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__44__KET____DOT__fa_inst__DOT__x1) 
                                           ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__44__KET____DOT__fa_inst__DOT__cin)))) 
                                      << 0x0000000cU) 
                                     | ((((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__43__KET____DOT__fa_inst__DOT__x1) 
                                            ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__43__KET____DOT__fa_inst__DOT__cin)) 
                                           << 3U) | 
                                          (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__42__KET____DOT__fa_inst__DOT__x1) 
                                            ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__42__KET____DOT__fa_inst__DOT__cin)) 
                                           << 2U)) 
                                         | ((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__41__KET____DOT__fa_inst__DOT__x1) 
                                              ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__41__KET____DOT__fa_inst__DOT__cin)) 
                                             << 1U) 
                                            | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__40__KET____DOT__fa_inst__DOT__x1) 
                                               ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__40__KET____DOT__fa_inst__DOT__cin)))) 
                                        << 8U)) | (
                                                   ((((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__39__KET____DOT__fa_inst__DOT__x1) 
                                                        ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__39__KET____DOT__fa_inst__DOT__cin)) 
                                                       << 3U) 
                                                      | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__38__KET____DOT__fa_inst__DOT__x1) 
                                                          ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__38__KET____DOT__fa_inst__DOT__cin)) 
                                                         << 2U)) 
                                                     | ((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__37__KET____DOT__fa_inst__DOT__x1) 
                                                          ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__37__KET____DOT__fa_inst__DOT__cin)) 
                                                         << 1U) 
                                                        | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__36__KET____DOT__fa_inst__DOT__x1) 
                                                           ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__36__KET____DOT__fa_inst__DOT__cin)))) 
                                                    << 4U) 
                                                   | (((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__35__KET____DOT__fa_inst__DOT__x1) 
                                                         ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__35__KET____DOT__fa_inst__DOT__cin)) 
                                                        << 3U) 
                                                       | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__34__KET____DOT__fa_inst__DOT__x1) 
                                                           ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__34__KET____DOT__fa_inst__DOT__cin)) 
                                                          << 2U)) 
                                                      | ((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__33__KET____DOT__fa_inst__DOT__x1) 
                                                           ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__33__KET____DOT__fa_inst__DOT__cin)) 
                                                          << 1U) 
                                                         | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__32__KET____DOT__fa_inst__DOT__x1) 
                                                            ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__32__KET____DOT__fa_inst__DOT__cin))))))))) 
                << 0x00000020U) | (QData)((IData)((
                                                   (((((((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__31__KET____DOT__fa_inst__DOT__x1) 
                                                           ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__31__KET____DOT__fa_inst__DOT__cin)) 
                                                          << 3U) 
                                                         | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__30__KET____DOT__fa_inst__DOT__x1) 
                                                             ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__30__KET____DOT__fa_inst__DOT__cin)) 
                                                            << 2U)) 
                                                        | ((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__29__KET____DOT__fa_inst__DOT__x1) 
                                                             ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__29__KET____DOT__fa_inst__DOT__cin)) 
                                                            << 1U) 
                                                           | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__28__KET____DOT__fa_inst__DOT__x1) 
                                                              ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__28__KET____DOT__fa_inst__DOT__cin)))) 
                                                       << 0x0000000cU) 
                                                      | ((((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__27__KET____DOT__fa_inst__DOT__x1) 
                                                             ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__27__KET____DOT__fa_inst__DOT__cin)) 
                                                            << 3U) 
                                                           | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__26__KET____DOT__fa_inst__DOT__x1) 
                                                               ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__26__KET____DOT__fa_inst__DOT__cin)) 
                                                              << 2U)) 
                                                          | ((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__25__KET____DOT__fa_inst__DOT__x1) 
                                                               ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__25__KET____DOT__fa_inst__DOT__cin)) 
                                                              << 1U) 
                                                             | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__24__KET____DOT__fa_inst__DOT__x1) 
                                                                ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__24__KET____DOT__fa_inst__DOT__cin)))) 
                                                         << 8U)) 
                                                     | (((((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__23__KET____DOT__fa_inst__DOT__x1) 
                                                             ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__23__KET____DOT__fa_inst__DOT__cin)) 
                                                            << 3U) 
                                                           | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__22__KET____DOT__fa_inst__DOT__x1) 
                                                               ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__22__KET____DOT__fa_inst__DOT__cin)) 
                                                              << 2U)) 
                                                          | ((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__21__KET____DOT__fa_inst__DOT__x1) 
                                                               ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__21__KET____DOT__fa_inst__DOT__cin)) 
                                                              << 1U) 
                                                             | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__20__KET____DOT__fa_inst__DOT__x1) 
                                                                ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__20__KET____DOT__fa_inst__DOT__cin)))) 
                                                         << 4U) 
                                                        | (((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__19__KET____DOT__fa_inst__DOT__x1) 
                                                              ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__19__KET____DOT__fa_inst__DOT__cin)) 
                                                             << 3U) 
                                                            | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__18__KET____DOT__fa_inst__DOT__x1) 
                                                                ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__18__KET____DOT__fa_inst__DOT__cin)) 
                                                               << 2U)) 
                                                           | ((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__17__KET____DOT__fa_inst__DOT__x1) 
                                                                ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__17__KET____DOT__fa_inst__DOT__cin)) 
                                                               << 1U) 
                                                              | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__16__KET____DOT__fa_inst__DOT__x1) 
                                                                 ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__16__KET____DOT__fa_inst__DOT__cin)))))) 
                                                    << 0x00000010U) 
                                                   | ((((((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__15__KET____DOT__fa_inst__DOT__x1) 
                                                            ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__15__KET____DOT__fa_inst__DOT__cin)) 
                                                           << 3U) 
                                                          | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__14__KET____DOT__fa_inst__DOT__x1) 
                                                              ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__14__KET____DOT__fa_inst__DOT__cin)) 
                                                             << 2U)) 
                                                         | ((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__13__KET____DOT__fa_inst__DOT__x1) 
                                                              ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__13__KET____DOT__fa_inst__DOT__cin)) 
                                                             << 1U) 
                                                            | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__12__KET____DOT__fa_inst__DOT__x1) 
                                                               ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__12__KET____DOT__fa_inst__DOT__cin)))) 
                                                        << 0x0000000cU) 
                                                       | ((((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__11__KET____DOT__fa_inst__DOT__x1) 
                                                              ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__11__KET____DOT__fa_inst__DOT__cin)) 
                                                             << 3U) 
                                                            | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__10__KET____DOT__fa_inst__DOT__x1) 
                                                                ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__10__KET____DOT__fa_inst__DOT__cin)) 
                                                               << 2U)) 
                                                           | ((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__9__KET____DOT__fa_inst__DOT__x1) 
                                                                ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__9__KET____DOT__fa_inst__DOT__cin)) 
                                                               << 1U) 
                                                              | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__8__KET____DOT__fa_inst__DOT__x1) 
                                                                 ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__8__KET____DOT__fa_inst__DOT__cin)))) 
                                                          << 8U)) 
                                                      | (((((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__7__KET____DOT__fa_inst__DOT__x1) 
                                                              ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__7__KET____DOT__fa_inst__DOT__cin)) 
                                                             << 3U) 
                                                            | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__6__KET____DOT__fa_inst__DOT__x1) 
                                                                ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__6__KET____DOT__fa_inst__DOT__cin)) 
                                                               << 2U)) 
                                                           | ((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__5__KET____DOT__fa_inst__DOT__x1) 
                                                                ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__5__KET____DOT__fa_inst__DOT__cin)) 
                                                               << 1U) 
                                                              | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__4__KET____DOT__fa_inst__DOT__x1) 
                                                                 ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__4__KET____DOT__fa_inst__DOT__cin)))) 
                                                          << 4U) 
                                                         | (((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__3__KET____DOT__fa_inst__DOT__x1) 
                                                               ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__3__KET____DOT__fa_inst__DOT__cin)) 
                                                              << 3U) 
                                                             | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__2__KET____DOT__fa_inst__DOT__x1) 
                                                                 ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__2__KET____DOT__fa_inst__DOT__cin)) 
                                                                << 2U)) 
                                                            | ((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__1__KET____DOT__fa_inst__DOT__x1) 
                                                                 ^ (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__rca_gen__BRA__1__KET____DOT__fa_inst__DOT__cin)) 
                                                                << 1U) 
                                                               | (1U 
                                                                  & ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_pc) 
                                                                     ^ (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_immediate))))))))))));
    vlSelfRef.soc_top__DOT__u_core__DOT__take_trap 
        = ((~ ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_branch_taken) 
               | ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_is_mret) 
                  | (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__id_ex_stall)))) 
           & ((IData)(vlSelfRef.soc_top__DOT__timer_interrupt) 
              & ((IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__mie 
                          >> 7U)) & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__mstatus 
                                             >> 3U)))));
    vlSelfRef.soc_top__DOT__u_core__DOT____Vcellinp__u_if_id__flush 
        = ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_branch_taken) 
           | ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__take_trap) 
              | (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_is_mret)));
    vlSelfRef.soc_top__DOT__u_core__DOT____Vcellinp__u_id_ex__flush 
        = ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__id_ex_flush_ext) 
           | (IData)(vlSelfRef.soc_top__DOT__u_core__DOT____Vcellinp__u_if_id__flush));
}

void Vsoc_top_rca_64b___nba_sequent__TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst__0(Vsoc_top_rca_64b* vlSelf);
void Vsoc_top_rca_64b___nba_sequent__TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst__0(Vsoc_top_rca_64b* vlSelf);
void Vsoc_top_rca_64b___nba_sequent__TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst__0(Vsoc_top_rca_64b* vlSelf);

void Vsoc_top___024root___eval_nba(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___eval_nba\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsoc_top___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.__Vdly__soc_top__DOT__u_vga__DOT__u_timing__DOT__h_count 
            = vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__h_count;
        vlSelfRef.__Vdly__soc_top__DOT__u_vga__DOT__u_timing__DOT__v_count 
            = vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__v_count;
        if (vlSelfRef.rst) {
            vlSelfRef.__Vdly__soc_top__DOT__u_vga__DOT__u_timing__DOT__h_count = 0U;
            vlSelfRef.__Vdly__soc_top__DOT__u_vga__DOT__u_timing__DOT__v_count = 0U;
        } else if ((0x031fU == (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__h_count))) {
            vlSelfRef.__Vdly__soc_top__DOT__u_vga__DOT__u_timing__DOT__v_count 
                = ((0x020cU == (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__v_count))
                    ? 0U : (0x000003ffU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__v_count))));
            vlSelfRef.__Vdly__soc_top__DOT__u_vga__DOT__u_timing__DOT__h_count = 0U;
        } else {
            vlSelfRef.__Vdly__soc_top__DOT__u_vga__DOT__u_timing__DOT__h_count 
                = (0x000003ffU & ((IData)(1U) + (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__h_count)));
        }
        vlSelfRef.soc_top__DOT__u_vga__DOT__h_sync_d 
            = ((IData)(vlSelfRef.rst) || (1U & (~ (
                                                   (0x0290U 
                                                    <= (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__h_count)) 
                                                   & (0x02f0U 
                                                      > (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__h_count))))));
        vlSelfRef.soc_top__DOT__u_vga__DOT__v_sync_d 
            = ((IData)(vlSelfRef.rst) || (1U & (~ (
                                                   (0x01eaU 
                                                    <= (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__v_count)) 
                                                   & (0x01ecU 
                                                      > (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__v_count))))));
        vlSelfRef.soc_top__DOT__u_vga__DOT__in_window_d 
            = ((1U & (~ (IData)(vlSelfRef.rst))) && (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__in_window));
        vlSelfRef.soc_top__DOT__u_vga__DOT__video_active_d 
            = ((1U & (~ (IData)(vlSelfRef.rst))) && 
               ((0x0280U > (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__h_count)) 
                & (0x01e0U > (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__v_count))));
        vlSelfRef.vga_hsync = vlSelfRef.soc_top__DOT__u_vga__DOT__h_sync_d;
        vlSelfRef.vga_vsync = vlSelfRef.soc_top__DOT__u_vga__DOT__v_sync_d;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsoc_top___024root___nba_sequent__TOP__2(vlSelf);
        Vsoc_top_rca_64b___nba_sequent__TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst__0((&vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst));
        Vsoc_top_rca_64b___nba_sequent__TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst__0((&vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst));
        Vsoc_top___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.soc_top__DOT__u_vga__DOT__vga_pixel_data 
            = vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
            [((IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__in_window)
               ? ((0x00003f80U & (((IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__v_count) 
                                   - (IData)(0x00000070U)) 
                                  << 6U)) | (0x0000007fU 
                                             & (((IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__h_count) 
                                                 - (IData)(0x000000c0U)) 
                                                >> 1U)))
               : 0U)];
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsoc_top___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.soc_top__DOT__u_core__DOT__trap_target_pc 
            = ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_is_mret)
                ? vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__mepc_out
                : vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__mtvec_out);
        vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__csr_rdata 
            = ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_is_csr)
                ? ((0x0300U == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_funct12))
                    ? vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__mstatus
                    : ((0x0304U == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_funct12))
                        ? vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__mie
                        : ((0x0305U == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_funct12))
                            ? vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__mtvec_out
                            : ((0x0340U == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_funct12))
                                ? vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__mscratch
                                : ((0x0341U == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_funct12))
                                    ? vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__mepc_out
                                    : ((0x0342U == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_funct12))
                                        ? vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__mcause
                                        : ((0x0344U 
                                            == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_funct12))
                                            ? (QData)((IData)(
                                                              ((IData)(vlSelfRef.soc_top__DOT__timer_interrupt) 
                                                               << 7U)))
                                            : 0ULL)))))))
                : 0ULL);
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__v_count 
            = vlSelfRef.__Vdly__soc_top__DOT__u_vga__DOT__u_timing__DOT__v_count;
        vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__h_count 
            = vlSelfRef.__Vdly__soc_top__DOT__u_vga__DOT__u_timing__DOT__h_count;
        vlSelfRef.soc_top__DOT__u_vga__DOT__in_window 
            = ((0x00c0U <= (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__h_count)) 
               & ((0x01c0U > (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__h_count)) 
                  & ((0x0070U <= (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__v_count)) 
                     & (0x0170U > (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__v_count)))));
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered[0U])) {
        if (vlSelfRef.soc_top__DOT__u_vga__DOT__video_active_d) {
            if (vlSelfRef.soc_top__DOT__u_vga__DOT__in_window_d) {
                vlSelfRef.vga_r = ((0x0000000eU & ((IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__vga_pixel_data) 
                                                   >> 4U)) 
                                   | (1U & ((IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__vga_pixel_data) 
                                            >> 5U)));
                vlSelfRef.vga_g = ((0x0000000eU & ((IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__vga_pixel_data) 
                                                   >> 1U)) 
                                   | (1U & ((IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__vga_pixel_data) 
                                            >> 2U)));
                vlSelfRef.vga_b = ((0x0000000cU & ((IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__vga_pixel_data) 
                                                   << 2U)) 
                                   | (3U & (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__vga_pixel_data)));
            } else {
                vlSelfRef.vga_r = 0U;
                vlSelfRef.vga_g = 0U;
                vlSelfRef.vga_b = 0U;
            }
        } else {
            vlSelfRef.vga_r = 0U;
            vlSelfRef.vga_g = 0U;
            vlSelfRef.vga_b = 0U;
        }
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsoc_top___024root___nba_sequent__TOP__7(vlSelf);
        Vsoc_top_rca_64b___nba_sequent__TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst__0((&vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst));
        Vsoc_top___024root___nba_sequent__TOP__8(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsoc_top___024root___nba_comb__TOP__2(vlSelf);
    }
}

void Vsoc_top___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vsoc_top___024root___eval_phase__act(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___eval_phase__act\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsoc_top___024root___eval_triggers__act(vlSelf);
    Vsoc_top___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vsoc_top___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vsoc_top___024root___eval_phase__nba(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___eval_phase__nba\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vsoc_top___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vsoc_top___024root___eval_nba(vlSelf);
        Vsoc_top___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vsoc_top___024root___eval(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___eval\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vsoc_top___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("src/soc_top.v", 1, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vsoc_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("src/soc_top.v", 1, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vsoc_top___024root___eval_phase__act(vlSelf));
    } while (Vsoc_top___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vsoc_top___024root___eval_debug_assertions(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___eval_debug_assertions\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");
    }
    if (VL_UNLIKELY(((vlSelfRef.spi_miso & 0xfeU)))) {
        Verilated::overWidthError("spi_miso");
    }
}
#endif  // VL_DEBUG
