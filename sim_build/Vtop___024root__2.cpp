// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop___024root___nba_comb__TOP__12(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__12\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cout 
        = vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.cout;
    vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__result 
        = vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.sum;
    vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__carry_into_msb 
        = vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.carry_into_msb;
    vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__addsub_cout 
        = vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cout;
    vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__addsub_res 
        = vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__result;
    vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__overflow 
        = ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__carry_into_msb) 
           ^ (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cout));
    vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__cout = 0U;
    vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__carry_flag = 0U;
    vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__result = 0ULL;
    vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__addsub_overflow 
        = vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__overflow;
    if ((8U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__opcode))) {
        if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__opcode) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__opcode) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__opcode)))) {
                    vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__cout 
                        = vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__addsub_cout;
                    vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__carry_flag 
                        = vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__addsub_cout;
                }
            }
        }
        vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__result 
            = ((4U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__opcode))
                ? ((2U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__opcode))
                    ? 0ULL : ((1U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__opcode))
                               ? vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__sra_res
                               : 0ULL)) : ((2U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__opcode))
                                            ? 0ULL : 
                                           ((1U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__opcode))
                                             ? 0ULL
                                             : vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__addsub_res)));
    } else {
        if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__opcode) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__opcode) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__opcode)))) {
                    vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__cout 
                        = vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__addsub_cout;
                    vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__carry_flag 
                        = vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__addsub_cout;
                }
            }
        }
        vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__result 
            = ((4U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__opcode))
                ? ((2U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__opcode))
                    ? ((1U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__opcode))
                        ? vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__and_res
                        : vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__or_res)
                    : ((1U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__opcode))
                        ? vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__srl_res
                        : vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__xor_res))
                : ((2U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__opcode))
                    ? ((1U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__opcode))
                        ? vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__sltu_res
                        : vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__slt_res)
                    : ((1U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__opcode))
                        ? vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__sll_res
                        : vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__addsub_res)));
    }
    vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__zero_flag 
        = (0ULL == vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__result);
    vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_res 
        = vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__result;
    vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__overflow_flag = 0U;
    if ((8U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__opcode))) {
        if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__opcode) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__opcode) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__opcode)))) {
                    vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__overflow_flag 
                        = vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__addsub_overflow;
                }
            }
        }
    } else if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__opcode) 
                         >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__opcode) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__opcode)))) {
                vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__overflow_flag 
                    = vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__addsub_overflow;
            }
        }
    }
    vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__ex_alu_zero 
        = vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__zero_flag;
    vlSelfRef.soc_top__DOT__u_core__DOT__ex_alu_zero 
        = vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__ex_alu_zero;
    vlSelfRef.soc_top__DOT__u_core__DOT__u_ex_mem__DOT__ex_alu_zero 
        = vlSelfRef.soc_top__DOT__u_core__DOT__ex_alu_zero;
}

void Vtop___024root___nba_comb__TOP__13(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__13\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__id_rs1_data 
        = (((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT____VdfgRegularize_hf18c6620_0_0) 
            & ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__id_rs1) 
               == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__wb_rd)))
            ? vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__wb_write_data
            : vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__rf_read_data1);
    vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__id_rs2_data 
        = (((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT____VdfgRegularize_hf18c6620_0_0) 
            & ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__id_rs2) 
               == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__wb_rd)))
            ? vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__wb_write_data
            : vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__rf_read_data2);
    vlSelfRef.soc_top__DOT__u_core__DOT__id_rs1_data 
        = vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__id_rs1_data;
    vlSelfRef.soc_top__DOT__u_core__DOT__id_rs2_data 
        = vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__id_rs2_data;
    vlSelfRef.soc_top__DOT__u_core__DOT__u_id_ex__DOT__id_rs1_data 
        = vlSelfRef.soc_top__DOT__u_core__DOT__id_rs1_data;
    vlSelfRef.soc_top__DOT__u_core__DOT__u_id_ex__DOT__id_rs2_data 
        = vlSelfRef.soc_top__DOT__u_core__DOT__id_rs2_data;
}

void Vtop___024root___nba_comb__TOP__14(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__14\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_hazard__DOT____VdfgRegularize_h0997448a_0_0;
    soc_top__DOT__u_core__DOT__u_hazard__DOT____VdfgRegularize_h0997448a_0_0 = 0;
    // Body
    soc_top__DOT__u_core__DOT__u_hazard__DOT____VdfgRegularize_h0997448a_0_0 
        = ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_hazard__DOT__load_use_hazard) 
           | (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_hazard__DOT__multdiv_busy));
    vlSelfRef.soc_top__DOT__u_core__DOT__u_hazard__DOT__pc_stall 
        = soc_top__DOT__u_core__DOT__u_hazard__DOT____VdfgRegularize_h0997448a_0_0;
    vlSelfRef.soc_top__DOT__u_core__DOT__u_hazard__DOT__if_id_stall 
        = soc_top__DOT__u_core__DOT__u_hazard__DOT____VdfgRegularize_h0997448a_0_0;
    vlSelfRef.soc_top__DOT__u_core__DOT__pc_stall = vlSelfRef.soc_top__DOT__u_core__DOT__u_hazard__DOT__pc_stall;
    vlSelfRef.soc_top__DOT__u_core__DOT__if_id_stall 
        = vlSelfRef.soc_top__DOT__u_core__DOT__u_hazard__DOT__if_id_stall;
    vlSelfRef.soc_top__DOT__u_core__DOT__u_pc__DOT__en 
        = (1U & (~ (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__pc_stall)));
    vlSelfRef.soc_top__DOT__u_core__DOT__u_if_id__DOT__stall 
        = vlSelfRef.soc_top__DOT__u_core__DOT__if_id_stall;
}

void Vtop___024root___nba_comb__TOP__15(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__15\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__cpu_read_data 
        = ((4U & (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__cpu_funct3))
            ? ((2U & (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__cpu_funct3))
                ? ((1U & (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__cpu_funct3))
                    ? 0ULL : (((QData)((IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                               [(0x0000ffffU 
                                                 & ((IData)(3U) 
                                                    + (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__cpu_address)))])) 
                               << 0x00000018U) | (QData)((IData)(
                                                                 ((vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                                                   [
                                                                   (0x0000ffffU 
                                                                    & ((IData)(2U) 
                                                                       + (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__cpu_address)))] 
                                                                   << 0x00000010U) 
                                                                  | ((vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                                                      [
                                                                      (0x0000ffffU 
                                                                       & ((IData)(1U) 
                                                                          + (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__cpu_address)))] 
                                                                      << 8U) 
                                                                     | vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                                                     [vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__cpu_address]))))))
                : ((1U & (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__cpu_funct3))
                    ? (((QData)((IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                        [(0x0000ffffU 
                                          & ((IData)(1U) 
                                             + (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__cpu_address)))])) 
                        << 8U) | (QData)((IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                                 [vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__cpu_address])))
                    : (QData)((IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                      [vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__cpu_address]))))
            : ((2U & (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__cpu_funct3))
                ? ((1U & (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__cpu_funct3))
                    ? (((QData)((IData)((((vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                           [(0x0000ffffU 
                                             & ((IData)(7U) 
                                                + (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__cpu_address)))] 
                                           << 0x00000018U) 
                                          | (vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                             [(0x0000ffffU 
                                               & ((IData)(6U) 
                                                  + (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__cpu_address)))] 
                                             << 0x00000010U)) 
                                         | ((vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                             [(0x0000ffffU 
                                               & ((IData)(5U) 
                                                  + (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__cpu_address)))] 
                                             << 8U) 
                                            | vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                            [(0x0000ffffU 
                                              & ((IData)(4U) 
                                                 + (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__cpu_address)))])))) 
                        << 0x00000020U) | (QData)((IData)(
                                                          (((vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                                             [
                                                             (0x0000ffffU 
                                                              & ((IData)(3U) 
                                                                 + (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__cpu_address)))] 
                                                             << 0x00000018U) 
                                                            | (vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                                               [
                                                               (0x0000ffffU 
                                                                & ((IData)(2U) 
                                                                   + (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__cpu_address)))] 
                                                               << 0x00000010U)) 
                                                           | ((vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                                               [
                                                               (0x0000ffffU 
                                                                & ((IData)(1U) 
                                                                   + (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__cpu_address)))] 
                                                               << 8U) 
                                                              | vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                                              [vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__cpu_address])))))
                    : (((QData)((IData)((- (IData)(
                                                   (1U 
                                                    & (vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                                       [
                                                       (0x0000ffffU 
                                                        & ((IData)(3U) 
                                                           + (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__cpu_address)))] 
                                                       >> 7U)))))) 
                        << 0x00000020U) | (QData)((IData)(
                                                          (((vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                                             [
                                                             (0x0000ffffU 
                                                              & ((IData)(3U) 
                                                                 + (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__cpu_address)))] 
                                                             << 0x00000018U) 
                                                            | (vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                                               [
                                                               (0x0000ffffU 
                                                                & ((IData)(2U) 
                                                                   + (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__cpu_address)))] 
                                                               << 0x00000010U)) 
                                                           | ((vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                                               [
                                                               (0x0000ffffU 
                                                                & ((IData)(1U) 
                                                                   + (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__cpu_address)))] 
                                                               << 8U) 
                                                              | vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                                              [vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__cpu_address]))))))
                : ((1U & (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__cpu_funct3))
                    ? (((- (QData)((IData)((1U & (vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                                  [
                                                  (0x0000ffffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__cpu_address)))] 
                                                  >> 7U))))) 
                        << 0x00000010U) | (QData)((IData)(
                                                          ((vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                                            [
                                                            (0x0000ffffU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__cpu_address)))] 
                                                            << 8U) 
                                                           | vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                                           [vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__cpu_address]))))
                    : (((- (QData)((IData)((1U & (vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                                  [vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__cpu_address] 
                                                  >> 7U))))) 
                        << 8U) | (QData)((IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                                 [vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__cpu_address]))))));
    vlSelfRef.soc_top__DOT__u_vga__DOT__cpu_read_data 
        = vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__cpu_read_data;
    vlSelfRef.soc_top__DOT__vga_read_data = vlSelfRef.soc_top__DOT__u_vga__DOT__cpu_read_data;
    vlSelfRef.soc_top__DOT__u_bus__DOT__vga_read_data 
        = vlSelfRef.soc_top__DOT__vga_read_data;
}

