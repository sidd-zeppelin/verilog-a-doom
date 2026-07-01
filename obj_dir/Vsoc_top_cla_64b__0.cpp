// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsoc_top.h for the primary calling header

#include "Vsoc_top__pch.h"

extern const VlUnpacked<CData/*0:0*/, 512> Vsoc_top__ConstPool__TABLE_h08c4d8a1_0;

void Vsoc_top_cla_64b___nba_sequent__TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst__0(Vsoc_top_cla_64b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsoc_top_cla_64b___nba_sequent__TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst__0\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ block0__DOT____Vcellout__block1__g_out;
    block0__DOT____Vcellout__block1__g_out = 0;
    CData/*0:0*/ block0__DOT____Vcellout__block2__g_out;
    block0__DOT____Vcellout__block2__g_out = 0;
    CData/*0:0*/ block0__DOT____Vcellout__block3__g_out;
    block0__DOT____Vcellout__block3__g_out = 0;
    CData/*0:0*/ __PVT__block0__DOT__block1__DOT__p_out;
    __PVT__block0__DOT__block1__DOT__p_out = 0;
    CData/*0:0*/ __PVT__block0__DOT__block2__DOT__p_out;
    __PVT__block0__DOT__block2__DOT__p_out = 0;
    CData/*0:0*/ __PVT__block0__DOT__block3__DOT__p_out;
    __PVT__block0__DOT__block3__DOT__p_out = 0;
    CData/*0:0*/ __PVT__block1__DOT__g_out;
    __PVT__block1__DOT__g_out = 0;
    CData/*0:0*/ __PVT__block1__DOT__p_out;
    __PVT__block1__DOT__p_out = 0;
    CData/*0:0*/ __PVT__block1__DOT__g__BRA__0__KET__;
    __PVT__block1__DOT__g__BRA__0__KET__ = 0;
    CData/*0:0*/ block1__DOT____Vcellout__block1__g_out;
    block1__DOT____Vcellout__block1__g_out = 0;
    CData/*0:0*/ block1__DOT____Vcellout__block2__g_out;
    block1__DOT____Vcellout__block2__g_out = 0;
    CData/*0:0*/ block1__DOT____Vcellout__block3__g_out;
    block1__DOT____Vcellout__block3__g_out = 0;
    CData/*0:0*/ block1__DOT____VdfgRegularize_h0843a2b9_0_0;
    block1__DOT____VdfgRegularize_h0843a2b9_0_0 = 0;
    CData/*0:0*/ block1__DOT____VdfgRegularize_h0843a2b9_0_1;
    block1__DOT____VdfgRegularize_h0843a2b9_0_1 = 0;
    CData/*0:0*/ block1__DOT____VdfgRegularize_h0843a2b9_0_2;
    block1__DOT____VdfgRegularize_h0843a2b9_0_2 = 0;
    CData/*0:0*/ __PVT__block1__DOT__block0__DOT__p_out;
    __PVT__block1__DOT__block0__DOT__p_out = 0;
    CData/*0:0*/ __PVT__block1__DOT__block1__DOT__p_out;
    __PVT__block1__DOT__block1__DOT__p_out = 0;
    CData/*0:0*/ __PVT__block1__DOT__block2__DOT__p_out;
    __PVT__block1__DOT__block2__DOT__p_out = 0;
    CData/*0:0*/ __PVT__block1__DOT__block3__DOT__p_out;
    __PVT__block1__DOT__block3__DOT__p_out = 0;
    CData/*0:0*/ __PVT__block2__DOT__p_out;
    __PVT__block2__DOT__p_out = 0;
    CData/*0:0*/ __PVT__block2__DOT__g__BRA__0__KET__;
    __PVT__block2__DOT__g__BRA__0__KET__ = 0;
    CData/*0:0*/ block2__DOT____Vcellout__block1__g_out;
    block2__DOT____Vcellout__block1__g_out = 0;
    CData/*0:0*/ block2__DOT____Vcellout__block2__g_out;
    block2__DOT____Vcellout__block2__g_out = 0;
    CData/*0:0*/ block2__DOT____Vcellout__block3__g_out;
    block2__DOT____Vcellout__block3__g_out = 0;
    CData/*0:0*/ block2__DOT____VdfgRegularize_h0843a2b9_0_0;
    block2__DOT____VdfgRegularize_h0843a2b9_0_0 = 0;
    CData/*0:0*/ block2__DOT____VdfgRegularize_h0843a2b9_0_1;
    block2__DOT____VdfgRegularize_h0843a2b9_0_1 = 0;
    CData/*0:0*/ block2__DOT____VdfgRegularize_h0843a2b9_0_2;
    block2__DOT____VdfgRegularize_h0843a2b9_0_2 = 0;
    CData/*0:0*/ __PVT__block2__DOT__block0__DOT__p_out;
    __PVT__block2__DOT__block0__DOT__p_out = 0;
    CData/*0:0*/ __PVT__block2__DOT__block1__DOT__p_out;
    __PVT__block2__DOT__block1__DOT__p_out = 0;
    CData/*0:0*/ __PVT__block2__DOT__block2__DOT__p_out;
    __PVT__block2__DOT__block2__DOT__p_out = 0;
    CData/*0:0*/ __PVT__block2__DOT__block3__DOT__p_out;
    __PVT__block2__DOT__block3__DOT__p_out = 0;
    CData/*0:0*/ __PVT__block3__DOT__g__BRA__0__KET__;
    __PVT__block3__DOT__g__BRA__0__KET__ = 0;
    CData/*0:0*/ block3__DOT____Vcellout__block1__g_out;
    block3__DOT____Vcellout__block1__g_out = 0;
    CData/*0:0*/ block3__DOT____Vcellout__block2__g_out;
    block3__DOT____Vcellout__block2__g_out = 0;
    CData/*0:0*/ __PVT__block3__DOT__block0__DOT__p_out;
    __PVT__block3__DOT__block0__DOT__p_out = 0;
    CData/*0:0*/ __PVT__block3__DOT__block1__DOT__p_out;
    __PVT__block3__DOT__block1__DOT__p_out = 0;
    CData/*0:0*/ __PVT__block3__DOT__block2__DOT__p_out;
    __PVT__block3__DOT__block2__DOT__p_out = 0;
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    SData/*8:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    SData/*8:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    SData/*8:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    SData/*8:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    SData/*8:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    SData/*8:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    SData/*8:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    SData/*8:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    SData/*8:0*/ __Vtableidx10;
    __Vtableidx10 = 0;
    SData/*8:0*/ __Vtableidx11;
    __Vtableidx11 = 0;
    SData/*8:0*/ __Vtableidx12;
    __Vtableidx12 = 0;
    SData/*8:0*/ __Vtableidx13;
    __Vtableidx13 = 0;
    SData/*8:0*/ __Vtableidx14;
    __Vtableidx14 = 0;
    SData/*8:0*/ __Vtableidx15;
    __Vtableidx15 = 0;
    // Body
    __PVT__block3__DOT__block2__DOT__p_out = (IData)(
                                                     (0x0f00000000000000ULL 
                                                      == 
                                                      (0x0f00000000000000ULL 
                                                       & vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc)));
    __Vtableidx15 = (0x000000f0U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                                             >> 0x00000038U)) 
                                    << 4U));
    block3__DOT____Vcellout__block2__g_out = Vsoc_top__ConstPool__TABLE_h08c4d8a1_0
        [__Vtableidx15];
    __PVT__block3__DOT__block1__DOT__p_out = (IData)(
                                                     (0x00f0000000000000ULL 
                                                      == 
                                                      (0x00f0000000000000ULL 
                                                       & vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc)));
    __Vtableidx14 = (0x000000f0U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                                             >> 0x00000034U)) 
                                    << 4U));
    block3__DOT____Vcellout__block1__g_out = Vsoc_top__ConstPool__TABLE_h08c4d8a1_0
        [__Vtableidx14];
    __PVT__block3__DOT__block0__DOT__p_out = (IData)(
                                                     (0x000f000000000000ULL 
                                                      == 
                                                      (0x000f000000000000ULL 
                                                       & vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc)));
    __Vtableidx13 = (0x000000f0U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                                             >> 0x00000030U)) 
                                    << 4U));
    __PVT__block3__DOT__g__BRA__0__KET__ = Vsoc_top__ConstPool__TABLE_h08c4d8a1_0
        [__Vtableidx13];
    __Vtableidx12 = (0x000000f0U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                                             >> 0x0000002cU)) 
                                    << 4U));
    block2__DOT____Vcellout__block3__g_out = Vsoc_top__ConstPool__TABLE_h08c4d8a1_0
        [__Vtableidx12];
    __Vtableidx11 = (0x000000f0U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                                             >> 0x00000028U)) 
                                    << 4U));
    block2__DOT____Vcellout__block2__g_out = Vsoc_top__ConstPool__TABLE_h08c4d8a1_0
        [__Vtableidx11];
    __Vtableidx10 = (0x000000f0U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                                             >> 0x00000024U)) 
                                    << 4U));
    block2__DOT____Vcellout__block1__g_out = Vsoc_top__ConstPool__TABLE_h08c4d8a1_0
        [__Vtableidx10];
    __Vtableidx9 = (0x000000f0U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                                            >> 0x00000020U)) 
                                   << 4U));
    __PVT__block2__DOT__g__BRA__0__KET__ = Vsoc_top__ConstPool__TABLE_h08c4d8a1_0
        [__Vtableidx9];
    __PVT__block2__DOT__block0__DOT__p_out = (IData)(
                                                     (0x0000000f00000000ULL 
                                                      == 
                                                      (0x0000000f00000000ULL 
                                                       & vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc)));
    __Vtableidx8 = (0x000000f0U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                                            >> 0x0000001cU)) 
                                   << 4U));
    block1__DOT____Vcellout__block3__g_out = Vsoc_top__ConstPool__TABLE_h08c4d8a1_0
        [__Vtableidx8];
    __Vtableidx7 = (0x000000f0U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                                            >> 0x00000018U)) 
                                   << 4U));
    block1__DOT____Vcellout__block2__g_out = Vsoc_top__ConstPool__TABLE_h08c4d8a1_0
        [__Vtableidx7];
    __PVT__block2__DOT__block2__DOT__p_out = (IData)(
                                                     (0x00000f0000000000ULL 
                                                      == 
                                                      (0x00000f0000000000ULL 
                                                       & vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc)));
    __Vtableidx6 = (0x000000f0U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                                            >> 0x00000014U)) 
                                   << 4U));
    block1__DOT____Vcellout__block1__g_out = Vsoc_top__ConstPool__TABLE_h08c4d8a1_0
        [__Vtableidx6];
    __PVT__block1__DOT__block0__DOT__p_out = (IData)(
                                                     (0x00000000000f0000ULL 
                                                      == 
                                                      (0x00000000000f0000ULL 
                                                       & vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc)));
    __Vtableidx5 = (0x000000f0U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                                            >> 0x00000010U)) 
                                   << 4U));
    __PVT__block1__DOT__g__BRA__0__KET__ = Vsoc_top__ConstPool__TABLE_h08c4d8a1_0
        [__Vtableidx5];
    __PVT__block2__DOT__block1__DOT__p_out = (IData)(
                                                     (0x000000f000000000ULL 
                                                      == 
                                                      (0x000000f000000000ULL 
                                                       & vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc)));
    __PVT__block0__DOT__block3__DOT__p_out = (IData)(
                                                     (0x000000000000f000ULL 
                                                      == 
                                                      (0x000000000000f000ULL 
                                                       & vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc)));
    __Vtableidx4 = (0x000000f0U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                                            >> 0x0000000cU)) 
                                   << 4U));
    block0__DOT____Vcellout__block3__g_out = Vsoc_top__ConstPool__TABLE_h08c4d8a1_0
        [__Vtableidx4];
    __PVT__block2__DOT__block3__DOT__p_out = (IData)(
                                                     (0x0000f00000000000ULL 
                                                      == 
                                                      (0x0000f00000000000ULL 
                                                       & vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc)));
    __PVT__block0__DOT__block2__DOT__p_out = (IData)(
                                                     (0x0000000000000f00ULL 
                                                      == 
                                                      (0x0000000000000f00ULL 
                                                       & vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc)));
    __Vtableidx3 = (0x000000f0U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                                            >> 8U)) 
                                   << 4U));
    block0__DOT____Vcellout__block2__g_out = Vsoc_top__ConstPool__TABLE_h08c4d8a1_0
        [__Vtableidx3];
    __PVT__block0__DOT__block1__DOT__p_out = (IData)(
                                                     (0x00000000000000f0ULL 
                                                      == 
                                                      (0x00000000000000f0ULL 
                                                       & vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc)));
    __Vtableidx2 = (0x000000f0U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                                            >> 4U)) 
                                   << 4U));
    block0__DOT____Vcellout__block1__g_out = Vsoc_top__ConstPool__TABLE_h08c4d8a1_0
        [__Vtableidx2];
    __Vtableidx1 = ((0x000000f0U & (0x00000040U ^ ((IData)(vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc) 
                                                   << 4U))) 
                    | (4U & (IData)(vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc)));
    vlSelfRef.__PVT__block0__DOT__g__BRA__0__KET__ 
        = Vsoc_top__ConstPool__TABLE_h08c4d8a1_0[__Vtableidx1];
    __PVT__block1__DOT__block2__DOT__p_out = (IData)(
                                                     (0x000000000f000000ULL 
                                                      == 
                                                      (0x000000000f000000ULL 
                                                       & vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc)));
    __PVT__block1__DOT__block1__DOT__p_out = (IData)(
                                                     (0x0000000000f00000ULL 
                                                      == 
                                                      (0x0000000000f00000ULL 
                                                       & vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc)));
    __PVT__block1__DOT__block3__DOT__p_out = (IData)(
                                                     (0x00000000f0000000ULL 
                                                      == 
                                                      (0x00000000f0000000ULL 
                                                       & vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc)));
    block2__DOT____VdfgRegularize_h0843a2b9_0_0 = ((IData)(__PVT__block2__DOT__block1__DOT__p_out) 
                                                   & (IData)(__PVT__block2__DOT__g__BRA__0__KET__));
    block2__DOT____VdfgRegularize_h0843a2b9_0_1 = ((IData)(__PVT__block2__DOT__block1__DOT__p_out) 
                                                   & (IData)(__PVT__block2__DOT__block0__DOT__p_out));
    block2__DOT____VdfgRegularize_h0843a2b9_0_2 = ((IData)(__PVT__block2__DOT__block2__DOT__p_out) 
                                                   & (IData)(__PVT__block2__DOT__block3__DOT__p_out));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_4 = ((IData)(
                                                        (vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                                                         >> 4U)) 
                                                & (IData)(vlSelfRef.__PVT__block0__DOT__g__BRA__0__KET__));
    vlSelfRef.__PVT__block0__DOT__block3__DOT__cin 
        = ((IData)(block0__DOT____Vcellout__block2__g_out) 
           | (((IData)(block0__DOT____Vcellout__block1__g_out) 
               & (IData)(__PVT__block0__DOT__block2__DOT__p_out)) 
              | ((IData)(__PVT__block0__DOT__block1__DOT__p_out) 
                 & ((IData)(__PVT__block0__DOT__block2__DOT__p_out) 
                    & (IData)(vlSelfRef.__PVT__block0__DOT__g__BRA__0__KET__)))));
    vlSelfRef.__PVT__block0__DOT__block2__DOT__cin 
        = ((IData)(block0__DOT____Vcellout__block1__g_out) 
           | ((IData)(__PVT__block0__DOT__block1__DOT__p_out) 
              & (IData)(vlSelfRef.__PVT__block0__DOT__g__BRA__0__KET__)));
    block1__DOT____VdfgRegularize_h0843a2b9_0_1 = ((IData)(__PVT__block1__DOT__block1__DOT__p_out) 
                                                   & (IData)(__PVT__block1__DOT__block0__DOT__p_out));
    block1__DOT____VdfgRegularize_h0843a2b9_0_0 = ((IData)(__PVT__block1__DOT__block1__DOT__p_out) 
                                                   & (IData)(__PVT__block1__DOT__g__BRA__0__KET__));
    block1__DOT____VdfgRegularize_h0843a2b9_0_2 = ((IData)(__PVT__block1__DOT__block2__DOT__p_out) 
                                                   & (IData)(__PVT__block1__DOT__block3__DOT__p_out));
    __PVT__block2__DOT__p_out = ((IData)(block2__DOT____VdfgRegularize_h0843a2b9_0_1) 
                                 & (IData)(block2__DOT____VdfgRegularize_h0843a2b9_0_2));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 = ((IData)(
                                                        (vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                                                         >> 5U)) 
                                                & (IData)(vlSelfRef.__VdfgRegularize_hf246a9bd_1_4));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_8 = ((IData)(
                                                        (vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                                                         >> 0x0000000cU)) 
                                                & (IData)(vlSelfRef.__PVT__block0__DOT__block3__DOT__cin));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_6 = ((IData)(
                                                        (vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                                                         >> 8U)) 
                                                & (IData)(vlSelfRef.__PVT__block0__DOT__block2__DOT__cin));
    vlSelfRef.__PVT__block1__DOT__block0__DOT__cin 
        = ((IData)(block0__DOT____Vcellout__block3__g_out) 
           | (((IData)(block0__DOT____Vcellout__block2__g_out) 
               & (IData)(__PVT__block0__DOT__block3__DOT__p_out)) 
              | (((IData)(__PVT__block0__DOT__block2__DOT__p_out) 
                  & (IData)(__PVT__block0__DOT__block3__DOT__p_out)) 
                 & (IData)(vlSelfRef.__PVT__block0__DOT__block2__DOT__cin))));
    __PVT__block1__DOT__p_out = ((IData)(block1__DOT____VdfgRegularize_h0843a2b9_0_1) 
                                 & (IData)(block1__DOT____VdfgRegularize_h0843a2b9_0_2));
    __PVT__block1__DOT__g_out = ((IData)(block1__DOT____Vcellout__block3__g_out) 
                                 | (((IData)(block1__DOT____Vcellout__block2__g_out) 
                                     & (IData)(__PVT__block1__DOT__block3__DOT__p_out)) 
                                    | ((IData)(block1__DOT____VdfgRegularize_h0843a2b9_0_2) 
                                       & ((IData)(block1__DOT____Vcellout__block1__g_out) 
                                          | (IData)(block1__DOT____VdfgRegularize_h0843a2b9_0_0)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5 = ((IData)(
                                                        (vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                                                         >> 0x0000000dU)) 
                                                & (IData)(vlSelfRef.__VdfgRegularize_hf246a9bd_1_8));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6 = ((IData)(
                                                        (vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                                                         >> 9U)) 
                                                & (IData)(vlSelfRef.__VdfgRegularize_hf246a9bd_1_6));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_10 = ((IData)(
                                                         (vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                                                          >> 0x00000010U)) 
                                                 & (IData)(vlSelfRef.__PVT__block1__DOT__block0__DOT__cin));
    vlSelfRef.__PVT__block1__DOT__block2__DOT__cin 
        = ((IData)(block1__DOT____Vcellout__block1__g_out) 
           | ((IData)(block1__DOT____VdfgRegularize_h0843a2b9_0_0) 
              | ((IData)(block1__DOT____VdfgRegularize_h0843a2b9_0_1) 
                 & (IData)(vlSelfRef.__PVT__block1__DOT__block0__DOT__cin))));
    vlSelfRef.__PVT__block1__DOT__block1__DOT__cin 
        = ((IData)(__PVT__block1__DOT__g__BRA__0__KET__) 
           | ((IData)(vlSelfRef.__PVT__block1__DOT__block0__DOT__cin) 
              & (IData)(__PVT__block1__DOT__block0__DOT__p_out)));
    vlSelfRef.__PVT__block2__DOT__block0__DOT__cin 
        = ((IData)(__PVT__block1__DOT__g_out) | ((IData)(__PVT__block1__DOT__p_out) 
                                                 & (IData)(vlSelfRef.__PVT__block1__DOT__block0__DOT__cin)));
    vlSelfRef.__PVT__block3__DOT__block0__DOT__cin 
        = (((IData)(block2__DOT____Vcellout__block3__g_out) 
            | (((IData)(block2__DOT____Vcellout__block2__g_out) 
                & (IData)(__PVT__block2__DOT__block3__DOT__p_out)) 
               | ((IData)(block2__DOT____VdfgRegularize_h0843a2b9_0_2) 
                  & ((IData)(block2__DOT____Vcellout__block1__g_out) 
                     | (IData)(block2__DOT____VdfgRegularize_h0843a2b9_0_0))))) 
           | (((IData)(__PVT__block1__DOT__g_out) & (IData)(__PVT__block2__DOT__p_out)) 
              | ((IData)(__PVT__block1__DOT__p_out) 
                 & ((IData)(__PVT__block2__DOT__p_out) 
                    & (IData)(vlSelfRef.__PVT__block1__DOT__block0__DOT__cin)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12 = ((IData)(
                                                         (vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                                                          >> 0x00000011U)) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_hf246a9bd_1_10));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_14 = ((IData)(
                                                         (vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                                                          >> 0x00000018U)) 
                                                 & (IData)(vlSelfRef.__PVT__block1__DOT__block2__DOT__cin));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_12 = ((IData)(
                                                         (vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                                                          >> 0x00000014U)) 
                                                 & (IData)(vlSelfRef.__PVT__block1__DOT__block1__DOT__cin));
    vlSelfRef.__PVT__block1__DOT__block3__DOT__cin 
        = ((IData)(block1__DOT____Vcellout__block2__g_out) 
           | (((IData)(block1__DOT____Vcellout__block1__g_out) 
               & (IData)(__PVT__block1__DOT__block2__DOT__p_out)) 
              | ((IData)(__PVT__block1__DOT__block1__DOT__p_out) 
                 & ((IData)(__PVT__block1__DOT__block2__DOT__p_out) 
                    & (IData)(vlSelfRef.__PVT__block1__DOT__block1__DOT__cin)))));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_18 = ((IData)(
                                                         (vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                                                          >> 0x00000020U)) 
                                                 & (IData)(vlSelfRef.__PVT__block2__DOT__block0__DOT__cin));
    vlSelfRef.__PVT__block2__DOT__block2__DOT__cin 
        = ((IData)(block2__DOT____Vcellout__block1__g_out) 
           | ((IData)(block2__DOT____VdfgRegularize_h0843a2b9_0_0) 
              | ((IData)(block2__DOT____VdfgRegularize_h0843a2b9_0_1) 
                 & (IData)(vlSelfRef.__PVT__block2__DOT__block0__DOT__cin))));
    vlSelfRef.__PVT__block2__DOT__block1__DOT__cin 
        = ((IData)(__PVT__block2__DOT__g__BRA__0__KET__) 
           | ((IData)(vlSelfRef.__PVT__block2__DOT__block0__DOT__cin) 
              & (IData)(__PVT__block2__DOT__block0__DOT__p_out)));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_26 = ((IData)(
                                                         (vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                                                          >> 0x00000030U)) 
                                                 & (IData)(vlSelfRef.__PVT__block3__DOT__block0__DOT__cin));
    vlSelfRef.__PVT__block3__DOT__block2__DOT__cin 
        = ((IData)(block3__DOT____Vcellout__block1__g_out) 
           | (((IData)(__PVT__block3__DOT__block1__DOT__p_out) 
               & (IData)(__PVT__block3__DOT__g__BRA__0__KET__)) 
              | (((IData)(__PVT__block3__DOT__block1__DOT__p_out) 
                  & (IData)(__PVT__block3__DOT__block0__DOT__p_out)) 
                 & (IData)(vlSelfRef.__PVT__block3__DOT__block0__DOT__cin))));
    vlSelfRef.__PVT__block3__DOT__block1__DOT__cin 
        = ((IData)(__PVT__block3__DOT__g__BRA__0__KET__) 
           | ((IData)(vlSelfRef.__PVT__block3__DOT__block0__DOT__cin) 
              & (IData)(__PVT__block3__DOT__block0__DOT__p_out)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10 = ((IData)(
                                                         (vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                                                          >> 0x00000019U)) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_hf246a9bd_1_14));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11 = ((IData)(
                                                         (vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                                                          >> 0x00000015U)) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_hf246a9bd_1_12));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_16 = ((IData)(
                                                         (vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                                                          >> 0x0000001cU)) 
                                                 & (IData)(vlSelfRef.__PVT__block1__DOT__block3__DOT__cin));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16 = ((IData)(
                                                         (vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                                                          >> 0x00000021U)) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_hf246a9bd_1_18));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_22 = ((IData)(
                                                         (vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                                                          >> 0x00000028U)) 
                                                 & (IData)(vlSelfRef.__PVT__block2__DOT__block2__DOT__cin));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_20 = ((IData)(
                                                         (vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                                                          >> 0x00000024U)) 
                                                 & (IData)(vlSelfRef.__PVT__block2__DOT__block1__DOT__cin));
    vlSelfRef.__PVT__block2__DOT__block3__DOT__cin 
        = ((IData)(block2__DOT____Vcellout__block2__g_out) 
           | (((IData)(block2__DOT____Vcellout__block1__g_out) 
               & (IData)(__PVT__block2__DOT__block2__DOT__p_out)) 
              | ((IData)(__PVT__block2__DOT__block1__DOT__p_out) 
                 & ((IData)(__PVT__block2__DOT__block2__DOT__p_out) 
                    & (IData)(vlSelfRef.__PVT__block2__DOT__block1__DOT__cin)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20 = ((IData)(
                                                         (vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                                                          >> 0x00000031U)) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_hf246a9bd_1_26));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_30 = ((IData)(
                                                         (vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                                                          >> 0x00000038U)) 
                                                 & (IData)(vlSelfRef.__PVT__block3__DOT__block2__DOT__cin));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_28 = ((IData)(
                                                         (vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                                                          >> 0x00000034U)) 
                                                 & (IData)(vlSelfRef.__PVT__block3__DOT__block1__DOT__cin));
    vlSelfRef.__PVT__block3__DOT__block3__DOT__cin 
        = ((IData)(block3__DOT____Vcellout__block2__g_out) 
           | (((IData)(block3__DOT____Vcellout__block1__g_out) 
               & (IData)(__PVT__block3__DOT__block2__DOT__p_out)) 
              | ((IData)(__PVT__block3__DOT__block1__DOT__p_out) 
                 & ((IData)(__PVT__block3__DOT__block2__DOT__p_out) 
                    & (IData)(vlSelfRef.__PVT__block3__DOT__block1__DOT__cin)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9 = ((IData)(
                                                        (vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                                                         >> 0x0000001dU)) 
                                                & (IData)(vlSelfRef.__VdfgRegularize_hf246a9bd_1_16));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14 = ((IData)(
                                                         (vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                                                          >> 0x00000029U)) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_hf246a9bd_1_22));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15 = ((IData)(
                                                         (vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                                                          >> 0x00000025U)) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_hf246a9bd_1_20));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_24 = ((IData)(
                                                         (vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                                                          >> 0x0000002cU)) 
                                                 & (IData)(vlSelfRef.__PVT__block2__DOT__block3__DOT__cin));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18 = ((IData)(
                                                         (vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                                                          >> 0x00000039U)) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_hf246a9bd_1_30));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19 = ((IData)(
                                                         (vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                                                          >> 0x00000035U)) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_hf246a9bd_1_28));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_32 = ((IData)(
                                                         (vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                                                          >> 0x0000003cU)) 
                                                 & (IData)(vlSelfRef.__PVT__block3__DOT__block3__DOT__cin));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13 = ((IData)(
                                                         (vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                                                          >> 0x0000002dU)) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_hf246a9bd_1_24));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17 = ((IData)(
                                                         (vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                                                          >> 0x0000003dU)) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_hf246a9bd_1_32));
}

void Vsoc_top_cla_64b___nba_sequent__TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst__0(Vsoc_top_cla_64b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsoc_top_cla_64b___nba_sequent__TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst__0\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ b;
    b = 0;
    CData/*0:0*/ __PVT__block0__DOT__g__BRA__0__KET__;
    __PVT__block0__DOT__g__BRA__0__KET__ = 0;
    CData/*0:0*/ block0__DOT____Vcellout__block1__g_out;
    block0__DOT____Vcellout__block1__g_out = 0;
    CData/*0:0*/ block0__DOT____Vcellout__block2__g_out;
    block0__DOT____Vcellout__block2__g_out = 0;
    CData/*0:0*/ block0__DOT____Vcellout__block3__g_out;
    block0__DOT____Vcellout__block3__g_out = 0;
    CData/*0:0*/ block0__DOT____VdfgRegularize_h0843a2b9_0_0;
    block0__DOT____VdfgRegularize_h0843a2b9_0_0 = 0;
    CData/*0:0*/ block0__DOT____VdfgRegularize_h0843a2b9_0_1;
    block0__DOT____VdfgRegularize_h0843a2b9_0_1 = 0;
    CData/*0:0*/ block0__DOT____VdfgRegularize_h0843a2b9_0_2;
    block0__DOT____VdfgRegularize_h0843a2b9_0_2 = 0;
    CData/*0:0*/ __PVT__block0__DOT__block0__DOT__p_out;
    __PVT__block0__DOT__block0__DOT__p_out = 0;
    CData/*0:0*/ __PVT__block0__DOT__block1__DOT__p_out;
    __PVT__block0__DOT__block1__DOT__p_out = 0;
    CData/*0:0*/ __PVT__block0__DOT__block2__DOT__p_out;
    __PVT__block0__DOT__block2__DOT__p_out = 0;
    CData/*0:0*/ __PVT__block0__DOT__block3__DOT__p_out;
    __PVT__block0__DOT__block3__DOT__p_out = 0;
    CData/*0:0*/ __PVT__block1__DOT__g_out;
    __PVT__block1__DOT__g_out = 0;
    CData/*0:0*/ __PVT__block1__DOT__p_out;
    __PVT__block1__DOT__p_out = 0;
    CData/*0:0*/ __PVT__block1__DOT__g__BRA__0__KET__;
    __PVT__block1__DOT__g__BRA__0__KET__ = 0;
    CData/*0:0*/ block1__DOT____Vcellout__block1__g_out;
    block1__DOT____Vcellout__block1__g_out = 0;
    CData/*0:0*/ block1__DOT____Vcellout__block2__g_out;
    block1__DOT____Vcellout__block2__g_out = 0;
    CData/*0:0*/ block1__DOT____Vcellout__block3__g_out;
    block1__DOT____Vcellout__block3__g_out = 0;
    CData/*0:0*/ block1__DOT____VdfgRegularize_h0843a2b9_0_0;
    block1__DOT____VdfgRegularize_h0843a2b9_0_0 = 0;
    CData/*0:0*/ block1__DOT____VdfgRegularize_h0843a2b9_0_1;
    block1__DOT____VdfgRegularize_h0843a2b9_0_1 = 0;
    CData/*0:0*/ block1__DOT____VdfgRegularize_h0843a2b9_0_2;
    block1__DOT____VdfgRegularize_h0843a2b9_0_2 = 0;
    CData/*0:0*/ __PVT__block1__DOT__block0__DOT__p_out;
    __PVT__block1__DOT__block0__DOT__p_out = 0;
    CData/*0:0*/ __PVT__block1__DOT__block1__DOT__p_out;
    __PVT__block1__DOT__block1__DOT__p_out = 0;
    CData/*0:0*/ __PVT__block1__DOT__block2__DOT__p_out;
    __PVT__block1__DOT__block2__DOT__p_out = 0;
    CData/*0:0*/ __PVT__block1__DOT__block3__DOT__p_out;
    __PVT__block1__DOT__block3__DOT__p_out = 0;
    CData/*0:0*/ __PVT__block2__DOT__g_out;
    __PVT__block2__DOT__g_out = 0;
    CData/*0:0*/ __PVT__block2__DOT__p_out;
    __PVT__block2__DOT__p_out = 0;
    CData/*0:0*/ __PVT__block2__DOT__g__BRA__0__KET__;
    __PVT__block2__DOT__g__BRA__0__KET__ = 0;
    CData/*0:0*/ block2__DOT____Vcellout__block1__g_out;
    block2__DOT____Vcellout__block1__g_out = 0;
    CData/*0:0*/ block2__DOT____Vcellout__block2__g_out;
    block2__DOT____Vcellout__block2__g_out = 0;
    CData/*0:0*/ block2__DOT____Vcellout__block3__g_out;
    block2__DOT____Vcellout__block3__g_out = 0;
    CData/*0:0*/ block2__DOT____VdfgRegularize_h0843a2b9_0_0;
    block2__DOT____VdfgRegularize_h0843a2b9_0_0 = 0;
    CData/*0:0*/ block2__DOT____VdfgRegularize_h0843a2b9_0_1;
    block2__DOT____VdfgRegularize_h0843a2b9_0_1 = 0;
    CData/*0:0*/ block2__DOT____VdfgRegularize_h0843a2b9_0_2;
    block2__DOT____VdfgRegularize_h0843a2b9_0_2 = 0;
    CData/*0:0*/ __PVT__block2__DOT__block0__DOT__p_out;
    __PVT__block2__DOT__block0__DOT__p_out = 0;
    CData/*0:0*/ __PVT__block2__DOT__block1__DOT__p_out;
    __PVT__block2__DOT__block1__DOT__p_out = 0;
    CData/*0:0*/ __PVT__block2__DOT__block2__DOT__p_out;
    __PVT__block2__DOT__block2__DOT__p_out = 0;
    CData/*0:0*/ __PVT__block2__DOT__block3__DOT__p_out;
    __PVT__block2__DOT__block3__DOT__p_out = 0;
    CData/*0:0*/ __PVT__block3__DOT__g__BRA__0__KET__;
    __PVT__block3__DOT__g__BRA__0__KET__ = 0;
    CData/*0:0*/ block3__DOT____Vcellout__block1__g_out;
    block3__DOT____Vcellout__block1__g_out = 0;
    CData/*0:0*/ block3__DOT____Vcellout__block2__g_out;
    block3__DOT____Vcellout__block2__g_out = 0;
    CData/*0:0*/ block3__DOT____VdfgRegularize_h0843a2b9_0_0;
    block3__DOT____VdfgRegularize_h0843a2b9_0_0 = 0;
    CData/*0:0*/ block3__DOT____VdfgRegularize_h0843a2b9_0_1;
    block3__DOT____VdfgRegularize_h0843a2b9_0_1 = 0;
    CData/*0:0*/ __PVT__block3__DOT__block0__DOT__p_out;
    __PVT__block3__DOT__block0__DOT__p_out = 0;
    CData/*0:0*/ __PVT__block3__DOT__block1__DOT__p_out;
    __PVT__block3__DOT__block1__DOT__p_out = 0;
    CData/*0:0*/ __PVT__block3__DOT__block2__DOT__p_out;
    __PVT__block3__DOT__block2__DOT__p_out = 0;
    SData/*8:0*/ __Vtableidx17;
    __Vtableidx17 = 0;
    SData/*8:0*/ __Vtableidx18;
    __Vtableidx18 = 0;
    SData/*8:0*/ __Vtableidx19;
    __Vtableidx19 = 0;
    SData/*8:0*/ __Vtableidx20;
    __Vtableidx20 = 0;
    SData/*8:0*/ __Vtableidx21;
    __Vtableidx21 = 0;
    SData/*8:0*/ __Vtableidx22;
    __Vtableidx22 = 0;
    SData/*8:0*/ __Vtableidx23;
    __Vtableidx23 = 0;
    SData/*8:0*/ __Vtableidx24;
    __Vtableidx24 = 0;
    SData/*8:0*/ __Vtableidx25;
    __Vtableidx25 = 0;
    SData/*8:0*/ __Vtableidx26;
    __Vtableidx26 = 0;
    SData/*8:0*/ __Vtableidx27;
    __Vtableidx27 = 0;
    SData/*8:0*/ __Vtableidx28;
    __Vtableidx28 = 0;
    SData/*8:0*/ __Vtableidx29;
    __Vtableidx29 = 0;
    SData/*8:0*/ __Vtableidx30;
    __Vtableidx30 = 0;
    SData/*8:0*/ __Vtableidx31;
    __Vtableidx31 = 0;
    // Body
    b = (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
         ^ (- (QData)((IData)((8U == (IData)(vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_ctrl))))));
    vlSelfRef.__PVT__block3__DOT__block3__DOT__g = 
        (0x0000000fU & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                 >> 0x0000003cU)) & (IData)(
                                                            (b 
                                                             >> 0x0000003cU))));
    vlSelfRef.__PVT__block3__DOT__block3__DOT__p = 
        (0x0000000fU & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                 >> 0x0000003cU)) ^ (IData)(
                                                            (b 
                                                             >> 0x0000003cU))));
    vlSelfRef.__PVT__block3__DOT__block2__DOT__g = 
        (0x0000000fU & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                 >> 0x00000038U)) & (IData)(
                                                            (b 
                                                             >> 0x00000038U))));
    vlSelfRef.__PVT__block3__DOT__block2__DOT__p = 
        (0x0000000fU & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                 >> 0x00000038U)) ^ (IData)(
                                                            (b 
                                                             >> 0x00000038U))));
    vlSelfRef.__PVT__block3__DOT__block1__DOT__g = 
        (0x0000000fU & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                 >> 0x00000034U)) & (IData)(
                                                            (b 
                                                             >> 0x00000034U))));
    vlSelfRef.__PVT__block3__DOT__block0__DOT__g = 
        (0x0000000fU & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                 >> 0x00000030U)) & (IData)(
                                                            (b 
                                                             >> 0x00000030U))));
    vlSelfRef.__PVT__block3__DOT__block1__DOT__p = 
        (0x0000000fU & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                 >> 0x00000034U)) ^ (IData)(
                                                            (b 
                                                             >> 0x00000034U))));
    vlSelfRef.__PVT__block2__DOT__block3__DOT__g = 
        (0x0000000fU & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                 >> 0x0000002cU)) & (IData)(
                                                            (b 
                                                             >> 0x0000002cU))));
    vlSelfRef.__PVT__block3__DOT__block0__DOT__p = 
        (0x0000000fU & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                 >> 0x00000030U)) ^ (IData)(
                                                            (b 
                                                             >> 0x00000030U))));
    vlSelfRef.__PVT__block2__DOT__block2__DOT__g = 
        (0x0000000fU & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                 >> 0x00000028U)) & (IData)(
                                                            (b 
                                                             >> 0x00000028U))));
    vlSelfRef.__PVT__block2__DOT__block1__DOT__g = 
        (0x0000000fU & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                 >> 0x00000024U)) & (IData)(
                                                            (b 
                                                             >> 0x00000024U))));
    vlSelfRef.__PVT__block2__DOT__block0__DOT__g = 
        (0x0000000fU & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                 >> 0x00000020U)) & (IData)(
                                                            (b 
                                                             >> 0x00000020U))));
    vlSelfRef.__PVT__block1__DOT__block3__DOT__g = 
        (0x0000000fU & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                 >> 0x0000001cU)) & (IData)(
                                                            (b 
                                                             >> 0x0000001cU))));
    vlSelfRef.__PVT__block1__DOT__block2__DOT__g = 
        (0x0000000fU & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                 >> 0x00000018U)) & (IData)(
                                                            (b 
                                                             >> 0x00000018U))));
    vlSelfRef.__PVT__block1__DOT__block1__DOT__g = 
        (0x0000000fU & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                 >> 0x00000014U)) & (IData)(
                                                            (b 
                                                             >> 0x00000014U))));
    vlSelfRef.__PVT__block2__DOT__block2__DOT__p = 
        (0x0000000fU & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                 >> 0x00000028U)) ^ (IData)(
                                                            (b 
                                                             >> 0x00000028U))));
    vlSelfRef.__PVT__block2__DOT__block3__DOT__p = 
        (0x0000000fU & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                 >> 0x0000002cU)) ^ (IData)(
                                                            (b 
                                                             >> 0x0000002cU))));
    vlSelfRef.__PVT__block2__DOT__block0__DOT__p = 
        (0x0000000fU & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                 >> 0x00000020U)) ^ (IData)(
                                                            (b 
                                                             >> 0x00000020U))));
    vlSelfRef.__PVT__block1__DOT__block0__DOT__g = 
        (0x0000000fU & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                 >> 0x00000010U)) & (IData)(
                                                            (b 
                                                             >> 0x00000010U))));
    vlSelfRef.__PVT__block0__DOT__block3__DOT__g = 
        (0x0000000fU & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                 >> 0x0000000cU)) & (IData)(
                                                            (b 
                                                             >> 0x0000000cU))));
    vlSelfRef.__PVT__block2__DOT__block1__DOT__p = 
        (0x0000000fU & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                 >> 0x00000024U)) ^ (IData)(
                                                            (b 
                                                             >> 0x00000024U))));
    vlSelfRef.__PVT__block0__DOT__block2__DOT__g = 
        (0x0000000fU & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                 >> 8U)) & (IData)(
                                                   (b 
                                                    >> 8U))));
    vlSelfRef.__PVT__block0__DOT__block1__DOT__g = 
        (0x0000000fU & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                 >> 4U)) & (IData)(
                                                   (b 
                                                    >> 4U))));
    vlSelfRef.__PVT__block0__DOT__block0__DOT__g = 
        (0x0000000fU & ((IData)(vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a) 
                        & (IData)(b)));
    vlSelfRef.__PVT__block1__DOT__block0__DOT__p = 
        (0x0000000fU & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                 >> 0x00000010U)) ^ (IData)(
                                                            (b 
                                                             >> 0x00000010U))));
    vlSelfRef.__PVT__block1__DOT__block2__DOT__p = 
        (0x0000000fU & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                 >> 0x00000018U)) ^ (IData)(
                                                            (b 
                                                             >> 0x00000018U))));
    vlSelfRef.__PVT__block0__DOT__block2__DOT__p = 
        (0x0000000fU & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                 >> 8U)) ^ (IData)(
                                                   (b 
                                                    >> 8U))));
    vlSelfRef.__PVT__block1__DOT__block1__DOT__p = 
        (0x0000000fU & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                 >> 0x00000014U)) ^ (IData)(
                                                            (b 
                                                             >> 0x00000014U))));
    vlSelfRef.__PVT__block1__DOT__block3__DOT__p = 
        (0x0000000fU & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                 >> 0x0000001cU)) ^ (IData)(
                                                            (b 
                                                             >> 0x0000001cU))));
    vlSelfRef.__PVT__block0__DOT__block0__DOT__p = 
        (0x0000000fU & ((IData)(vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a) 
                        ^ (IData)(b)));
    vlSelfRef.__PVT__block0__DOT__block3__DOT__p = 
        (0x0000000fU & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                 >> 0x0000000cU)) ^ (IData)(
                                                            (b 
                                                             >> 0x0000000cU))));
    vlSelfRef.__PVT__block0__DOT__block1__DOT__p = 
        (0x0000000fU & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                                 >> 4U)) ^ (IData)(
                                                   (b 
                                                    >> 4U))));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_31 = (1U 
                                                 & (((IData)(vlSelfRef.__PVT__block3__DOT__block3__DOT__p) 
                                                     >> 1U) 
                                                    & (IData)(vlSelfRef.__PVT__block3__DOT__block3__DOT__g)));
    __PVT__block3__DOT__block2__DOT__p_out = (IData)(
                                                     (0x0fU 
                                                      == (IData)(vlSelfRef.__PVT__block3__DOT__block2__DOT__p)));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_29 = (1U 
                                                 & (((IData)(vlSelfRef.__PVT__block3__DOT__block2__DOT__p) 
                                                     >> 1U) 
                                                    & (IData)(vlSelfRef.__PVT__block3__DOT__block2__DOT__g)));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_27 = (1U 
                                                 & (((IData)(vlSelfRef.__PVT__block3__DOT__block1__DOT__p) 
                                                     >> 1U) 
                                                    & (IData)(vlSelfRef.__PVT__block3__DOT__block1__DOT__g)));
    __PVT__block3__DOT__block1__DOT__p_out = (IData)(
                                                     (0x0fU 
                                                      == (IData)(vlSelfRef.__PVT__block3__DOT__block1__DOT__p)));
    __PVT__block3__DOT__block0__DOT__p_out = (IData)(
                                                     (0x0fU 
                                                      == (IData)(vlSelfRef.__PVT__block3__DOT__block0__DOT__p)));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_25 = (1U 
                                                 & (((IData)(vlSelfRef.__PVT__block3__DOT__block0__DOT__p) 
                                                     >> 1U) 
                                                    & (IData)(vlSelfRef.__PVT__block3__DOT__block0__DOT__g)));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_21 = (1U 
                                                 & (((IData)(vlSelfRef.__PVT__block2__DOT__block2__DOT__p) 
                                                     >> 1U) 
                                                    & (IData)(vlSelfRef.__PVT__block2__DOT__block2__DOT__g)));
    __PVT__block2__DOT__block2__DOT__p_out = (IData)(
                                                     (0x0fU 
                                                      == (IData)(vlSelfRef.__PVT__block2__DOT__block2__DOT__p)));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_23 = (1U 
                                                 & (((IData)(vlSelfRef.__PVT__block2__DOT__block3__DOT__p) 
                                                     >> 1U) 
                                                    & (IData)(vlSelfRef.__PVT__block2__DOT__block3__DOT__g)));
    __PVT__block2__DOT__block3__DOT__p_out = (IData)(
                                                     (0x0fU 
                                                      == (IData)(vlSelfRef.__PVT__block2__DOT__block3__DOT__p)));
    __PVT__block2__DOT__block0__DOT__p_out = (IData)(
                                                     (0x0fU 
                                                      == (IData)(vlSelfRef.__PVT__block2__DOT__block0__DOT__p)));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_17 = (1U 
                                                 & (((IData)(vlSelfRef.__PVT__block2__DOT__block0__DOT__p) 
                                                     >> 1U) 
                                                    & (IData)(vlSelfRef.__PVT__block2__DOT__block0__DOT__g)));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_19 = (1U 
                                                 & (((IData)(vlSelfRef.__PVT__block2__DOT__block1__DOT__p) 
                                                     >> 1U) 
                                                    & (IData)(vlSelfRef.__PVT__block2__DOT__block1__DOT__g)));
    __PVT__block2__DOT__block1__DOT__p_out = (IData)(
                                                     (0x0fU 
                                                      == (IData)(vlSelfRef.__PVT__block2__DOT__block1__DOT__p)));
    __PVT__block1__DOT__block0__DOT__p_out = (IData)(
                                                     (0x0fU 
                                                      == (IData)(vlSelfRef.__PVT__block1__DOT__block0__DOT__p)));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_9 = (1U 
                                                & (((IData)(vlSelfRef.__PVT__block1__DOT__block0__DOT__p) 
                                                    >> 1U) 
                                                   & (IData)(vlSelfRef.__PVT__block1__DOT__block0__DOT__g)));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_13 = (1U 
                                                 & (((IData)(vlSelfRef.__PVT__block1__DOT__block2__DOT__p) 
                                                     >> 1U) 
                                                    & (IData)(vlSelfRef.__PVT__block1__DOT__block2__DOT__g)));
    __PVT__block1__DOT__block2__DOT__p_out = (IData)(
                                                     (0x0fU 
                                                      == (IData)(vlSelfRef.__PVT__block1__DOT__block2__DOT__p)));
    __PVT__block0__DOT__block2__DOT__p_out = (IData)(
                                                     (0x0fU 
                                                      == (IData)(vlSelfRef.__PVT__block0__DOT__block2__DOT__p)));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_5 = (1U 
                                                & (((IData)(vlSelfRef.__PVT__block0__DOT__block2__DOT__p) 
                                                    >> 1U) 
                                                   & (IData)(vlSelfRef.__PVT__block0__DOT__block2__DOT__g)));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_11 = (1U 
                                                 & (((IData)(vlSelfRef.__PVT__block1__DOT__block1__DOT__p) 
                                                     >> 1U) 
                                                    & (IData)(vlSelfRef.__PVT__block1__DOT__block1__DOT__g)));
    __PVT__block1__DOT__block1__DOT__p_out = (IData)(
                                                     (0x0fU 
                                                      == (IData)(vlSelfRef.__PVT__block1__DOT__block1__DOT__p)));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_15 = (1U 
                                                 & (((IData)(vlSelfRef.__PVT__block1__DOT__block3__DOT__p) 
                                                     >> 1U) 
                                                    & (IData)(vlSelfRef.__PVT__block1__DOT__block3__DOT__g)));
    __PVT__block1__DOT__block3__DOT__p_out = (IData)(
                                                     (0x0fU 
                                                      == (IData)(vlSelfRef.__PVT__block1__DOT__block3__DOT__p)));
    vlSelfRef.block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.__PVT__block0__DOT__block0__DOT__p) 
           & (8U == (IData)(vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_ctrl)));
    __PVT__block0__DOT__block0__DOT__p_out = (IData)(
                                                     (0x0fU 
                                                      == (IData)(vlSelfRef.__PVT__block0__DOT__block0__DOT__p)));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_1 = (1U 
                                                & (((IData)(vlSelfRef.__PVT__block0__DOT__block0__DOT__p) 
                                                    >> 1U) 
                                                   & (IData)(vlSelfRef.__PVT__block0__DOT__block0__DOT__g)));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_7 = (1U 
                                                & (((IData)(vlSelfRef.__PVT__block0__DOT__block3__DOT__p) 
                                                    >> 1U) 
                                                   & (IData)(vlSelfRef.__PVT__block0__DOT__block3__DOT__g)));
    __PVT__block0__DOT__block3__DOT__p_out = (IData)(
                                                     (0x0fU 
                                                      == (IData)(vlSelfRef.__PVT__block0__DOT__block3__DOT__p)));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_3 = (1U 
                                                & (((IData)(vlSelfRef.__PVT__block0__DOT__block1__DOT__p) 
                                                    >> 1U) 
                                                   & (IData)(vlSelfRef.__PVT__block0__DOT__block1__DOT__g)));
    __PVT__block0__DOT__block1__DOT__p_out = (IData)(
                                                     (0x0fU 
                                                      == (IData)(vlSelfRef.__PVT__block0__DOT__block1__DOT__p)));
    __Vtableidx31 = (((IData)(vlSelfRef.__VdfgRegularize_hf246a9bd_1_29) 
                      << 8U) | (((IData)(vlSelfRef.__PVT__block3__DOT__block2__DOT__p) 
                                 << 4U) | (IData)(vlSelfRef.__PVT__block3__DOT__block2__DOT__g)));
    block3__DOT____Vcellout__block2__g_out = Vsoc_top__ConstPool__TABLE_h08c4d8a1_0
        [__Vtableidx31];
    __Vtableidx30 = (((IData)(vlSelfRef.__VdfgRegularize_hf246a9bd_1_27) 
                      << 8U) | (((IData)(vlSelfRef.__PVT__block3__DOT__block1__DOT__p) 
                                 << 4U) | (IData)(vlSelfRef.__PVT__block3__DOT__block1__DOT__g)));
    block3__DOT____Vcellout__block1__g_out = Vsoc_top__ConstPool__TABLE_h08c4d8a1_0
        [__Vtableidx30];
    block3__DOT____VdfgRegularize_h0843a2b9_0_1 = ((IData)(__PVT__block3__DOT__block1__DOT__p_out) 
                                                   & (IData)(__PVT__block3__DOT__block0__DOT__p_out));
    __Vtableidx29 = (((IData)(vlSelfRef.__VdfgRegularize_hf246a9bd_1_25) 
                      << 8U) | (((IData)(vlSelfRef.__PVT__block3__DOT__block0__DOT__p) 
                                 << 4U) | (IData)(vlSelfRef.__PVT__block3__DOT__block0__DOT__g)));
    __PVT__block3__DOT__g__BRA__0__KET__ = Vsoc_top__ConstPool__TABLE_h08c4d8a1_0
        [__Vtableidx29];
    __Vtableidx27 = (((IData)(vlSelfRef.__VdfgRegularize_hf246a9bd_1_21) 
                      << 8U) | (((IData)(vlSelfRef.__PVT__block2__DOT__block2__DOT__p) 
                                 << 4U) | (IData)(vlSelfRef.__PVT__block2__DOT__block2__DOT__g)));
    block2__DOT____Vcellout__block2__g_out = Vsoc_top__ConstPool__TABLE_h08c4d8a1_0
        [__Vtableidx27];
    __Vtableidx28 = (((IData)(vlSelfRef.__VdfgRegularize_hf246a9bd_1_23) 
                      << 8U) | (((IData)(vlSelfRef.__PVT__block2__DOT__block3__DOT__p) 
                                 << 4U) | (IData)(vlSelfRef.__PVT__block2__DOT__block3__DOT__g)));
    block2__DOT____Vcellout__block3__g_out = Vsoc_top__ConstPool__TABLE_h08c4d8a1_0
        [__Vtableidx28];
    block2__DOT____VdfgRegularize_h0843a2b9_0_2 = ((IData)(__PVT__block2__DOT__block2__DOT__p_out) 
                                                   & (IData)(__PVT__block2__DOT__block3__DOT__p_out));
    __Vtableidx25 = (((IData)(vlSelfRef.__VdfgRegularize_hf246a9bd_1_17) 
                      << 8U) | (((IData)(vlSelfRef.__PVT__block2__DOT__block0__DOT__p) 
                                 << 4U) | (IData)(vlSelfRef.__PVT__block2__DOT__block0__DOT__g)));
    __PVT__block2__DOT__g__BRA__0__KET__ = Vsoc_top__ConstPool__TABLE_h08c4d8a1_0
        [__Vtableidx25];
    __Vtableidx26 = (((IData)(vlSelfRef.__VdfgRegularize_hf246a9bd_1_19) 
                      << 8U) | (((IData)(vlSelfRef.__PVT__block2__DOT__block1__DOT__p) 
                                 << 4U) | (IData)(vlSelfRef.__PVT__block2__DOT__block1__DOT__g)));
    block2__DOT____Vcellout__block1__g_out = Vsoc_top__ConstPool__TABLE_h08c4d8a1_0
        [__Vtableidx26];
    block2__DOT____VdfgRegularize_h0843a2b9_0_1 = ((IData)(__PVT__block2__DOT__block1__DOT__p_out) 
                                                   & (IData)(__PVT__block2__DOT__block0__DOT__p_out));
    __Vtableidx21 = (((IData)(vlSelfRef.__VdfgRegularize_hf246a9bd_1_9) 
                      << 8U) | (((IData)(vlSelfRef.__PVT__block1__DOT__block0__DOT__p) 
                                 << 4U) | (IData)(vlSelfRef.__PVT__block1__DOT__block0__DOT__g)));
    __PVT__block1__DOT__g__BRA__0__KET__ = Vsoc_top__ConstPool__TABLE_h08c4d8a1_0
        [__Vtableidx21];
    __Vtableidx23 = (((IData)(vlSelfRef.__VdfgRegularize_hf246a9bd_1_13) 
                      << 8U) | (((IData)(vlSelfRef.__PVT__block1__DOT__block2__DOT__p) 
                                 << 4U) | (IData)(vlSelfRef.__PVT__block1__DOT__block2__DOT__g)));
    block1__DOT____Vcellout__block2__g_out = Vsoc_top__ConstPool__TABLE_h08c4d8a1_0
        [__Vtableidx23];
    __Vtableidx19 = (((IData)(vlSelfRef.__VdfgRegularize_hf246a9bd_1_5) 
                      << 8U) | (((IData)(vlSelfRef.__PVT__block0__DOT__block2__DOT__p) 
                                 << 4U) | (IData)(vlSelfRef.__PVT__block0__DOT__block2__DOT__g)));
    block0__DOT____Vcellout__block2__g_out = Vsoc_top__ConstPool__TABLE_h08c4d8a1_0
        [__Vtableidx19];
    __Vtableidx22 = (((IData)(vlSelfRef.__VdfgRegularize_hf246a9bd_1_11) 
                      << 8U) | (((IData)(vlSelfRef.__PVT__block1__DOT__block1__DOT__p) 
                                 << 4U) | (IData)(vlSelfRef.__PVT__block1__DOT__block1__DOT__g)));
    block1__DOT____Vcellout__block1__g_out = Vsoc_top__ConstPool__TABLE_h08c4d8a1_0
        [__Vtableidx22];
    block1__DOT____VdfgRegularize_h0843a2b9_0_1 = ((IData)(__PVT__block1__DOT__block1__DOT__p_out) 
                                                   & (IData)(__PVT__block1__DOT__block0__DOT__p_out));
    __Vtableidx24 = (((IData)(vlSelfRef.__VdfgRegularize_hf246a9bd_1_15) 
                      << 8U) | (((IData)(vlSelfRef.__PVT__block1__DOT__block3__DOT__p) 
                                 << 4U) | (IData)(vlSelfRef.__PVT__block1__DOT__block3__DOT__g)));
    block1__DOT____Vcellout__block3__g_out = Vsoc_top__ConstPool__TABLE_h08c4d8a1_0
        [__Vtableidx24];
    block1__DOT____VdfgRegularize_h0843a2b9_0_2 = ((IData)(__PVT__block1__DOT__block2__DOT__p_out) 
                                                   & (IData)(__PVT__block1__DOT__block3__DOT__p_out));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_2 = (1U 
                                                & ((IData)(vlSelfRef.__PVT__block0__DOT__block0__DOT__g) 
                                                   | (IData)(vlSelfRef.block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __Vtableidx17 = (((IData)(vlSelfRef.__VdfgRegularize_hf246a9bd_1_1) 
                      << 8U) | (((IData)(vlSelfRef.__PVT__block0__DOT__block0__DOT__p) 
                                 << 4U) | (IData)(vlSelfRef.__PVT__block0__DOT__block0__DOT__g)));
    __PVT__block0__DOT__g__BRA__0__KET__ = Vsoc_top__ConstPool__TABLE_h08c4d8a1_0
        [__Vtableidx17];
    __Vtableidx20 = (((IData)(vlSelfRef.__VdfgRegularize_hf246a9bd_1_7) 
                      << 8U) | (((IData)(vlSelfRef.__PVT__block0__DOT__block3__DOT__p) 
                                 << 4U) | (IData)(vlSelfRef.__PVT__block0__DOT__block3__DOT__g)));
    block0__DOT____Vcellout__block3__g_out = Vsoc_top__ConstPool__TABLE_h08c4d8a1_0
        [__Vtableidx20];
    block0__DOT____VdfgRegularize_h0843a2b9_0_2 = ((IData)(__PVT__block0__DOT__block2__DOT__p_out) 
                                                   & (IData)(__PVT__block0__DOT__block3__DOT__p_out));
    __Vtableidx18 = (((IData)(vlSelfRef.__VdfgRegularize_hf246a9bd_1_3) 
                      << 8U) | (((IData)(vlSelfRef.__PVT__block0__DOT__block1__DOT__p) 
                                 << 4U) | (IData)(vlSelfRef.__PVT__block0__DOT__block1__DOT__g)));
    block0__DOT____Vcellout__block1__g_out = Vsoc_top__ConstPool__TABLE_h08c4d8a1_0
        [__Vtableidx18];
    block0__DOT____VdfgRegularize_h0843a2b9_0_1 = ((IData)(__PVT__block0__DOT__block1__DOT__p_out) 
                                                   & (IData)(__PVT__block0__DOT__block0__DOT__p_out));
    block3__DOT____VdfgRegularize_h0843a2b9_0_0 = ((IData)(__PVT__block3__DOT__block1__DOT__p_out) 
                                                   & (IData)(__PVT__block3__DOT__g__BRA__0__KET__));
    block2__DOT____VdfgRegularize_h0843a2b9_0_0 = ((IData)(__PVT__block2__DOT__block1__DOT__p_out) 
                                                   & (IData)(__PVT__block2__DOT__g__BRA__0__KET__));
    __PVT__block2__DOT__p_out = ((IData)(block2__DOT____VdfgRegularize_h0843a2b9_0_1) 
                                 & (IData)(block2__DOT____VdfgRegularize_h0843a2b9_0_2));
    block1__DOT____VdfgRegularize_h0843a2b9_0_0 = ((IData)(__PVT__block1__DOT__block1__DOT__p_out) 
                                                   & (IData)(__PVT__block1__DOT__g__BRA__0__KET__));
    __PVT__block1__DOT__p_out = ((IData)(block1__DOT____VdfgRegularize_h0843a2b9_0_1) 
                                 & (IData)(block1__DOT____VdfgRegularize_h0843a2b9_0_2));
    vlSelfRef.__PVT__block0__DOT__block1__DOT__cin 
        = ((IData)(__PVT__block0__DOT__g__BRA__0__KET__) 
           | ((8U == (IData)(vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_ctrl)) 
              & (IData)(__PVT__block0__DOT__block0__DOT__p_out)));
    block0__DOT____VdfgRegularize_h0843a2b9_0_0 = ((IData)(__PVT__block0__DOT__block1__DOT__p_out) 
                                                   & (IData)(__PVT__block0__DOT__g__BRA__0__KET__));
    __PVT__block2__DOT__g_out = ((IData)(block2__DOT____Vcellout__block3__g_out) 
                                 | (((IData)(block2__DOT____Vcellout__block2__g_out) 
                                     & (IData)(__PVT__block2__DOT__block3__DOT__p_out)) 
                                    | ((IData)(block2__DOT____VdfgRegularize_h0843a2b9_0_2) 
                                       & ((IData)(block2__DOT____Vcellout__block1__g_out) 
                                          | (IData)(block2__DOT____VdfgRegularize_h0843a2b9_0_0)))));
    __PVT__block1__DOT__g_out = ((IData)(block1__DOT____Vcellout__block3__g_out) 
                                 | (((IData)(block1__DOT____Vcellout__block2__g_out) 
                                     & (IData)(__PVT__block1__DOT__block3__DOT__p_out)) 
                                    | ((IData)(block1__DOT____VdfgRegularize_h0843a2b9_0_2) 
                                       & ((IData)(block1__DOT____Vcellout__block1__g_out) 
                                          | (IData)(block1__DOT____VdfgRegularize_h0843a2b9_0_0)))));
    vlSelfRef.block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.__PVT__block0__DOT__block1__DOT__p) 
           & (IData)(vlSelfRef.__PVT__block0__DOT__block1__DOT__cin));
    vlSelfRef.__PVT__block0__DOT__block3__DOT__cin 
        = ((IData)(block0__DOT____Vcellout__block2__g_out) 
           | (((IData)(block0__DOT____Vcellout__block1__g_out) 
               & (IData)(__PVT__block0__DOT__block2__DOT__p_out)) 
              | ((IData)(__PVT__block0__DOT__block1__DOT__p_out) 
                 & ((IData)(__PVT__block0__DOT__block2__DOT__p_out) 
                    & (IData)(vlSelfRef.__PVT__block0__DOT__block1__DOT__cin)))));
    vlSelfRef.__PVT__block0__DOT__block2__DOT__cin 
        = ((IData)(block0__DOT____Vcellout__block1__g_out) 
           | ((IData)(block0__DOT____VdfgRegularize_h0843a2b9_0_0) 
              | ((IData)(block0__DOT____VdfgRegularize_h0843a2b9_0_1) 
                 & (8U == (IData)(vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_ctrl)))));
    vlSelfRef.__PVT__block1__DOT__block0__DOT__cin 
        = (((IData)(block0__DOT____Vcellout__block3__g_out) 
            | (((IData)(block0__DOT____Vcellout__block2__g_out) 
                & (IData)(__PVT__block0__DOT__block3__DOT__p_out)) 
               | ((IData)(block0__DOT____VdfgRegularize_h0843a2b9_0_2) 
                  & ((IData)(block0__DOT____Vcellout__block1__g_out) 
                     | (IData)(block0__DOT____VdfgRegularize_h0843a2b9_0_0))))) 
           | ((8U == (IData)(vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_ctrl)) 
              & ((IData)(block0__DOT____VdfgRegularize_h0843a2b9_0_1) 
                 & (IData)(block0__DOT____VdfgRegularize_h0843a2b9_0_2))));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_4 = (1U 
                                                & ((IData)(vlSelfRef.__PVT__block0__DOT__block1__DOT__g) 
                                                   | (IData)(vlSelfRef.block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0)));
    vlSelfRef.block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.__PVT__block0__DOT__block3__DOT__p) 
           & (IData)(vlSelfRef.__PVT__block0__DOT__block3__DOT__cin));
    vlSelfRef.block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.__PVT__block0__DOT__block2__DOT__p) 
           & (IData)(vlSelfRef.__PVT__block0__DOT__block2__DOT__cin));
    vlSelfRef.block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.__PVT__block1__DOT__block0__DOT__p) 
           & (IData)(vlSelfRef.__PVT__block1__DOT__block0__DOT__cin));
    vlSelfRef.__PVT__block1__DOT__block2__DOT__cin 
        = ((IData)(block1__DOT____Vcellout__block1__g_out) 
           | ((IData)(block1__DOT____VdfgRegularize_h0843a2b9_0_0) 
              | ((IData)(block1__DOT____VdfgRegularize_h0843a2b9_0_1) 
                 & (IData)(vlSelfRef.__PVT__block1__DOT__block0__DOT__cin))));
    vlSelfRef.__PVT__block1__DOT__block1__DOT__cin 
        = ((IData)(__PVT__block1__DOT__g__BRA__0__KET__) 
           | ((IData)(vlSelfRef.__PVT__block1__DOT__block0__DOT__cin) 
              & (IData)(__PVT__block1__DOT__block0__DOT__p_out)));
    vlSelfRef.__PVT__block2__DOT__block0__DOT__cin 
        = ((IData)(__PVT__block1__DOT__g_out) | ((IData)(__PVT__block1__DOT__p_out) 
                                                 & (IData)(vlSelfRef.__PVT__block1__DOT__block0__DOT__cin)));
    vlSelfRef.__PVT__block3__DOT__block0__DOT__cin 
        = ((IData)(__PVT__block2__DOT__g_out) | (((IData)(__PVT__block1__DOT__g_out) 
                                                  & (IData)(__PVT__block2__DOT__p_out)) 
                                                 | ((IData)(__PVT__block1__DOT__p_out) 
                                                    & ((IData)(__PVT__block2__DOT__p_out) 
                                                       & (IData)(vlSelfRef.__PVT__block1__DOT__block0__DOT__cin)))));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_8 = (1U 
                                                & ((IData)(vlSelfRef.__PVT__block0__DOT__block3__DOT__g) 
                                                   | (IData)(vlSelfRef.block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0)));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_6 = (1U 
                                                & ((IData)(vlSelfRef.__PVT__block0__DOT__block2__DOT__g) 
                                                   | (IData)(vlSelfRef.block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0)));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_10 = (1U 
                                                 & ((IData)(vlSelfRef.__PVT__block1__DOT__block0__DOT__g) 
                                                    | (IData)(vlSelfRef.block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0)));
    vlSelfRef.block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.__PVT__block1__DOT__block2__DOT__p) 
           & (IData)(vlSelfRef.__PVT__block1__DOT__block2__DOT__cin));
    vlSelfRef.block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.__PVT__block1__DOT__block1__DOT__p) 
           & (IData)(vlSelfRef.__PVT__block1__DOT__block1__DOT__cin));
    vlSelfRef.__PVT__block1__DOT__block3__DOT__cin 
        = ((IData)(block1__DOT____Vcellout__block2__g_out) 
           | (((IData)(block1__DOT____Vcellout__block1__g_out) 
               & (IData)(__PVT__block1__DOT__block2__DOT__p_out)) 
              | ((IData)(__PVT__block1__DOT__block1__DOT__p_out) 
                 & ((IData)(__PVT__block1__DOT__block2__DOT__p_out) 
                    & (IData)(vlSelfRef.__PVT__block1__DOT__block1__DOT__cin)))));
    vlSelfRef.block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.__PVT__block2__DOT__block0__DOT__p) 
           & (IData)(vlSelfRef.__PVT__block2__DOT__block0__DOT__cin));
    vlSelfRef.__PVT__block2__DOT__block2__DOT__cin 
        = ((IData)(block2__DOT____Vcellout__block1__g_out) 
           | ((IData)(block2__DOT____VdfgRegularize_h0843a2b9_0_0) 
              | ((IData)(block2__DOT____VdfgRegularize_h0843a2b9_0_1) 
                 & (IData)(vlSelfRef.__PVT__block2__DOT__block0__DOT__cin))));
    vlSelfRef.__PVT__block2__DOT__block1__DOT__cin 
        = ((IData)(__PVT__block2__DOT__g__BRA__0__KET__) 
           | ((IData)(vlSelfRef.__PVT__block2__DOT__block0__DOT__cin) 
              & (IData)(__PVT__block2__DOT__block0__DOT__p_out)));
    vlSelfRef.block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.__PVT__block3__DOT__block0__DOT__p) 
           & (IData)(vlSelfRef.__PVT__block3__DOT__block0__DOT__cin));
    vlSelfRef.__PVT__block3__DOT__block2__DOT__cin 
        = ((IData)(block3__DOT____Vcellout__block1__g_out) 
           | ((IData)(block3__DOT____VdfgRegularize_h0843a2b9_0_0) 
              | ((IData)(block3__DOT____VdfgRegularize_h0843a2b9_0_1) 
                 & (IData)(vlSelfRef.__PVT__block3__DOT__block0__DOT__cin))));
    vlSelfRef.__PVT__block3__DOT__block1__DOT__cin 
        = ((IData)(__PVT__block3__DOT__g__BRA__0__KET__) 
           | ((IData)(vlSelfRef.__PVT__block3__DOT__block0__DOT__cin) 
              & (IData)(__PVT__block3__DOT__block0__DOT__p_out)));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_14 = (1U 
                                                 & ((IData)(vlSelfRef.__PVT__block1__DOT__block2__DOT__g) 
                                                    | (IData)(vlSelfRef.block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0)));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_12 = (1U 
                                                 & ((IData)(vlSelfRef.__PVT__block1__DOT__block1__DOT__g) 
                                                    | (IData)(vlSelfRef.block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0)));
    vlSelfRef.block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.__PVT__block1__DOT__block3__DOT__p) 
           & (IData)(vlSelfRef.__PVT__block1__DOT__block3__DOT__cin));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_18 = (1U 
                                                 & ((IData)(vlSelfRef.__PVT__block2__DOT__block0__DOT__g) 
                                                    | (IData)(vlSelfRef.block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0)));
    vlSelfRef.block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.__PVT__block2__DOT__block2__DOT__p) 
           & (IData)(vlSelfRef.__PVT__block2__DOT__block2__DOT__cin));
    vlSelfRef.block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.__PVT__block2__DOT__block1__DOT__p) 
           & (IData)(vlSelfRef.__PVT__block2__DOT__block1__DOT__cin));
    vlSelfRef.__PVT__block2__DOT__block3__DOT__cin 
        = ((IData)(block2__DOT____Vcellout__block2__g_out) 
           | (((IData)(block2__DOT____Vcellout__block1__g_out) 
               & (IData)(__PVT__block2__DOT__block2__DOT__p_out)) 
              | ((IData)(__PVT__block2__DOT__block1__DOT__p_out) 
                 & ((IData)(__PVT__block2__DOT__block2__DOT__p_out) 
                    & (IData)(vlSelfRef.__PVT__block2__DOT__block1__DOT__cin)))));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_26 = (1U 
                                                 & ((IData)(vlSelfRef.__PVT__block3__DOT__block0__DOT__g) 
                                                    | (IData)(vlSelfRef.block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0)));
    vlSelfRef.block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.__PVT__block3__DOT__block2__DOT__p) 
           & (IData)(vlSelfRef.__PVT__block3__DOT__block2__DOT__cin));
    vlSelfRef.block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.__PVT__block3__DOT__block1__DOT__p) 
           & (IData)(vlSelfRef.__PVT__block3__DOT__block1__DOT__cin));
    vlSelfRef.__PVT__block3__DOT__block3__DOT__cin 
        = ((IData)(block3__DOT____Vcellout__block2__g_out) 
           | (((IData)(block3__DOT____Vcellout__block1__g_out) 
               & (IData)(__PVT__block3__DOT__block2__DOT__p_out)) 
              | ((IData)(__PVT__block3__DOT__block1__DOT__p_out) 
                 & ((IData)(__PVT__block3__DOT__block2__DOT__p_out) 
                    & (IData)(vlSelfRef.__PVT__block3__DOT__block1__DOT__cin)))));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_16 = (1U 
                                                 & ((IData)(vlSelfRef.__PVT__block1__DOT__block3__DOT__g) 
                                                    | (IData)(vlSelfRef.block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0)));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_22 = (1U 
                                                 & ((IData)(vlSelfRef.__PVT__block2__DOT__block2__DOT__g) 
                                                    | (IData)(vlSelfRef.block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0)));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_20 = (1U 
                                                 & ((IData)(vlSelfRef.__PVT__block2__DOT__block1__DOT__g) 
                                                    | (IData)(vlSelfRef.block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0)));
    vlSelfRef.block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.__PVT__block2__DOT__block3__DOT__p) 
           & (IData)(vlSelfRef.__PVT__block2__DOT__block3__DOT__cin));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_30 = (1U 
                                                 & ((IData)(vlSelfRef.__PVT__block3__DOT__block2__DOT__g) 
                                                    | (IData)(vlSelfRef.block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0)));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_28 = (1U 
                                                 & ((IData)(vlSelfRef.__PVT__block3__DOT__block1__DOT__g) 
                                                    | (IData)(vlSelfRef.block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0)));
    vlSelfRef.block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.__PVT__block3__DOT__block3__DOT__p) 
           & (IData)(vlSelfRef.__PVT__block3__DOT__block3__DOT__cin));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_24 = (1U 
                                                 & ((IData)(vlSelfRef.__PVT__block2__DOT__block3__DOT__g) 
                                                    | (IData)(vlSelfRef.block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0)));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_32 = (1U 
                                                 & ((IData)(vlSelfRef.__PVT__block3__DOT__block3__DOT__g) 
                                                    | (IData)(vlSelfRef.block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0)));
    vlSelfRef.__PVT__block3__DOT__block3__DOT__c3_out 
        = (1U & (((IData)(vlSelfRef.__PVT__block3__DOT__block3__DOT__g) 
                  >> 2U) | (((IData)(vlSelfRef.__PVT__block3__DOT__block3__DOT__p) 
                             >> 2U) & (((IData)(vlSelfRef.__PVT__block3__DOT__block3__DOT__g) 
                                        >> 1U) | (((IData)(vlSelfRef.__PVT__block3__DOT__block3__DOT__p) 
                                                   >> 1U) 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_hf246a9bd_1_32))))));
}