void Vtop___024root___nba_comb__TOP__16(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__16\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__csr_write_data 
        = ((4U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__ex_funct3))
            ? ((2U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__ex_funct3))
                ? ((1U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__ex_funct3))
                    ? ((~ (QData)((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__ex_rs1))) 
                       & vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__csr_rdata)
                    : (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__csr_rdata 
                       | (QData)((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__ex_rs1))))
                : ((1U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__ex_funct3))
                    ? (QData)((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__ex_rs1))
                    : vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__fwd_rs1))
            : ((2U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__ex_funct3))
                ? ((1U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__ex_funct3))
                    ? ((~ vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__fwd_rs1) 
                       & vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__csr_rdata)
                    : (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__csr_rdata 
                       | vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__fwd_rs1))
                : vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__fwd_rs1));
    vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__csr_wdata 
        = vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__csr_write_data;
}

void Vtop___024root___nba_comb__TOP__17(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__17\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_result_raw 
        = ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__is_m_ext)
            ? vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__multdiv_result
            : vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_res);
    vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_result_32 
        = (((QData)((IData)((- (IData)((1U & (IData)(
                                                     (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_result_raw 
                                                      >> 0x0000001fU))))))) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_result_raw)));
    vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_result_mux 
        = ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__ex_is_32bit)
            ? vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_result_32
            : vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_result_raw);
}

void Vtop___024root___nba_comb__TOP__18(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__18\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__u_bus__DOT__dmem_read_data_in = 0ULL;
    if ((0x0000000000800000ULL > vlSelfRef.soc_top__DOT__u_bus__DOT__dmem_address)) {
        vlSelfRef.soc_top__DOT__u_bus__DOT__dmem_read_data_in 
            = vlSelfRef.soc_top__DOT__u_bus__DOT__ram_read_data;
    } else if (((0x0000000001000000ULL <= vlSelfRef.soc_top__DOT__u_bus__DOT__dmem_address) 
                & (0x0000000001100000ULL > vlSelfRef.soc_top__DOT__u_bus__DOT__dmem_address))) {
        vlSelfRef.soc_top__DOT__u_bus__DOT__dmem_read_data_in 
            = vlSelfRef.soc_top__DOT__u_bus__DOT__vga_read_data;
    } else if (((0x0000000010000000ULL <= vlSelfRef.soc_top__DOT__u_bus__DOT__dmem_address) 
                & (0x0000000010000100ULL > vlSelfRef.soc_top__DOT__u_bus__DOT__dmem_address))) {
        vlSelfRef.soc_top__DOT__u_bus__DOT__dmem_read_data_in 
            = vlSelfRef.soc_top__DOT__u_bus__DOT__spi_read_data;
    } else if (((0x0000000010010000ULL <= vlSelfRef.soc_top__DOT__u_bus__DOT__dmem_address) 
                & (0x0000000010010100ULL > vlSelfRef.soc_top__DOT__u_bus__DOT__dmem_address))) {
        vlSelfRef.soc_top__DOT__u_bus__DOT__dmem_read_data_in 
            = vlSelfRef.soc_top__DOT__u_bus__DOT__clint_read_data;
    } else if (((0x0000000010020000ULL <= vlSelfRef.soc_top__DOT__u_bus__DOT__dmem_address) 
                & (0x0000000010020100ULL > vlSelfRef.soc_top__DOT__u_bus__DOT__dmem_address))) {
        vlSelfRef.soc_top__DOT__u_bus__DOT__dmem_read_data_in 
            = vlSelfRef.soc_top__DOT__u_bus__DOT__io_read_data;
    }
    vlSelfRef.soc_top__DOT__dmem_read_data_in = vlSelfRef.soc_top__DOT__u_bus__DOT__dmem_read_data_in;
    vlSelfRef.soc_top__DOT__u_core__DOT__dmem_read_data_in 
        = vlSelfRef.soc_top__DOT__dmem_read_data_in;
    vlSelfRef.soc_top__DOT__u_core__DOT__u_mem__DOT__dmem_read_data_in 
        = vlSelfRef.soc_top__DOT__u_core__DOT__dmem_read_data_in;
    vlSelfRef.soc_top__DOT__u_core__DOT__u_mem__DOT__mem_read_data 
        = vlSelfRef.soc_top__DOT__u_core__DOT__u_mem__DOT__dmem_read_data_in;
    vlSelfRef.soc_top__DOT__u_core__DOT__mem_read_data 
        = vlSelfRef.soc_top__DOT__u_core__DOT__u_mem__DOT__mem_read_data;
    vlSelfRef.soc_top__DOT__u_core__DOT__u_mem_wb__DOT__mem_read_data 
        = vlSelfRef.soc_top__DOT__u_core__DOT__mem_read_data;
}

void Vtop___024root___nba_comb__TOP__19(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__19\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__ex_alu_result 
        = ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__ex_is_csr)
            ? vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__csr_rdata
            : vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_result_mux);
    vlSelfRef.soc_top__DOT__u_core__DOT__ex_alu_result 
        = vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__ex_alu_result;
    vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__ex_branch_target 
        = ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__is_jalr)
            ? (0xfffffffffffffffeULL & vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__ex_alu_result)
            : vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__bta_result);
    vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__branch_cond 
        = (1U & ((4U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__ex_funct3))
                  ? ((2U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__ex_funct3))
                      ? ((1U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__ex_funct3))
                          ? ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__ex_alu_zero) 
                             | (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                >= vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__fwd_rs2))
                          : ((~ (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__ex_alu_zero)) 
                             & (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                < vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__fwd_rs2)))
                      : ((1U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__ex_funct3))
                          ? ((~ (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__ex_alu_result 
                                         >> 0x0000003fU))) 
                             | (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__ex_alu_zero))
                          : (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__ex_alu_result 
                                     >> 0x0000003fU))))
                  : ((~ ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__ex_funct3) 
                         >> 1U)) & ((1U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__ex_funct3))
                                     ? (~ (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__ex_alu_zero))
                                     : (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__ex_alu_zero)))));
    vlSelfRef.soc_top__DOT__u_core__DOT__u_ex_mem__DOT__ex_alu_result 
        = vlSelfRef.soc_top__DOT__u_core__DOT__ex_alu_result;
    vlSelfRef.soc_top__DOT__u_core__DOT__ex_branch_target 
        = vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__ex_branch_target;
    vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__ex_branch_taken 
        = (((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__branch_cond) 
            & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__ex_Branch)) 
           | (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__ex_Jump));
    vlSelfRef.soc_top__DOT__u_core__DOT__u_ex_mem__DOT__ex_branch_target 
        = vlSelfRef.soc_top__DOT__u_core__DOT__ex_branch_target;
    vlSelfRef.soc_top__DOT__u_core__DOT__ex_branch_taken 
        = vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__ex_branch_taken;
    vlSelfRef.soc_top__DOT__u_core__DOT__take_trap 
        = ((~ ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_branch_taken) 
               | ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_is_mret) 
                  | (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_mem_flush)))) 
           & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__trap_pending));
    vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__take_trap 
        = vlSelfRef.soc_top__DOT__u_core__DOT__take_trap;
    vlSelfRef.soc_top__DOT__u_core__DOT__trap_flush 
        = ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_is_mret) 
           | (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__take_trap));
    vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__take_trap 
        = vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__take_trap;
    vlSelfRef.soc_top__DOT__u_core__DOT____VdfgRegularize_h19c8320d_0_0 
        = ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_branch_taken) 
           | (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__trap_flush));
    vlSelfRef.soc_top__DOT__u_core__DOT__u_if_id__DOT__flush 
        = ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__if_id_flush_ext) 
           | (IData)(vlSelfRef.soc_top__DOT__u_core__DOT____VdfgRegularize_h19c8320d_0_0));
}