void Vsoc_top_cla_64b___nba_sequent__TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst__0(Vsoc_top_cla_64b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsoc_top_cla_64b___nba_sequent__TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst__0\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ block0__DOT____Vcellout__block1__g_out;
    block0__DOT____Vcellout__block1__g_out = 0;
    CData/*0:0*/ block0__DOT____Vcellout__block2__g_out;
    block0__DOT____Vcellout__block2__g_out = 0;
    CData/*0:0*/ block0__DOT____Vcellout__block3__g_out;
    block0__DOT____Vcellout__block3__g_out = 0;
    CData/*0:0*/ __PVT__block0__DOT__block1__DOT__p_out;
    __PVT__block0__DOT__block1__DOT__p_out = 0;
    CData/*0:0*/ __PVT__block0__DOT__block2__DOT__p_out;
    __PVT__block0__DOT__block2__DOT__p_out = 0;
    CData/*0:0*/ __PVT__block0__DOT__block3__DOT__p_out;
    __PVT__block0__DOT__block3__DOT__p_out = 0;
    CData/*0:0*/ __PVT__block1__DOT__g_out;
    __PVT__block1__DOT__g_out = 0;
    CData/*0:0*/ __PVT__block1__DOT__p_out;
    __PVT__block1__DOT__p_out = 0;
    CData/*0:0*/ __PVT__block1__DOT__g__BRA__0__KET__;
    __PVT__block1__DOT__g__BRA__0__KET__ = 0;
    CData/*0:0*/ block1__DOT____Vcellout__block1__g_out;
    block1__DOT____Vcellout__block1__g_out = 0;
    CData/*0:0*/ block1__DOT____Vcellout__block2__g_out;
    block1__DOT____Vcellout__block2__g_out = 0;
    CData/*0:0*/ block1__DOT____Vcellout__block3__g_out;
    block1__DOT____Vcellout__block3__g_out = 0;
    CData/*0:0*/ block1__DOT____VdfgRegularize_h0843a2b9_0_0;
    block1__DOT____VdfgRegularize_h0843a2b9_0_0 = 0;
    CData/*0:0*/ block1__DOT____VdfgRegularize_h0843a2b9_0_1;
    block1__DOT____VdfgRegularize_h0843a2b9_0_1 = 0;
    CData/*0:0*/ block1__DOT____VdfgRegularize_h0843a2b9_0_2;
    block1__DOT____VdfgRegularize_h0843a2b9_0_2 = 0;
    CData/*0:0*/ __PVT__block1__DOT__block0__DOT__p_out;
    __PVT__block1__DOT__block0__DOT__p_out = 0;
    CData/*0:0*/ __PVT__block1__DOT__block1__DOT__p_out;
    __PVT__block1__DOT__block1__DOT__p_out = 0;
    CData/*0:0*/ __PVT__block1__DOT__block2__DOT__p_out;
    __PVT__block1__DOT__block2__DOT__p_out = 0;
    CData/*0:0*/ __PVT__block1__DOT__block3__DOT__p_out;
    __PVT__block1__DOT__block3__DOT__p_out = 0;
    CData/*0:0*/ __PVT__block2__DOT__p_out;
    __PVT__block2__DOT__p_out = 0;
    CData/*0:0*/ __PVT__block2__DOT__g__BRA__0__KET__;
    __PVT__block2__DOT__g__BRA__0__KET__ = 0;
    CData/*0:0*/ block2__DOT____Vcellout__block1__g_out;
    block2__DOT____Vcellout__block1__g_out = 0;
    CData/*0:0*/ block2__DOT____Vcellout__block2__g_out;
    block2__DOT____Vcellout__block2__g_out = 0;
    CData/*0:0*/ block2__DOT____Vcellout__block3__g_out;
    block2__DOT____Vcellout__block3__g_out = 0;
    CData/*0:0*/ block2__DOT____VdfgRegularize_h0843a2b9_0_0;
    block2__DOT____VdfgRegularize_h0843a2b9_0_0 = 0;
    CData/*0:0*/ block2__DOT____VdfgRegularize_h0843a2b9_0_1;
    block2__DOT____VdfgRegularize_h0843a2b9_0_1 = 0;
    CData/*0:0*/ block2__DOT____VdfgRegularize_h0843a2b9_0_2;
    block2__DOT____VdfgRegularize_h0843a2b9_0_2 = 0;
    CData/*0:0*/ __PVT__block2__DOT__block0__DOT__p_out;
    __PVT__block2__DOT__block0__DOT__p_out = 0;
    CData/*0:0*/ __PVT__block2__DOT__block1__DOT__p_out;
    __PVT__block2__DOT__block1__DOT__p_out = 0;
    CData/*0:0*/ __PVT__block2__DOT__block2__DOT__p_out;
    __PVT__block2__DOT__block2__DOT__p_out = 0;
    CData/*0:0*/ __PVT__block2__DOT__block3__DOT__p_out;
    __PVT__block2__DOT__block3__DOT__p_out = 0;
    CData/*0:0*/ __PVT__block3__DOT__g__BRA__0__KET__;
    __PVT__block3__DOT__g__BRA__0__KET__ = 0;
    CData/*0:0*/ block3__DOT____Vcellout__block1__g_out;
    block3__DOT____Vcellout__block1__g_out = 0;
    CData/*0:0*/ block3__DOT____Vcellout__block2__g_out;
    block3__DOT____Vcellout__block2__g_out = 0;
    CData/*0:0*/ __PVT__block3__DOT__block0__DOT__p_out;
    __PVT__block3__DOT__block0__DOT__p_out = 0;
    CData/*0:0*/ __PVT__block3__DOT__block1__DOT__p_out;
    __PVT__block3__DOT__block1__DOT__p_out = 0;
    CData/*0:0*/ __PVT__block3__DOT__block2__DOT__p_out;
    __PVT__block3__DOT__block2__DOT__p_out = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_1;
    __VdfgRegularize_hf246a9bd_1_1 = 0;
    SData/*8:0*/ __Vtableidx33;
    __Vtableidx33 = 0;
    SData/*8:0*/ __Vtableidx34;
    __Vtableidx34 = 0;
    SData/*8:0*/ __Vtableidx35;
    __Vtableidx35 = 0;
    SData/*8:0*/ __Vtableidx36;
    __Vtableidx36 = 0;
    SData/*8:0*/ __Vtableidx37;
    __Vtableidx37 = 0;
    SData/*8:0*/ __Vtableidx38;
    __Vtableidx38 = 0;
    SData/*8:0*/ __Vtableidx39;
    __Vtableidx39 = 0;
    SData/*8:0*/ __Vtableidx40;
    __Vtableidx40 = 0;
    SData/*8:0*/ __Vtableidx41;
    __Vtableidx41 = 0;
    SData/*8:0*/ __Vtableidx42;
    __Vtableidx42 = 0;
    SData/*8:0*/ __Vtableidx43;
    __Vtableidx43 = 0;
    SData/*8:0*/ __Vtableidx44;
    __Vtableidx44 = 0;
    SData/*8:0*/ __Vtableidx45;
    __Vtableidx45 = 0;
    SData/*8:0*/ __Vtableidx46;
    __Vtableidx46 = 0;
    SData/*8:0*/ __Vtableidx47;
    __Vtableidx47 = 0;
    // Body
    vlSelfRef.__PVT__block3__DOT__block3__DOT__g = 
        (0x0000000fU & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                                 >> 0x0000003cU)) & (IData)(
                                                            (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                             >> 0x0000003cU))));
    vlSelfRef.__PVT__block3__DOT__block3__DOT__p = 
        (0x0000000fU & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                                 >> 0x0000003cU)) ^ (IData)(
                                                            (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                             >> 0x0000003cU))));
    vlSelfRef.__PVT__block3__DOT__block2__DOT__g = 
        (0x0000000fU & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                                 >> 0x00000038U)) & (IData)(
                                                            (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                             >> 0x00000038U))));
    vlSelfRef.__PVT__block3__DOT__block2__DOT__p = 
        (0x0000000fU & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                                 >> 0x00000038U)) ^ (IData)(
                                                            (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                             >> 0x00000038U))));
    vlSelfRef.__PVT__block3__DOT__block1__DOT__g = 
        (0x0000000fU & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                                 >> 0x00000034U)) & (IData)(
                                                            (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                             >> 0x00000034U))));
    vlSelfRef.__PVT__block3__DOT__block0__DOT__g = 
        (0x0000000fU & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                                 >> 0x00000030U)) & (IData)(
                                                            (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                             >> 0x00000030U))));
    vlSelfRef.__PVT__block3__DOT__block1__DOT__p = 
        (0x0000000fU & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                                 >> 0x00000034U)) ^ (IData)(
                                                            (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                             >> 0x00000034U))));
    vlSelfRef.__PVT__block2__DOT__block3__DOT__g = 
        (0x0000000fU & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                                 >> 0x0000002cU)) & (IData)(
                                                            (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                             >> 0x0000002cU))));
    vlSelfRef.__PVT__block3__DOT__block0__DOT__p = 
        (0x0000000fU & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                                 >> 0x00000030U)) ^ (IData)(
                                                            (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                             >> 0x00000030U))));
    vlSelfRef.__PVT__block2__DOT__block2__DOT__g = 
        (0x0000000fU & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                                 >> 0x00000028U)) & (IData)(
                                                            (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                             >> 0x00000028U))));
    vlSelfRef.__PVT__block2__DOT__block1__DOT__g = 
        (0x0000000fU & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                                 >> 0x00000024U)) & (IData)(
                                                            (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                             >> 0x00000024U))));
    vlSelfRef.__PVT__block2__DOT__block0__DOT__g = 
        (0x0000000fU & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                                 >> 0x00000020U)) & (IData)(
                                                            (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                             >> 0x00000020U))));
    vlSelfRef.__PVT__block1__DOT__block3__DOT__g = 
        (0x0000000fU & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                                 >> 0x0000001cU)) & (IData)(
                                                            (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                             >> 0x0000001cU))));
    vlSelfRef.__PVT__block1__DOT__block2__DOT__g = 
        (0x0000000fU & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                                 >> 0x00000018U)) & (IData)(
                                                            (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                             >> 0x00000018U))));
    vlSelfRef.__PVT__block2__DOT__block2__DOT__p = 
        (0x0000000fU & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                                 >> 0x00000028U)) ^ (IData)(
                                                            (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                             >> 0x00000028U))));
    vlSelfRef.__PVT__block1__DOT__block1__DOT__g = 
        (0x0000000fU & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                                 >> 0x00000014U)) & (IData)(
                                                            (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                             >> 0x00000014U))));
    vlSelfRef.__PVT__block2__DOT__block3__DOT__p = 
        (0x0000000fU & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                                 >> 0x0000002cU)) ^ (IData)(
                                                            (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                             >> 0x0000002cU))));
    vlSelfRef.__PVT__block2__DOT__block0__DOT__p = 
        (0x0000000fU & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                                 >> 0x00000020U)) ^ (IData)(
                                                            (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                             >> 0x00000020U))));
    vlSelfRef.__PVT__block1__DOT__block0__DOT__g = 
        (0x0000000fU & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                                 >> 0x00000010U)) & (IData)(
                                                            (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                             >> 0x00000010U))));
    vlSelfRef.__PVT__block2__DOT__block1__DOT__p = 
        (0x0000000fU & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                                 >> 0x00000024U)) ^ (IData)(
                                                            (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                             >> 0x00000024U))));
    vlSelfRef.__PVT__block0__DOT__block3__DOT__g = 
        (0x0000000fU & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                                 >> 0x0000000cU)) & (IData)(
                                                            (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                             >> 0x0000000cU))));
    vlSelfRef.__PVT__block0__DOT__block2__DOT__g = 
        (0x0000000fU & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                                 >> 8U)) & (IData)(
                                                   (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                    >> 8U))));
    vlSelfRef.__PVT__block0__DOT__block1__DOT__g = 
        (0x0000000fU & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                                 >> 4U)) & (IData)(
                                                   (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                    >> 4U))));
    vlSelfRef.__PVT__block0__DOT__block0__DOT__p = 
        (0x0000000fU & ((IData)(vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc) 
                        ^ (IData)(vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate)));
    vlSelfRef.__PVT__block0__DOT__block0__DOT__g = 
        (0x0000000fU & ((IData)(vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc) 
                        & (IData)(vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate)));
    vlSelfRef.__PVT__block1__DOT__block0__DOT__p = 
        (0x0000000fU & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                                 >> 0x00000010U)) ^ (IData)(
                                                            (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                             >> 0x00000010U))));
    vlSelfRef.__PVT__block1__DOT__block2__DOT__p = 
        (0x0000000fU & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                                 >> 0x00000018U)) ^ (IData)(
                                                            (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                             >> 0x00000018U))));
    vlSelfRef.__PVT__block0__DOT__block3__DOT__p = 
        (0x0000000fU & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                                 >> 0x0000000cU)) ^ (IData)(
                                                            (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                             >> 0x0000000cU))));
    vlSelfRef.__PVT__block0__DOT__block2__DOT__p = 
        (0x0000000fU & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                                 >> 8U)) ^ (IData)(
                                                   (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                    >> 8U))));
    vlSelfRef.__PVT__block1__DOT__block1__DOT__p = 
        (0x0000000fU & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                                 >> 0x00000014U)) ^ (IData)(
                                                            (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                             >> 0x00000014U))));
    vlSelfRef.__PVT__block1__DOT__block3__DOT__p = 
        (0x0000000fU & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                                 >> 0x0000001cU)) ^ (IData)(
                                                            (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                             >> 0x0000001cU))));
    vlSelfRef.__PVT__block0__DOT__block1__DOT__p = 
        (0x0000000fU & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                                 >> 4U)) ^ (IData)(
                                                   (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                    >> 4U))));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_31 = (1U 
                                                 & (((IData)(vlSelfRef.__PVT__block3__DOT__block3__DOT__p) 
                                                     >> 1U) 
                                                    & (IData)(vlSelfRef.__PVT__block3__DOT__block3__DOT__g)));
    __PVT__block3__DOT__block2__DOT__p_out = (IData)(
                                                     (0x0fU 
                                                      == (IData)(vlSelfRef.__PVT__block3__DOT__block2__DOT__p)));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_29 = (1U 
                                                 & (((IData)(vlSelfRef.__PVT__block3__DOT__block2__DOT__p) 
                                                     >> 1U) 
                                                    & (IData)(vlSelfRef.__PVT__block3__DOT__block2__DOT__g)));
    __PVT__block3__DOT__block1__DOT__p_out = (IData)(
                                                     (0x0fU 
                                                      == (IData)(vlSelfRef.__PVT__block3__DOT__block1__DOT__p)));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_27 = (1U 
                                                 & (((IData)(vlSelfRef.__PVT__block3__DOT__block1__DOT__p) 
                                                     >> 1U) 
                                                    & (IData)(vlSelfRef.__PVT__block3__DOT__block1__DOT__g)));
    __PVT__block3__DOT__block0__DOT__p_out = (IData)(
                                                     (0x0fU 
                                                      == (IData)(vlSelfRef.__PVT__block3__DOT__block0__DOT__p)));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_25 = (1U 
                                                 & (((IData)(vlSelfRef.__PVT__block3__DOT__block0__DOT__p) 
                                                     >> 1U) 
                                                    & (IData)(vlSelfRef.__PVT__block3__DOT__block0__DOT__g)));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_21 = (1U 
                                                 & (((IData)(vlSelfRef.__PVT__block2__DOT__block2__DOT__p) 
                                                     >> 1U) 
                                                    & (IData)(vlSelfRef.__PVT__block2__DOT__block2__DOT__g)));
    __PVT__block2__DOT__block2__DOT__p_out = (IData)(
                                                     (0x0fU 
                                                      == (IData)(vlSelfRef.__PVT__block2__DOT__block2__DOT__p)));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_23 = (1U 
                                                 & (((IData)(vlSelfRef.__PVT__block2__DOT__block3__DOT__p) 
                                                     >> 1U) 
                                                    & (IData)(vlSelfRef.__PVT__block2__DOT__block3__DOT__g)));
    __PVT__block2__DOT__block3__DOT__p_out = (IData)(
                                                     (0x0fU 
                                                      == (IData)(vlSelfRef.__PVT__block2__DOT__block3__DOT__p)));
    __PVT__block2__DOT__block0__DOT__p_out = (IData)(
                                                     (0x0fU 
                                                      == (IData)(vlSelfRef.__PVT__block2__DOT__block0__DOT__p)));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_17 = (1U 
                                                 & (((IData)(vlSelfRef.__PVT__block2__DOT__block0__DOT__p) 
                                                     >> 1U) 
                                                    & (IData)(vlSelfRef.__PVT__block2__DOT__block0__DOT__g)));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_19 = (1U 
                                                 & (((IData)(vlSelfRef.__PVT__block2__DOT__block1__DOT__p) 
                                                     >> 1U) 
                                                    & (IData)(vlSelfRef.__PVT__block2__DOT__block1__DOT__g)));
    __PVT__block2__DOT__block1__DOT__p_out = (IData)(
                                                     (0x0fU 
                                                      == (IData)(vlSelfRef.__PVT__block2__DOT__block1__DOT__p)));
    __VdfgRegularize_hf246a9bd_1_1 = (1U & (((IData)(vlSelfRef.__PVT__block0__DOT__block0__DOT__p) 
                                             >> 1U) 
                                            & (IData)(vlSelfRef.__PVT__block0__DOT__block0__DOT__g)));
    __PVT__block1__DOT__block0__DOT__p_out = (IData)(
                                                     (0x0fU 
                                                      == (IData)(vlSelfRef.__PVT__block1__DOT__block0__DOT__p)));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_9 = (1U 
                                                & (((IData)(vlSelfRef.__PVT__block1__DOT__block0__DOT__p) 
                                                    >> 1U) 
                                                   & (IData)(vlSelfRef.__PVT__block1__DOT__block0__DOT__g)));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_13 = (1U 
                                                 & (((IData)(vlSelfRef.__PVT__block1__DOT__block2__DOT__p) 
                                                     >> 1U) 
                                                    & (IData)(vlSelfRef.__PVT__block1__DOT__block2__DOT__g)));
    __PVT__block1__DOT__block2__DOT__p_out = (IData)(
                                                     (0x0fU 
                                                      == (IData)(vlSelfRef.__PVT__block1__DOT__block2__DOT__p)));
    __PVT__block0__DOT__block3__DOT__p_out = (IData)(
                                                     (0x0fU 
                                                      == (IData)(vlSelfRef.__PVT__block0__DOT__block3__DOT__p)));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_7 = (1U 
                                                & (((IData)(vlSelfRef.__PVT__block0__DOT__block3__DOT__p) 
                                                    >> 1U) 
                                                   & (IData)(vlSelfRef.__PVT__block0__DOT__block3__DOT__g)));
    __PVT__block0__DOT__block2__DOT__p_out = (IData)(
                                                     (0x0fU 
                                                      == (IData)(vlSelfRef.__PVT__block0__DOT__block2__DOT__p)));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_5 = (1U 
                                                & (((IData)(vlSelfRef.__PVT__block0__DOT__block2__DOT__p) 
                                                    >> 1U) 
                                                   & (IData)(vlSelfRef.__PVT__block0__DOT__block2__DOT__g)));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_11 = (1U 
                                                 & (((IData)(vlSelfRef.__PVT__block1__DOT__block1__DOT__p) 
                                                     >> 1U) 
                                                    & (IData)(vlSelfRef.__PVT__block1__DOT__block1__DOT__g)));
    __PVT__block1__DOT__block1__DOT__p_out = (IData)(
                                                     (0x0fU 
                                                      == (IData)(vlSelfRef.__PVT__block1__DOT__block1__DOT__p)));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_15 = (1U 
                                                 & (((IData)(vlSelfRef.__PVT__block1__DOT__block3__DOT__p) 
                                                     >> 1U) 
                                                    & (IData)(vlSelfRef.__PVT__block1__DOT__block3__DOT__g)));
    __PVT__block1__DOT__block3__DOT__p_out = (IData)(
                                                     (0x0fU 
                                                      == (IData)(vlSelfRef.__PVT__block1__DOT__block3__DOT__p)));
    __PVT__block0__DOT__block1__DOT__p_out = (IData)(
                                                     (0x0fU 
                                                      == (IData)(vlSelfRef.__PVT__block0__DOT__block1__DOT__p)));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_3 = (1U 
                                                & (((IData)(vlSelfRef.__PVT__block0__DOT__block1__DOT__p) 
                                                    >> 1U) 
                                                   & (IData)(vlSelfRef.__PVT__block0__DOT__block1__DOT__g)));
    __Vtableidx47 = (((IData)(vlSelfRef.__VdfgRegularize_hf246a9bd_1_29) 
                      << 8U) | (((IData)(vlSelfRef.__PVT__block3__DOT__block2__DOT__p) 
                                 << 4U) | (IData)(vlSelfRef.__PVT__block3__DOT__block2__DOT__g)));
    block3__DOT____Vcellout__block2__g_out = Vsoc_top__ConstPool__TABLE_h08c4d8a1_0
        [__Vtableidx47];
    __Vtableidx46 = (((IData)(vlSelfRef.__VdfgRegularize_hf246a9bd_1_27) 
                      << 8U) | (((IData)(vlSelfRef.__PVT__block3__DOT__block1__DOT__p) 
                                 << 4U) | (IData)(vlSelfRef.__PVT__block3__DOT__block1__DOT__g)));
    block3__DOT____Vcellout__block1__g_out = Vsoc_top__ConstPool__TABLE_h08c4d8a1_0
        [__Vtableidx46];
    __Vtableidx45 = (((IData)(vlSelfRef.__VdfgRegularize_hf246a9bd_1_25) 
                      << 8U) | (((IData)(vlSelfRef.__PVT__block3__DOT__block0__DOT__p) 
                                 << 4U) | (IData)(vlSelfRef.__PVT__block3__DOT__block0__DOT__g)));
    __PVT__block3__DOT__g__BRA__0__KET__ = Vsoc_top__ConstPool__TABLE_h08c4d8a1_0
        [__Vtableidx45];
    __Vtableidx43 = (((IData)(vlSelfRef.__VdfgRegularize_hf246a9bd_1_21) 
                      << 8U) | (((IData)(vlSelfRef.__PVT__block2__DOT__block2__DOT__p) 
                                 << 4U) | (IData)(vlSelfRef.__PVT__block2__DOT__block2__DOT__g)));
    block2__DOT____Vcellout__block2__g_out = Vsoc_top__ConstPool__TABLE_h08c4d8a1_0
        [__Vtableidx43];
    __Vtableidx44 = (((IData)(vlSelfRef.__VdfgRegularize_hf246a9bd_1_23) 
                      << 8U) | (((IData)(vlSelfRef.__PVT__block2__DOT__block3__DOT__p) 
                                 << 4U) | (IData)(vlSelfRef.__PVT__block2__DOT__block3__DOT__g)));
    block2__DOT____Vcellout__block3__g_out = Vsoc_top__ConstPool__TABLE_h08c4d8a1_0
        [__Vtableidx44];
    block2__DOT____VdfgRegularize_h0843a2b9_0_2 = ((IData)(__PVT__block2__DOT__block2__DOT__p_out) 
                                                   & (IData)(__PVT__block2__DOT__block3__DOT__p_out));
    __Vtableidx41 = (((IData)(vlSelfRef.__VdfgRegularize_hf246a9bd_1_17) 
                      << 8U) | (((IData)(vlSelfRef.__PVT__block2__DOT__block0__DOT__p) 
                                 << 4U) | (IData)(vlSelfRef.__PVT__block2__DOT__block0__DOT__g)));
    __PVT__block2__DOT__g__BRA__0__KET__ = Vsoc_top__ConstPool__TABLE_h08c4d8a1_0
        [__Vtableidx41];
    __Vtableidx42 = (((IData)(vlSelfRef.__VdfgRegularize_hf246a9bd_1_19) 
                      << 8U) | (((IData)(vlSelfRef.__PVT__block2__DOT__block1__DOT__p) 
                                 << 4U) | (IData)(vlSelfRef.__PVT__block2__DOT__block1__DOT__g)));
    block2__DOT____Vcellout__block1__g_out = Vsoc_top__ConstPool__TABLE_h08c4d8a1_0
        [__Vtableidx42];
    block2__DOT____VdfgRegularize_h0843a2b9_0_1 = ((IData)(__PVT__block2__DOT__block1__DOT__p_out) 
                                                   & (IData)(__PVT__block2__DOT__block0__DOT__p_out));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21 = (1U 
                                                 & (((IData)(vlSelfRef.__PVT__block0__DOT__block0__DOT__g) 
                                                     >> 1U) 
                                                    | (IData)(__VdfgRegularize_hf246a9bd_1_1)));
    __Vtableidx33 = (((IData)(__VdfgRegularize_hf246a9bd_1_1) 
                      << 8U) | (((IData)(vlSelfRef.__PVT__block0__DOT__block0__DOT__p) 
                                 << 4U) | (IData)(vlSelfRef.__PVT__block0__DOT__block0__DOT__g)));
    vlSelfRef.__PVT__block0__DOT__g__BRA__0__KET__ 
        = Vsoc_top__ConstPool__TABLE_h08c4d8a1_0[__Vtableidx33];
    __Vtableidx37 = (((IData)(vlSelfRef.__VdfgRegularize_hf246a9bd_1_9) 
                      << 8U) | (((IData)(vlSelfRef.__PVT__block1__DOT__block0__DOT__p) 
                                 << 4U) | (IData)(vlSelfRef.__PVT__block1__DOT__block0__DOT__g)));
    __PVT__block1__DOT__g__BRA__0__KET__ = Vsoc_top__ConstPool__TABLE_h08c4d8a1_0
        [__Vtableidx37];
    __Vtableidx39 = (((IData)(vlSelfRef.__VdfgRegularize_hf246a9bd_1_13) 
                      << 8U) | (((IData)(vlSelfRef.__PVT__block1__DOT__block2__DOT__p) 
                                 << 4U) | (IData)(vlSelfRef.__PVT__block1__DOT__block2__DOT__g)));
    block1__DOT____Vcellout__block2__g_out = Vsoc_top__ConstPool__TABLE_h08c4d8a1_0
        [__Vtableidx39];
    __Vtableidx36 = (((IData)(vlSelfRef.__VdfgRegularize_hf246a9bd_1_7) 
                      << 8U) | (((IData)(vlSelfRef.__PVT__block0__DOT__block3__DOT__p) 
                                 << 4U) | (IData)(vlSelfRef.__PVT__block0__DOT__block3__DOT__g)));
    block0__DOT____Vcellout__block3__g_out = Vsoc_top__ConstPool__TABLE_h08c4d8a1_0
        [__Vtableidx36];
    __Vtableidx35 = (((IData)(vlSelfRef.__VdfgRegularize_hf246a9bd_1_5) 
                      << 8U) | (((IData)(vlSelfRef.__PVT__block0__DOT__block2__DOT__p) 
                                 << 4U) | (IData)(vlSelfRef.__PVT__block0__DOT__block2__DOT__g)));
    block0__DOT____Vcellout__block2__g_out = Vsoc_top__ConstPool__TABLE_h08c4d8a1_0
        [__Vtableidx35];
    __Vtableidx38 = (((IData)(vlSelfRef.__VdfgRegularize_hf246a9bd_1_11) 
                      << 8U) | (((IData)(vlSelfRef.__PVT__block1__DOT__block1__DOT__p) 
                                 << 4U) | (IData)(vlSelfRef.__PVT__block1__DOT__block1__DOT__g)));
    block1__DOT____Vcellout__block1__g_out = Vsoc_top__ConstPool__TABLE_h08c4d8a1_0
        [__Vtableidx38];
    block1__DOT____VdfgRegularize_h0843a2b9_0_1 = ((IData)(__PVT__block1__DOT__block1__DOT__p_out) 
                                                   & (IData)(__PVT__block1__DOT__block0__DOT__p_out));
    __Vtableidx40 = (((IData)(vlSelfRef.__VdfgRegularize_hf246a9bd_1_15) 
                      << 8U) | (((IData)(vlSelfRef.__PVT__block1__DOT__block3__DOT__p) 
                                 << 4U) | (IData)(vlSelfRef.__PVT__block1__DOT__block3__DOT__g)));
    block1__DOT____Vcellout__block3__g_out = Vsoc_top__ConstPool__TABLE_h08c4d8a1_0
        [__Vtableidx40];
    block1__DOT____VdfgRegularize_h0843a2b9_0_2 = ((IData)(__PVT__block1__DOT__block2__DOT__p_out) 
                                                   & (IData)(__PVT__block1__DOT__block3__DOT__p_out));
    __Vtableidx34 = (((IData)(vlSelfRef.__VdfgRegularize_hf246a9bd_1_3) 
                      << 8U) | (((IData)(vlSelfRef.__PVT__block0__DOT__block1__DOT__p) 
                                 << 4U) | (IData)(vlSelfRef.__PVT__block0__DOT__block1__DOT__g)));
    block0__DOT____Vcellout__block1__g_out = Vsoc_top__ConstPool__TABLE_h08c4d8a1_0
        [__Vtableidx34];
    block2__DOT____VdfgRegularize_h0843a2b9_0_0 = ((IData)(__PVT__block2__DOT__block1__DOT__p_out) 
                                                   & (IData)(__PVT__block2__DOT__g__BRA__0__KET__));
    __PVT__block2__DOT__p_out = ((IData)(block2__DOT____VdfgRegularize_h0843a2b9_0_1) 
                                 & (IData)(block2__DOT____VdfgRegularize_h0843a2b9_0_2));
    vlSelfRef.block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.__PVT__block0__DOT__block1__DOT__p) 
           & (IData)(vlSelfRef.__PVT__block0__DOT__g__BRA__0__KET__));
    block1__DOT____VdfgRegularize_h0843a2b9_0_0 = ((IData)(__PVT__block1__DOT__block1__DOT__p_out) 
                                                   & (IData)(__PVT__block1__DOT__g__BRA__0__KET__));
    __PVT__block1__DOT__p_out = ((IData)(block1__DOT____VdfgRegularize_h0843a2b9_0_1) 
                                 & (IData)(block1__DOT____VdfgRegularize_h0843a2b9_0_2));
    vlSelfRef.__PVT__block0__DOT__block3__DOT__cin 
        = ((IData)(block0__DOT____Vcellout__block2__g_out) 
           | (((IData)(block0__DOT____Vcellout__block1__g_out) 
               & (IData)(__PVT__block0__DOT__block2__DOT__p_out)) 
              | ((IData)(__PVT__block0__DOT__block1__DOT__p_out) 
                 & ((IData)(__PVT__block0__DOT__block2__DOT__p_out) 
                    & (IData)(vlSelfRef.__PVT__block0__DOT__g__BRA__0__KET__)))));
    vlSelfRef.__PVT__block0__DOT__block2__DOT__cin 
        = ((IData)(block0__DOT____Vcellout__block1__g_out) 
           | ((IData)(__PVT__block0__DOT__block1__DOT__p_out) 
              & (IData)(vlSelfRef.__PVT__block0__DOT__g__BRA__0__KET__)));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_4 = (1U 
                                                & ((IData)(vlSelfRef.__PVT__block0__DOT__block1__DOT__g) 
                                                   | (IData)(vlSelfRef.block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __PVT__block1__DOT__g_out = ((IData)(block1__DOT____Vcellout__block3__g_out) 
                                 | (((IData)(block1__DOT____Vcellout__block2__g_out) 
                                     & (IData)(__PVT__block1__DOT__block3__DOT__p_out)) 
                                    | ((IData)(block1__DOT____VdfgRegularize_h0843a2b9_0_2) 
                                       & ((IData)(block1__DOT____Vcellout__block1__g_out) 
                                          | (IData)(block1__DOT____VdfgRegularize_h0843a2b9_0_0)))));
    vlSelfRef.block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.__PVT__block0__DOT__block3__DOT__p) 
           & (IData)(vlSelfRef.__PVT__block0__DOT__block3__DOT__cin));
    vlSelfRef.block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.__PVT__block0__DOT__block2__DOT__p) 
           & (IData)(vlSelfRef.__PVT__block0__DOT__block2__DOT__cin));
    vlSelfRef.__PVT__block1__DOT__block0__DOT__cin 
        = ((IData)(block0__DOT____Vcellout__block3__g_out) 
           | (((IData)(block0__DOT____Vcellout__block2__g_out) 
               & (IData)(__PVT__block0__DOT__block3__DOT__p_out)) 
              | (((IData)(__PVT__block0__DOT__block2__DOT__p_out) 
                  & (IData)(__PVT__block0__DOT__block3__DOT__p_out)) 
                 & (IData)(vlSelfRef.__PVT__block0__DOT__block2__DOT__cin))));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_8 = (1U 
                                                & ((IData)(vlSelfRef.__PVT__block0__DOT__block3__DOT__g) 
                                                   | (IData)(vlSelfRef.block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0)));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_6 = (1U 
                                                & ((IData)(vlSelfRef.__PVT__block0__DOT__block2__DOT__g) 
                                                   | (IData)(vlSelfRef.block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0)));
    vlSelfRef.block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.__PVT__block1__DOT__block0__DOT__p) 
           & (IData)(vlSelfRef.__PVT__block1__DOT__block0__DOT__cin));
    vlSelfRef.__PVT__block1__DOT__block2__DOT__cin 
        = ((IData)(block1__DOT____Vcellout__block1__g_out) 
           | ((IData)(block1__DOT____VdfgRegularize_h0843a2b9_0_0) 
              | ((IData)(block1__DOT____VdfgRegularize_h0843a2b9_0_1) 
                 & (IData)(vlSelfRef.__PVT__block1__DOT__block0__DOT__cin))));
    vlSelfRef.__PVT__block1__DOT__block1__DOT__cin 
        = ((IData)(__PVT__block1__DOT__g__BRA__0__KET__) 
           | ((IData)(vlSelfRef.__PVT__block1__DOT__block0__DOT__cin) 
              & (IData)(__PVT__block1__DOT__block0__DOT__p_out)));
    vlSelfRef.__PVT__block2__DOT__block0__DOT__cin 
        = ((IData)(__PVT__block1__DOT__g_out) | ((IData)(__PVT__block1__DOT__p_out) 
                                                 & (IData)(vlSelfRef.__PVT__block1__DOT__block0__DOT__cin)));
    vlSelfRef.__PVT__block3__DOT__block0__DOT__cin 
        = (((IData)(block2__DOT____Vcellout__block3__g_out) 
            | (((IData)(block2__DOT____Vcellout__block2__g_out) 
                & (IData)(__PVT__block2__DOT__block3__DOT__p_out)) 
               | ((IData)(block2__DOT____VdfgRegularize_h0843a2b9_0_2) 
                  & ((IData)(block2__DOT____Vcellout__block1__g_out) 
                     | (IData)(block2__DOT____VdfgRegularize_h0843a2b9_0_0))))) 
           | (((IData)(__PVT__block1__DOT__g_out) & (IData)(__PVT__block2__DOT__p_out)) 
              | ((IData)(__PVT__block1__DOT__p_out) 
                 & ((IData)(__PVT__block2__DOT__p_out) 
                    & (IData)(vlSelfRef.__PVT__block1__DOT__block0__DOT__cin)))));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_10 = (1U 
                                                 & ((IData)(vlSelfRef.__PVT__block1__DOT__block0__DOT__g) 
                                                    | (IData)(vlSelfRef.block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0)));
    vlSelfRef.block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.__PVT__block1__DOT__block2__DOT__p) 
           & (IData)(vlSelfRef.__PVT__block1__DOT__block2__DOT__cin));
    vlSelfRef.block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.__PVT__block1__DOT__block1__DOT__p) 
           & (IData)(vlSelfRef.__PVT__block1__DOT__block1__DOT__cin));
    vlSelfRef.__PVT__block1__DOT__block3__DOT__cin 
        = ((IData)(block1__DOT____Vcellout__block2__g_out) 
           | (((IData)(block1__DOT____Vcellout__block1__g_out) 
               & (IData)(__PVT__block1__DOT__block2__DOT__p_out)) 
              | ((IData)(__PVT__block1__DOT__block1__DOT__p_out) 
                 & ((IData)(__PVT__block1__DOT__block2__DOT__p_out) 
                    & (IData)(vlSelfRef.__PVT__block1__DOT__block1__DOT__cin)))));
    vlSelfRef.block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.__PVT__block2__DOT__block0__DOT__p) 
           & (IData)(vlSelfRef.__PVT__block2__DOT__block0__DOT__cin));
    vlSelfRef.__PVT__block2__DOT__block2__DOT__cin 
        = ((IData)(block2__DOT____Vcellout__block1__g_out) 
           | ((IData)(block2__DOT____VdfgRegularize_h0843a2b9_0_0) 
              | ((IData)(block2__DOT____VdfgRegularize_h0843a2b9_0_1) 
                 & (IData)(vlSelfRef.__PVT__block2__DOT__block0__DOT__cin))));
    vlSelfRef.__PVT__block2__DOT__block1__DOT__cin 
        = ((IData)(__PVT__block2__DOT__g__BRA__0__KET__) 
           | ((IData)(vlSelfRef.__PVT__block2__DOT__block0__DOT__cin) 
              & (IData)(__PVT__block2__DOT__block0__DOT__p_out)));
    vlSelfRef.block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.__PVT__block3__DOT__block0__DOT__p) 
           & (IData)(vlSelfRef.__PVT__block3__DOT__block0__DOT__cin));
    vlSelfRef.__PVT__block3__DOT__block2__DOT__cin 
        = ((IData)(block3__DOT____Vcellout__block1__g_out) 
           | (((IData)(__PVT__block3__DOT__block1__DOT__p_out) 
               & (IData)(__PVT__block3__DOT__g__BRA__0__KET__)) 
              | (((IData)(__PVT__block3__DOT__block1__DOT__p_out) 
                  & (IData)(__PVT__block3__DOT__block0__DOT__p_out)) 
                 & (IData)(vlSelfRef.__PVT__block3__DOT__block0__DOT__cin))));
    vlSelfRef.__PVT__block3__DOT__block1__DOT__cin 
        = ((IData)(__PVT__block3__DOT__g__BRA__0__KET__) 
           | ((IData)(vlSelfRef.__PVT__block3__DOT__block0__DOT__cin) 
              & (IData)(__PVT__block3__DOT__block0__DOT__p_out)));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_14 = (1U 
                                                 & ((IData)(vlSelfRef.__PVT__block1__DOT__block2__DOT__g) 
                                                    | (IData)(vlSelfRef.block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0)));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_12 = (1U 
                                                 & ((IData)(vlSelfRef.__PVT__block1__DOT__block1__DOT__g) 
                                                    | (IData)(vlSelfRef.block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0)));
    vlSelfRef.block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.__PVT__block1__DOT__block3__DOT__p) 
           & (IData)(vlSelfRef.__PVT__block1__DOT__block3__DOT__cin));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_18 = (1U 
                                                 & ((IData)(vlSelfRef.__PVT__block2__DOT__block0__DOT__g) 
                                                    | (IData)(vlSelfRef.block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0)));
    vlSelfRef.block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.__PVT__block2__DOT__block2__DOT__p) 
           & (IData)(vlSelfRef.__PVT__block2__DOT__block2__DOT__cin));
    vlSelfRef.block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.__PVT__block2__DOT__block1__DOT__p) 
           & (IData)(vlSelfRef.__PVT__block2__DOT__block1__DOT__cin));
    vlSelfRef.__PVT__block2__DOT__block3__DOT__cin 
        = ((IData)(block2__DOT____Vcellout__block2__g_out) 
           | (((IData)(block2__DOT____Vcellout__block1__g_out) 
               & (IData)(__PVT__block2__DOT__block2__DOT__p_out)) 
              | ((IData)(__PVT__block2__DOT__block1__DOT__p_out) 
                 & ((IData)(__PVT__block2__DOT__block2__DOT__p_out) 
                    & (IData)(vlSelfRef.__PVT__block2__DOT__block1__DOT__cin)))));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_26 = (1U 
                                                 & ((IData)(vlSelfRef.__PVT__block3__DOT__block0__DOT__g) 
                                                    | (IData)(vlSelfRef.block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0)));
    vlSelfRef.block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.__PVT__block3__DOT__block2__DOT__p) 
           & (IData)(vlSelfRef.__PVT__block3__DOT__block2__DOT__cin));
    vlSelfRef.block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.__PVT__block3__DOT__block1__DOT__p) 
           & (IData)(vlSelfRef.__PVT__block3__DOT__block1__DOT__cin));
    vlSelfRef.__PVT__block3__DOT__block3__DOT__cin 
        = ((IData)(block3__DOT____Vcellout__block2__g_out) 
           | (((IData)(block3__DOT____Vcellout__block1__g_out) 
               & (IData)(__PVT__block3__DOT__block2__DOT__p_out)) 
              | ((IData)(__PVT__block3__DOT__block1__DOT__p_out) 
                 & ((IData)(__PVT__block3__DOT__block2__DOT__p_out) 
                    & (IData)(vlSelfRef.__PVT__block3__DOT__block1__DOT__cin)))));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_16 = (1U 
                                                 & ((IData)(vlSelfRef.__PVT__block1__DOT__block3__DOT__g) 
                                                    | (IData)(vlSelfRef.block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0)));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_22 = (1U 
                                                 & ((IData)(vlSelfRef.__PVT__block2__DOT__block2__DOT__g) 
                                                    | (IData)(vlSelfRef.block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0)));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_20 = (1U 
                                                 & ((IData)(vlSelfRef.__PVT__block2__DOT__block1__DOT__g) 
                                                    | (IData)(vlSelfRef.block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0)));
    vlSelfRef.block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.__PVT__block2__DOT__block3__DOT__p) 
           & (IData)(vlSelfRef.__PVT__block2__DOT__block3__DOT__cin));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_30 = (1U 
                                                 & ((IData)(vlSelfRef.__PVT__block3__DOT__block2__DOT__g) 
                                                    | (IData)(vlSelfRef.block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0)));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_28 = (1U 
                                                 & ((IData)(vlSelfRef.__PVT__block3__DOT__block1__DOT__g) 
                                                    | (IData)(vlSelfRef.block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0)));
    vlSelfRef.block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.__PVT__block3__DOT__block3__DOT__p) 
           & (IData)(vlSelfRef.__PVT__block3__DOT__block3__DOT__cin));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_24 = (1U 
                                                 & ((IData)(vlSelfRef.__PVT__block2__DOT__block3__DOT__g) 
                                                    | (IData)(vlSelfRef.block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0)));
    vlSelfRef.__VdfgRegularize_hf246a9bd_1_32 = (1U 
                                                 & ((IData)(vlSelfRef.__PVT__block3__DOT__block3__DOT__g) 
                                                    | (IData)(vlSelfRef.block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0)));
}