void Vtop___024root___nba_comb__TOP__20(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__20\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__u_core__DOT__pc_next = 
        ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__take_trap)
          ? vlSelfRef.soc_top__DOT__u_core__DOT__trap_target_pc
          : ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_is_mret)
              ? vlSelfRef.soc_top__DOT__u_core__DOT__trap_target_pc
              : ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_branch_taken)
                  ? vlSelfRef.soc_top__DOT__u_core__DOT__ex_branch_target
                  : vlSelfRef.soc_top__DOT__u_core__DOT__if_pc4)));
    vlSelfRef.soc_top__DOT__u_core__DOT__u_pc__DOT__pc_next 
        = vlSelfRef.soc_top__DOT__u_core__DOT__pc_next;
}

void Vtop___024root___nba_comb__TOP__21(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__21\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__u_core__DOT__u_id_ex__DOT__flush 
        = ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__id_ex_flush_ext) 
           | (IData)(vlSelfRef.soc_top__DOT__u_core__DOT____VdfgRegularize_h19c8320d_0_0));
}

void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__6(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__7(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__9(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__10(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__12(Vtop___024root* vlSelf);
void Vtop_cla_64b___ico_sequent__TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst__0(Vtop_cla_64b* vlSelf);
void Vtop_cla_64b___nba_sequent__TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst__0(Vtop_cla_64b* vlSelf);
void Vtop_cla_64b___nba_sequent__TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst__0(Vtop_cla_64b* vlSelf);
void Vtop___024root___nba_comb__TOP__2(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__11(Vtop___024root* vlSelf);
void Vtop_cla_64b___nba_comb__TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst__0(Vtop_cla_64b* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*9:0*/ __Vinline__nba_sequent__TOP__1___Vdly__soc_top__DOT__u_vga__DOT__u_timing__DOT__h_count;
    __Vinline__nba_sequent__TOP__1___Vdly__soc_top__DOT__u_vga__DOT__u_timing__DOT__h_count = 0;
    SData/*9:0*/ __Vinline__nba_sequent__TOP__1___Vdly__soc_top__DOT__u_vga__DOT__u_timing__DOT__v_count;
    __Vinline__nba_sequent__TOP__1___Vdly__soc_top__DOT__u_vga__DOT__u_timing__DOT__v_count = 0;
    CData/*1:0*/ __Vinline__nba_sequent__TOP__3___Vdly__soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__state;
    __Vinline__nba_sequent__TOP__3___Vdly__soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__state = 0;
    QData/*63:0*/ __Vinline__nba_sequent__TOP__4___Vdly__soc_top__DOT__u_clint__DOT__mtime;
    __Vinline__nba_sequent__TOP__4___Vdly__soc_top__DOT__u_clint__DOT__mtime = 0;
    CData/*4:0*/ __Vinline__nba_sequent__TOP__11___VdlyDim0__soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers__v0;
    __Vinline__nba_sequent__TOP__11___VdlyDim0__soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers__v0 = 0;
    QData/*63:0*/ __Vinline__nba_sequent__TOP__11___VdlyVal__soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers__v1;
    __Vinline__nba_sequent__TOP__11___VdlyVal__soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers__v1 = 0;
    CData/*4:0*/ __Vinline__nba_sequent__TOP__11___VdlyDim0__soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers__v1;
    __Vinline__nba_sequent__TOP__11___VdlyDim0__soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers__v1 = 0;
    CData/*0:0*/ __Vinline__nba_comb__TOP__14_soc_top__DOT__u_core__DOT__u_hazard__DOT____VdfgRegularize_h0997448a_0_0;
    __Vinline__nba_comb__TOP__14_soc_top__DOT__u_core__DOT__u_hazard__DOT____VdfgRegularize_h0997448a_0_0 = 0;
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        if (vlSelfRef.soc_top__DOT__rst) {
            vlSelfRef.soc_top__DOT__clk_div = 0U;
            vlSelfRef.soc_top__DOT__led_reg = 0U;
        } else {
            vlSelfRef.soc_top__DOT__clk_div = (3U & 
                                               ((IData)(1U) 
                                                + (IData)(vlSelfRef.soc_top__DOT__clk_div)));
            if (((IData)(vlSelfRef.soc_top__DOT__io_write_req) 
                 & (4U == (IData)(vlSelfRef.soc_top__DOT__io_address)))) {
                vlSelfRef.soc_top__DOT__led_reg = (0x000000ffU 
                                                   & (IData)(vlSelfRef.soc_top__DOT__io_write_data));
            }
        }
        vlSelfRef.soc_top__DOT__clk_25mhz = (1U & ((IData)(vlSelfRef.soc_top__DOT__clk_div) 
                                                   >> 1U));
        vlSelfRef.soc_top__DOT__leds = vlSelfRef.soc_top__DOT__led_reg;
        vlSelfRef.soc_top__DOT__u_vga__DOT__clk_25mhz 
            = vlSelfRef.soc_top__DOT__clk_25mhz;
        vlSelfRef.leds = vlSelfRef.soc_top__DOT__leds;
        vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__clk_25mhz 
            = vlSelfRef.soc_top__DOT__u_vga__DOT__clk_25mhz;
        vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__clk_vga 
            = vlSelfRef.soc_top__DOT__u_vga__DOT__clk_25mhz;
    }
    if ((0x0000000000600000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        __Vinline__nba_sequent__TOP__1___Vdly__soc_top__DOT__u_vga__DOT__u_timing__DOT__h_count 
            = vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__h_count;
        __Vinline__nba_sequent__TOP__1___Vdly__soc_top__DOT__u_vga__DOT__u_timing__DOT__v_count 
            = vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__v_count;
        if (vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__rst) {
            __Vinline__nba_sequent__TOP__1___Vdly__soc_top__DOT__u_vga__DOT__u_timing__DOT__h_count = 0U;
            __Vinline__nba_sequent__TOP__1___Vdly__soc_top__DOT__u_vga__DOT__u_timing__DOT__v_count = 0U;
        } else if ((0x031fU == (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__h_count))) {
            __Vinline__nba_sequent__TOP__1___Vdly__soc_top__DOT__u_vga__DOT__u_timing__DOT__v_count 
                = ((0x020cU == (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__v_count))
                    ? 0U : (0x000003ffU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__v_count))));
            __Vinline__nba_sequent__TOP__1___Vdly__soc_top__DOT__u_vga__DOT__u_timing__DOT__h_count = 0U;
        } else {
            __Vinline__nba_sequent__TOP__1___Vdly__soc_top__DOT__u_vga__DOT__u_timing__DOT__h_count 
                = (0x000003ffU & ((IData)(1U) + (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__h_count)));
        }
        vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__h_count 
            = __Vinline__nba_sequent__TOP__1___Vdly__soc_top__DOT__u_vga__DOT__u_timing__DOT__h_count;
        vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__v_count 
            = __Vinline__nba_sequent__TOP__1___Vdly__soc_top__DOT__u_vga__DOT__u_timing__DOT__v_count;
        vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__h_sync 
            = (1U & (~ ((0x0290U <= (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__h_count)) 
                        & (0x02f0U > (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__h_count)))));
        vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__pixel_x 
            = vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__h_count;
        vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__v_sync 
            = (1U & (~ ((0x01eaU <= (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__v_count)) 
                        & (0x01ecU > (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__v_count)))));
        vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__video_active 
            = ((0x0280U > (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__h_count)) 
               & (0x01e0U > (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__v_count)));
        vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__pixel_y 
            = vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__v_count;
        vlSelfRef.soc_top__DOT__u_vga__DOT__pixel_x 
            = vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__pixel_x;
        vlSelfRef.soc_top__DOT__u_vga__DOT__pixel_y 
            = vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__pixel_y;
        vlSelfRef.soc_top__DOT__u_vga__DOT__fb_x = 
            (0x000001ffU & ((IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__pixel_x) 
                            >> 1U));
        vlSelfRef.soc_top__DOT__u_vga__DOT__fb_y = 
            (0x000000ffU & (((IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__pixel_y) 
                             - (IData)(0x00000028U)) 
                            >> 1U));
    }
    if ((0x0000000000040000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x0000000000000600ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        __Vinline__nba_sequent__TOP__3___Vdly__soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__state 
            = vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__state;
        if (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__rst) {
            __Vinline__nba_sequent__TOP__3___Vdly__soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__state = 0U;
            vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__result = 0ULL;
        } else if ((2U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__state))) {
            __Vinline__nba_sequent__TOP__3___Vdly__soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__state 
                = ((1U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__state))
                    ? 0U : 3U);
        } else if ((1U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__state))) {
            __Vinline__nba_sequent__TOP__3___Vdly__soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__state = 2U;
        } else if (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__is_m_ext) {
            __Vinline__nba_sequent__TOP__3___Vdly__soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__state = 1U;
            vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__result 
                = ((4U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__funct3))
                    ? ((2U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__funct3))
                        ? ((1U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__funct3))
                            ? ((0ULL == vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__b)
                                ? vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__a
                                : VL_MODDIV_QQQ(64, vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__a, vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__b))
                            : ((0ULL == vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__b)
                                ? vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__a_signed
                                : VL_MODDIVS_QQQ(64, vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__a_signed, vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__b_signed)))
                        : ((1U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__funct3))
                            ? ((0ULL == vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__b)
                                ? 0xffffffffffffffffULL
                                : VL_DIV_QQQ(64, vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__a, vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__b))
                            : ((0ULL == vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__b)
                                ? 0xffffffffffffffffULL
                                : VL_DIVS_QQQ(64, vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__a_signed, vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__b_signed))))
                    : ((2U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__funct3))
                        ? ((1U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__funct3))
                            ? (((QData)((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__mul_unsigned[3U])) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__mul_unsigned[2U])))
                            : (((QData)((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__mul_su[3U])) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__mul_su[2U]))))
                        : ((1U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__funct3))
                            ? (((QData)((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__mul_signed[3U])) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__mul_signed[2U])))
                            : (((QData)((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__mul_signed[1U])) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__mul_signed[0U]))))));
        }
        vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__state 
            = __Vinline__nba_sequent__TOP__3___Vdly__soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__state;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__multdiv_result 
            = vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__result;
    }
    if ((0x0000000000020000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        __Vinline__nba_sequent__TOP__4___Vdly__soc_top__DOT__u_clint__DOT__mtime 
            = vlSelfRef.soc_top__DOT__u_clint__DOT__mtime;
        if (vlSelfRef.soc_top__DOT__u_clint__DOT__rst) {
            __Vinline__nba_sequent__TOP__4___Vdly__soc_top__DOT__u_clint__DOT__mtime = 0ULL;
            vlSelfRef.soc_top__DOT__u_clint__DOT__mtimecmp = 0xffffffffffffffffULL;
        } else {
            __Vinline__nba_sequent__TOP__4___Vdly__soc_top__DOT__u_clint__DOT__mtime 
                = (1ULL + vlSelfRef.soc_top__DOT__u_clint__DOT__mtime);
            if (vlSelfRef.soc_top__DOT__u_clint__DOT__clint_write_req) {
                if ((8U == (IData)(vlSelfRef.soc_top__DOT__u_clint__DOT__clint_address))) {
                    __Vinline__nba_sequent__TOP__4___Vdly__soc_top__DOT__u_clint__DOT__mtime 
                        = vlSelfRef.soc_top__DOT__u_clint__DOT__clint_write_data;
                }
                if ((0U == (IData)(vlSelfRef.soc_top__DOT__u_clint__DOT__clint_address))) {
                    vlSelfRef.soc_top__DOT__u_clint__DOT__mtimecmp 
                        = vlSelfRef.soc_top__DOT__u_clint__DOT__clint_write_data;
                }
            }
        }
        vlSelfRef.soc_top__DOT__u_clint__DOT__mtime 
            = __Vinline__nba_sequent__TOP__4___Vdly__soc_top__DOT__u_clint__DOT__mtime;
        vlSelfRef.soc_top__DOT__u_clint__DOT__timer_interrupt 
            = (vlSelfRef.soc_top__DOT__u_clint__DOT__mtime 
               >= vlSelfRef.soc_top__DOT__u_clint__DOT__mtimecmp);
        vlSelfRef.soc_top__DOT__timer_interrupt = vlSelfRef.soc_top__DOT__u_clint__DOT__timer_interrupt;
        vlSelfRef.soc_top__DOT__u_core__DOT__timer_interrupt 
            = vlSelfRef.soc_top__DOT__timer_interrupt;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__timer_interrupt 
            = vlSelfRef.soc_top__DOT__u_core__DOT__timer_interrupt;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__timer_interrupt 
            = vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__timer_interrupt;
    }
    if ((0x0000000000000800ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((0x0000000000800000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__6(vlSelf);
    }
    if ((0x0000000000010000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__7(vlSelf);
    }
    if ((0x0000000000180000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.soc_top__DOT__u_vga__DOT__h_sync_d 
            = ((IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__rst) 
               || (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__h_sync_raw));
        vlSelfRef.soc_top__DOT__u_vga__DOT__v_sync_d 
            = ((IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__rst) 
               || (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__v_sync_raw));
        vlSelfRef.soc_top__DOT__u_vga__DOT__video_active_d 
            = ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__rst))) 
               && (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__video_active));
        vlSelfRef.soc_top__DOT__u_vga__DOT__in_window_d 
            = ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__rst))) 
               && (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__in_window));
        vlSelfRef.soc_top__DOT__u_vga__DOT__vga_hsync 
            = vlSelfRef.soc_top__DOT__u_vga__DOT__h_sync_d;
        vlSelfRef.soc_top__DOT__u_vga__DOT__vga_vsync 
            = vlSelfRef.soc_top__DOT__u_vga__DOT__v_sync_d;
        vlSelfRef.soc_top__DOT__vga_hsync = vlSelfRef.soc_top__DOT__u_vga__DOT__vga_hsync;
        vlSelfRef.soc_top__DOT__vga_vsync = vlSelfRef.soc_top__DOT__u_vga__DOT__vga_vsync;
        vlSelfRef.vga_hsync = vlSelfRef.soc_top__DOT__vga_hsync;
        vlSelfRef.vga_vsync = vlSelfRef.soc_top__DOT__vga_vsync;
    }
    if ((0x0000000000000018ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__9(vlSelf);
    }
    if ((0x0000000000003000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__10(vlSelf);
    }
    if ((0x0000000000000060ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        if (vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__rst) {
            vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__i = 0U;
            while (VL_GTS_III(32, 0x00000020U, vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__i)) {
                __Vinline__nba_sequent__TOP__11___VdlyDim0__soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers__v0 
                    = (0x0000001fU & vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__i);
                vlSelfRef.__VdlyCommitQueuesoc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers.enqueue(0ULL, __Vinline__nba_sequent__TOP__11___VdlyDim0__soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers__v0);
                vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__i 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__i);
            }
        } else if (((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__reg_write) 
                    & (0U != (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__rd)))) {
            __Vinline__nba_sequent__TOP__11___VdlyVal__soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers__v1 
                = vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__write_data;
            __Vinline__nba_sequent__TOP__11___VdlyDim0__soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers__v1 
                = vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__rd;
            vlSelfRef.__VdlyCommitQueuesoc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers.enqueue(__Vinline__nba_sequent__TOP__11___VdlyVal__soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers__v1, __Vinline__nba_sequent__TOP__11___VdlyDim0__soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers__v1);
        }
        vlSelfRef.__VdlyCommitQueuesoc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers.commit(vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers);
    }
    if ((0x0000000000000180ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__12(vlSelf);
        Vtop_cla_64b___ico_sequent__TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst__0((&vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst));
        Vtop_cla_64b___nba_sequent__TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst__0((&vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst));
        vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__cout 
            = vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.cout;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__branch_target 
            = vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.sum;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__carry_into_msb 
            = vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.carry_into_msb;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__bta_result 
            = vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__branch_target;
    }
    if ((0x0000000001000000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__vga_read_data 
            = vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
            [vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__vga_address];
        vlSelfRef.soc_top__DOT__u_vga__DOT__vga_pixel_data 
            = vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__vga_read_data;
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered[0U])) {
        if (vlSelfRef.soc_top__DOT__u_core__DOT__u_pc__DOT__rst) {
            vlSelfRef.soc_top__DOT__u_core__DOT__u_pc__DOT__pc_current = 0ULL;
        } else if (vlSelfRef.soc_top__DOT__u_core__DOT__u_pc__DOT__en) {
            vlSelfRef.soc_top__DOT__u_core__DOT__u_pc__DOT__pc_current 
                = vlSelfRef.soc_top__DOT__u_core__DOT__u_pc__DOT__pc_next;
        }
        vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
            = vlSelfRef.soc_top__DOT__u_core__DOT__u_pc__DOT__pc_current;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_if_id__DOT__if_pc 
            = vlSelfRef.soc_top__DOT__u_core__DOT__if_pc;
        vlSelfRef.soc_top__DOT__u_core__DOT__imem_address 
            = vlSelfRef.soc_top__DOT__u_core__DOT__if_pc;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_if__DOT__if_pc 
            = vlSelfRef.soc_top__DOT__u_core__DOT__if_pc;
        vlSelfRef.soc_top__DOT__imem_address = vlSelfRef.soc_top__DOT__u_core__DOT__imem_address;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__pc_current 
            = vlSelfRef.soc_top__DOT__u_core__DOT__u_if__DOT__if_pc;
        vlSelfRef.soc_top__DOT__u_ram__DOT__imem_address 
            = vlSelfRef.soc_top__DOT__imem_address;
        vlSelfRef.soc_top__DOT__u_ram__DOT__pc_idx 
            = (0x007fffffU & (IData)(vlSelfRef.soc_top__DOT__u_ram__DOT__imem_address));
        Vtop_cla_64b___nba_sequent__TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst__0((&vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst));
        vlSelfRef.soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__cout 
            = vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.cout;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__pc_plus_4 
            = vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.sum;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__carry_into_msb 
            = vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.carry_into_msb;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_if__DOT__if_pc4 
            = vlSelfRef.soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__pc_plus_4;
        vlSelfRef.soc_top__DOT__u_core__DOT__if_pc4 
            = vlSelfRef.soc_top__DOT__u_core__DOT__u_if__DOT__if_pc4;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_if_id__DOT__if_pc4 
            = vlSelfRef.soc_top__DOT__u_core__DOT__if_pc4;
    }
    if ((0x000000000000c000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        if (vlSelfRef.soc_top__DOT__u_core__DOT__u_mem_wb__DOT__rst) {
            vlSelfRef.soc_top__DOT__u_core__DOT__u_mem_wb__DOT__wb_MemToReg = 0U;
            vlSelfRef.soc_top__DOT__u_core__DOT__u_mem_wb__DOT__wb_read_data = 0ULL;
            vlSelfRef.soc_top__DOT__u_core__DOT__u_mem_wb__DOT__wb_alu_result = 0ULL;
            vlSelfRef.soc_top__DOT__u_core__DOT__u_mem_wb__DOT__wb_pc4 = 0ULL;
            vlSelfRef.soc_top__DOT__u_core__DOT__u_mem_wb__DOT__wb_rd = 0U;
        } else {
            vlSelfRef.soc_top__DOT__u_core__DOT__u_mem_wb__DOT__wb_MemToReg 
                = vlSelfRef.soc_top__DOT__u_core__DOT__u_mem_wb__DOT__mem_MemToReg;
            vlSelfRef.soc_top__DOT__u_core__DOT__u_mem_wb__DOT__wb_read_data 
                = vlSelfRef.soc_top__DOT__u_core__DOT__u_mem_wb__DOT__mem_read_data;
            vlSelfRef.soc_top__DOT__u_core__DOT__u_mem_wb__DOT__wb_alu_result 
                = vlSelfRef.soc_top__DOT__u_core__DOT__u_mem_wb__DOT__mem_alu_result;
            vlSelfRef.soc_top__DOT__u_core__DOT__u_mem_wb__DOT__wb_pc4 
                = vlSelfRef.soc_top__DOT__u_core__DOT__u_mem_wb__DOT__mem_pc4;
            vlSelfRef.soc_top__DOT__u_core__DOT__u_mem_wb__DOT__wb_rd 
                = vlSelfRef.soc_top__DOT__u_core__DOT__u_mem_wb__DOT__mem_rd;
        }
        vlSelfRef.soc_top__DOT__u_core__DOT__u_mem_wb__DOT__wb_RegWrite 
            = ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_mem_wb__DOT__rst))) 
               && (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_mem_wb__DOT__mem_RegWrite));
        vlSelfRef.soc_top__DOT__u_core__DOT__wb_MemToReg 
            = vlSelfRef.soc_top__DOT__u_core__DOT__u_mem_wb__DOT__wb_MemToReg;
        vlSelfRef.soc_top__DOT__u_core__DOT__wb_read_data 
            = vlSelfRef.soc_top__DOT__u_core__DOT__u_mem_wb__DOT__wb_read_data;
        vlSelfRef.soc_top__DOT__u_core__DOT__wb_alu_result 
            = vlSelfRef.soc_top__DOT__u_core__DOT__u_mem_wb__DOT__wb_alu_result;
        vlSelfRef.soc_top__DOT__u_core__DOT__wb_pc4 
            = vlSelfRef.soc_top__DOT__u_core__DOT__u_mem_wb__DOT__wb_pc4;
        vlSelfRef.soc_top__DOT__u_core__DOT__wb_RegWrite 
            = vlSelfRef.soc_top__DOT__u_core__DOT__u_mem_wb__DOT__wb_RegWrite;
        vlSelfRef.soc_top__DOT__u_core__DOT__wb_rd 
            = vlSelfRef.soc_top__DOT__u_core__DOT__u_mem_wb__DOT__wb_rd;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_wb__DOT__wb_MemToReg 
            = vlSelfRef.soc_top__DOT__u_core__DOT__wb_MemToReg;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_wb__DOT__wb_read_data 
            = vlSelfRef.soc_top__DOT__u_core__DOT__wb_read_data;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_wb__DOT__wb_alu_result 
            = vlSelfRef.soc_top__DOT__u_core__DOT__wb_alu_result;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_wb__DOT__wb_pc4 
            = vlSelfRef.soc_top__DOT__u_core__DOT__wb_pc4;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__wb_RegWrite 
            = vlSelfRef.soc_top__DOT__u_core__DOT__wb_RegWrite;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_forwarding__DOT__wb_RegWrite 
            = vlSelfRef.soc_top__DOT__u_core__DOT__wb_RegWrite;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__wb_rd 
            = vlSelfRef.soc_top__DOT__u_core__DOT__wb_rd;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_forwarding__DOT__wb_rd 
            = vlSelfRef.soc_top__DOT__u_core__DOT__wb_rd;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_wb__DOT__wb_write_data 
            = ((1U == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_wb__DOT__wb_MemToReg))
                ? vlSelfRef.soc_top__DOT__u_core__DOT__u_wb__DOT__wb_read_data
                : ((2U == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_wb__DOT__wb_MemToReg))
                    ? vlSelfRef.soc_top__DOT__u_core__DOT__u_wb__DOT__wb_pc4
                    : vlSelfRef.soc_top__DOT__u_core__DOT__u_wb__DOT__wb_alu_result));
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__reg_write 
            = vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__wb_RegWrite;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__rd 
            = vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__wb_rd;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT____VdfgRegularize_hf18c6620_0_0 
            = ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__wb_RegWrite) 
               & (0U != (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__wb_rd)));
        vlSelfRef.soc_top__DOT__u_core__DOT__wb_write_data 
            = vlSelfRef.soc_top__DOT__u_core__DOT__u_wb__DOT__wb_write_data;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__wb_write_data 
            = vlSelfRef.soc_top__DOT__u_core__DOT__wb_write_data;
        vlSelfRef.soc_top__DOT__u_core__DOT__forward_wb_data 
            = vlSelfRef.soc_top__DOT__u_core__DOT__wb_write_data;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__write_data 
            = vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__wb_write_data;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__forward_wb_data 
            = vlSelfRef.soc_top__DOT__u_core__DOT__forward_wb_data;
    }
    if ((0x0000000000020800ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.soc_top__DOT__u_core__DOT__trap_pending 
            = ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__timer_interrupt) 
               & ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mie_mtie) 
                  & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mstatus_mie)));
    }
    if ((0x0000000000600000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.soc_top__DOT__u_vga__DOT__h_sync_raw 
            = vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__h_sync;
        vlSelfRef.soc_top__DOT__u_vga__DOT__v_sync_raw 
            = vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__v_sync;
        vlSelfRef.soc_top__DOT__u_vga__DOT__video_active 
            = vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__video_active;
        vlSelfRef.soc_top__DOT__u_vga__DOT__in_window 
            = ((0x0280U > (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__pixel_x)) 
               & ((0x0028U <= (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__pixel_y)) 
                  & (0x01b8U > (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__pixel_y))));
        vlSelfRef.soc_top__DOT__u_vga__DOT__vga_ram_addr 
            = ((IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__in_window)
                ? (0x0000ffffU & (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__fb_y), 8U) 
                                  + (VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__fb_y), 6U) 
                                     + (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__fb_x))))
                : 0U);
        vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__vga_address 
            = vlSelfRef.soc_top__DOT__u_vga__DOT__vga_ram_addr;
    }
    if ((0x0000000000023000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.soc_top__DOT__u_clint__DOT__clint_read_data 
            = ((IData)(vlSelfRef.soc_top__DOT__u_clint__DOT__clint_read_req)
                ? ((0U == (IData)(vlSelfRef.soc_top__DOT__u_clint__DOT__clint_address))
                    ? vlSelfRef.soc_top__DOT__u_clint__DOT__mtimecmp
                    : ((8U == (IData)(vlSelfRef.soc_top__DOT__u_clint__DOT__clint_address))
                        ? vlSelfRef.soc_top__DOT__u_clint__DOT__mtime
                        : 0ULL)) : 0ULL);
        vlSelfRef.soc_top__DOT__clint_read_data = vlSelfRef.soc_top__DOT__u_clint__DOT__clint_read_data;
        vlSelfRef.soc_top__DOT__u_bus__DOT__clint_read_data 
            = vlSelfRef.soc_top__DOT__clint_read_data;
    }
    if ((0x0000000000013000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((0x0000000000043000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.soc_top__DOT__u_spi__DOT__read_data = 0ULL;
        if (vlSelfRef.soc_top__DOT__u_spi__DOT__read_req) {
            if ((0U == (IData)(vlSelfRef.soc_top__DOT__u_spi__DOT__address))) {
                vlSelfRef.soc_top__DOT__u_spi__DOT__read_data 
                    = (QData)((IData)(vlSelfRef.soc_top__DOT__u_spi__DOT__rx_data));
            } else if ((8U == (IData)(vlSelfRef.soc_top__DOT__u_spi__DOT__address))) {
                vlSelfRef.soc_top__DOT__u_spi__DOT__read_data 
                    = (((QData)((IData)(vlSelfRef.soc_top__DOT__u_spi__DOT__clk_div)) 
                        << 8U) | (QData)((IData)((((IData)(vlSelfRef.soc_top__DOT__u_spi__DOT__busy) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.soc_top__DOT__u_spi__DOT__cs_n)))));
            }
        }
        vlSelfRef.soc_top__DOT__spi_read_data = vlSelfRef.soc_top__DOT__u_spi__DOT__read_data;
        vlSelfRef.soc_top__DOT__u_bus__DOT__spi_read_data 
            = vlSelfRef.soc_top__DOT__spi_read_data;
    }
    if ((0x0000000000000078ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__read_data1 
            = vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers
            [vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__rs1];
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__read_data2 
            = vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers
            [vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__rs2];
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__rf_read_data1 
            = vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__read_data1;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__zero_flag 
            = (vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__read_data1 
               == vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__read_data2);
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__rf_read_data2 
            = vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__read_data2;
    }
    if ((0x0000000000000018ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id_ex__DOT__id_MemToReg 
            = vlSelfRef.soc_top__DOT__u_core__DOT__id_MemToReg;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id_ex__DOT__id_MemWrite 
            = vlSelfRef.soc_top__DOT__u_core__DOT__id_MemWrite;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id_ex__DOT__id_RegWrite 
            = vlSelfRef.soc_top__DOT__u_core__DOT__id_RegWrite;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id_ex__DOT__id_pc4 
            = vlSelfRef.soc_top__DOT__u_core__DOT__id_pc4_out;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id_ex__DOT__id_MemRead 
            = vlSelfRef.soc_top__DOT__u_core__DOT__id_MemRead;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id_ex__DOT__id_Branch 
            = vlSelfRef.soc_top__DOT__u_core__DOT__id_Branch;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id_ex__DOT__id_is_mret 
            = vlSelfRef.soc_top__DOT__u_core__DOT__id_is_mret;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id_ex__DOT__id_Jump 
            = vlSelfRef.soc_top__DOT__u_core__DOT__id_Jump;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id_ex__DOT__id_is_32bit 
            = vlSelfRef.soc_top__DOT__u_core__DOT__id_is_32bit;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id_ex__DOT__id_rd 
            = vlSelfRef.soc_top__DOT__u_core__DOT__id_rd;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id_ex__DOT__id_funct12 
            = vlSelfRef.soc_top__DOT__u_core__DOT__id_funct12;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id_ex__DOT__id_is_csr 
            = vlSelfRef.soc_top__DOT__u_core__DOT__id_is_csr;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id_ex__DOT__id_ALUSrcA 
            = vlSelfRef.soc_top__DOT__u_core__DOT__id_ALUSrcA;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id_ex__DOT__id_rs1 
            = vlSelfRef.soc_top__DOT__u_core__DOT__id_rs1;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id_ex__DOT__id_ALUSrc 
            = vlSelfRef.soc_top__DOT__u_core__DOT__id_ALUSrc;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id_ex__DOT__id_rs2 
            = vlSelfRef.soc_top__DOT__u_core__DOT__id_rs2;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id_ex__DOT__id_funct3 
            = vlSelfRef.soc_top__DOT__u_core__DOT__id_funct3;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id_ex__DOT__id_ALUOp 
            = vlSelfRef.soc_top__DOT__u_core__DOT__id_ALUOp;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id_ex__DOT__id_funct7 
            = vlSelfRef.soc_top__DOT__u_core__DOT__id_funct7;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id_ex__DOT__id_pc 
            = vlSelfRef.soc_top__DOT__u_core__DOT__id_pc_out;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id_ex__DOT__id_immediate 
            = vlSelfRef.soc_top__DOT__u_core__DOT__id_immediate;
    }
    if ((0x0000000000000980ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__trap_target_pc 
            = ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__ex_is_mret)
                ? vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__mepc_out
                : vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__mtvec_out);
        vlSelfRef.soc_top__DOT__u_core__DOT__trap_target_pc 
            = vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__trap_target_pc;
    }
    if ((0x0000000000000198ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.soc_top__DOT__u_core__DOT__u_hazard__DOT__rs1_hazard 
            = ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_hazard__DOT__ex_rd) 
               == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_hazard__DOT__id_rs1));
        vlSelfRef.soc_top__DOT__u_core__DOT__u_hazard__DOT__rs2_hazard 
            = ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_hazard__DOT__id_uses_rs2) 
               & ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_hazard__DOT__ex_rd) 
                  == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_hazard__DOT__id_rs2)));
        vlSelfRef.soc_top__DOT__u_core__DOT__u_hazard__DOT__load_use_hazard 
            = ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_hazard__DOT__ex_MemRead) 
               & ((0U != (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_hazard__DOT__ex_rd)) 
                  & ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_hazard__DOT__rs1_hazard) 
                     | (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_hazard__DOT__rs2_hazard))));
        vlSelfRef.soc_top__DOT__u_core__DOT__u_hazard__DOT__id_ex_flush 
            = vlSelfRef.soc_top__DOT__u_core__DOT__u_hazard__DOT__load_use_hazard;
        vlSelfRef.soc_top__DOT__u_core__DOT__id_ex_flush_ext 
            = vlSelfRef.soc_top__DOT__u_core__DOT__u_hazard__DOT__id_ex_flush;
    }
    if ((0x0000000000020980ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__csr_rdata 
            = ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__csr_read)
                ? ((0x0300U == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__csr_addr))
                    ? vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__mstatus
                    : ((0x0304U == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__csr_addr))
                        ? vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__mie
                        : ((0x0305U == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__csr_addr))
                            ? vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__mtvec
                            : ((0x0340U == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__csr_addr))
                                ? vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__mscratch
                                : ((0x0341U == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__csr_addr))
                                    ? vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__mepc
                                    : ((0x0342U == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__csr_addr))
                                        ? vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__mcause
                                        : ((0x0344U 
                                            == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__csr_addr))
                                            ? (QData)((IData)(
                                                              ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__timer_interrupt) 
                                                               << 7U)))
                                            : 0ULL)))))))
                : 0ULL);
        vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__csr_rdata 
            = vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__csr_rdata;
    }
    if ((0x0000000000000780ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__busy 
            = ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__is_m_ext) 
               & (3U != (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__state)));
        vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__multdiv_busy 
            = vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__busy;
        vlSelfRef.soc_top__DOT__u_core__DOT__multdiv_busy 
            = vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__multdiv_busy;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_hazard__DOT__multdiv_busy 
            = vlSelfRef.soc_top__DOT__u_core__DOT__multdiv_busy;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_hazard__DOT__id_ex_stall 
            = vlSelfRef.soc_top__DOT__u_core__DOT__u_hazard__DOT__multdiv_busy;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_hazard__DOT__ex_mem_flush 
            = vlSelfRef.soc_top__DOT__u_core__DOT__u_hazard__DOT__multdiv_busy;
        vlSelfRef.soc_top__DOT__u_core__DOT__id_ex_stall 
            = vlSelfRef.soc_top__DOT__u_core__DOT__u_hazard__DOT__id_ex_stall;
        vlSelfRef.soc_top__DOT__u_core__DOT__ex_mem_flush 
            = vlSelfRef.soc_top__DOT__u_core__DOT__u_hazard__DOT__ex_mem_flush;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id_ex__DOT__stall 
            = vlSelfRef.soc_top__DOT__u_core__DOT__id_ex_stall;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_ex_mem__DOT__flush 
            = vlSelfRef.soc_top__DOT__u_core__DOT__ex_mem_flush;
    }
    if ((0x0000000000800000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
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
    }
    if ((0x0000000001180000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        if (vlSelfRef.soc_top__DOT__u_vga__DOT__in_window_d) {
            vlSelfRef.soc_top__DOT__u_vga__DOT__r_out 
                = ((0x0000000eU & ((IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__vga_pixel_data) 
                                   >> 4U)) | (1U & 
                                              ((IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__vga_pixel_data) 
                                               >> 5U)));
            vlSelfRef.soc_top__DOT__u_vga__DOT__g_out 
                = ((0x0000000eU & ((IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__vga_pixel_data) 
                                   >> 1U)) | (1U & 
                                              ((IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__vga_pixel_data) 
                                               >> 2U)));
            vlSelfRef.soc_top__DOT__u_vga__DOT__b_out 
                = ((0x0000000cU & ((IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__vga_pixel_data) 
                                   << 2U)) | (3U & (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__vga_pixel_data)));
        } else {
            vlSelfRef.soc_top__DOT__u_vga__DOT__r_out = 0U;
            vlSelfRef.soc_top__DOT__u_vga__DOT__g_out = 0U;
            vlSelfRef.soc_top__DOT__u_vga__DOT__b_out = 0U;
        }
        if (vlSelfRef.soc_top__DOT__u_vga__DOT__video_active_d) {
            vlSelfRef.soc_top__DOT__u_vga__DOT__vga_r 
                = vlSelfRef.soc_top__DOT__u_vga__DOT__r_out;
            vlSelfRef.soc_top__DOT__u_vga__DOT__vga_g 
                = vlSelfRef.soc_top__DOT__u_vga__DOT__g_out;
            vlSelfRef.soc_top__DOT__u_vga__DOT__vga_b 
                = vlSelfRef.soc_top__DOT__u_vga__DOT__b_out;
        } else {
            vlSelfRef.soc_top__DOT__u_vga__DOT__vga_r = 0U;
            vlSelfRef.soc_top__DOT__u_vga__DOT__vga_g = 0U;
            vlSelfRef.soc_top__DOT__u_vga__DOT__vga_b = 0U;
        }
        vlSelfRef.soc_top__DOT__vga_r = vlSelfRef.soc_top__DOT__u_vga__DOT__vga_r;
        vlSelfRef.soc_top__DOT__vga_g = vlSelfRef.soc_top__DOT__u_vga__DOT__vga_g;
        vlSelfRef.soc_top__DOT__vga_b = vlSelfRef.soc_top__DOT__u_vga__DOT__vga_b;
        vlSelfRef.vga_r = vlSelfRef.soc_top__DOT__vga_r;
        vlSelfRef.vga_g = vlSelfRef.soc_top__DOT__vga_g;
        vlSelfRef.vga_b = vlSelfRef.soc_top__DOT__vga_b;
    }
    if ((0x0000000000010006ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.soc_top__DOT__u_ram__DOT__imem_instruction 
            = ((IData)(vlSelfRef.soc_top__DOT__u_ram__DOT__use_little_endian)
                ? (((vlSelfRef.soc_top__DOT__u_ram__DOT__memory
                     [(0x007fffffU & ((IData)(3U) + vlSelfRef.soc_top__DOT__u_ram__DOT__pc_idx))] 
                     << 0x00000018U) | (vlSelfRef.soc_top__DOT__u_ram__DOT__memory
                                        [(0x007fffffU 
                                          & ((IData)(2U) 
                                             + vlSelfRef.soc_top__DOT__u_ram__DOT__pc_idx))] 
                                        << 0x00000010U)) 
                   | ((vlSelfRef.soc_top__DOT__u_ram__DOT__memory
                       [(0x007fffffU & ((IData)(1U) 
                                        + vlSelfRef.soc_top__DOT__u_ram__DOT__pc_idx))] 
                       << 8U) | vlSelfRef.soc_top__DOT__u_ram__DOT__memory
                      [vlSelfRef.soc_top__DOT__u_ram__DOT__pc_idx]))
                : (((vlSelfRef.soc_top__DOT__u_ram__DOT__memory
                     [vlSelfRef.soc_top__DOT__u_ram__DOT__pc_idx] 
                     << 0x00000018U) | (vlSelfRef.soc_top__DOT__u_ram__DOT__memory
                                        [(0x007fffffU 
                                          & ((IData)(1U) 
                                             + vlSelfRef.soc_top__DOT__u_ram__DOT__pc_idx))] 
                                        << 0x00000010U)) 
                   | ((vlSelfRef.soc_top__DOT__u_ram__DOT__memory
                       [(0x007fffffU & ((IData)(2U) 
                                        + vlSelfRef.soc_top__DOT__u_ram__DOT__pc_idx))] 
                       << 8U) | vlSelfRef.soc_top__DOT__u_ram__DOT__memory
                      [(0x007fffffU & ((IData)(3U) 
                                       + vlSelfRef.soc_top__DOT__u_ram__DOT__pc_idx))])));
        vlSelfRef.soc_top__DOT__imem_instruction = vlSelfRef.soc_top__DOT__u_ram__DOT__imem_instruction;
        vlSelfRef.soc_top__DOT__u_core__DOT__imem_instruction 
            = vlSelfRef.soc_top__DOT__imem_instruction;
        vlSelfRef.soc_top__DOT__u_core__DOT__if_instruction 
            = vlSelfRef.soc_top__DOT__u_core__DOT__imem_instruction;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_if_id__DOT__if_instruction 
            = vlSelfRef.soc_top__DOT__u_core__DOT__if_instruction;
    }
    if ((0x0000000000003000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.soc_top__DOT__u_core__DOT__u_mem_wb__DOT__mem_MemToReg 
            = vlSelfRef.soc_top__DOT__u_core__DOT__mem_MemToReg;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_mem_wb__DOT__mem_alu_result 
            = vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_mem_wb__DOT__mem_pc4 
            = vlSelfRef.soc_top__DOT__u_core__DOT__mem_pc4;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_mem_wb__DOT__mem_RegWrite 
            = vlSelfRef.soc_top__DOT__u_core__DOT__mem_RegWrite;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_mem_wb__DOT__mem_rd 
            = vlSelfRef.soc_top__DOT__u_core__DOT__mem_rd;
    }
    if ((0x000000000000f180ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__11(vlSelf);
        Vtop_cla_64b___nba_comb__TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst__0((&vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst));
        Vtop___024root___nba_comb__TOP__12(vlSelf);
    }
    if ((0x000000000000c078ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__id_rs1_data 
            = (((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT____VdfgRegularize_hf18c6620_0_0) 
                & ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__id_rs1) 
                   == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__wb_rd)))
                ? vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__wb_write_data
                : vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__rf_read_data1);
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__id_rs2_data 
            = (((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT____VdfgRegularize_hf18c6620_0_0) 
                & ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__id_rs2) 
                   == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__wb_rd)))
                ? vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__wb_write_data
                : vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__rf_read_data2);
        vlSelfRef.soc_top__DOT__u_core__DOT__id_rs1_data 
            = vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__id_rs1_data;
        vlSelfRef.soc_top__DOT__u_core__DOT__id_rs2_data 
            = vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT__id_rs2_data;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id_ex__DOT__id_rs1_data 
            = vlSelfRef.soc_top__DOT__u_core__DOT__id_rs1_data;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id_ex__DOT__id_rs2_data 
            = vlSelfRef.soc_top__DOT__u_core__DOT__id_rs2_data;
    }
    if ((0x0000000000000798ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        __Vinline__nba_comb__TOP__14_soc_top__DOT__u_core__DOT__u_hazard__DOT____VdfgRegularize_h0997448a_0_0 
            = ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_hazard__DOT__load_use_hazard) 
               | (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_hazard__DOT__multdiv_busy));
        vlSelfRef.soc_top__DOT__u_core__DOT__u_hazard__DOT__pc_stall 
            = __Vinline__nba_comb__TOP__14_soc_top__DOT__u_core__DOT__u_hazard__DOT____VdfgRegularize_h0997448a_0_0;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_hazard__DOT__if_id_stall 
            = __Vinline__nba_comb__TOP__14_soc_top__DOT__u_core__DOT__u_hazard__DOT____VdfgRegularize_h0997448a_0_0;
        vlSelfRef.soc_top__DOT__u_core__DOT__pc_stall 
            = vlSelfRef.soc_top__DOT__u_core__DOT__u_hazard__DOT__pc_stall;
        vlSelfRef.soc_top__DOT__u_core__DOT__if_id_stall 
            = vlSelfRef.soc_top__DOT__u_core__DOT__u_hazard__DOT__if_id_stall;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_pc__DOT__en 
            = (1U & (~ (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__pc_stall)));
        vlSelfRef.soc_top__DOT__u_core__DOT__u_if_id__DOT__stall 
            = vlSelfRef.soc_top__DOT__u_core__DOT__if_id_stall;
    }
    if ((0x0000000000803000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__15(vlSelf);
    }
    if ((0x000000000002f980ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__csr_write_data 
            = ((4U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__ex_funct3))
                ? ((2U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__ex_funct3))
                    ? ((1U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__ex_funct3))
                        ? ((~ (QData)((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__ex_rs1))) 
                           & vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__csr_rdata)
                        : (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__csr_rdata 
                           | (QData)((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__ex_rs1))))
                    : ((1U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__ex_funct3))
                        ? (QData)((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__ex_rs1))
                        : vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__fwd_rs1))
                : ((2U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__ex_funct3))
                    ? ((1U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__ex_funct3))
                        ? ((~ vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__fwd_rs1) 
                           & vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__csr_rdata)
                        : (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__csr_rdata 
                           | vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__fwd_rs1))
                    : vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__fwd_rs1));
        vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__csr_wdata 
            = vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__csr_write_data;
    }
    if ((0x000000000000f780ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_result_raw 
            = ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__is_m_ext)
                ? vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__multdiv_result
                : vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_res);
        vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_result_32 
            = (((QData)((IData)((- (IData)((1U & (IData)(
                                                         (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_result_raw 
                                                          >> 0x0000001fU))))))) 
                << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_result_raw)));
        vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_result_mux 
            = ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__ex_is_32bit)
                ? vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_result_32
                : vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_result_raw);
    }
    if ((0x0000000000873000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.soc_top__DOT__u_bus__DOT__dmem_read_data_in = 0ULL;
        if ((0x0000000000800000ULL > vlSelfRef.soc_top__DOT__u_bus__DOT__dmem_address)) {
            vlSelfRef.soc_top__DOT__u_bus__DOT__dmem_read_data_in 
                = vlSelfRef.soc_top__DOT__u_bus__DOT__ram_read_data;
        } else if (((0x0000000001000000ULL <= vlSelfRef.soc_top__DOT__u_bus__DOT__dmem_address) 
                    & (0x0000000001100000ULL > vlSelfRef.soc_top__DOT__u_bus__DOT__dmem_address))) {
            vlSelfRef.soc_top__DOT__u_bus__DOT__dmem_read_data_in 
                = vlSelfRef.soc_top__DOT__u_bus__DOT__vga_read_data;
        } else if (((0x0000000010000000ULL <= vlSelfRef.soc_top__DOT__u_bus__DOT__dmem_address) 
                    & (0x0000000010000100ULL > vlSelfRef.soc_top__DOT__u_bus__DOT__dmem_address))) {
            vlSelfRef.soc_top__DOT__u_bus__DOT__dmem_read_data_in 
                = vlSelfRef.soc_top__DOT__u_bus__DOT__spi_read_data;
        } else if (((0x0000000010010000ULL <= vlSelfRef.soc_top__DOT__u_bus__DOT__dmem_address) 
                    & (0x0000000010010100ULL > vlSelfRef.soc_top__DOT__u_bus__DOT__dmem_address))) {
            vlSelfRef.soc_top__DOT__u_bus__DOT__dmem_read_data_in 
                = vlSelfRef.soc_top__DOT__u_bus__DOT__clint_read_data;
        } else if (((0x0000000010020000ULL <= vlSelfRef.soc_top__DOT__u_bus__DOT__dmem_address) 
                    & (0x0000000010020100ULL > vlSelfRef.soc_top__DOT__u_bus__DOT__dmem_address))) {
            vlSelfRef.soc_top__DOT__u_bus__DOT__dmem_read_data_in 
                = vlSelfRef.soc_top__DOT__u_bus__DOT__io_read_data;
        }
        vlSelfRef.soc_top__DOT__dmem_read_data_in = vlSelfRef.soc_top__DOT__u_bus__DOT__dmem_read_data_in;
        vlSelfRef.soc_top__DOT__u_core__DOT__dmem_read_data_in 
            = vlSelfRef.soc_top__DOT__dmem_read_data_in;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_mem__DOT__dmem_read_data_in 
            = vlSelfRef.soc_top__DOT__u_core__DOT__dmem_read_data_in;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_mem__DOT__mem_read_data 
            = vlSelfRef.soc_top__DOT__u_core__DOT__u_mem__DOT__dmem_read_data_in;
        vlSelfRef.soc_top__DOT__u_core__DOT__mem_read_data 
            = vlSelfRef.soc_top__DOT__u_core__DOT__u_mem__DOT__mem_read_data;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_mem_wb__DOT__mem_read_data 
            = vlSelfRef.soc_top__DOT__u_core__DOT__mem_read_data;
    }
    if ((0x000000000002ff80ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__ex_alu_result 
            = ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__ex_is_csr)
                ? vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__csr_rdata
                : vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_result_mux);
        vlSelfRef.soc_top__DOT__u_core__DOT__ex_alu_result 
            = vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__ex_alu_result;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__ex_branch_target 
            = ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__is_jalr)
                ? (0xfffffffffffffffeULL & vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__ex_alu_result)
                : vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__bta_result);
        vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__branch_cond 
            = (1U & ((4U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__ex_funct3))
                      ? ((2U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__ex_funct3))
                          ? ((1U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__ex_funct3))
                              ? ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__ex_alu_zero) 
                                 | (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                    >= vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__fwd_rs2))
                              : ((~ (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__ex_alu_zero)) 
                                 & (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                    < vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__fwd_rs2)))
                          : ((1U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__ex_funct3))
                              ? ((~ (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__ex_alu_result 
                                             >> 0x0000003fU))) 
                                 | (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__ex_alu_zero))
                              : (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__ex_alu_result 
                                         >> 0x0000003fU))))
                      : ((~ ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__ex_funct3) 
                             >> 1U)) & ((1U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__ex_funct3))
                                         ? (~ (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__ex_alu_zero))
                                         : (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__ex_alu_zero)))));
        vlSelfRef.soc_top__DOT__u_core__DOT__u_ex_mem__DOT__ex_alu_result 
            = vlSelfRef.soc_top__DOT__u_core__DOT__ex_alu_result;
        vlSelfRef.soc_top__DOT__u_core__DOT__ex_branch_target 
            = vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__ex_branch_target;
        vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__ex_branch_taken 
            = (((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__branch_cond) 
                & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__ex_Branch)) 
               | (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__ex_Jump));
        vlSelfRef.soc_top__DOT__u_core__DOT__u_ex_mem__DOT__ex_branch_target 
            = vlSelfRef.soc_top__DOT__u_core__DOT__ex_branch_target;
        vlSelfRef.soc_top__DOT__u_core__DOT__ex_branch_taken 
            = vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__ex_branch_taken;
        vlSelfRef.soc_top__DOT__u_core__DOT__take_trap 
            = ((~ ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_branch_taken) 
                   | ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_is_mret) 
                      | (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_mem_flush)))) 
               & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__trap_pending));
        vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__take_trap 
            = vlSelfRef.soc_top__DOT__u_core__DOT__take_trap;
        vlSelfRef.soc_top__DOT__u_core__DOT__trap_flush 
            = ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_is_mret) 
               | (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__take_trap));
        vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__take_trap 
            = vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__take_trap;
        vlSelfRef.soc_top__DOT__u_core__DOT____VdfgRegularize_h19c8320d_0_0 
            = ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_branch_taken) 
               | (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__trap_flush));
        vlSelfRef.soc_top__DOT__u_core__DOT__u_if_id__DOT__flush 
            = ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__if_id_flush_ext) 
               | (IData)(vlSelfRef.soc_top__DOT__u_core__DOT____VdfgRegularize_h19c8320d_0_0));
    }
    if ((0x000000000002ff86ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.soc_top__DOT__u_core__DOT__pc_next 
            = ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__take_trap)
                ? vlSelfRef.soc_top__DOT__u_core__DOT__trap_target_pc
                : ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_is_mret)
                    ? vlSelfRef.soc_top__DOT__u_core__DOT__trap_target_pc
                    : ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_branch_taken)
                        ? vlSelfRef.soc_top__DOT__u_core__DOT__ex_branch_target
                        : vlSelfRef.soc_top__DOT__u_core__DOT__if_pc4)));
        vlSelfRef.soc_top__DOT__u_core__DOT__u_pc__DOT__pc_next 
            = vlSelfRef.soc_top__DOT__u_core__DOT__pc_next;
    }
    if ((0x000000000002ff98ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.soc_top__DOT__u_core__DOT__u_id_ex__DOT__flush 
            = ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__id_ex_flush_ext) 
               | (IData)(vlSelfRef.soc_top__DOT__u_core__DOT____VdfgRegularize_h19c8320d_0_0));
    }
}

void Vtop___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    Vtop___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vtop___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtop___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        Vtop___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("/home/sidd-zeppelin/Public/study/Projects/verilog-a-doom/src/soc_top.v", 1, "", "Input combinational region did not converge after 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
    } while (Vtop___024root___eval_phase__ico(vlSelf));
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/home/sidd-zeppelin/Public/study/Projects/verilog-a-doom/src/soc_top.v", 1, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/home/sidd-zeppelin/Public/study/Projects/verilog-a-doom/src/soc_top.v", 1, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vtop___024root___eval_phase__act(vlSelf));
    } while (Vtop___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
