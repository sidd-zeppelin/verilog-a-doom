// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_h349ffa8b_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vtop__ConstPool__TABLE_h08c4d8a1_0;

void Vtop_cla_64b___ico_sequent__TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst__0(Vtop_cla_64b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_cla_64b___ico_sequent__TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_0_1;
    __VdfgRegularize_hf246a9bd_0_1 = 0;
    CData/*0:0*/ block0__DOT____VdfgRegularize_h0843a2b9_0_0;
    block0__DOT____VdfgRegularize_h0843a2b9_0_0 = 0;
    CData/*0:0*/ block0__DOT____VdfgRegularize_h0843a2b9_0_1;
    block0__DOT____VdfgRegularize_h0843a2b9_0_1 = 0;
    CData/*0:0*/ block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0;
    block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2;
    block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3;
    block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4;
    block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0;
    block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2;
    block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3;
    block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4;
    block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0;
    block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2;
    block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3;
    block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4;
    block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0;
    block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2;
    block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3;
    block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4;
    block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block1__DOT____VdfgRegularize_h0843a2b9_0_0;
    block1__DOT____VdfgRegularize_h0843a2b9_0_0 = 0;
    CData/*0:0*/ block1__DOT____VdfgRegularize_h0843a2b9_0_1;
    block1__DOT____VdfgRegularize_h0843a2b9_0_1 = 0;
    CData/*0:0*/ block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0;
    block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2;
    block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3;
    block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4;
    block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0;
    block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2;
    block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3;
    block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4;
    block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0;
    block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2;
    block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3;
    block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4;
    block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0;
    block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2;
    block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3;
    block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4;
    block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block2__DOT____VdfgRegularize_h0843a2b9_0_0;
    block2__DOT____VdfgRegularize_h0843a2b9_0_0 = 0;
    CData/*0:0*/ block2__DOT____VdfgRegularize_h0843a2b9_0_1;
    block2__DOT____VdfgRegularize_h0843a2b9_0_1 = 0;
    CData/*0:0*/ block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0;
    block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2;
    block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3;
    block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4;
    block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0;
    block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2;
    block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3;
    block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4;
    block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0;
    block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2;
    block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3;
    block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4;
    block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0;
    block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2;
    block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3;
    block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4;
    block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block3__DOT____VdfgRegularize_h0843a2b9_0_0;
    block3__DOT____VdfgRegularize_h0843a2b9_0_0 = 0;
    CData/*0:0*/ block3__DOT____VdfgRegularize_h0843a2b9_0_1;
    block3__DOT____VdfgRegularize_h0843a2b9_0_1 = 0;
    CData/*0:0*/ block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0;
    block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2;
    block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3;
    block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4;
    block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0;
    block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2;
    block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3;
    block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4;
    block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0;
    block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2;
    block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3;
    block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4;
    block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0;
    block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2;
    block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3;
    block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4;
    block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_1;
    __VdfgRegularize_hf246a9bd_1_1 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_2;
    __VdfgRegularize_hf246a9bd_1_2 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_3;
    __VdfgRegularize_hf246a9bd_1_3 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_4;
    __VdfgRegularize_hf246a9bd_1_4 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_5;
    __VdfgRegularize_hf246a9bd_1_5 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_6;
    __VdfgRegularize_hf246a9bd_1_6 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_7;
    __VdfgRegularize_hf246a9bd_1_7 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_8;
    __VdfgRegularize_hf246a9bd_1_8 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_9;
    __VdfgRegularize_hf246a9bd_1_9 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_10;
    __VdfgRegularize_hf246a9bd_1_10 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_11;
    __VdfgRegularize_hf246a9bd_1_11 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_12;
    __VdfgRegularize_hf246a9bd_1_12 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_13;
    __VdfgRegularize_hf246a9bd_1_13 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_14;
    __VdfgRegularize_hf246a9bd_1_14 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_15;
    __VdfgRegularize_hf246a9bd_1_15 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_16;
    __VdfgRegularize_hf246a9bd_1_16 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_17;
    __VdfgRegularize_hf246a9bd_1_17 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_18;
    __VdfgRegularize_hf246a9bd_1_18 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_19;
    __VdfgRegularize_hf246a9bd_1_19 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_20;
    __VdfgRegularize_hf246a9bd_1_20 = 0;
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    SData/*9:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    SData/*9:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    SData/*9:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    SData/*9:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    SData/*8:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    SData/*9:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    SData/*9:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    SData/*9:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    SData/*9:0*/ __Vtableidx10;
    __Vtableidx10 = 0;
    SData/*8:0*/ __Vtableidx11;
    __Vtableidx11 = 0;
    SData/*9:0*/ __Vtableidx12;
    __Vtableidx12 = 0;
    SData/*9:0*/ __Vtableidx13;
    __Vtableidx13 = 0;
    SData/*9:0*/ __Vtableidx14;
    __Vtableidx14 = 0;
    SData/*9:0*/ __Vtableidx15;
    __Vtableidx15 = 0;
    SData/*8:0*/ __Vtableidx16;
    __Vtableidx16 = 0;
    SData/*9:0*/ __Vtableidx17;
    __Vtableidx17 = 0;
    SData/*9:0*/ __Vtableidx18;
    __Vtableidx18 = 0;
    SData/*9:0*/ __Vtableidx19;
    __Vtableidx19 = 0;
    SData/*9:0*/ __Vtableidx20;
    __Vtableidx20 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_5;
    __VdfgRegularize_h6e95ff9d_0_5 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_6;
    __VdfgRegularize_h6e95ff9d_0_6 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_7;
    __VdfgRegularize_h6e95ff9d_0_7 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_8;
    __VdfgRegularize_h6e95ff9d_0_8 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_9;
    __VdfgRegularize_h6e95ff9d_0_9 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_10;
    __VdfgRegularize_h6e95ff9d_0_10 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_11;
    __VdfgRegularize_h6e95ff9d_0_11 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_12;
    __VdfgRegularize_h6e95ff9d_0_12 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_13;
    __VdfgRegularize_h6e95ff9d_0_13 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_14;
    __VdfgRegularize_h6e95ff9d_0_14 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_15;
    __VdfgRegularize_h6e95ff9d_0_15 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_16;
    __VdfgRegularize_h6e95ff9d_0_16 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_17;
    __VdfgRegularize_h6e95ff9d_0_17 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_18;
    __VdfgRegularize_h6e95ff9d_0_18 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_19;
    __VdfgRegularize_h6e95ff9d_0_19 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_20;
    __VdfgRegularize_h6e95ff9d_0_20 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_21;
    __VdfgRegularize_h6e95ff9d_0_21 = 0;
    // Body
    vlSelfRef.block0__DOT__b = (0x0000ffffU & (IData)(vlSelfRef.b));
    vlSelfRef.block1__DOT__b = (0x0000ffffU & (IData)(
                                                      (vlSelfRef.b 
                                                       >> 0x00000010U)));
    vlSelfRef.block2__DOT__b = (0x0000ffffU & (IData)(
                                                      (vlSelfRef.b 
                                                       >> 0x00000020U)));
    vlSelfRef.block3__DOT__b = (0x0000ffffU & (IData)(
                                                      (vlSelfRef.b 
                                                       >> 0x00000030U)));
    vlSelfRef.a = vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__pc_current;
    vlSelfRef.block0__DOT__block0__DOT__b = (0x0000000fU 
                                             & (IData)(vlSelfRef.block0__DOT__b));
    vlSelfRef.block0__DOT__block1__DOT__b = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block0__DOT__b) 
                                                >> 4U));
    vlSelfRef.block0__DOT__block2__DOT__b = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block0__DOT__b) 
                                                >> 8U));
    vlSelfRef.block0__DOT__block3__DOT__b = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block0__DOT__b) 
                                                >> 0x0000000cU));
    vlSelfRef.block1__DOT__block0__DOT__b = (0x0000000fU 
                                             & (IData)(vlSelfRef.block1__DOT__b));
    vlSelfRef.block1__DOT__block1__DOT__b = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block1__DOT__b) 
                                                >> 4U));
    vlSelfRef.block1__DOT__block2__DOT__b = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block1__DOT__b) 
                                                >> 8U));
    vlSelfRef.block1__DOT__block3__DOT__b = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block1__DOT__b) 
                                                >> 0x0000000cU));
    vlSelfRef.block2__DOT__block0__DOT__b = (0x0000000fU 
                                             & (IData)(vlSelfRef.block2__DOT__b));
    vlSelfRef.block2__DOT__block1__DOT__b = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block2__DOT__b) 
                                                >> 4U));
    vlSelfRef.block2__DOT__block2__DOT__b = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block2__DOT__b) 
                                                >> 8U));
    vlSelfRef.block2__DOT__block3__DOT__b = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block2__DOT__b) 
                                                >> 0x0000000cU));
    vlSelfRef.block3__DOT__block0__DOT__b = (0x0000000fU 
                                             & (IData)(vlSelfRef.block3__DOT__b));
    vlSelfRef.block3__DOT__block1__DOT__b = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block3__DOT__b) 
                                                >> 4U));
    vlSelfRef.block3__DOT__block2__DOT__b = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block3__DOT__b) 
                                                >> 8U));
    vlSelfRef.block3__DOT__block3__DOT__b = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block3__DOT__b) 
                                                >> 0x0000000cU));
    vlSelfRef.block0__DOT__a = (0x0000ffffU & (IData)(vlSelfRef.a));
    vlSelfRef.block1__DOT__a = (0x0000ffffU & (IData)(
                                                      (vlSelfRef.a 
                                                       >> 0x00000010U)));
    vlSelfRef.block2__DOT__a = (0x0000ffffU & (IData)(
                                                      (vlSelfRef.a 
                                                       >> 0x00000020U)));
    vlSelfRef.block3__DOT__a = (0x0000ffffU & (IData)(
                                                      (vlSelfRef.a 
                                                       >> 0x00000030U)));
    vlSelfRef.block0__DOT__block0__DOT__a = (0x0000000fU 
                                             & (IData)(vlSelfRef.block0__DOT__a));
    vlSelfRef.block0__DOT__block1__DOT__a = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block0__DOT__a) 
                                                >> 4U));
    vlSelfRef.block0__DOT__block2__DOT__a = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block0__DOT__a) 
                                                >> 8U));
    vlSelfRef.block0__DOT__block3__DOT__a = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block0__DOT__a) 
                                                >> 0x0000000cU));
    vlSelfRef.block1__DOT__block0__DOT__a = (0x0000000fU 
                                             & (IData)(vlSelfRef.block1__DOT__a));
    vlSelfRef.block1__DOT__block1__DOT__a = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block1__DOT__a) 
                                                >> 4U));
    vlSelfRef.block1__DOT__block2__DOT__a = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block1__DOT__a) 
                                                >> 8U));
    vlSelfRef.block1__DOT__block3__DOT__a = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block1__DOT__a) 
                                                >> 0x0000000cU));
    vlSelfRef.block2__DOT__block0__DOT__a = (0x0000000fU 
                                             & (IData)(vlSelfRef.block2__DOT__a));
    vlSelfRef.block2__DOT__block1__DOT__a = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block2__DOT__a) 
                                                >> 4U));
    vlSelfRef.block2__DOT__block2__DOT__a = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block2__DOT__a) 
                                                >> 8U));
    vlSelfRef.block2__DOT__block3__DOT__a = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block2__DOT__a) 
                                                >> 0x0000000cU));
    vlSelfRef.block3__DOT__block0__DOT__a = (0x0000000fU 
                                             & (IData)(vlSelfRef.block3__DOT__a));
    vlSelfRef.block3__DOT__block1__DOT__a = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block3__DOT__a) 
                                                >> 4U));
    vlSelfRef.block3__DOT__block2__DOT__a = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block3__DOT__a) 
                                                >> 8U));
    vlSelfRef.block3__DOT__block3__DOT__a = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block3__DOT__a) 
                                                >> 0x0000000cU));
    vlSelfRef.block0__DOT__block0__DOT__g = ((IData)(vlSelfRef.block0__DOT__block0__DOT__a) 
                                             & (IData)(vlSelfRef.block0__DOT__block0__DOT__b));
    vlSelfRef.block0__DOT__block0__DOT__p = ((IData)(vlSelfRef.block0__DOT__block0__DOT__a) 
                                             ^ (IData)(vlSelfRef.block0__DOT__block0__DOT__b));
    vlSelfRef.block0__DOT__block1__DOT__g = ((IData)(vlSelfRef.block0__DOT__block1__DOT__a) 
                                             & (IData)(vlSelfRef.block0__DOT__block1__DOT__b));
    vlSelfRef.block0__DOT__block1__DOT__p = ((IData)(vlSelfRef.block0__DOT__block1__DOT__a) 
                                             ^ (IData)(vlSelfRef.block0__DOT__block1__DOT__b));
    vlSelfRef.block0__DOT__block2__DOT__g = ((IData)(vlSelfRef.block0__DOT__block2__DOT__a) 
                                             & (IData)(vlSelfRef.block0__DOT__block2__DOT__b));
    vlSelfRef.block0__DOT__block2__DOT__p = ((IData)(vlSelfRef.block0__DOT__block2__DOT__a) 
                                             ^ (IData)(vlSelfRef.block0__DOT__block2__DOT__b));
    vlSelfRef.block0__DOT__block3__DOT__g = ((IData)(vlSelfRef.block0__DOT__block3__DOT__a) 
                                             & (IData)(vlSelfRef.block0__DOT__block3__DOT__b));
    vlSelfRef.block0__DOT__block3__DOT__p = ((IData)(vlSelfRef.block0__DOT__block3__DOT__a) 
                                             ^ (IData)(vlSelfRef.block0__DOT__block3__DOT__b));
    vlSelfRef.block1__DOT__block0__DOT__g = ((IData)(vlSelfRef.block1__DOT__block0__DOT__a) 
                                             & (IData)(vlSelfRef.block1__DOT__block0__DOT__b));
    vlSelfRef.block1__DOT__block0__DOT__p = ((IData)(vlSelfRef.block1__DOT__block0__DOT__a) 
                                             ^ (IData)(vlSelfRef.block1__DOT__block0__DOT__b));
    vlSelfRef.block1__DOT__block1__DOT__g = ((IData)(vlSelfRef.block1__DOT__block1__DOT__a) 
                                             & (IData)(vlSelfRef.block1__DOT__block1__DOT__b));
    vlSelfRef.block1__DOT__block1__DOT__p = ((IData)(vlSelfRef.block1__DOT__block1__DOT__a) 
                                             ^ (IData)(vlSelfRef.block1__DOT__block1__DOT__b));
    vlSelfRef.block1__DOT__block2__DOT__g = ((IData)(vlSelfRef.block1__DOT__block2__DOT__a) 
                                             & (IData)(vlSelfRef.block1__DOT__block2__DOT__b));
    vlSelfRef.block1__DOT__block2__DOT__p = ((IData)(vlSelfRef.block1__DOT__block2__DOT__a) 
                                             ^ (IData)(vlSelfRef.block1__DOT__block2__DOT__b));
    vlSelfRef.block1__DOT__block3__DOT__g = ((IData)(vlSelfRef.block1__DOT__block3__DOT__a) 
                                             & (IData)(vlSelfRef.block1__DOT__block3__DOT__b));
    vlSelfRef.block1__DOT__block3__DOT__p = ((IData)(vlSelfRef.block1__DOT__block3__DOT__a) 
                                             ^ (IData)(vlSelfRef.block1__DOT__block3__DOT__b));
    vlSelfRef.block2__DOT__block0__DOT__g = ((IData)(vlSelfRef.block2__DOT__block0__DOT__a) 
                                             & (IData)(vlSelfRef.block2__DOT__block0__DOT__b));
    vlSelfRef.block2__DOT__block0__DOT__p = ((IData)(vlSelfRef.block2__DOT__block0__DOT__a) 
                                             ^ (IData)(vlSelfRef.block2__DOT__block0__DOT__b));
    vlSelfRef.block2__DOT__block1__DOT__g = ((IData)(vlSelfRef.block2__DOT__block1__DOT__a) 
                                             & (IData)(vlSelfRef.block2__DOT__block1__DOT__b));
    vlSelfRef.block2__DOT__block1__DOT__p = ((IData)(vlSelfRef.block2__DOT__block1__DOT__a) 
                                             ^ (IData)(vlSelfRef.block2__DOT__block1__DOT__b));
    vlSelfRef.block2__DOT__block2__DOT__g = ((IData)(vlSelfRef.block2__DOT__block2__DOT__a) 
                                             & (IData)(vlSelfRef.block2__DOT__block2__DOT__b));
    vlSelfRef.block2__DOT__block2__DOT__p = ((IData)(vlSelfRef.block2__DOT__block2__DOT__a) 
                                             ^ (IData)(vlSelfRef.block2__DOT__block2__DOT__b));
    vlSelfRef.block2__DOT__block3__DOT__g = ((IData)(vlSelfRef.block2__DOT__block3__DOT__a) 
                                             & (IData)(vlSelfRef.block2__DOT__block3__DOT__b));
    vlSelfRef.block2__DOT__block3__DOT__p = ((IData)(vlSelfRef.block2__DOT__block3__DOT__a) 
                                             ^ (IData)(vlSelfRef.block2__DOT__block3__DOT__b));
    vlSelfRef.block3__DOT__block0__DOT__g = ((IData)(vlSelfRef.block3__DOT__block0__DOT__a) 
                                             & (IData)(vlSelfRef.block3__DOT__block0__DOT__b));
    vlSelfRef.block3__DOT__block0__DOT__p = ((IData)(vlSelfRef.block3__DOT__block0__DOT__a) 
                                             ^ (IData)(vlSelfRef.block3__DOT__block0__DOT__b));
    vlSelfRef.block3__DOT__block1__DOT__g = ((IData)(vlSelfRef.block3__DOT__block1__DOT__a) 
                                             & (IData)(vlSelfRef.block3__DOT__block1__DOT__b));
    vlSelfRef.block3__DOT__block1__DOT__p = ((IData)(vlSelfRef.block3__DOT__block1__DOT__a) 
                                             ^ (IData)(vlSelfRef.block3__DOT__block1__DOT__b));
    vlSelfRef.block3__DOT__block2__DOT__g = ((IData)(vlSelfRef.block3__DOT__block2__DOT__a) 
                                             & (IData)(vlSelfRef.block3__DOT__block2__DOT__b));
    vlSelfRef.block3__DOT__block2__DOT__p = ((IData)(vlSelfRef.block3__DOT__block2__DOT__a) 
                                             ^ (IData)(vlSelfRef.block3__DOT__block2__DOT__b));
    vlSelfRef.block3__DOT__block3__DOT__g = ((IData)(vlSelfRef.block3__DOT__block3__DOT__a) 
                                             & (IData)(vlSelfRef.block3__DOT__block3__DOT__b));
    vlSelfRef.block3__DOT__block3__DOT__p = ((IData)(vlSelfRef.block3__DOT__block3__DOT__a) 
                                             ^ (IData)(vlSelfRef.block3__DOT__block3__DOT__b));
    vlSelfRef.block0__DOT__block0__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block0__DOT__block0__DOT__p)));
    block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block0__DOT__block0__DOT__p))));
    vlSelfRef.block0__DOT__block1__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block0__DOT__block1__DOT__p)));
    block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block0__DOT__block1__DOT__p))));
    vlSelfRef.block0__DOT__block2__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block0__DOT__block2__DOT__p)));
    block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block0__DOT__block2__DOT__p))));
    vlSelfRef.block0__DOT__block3__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block0__DOT__block3__DOT__p)));
    block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block0__DOT__block3__DOT__p))));
    vlSelfRef.block1__DOT__block0__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block1__DOT__block0__DOT__p)));
    block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block1__DOT__block0__DOT__p))));
    vlSelfRef.block1__DOT__block1__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block1__DOT__block1__DOT__p)));
    block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block1__DOT__block1__DOT__p))));
    vlSelfRef.block1__DOT__block2__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block1__DOT__block2__DOT__p)));
    block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block1__DOT__block2__DOT__p))));
    vlSelfRef.block1__DOT__block3__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block1__DOT__block3__DOT__p)));
    block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block1__DOT__block3__DOT__p))));
    vlSelfRef.block2__DOT__block0__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block2__DOT__block0__DOT__p)));
    block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block2__DOT__block0__DOT__p))));
    vlSelfRef.block2__DOT__block1__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block2__DOT__block1__DOT__p)));
    block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block2__DOT__block1__DOT__p))));
    vlSelfRef.block2__DOT__block2__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block2__DOT__block2__DOT__p)));
    block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block2__DOT__block2__DOT__p))));
    vlSelfRef.block2__DOT__block3__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block2__DOT__block3__DOT__p)));
    block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block2__DOT__block3__DOT__p))));
    vlSelfRef.block3__DOT__block0__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block3__DOT__block0__DOT__p)));
    block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block3__DOT__block0__DOT__p))));
    vlSelfRef.block3__DOT__block1__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block3__DOT__block1__DOT__p)));
    block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block3__DOT__block1__DOT__p))));
    vlSelfRef.block3__DOT__block2__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block3__DOT__block2__DOT__p)));
    block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block3__DOT__block2__DOT__p))));
    vlSelfRef.block3__DOT__block3__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block3__DOT__block3__DOT__p)));
    block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block3__DOT__block3__DOT__p))));
    block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block0__DOT__block0__DOT__p) 
              >> 1U));
    block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block0__DOT__block1__DOT__p) 
              >> 1U));
    block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block0__DOT__block2__DOT__p) 
              >> 1U));
    vlSelfRef.block0__DOT__p = ((((IData)(vlSelfRef.block0__DOT__block3__DOT__p_out) 
                                  << 3U) | ((IData)(vlSelfRef.block0__DOT__block2__DOT__p_out) 
                                            << 2U)) 
                                | (((IData)(vlSelfRef.block0__DOT__block1__DOT__p_out) 
                                    << 1U) | (IData)(vlSelfRef.block0__DOT__block0__DOT__p_out)));
    block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block0__DOT__block3__DOT__p) 
              >> 1U));
    block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block1__DOT__block0__DOT__p) 
              >> 1U));
    block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block1__DOT__block1__DOT__p) 
              >> 1U));
    block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block1__DOT__block2__DOT__p) 
              >> 1U));
    vlSelfRef.block1__DOT__p = ((((IData)(vlSelfRef.block1__DOT__block3__DOT__p_out) 
                                  << 3U) | ((IData)(vlSelfRef.block1__DOT__block2__DOT__p_out) 
                                            << 2U)) 
                                | (((IData)(vlSelfRef.block1__DOT__block1__DOT__p_out) 
                                    << 1U) | (IData)(vlSelfRef.block1__DOT__block0__DOT__p_out)));
    block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block1__DOT__block3__DOT__p) 
              >> 1U));
    block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block2__DOT__block0__DOT__p) 
              >> 1U));
    block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block2__DOT__block1__DOT__p) 
              >> 1U));
    block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block2__DOT__block2__DOT__p) 
              >> 1U));
    vlSelfRef.block2__DOT__p = ((((IData)(vlSelfRef.block2__DOT__block3__DOT__p_out) 
                                  << 3U) | ((IData)(vlSelfRef.block2__DOT__block2__DOT__p_out) 
                                            << 2U)) 
                                | (((IData)(vlSelfRef.block2__DOT__block1__DOT__p_out) 
                                    << 1U) | (IData)(vlSelfRef.block2__DOT__block0__DOT__p_out)));
    block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block2__DOT__block3__DOT__p) 
              >> 1U));
    block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block3__DOT__block0__DOT__p) 
              >> 1U));
    block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block3__DOT__block1__DOT__p) 
              >> 1U));
    block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block3__DOT__block2__DOT__p) 
              >> 1U));
    vlSelfRef.block3__DOT__p = ((((IData)(vlSelfRef.block3__DOT__block3__DOT__p_out) 
                                  << 3U) | ((IData)(vlSelfRef.block3__DOT__block2__DOT__p_out) 
                                            << 2U)) 
                                | (((IData)(vlSelfRef.block3__DOT__block1__DOT__p_out) 
                                    << 1U) | (IData)(vlSelfRef.block3__DOT__block0__DOT__p_out)));
    block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block3__DOT__block3__DOT__p) 
              >> 1U));
    __Vtableidx2 = ((((IData)(block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3) 
                      << 9U) | ((IData)(block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                << 8U)) | (((IData)(vlSelfRef.block0__DOT__block0__DOT__p) 
                                            << 4U) 
                                           | (IData)(vlSelfRef.block0__DOT__block0__DOT__g)));
    block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx2];
    __Vtableidx3 = ((((IData)(block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3) 
                      << 9U) | ((IData)(block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                << 8U)) | (((IData)(vlSelfRef.block0__DOT__block1__DOT__p) 
                                            << 4U) 
                                           | (IData)(vlSelfRef.block0__DOT__block1__DOT__g)));
    block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx3];
    __Vtableidx4 = ((((IData)(block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3) 
                      << 9U) | ((IData)(block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                << 8U)) | (((IData)(vlSelfRef.block0__DOT__block2__DOT__p) 
                                            << 4U) 
                                           | (IData)(vlSelfRef.block0__DOT__block2__DOT__g)));
    block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx4];
    vlSelfRef.block0__DOT__p_out = (IData)((0x0fU == (IData)(vlSelfRef.block0__DOT__p)));
    __Vtableidx5 = ((((IData)(block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3) 
                      << 9U) | ((IData)(block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                << 8U)) | (((IData)(vlSelfRef.block0__DOT__block3__DOT__p) 
                                            << 4U) 
                                           | (IData)(vlSelfRef.block0__DOT__block3__DOT__g)));
    block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx5];
    __Vtableidx7 = ((((IData)(block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3) 
                      << 9U) | ((IData)(block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                << 8U)) | (((IData)(vlSelfRef.block1__DOT__block0__DOT__p) 
                                            << 4U) 
                                           | (IData)(vlSelfRef.block1__DOT__block0__DOT__g)));
    block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx7];
    __Vtableidx8 = ((((IData)(block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3) 
                      << 9U) | ((IData)(block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                << 8U)) | (((IData)(vlSelfRef.block1__DOT__block1__DOT__p) 
                                            << 4U) 
                                           | (IData)(vlSelfRef.block1__DOT__block1__DOT__g)));
    block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx8];
    __Vtableidx9 = ((((IData)(block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3) 
                      << 9U) | ((IData)(block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                << 8U)) | (((IData)(vlSelfRef.block1__DOT__block2__DOT__p) 
                                            << 4U) 
                                           | (IData)(vlSelfRef.block1__DOT__block2__DOT__g)));
    block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx9];
    vlSelfRef.block1__DOT__p_out = (IData)((0x0fU == (IData)(vlSelfRef.block1__DOT__p)));
    __Vtableidx10 = ((((IData)(block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3) 
                       << 9U) | ((IData)(block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                 << 8U)) | (((IData)(vlSelfRef.block1__DOT__block3__DOT__p) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.block1__DOT__block3__DOT__g)));
    block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx10];
    __Vtableidx12 = ((((IData)(block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3) 
                       << 9U) | ((IData)(block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                 << 8U)) | (((IData)(vlSelfRef.block2__DOT__block0__DOT__p) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.block2__DOT__block0__DOT__g)));
    block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx12];
    __Vtableidx13 = ((((IData)(block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3) 
                       << 9U) | ((IData)(block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                 << 8U)) | (((IData)(vlSelfRef.block2__DOT__block1__DOT__p) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.block2__DOT__block1__DOT__g)));
    block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx13];
    __Vtableidx14 = ((((IData)(block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3) 
                       << 9U) | ((IData)(block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                 << 8U)) | (((IData)(vlSelfRef.block2__DOT__block2__DOT__p) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.block2__DOT__block2__DOT__g)));
    block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx14];
    vlSelfRef.block2__DOT__p_out = (IData)((0x0fU == (IData)(vlSelfRef.block2__DOT__p)));
    __Vtableidx15 = ((((IData)(block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3) 
                       << 9U) | ((IData)(block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                 << 8U)) | (((IData)(vlSelfRef.block2__DOT__block3__DOT__p) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.block2__DOT__block3__DOT__g)));
    block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx15];
    __Vtableidx17 = ((((IData)(block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3) 
                       << 9U) | ((IData)(block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                 << 8U)) | (((IData)(vlSelfRef.block3__DOT__block0__DOT__p) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.block3__DOT__block0__DOT__g)));
    block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx17];
    __Vtableidx18 = ((((IData)(block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3) 
                       << 9U) | ((IData)(block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                 << 8U)) | (((IData)(vlSelfRef.block3__DOT__block1__DOT__p) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.block3__DOT__block1__DOT__g)));
    block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx18];
    __Vtableidx19 = ((((IData)(block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3) 
                       << 9U) | ((IData)(block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                 << 8U)) | (((IData)(vlSelfRef.block3__DOT__block2__DOT__p) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.block3__DOT__block2__DOT__g)));
    block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx19];
    vlSelfRef.block3__DOT__p_out = (IData)((0x0fU == (IData)(vlSelfRef.block3__DOT__p)));
    __Vtableidx20 = ((((IData)(block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3) 
                       << 9U) | ((IData)(block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                 << 8U)) | (((IData)(vlSelfRef.block3__DOT__block3__DOT__p) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.block3__DOT__block3__DOT__g)));
    block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx20];
    vlSelfRef.block0__DOT__block0__DOT__g_out = block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block0__DOT__block1__DOT__g_out = block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block0__DOT__block2__DOT__g_out = block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block0__DOT__block3__DOT__g_out = block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block1__DOT__block0__DOT__g_out = block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block1__DOT__block1__DOT__g_out = block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block1__DOT__block2__DOT__g_out = block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block1__DOT__block3__DOT__g_out = block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block2__DOT__block0__DOT__g_out = block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block2__DOT__block1__DOT__g_out = block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block2__DOT__block2__DOT__g_out = block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block2__DOT__block3__DOT__g_out = block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block3__DOT__block0__DOT__g_out = block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block3__DOT__block1__DOT__g_out = block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block3__DOT__block2__DOT__g_out = block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.p = ((((IData)(vlSelfRef.block3__DOT__p_out) 
                     << 3U) | ((IData)(vlSelfRef.block2__DOT__p_out) 
                               << 2U)) | (((IData)(vlSelfRef.block1__DOT__p_out) 
                                           << 1U) | (IData)(vlSelfRef.block0__DOT__p_out)));
    vlSelfRef.block3__DOT__block3__DOT__g_out = block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block0__DOT__g = ((((IData)(vlSelfRef.block0__DOT__block3__DOT__g_out) 
                                  << 3U) | ((IData)(vlSelfRef.block0__DOT__block2__DOT__g_out) 
                                            << 2U)) 
                                | (((IData)(vlSelfRef.block0__DOT__block1__DOT__g_out) 
                                    << 1U) | (IData)(vlSelfRef.block0__DOT__block0__DOT__g_out)));
    vlSelfRef.block1__DOT__g = ((((IData)(vlSelfRef.block1__DOT__block3__DOT__g_out) 
                                  << 3U) | ((IData)(vlSelfRef.block1__DOT__block2__DOT__g_out) 
                                            << 2U)) 
                                | (((IData)(vlSelfRef.block1__DOT__block1__DOT__g_out) 
                                    << 1U) | (IData)(vlSelfRef.block1__DOT__block0__DOT__g_out)));
    vlSelfRef.block2__DOT__g = ((((IData)(vlSelfRef.block2__DOT__block3__DOT__g_out) 
                                  << 3U) | ((IData)(vlSelfRef.block2__DOT__block2__DOT__g_out) 
                                            << 2U)) 
                                | (((IData)(vlSelfRef.block2__DOT__block1__DOT__g_out) 
                                    << 1U) | (IData)(vlSelfRef.block2__DOT__block0__DOT__g_out)));
    vlSelfRef.block3__DOT__g = ((((IData)(vlSelfRef.block3__DOT__block3__DOT__g_out) 
                                  << 3U) | ((IData)(vlSelfRef.block3__DOT__block2__DOT__g_out) 
                                            << 2U)) 
                                | (((IData)(vlSelfRef.block3__DOT__block1__DOT__g_out) 
                                    << 1U) | (IData)(vlSelfRef.block3__DOT__block0__DOT__g_out)));
    block0__DOT____VdfgRegularize_h0843a2b9_0_1 = (1U 
                                                   & (((IData)(vlSelfRef.block0__DOT__p) 
                                                       >> 1U) 
                                                      & (IData)(vlSelfRef.block0__DOT__g)));
    block1__DOT____VdfgRegularize_h0843a2b9_0_1 = (1U 
                                                   & (((IData)(vlSelfRef.block1__DOT__p) 
                                                       >> 1U) 
                                                      & (IData)(vlSelfRef.block1__DOT__g)));
    block2__DOT____VdfgRegularize_h0843a2b9_0_1 = (1U 
                                                   & (((IData)(vlSelfRef.block2__DOT__p) 
                                                       >> 1U) 
                                                      & (IData)(vlSelfRef.block2__DOT__g)));
    block3__DOT____VdfgRegularize_h0843a2b9_0_1 = (1U 
                                                   & (((IData)(vlSelfRef.block3__DOT__p) 
                                                       >> 1U) 
                                                      & (IData)(vlSelfRef.block3__DOT__g)));
    __Vtableidx1 = (((IData)(block0__DOT____VdfgRegularize_h0843a2b9_0_1) 
                     << 8U) | (((IData)(vlSelfRef.block0__DOT__p) 
                                << 4U) | (IData)(vlSelfRef.block0__DOT__g)));
    vlSelfRef.block0__DOT__g_out = Vtop__ConstPool__TABLE_h08c4d8a1_0
        [__Vtableidx1];
    __Vtableidx6 = (((IData)(block1__DOT____VdfgRegularize_h0843a2b9_0_1) 
                     << 8U) | (((IData)(vlSelfRef.block1__DOT__p) 
                                << 4U) | (IData)(vlSelfRef.block1__DOT__g)));
    vlSelfRef.block1__DOT__g_out = Vtop__ConstPool__TABLE_h08c4d8a1_0
        [__Vtableidx6];
    __Vtableidx11 = (((IData)(block2__DOT____VdfgRegularize_h0843a2b9_0_1) 
                      << 8U) | (((IData)(vlSelfRef.block2__DOT__p) 
                                 << 4U) | (IData)(vlSelfRef.block2__DOT__g)));
    vlSelfRef.block2__DOT__g_out = Vtop__ConstPool__TABLE_h08c4d8a1_0
        [__Vtableidx11];
    __Vtableidx16 = (((IData)(block3__DOT____VdfgRegularize_h0843a2b9_0_1) 
                      << 8U) | (((IData)(vlSelfRef.block3__DOT__p) 
                                 << 4U) | (IData)(vlSelfRef.block3__DOT__g)));
    vlSelfRef.block3__DOT__g_out = Vtop__ConstPool__TABLE_h08c4d8a1_0
        [__Vtableidx16];
    vlSelfRef.g = ((((IData)(vlSelfRef.block3__DOT__g_out) 
                     << 3U) | ((IData)(vlSelfRef.block2__DOT__g_out) 
                               << 2U)) | (((IData)(vlSelfRef.block1__DOT__g_out) 
                                           << 1U) | (IData)(vlSelfRef.block0__DOT__g_out)));
    __VdfgRegularize_hf246a9bd_0_1 = (1U & ((IData)(vlSelfRef.g) 
                                            | ((IData)(vlSelfRef.p) 
                                               & (IData)(vlSelfRef.cin))));
    __VdfgRegularize_h6e95ff9d_0_5 = (1U & (((IData)(vlSelfRef.g) 
                                             >> 1U) 
                                            | (((IData)(vlSelfRef.p) 
                                                >> 1U) 
                                               & (IData)(__VdfgRegularize_hf246a9bd_0_1))));
    vlSelfRef.c = ((((4U & ((0x7ffffffcU & ((IData)(vlSelfRef.g) 
                                            >> 1U)) 
                            | (((((IData)(vlSelfRef.p) 
                                  >> 3U) & ((IData)(vlSelfRef.g) 
                                            >> 2U)) 
                                | (IData)(((0x0cU == 
                                            (0x0cU 
                                             & (IData)(vlSelfRef.p))) 
                                           & (IData)(__VdfgRegularize_h6e95ff9d_0_5)))) 
                               << 2U))) | ((2U & (((IData)(vlSelfRef.g) 
                                                   >> 1U) 
                                                  | (((IData)(vlSelfRef.p) 
                                                      >> 1U) 
                                                     & ((IData)(__VdfgRegularize_h6e95ff9d_0_5) 
                                                        << 1U)))) 
                                           | (IData)(__VdfgRegularize_h6e95ff9d_0_5))) 
                    << 2U) | (((IData)(__VdfgRegularize_hf246a9bd_0_1) 
                               << 1U) | (IData)(vlSelfRef.cin)));
    vlSelfRef.cout = (1U & ((IData)(vlSelfRef.c) >> 4U));
    vlSelfRef.block0__DOT__cin = (1U & (IData)(vlSelfRef.c));
    vlSelfRef.block1__DOT__cin = (1U & ((IData)(vlSelfRef.c) 
                                        >> 1U));
    vlSelfRef.block2__DOT__cin = (1U & ((IData)(vlSelfRef.c) 
                                        >> 2U));
    vlSelfRef.block3__DOT__cin = (1U & ((IData)(vlSelfRef.c) 
                                        >> 3U));
    block0__DOT____VdfgRegularize_h0843a2b9_0_0 = ((IData)(vlSelfRef.block0__DOT__p) 
                                                   & (IData)(vlSelfRef.block0__DOT__cin));
    block1__DOT____VdfgRegularize_h0843a2b9_0_0 = ((IData)(vlSelfRef.block1__DOT__p) 
                                                   & (IData)(vlSelfRef.block1__DOT__cin));
    block2__DOT____VdfgRegularize_h0843a2b9_0_0 = ((IData)(vlSelfRef.block2__DOT__p) 
                                                   & (IData)(vlSelfRef.block2__DOT__cin));
    block3__DOT____VdfgRegularize_h0843a2b9_0_0 = ((IData)(vlSelfRef.block3__DOT__p) 
                                                   & (IData)(vlSelfRef.block3__DOT__cin));
    __VdfgRegularize_hf246a9bd_1_1 = (1U & ((IData)(vlSelfRef.block0__DOT__g) 
                                            | (IData)(block0__DOT____VdfgRegularize_h0843a2b9_0_0)));
    __VdfgRegularize_hf246a9bd_1_6 = (1U & ((IData)(vlSelfRef.block1__DOT__g) 
                                            | (IData)(block1__DOT____VdfgRegularize_h0843a2b9_0_0)));
    __VdfgRegularize_hf246a9bd_1_11 = (1U & ((IData)(vlSelfRef.block2__DOT__g) 
                                             | (IData)(block2__DOT____VdfgRegularize_h0843a2b9_0_0)));
    __VdfgRegularize_hf246a9bd_1_16 = (1U & ((IData)(vlSelfRef.block3__DOT__g) 
                                             | (IData)(block3__DOT____VdfgRegularize_h0843a2b9_0_0)));
    vlSelfRef.block0__DOT__c = ((0x10U & (IData)(vlSelfRef.block0__DOT__c)) 
                                | ((((2U & (((IData)(vlSelfRef.block0__DOT__g) 
                                             >> 1U) 
                                            | (((IData)(vlSelfRef.block0__DOT__p) 
                                                >> 1U) 
                                               & ((IData)(vlSelfRef.block0__DOT__g) 
                                                  | ((IData)(vlSelfRef.block0__DOT__p) 
                                                     & ((IData)(__VdfgRegularize_hf246a9bd_1_1) 
                                                        << 1U)))))) 
                                     | (1U & (((IData)(vlSelfRef.block0__DOT__g) 
                                               >> 1U) 
                                              | ((IData)(block0__DOT____VdfgRegularize_h0843a2b9_0_1) 
                                                 | (((IData)(vlSelfRef.block0__DOT__p) 
                                                     >> 1U) 
                                                    & (IData)(block0__DOT____VdfgRegularize_h0843a2b9_0_0)))))) 
                                    << 2U) | (((IData)(__VdfgRegularize_hf246a9bd_1_1) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.block0__DOT__cin))));
    vlSelfRef.block1__DOT__c = ((0x10U & (IData)(vlSelfRef.block1__DOT__c)) 
                                | ((((2U & (((IData)(vlSelfRef.block1__DOT__g) 
                                             >> 1U) 
                                            | (((IData)(vlSelfRef.block1__DOT__p) 
                                                >> 1U) 
                                               & ((IData)(vlSelfRef.block1__DOT__g) 
                                                  | ((IData)(vlSelfRef.block1__DOT__p) 
                                                     & ((IData)(__VdfgRegularize_hf246a9bd_1_6) 
                                                        << 1U)))))) 
                                     | (1U & (((IData)(vlSelfRef.block1__DOT__g) 
                                               >> 1U) 
                                              | ((IData)(block1__DOT____VdfgRegularize_h0843a2b9_0_1) 
                                                 | (((IData)(vlSelfRef.block1__DOT__p) 
                                                     >> 1U) 
                                                    & (IData)(block1__DOT____VdfgRegularize_h0843a2b9_0_0)))))) 
                                    << 2U) | (((IData)(__VdfgRegularize_hf246a9bd_1_6) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.block1__DOT__cin))));
    vlSelfRef.block2__DOT__c = ((0x10U & (IData)(vlSelfRef.block2__DOT__c)) 
                                | ((((2U & (((IData)(vlSelfRef.block2__DOT__g) 
                                             >> 1U) 
                                            | (((IData)(vlSelfRef.block2__DOT__p) 
                                                >> 1U) 
                                               & ((IData)(vlSelfRef.block2__DOT__g) 
                                                  | ((IData)(vlSelfRef.block2__DOT__p) 
                                                     & ((IData)(__VdfgRegularize_hf246a9bd_1_11) 
                                                        << 1U)))))) 
                                     | (1U & (((IData)(vlSelfRef.block2__DOT__g) 
                                               >> 1U) 
                                              | ((IData)(block2__DOT____VdfgRegularize_h0843a2b9_0_1) 
                                                 | (((IData)(vlSelfRef.block2__DOT__p) 
                                                     >> 1U) 
                                                    & (IData)(block2__DOT____VdfgRegularize_h0843a2b9_0_0)))))) 
                                    << 2U) | (((IData)(__VdfgRegularize_hf246a9bd_1_11) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.block2__DOT__cin))));
    vlSelfRef.block3__DOT__c = ((0x10U & (IData)(vlSelfRef.block3__DOT__c)) 
                                | ((((2U & (((IData)(vlSelfRef.block3__DOT__g) 
                                             >> 1U) 
                                            | (((IData)(vlSelfRef.block3__DOT__p) 
                                                >> 1U) 
                                               & ((IData)(vlSelfRef.block3__DOT__g) 
                                                  | ((IData)(vlSelfRef.block3__DOT__p) 
                                                     & ((IData)(__VdfgRegularize_hf246a9bd_1_16) 
                                                        << 1U)))))) 
                                     | (1U & (((IData)(vlSelfRef.block3__DOT__g) 
                                               >> 1U) 
                                              | ((IData)(block3__DOT____VdfgRegularize_h0843a2b9_0_1) 
                                                 | (((IData)(vlSelfRef.block3__DOT__p) 
                                                     >> 1U) 
                                                    & (IData)(block3__DOT____VdfgRegularize_h0843a2b9_0_0)))))) 
                                    << 2U) | (((IData)(__VdfgRegularize_hf246a9bd_1_16) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.block3__DOT__cin))));
    vlSelfRef.block0__DOT__block0__DOT__cin = (1U & (IData)(vlSelfRef.block0__DOT__c));
    vlSelfRef.block0__DOT__block1__DOT__cin = (1U & 
                                               ((IData)(vlSelfRef.block0__DOT__c) 
                                                >> 1U));
    vlSelfRef.block0__DOT__block2__DOT__cin = (1U & 
                                               ((IData)(vlSelfRef.block0__DOT__c) 
                                                >> 2U));
    vlSelfRef.block0__DOT__block3__DOT__cin = (1U & 
                                               ((IData)(vlSelfRef.block0__DOT__c) 
                                                >> 3U));
    vlSelfRef.block1__DOT__block0__DOT__cin = (1U & (IData)(vlSelfRef.block1__DOT__c));
    vlSelfRef.block1__DOT__block1__DOT__cin = (1U & 
                                               ((IData)(vlSelfRef.block1__DOT__c) 
                                                >> 1U));
    vlSelfRef.block1__DOT__block2__DOT__cin = (1U & 
                                               ((IData)(vlSelfRef.block1__DOT__c) 
                                                >> 2U));
    vlSelfRef.block1__DOT__block3__DOT__cin = (1U & 
                                               ((IData)(vlSelfRef.block1__DOT__c) 
                                                >> 3U));
    vlSelfRef.block2__DOT__block0__DOT__cin = (1U & (IData)(vlSelfRef.block2__DOT__c));
    vlSelfRef.block2__DOT__block1__DOT__cin = (1U & 
                                               ((IData)(vlSelfRef.block2__DOT__c) 
                                                >> 1U));
    vlSelfRef.block2__DOT__block2__DOT__cin = (1U & 
                                               ((IData)(vlSelfRef.block2__DOT__c) 
                                                >> 2U));
    vlSelfRef.block2__DOT__block3__DOT__cin = (1U & 
                                               ((IData)(vlSelfRef.block2__DOT__c) 
                                                >> 3U));
    vlSelfRef.block3__DOT__block0__DOT__cin = (1U & (IData)(vlSelfRef.block3__DOT__c));
    vlSelfRef.block3__DOT__block1__DOT__cin = (1U & 
                                               ((IData)(vlSelfRef.block3__DOT__c) 
                                                >> 1U));
    vlSelfRef.block3__DOT__block2__DOT__cin = (1U & 
                                               ((IData)(vlSelfRef.block3__DOT__c) 
                                                >> 2U));
    vlSelfRef.block3__DOT__block3__DOT__cin = (1U & 
                                               ((IData)(vlSelfRef.block3__DOT__c) 
                                                >> 3U));
    block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block0__DOT__block0__DOT__p) 
           & (IData)(vlSelfRef.block0__DOT__block0__DOT__cin));
    block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block0__DOT__block1__DOT__p) 
           & (IData)(vlSelfRef.block0__DOT__block1__DOT__cin));
    block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block0__DOT__block2__DOT__p) 
           & (IData)(vlSelfRef.block0__DOT__block2__DOT__cin));
    block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block0__DOT__block3__DOT__p) 
           & (IData)(vlSelfRef.block0__DOT__block3__DOT__cin));
    block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block1__DOT__block0__DOT__p) 
           & (IData)(vlSelfRef.block1__DOT__block0__DOT__cin));
    block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block1__DOT__block1__DOT__p) 
           & (IData)(vlSelfRef.block1__DOT__block1__DOT__cin));
    block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block1__DOT__block2__DOT__p) 
           & (IData)(vlSelfRef.block1__DOT__block2__DOT__cin));
    block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block1__DOT__block3__DOT__p) 
           & (IData)(vlSelfRef.block1__DOT__block3__DOT__cin));
    block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block2__DOT__block0__DOT__p) 
           & (IData)(vlSelfRef.block2__DOT__block0__DOT__cin));
    block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block2__DOT__block1__DOT__p) 
           & (IData)(vlSelfRef.block2__DOT__block1__DOT__cin));
    block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block2__DOT__block2__DOT__p) 
           & (IData)(vlSelfRef.block2__DOT__block2__DOT__cin));
    block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block2__DOT__block3__DOT__p) 
           & (IData)(vlSelfRef.block2__DOT__block3__DOT__cin));
    block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block3__DOT__block0__DOT__p) 
           & (IData)(vlSelfRef.block3__DOT__block0__DOT__cin));
    block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block3__DOT__block1__DOT__p) 
           & (IData)(vlSelfRef.block3__DOT__block1__DOT__cin));
    block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block3__DOT__block2__DOT__p) 
           & (IData)(vlSelfRef.block3__DOT__block2__DOT__cin));
    block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block3__DOT__block3__DOT__p) 
           & (IData)(vlSelfRef.block3__DOT__block3__DOT__cin));
    __VdfgRegularize_hf246a9bd_1_2 = (1U & ((IData)(vlSelfRef.block0__DOT__block0__DOT__g) 
                                            | (IData)(block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_3 = (1U & ((IData)(vlSelfRef.block0__DOT__block1__DOT__g) 
                                            | (IData)(block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_4 = (1U & ((IData)(vlSelfRef.block0__DOT__block2__DOT__g) 
                                            | (IData)(block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_5 = (1U & ((IData)(vlSelfRef.block0__DOT__block3__DOT__g) 
                                            | (IData)(block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_7 = (1U & ((IData)(vlSelfRef.block1__DOT__block0__DOT__g) 
                                            | (IData)(block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_8 = (1U & ((IData)(vlSelfRef.block1__DOT__block1__DOT__g) 
                                            | (IData)(block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_9 = (1U & ((IData)(vlSelfRef.block1__DOT__block2__DOT__g) 
                                            | (IData)(block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_10 = (1U & ((IData)(vlSelfRef.block1__DOT__block3__DOT__g) 
                                             | (IData)(block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_12 = (1U & ((IData)(vlSelfRef.block2__DOT__block0__DOT__g) 
                                             | (IData)(block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_13 = (1U & ((IData)(vlSelfRef.block2__DOT__block1__DOT__g) 
                                             | (IData)(block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_14 = (1U & ((IData)(vlSelfRef.block2__DOT__block2__DOT__g) 
                                             | (IData)(block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_15 = (1U & ((IData)(vlSelfRef.block2__DOT__block3__DOT__g) 
                                             | (IData)(block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_17 = (1U & ((IData)(vlSelfRef.block3__DOT__block0__DOT__g) 
                                             | (IData)(block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_18 = (1U & ((IData)(vlSelfRef.block3__DOT__block1__DOT__g) 
                                             | (IData)(block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_19 = (1U & ((IData)(vlSelfRef.block3__DOT__block2__DOT__g) 
                                             | (IData)(block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_20 = (1U & ((IData)(vlSelfRef.block3__DOT__block3__DOT__g) 
                                             | (IData)(block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_h6e95ff9d_0_6 = (1U & (((IData)(vlSelfRef.block0__DOT__block0__DOT__g) 
                                             >> 1U) 
                                            | (((IData)(vlSelfRef.block0__DOT__block0__DOT__p) 
                                                >> 1U) 
                                               & (IData)(__VdfgRegularize_hf246a9bd_1_2))));
    __VdfgRegularize_h6e95ff9d_0_7 = (1U & (((IData)(vlSelfRef.block0__DOT__block1__DOT__g) 
                                             >> 1U) 
                                            | (((IData)(vlSelfRef.block0__DOT__block1__DOT__p) 
                                                >> 1U) 
                                               & (IData)(__VdfgRegularize_hf246a9bd_1_3))));
    __VdfgRegularize_h6e95ff9d_0_8 = (1U & (((IData)(vlSelfRef.block0__DOT__block2__DOT__g) 
                                             >> 1U) 
                                            | (((IData)(vlSelfRef.block0__DOT__block2__DOT__p) 
                                                >> 1U) 
                                               & (IData)(__VdfgRegularize_hf246a9bd_1_4))));
    __VdfgRegularize_h6e95ff9d_0_9 = (1U & (((IData)(vlSelfRef.block0__DOT__block3__DOT__g) 
                                             >> 1U) 
                                            | (((IData)(vlSelfRef.block0__DOT__block3__DOT__p) 
                                                >> 1U) 
                                               & (IData)(__VdfgRegularize_hf246a9bd_1_5))));
    __VdfgRegularize_h6e95ff9d_0_10 = (1U & (((IData)(vlSelfRef.block1__DOT__block0__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block1__DOT__block0__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_7))));
    __VdfgRegularize_h6e95ff9d_0_11 = (1U & (((IData)(vlSelfRef.block1__DOT__block1__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block1__DOT__block1__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_8))));
    __VdfgRegularize_h6e95ff9d_0_12 = (1U & (((IData)(vlSelfRef.block1__DOT__block2__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block1__DOT__block2__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_9))));
    __VdfgRegularize_h6e95ff9d_0_13 = (1U & (((IData)(vlSelfRef.block1__DOT__block3__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block1__DOT__block3__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_10))));
    __VdfgRegularize_h6e95ff9d_0_14 = (1U & (((IData)(vlSelfRef.block2__DOT__block0__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block2__DOT__block0__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_12))));
    __VdfgRegularize_h6e95ff9d_0_15 = (1U & (((IData)(vlSelfRef.block2__DOT__block1__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block2__DOT__block1__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_13))));
    __VdfgRegularize_h6e95ff9d_0_16 = (1U & (((IData)(vlSelfRef.block2__DOT__block2__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block2__DOT__block2__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_14))));
    __VdfgRegularize_h6e95ff9d_0_17 = (1U & (((IData)(vlSelfRef.block2__DOT__block3__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block2__DOT__block3__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_15))));
    __VdfgRegularize_h6e95ff9d_0_18 = (1U & (((IData)(vlSelfRef.block3__DOT__block0__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block3__DOT__block0__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_17))));
    __VdfgRegularize_h6e95ff9d_0_19 = (1U & (((IData)(vlSelfRef.block3__DOT__block1__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block3__DOT__block1__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_18))));
    __VdfgRegularize_h6e95ff9d_0_20 = (1U & (((IData)(vlSelfRef.block3__DOT__block2__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block3__DOT__block2__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_19))));
    __VdfgRegularize_h6e95ff9d_0_21 = (1U & (((IData)(vlSelfRef.block3__DOT__block3__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block3__DOT__block3__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_20))));
    vlSelfRef.block0__DOT__block0__DOT__c = (((((IData)(block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block0__DOT__block0__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block0__DOT__block0__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_6) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_6)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_2) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block0__DOT__block0__DOT__cin)));
    vlSelfRef.block0__DOT__block1__DOT__c = (((((IData)(block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block0__DOT__block1__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block0__DOT__block1__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_7) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_7)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_3) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block0__DOT__block1__DOT__cin)));
    vlSelfRef.block0__DOT__block2__DOT__c = (((((IData)(block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block0__DOT__block2__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block0__DOT__block2__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_8) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_8)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_4) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block0__DOT__block2__DOT__cin)));
    vlSelfRef.block0__DOT__block3__DOT__c = (((((IData)(block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block0__DOT__block3__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block0__DOT__block3__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_9) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_9)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_5) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block0__DOT__block3__DOT__cin)));
    vlSelfRef.block1__DOT__block0__DOT__c = (((((IData)(block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block1__DOT__block0__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block1__DOT__block0__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_10) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_10)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_7) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block1__DOT__block0__DOT__cin)));
    vlSelfRef.block1__DOT__block1__DOT__c = (((((IData)(block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block1__DOT__block1__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block1__DOT__block1__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_11) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_11)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_8) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block1__DOT__block1__DOT__cin)));
    vlSelfRef.block1__DOT__block2__DOT__c = (((((IData)(block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block1__DOT__block2__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block1__DOT__block2__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_12) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_12)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_9) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block1__DOT__block2__DOT__cin)));
    vlSelfRef.block1__DOT__block3__DOT__c = (((((IData)(block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block1__DOT__block3__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block1__DOT__block3__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_13) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_13)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_10) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block1__DOT__block3__DOT__cin)));
    vlSelfRef.block2__DOT__block0__DOT__c = (((((IData)(block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block2__DOT__block0__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block2__DOT__block0__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_14) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_14)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_12) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block2__DOT__block0__DOT__cin)));
    vlSelfRef.block2__DOT__block1__DOT__c = (((((IData)(block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block2__DOT__block1__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block2__DOT__block1__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_15) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_15)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_13) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block2__DOT__block1__DOT__cin)));
    vlSelfRef.block2__DOT__block2__DOT__c = (((((IData)(block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block2__DOT__block2__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block2__DOT__block2__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_16) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_16)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_14) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block2__DOT__block2__DOT__cin)));
    vlSelfRef.block2__DOT__block3__DOT__c = (((((IData)(block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block2__DOT__block3__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block2__DOT__block3__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_17) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_17)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_15) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block2__DOT__block3__DOT__cin)));
    vlSelfRef.block3__DOT__block0__DOT__c = (((((IData)(block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block3__DOT__block0__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block3__DOT__block0__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_18) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_18)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_17) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block3__DOT__block0__DOT__cin)));
    vlSelfRef.block3__DOT__block1__DOT__c = (((((IData)(block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block3__DOT__block1__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block3__DOT__block1__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_19) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_19)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_18) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block3__DOT__block1__DOT__cin)));
    vlSelfRef.block3__DOT__block2__DOT__c = (((((IData)(block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block3__DOT__block2__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block3__DOT__block2__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_20) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_20)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_19) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block3__DOT__block2__DOT__cin)));
    vlSelfRef.block3__DOT__block3__DOT__c = (((((IData)(block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block3__DOT__block3__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block3__DOT__block3__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_21) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_21)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_20) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block3__DOT__block3__DOT__cin)));
    vlSelfRef.block0__DOT__block0__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block0__DOT__block0__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block0__DOT__block0__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block0__DOT__block0__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block0__DOT__block0__DOT__c)));
    vlSelfRef.block0__DOT__block1__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block0__DOT__block1__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block0__DOT__block1__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block0__DOT__block1__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block0__DOT__block1__DOT__c)));
    vlSelfRef.block0__DOT__block2__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block0__DOT__block2__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block0__DOT__block2__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block0__DOT__block2__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block0__DOT__block2__DOT__c)));
    vlSelfRef.block0__DOT__block3__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block0__DOT__block3__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block0__DOT__block3__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block0__DOT__block3__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block0__DOT__block3__DOT__c)));
    vlSelfRef.block1__DOT__block0__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block1__DOT__block0__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block1__DOT__block0__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block1__DOT__block0__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block1__DOT__block0__DOT__c)));
    vlSelfRef.block1__DOT__block1__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block1__DOT__block1__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block1__DOT__block1__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block1__DOT__block1__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block1__DOT__block1__DOT__c)));
    vlSelfRef.block1__DOT__block2__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block1__DOT__block2__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block1__DOT__block2__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block1__DOT__block2__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block1__DOT__block2__DOT__c)));
    vlSelfRef.block1__DOT__block3__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block1__DOT__block3__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block1__DOT__block3__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block1__DOT__block3__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block1__DOT__block3__DOT__c)));
    vlSelfRef.block2__DOT__block0__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block2__DOT__block0__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block2__DOT__block0__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block2__DOT__block0__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block2__DOT__block0__DOT__c)));
    vlSelfRef.block2__DOT__block1__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block2__DOT__block1__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block2__DOT__block1__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block2__DOT__block1__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block2__DOT__block1__DOT__c)));
    vlSelfRef.block2__DOT__block2__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block2__DOT__block2__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block2__DOT__block2__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block2__DOT__block2__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block2__DOT__block2__DOT__c)));
    vlSelfRef.block2__DOT__block3__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block2__DOT__block3__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block2__DOT__block3__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block2__DOT__block3__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block2__DOT__block3__DOT__c)));
    vlSelfRef.block3__DOT__block0__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block3__DOT__block0__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block3__DOT__block0__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block3__DOT__block0__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block3__DOT__block0__DOT__c)));
    vlSelfRef.block3__DOT__block1__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block3__DOT__block1__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block3__DOT__block1__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block3__DOT__block1__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block3__DOT__block1__DOT__c)));
    vlSelfRef.block3__DOT__block2__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block3__DOT__block2__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block3__DOT__block2__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block3__DOT__block2__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block3__DOT__block2__DOT__c)));
    vlSelfRef.block3__DOT__block3__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block3__DOT__block3__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block3__DOT__block3__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block3__DOT__block3__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block3__DOT__block3__DOT__c)));
    vlSelfRef.block0__DOT__c3_from_last = vlSelfRef.block0__DOT__block3__DOT__c3_out;
    vlSelfRef.block0__DOT__sum = ((((IData)(vlSelfRef.block0__DOT__block3__DOT__sum) 
                                    << 0x0000000cU) 
                                   | ((IData)(vlSelfRef.block0__DOT__block2__DOT__sum) 
                                      << 8U)) | (((IData)(vlSelfRef.block0__DOT__block1__DOT__sum) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.block0__DOT__block0__DOT__sum)));
    vlSelfRef.block1__DOT__c3_from_last = vlSelfRef.block1__DOT__block3__DOT__c3_out;
    vlSelfRef.block1__DOT__sum = ((((IData)(vlSelfRef.block1__DOT__block3__DOT__sum) 
                                    << 0x0000000cU) 
                                   | ((IData)(vlSelfRef.block1__DOT__block2__DOT__sum) 
                                      << 8U)) | (((IData)(vlSelfRef.block1__DOT__block1__DOT__sum) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.block1__DOT__block0__DOT__sum)));
    vlSelfRef.block2__DOT__c3_from_last = vlSelfRef.block2__DOT__block3__DOT__c3_out;
    vlSelfRef.block2__DOT__sum = ((((IData)(vlSelfRef.block2__DOT__block3__DOT__sum) 
                                    << 0x0000000cU) 
                                   | ((IData)(vlSelfRef.block2__DOT__block2__DOT__sum) 
                                      << 8U)) | (((IData)(vlSelfRef.block2__DOT__block1__DOT__sum) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.block2__DOT__block0__DOT__sum)));
    vlSelfRef.block3__DOT__c3_from_last = vlSelfRef.block3__DOT__block3__DOT__c3_out;
    vlSelfRef.block3__DOT__sum = ((((IData)(vlSelfRef.block3__DOT__block3__DOT__sum) 
                                    << 0x0000000cU) 
                                   | ((IData)(vlSelfRef.block3__DOT__block2__DOT__sum) 
                                      << 8U)) | (((IData)(vlSelfRef.block3__DOT__block1__DOT__sum) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.block3__DOT__block0__DOT__sum)));
    vlSelfRef.block0__DOT__c15_out = vlSelfRef.block0__DOT__c3_from_last;
    vlSelfRef.block1__DOT__c15_out = vlSelfRef.block1__DOT__c3_from_last;
    vlSelfRef.block2__DOT__c15_out = vlSelfRef.block2__DOT__c3_from_last;
    vlSelfRef.block3__DOT__c15_out = vlSelfRef.block3__DOT__c3_from_last;
    vlSelfRef.sum = (((QData)((IData)((((IData)(vlSelfRef.block3__DOT__sum) 
                                        << 0x00000010U) 
                                       | (IData)(vlSelfRef.block2__DOT__sum)))) 
                      << 0x00000020U) | (QData)((IData)(
                                                        (((IData)(vlSelfRef.block1__DOT__sum) 
                                                          << 0x00000010U) 
                                                         | (IData)(vlSelfRef.block0__DOT__sum)))));
    vlSelfRef.c63_from_last = vlSelfRef.block3__DOT__c15_out;
    vlSelfRef.carry_into_msb = vlSelfRef.c63_from_last;
}

void Vtop_cla_64b___nba_sequent__TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst__0(Vtop_cla_64b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_cla_64b___nba_sequent__TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_0_1;
    __VdfgRegularize_hf246a9bd_0_1 = 0;
    CData/*0:0*/ block0__DOT____VdfgRegularize_h0843a2b9_0_0;
    block0__DOT____VdfgRegularize_h0843a2b9_0_0 = 0;
    CData/*0:0*/ block0__DOT____VdfgRegularize_h0843a2b9_0_1;
    block0__DOT____VdfgRegularize_h0843a2b9_0_1 = 0;
    CData/*0:0*/ block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0;
    block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2;
    block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3;
    block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4;
    block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0;
    block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2;
    block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3;
    block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4;
    block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0;
    block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2;
    block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3;
    block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4;
    block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0;
    block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2;
    block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3;
    block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4;
    block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block1__DOT____VdfgRegularize_h0843a2b9_0_0;
    block1__DOT____VdfgRegularize_h0843a2b9_0_0 = 0;
    CData/*0:0*/ block1__DOT____VdfgRegularize_h0843a2b9_0_1;
    block1__DOT____VdfgRegularize_h0843a2b9_0_1 = 0;
    CData/*0:0*/ block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0;
    block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2;
    block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3;
    block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4;
    block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0;
    block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2;
    block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3;
    block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4;
    block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0;
    block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2;
    block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3;
    block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4;
    block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0;
    block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2;
    block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3;
    block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4;
    block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block2__DOT____VdfgRegularize_h0843a2b9_0_0;
    block2__DOT____VdfgRegularize_h0843a2b9_0_0 = 0;
    CData/*0:0*/ block2__DOT____VdfgRegularize_h0843a2b9_0_1;
    block2__DOT____VdfgRegularize_h0843a2b9_0_1 = 0;
    CData/*0:0*/ block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0;
    block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2;
    block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3;
    block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4;
    block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0;
    block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2;
    block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3;
    block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4;
    block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0;
    block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2;
    block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3;
    block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4;
    block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0;
    block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2;
    block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3;
    block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4;
    block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block3__DOT____VdfgRegularize_h0843a2b9_0_0;
    block3__DOT____VdfgRegularize_h0843a2b9_0_0 = 0;
    CData/*0:0*/ block3__DOT____VdfgRegularize_h0843a2b9_0_1;
    block3__DOT____VdfgRegularize_h0843a2b9_0_1 = 0;
    CData/*0:0*/ block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0;
    block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2;
    block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3;
    block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4;
    block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0;
    block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2;
    block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3;
    block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4;
    block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0;
    block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2;
    block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3;
    block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4;
    block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0;
    block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2;
    block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3;
    block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4;
    block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_1;
    __VdfgRegularize_hf246a9bd_1_1 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_2;
    __VdfgRegularize_hf246a9bd_1_2 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_3;
    __VdfgRegularize_hf246a9bd_1_3 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_4;
    __VdfgRegularize_hf246a9bd_1_4 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_5;
    __VdfgRegularize_hf246a9bd_1_5 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_6;
    __VdfgRegularize_hf246a9bd_1_6 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_7;
    __VdfgRegularize_hf246a9bd_1_7 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_8;
    __VdfgRegularize_hf246a9bd_1_8 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_9;
    __VdfgRegularize_hf246a9bd_1_9 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_10;
    __VdfgRegularize_hf246a9bd_1_10 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_11;
    __VdfgRegularize_hf246a9bd_1_11 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_12;
    __VdfgRegularize_hf246a9bd_1_12 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_13;
    __VdfgRegularize_hf246a9bd_1_13 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_14;
    __VdfgRegularize_hf246a9bd_1_14 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_15;
    __VdfgRegularize_hf246a9bd_1_15 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_16;
    __VdfgRegularize_hf246a9bd_1_16 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_17;
    __VdfgRegularize_hf246a9bd_1_17 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_18;
    __VdfgRegularize_hf246a9bd_1_18 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_19;
    __VdfgRegularize_hf246a9bd_1_19 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_20;
    __VdfgRegularize_hf246a9bd_1_20 = 0;
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    SData/*9:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    SData/*9:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    SData/*9:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    SData/*9:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    SData/*8:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    SData/*9:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    SData/*9:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    SData/*9:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    SData/*9:0*/ __Vtableidx10;
    __Vtableidx10 = 0;
    SData/*8:0*/ __Vtableidx11;
    __Vtableidx11 = 0;
    SData/*9:0*/ __Vtableidx12;
    __Vtableidx12 = 0;
    SData/*9:0*/ __Vtableidx13;
    __Vtableidx13 = 0;
    SData/*9:0*/ __Vtableidx14;
    __Vtableidx14 = 0;
    SData/*9:0*/ __Vtableidx15;
    __Vtableidx15 = 0;
    SData/*8:0*/ __Vtableidx16;
    __Vtableidx16 = 0;
    SData/*9:0*/ __Vtableidx17;
    __Vtableidx17 = 0;
    SData/*9:0*/ __Vtableidx18;
    __Vtableidx18 = 0;
    SData/*9:0*/ __Vtableidx19;
    __Vtableidx19 = 0;
    SData/*9:0*/ __Vtableidx20;
    __Vtableidx20 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_5;
    __VdfgRegularize_h6e95ff9d_0_5 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_6;
    __VdfgRegularize_h6e95ff9d_0_6 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_7;
    __VdfgRegularize_h6e95ff9d_0_7 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_8;
    __VdfgRegularize_h6e95ff9d_0_8 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_9;
    __VdfgRegularize_h6e95ff9d_0_9 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_10;
    __VdfgRegularize_h6e95ff9d_0_10 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_11;
    __VdfgRegularize_h6e95ff9d_0_11 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_12;
    __VdfgRegularize_h6e95ff9d_0_12 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_13;
    __VdfgRegularize_h6e95ff9d_0_13 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_14;
    __VdfgRegularize_h6e95ff9d_0_14 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_15;
    __VdfgRegularize_h6e95ff9d_0_15 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_16;
    __VdfgRegularize_h6e95ff9d_0_16 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_17;
    __VdfgRegularize_h6e95ff9d_0_17 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_18;
    __VdfgRegularize_h6e95ff9d_0_18 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_19;
    __VdfgRegularize_h6e95ff9d_0_19 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_20;
    __VdfgRegularize_h6e95ff9d_0_20 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_21;
    __VdfgRegularize_h6e95ff9d_0_21 = 0;
    // Body
    vlSelfRef.a = vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__pc_current;
    vlSelfRef.block0__DOT__a = (0x0000ffffU & (IData)(vlSelfRef.a));
    vlSelfRef.block1__DOT__a = (0x0000ffffU & (IData)(
                                                      (vlSelfRef.a 
                                                       >> 0x00000010U)));
    vlSelfRef.block2__DOT__a = (0x0000ffffU & (IData)(
                                                      (vlSelfRef.a 
                                                       >> 0x00000020U)));
    vlSelfRef.block3__DOT__a = (0x0000ffffU & (IData)(
                                                      (vlSelfRef.a 
                                                       >> 0x00000030U)));
    vlSelfRef.block0__DOT__block0__DOT__a = (0x0000000fU 
                                             & (IData)(vlSelfRef.block0__DOT__a));
    vlSelfRef.block0__DOT__block1__DOT__a = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block0__DOT__a) 
                                                >> 4U));
    vlSelfRef.block0__DOT__block2__DOT__a = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block0__DOT__a) 
                                                >> 8U));
    vlSelfRef.block0__DOT__block3__DOT__a = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block0__DOT__a) 
                                                >> 0x0000000cU));
    vlSelfRef.block1__DOT__block0__DOT__a = (0x0000000fU 
                                             & (IData)(vlSelfRef.block1__DOT__a));
    vlSelfRef.block1__DOT__block1__DOT__a = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block1__DOT__a) 
                                                >> 4U));
    vlSelfRef.block1__DOT__block2__DOT__a = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block1__DOT__a) 
                                                >> 8U));
    vlSelfRef.block1__DOT__block3__DOT__a = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block1__DOT__a) 
                                                >> 0x0000000cU));
    vlSelfRef.block2__DOT__block0__DOT__a = (0x0000000fU 
                                             & (IData)(vlSelfRef.block2__DOT__a));
    vlSelfRef.block2__DOT__block1__DOT__a = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block2__DOT__a) 
                                                >> 4U));
    vlSelfRef.block2__DOT__block2__DOT__a = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block2__DOT__a) 
                                                >> 8U));
    vlSelfRef.block2__DOT__block3__DOT__a = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block2__DOT__a) 
                                                >> 0x0000000cU));
    vlSelfRef.block3__DOT__block0__DOT__a = (0x0000000fU 
                                             & (IData)(vlSelfRef.block3__DOT__a));
    vlSelfRef.block3__DOT__block1__DOT__a = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block3__DOT__a) 
                                                >> 4U));
    vlSelfRef.block3__DOT__block2__DOT__a = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block3__DOT__a) 
                                                >> 8U));
    vlSelfRef.block3__DOT__block3__DOT__a = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block3__DOT__a) 
                                                >> 0x0000000cU));
    vlSelfRef.block0__DOT__block0__DOT__g = ((IData)(vlSelfRef.block0__DOT__block0__DOT__a) 
                                             & (IData)(vlSelfRef.block0__DOT__block0__DOT__b));
    vlSelfRef.block0__DOT__block0__DOT__p = ((IData)(vlSelfRef.block0__DOT__block0__DOT__a) 
                                             ^ (IData)(vlSelfRef.block0__DOT__block0__DOT__b));
    vlSelfRef.block0__DOT__block1__DOT__g = ((IData)(vlSelfRef.block0__DOT__block1__DOT__a) 
                                             & (IData)(vlSelfRef.block0__DOT__block1__DOT__b));
    vlSelfRef.block0__DOT__block1__DOT__p = ((IData)(vlSelfRef.block0__DOT__block1__DOT__a) 
                                             ^ (IData)(vlSelfRef.block0__DOT__block1__DOT__b));
    vlSelfRef.block0__DOT__block2__DOT__g = ((IData)(vlSelfRef.block0__DOT__block2__DOT__a) 
                                             & (IData)(vlSelfRef.block0__DOT__block2__DOT__b));
    vlSelfRef.block0__DOT__block2__DOT__p = ((IData)(vlSelfRef.block0__DOT__block2__DOT__a) 
                                             ^ (IData)(vlSelfRef.block0__DOT__block2__DOT__b));
    vlSelfRef.block0__DOT__block3__DOT__g = ((IData)(vlSelfRef.block0__DOT__block3__DOT__a) 
                                             & (IData)(vlSelfRef.block0__DOT__block3__DOT__b));
    vlSelfRef.block0__DOT__block3__DOT__p = ((IData)(vlSelfRef.block0__DOT__block3__DOT__a) 
                                             ^ (IData)(vlSelfRef.block0__DOT__block3__DOT__b));
    vlSelfRef.block1__DOT__block0__DOT__g = ((IData)(vlSelfRef.block1__DOT__block0__DOT__a) 
                                             & (IData)(vlSelfRef.block1__DOT__block0__DOT__b));
    vlSelfRef.block1__DOT__block0__DOT__p = ((IData)(vlSelfRef.block1__DOT__block0__DOT__a) 
                                             ^ (IData)(vlSelfRef.block1__DOT__block0__DOT__b));
    vlSelfRef.block1__DOT__block1__DOT__g = ((IData)(vlSelfRef.block1__DOT__block1__DOT__a) 
                                             & (IData)(vlSelfRef.block1__DOT__block1__DOT__b));
    vlSelfRef.block1__DOT__block1__DOT__p = ((IData)(vlSelfRef.block1__DOT__block1__DOT__a) 
                                             ^ (IData)(vlSelfRef.block1__DOT__block1__DOT__b));
    vlSelfRef.block1__DOT__block2__DOT__g = ((IData)(vlSelfRef.block1__DOT__block2__DOT__a) 
                                             & (IData)(vlSelfRef.block1__DOT__block2__DOT__b));
    vlSelfRef.block1__DOT__block2__DOT__p = ((IData)(vlSelfRef.block1__DOT__block2__DOT__a) 
                                             ^ (IData)(vlSelfRef.block1__DOT__block2__DOT__b));
    vlSelfRef.block1__DOT__block3__DOT__g = ((IData)(vlSelfRef.block1__DOT__block3__DOT__a) 
                                             & (IData)(vlSelfRef.block1__DOT__block3__DOT__b));
    vlSelfRef.block1__DOT__block3__DOT__p = ((IData)(vlSelfRef.block1__DOT__block3__DOT__a) 
                                             ^ (IData)(vlSelfRef.block1__DOT__block3__DOT__b));
    vlSelfRef.block2__DOT__block0__DOT__g = ((IData)(vlSelfRef.block2__DOT__block0__DOT__a) 
                                             & (IData)(vlSelfRef.block2__DOT__block0__DOT__b));
    vlSelfRef.block2__DOT__block0__DOT__p = ((IData)(vlSelfRef.block2__DOT__block0__DOT__a) 
                                             ^ (IData)(vlSelfRef.block2__DOT__block0__DOT__b));
    vlSelfRef.block2__DOT__block1__DOT__g = ((IData)(vlSelfRef.block2__DOT__block1__DOT__a) 
                                             & (IData)(vlSelfRef.block2__DOT__block1__DOT__b));
    vlSelfRef.block2__DOT__block1__DOT__p = ((IData)(vlSelfRef.block2__DOT__block1__DOT__a) 
                                             ^ (IData)(vlSelfRef.block2__DOT__block1__DOT__b));
    vlSelfRef.block2__DOT__block2__DOT__g = ((IData)(vlSelfRef.block2__DOT__block2__DOT__a) 
                                             & (IData)(vlSelfRef.block2__DOT__block2__DOT__b));
    vlSelfRef.block2__DOT__block2__DOT__p = ((IData)(vlSelfRef.block2__DOT__block2__DOT__a) 
                                             ^ (IData)(vlSelfRef.block2__DOT__block2__DOT__b));
    vlSelfRef.block2__DOT__block3__DOT__g = ((IData)(vlSelfRef.block2__DOT__block3__DOT__a) 
                                             & (IData)(vlSelfRef.block2__DOT__block3__DOT__b));
    vlSelfRef.block2__DOT__block3__DOT__p = ((IData)(vlSelfRef.block2__DOT__block3__DOT__a) 
                                             ^ (IData)(vlSelfRef.block2__DOT__block3__DOT__b));
    vlSelfRef.block3__DOT__block0__DOT__g = ((IData)(vlSelfRef.block3__DOT__block0__DOT__a) 
                                             & (IData)(vlSelfRef.block3__DOT__block0__DOT__b));
    vlSelfRef.block3__DOT__block0__DOT__p = ((IData)(vlSelfRef.block3__DOT__block0__DOT__a) 
                                             ^ (IData)(vlSelfRef.block3__DOT__block0__DOT__b));
    vlSelfRef.block3__DOT__block1__DOT__g = ((IData)(vlSelfRef.block3__DOT__block1__DOT__a) 
                                             & (IData)(vlSelfRef.block3__DOT__block1__DOT__b));
    vlSelfRef.block3__DOT__block1__DOT__p = ((IData)(vlSelfRef.block3__DOT__block1__DOT__a) 
                                             ^ (IData)(vlSelfRef.block3__DOT__block1__DOT__b));
    vlSelfRef.block3__DOT__block2__DOT__g = ((IData)(vlSelfRef.block3__DOT__block2__DOT__a) 
                                             & (IData)(vlSelfRef.block3__DOT__block2__DOT__b));
    vlSelfRef.block3__DOT__block2__DOT__p = ((IData)(vlSelfRef.block3__DOT__block2__DOT__a) 
                                             ^ (IData)(vlSelfRef.block3__DOT__block2__DOT__b));
    vlSelfRef.block3__DOT__block3__DOT__g = ((IData)(vlSelfRef.block3__DOT__block3__DOT__a) 
                                             & (IData)(vlSelfRef.block3__DOT__block3__DOT__b));
    vlSelfRef.block3__DOT__block3__DOT__p = ((IData)(vlSelfRef.block3__DOT__block3__DOT__a) 
                                             ^ (IData)(vlSelfRef.block3__DOT__block3__DOT__b));
    vlSelfRef.block0__DOT__block0__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block0__DOT__block0__DOT__p)));
    block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block0__DOT__block0__DOT__p))));
    vlSelfRef.block0__DOT__block1__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block0__DOT__block1__DOT__p)));
    block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block0__DOT__block1__DOT__p))));
    vlSelfRef.block0__DOT__block2__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block0__DOT__block2__DOT__p)));
    block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block0__DOT__block2__DOT__p))));
    vlSelfRef.block0__DOT__block3__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block0__DOT__block3__DOT__p)));
    block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block0__DOT__block3__DOT__p))));
    vlSelfRef.block1__DOT__block0__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block1__DOT__block0__DOT__p)));
    block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block1__DOT__block0__DOT__p))));
    vlSelfRef.block1__DOT__block1__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block1__DOT__block1__DOT__p)));
    block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block1__DOT__block1__DOT__p))));
    vlSelfRef.block1__DOT__block2__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block1__DOT__block2__DOT__p)));
    block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block1__DOT__block2__DOT__p))));
    vlSelfRef.block1__DOT__block3__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block1__DOT__block3__DOT__p)));
    block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block1__DOT__block3__DOT__p))));
    vlSelfRef.block2__DOT__block0__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block2__DOT__block0__DOT__p)));
    block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block2__DOT__block0__DOT__p))));
    vlSelfRef.block2__DOT__block1__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block2__DOT__block1__DOT__p)));
    block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block2__DOT__block1__DOT__p))));
    vlSelfRef.block2__DOT__block2__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block2__DOT__block2__DOT__p)));
    block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block2__DOT__block2__DOT__p))));
    vlSelfRef.block2__DOT__block3__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block2__DOT__block3__DOT__p)));
    block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block2__DOT__block3__DOT__p))));
    vlSelfRef.block3__DOT__block0__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block3__DOT__block0__DOT__p)));
    block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block3__DOT__block0__DOT__p))));
    vlSelfRef.block3__DOT__block1__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block3__DOT__block1__DOT__p)));
    block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block3__DOT__block1__DOT__p))));
    vlSelfRef.block3__DOT__block2__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block3__DOT__block2__DOT__p)));
    block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block3__DOT__block2__DOT__p))));
    vlSelfRef.block3__DOT__block3__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block3__DOT__block3__DOT__p)));
    block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block3__DOT__block3__DOT__p))));
    block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block0__DOT__block0__DOT__p) 
              >> 1U));
    block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block0__DOT__block1__DOT__p) 
              >> 1U));
    block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block0__DOT__block2__DOT__p) 
              >> 1U));
    vlSelfRef.block0__DOT__p = ((((IData)(vlSelfRef.block0__DOT__block3__DOT__p_out) 
                                  << 3U) | ((IData)(vlSelfRef.block0__DOT__block2__DOT__p_out) 
                                            << 2U)) 
                                | (((IData)(vlSelfRef.block0__DOT__block1__DOT__p_out) 
                                    << 1U) | (IData)(vlSelfRef.block0__DOT__block0__DOT__p_out)));
    block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block0__DOT__block3__DOT__p) 
              >> 1U));
    block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block1__DOT__block0__DOT__p) 
              >> 1U));
    block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block1__DOT__block1__DOT__p) 
              >> 1U));
    block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block1__DOT__block2__DOT__p) 
              >> 1U));
    vlSelfRef.block1__DOT__p = ((((IData)(vlSelfRef.block1__DOT__block3__DOT__p_out) 
                                  << 3U) | ((IData)(vlSelfRef.block1__DOT__block2__DOT__p_out) 
                                            << 2U)) 
                                | (((IData)(vlSelfRef.block1__DOT__block1__DOT__p_out) 
                                    << 1U) | (IData)(vlSelfRef.block1__DOT__block0__DOT__p_out)));
    block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block1__DOT__block3__DOT__p) 
              >> 1U));
    block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block2__DOT__block0__DOT__p) 
              >> 1U));
    block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block2__DOT__block1__DOT__p) 
              >> 1U));
    block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block2__DOT__block2__DOT__p) 
              >> 1U));
    vlSelfRef.block2__DOT__p = ((((IData)(vlSelfRef.block2__DOT__block3__DOT__p_out) 
                                  << 3U) | ((IData)(vlSelfRef.block2__DOT__block2__DOT__p_out) 
                                            << 2U)) 
                                | (((IData)(vlSelfRef.block2__DOT__block1__DOT__p_out) 
                                    << 1U) | (IData)(vlSelfRef.block2__DOT__block0__DOT__p_out)));
    block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block2__DOT__block3__DOT__p) 
              >> 1U));
    block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block3__DOT__block0__DOT__p) 
              >> 1U));
    block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block3__DOT__block1__DOT__p) 
              >> 1U));
    block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block3__DOT__block2__DOT__p) 
              >> 1U));
    vlSelfRef.block3__DOT__p = ((((IData)(vlSelfRef.block3__DOT__block3__DOT__p_out) 
                                  << 3U) | ((IData)(vlSelfRef.block3__DOT__block2__DOT__p_out) 
                                            << 2U)) 
                                | (((IData)(vlSelfRef.block3__DOT__block1__DOT__p_out) 
                                    << 1U) | (IData)(vlSelfRef.block3__DOT__block0__DOT__p_out)));
    block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block3__DOT__block3__DOT__p) 
              >> 1U));
    __Vtableidx2 = ((((IData)(block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3) 
                      << 9U) | ((IData)(block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                << 8U)) | (((IData)(vlSelfRef.block0__DOT__block0__DOT__p) 
                                            << 4U) 
                                           | (IData)(vlSelfRef.block0__DOT__block0__DOT__g)));
    block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx2];
    __Vtableidx3 = ((((IData)(block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3) 
                      << 9U) | ((IData)(block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                << 8U)) | (((IData)(vlSelfRef.block0__DOT__block1__DOT__p) 
                                            << 4U) 
                                           | (IData)(vlSelfRef.block0__DOT__block1__DOT__g)));
    block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx3];
    __Vtableidx4 = ((((IData)(block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3) 
                      << 9U) | ((IData)(block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                << 8U)) | (((IData)(vlSelfRef.block0__DOT__block2__DOT__p) 
                                            << 4U) 
                                           | (IData)(vlSelfRef.block0__DOT__block2__DOT__g)));
    block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx4];
    vlSelfRef.block0__DOT__p_out = (IData)((0x0fU == (IData)(vlSelfRef.block0__DOT__p)));
    __Vtableidx5 = ((((IData)(block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3) 
                      << 9U) | ((IData)(block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                << 8U)) | (((IData)(vlSelfRef.block0__DOT__block3__DOT__p) 
                                            << 4U) 
                                           | (IData)(vlSelfRef.block0__DOT__block3__DOT__g)));
    block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx5];
    __Vtableidx7 = ((((IData)(block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3) 
                      << 9U) | ((IData)(block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                << 8U)) | (((IData)(vlSelfRef.block1__DOT__block0__DOT__p) 
                                            << 4U) 
                                           | (IData)(vlSelfRef.block1__DOT__block0__DOT__g)));
    block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx7];
    __Vtableidx8 = ((((IData)(block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3) 
                      << 9U) | ((IData)(block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                << 8U)) | (((IData)(vlSelfRef.block1__DOT__block1__DOT__p) 
                                            << 4U) 
                                           | (IData)(vlSelfRef.block1__DOT__block1__DOT__g)));
    block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx8];
    __Vtableidx9 = ((((IData)(block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3) 
                      << 9U) | ((IData)(block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                << 8U)) | (((IData)(vlSelfRef.block1__DOT__block2__DOT__p) 
                                            << 4U) 
                                           | (IData)(vlSelfRef.block1__DOT__block2__DOT__g)));
    block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx9];
    vlSelfRef.block1__DOT__p_out = (IData)((0x0fU == (IData)(vlSelfRef.block1__DOT__p)));
    __Vtableidx10 = ((((IData)(block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3) 
                       << 9U) | ((IData)(block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                 << 8U)) | (((IData)(vlSelfRef.block1__DOT__block3__DOT__p) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.block1__DOT__block3__DOT__g)));
    block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx10];
    __Vtableidx12 = ((((IData)(block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3) 
                       << 9U) | ((IData)(block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                 << 8U)) | (((IData)(vlSelfRef.block2__DOT__block0__DOT__p) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.block2__DOT__block0__DOT__g)));
    block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx12];
    __Vtableidx13 = ((((IData)(block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3) 
                       << 9U) | ((IData)(block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                 << 8U)) | (((IData)(vlSelfRef.block2__DOT__block1__DOT__p) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.block2__DOT__block1__DOT__g)));
    block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx13];
    __Vtableidx14 = ((((IData)(block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3) 
                       << 9U) | ((IData)(block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                 << 8U)) | (((IData)(vlSelfRef.block2__DOT__block2__DOT__p) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.block2__DOT__block2__DOT__g)));
    block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx14];
    vlSelfRef.block2__DOT__p_out = (IData)((0x0fU == (IData)(vlSelfRef.block2__DOT__p)));
    __Vtableidx15 = ((((IData)(block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3) 
                       << 9U) | ((IData)(block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                 << 8U)) | (((IData)(vlSelfRef.block2__DOT__block3__DOT__p) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.block2__DOT__block3__DOT__g)));
    block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx15];
    __Vtableidx17 = ((((IData)(block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3) 
                       << 9U) | ((IData)(block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                 << 8U)) | (((IData)(vlSelfRef.block3__DOT__block0__DOT__p) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.block3__DOT__block0__DOT__g)));
    block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx17];
    __Vtableidx18 = ((((IData)(block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3) 
                       << 9U) | ((IData)(block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                 << 8U)) | (((IData)(vlSelfRef.block3__DOT__block1__DOT__p) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.block3__DOT__block1__DOT__g)));
    block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx18];
    __Vtableidx19 = ((((IData)(block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3) 
                       << 9U) | ((IData)(block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                 << 8U)) | (((IData)(vlSelfRef.block3__DOT__block2__DOT__p) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.block3__DOT__block2__DOT__g)));
    block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx19];
    vlSelfRef.block3__DOT__p_out = (IData)((0x0fU == (IData)(vlSelfRef.block3__DOT__p)));
    __Vtableidx20 = ((((IData)(block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3) 
                       << 9U) | ((IData)(block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                 << 8U)) | (((IData)(vlSelfRef.block3__DOT__block3__DOT__p) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.block3__DOT__block3__DOT__g)));
    block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx20];
    vlSelfRef.block0__DOT__block0__DOT__g_out = block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block0__DOT__block1__DOT__g_out = block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block0__DOT__block2__DOT__g_out = block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block0__DOT__block3__DOT__g_out = block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block1__DOT__block0__DOT__g_out = block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block1__DOT__block1__DOT__g_out = block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block1__DOT__block2__DOT__g_out = block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block1__DOT__block3__DOT__g_out = block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block2__DOT__block0__DOT__g_out = block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block2__DOT__block1__DOT__g_out = block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block2__DOT__block2__DOT__g_out = block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block2__DOT__block3__DOT__g_out = block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block3__DOT__block0__DOT__g_out = block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block3__DOT__block1__DOT__g_out = block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block3__DOT__block2__DOT__g_out = block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.p = ((((IData)(vlSelfRef.block3__DOT__p_out) 
                     << 3U) | ((IData)(vlSelfRef.block2__DOT__p_out) 
                               << 2U)) | (((IData)(vlSelfRef.block1__DOT__p_out) 
                                           << 1U) | (IData)(vlSelfRef.block0__DOT__p_out)));
    vlSelfRef.block3__DOT__block3__DOT__g_out = block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block0__DOT__g = ((((IData)(vlSelfRef.block0__DOT__block3__DOT__g_out) 
                                  << 3U) | ((IData)(vlSelfRef.block0__DOT__block2__DOT__g_out) 
                                            << 2U)) 
                                | (((IData)(vlSelfRef.block0__DOT__block1__DOT__g_out) 
                                    << 1U) | (IData)(vlSelfRef.block0__DOT__block0__DOT__g_out)));
    vlSelfRef.block1__DOT__g = ((((IData)(vlSelfRef.block1__DOT__block3__DOT__g_out) 
                                  << 3U) | ((IData)(vlSelfRef.block1__DOT__block2__DOT__g_out) 
                                            << 2U)) 
                                | (((IData)(vlSelfRef.block1__DOT__block1__DOT__g_out) 
                                    << 1U) | (IData)(vlSelfRef.block1__DOT__block0__DOT__g_out)));
    vlSelfRef.block2__DOT__g = ((((IData)(vlSelfRef.block2__DOT__block3__DOT__g_out) 
                                  << 3U) | ((IData)(vlSelfRef.block2__DOT__block2__DOT__g_out) 
                                            << 2U)) 
                                | (((IData)(vlSelfRef.block2__DOT__block1__DOT__g_out) 
                                    << 1U) | (IData)(vlSelfRef.block2__DOT__block0__DOT__g_out)));
    vlSelfRef.block3__DOT__g = ((((IData)(vlSelfRef.block3__DOT__block3__DOT__g_out) 
                                  << 3U) | ((IData)(vlSelfRef.block3__DOT__block2__DOT__g_out) 
                                            << 2U)) 
                                | (((IData)(vlSelfRef.block3__DOT__block1__DOT__g_out) 
                                    << 1U) | (IData)(vlSelfRef.block3__DOT__block0__DOT__g_out)));
    block0__DOT____VdfgRegularize_h0843a2b9_0_1 = (1U 
                                                   & (((IData)(vlSelfRef.block0__DOT__p) 
                                                       >> 1U) 
                                                      & (IData)(vlSelfRef.block0__DOT__g)));
    block1__DOT____VdfgRegularize_h0843a2b9_0_1 = (1U 
                                                   & (((IData)(vlSelfRef.block1__DOT__p) 
                                                       >> 1U) 
                                                      & (IData)(vlSelfRef.block1__DOT__g)));
    block2__DOT____VdfgRegularize_h0843a2b9_0_1 = (1U 
                                                   & (((IData)(vlSelfRef.block2__DOT__p) 
                                                       >> 1U) 
                                                      & (IData)(vlSelfRef.block2__DOT__g)));
    block3__DOT____VdfgRegularize_h0843a2b9_0_1 = (1U 
                                                   & (((IData)(vlSelfRef.block3__DOT__p) 
                                                       >> 1U) 
                                                      & (IData)(vlSelfRef.block3__DOT__g)));
    __Vtableidx1 = (((IData)(block0__DOT____VdfgRegularize_h0843a2b9_0_1) 
                     << 8U) | (((IData)(vlSelfRef.block0__DOT__p) 
                                << 4U) | (IData)(vlSelfRef.block0__DOT__g)));
    vlSelfRef.block0__DOT__g_out = Vtop__ConstPool__TABLE_h08c4d8a1_0
        [__Vtableidx1];
    __Vtableidx6 = (((IData)(block1__DOT____VdfgRegularize_h0843a2b9_0_1) 
                     << 8U) | (((IData)(vlSelfRef.block1__DOT__p) 
                                << 4U) | (IData)(vlSelfRef.block1__DOT__g)));
    vlSelfRef.block1__DOT__g_out = Vtop__ConstPool__TABLE_h08c4d8a1_0
        [__Vtableidx6];
    __Vtableidx11 = (((IData)(block2__DOT____VdfgRegularize_h0843a2b9_0_1) 
                      << 8U) | (((IData)(vlSelfRef.block2__DOT__p) 
                                 << 4U) | (IData)(vlSelfRef.block2__DOT__g)));
    vlSelfRef.block2__DOT__g_out = Vtop__ConstPool__TABLE_h08c4d8a1_0
        [__Vtableidx11];
    __Vtableidx16 = (((IData)(block3__DOT____VdfgRegularize_h0843a2b9_0_1) 
                      << 8U) | (((IData)(vlSelfRef.block3__DOT__p) 
                                 << 4U) | (IData)(vlSelfRef.block3__DOT__g)));
    vlSelfRef.block3__DOT__g_out = Vtop__ConstPool__TABLE_h08c4d8a1_0
        [__Vtableidx16];
    vlSelfRef.g = ((((IData)(vlSelfRef.block3__DOT__g_out) 
                     << 3U) | ((IData)(vlSelfRef.block2__DOT__g_out) 
                               << 2U)) | (((IData)(vlSelfRef.block1__DOT__g_out) 
                                           << 1U) | (IData)(vlSelfRef.block0__DOT__g_out)));
    __VdfgRegularize_hf246a9bd_0_1 = (1U & ((IData)(vlSelfRef.g) 
                                            | ((IData)(vlSelfRef.p) 
                                               & (IData)(vlSelfRef.cin))));
    __VdfgRegularize_h6e95ff9d_0_5 = (1U & (((IData)(vlSelfRef.g) 
                                             >> 1U) 
                                            | (((IData)(vlSelfRef.p) 
                                                >> 1U) 
                                               & (IData)(__VdfgRegularize_hf246a9bd_0_1))));
    vlSelfRef.c = ((((4U & ((0x7ffffffcU & ((IData)(vlSelfRef.g) 
                                            >> 1U)) 
                            | (((((IData)(vlSelfRef.p) 
                                  >> 3U) & ((IData)(vlSelfRef.g) 
                                            >> 2U)) 
                                | (IData)(((0x0cU == 
                                            (0x0cU 
                                             & (IData)(vlSelfRef.p))) 
                                           & (IData)(__VdfgRegularize_h6e95ff9d_0_5)))) 
                               << 2U))) | ((2U & (((IData)(vlSelfRef.g) 
                                                   >> 1U) 
                                                  | (((IData)(vlSelfRef.p) 
                                                      >> 1U) 
                                                     & ((IData)(__VdfgRegularize_h6e95ff9d_0_5) 
                                                        << 1U)))) 
                                           | (IData)(__VdfgRegularize_h6e95ff9d_0_5))) 
                    << 2U) | (((IData)(__VdfgRegularize_hf246a9bd_0_1) 
                               << 1U) | (IData)(vlSelfRef.cin)));
    vlSelfRef.cout = (1U & ((IData)(vlSelfRef.c) >> 4U));
    vlSelfRef.block0__DOT__cin = (1U & (IData)(vlSelfRef.c));
    vlSelfRef.block1__DOT__cin = (1U & ((IData)(vlSelfRef.c) 
                                        >> 1U));
    vlSelfRef.block2__DOT__cin = (1U & ((IData)(vlSelfRef.c) 
                                        >> 2U));
    vlSelfRef.block3__DOT__cin = (1U & ((IData)(vlSelfRef.c) 
                                        >> 3U));
    block0__DOT____VdfgRegularize_h0843a2b9_0_0 = ((IData)(vlSelfRef.block0__DOT__p) 
                                                   & (IData)(vlSelfRef.block0__DOT__cin));
    block1__DOT____VdfgRegularize_h0843a2b9_0_0 = ((IData)(vlSelfRef.block1__DOT__p) 
                                                   & (IData)(vlSelfRef.block1__DOT__cin));
    block2__DOT____VdfgRegularize_h0843a2b9_0_0 = ((IData)(vlSelfRef.block2__DOT__p) 
                                                   & (IData)(vlSelfRef.block2__DOT__cin));
    block3__DOT____VdfgRegularize_h0843a2b9_0_0 = ((IData)(vlSelfRef.block3__DOT__p) 
                                                   & (IData)(vlSelfRef.block3__DOT__cin));
    __VdfgRegularize_hf246a9bd_1_1 = (1U & ((IData)(vlSelfRef.block0__DOT__g) 
                                            | (IData)(block0__DOT____VdfgRegularize_h0843a2b9_0_0)));
    __VdfgRegularize_hf246a9bd_1_6 = (1U & ((IData)(vlSelfRef.block1__DOT__g) 
                                            | (IData)(block1__DOT____VdfgRegularize_h0843a2b9_0_0)));
    __VdfgRegularize_hf246a9bd_1_11 = (1U & ((IData)(vlSelfRef.block2__DOT__g) 
                                             | (IData)(block2__DOT____VdfgRegularize_h0843a2b9_0_0)));
    __VdfgRegularize_hf246a9bd_1_16 = (1U & ((IData)(vlSelfRef.block3__DOT__g) 
                                             | (IData)(block3__DOT____VdfgRegularize_h0843a2b9_0_0)));
    vlSelfRef.block0__DOT__c = ((0x10U & (IData)(vlSelfRef.block0__DOT__c)) 
                                | ((((2U & (((IData)(vlSelfRef.block0__DOT__g) 
                                             >> 1U) 
                                            | (((IData)(vlSelfRef.block0__DOT__p) 
                                                >> 1U) 
                                               & ((IData)(vlSelfRef.block0__DOT__g) 
                                                  | ((IData)(vlSelfRef.block0__DOT__p) 
                                                     & ((IData)(__VdfgRegularize_hf246a9bd_1_1) 
                                                        << 1U)))))) 
                                     | (1U & (((IData)(vlSelfRef.block0__DOT__g) 
                                               >> 1U) 
                                              | ((IData)(block0__DOT____VdfgRegularize_h0843a2b9_0_1) 
                                                 | (((IData)(vlSelfRef.block0__DOT__p) 
                                                     >> 1U) 
                                                    & (IData)(block0__DOT____VdfgRegularize_h0843a2b9_0_0)))))) 
                                    << 2U) | (((IData)(__VdfgRegularize_hf246a9bd_1_1) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.block0__DOT__cin))));
    vlSelfRef.block1__DOT__c = ((0x10U & (IData)(vlSelfRef.block1__DOT__c)) 
                                | ((((2U & (((IData)(vlSelfRef.block1__DOT__g) 
                                             >> 1U) 
                                            | (((IData)(vlSelfRef.block1__DOT__p) 
                                                >> 1U) 
                                               & ((IData)(vlSelfRef.block1__DOT__g) 
                                                  | ((IData)(vlSelfRef.block1__DOT__p) 
                                                     & ((IData)(__VdfgRegularize_hf246a9bd_1_6) 
                                                        << 1U)))))) 
                                     | (1U & (((IData)(vlSelfRef.block1__DOT__g) 
                                               >> 1U) 
                                              | ((IData)(block1__DOT____VdfgRegularize_h0843a2b9_0_1) 
                                                 | (((IData)(vlSelfRef.block1__DOT__p) 
                                                     >> 1U) 
                                                    & (IData)(block1__DOT____VdfgRegularize_h0843a2b9_0_0)))))) 
                                    << 2U) | (((IData)(__VdfgRegularize_hf246a9bd_1_6) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.block1__DOT__cin))));
    vlSelfRef.block2__DOT__c = ((0x10U & (IData)(vlSelfRef.block2__DOT__c)) 
                                | ((((2U & (((IData)(vlSelfRef.block2__DOT__g) 
                                             >> 1U) 
                                            | (((IData)(vlSelfRef.block2__DOT__p) 
                                                >> 1U) 
                                               & ((IData)(vlSelfRef.block2__DOT__g) 
                                                  | ((IData)(vlSelfRef.block2__DOT__p) 
                                                     & ((IData)(__VdfgRegularize_hf246a9bd_1_11) 
                                                        << 1U)))))) 
                                     | (1U & (((IData)(vlSelfRef.block2__DOT__g) 
                                               >> 1U) 
                                              | ((IData)(block2__DOT____VdfgRegularize_h0843a2b9_0_1) 
                                                 | (((IData)(vlSelfRef.block2__DOT__p) 
                                                     >> 1U) 
                                                    & (IData)(block2__DOT____VdfgRegularize_h0843a2b9_0_0)))))) 
                                    << 2U) | (((IData)(__VdfgRegularize_hf246a9bd_1_11) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.block2__DOT__cin))));
    vlSelfRef.block3__DOT__c = ((0x10U & (IData)(vlSelfRef.block3__DOT__c)) 
                                | ((((2U & (((IData)(vlSelfRef.block3__DOT__g) 
                                             >> 1U) 
                                            | (((IData)(vlSelfRef.block3__DOT__p) 
                                                >> 1U) 
                                               & ((IData)(vlSelfRef.block3__DOT__g) 
                                                  | ((IData)(vlSelfRef.block3__DOT__p) 
                                                     & ((IData)(__VdfgRegularize_hf246a9bd_1_16) 
                                                        << 1U)))))) 
                                     | (1U & (((IData)(vlSelfRef.block3__DOT__g) 
                                               >> 1U) 
                                              | ((IData)(block3__DOT____VdfgRegularize_h0843a2b9_0_1) 
                                                 | (((IData)(vlSelfRef.block3__DOT__p) 
                                                     >> 1U) 
                                                    & (IData)(block3__DOT____VdfgRegularize_h0843a2b9_0_0)))))) 
                                    << 2U) | (((IData)(__VdfgRegularize_hf246a9bd_1_16) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.block3__DOT__cin))));
    vlSelfRef.block0__DOT__block0__DOT__cin = (1U & (IData)(vlSelfRef.block0__DOT__c));
    vlSelfRef.block0__DOT__block1__DOT__cin = (1U & 
                                               ((IData)(vlSelfRef.block0__DOT__c) 
                                                >> 1U));
    vlSelfRef.block0__DOT__block2__DOT__cin = (1U & 
                                               ((IData)(vlSelfRef.block0__DOT__c) 
                                                >> 2U));
    vlSelfRef.block0__DOT__block3__DOT__cin = (1U & 
                                               ((IData)(vlSelfRef.block0__DOT__c) 
                                                >> 3U));
    vlSelfRef.block1__DOT__block0__DOT__cin = (1U & (IData)(vlSelfRef.block1__DOT__c));
    vlSelfRef.block1__DOT__block1__DOT__cin = (1U & 
                                               ((IData)(vlSelfRef.block1__DOT__c) 
                                                >> 1U));
    vlSelfRef.block1__DOT__block2__DOT__cin = (1U & 
                                               ((IData)(vlSelfRef.block1__DOT__c) 
                                                >> 2U));
    vlSelfRef.block1__DOT__block3__DOT__cin = (1U & 
                                               ((IData)(vlSelfRef.block1__DOT__c) 
                                                >> 3U));
    vlSelfRef.block2__DOT__block0__DOT__cin = (1U & (IData)(vlSelfRef.block2__DOT__c));
    vlSelfRef.block2__DOT__block1__DOT__cin = (1U & 
                                               ((IData)(vlSelfRef.block2__DOT__c) 
                                                >> 1U));
    vlSelfRef.block2__DOT__block2__DOT__cin = (1U & 
                                               ((IData)(vlSelfRef.block2__DOT__c) 
                                                >> 2U));
    vlSelfRef.block2__DOT__block3__DOT__cin = (1U & 
                                               ((IData)(vlSelfRef.block2__DOT__c) 
                                                >> 3U));
    vlSelfRef.block3__DOT__block0__DOT__cin = (1U & (IData)(vlSelfRef.block3__DOT__c));
    vlSelfRef.block3__DOT__block1__DOT__cin = (1U & 
                                               ((IData)(vlSelfRef.block3__DOT__c) 
                                                >> 1U));
    vlSelfRef.block3__DOT__block2__DOT__cin = (1U & 
                                               ((IData)(vlSelfRef.block3__DOT__c) 
                                                >> 2U));
    vlSelfRef.block3__DOT__block3__DOT__cin = (1U & 
                                               ((IData)(vlSelfRef.block3__DOT__c) 
                                                >> 3U));
    block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block0__DOT__block0__DOT__p) 
           & (IData)(vlSelfRef.block0__DOT__block0__DOT__cin));
    block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block0__DOT__block1__DOT__p) 
           & (IData)(vlSelfRef.block0__DOT__block1__DOT__cin));
    block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block0__DOT__block2__DOT__p) 
           & (IData)(vlSelfRef.block0__DOT__block2__DOT__cin));
    block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block0__DOT__block3__DOT__p) 
           & (IData)(vlSelfRef.block0__DOT__block3__DOT__cin));
    block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block1__DOT__block0__DOT__p) 
           & (IData)(vlSelfRef.block1__DOT__block0__DOT__cin));
    block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block1__DOT__block1__DOT__p) 
           & (IData)(vlSelfRef.block1__DOT__block1__DOT__cin));
    block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block1__DOT__block2__DOT__p) 
           & (IData)(vlSelfRef.block1__DOT__block2__DOT__cin));
    block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block1__DOT__block3__DOT__p) 
           & (IData)(vlSelfRef.block1__DOT__block3__DOT__cin));
    block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block2__DOT__block0__DOT__p) 
           & (IData)(vlSelfRef.block2__DOT__block0__DOT__cin));
    block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block2__DOT__block1__DOT__p) 
           & (IData)(vlSelfRef.block2__DOT__block1__DOT__cin));
    block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block2__DOT__block2__DOT__p) 
           & (IData)(vlSelfRef.block2__DOT__block2__DOT__cin));
    block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block2__DOT__block3__DOT__p) 
           & (IData)(vlSelfRef.block2__DOT__block3__DOT__cin));
    block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block3__DOT__block0__DOT__p) 
           & (IData)(vlSelfRef.block3__DOT__block0__DOT__cin));
    block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block3__DOT__block1__DOT__p) 
           & (IData)(vlSelfRef.block3__DOT__block1__DOT__cin));
    block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block3__DOT__block2__DOT__p) 
           & (IData)(vlSelfRef.block3__DOT__block2__DOT__cin));
    block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block3__DOT__block3__DOT__p) 
           & (IData)(vlSelfRef.block3__DOT__block3__DOT__cin));
    __VdfgRegularize_hf246a9bd_1_2 = (1U & ((IData)(vlSelfRef.block0__DOT__block0__DOT__g) 
                                            | (IData)(block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_3 = (1U & ((IData)(vlSelfRef.block0__DOT__block1__DOT__g) 
                                            | (IData)(block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_4 = (1U & ((IData)(vlSelfRef.block0__DOT__block2__DOT__g) 
                                            | (IData)(block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_5 = (1U & ((IData)(vlSelfRef.block0__DOT__block3__DOT__g) 
                                            | (IData)(block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_7 = (1U & ((IData)(vlSelfRef.block1__DOT__block0__DOT__g) 
                                            | (IData)(block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_8 = (1U & ((IData)(vlSelfRef.block1__DOT__block1__DOT__g) 
                                            | (IData)(block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_9 = (1U & ((IData)(vlSelfRef.block1__DOT__block2__DOT__g) 
                                            | (IData)(block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_10 = (1U & ((IData)(vlSelfRef.block1__DOT__block3__DOT__g) 
                                             | (IData)(block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_12 = (1U & ((IData)(vlSelfRef.block2__DOT__block0__DOT__g) 
                                             | (IData)(block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_13 = (1U & ((IData)(vlSelfRef.block2__DOT__block1__DOT__g) 
                                             | (IData)(block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_14 = (1U & ((IData)(vlSelfRef.block2__DOT__block2__DOT__g) 
                                             | (IData)(block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_15 = (1U & ((IData)(vlSelfRef.block2__DOT__block3__DOT__g) 
                                             | (IData)(block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_17 = (1U & ((IData)(vlSelfRef.block3__DOT__block0__DOT__g) 
                                             | (IData)(block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_18 = (1U & ((IData)(vlSelfRef.block3__DOT__block1__DOT__g) 
                                             | (IData)(block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_19 = (1U & ((IData)(vlSelfRef.block3__DOT__block2__DOT__g) 
                                             | (IData)(block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_20 = (1U & ((IData)(vlSelfRef.block3__DOT__block3__DOT__g) 
                                             | (IData)(block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_h6e95ff9d_0_6 = (1U & (((IData)(vlSelfRef.block0__DOT__block0__DOT__g) 
                                             >> 1U) 
                                            | (((IData)(vlSelfRef.block0__DOT__block0__DOT__p) 
                                                >> 1U) 
                                               & (IData)(__VdfgRegularize_hf246a9bd_1_2))));
    __VdfgRegularize_h6e95ff9d_0_7 = (1U & (((IData)(vlSelfRef.block0__DOT__block1__DOT__g) 
                                             >> 1U) 
                                            | (((IData)(vlSelfRef.block0__DOT__block1__DOT__p) 
                                                >> 1U) 
                                               & (IData)(__VdfgRegularize_hf246a9bd_1_3))));
    __VdfgRegularize_h6e95ff9d_0_8 = (1U & (((IData)(vlSelfRef.block0__DOT__block2__DOT__g) 
                                             >> 1U) 
                                            | (((IData)(vlSelfRef.block0__DOT__block2__DOT__p) 
                                                >> 1U) 
                                               & (IData)(__VdfgRegularize_hf246a9bd_1_4))));
    __VdfgRegularize_h6e95ff9d_0_9 = (1U & (((IData)(vlSelfRef.block0__DOT__block3__DOT__g) 
                                             >> 1U) 
                                            | (((IData)(vlSelfRef.block0__DOT__block3__DOT__p) 
                                                >> 1U) 
                                               & (IData)(__VdfgRegularize_hf246a9bd_1_5))));
    __VdfgRegularize_h6e95ff9d_0_10 = (1U & (((IData)(vlSelfRef.block1__DOT__block0__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block1__DOT__block0__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_7))));
    __VdfgRegularize_h6e95ff9d_0_11 = (1U & (((IData)(vlSelfRef.block1__DOT__block1__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block1__DOT__block1__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_8))));
    __VdfgRegularize_h6e95ff9d_0_12 = (1U & (((IData)(vlSelfRef.block1__DOT__block2__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block1__DOT__block2__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_9))));
    __VdfgRegularize_h6e95ff9d_0_13 = (1U & (((IData)(vlSelfRef.block1__DOT__block3__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block1__DOT__block3__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_10))));
    __VdfgRegularize_h6e95ff9d_0_14 = (1U & (((IData)(vlSelfRef.block2__DOT__block0__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block2__DOT__block0__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_12))));
    __VdfgRegularize_h6e95ff9d_0_15 = (1U & (((IData)(vlSelfRef.block2__DOT__block1__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block2__DOT__block1__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_13))));
    __VdfgRegularize_h6e95ff9d_0_16 = (1U & (((IData)(vlSelfRef.block2__DOT__block2__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block2__DOT__block2__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_14))));
    __VdfgRegularize_h6e95ff9d_0_17 = (1U & (((IData)(vlSelfRef.block2__DOT__block3__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block2__DOT__block3__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_15))));
    __VdfgRegularize_h6e95ff9d_0_18 = (1U & (((IData)(vlSelfRef.block3__DOT__block0__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block3__DOT__block0__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_17))));
    __VdfgRegularize_h6e95ff9d_0_19 = (1U & (((IData)(vlSelfRef.block3__DOT__block1__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block3__DOT__block1__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_18))));
    __VdfgRegularize_h6e95ff9d_0_20 = (1U & (((IData)(vlSelfRef.block3__DOT__block2__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block3__DOT__block2__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_19))));
    __VdfgRegularize_h6e95ff9d_0_21 = (1U & (((IData)(vlSelfRef.block3__DOT__block3__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block3__DOT__block3__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_20))));
    vlSelfRef.block0__DOT__block0__DOT__c = (((((IData)(block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block0__DOT__block0__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block0__DOT__block0__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_6) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_6)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_2) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block0__DOT__block0__DOT__cin)));
    vlSelfRef.block0__DOT__block1__DOT__c = (((((IData)(block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block0__DOT__block1__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block0__DOT__block1__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_7) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_7)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_3) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block0__DOT__block1__DOT__cin)));
    vlSelfRef.block0__DOT__block2__DOT__c = (((((IData)(block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block0__DOT__block2__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block0__DOT__block2__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_8) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_8)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_4) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block0__DOT__block2__DOT__cin)));
    vlSelfRef.block0__DOT__block3__DOT__c = (((((IData)(block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block0__DOT__block3__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block0__DOT__block3__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_9) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_9)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_5) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block0__DOT__block3__DOT__cin)));
    vlSelfRef.block1__DOT__block0__DOT__c = (((((IData)(block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block1__DOT__block0__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block1__DOT__block0__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_10) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_10)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_7) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block1__DOT__block0__DOT__cin)));
    vlSelfRef.block1__DOT__block1__DOT__c = (((((IData)(block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block1__DOT__block1__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block1__DOT__block1__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_11) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_11)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_8) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block1__DOT__block1__DOT__cin)));
    vlSelfRef.block1__DOT__block2__DOT__c = (((((IData)(block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block1__DOT__block2__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block1__DOT__block2__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_12) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_12)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_9) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block1__DOT__block2__DOT__cin)));
    vlSelfRef.block1__DOT__block3__DOT__c = (((((IData)(block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block1__DOT__block3__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block1__DOT__block3__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_13) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_13)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_10) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block1__DOT__block3__DOT__cin)));
    vlSelfRef.block2__DOT__block0__DOT__c = (((((IData)(block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block2__DOT__block0__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block2__DOT__block0__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_14) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_14)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_12) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block2__DOT__block0__DOT__cin)));
    vlSelfRef.block2__DOT__block1__DOT__c = (((((IData)(block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block2__DOT__block1__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block2__DOT__block1__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_15) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_15)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_13) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block2__DOT__block1__DOT__cin)));
    vlSelfRef.block2__DOT__block2__DOT__c = (((((IData)(block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block2__DOT__block2__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block2__DOT__block2__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_16) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_16)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_14) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block2__DOT__block2__DOT__cin)));
    vlSelfRef.block2__DOT__block3__DOT__c = (((((IData)(block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block2__DOT__block3__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block2__DOT__block3__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_17) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_17)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_15) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block2__DOT__block3__DOT__cin)));
    vlSelfRef.block3__DOT__block0__DOT__c = (((((IData)(block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block3__DOT__block0__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block3__DOT__block0__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_18) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_18)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_17) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block3__DOT__block0__DOT__cin)));
    vlSelfRef.block3__DOT__block1__DOT__c = (((((IData)(block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block3__DOT__block1__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block3__DOT__block1__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_19) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_19)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_18) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block3__DOT__block1__DOT__cin)));
    vlSelfRef.block3__DOT__block2__DOT__c = (((((IData)(block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block3__DOT__block2__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block3__DOT__block2__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_20) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_20)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_19) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block3__DOT__block2__DOT__cin)));
    vlSelfRef.block3__DOT__block3__DOT__c = (((((IData)(block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block3__DOT__block3__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block3__DOT__block3__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_21) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_21)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_20) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block3__DOT__block3__DOT__cin)));
    vlSelfRef.block0__DOT__block0__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block0__DOT__block0__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block0__DOT__block0__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block0__DOT__block0__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block0__DOT__block0__DOT__c)));
    vlSelfRef.block0__DOT__block1__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block0__DOT__block1__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block0__DOT__block1__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block0__DOT__block1__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block0__DOT__block1__DOT__c)));
    vlSelfRef.block0__DOT__block2__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block0__DOT__block2__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block0__DOT__block2__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block0__DOT__block2__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block0__DOT__block2__DOT__c)));
    vlSelfRef.block0__DOT__block3__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block0__DOT__block3__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block0__DOT__block3__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block0__DOT__block3__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block0__DOT__block3__DOT__c)));
    vlSelfRef.block1__DOT__block0__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block1__DOT__block0__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block1__DOT__block0__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block1__DOT__block0__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block1__DOT__block0__DOT__c)));
    vlSelfRef.block1__DOT__block1__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block1__DOT__block1__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block1__DOT__block1__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block1__DOT__block1__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block1__DOT__block1__DOT__c)));
    vlSelfRef.block1__DOT__block2__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block1__DOT__block2__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block1__DOT__block2__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block1__DOT__block2__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block1__DOT__block2__DOT__c)));
    vlSelfRef.block1__DOT__block3__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block1__DOT__block3__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block1__DOT__block3__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block1__DOT__block3__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block1__DOT__block3__DOT__c)));
    vlSelfRef.block2__DOT__block0__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block2__DOT__block0__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block2__DOT__block0__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block2__DOT__block0__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block2__DOT__block0__DOT__c)));
    vlSelfRef.block2__DOT__block1__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block2__DOT__block1__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block2__DOT__block1__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block2__DOT__block1__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block2__DOT__block1__DOT__c)));
    vlSelfRef.block2__DOT__block2__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block2__DOT__block2__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block2__DOT__block2__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block2__DOT__block2__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block2__DOT__block2__DOT__c)));
    vlSelfRef.block2__DOT__block3__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block2__DOT__block3__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block2__DOT__block3__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block2__DOT__block3__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block2__DOT__block3__DOT__c)));
    vlSelfRef.block3__DOT__block0__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block3__DOT__block0__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block3__DOT__block0__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block3__DOT__block0__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block3__DOT__block0__DOT__c)));
    vlSelfRef.block3__DOT__block1__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block3__DOT__block1__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block3__DOT__block1__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block3__DOT__block1__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block3__DOT__block1__DOT__c)));
    vlSelfRef.block3__DOT__block2__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block3__DOT__block2__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block3__DOT__block2__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block3__DOT__block2__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block3__DOT__block2__DOT__c)));
    vlSelfRef.block3__DOT__block3__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block3__DOT__block3__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block3__DOT__block3__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block3__DOT__block3__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block3__DOT__block3__DOT__c)));
    vlSelfRef.block0__DOT__c3_from_last = vlSelfRef.block0__DOT__block3__DOT__c3_out;
    vlSelfRef.block0__DOT__sum = ((((IData)(vlSelfRef.block0__DOT__block3__DOT__sum) 
                                    << 0x0000000cU) 
                                   | ((IData)(vlSelfRef.block0__DOT__block2__DOT__sum) 
                                      << 8U)) | (((IData)(vlSelfRef.block0__DOT__block1__DOT__sum) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.block0__DOT__block0__DOT__sum)));
    vlSelfRef.block1__DOT__c3_from_last = vlSelfRef.block1__DOT__block3__DOT__c3_out;
    vlSelfRef.block1__DOT__sum = ((((IData)(vlSelfRef.block1__DOT__block3__DOT__sum) 
                                    << 0x0000000cU) 
                                   | ((IData)(vlSelfRef.block1__DOT__block2__DOT__sum) 
                                      << 8U)) | (((IData)(vlSelfRef.block1__DOT__block1__DOT__sum) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.block1__DOT__block0__DOT__sum)));
    vlSelfRef.block2__DOT__c3_from_last = vlSelfRef.block2__DOT__block3__DOT__c3_out;
    vlSelfRef.block2__DOT__sum = ((((IData)(vlSelfRef.block2__DOT__block3__DOT__sum) 
                                    << 0x0000000cU) 
                                   | ((IData)(vlSelfRef.block2__DOT__block2__DOT__sum) 
                                      << 8U)) | (((IData)(vlSelfRef.block2__DOT__block1__DOT__sum) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.block2__DOT__block0__DOT__sum)));
    vlSelfRef.block3__DOT__c3_from_last = vlSelfRef.block3__DOT__block3__DOT__c3_out;
    vlSelfRef.block3__DOT__sum = ((((IData)(vlSelfRef.block3__DOT__block3__DOT__sum) 
                                    << 0x0000000cU) 
                                   | ((IData)(vlSelfRef.block3__DOT__block2__DOT__sum) 
                                      << 8U)) | (((IData)(vlSelfRef.block3__DOT__block1__DOT__sum) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.block3__DOT__block0__DOT__sum)));
    vlSelfRef.block0__DOT__c15_out = vlSelfRef.block0__DOT__c3_from_last;
    vlSelfRef.block1__DOT__c15_out = vlSelfRef.block1__DOT__c3_from_last;
    vlSelfRef.block2__DOT__c15_out = vlSelfRef.block2__DOT__c3_from_last;
    vlSelfRef.block3__DOT__c15_out = vlSelfRef.block3__DOT__c3_from_last;
    vlSelfRef.sum = (((QData)((IData)((((IData)(vlSelfRef.block3__DOT__sum) 
                                        << 0x00000010U) 
                                       | (IData)(vlSelfRef.block2__DOT__sum)))) 
                      << 0x00000020U) | (QData)((IData)(
                                                        (((IData)(vlSelfRef.block1__DOT__sum) 
                                                          << 0x00000010U) 
                                                         | (IData)(vlSelfRef.block0__DOT__sum)))));
    vlSelfRef.c63_from_last = vlSelfRef.block3__DOT__c15_out;
    vlSelfRef.carry_into_msb = vlSelfRef.c63_from_last;
}

void Vtop_cla_64b___ico_sequent__TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst__0(Vtop_cla_64b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_cla_64b___ico_sequent__TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_0_1;
    __VdfgRegularize_hf246a9bd_0_1 = 0;
    CData/*0:0*/ block0__DOT____VdfgRegularize_h0843a2b9_0_0;
    block0__DOT____VdfgRegularize_h0843a2b9_0_0 = 0;
    CData/*0:0*/ block0__DOT____VdfgRegularize_h0843a2b9_0_1;
    block0__DOT____VdfgRegularize_h0843a2b9_0_1 = 0;
    CData/*0:0*/ block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0;
    block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2;
    block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3;
    block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4;
    block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0;
    block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2;
    block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3;
    block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4;
    block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0;
    block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2;
    block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3;
    block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4;
    block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0;
    block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2;
    block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3;
    block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4;
    block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block1__DOT____VdfgRegularize_h0843a2b9_0_0;
    block1__DOT____VdfgRegularize_h0843a2b9_0_0 = 0;
    CData/*0:0*/ block1__DOT____VdfgRegularize_h0843a2b9_0_1;
    block1__DOT____VdfgRegularize_h0843a2b9_0_1 = 0;
    CData/*0:0*/ block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0;
    block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2;
    block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3;
    block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4;
    block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0;
    block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2;
    block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3;
    block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4;
    block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0;
    block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2;
    block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3;
    block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4;
    block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0;
    block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2;
    block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3;
    block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4;
    block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block2__DOT____VdfgRegularize_h0843a2b9_0_0;
    block2__DOT____VdfgRegularize_h0843a2b9_0_0 = 0;
    CData/*0:0*/ block2__DOT____VdfgRegularize_h0843a2b9_0_1;
    block2__DOT____VdfgRegularize_h0843a2b9_0_1 = 0;
    CData/*0:0*/ block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0;
    block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2;
    block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3;
    block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4;
    block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0;
    block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2;
    block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3;
    block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4;
    block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0;
    block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2;
    block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3;
    block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4;
    block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0;
    block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2;
    block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3;
    block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4;
    block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block3__DOT____VdfgRegularize_h0843a2b9_0_0;
    block3__DOT____VdfgRegularize_h0843a2b9_0_0 = 0;
    CData/*0:0*/ block3__DOT____VdfgRegularize_h0843a2b9_0_1;
    block3__DOT____VdfgRegularize_h0843a2b9_0_1 = 0;
    CData/*0:0*/ block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0;
    block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2;
    block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3;
    block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4;
    block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0;
    block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2;
    block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3;
    block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4;
    block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0;
    block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2;
    block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3;
    block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4;
    block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0;
    block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2;
    block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3;
    block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4;
    block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_1;
    __VdfgRegularize_hf246a9bd_1_1 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_2;
    __VdfgRegularize_hf246a9bd_1_2 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_3;
    __VdfgRegularize_hf246a9bd_1_3 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_4;
    __VdfgRegularize_hf246a9bd_1_4 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_5;
    __VdfgRegularize_hf246a9bd_1_5 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_6;
    __VdfgRegularize_hf246a9bd_1_6 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_7;
    __VdfgRegularize_hf246a9bd_1_7 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_8;
    __VdfgRegularize_hf246a9bd_1_8 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_9;
    __VdfgRegularize_hf246a9bd_1_9 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_10;
    __VdfgRegularize_hf246a9bd_1_10 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_11;
    __VdfgRegularize_hf246a9bd_1_11 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_12;
    __VdfgRegularize_hf246a9bd_1_12 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_13;
    __VdfgRegularize_hf246a9bd_1_13 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_14;
    __VdfgRegularize_hf246a9bd_1_14 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_15;
    __VdfgRegularize_hf246a9bd_1_15 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_16;
    __VdfgRegularize_hf246a9bd_1_16 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_17;
    __VdfgRegularize_hf246a9bd_1_17 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_18;
    __VdfgRegularize_hf246a9bd_1_18 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_19;
    __VdfgRegularize_hf246a9bd_1_19 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_20;
    __VdfgRegularize_hf246a9bd_1_20 = 0;
    SData/*8:0*/ __Vtableidx21;
    __Vtableidx21 = 0;
    SData/*9:0*/ __Vtableidx22;
    __Vtableidx22 = 0;
    SData/*9:0*/ __Vtableidx23;
    __Vtableidx23 = 0;
    SData/*9:0*/ __Vtableidx24;
    __Vtableidx24 = 0;
    SData/*9:0*/ __Vtableidx25;
    __Vtableidx25 = 0;
    SData/*8:0*/ __Vtableidx26;
    __Vtableidx26 = 0;
    SData/*9:0*/ __Vtableidx27;
    __Vtableidx27 = 0;
    SData/*9:0*/ __Vtableidx28;
    __Vtableidx28 = 0;
    SData/*9:0*/ __Vtableidx29;
    __Vtableidx29 = 0;
    SData/*9:0*/ __Vtableidx30;
    __Vtableidx30 = 0;
    SData/*8:0*/ __Vtableidx31;
    __Vtableidx31 = 0;
    SData/*9:0*/ __Vtableidx32;
    __Vtableidx32 = 0;
    SData/*9:0*/ __Vtableidx33;
    __Vtableidx33 = 0;
    SData/*9:0*/ __Vtableidx34;
    __Vtableidx34 = 0;
    SData/*9:0*/ __Vtableidx35;
    __Vtableidx35 = 0;
    SData/*8:0*/ __Vtableidx36;
    __Vtableidx36 = 0;
    SData/*9:0*/ __Vtableidx37;
    __Vtableidx37 = 0;
    SData/*9:0*/ __Vtableidx38;
    __Vtableidx38 = 0;
    SData/*9:0*/ __Vtableidx39;
    __Vtableidx39 = 0;
    SData/*9:0*/ __Vtableidx40;
    __Vtableidx40 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_22;
    __VdfgRegularize_h6e95ff9d_0_22 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_23;
    __VdfgRegularize_h6e95ff9d_0_23 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_24;
    __VdfgRegularize_h6e95ff9d_0_24 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_25;
    __VdfgRegularize_h6e95ff9d_0_25 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_26;
    __VdfgRegularize_h6e95ff9d_0_26 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_27;
    __VdfgRegularize_h6e95ff9d_0_27 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_28;
    __VdfgRegularize_h6e95ff9d_0_28 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_29;
    __VdfgRegularize_h6e95ff9d_0_29 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_30;
    __VdfgRegularize_h6e95ff9d_0_30 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_31;
    __VdfgRegularize_h6e95ff9d_0_31 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_32;
    __VdfgRegularize_h6e95ff9d_0_32 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_33;
    __VdfgRegularize_h6e95ff9d_0_33 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_34;
    __VdfgRegularize_h6e95ff9d_0_34 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_35;
    __VdfgRegularize_h6e95ff9d_0_35 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_36;
    __VdfgRegularize_h6e95ff9d_0_36 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_37;
    __VdfgRegularize_h6e95ff9d_0_37 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_38;
    __VdfgRegularize_h6e95ff9d_0_38 = 0;
    // Body
    vlSelfRef.cin = vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__sub;
    vlSelfRef.a = vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__a;
    vlSelfRef.b = vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b;
    vlSelfRef.block0__DOT__a = (0x0000ffffU & (IData)(vlSelfRef.a));
    vlSelfRef.block1__DOT__a = (0x0000ffffU & (IData)(
                                                      (vlSelfRef.a 
                                                       >> 0x00000010U)));
    vlSelfRef.block2__DOT__a = (0x0000ffffU & (IData)(
                                                      (vlSelfRef.a 
                                                       >> 0x00000020U)));
    vlSelfRef.block3__DOT__a = (0x0000ffffU & (IData)(
                                                      (vlSelfRef.a 
                                                       >> 0x00000030U)));
    vlSelfRef.block0__DOT__b = (0x0000ffffU & (IData)(vlSelfRef.b));
    vlSelfRef.block1__DOT__b = (0x0000ffffU & (IData)(
                                                      (vlSelfRef.b 
                                                       >> 0x00000010U)));
    vlSelfRef.block2__DOT__b = (0x0000ffffU & (IData)(
                                                      (vlSelfRef.b 
                                                       >> 0x00000020U)));
    vlSelfRef.block3__DOT__b = (0x0000ffffU & (IData)(
                                                      (vlSelfRef.b 
                                                       >> 0x00000030U)));
    vlSelfRef.block0__DOT__block0__DOT__a = (0x0000000fU 
                                             & (IData)(vlSelfRef.block0__DOT__a));
    vlSelfRef.block0__DOT__block1__DOT__a = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block0__DOT__a) 
                                                >> 4U));
    vlSelfRef.block0__DOT__block2__DOT__a = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block0__DOT__a) 
                                                >> 8U));
    vlSelfRef.block0__DOT__block3__DOT__a = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block0__DOT__a) 
                                                >> 0x0000000cU));
    vlSelfRef.block1__DOT__block0__DOT__a = (0x0000000fU 
                                             & (IData)(vlSelfRef.block1__DOT__a));
    vlSelfRef.block1__DOT__block1__DOT__a = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block1__DOT__a) 
                                                >> 4U));
    vlSelfRef.block1__DOT__block2__DOT__a = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block1__DOT__a) 
                                                >> 8U));
    vlSelfRef.block1__DOT__block3__DOT__a = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block1__DOT__a) 
                                                >> 0x0000000cU));
    vlSelfRef.block2__DOT__block0__DOT__a = (0x0000000fU 
                                             & (IData)(vlSelfRef.block2__DOT__a));
    vlSelfRef.block2__DOT__block1__DOT__a = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block2__DOT__a) 
                                                >> 4U));
    vlSelfRef.block2__DOT__block2__DOT__a = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block2__DOT__a) 
                                                >> 8U));
    vlSelfRef.block2__DOT__block3__DOT__a = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block2__DOT__a) 
                                                >> 0x0000000cU));
    vlSelfRef.block3__DOT__block0__DOT__a = (0x0000000fU 
                                             & (IData)(vlSelfRef.block3__DOT__a));
    vlSelfRef.block3__DOT__block1__DOT__a = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block3__DOT__a) 
                                                >> 4U));
    vlSelfRef.block3__DOT__block2__DOT__a = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block3__DOT__a) 
                                                >> 8U));
    vlSelfRef.block3__DOT__block3__DOT__a = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block3__DOT__a) 
                                                >> 0x0000000cU));
    vlSelfRef.block0__DOT__block0__DOT__b = (0x0000000fU 
                                             & (IData)(vlSelfRef.block0__DOT__b));
    vlSelfRef.block0__DOT__block1__DOT__b = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block0__DOT__b) 
                                                >> 4U));
    vlSelfRef.block0__DOT__block2__DOT__b = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block0__DOT__b) 
                                                >> 8U));
    vlSelfRef.block0__DOT__block3__DOT__b = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block0__DOT__b) 
                                                >> 0x0000000cU));
    vlSelfRef.block1__DOT__block0__DOT__b = (0x0000000fU 
                                             & (IData)(vlSelfRef.block1__DOT__b));
    vlSelfRef.block1__DOT__block1__DOT__b = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block1__DOT__b) 
                                                >> 4U));
    vlSelfRef.block1__DOT__block2__DOT__b = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block1__DOT__b) 
                                                >> 8U));
    vlSelfRef.block1__DOT__block3__DOT__b = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block1__DOT__b) 
                                                >> 0x0000000cU));
    vlSelfRef.block2__DOT__block0__DOT__b = (0x0000000fU 
                                             & (IData)(vlSelfRef.block2__DOT__b));
    vlSelfRef.block2__DOT__block1__DOT__b = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block2__DOT__b) 
                                                >> 4U));
    vlSelfRef.block2__DOT__block2__DOT__b = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block2__DOT__b) 
                                                >> 8U));
    vlSelfRef.block2__DOT__block3__DOT__b = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block2__DOT__b) 
                                                >> 0x0000000cU));
    vlSelfRef.block3__DOT__block0__DOT__b = (0x0000000fU 
                                             & (IData)(vlSelfRef.block3__DOT__b));
    vlSelfRef.block3__DOT__block1__DOT__b = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block3__DOT__b) 
                                                >> 4U));
    vlSelfRef.block3__DOT__block2__DOT__b = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block3__DOT__b) 
                                                >> 8U));
    vlSelfRef.block3__DOT__block3__DOT__b = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block3__DOT__b) 
                                                >> 0x0000000cU));
    vlSelfRef.block0__DOT__block0__DOT__g = ((IData)(vlSelfRef.block0__DOT__block0__DOT__a) 
                                             & (IData)(vlSelfRef.block0__DOT__block0__DOT__b));
    vlSelfRef.block0__DOT__block0__DOT__p = ((IData)(vlSelfRef.block0__DOT__block0__DOT__a) 
                                             ^ (IData)(vlSelfRef.block0__DOT__block0__DOT__b));
    vlSelfRef.block0__DOT__block1__DOT__g = ((IData)(vlSelfRef.block0__DOT__block1__DOT__a) 
                                             & (IData)(vlSelfRef.block0__DOT__block1__DOT__b));
    vlSelfRef.block0__DOT__block1__DOT__p = ((IData)(vlSelfRef.block0__DOT__block1__DOT__a) 
                                             ^ (IData)(vlSelfRef.block0__DOT__block1__DOT__b));
    vlSelfRef.block0__DOT__block2__DOT__g = ((IData)(vlSelfRef.block0__DOT__block2__DOT__a) 
                                             & (IData)(vlSelfRef.block0__DOT__block2__DOT__b));
    vlSelfRef.block0__DOT__block2__DOT__p = ((IData)(vlSelfRef.block0__DOT__block2__DOT__a) 
                                             ^ (IData)(vlSelfRef.block0__DOT__block2__DOT__b));
    vlSelfRef.block0__DOT__block3__DOT__g = ((IData)(vlSelfRef.block0__DOT__block3__DOT__a) 
                                             & (IData)(vlSelfRef.block0__DOT__block3__DOT__b));
    vlSelfRef.block0__DOT__block3__DOT__p = ((IData)(vlSelfRef.block0__DOT__block3__DOT__a) 
                                             ^ (IData)(vlSelfRef.block0__DOT__block3__DOT__b));
    vlSelfRef.block1__DOT__block0__DOT__g = ((IData)(vlSelfRef.block1__DOT__block0__DOT__a) 
                                             & (IData)(vlSelfRef.block1__DOT__block0__DOT__b));
    vlSelfRef.block1__DOT__block0__DOT__p = ((IData)(vlSelfRef.block1__DOT__block0__DOT__a) 
                                             ^ (IData)(vlSelfRef.block1__DOT__block0__DOT__b));
    vlSelfRef.block1__DOT__block1__DOT__g = ((IData)(vlSelfRef.block1__DOT__block1__DOT__a) 
                                             & (IData)(vlSelfRef.block1__DOT__block1__DOT__b));
    vlSelfRef.block1__DOT__block1__DOT__p = ((IData)(vlSelfRef.block1__DOT__block1__DOT__a) 
                                             ^ (IData)(vlSelfRef.block1__DOT__block1__DOT__b));
    vlSelfRef.block1__DOT__block2__DOT__g = ((IData)(vlSelfRef.block1__DOT__block2__DOT__a) 
                                             & (IData)(vlSelfRef.block1__DOT__block2__DOT__b));
    vlSelfRef.block1__DOT__block2__DOT__p = ((IData)(vlSelfRef.block1__DOT__block2__DOT__a) 
                                             ^ (IData)(vlSelfRef.block1__DOT__block2__DOT__b));
    vlSelfRef.block1__DOT__block3__DOT__g = ((IData)(vlSelfRef.block1__DOT__block3__DOT__a) 
                                             & (IData)(vlSelfRef.block1__DOT__block3__DOT__b));
    vlSelfRef.block1__DOT__block3__DOT__p = ((IData)(vlSelfRef.block1__DOT__block3__DOT__a) 
                                             ^ (IData)(vlSelfRef.block1__DOT__block3__DOT__b));
    vlSelfRef.block2__DOT__block0__DOT__g = ((IData)(vlSelfRef.block2__DOT__block0__DOT__a) 
                                             & (IData)(vlSelfRef.block2__DOT__block0__DOT__b));
    vlSelfRef.block2__DOT__block0__DOT__p = ((IData)(vlSelfRef.block2__DOT__block0__DOT__a) 
                                             ^ (IData)(vlSelfRef.block2__DOT__block0__DOT__b));
    vlSelfRef.block2__DOT__block1__DOT__g = ((IData)(vlSelfRef.block2__DOT__block1__DOT__a) 
                                             & (IData)(vlSelfRef.block2__DOT__block1__DOT__b));
    vlSelfRef.block2__DOT__block1__DOT__p = ((IData)(vlSelfRef.block2__DOT__block1__DOT__a) 
                                             ^ (IData)(vlSelfRef.block2__DOT__block1__DOT__b));
    vlSelfRef.block2__DOT__block2__DOT__g = ((IData)(vlSelfRef.block2__DOT__block2__DOT__a) 
                                             & (IData)(vlSelfRef.block2__DOT__block2__DOT__b));
    vlSelfRef.block2__DOT__block2__DOT__p = ((IData)(vlSelfRef.block2__DOT__block2__DOT__a) 
                                             ^ (IData)(vlSelfRef.block2__DOT__block2__DOT__b));
    vlSelfRef.block2__DOT__block3__DOT__g = ((IData)(vlSelfRef.block2__DOT__block3__DOT__a) 
                                             & (IData)(vlSelfRef.block2__DOT__block3__DOT__b));
    vlSelfRef.block2__DOT__block3__DOT__p = ((IData)(vlSelfRef.block2__DOT__block3__DOT__a) 
                                             ^ (IData)(vlSelfRef.block2__DOT__block3__DOT__b));
    vlSelfRef.block3__DOT__block0__DOT__g = ((IData)(vlSelfRef.block3__DOT__block0__DOT__a) 
                                             & (IData)(vlSelfRef.block3__DOT__block0__DOT__b));
    vlSelfRef.block3__DOT__block0__DOT__p = ((IData)(vlSelfRef.block3__DOT__block0__DOT__a) 
                                             ^ (IData)(vlSelfRef.block3__DOT__block0__DOT__b));
    vlSelfRef.block3__DOT__block1__DOT__g = ((IData)(vlSelfRef.block3__DOT__block1__DOT__a) 
                                             & (IData)(vlSelfRef.block3__DOT__block1__DOT__b));
    vlSelfRef.block3__DOT__block1__DOT__p = ((IData)(vlSelfRef.block3__DOT__block1__DOT__a) 
                                             ^ (IData)(vlSelfRef.block3__DOT__block1__DOT__b));
    vlSelfRef.block3__DOT__block2__DOT__g = ((IData)(vlSelfRef.block3__DOT__block2__DOT__a) 
                                             & (IData)(vlSelfRef.block3__DOT__block2__DOT__b));
    vlSelfRef.block3__DOT__block2__DOT__p = ((IData)(vlSelfRef.block3__DOT__block2__DOT__a) 
                                             ^ (IData)(vlSelfRef.block3__DOT__block2__DOT__b));
    vlSelfRef.block3__DOT__block3__DOT__g = ((IData)(vlSelfRef.block3__DOT__block3__DOT__a) 
                                             & (IData)(vlSelfRef.block3__DOT__block3__DOT__b));
    vlSelfRef.block3__DOT__block3__DOT__p = ((IData)(vlSelfRef.block3__DOT__block3__DOT__a) 
                                             ^ (IData)(vlSelfRef.block3__DOT__block3__DOT__b));
    vlSelfRef.block0__DOT__block0__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block0__DOT__block0__DOT__p)));
    block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block0__DOT__block0__DOT__p))));
    vlSelfRef.block0__DOT__block1__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block0__DOT__block1__DOT__p)));
    block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block0__DOT__block1__DOT__p))));
    vlSelfRef.block0__DOT__block2__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block0__DOT__block2__DOT__p)));
    block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block0__DOT__block2__DOT__p))));
    vlSelfRef.block0__DOT__block3__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block0__DOT__block3__DOT__p)));
    block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block0__DOT__block3__DOT__p))));
    vlSelfRef.block1__DOT__block0__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block1__DOT__block0__DOT__p)));
    block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block1__DOT__block0__DOT__p))));
    vlSelfRef.block1__DOT__block1__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block1__DOT__block1__DOT__p)));
    block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block1__DOT__block1__DOT__p))));
    vlSelfRef.block1__DOT__block2__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block1__DOT__block2__DOT__p)));
    block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block1__DOT__block2__DOT__p))));
    vlSelfRef.block1__DOT__block3__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block1__DOT__block3__DOT__p)));
    block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block1__DOT__block3__DOT__p))));
    vlSelfRef.block2__DOT__block0__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block2__DOT__block0__DOT__p)));
    block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block2__DOT__block0__DOT__p))));
    vlSelfRef.block2__DOT__block1__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block2__DOT__block1__DOT__p)));
    block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block2__DOT__block1__DOT__p))));
    vlSelfRef.block2__DOT__block2__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block2__DOT__block2__DOT__p)));
    block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block2__DOT__block2__DOT__p))));
    vlSelfRef.block2__DOT__block3__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block2__DOT__block3__DOT__p)));
    block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block2__DOT__block3__DOT__p))));
    vlSelfRef.block3__DOT__block0__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block3__DOT__block0__DOT__p)));
    block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block3__DOT__block0__DOT__p))));
    vlSelfRef.block3__DOT__block1__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block3__DOT__block1__DOT__p)));
    block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block3__DOT__block1__DOT__p))));
    vlSelfRef.block3__DOT__block2__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block3__DOT__block2__DOT__p)));
    block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block3__DOT__block2__DOT__p))));
    vlSelfRef.block3__DOT__block3__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block3__DOT__block3__DOT__p)));
    block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block3__DOT__block3__DOT__p))));
    block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block0__DOT__block0__DOT__p) 
              >> 1U));
    block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block0__DOT__block1__DOT__p) 
              >> 1U));
    block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block0__DOT__block2__DOT__p) 
              >> 1U));
    vlSelfRef.block0__DOT__p = ((((IData)(vlSelfRef.block0__DOT__block3__DOT__p_out) 
                                  << 3U) | ((IData)(vlSelfRef.block0__DOT__block2__DOT__p_out) 
                                            << 2U)) 
                                | (((IData)(vlSelfRef.block0__DOT__block1__DOT__p_out) 
                                    << 1U) | (IData)(vlSelfRef.block0__DOT__block0__DOT__p_out)));
    block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block0__DOT__block3__DOT__p) 
              >> 1U));
    block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block1__DOT__block0__DOT__p) 
              >> 1U));
    block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block1__DOT__block1__DOT__p) 
              >> 1U));
    block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block1__DOT__block2__DOT__p) 
              >> 1U));
    vlSelfRef.block1__DOT__p = ((((IData)(vlSelfRef.block1__DOT__block3__DOT__p_out) 
                                  << 3U) | ((IData)(vlSelfRef.block1__DOT__block2__DOT__p_out) 
                                            << 2U)) 
                                | (((IData)(vlSelfRef.block1__DOT__block1__DOT__p_out) 
                                    << 1U) | (IData)(vlSelfRef.block1__DOT__block0__DOT__p_out)));
    block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block1__DOT__block3__DOT__p) 
              >> 1U));
    block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block2__DOT__block0__DOT__p) 
              >> 1U));
    block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block2__DOT__block1__DOT__p) 
              >> 1U));
    block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block2__DOT__block2__DOT__p) 
              >> 1U));
    vlSelfRef.block2__DOT__p = ((((IData)(vlSelfRef.block2__DOT__block3__DOT__p_out) 
                                  << 3U) | ((IData)(vlSelfRef.block2__DOT__block2__DOT__p_out) 
                                            << 2U)) 
                                | (((IData)(vlSelfRef.block2__DOT__block1__DOT__p_out) 
                                    << 1U) | (IData)(vlSelfRef.block2__DOT__block0__DOT__p_out)));
    block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block2__DOT__block3__DOT__p) 
              >> 1U));
    block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block3__DOT__block0__DOT__p) 
              >> 1U));
    block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block3__DOT__block1__DOT__p) 
              >> 1U));
    block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block3__DOT__block2__DOT__p) 
              >> 1U));
    vlSelfRef.block3__DOT__p = ((((IData)(vlSelfRef.block3__DOT__block3__DOT__p_out) 
                                  << 3U) | ((IData)(vlSelfRef.block3__DOT__block2__DOT__p_out) 
                                            << 2U)) 
                                | (((IData)(vlSelfRef.block3__DOT__block1__DOT__p_out) 
                                    << 1U) | (IData)(vlSelfRef.block3__DOT__block0__DOT__p_out)));
    block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block3__DOT__block3__DOT__p) 
              >> 1U));
    __Vtableidx22 = ((((IData)(block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3) 
                       << 9U) | ((IData)(block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                 << 8U)) | (((IData)(vlSelfRef.block0__DOT__block0__DOT__p) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.block0__DOT__block0__DOT__g)));
    block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx22];
    __Vtableidx23 = ((((IData)(block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3) 
                       << 9U) | ((IData)(block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                 << 8U)) | (((IData)(vlSelfRef.block0__DOT__block1__DOT__p) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.block0__DOT__block1__DOT__g)));
    block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx23];
    __Vtableidx24 = ((((IData)(block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3) 
                       << 9U) | ((IData)(block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                 << 8U)) | (((IData)(vlSelfRef.block0__DOT__block2__DOT__p) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.block0__DOT__block2__DOT__g)));
    block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx24];
    vlSelfRef.block0__DOT__p_out = (IData)((0x0fU == (IData)(vlSelfRef.block0__DOT__p)));
    __Vtableidx25 = ((((IData)(block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3) 
                       << 9U) | ((IData)(block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                 << 8U)) | (((IData)(vlSelfRef.block0__DOT__block3__DOT__p) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.block0__DOT__block3__DOT__g)));
    block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx25];
    __Vtableidx27 = ((((IData)(block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3) 
                       << 9U) | ((IData)(block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                 << 8U)) | (((IData)(vlSelfRef.block1__DOT__block0__DOT__p) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.block1__DOT__block0__DOT__g)));
    block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx27];
    __Vtableidx28 = ((((IData)(block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3) 
                       << 9U) | ((IData)(block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                 << 8U)) | (((IData)(vlSelfRef.block1__DOT__block1__DOT__p) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.block1__DOT__block1__DOT__g)));
    block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx28];
    __Vtableidx29 = ((((IData)(block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3) 
                       << 9U) | ((IData)(block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                 << 8U)) | (((IData)(vlSelfRef.block1__DOT__block2__DOT__p) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.block1__DOT__block2__DOT__g)));
    block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx29];
    vlSelfRef.block1__DOT__p_out = (IData)((0x0fU == (IData)(vlSelfRef.block1__DOT__p)));
    __Vtableidx30 = ((((IData)(block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3) 
                       << 9U) | ((IData)(block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                 << 8U)) | (((IData)(vlSelfRef.block1__DOT__block3__DOT__p) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.block1__DOT__block3__DOT__g)));
    block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx30];
    __Vtableidx32 = ((((IData)(block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3) 
                       << 9U) | ((IData)(block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                 << 8U)) | (((IData)(vlSelfRef.block2__DOT__block0__DOT__p) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.block2__DOT__block0__DOT__g)));
    block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx32];
    __Vtableidx33 = ((((IData)(block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3) 
                       << 9U) | ((IData)(block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                 << 8U)) | (((IData)(vlSelfRef.block2__DOT__block1__DOT__p) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.block2__DOT__block1__DOT__g)));
    block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx33];
    __Vtableidx34 = ((((IData)(block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3) 
                       << 9U) | ((IData)(block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                 << 8U)) | (((IData)(vlSelfRef.block2__DOT__block2__DOT__p) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.block2__DOT__block2__DOT__g)));
    block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx34];
    vlSelfRef.block2__DOT__p_out = (IData)((0x0fU == (IData)(vlSelfRef.block2__DOT__p)));
    __Vtableidx35 = ((((IData)(block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3) 
                       << 9U) | ((IData)(block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                 << 8U)) | (((IData)(vlSelfRef.block2__DOT__block3__DOT__p) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.block2__DOT__block3__DOT__g)));
    block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx35];
    __Vtableidx37 = ((((IData)(block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3) 
                       << 9U) | ((IData)(block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                 << 8U)) | (((IData)(vlSelfRef.block3__DOT__block0__DOT__p) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.block3__DOT__block0__DOT__g)));
    block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx37];
    __Vtableidx38 = ((((IData)(block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3) 
                       << 9U) | ((IData)(block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                 << 8U)) | (((IData)(vlSelfRef.block3__DOT__block1__DOT__p) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.block3__DOT__block1__DOT__g)));
    block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx38];
    __Vtableidx39 = ((((IData)(block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3) 
                       << 9U) | ((IData)(block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                 << 8U)) | (((IData)(vlSelfRef.block3__DOT__block2__DOT__p) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.block3__DOT__block2__DOT__g)));
    block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx39];
    vlSelfRef.block3__DOT__p_out = (IData)((0x0fU == (IData)(vlSelfRef.block3__DOT__p)));
    __Vtableidx40 = ((((IData)(block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3) 
                       << 9U) | ((IData)(block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                 << 8U)) | (((IData)(vlSelfRef.block3__DOT__block3__DOT__p) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.block3__DOT__block3__DOT__g)));
    block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx40];
    vlSelfRef.block0__DOT__block0__DOT__g_out = block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block0__DOT__block1__DOT__g_out = block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block0__DOT__block2__DOT__g_out = block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block0__DOT__block3__DOT__g_out = block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block1__DOT__block0__DOT__g_out = block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block1__DOT__block1__DOT__g_out = block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block1__DOT__block2__DOT__g_out = block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block1__DOT__block3__DOT__g_out = block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block2__DOT__block0__DOT__g_out = block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block2__DOT__block1__DOT__g_out = block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block2__DOT__block2__DOT__g_out = block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block2__DOT__block3__DOT__g_out = block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block3__DOT__block0__DOT__g_out = block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block3__DOT__block1__DOT__g_out = block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block3__DOT__block2__DOT__g_out = block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.p = ((((IData)(vlSelfRef.block3__DOT__p_out) 
                     << 3U) | ((IData)(vlSelfRef.block2__DOT__p_out) 
                               << 2U)) | (((IData)(vlSelfRef.block1__DOT__p_out) 
                                           << 1U) | (IData)(vlSelfRef.block0__DOT__p_out)));
    vlSelfRef.block3__DOT__block3__DOT__g_out = block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block0__DOT__g = ((((IData)(vlSelfRef.block0__DOT__block3__DOT__g_out) 
                                  << 3U) | ((IData)(vlSelfRef.block0__DOT__block2__DOT__g_out) 
                                            << 2U)) 
                                | (((IData)(vlSelfRef.block0__DOT__block1__DOT__g_out) 
                                    << 1U) | (IData)(vlSelfRef.block0__DOT__block0__DOT__g_out)));
    vlSelfRef.block1__DOT__g = ((((IData)(vlSelfRef.block1__DOT__block3__DOT__g_out) 
                                  << 3U) | ((IData)(vlSelfRef.block1__DOT__block2__DOT__g_out) 
                                            << 2U)) 
                                | (((IData)(vlSelfRef.block1__DOT__block1__DOT__g_out) 
                                    << 1U) | (IData)(vlSelfRef.block1__DOT__block0__DOT__g_out)));
    vlSelfRef.block2__DOT__g = ((((IData)(vlSelfRef.block2__DOT__block3__DOT__g_out) 
                                  << 3U) | ((IData)(vlSelfRef.block2__DOT__block2__DOT__g_out) 
                                            << 2U)) 
                                | (((IData)(vlSelfRef.block2__DOT__block1__DOT__g_out) 
                                    << 1U) | (IData)(vlSelfRef.block2__DOT__block0__DOT__g_out)));
    vlSelfRef.block3__DOT__g = ((((IData)(vlSelfRef.block3__DOT__block3__DOT__g_out) 
                                  << 3U) | ((IData)(vlSelfRef.block3__DOT__block2__DOT__g_out) 
                                            << 2U)) 
                                | (((IData)(vlSelfRef.block3__DOT__block1__DOT__g_out) 
                                    << 1U) | (IData)(vlSelfRef.block3__DOT__block0__DOT__g_out)));
    block0__DOT____VdfgRegularize_h0843a2b9_0_1 = (1U 
                                                   & (((IData)(vlSelfRef.block0__DOT__p) 
                                                       >> 1U) 
                                                      & (IData)(vlSelfRef.block0__DOT__g)));
    block1__DOT____VdfgRegularize_h0843a2b9_0_1 = (1U 
                                                   & (((IData)(vlSelfRef.block1__DOT__p) 
                                                       >> 1U) 
                                                      & (IData)(vlSelfRef.block1__DOT__g)));
    block2__DOT____VdfgRegularize_h0843a2b9_0_1 = (1U 
                                                   & (((IData)(vlSelfRef.block2__DOT__p) 
                                                       >> 1U) 
                                                      & (IData)(vlSelfRef.block2__DOT__g)));
    block3__DOT____VdfgRegularize_h0843a2b9_0_1 = (1U 
                                                   & (((IData)(vlSelfRef.block3__DOT__p) 
                                                       >> 1U) 
                                                      & (IData)(vlSelfRef.block3__DOT__g)));
    __Vtableidx21 = (((IData)(block0__DOT____VdfgRegularize_h0843a2b9_0_1) 
                      << 8U) | (((IData)(vlSelfRef.block0__DOT__p) 
                                 << 4U) | (IData)(vlSelfRef.block0__DOT__g)));
    vlSelfRef.block0__DOT__g_out = Vtop__ConstPool__TABLE_h08c4d8a1_0
        [__Vtableidx21];
    __Vtableidx26 = (((IData)(block1__DOT____VdfgRegularize_h0843a2b9_0_1) 
                      << 8U) | (((IData)(vlSelfRef.block1__DOT__p) 
                                 << 4U) | (IData)(vlSelfRef.block1__DOT__g)));
    vlSelfRef.block1__DOT__g_out = Vtop__ConstPool__TABLE_h08c4d8a1_0
        [__Vtableidx26];
    __Vtableidx31 = (((IData)(block2__DOT____VdfgRegularize_h0843a2b9_0_1) 
                      << 8U) | (((IData)(vlSelfRef.block2__DOT__p) 
                                 << 4U) | (IData)(vlSelfRef.block2__DOT__g)));
    vlSelfRef.block2__DOT__g_out = Vtop__ConstPool__TABLE_h08c4d8a1_0
        [__Vtableidx31];
    __Vtableidx36 = (((IData)(block3__DOT____VdfgRegularize_h0843a2b9_0_1) 
                      << 8U) | (((IData)(vlSelfRef.block3__DOT__p) 
                                 << 4U) | (IData)(vlSelfRef.block3__DOT__g)));
    vlSelfRef.block3__DOT__g_out = Vtop__ConstPool__TABLE_h08c4d8a1_0
        [__Vtableidx36];
    vlSelfRef.g = ((((IData)(vlSelfRef.block3__DOT__g_out) 
                     << 3U) | ((IData)(vlSelfRef.block2__DOT__g_out) 
                               << 2U)) | (((IData)(vlSelfRef.block1__DOT__g_out) 
                                           << 1U) | (IData)(vlSelfRef.block0__DOT__g_out)));
    __VdfgRegularize_hf246a9bd_0_1 = (1U & ((IData)(vlSelfRef.g) 
                                            | ((IData)(vlSelfRef.p) 
                                               & (IData)(vlSelfRef.cin))));
    __VdfgRegularize_h6e95ff9d_0_22 = (1U & (((IData)(vlSelfRef.g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_0_1))));
    vlSelfRef.c = ((((4U & ((0x7ffffffcU & ((IData)(vlSelfRef.g) 
                                            >> 1U)) 
                            | (((((IData)(vlSelfRef.p) 
                                  >> 3U) & ((IData)(vlSelfRef.g) 
                                            >> 2U)) 
                                | (IData)(((0x0cU == 
                                            (0x0cU 
                                             & (IData)(vlSelfRef.p))) 
                                           & (IData)(__VdfgRegularize_h6e95ff9d_0_22)))) 
                               << 2U))) | ((2U & (((IData)(vlSelfRef.g) 
                                                   >> 1U) 
                                                  | (((IData)(vlSelfRef.p) 
                                                      >> 1U) 
                                                     & ((IData)(__VdfgRegularize_h6e95ff9d_0_22) 
                                                        << 1U)))) 
                                           | (IData)(__VdfgRegularize_h6e95ff9d_0_22))) 
                    << 2U) | (((IData)(__VdfgRegularize_hf246a9bd_0_1) 
                               << 1U) | (IData)(vlSelfRef.cin)));
    vlSelfRef.cout = (1U & ((IData)(vlSelfRef.c) >> 4U));
    vlSelfRef.block0__DOT__cin = (1U & (IData)(vlSelfRef.c));
    vlSelfRef.block1__DOT__cin = (1U & ((IData)(vlSelfRef.c) 
                                        >> 1U));
    vlSelfRef.block2__DOT__cin = (1U & ((IData)(vlSelfRef.c) 
                                        >> 2U));
    vlSelfRef.block3__DOT__cin = (1U & ((IData)(vlSelfRef.c) 
                                        >> 3U));
    block0__DOT____VdfgRegularize_h0843a2b9_0_0 = ((IData)(vlSelfRef.block0__DOT__p) 
                                                   & (IData)(vlSelfRef.block0__DOT__cin));
    block1__DOT____VdfgRegularize_h0843a2b9_0_0 = ((IData)(vlSelfRef.block1__DOT__p) 
                                                   & (IData)(vlSelfRef.block1__DOT__cin));
    block2__DOT____VdfgRegularize_h0843a2b9_0_0 = ((IData)(vlSelfRef.block2__DOT__p) 
                                                   & (IData)(vlSelfRef.block2__DOT__cin));
    block3__DOT____VdfgRegularize_h0843a2b9_0_0 = ((IData)(vlSelfRef.block3__DOT__p) 
                                                   & (IData)(vlSelfRef.block3__DOT__cin));
    __VdfgRegularize_hf246a9bd_1_1 = (1U & ((IData)(vlSelfRef.block0__DOT__g) 
                                            | (IData)(block0__DOT____VdfgRegularize_h0843a2b9_0_0)));
    __VdfgRegularize_hf246a9bd_1_6 = (1U & ((IData)(vlSelfRef.block1__DOT__g) 
                                            | (IData)(block1__DOT____VdfgRegularize_h0843a2b9_0_0)));
    __VdfgRegularize_hf246a9bd_1_11 = (1U & ((IData)(vlSelfRef.block2__DOT__g) 
                                             | (IData)(block2__DOT____VdfgRegularize_h0843a2b9_0_0)));
    __VdfgRegularize_hf246a9bd_1_16 = (1U & ((IData)(vlSelfRef.block3__DOT__g) 
                                             | (IData)(block3__DOT____VdfgRegularize_h0843a2b9_0_0)));
    vlSelfRef.block0__DOT__c = ((0x10U & (IData)(vlSelfRef.block0__DOT__c)) 
                                | ((((2U & (((IData)(vlSelfRef.block0__DOT__g) 
                                             >> 1U) 
                                            | (((IData)(vlSelfRef.block0__DOT__p) 
                                                >> 1U) 
                                               & ((IData)(vlSelfRef.block0__DOT__g) 
                                                  | ((IData)(vlSelfRef.block0__DOT__p) 
                                                     & ((IData)(__VdfgRegularize_hf246a9bd_1_1) 
                                                        << 1U)))))) 
                                     | (1U & (((IData)(vlSelfRef.block0__DOT__g) 
                                               >> 1U) 
                                              | ((IData)(block0__DOT____VdfgRegularize_h0843a2b9_0_1) 
                                                 | (((IData)(vlSelfRef.block0__DOT__p) 
                                                     >> 1U) 
                                                    & (IData)(block0__DOT____VdfgRegularize_h0843a2b9_0_0)))))) 
                                    << 2U) | (((IData)(__VdfgRegularize_hf246a9bd_1_1) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.block0__DOT__cin))));
    vlSelfRef.block1__DOT__c = ((0x10U & (IData)(vlSelfRef.block1__DOT__c)) 
                                | ((((2U & (((IData)(vlSelfRef.block1__DOT__g) 
                                             >> 1U) 
                                            | (((IData)(vlSelfRef.block1__DOT__p) 
                                                >> 1U) 
                                               & ((IData)(vlSelfRef.block1__DOT__g) 
                                                  | ((IData)(vlSelfRef.block1__DOT__p) 
                                                     & ((IData)(__VdfgRegularize_hf246a9bd_1_6) 
                                                        << 1U)))))) 
                                     | (1U & (((IData)(vlSelfRef.block1__DOT__g) 
                                               >> 1U) 
                                              | ((IData)(block1__DOT____VdfgRegularize_h0843a2b9_0_1) 
                                                 | (((IData)(vlSelfRef.block1__DOT__p) 
                                                     >> 1U) 
                                                    & (IData)(block1__DOT____VdfgRegularize_h0843a2b9_0_0)))))) 
                                    << 2U) | (((IData)(__VdfgRegularize_hf246a9bd_1_6) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.block1__DOT__cin))));
    vlSelfRef.block2__DOT__c = ((0x10U & (IData)(vlSelfRef.block2__DOT__c)) 
                                | ((((2U & (((IData)(vlSelfRef.block2__DOT__g) 
                                             >> 1U) 
                                            | (((IData)(vlSelfRef.block2__DOT__p) 
                                                >> 1U) 
                                               & ((IData)(vlSelfRef.block2__DOT__g) 
                                                  | ((IData)(vlSelfRef.block2__DOT__p) 
                                                     & ((IData)(__VdfgRegularize_hf246a9bd_1_11) 
                                                        << 1U)))))) 
                                     | (1U & (((IData)(vlSelfRef.block2__DOT__g) 
                                               >> 1U) 
                                              | ((IData)(block2__DOT____VdfgRegularize_h0843a2b9_0_1) 
                                                 | (((IData)(vlSelfRef.block2__DOT__p) 
                                                     >> 1U) 
                                                    & (IData)(block2__DOT____VdfgRegularize_h0843a2b9_0_0)))))) 
                                    << 2U) | (((IData)(__VdfgRegularize_hf246a9bd_1_11) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.block2__DOT__cin))));
    vlSelfRef.block3__DOT__c = ((0x10U & (IData)(vlSelfRef.block3__DOT__c)) 
                                | ((((2U & (((IData)(vlSelfRef.block3__DOT__g) 
                                             >> 1U) 
                                            | (((IData)(vlSelfRef.block3__DOT__p) 
                                                >> 1U) 
                                               & ((IData)(vlSelfRef.block3__DOT__g) 
                                                  | ((IData)(vlSelfRef.block3__DOT__p) 
                                                     & ((IData)(__VdfgRegularize_hf246a9bd_1_16) 
                                                        << 1U)))))) 
                                     | (1U & (((IData)(vlSelfRef.block3__DOT__g) 
                                               >> 1U) 
                                              | ((IData)(block3__DOT____VdfgRegularize_h0843a2b9_0_1) 
                                                 | (((IData)(vlSelfRef.block3__DOT__p) 
                                                     >> 1U) 
                                                    & (IData)(block3__DOT____VdfgRegularize_h0843a2b9_0_0)))))) 
                                    << 2U) | (((IData)(__VdfgRegularize_hf246a9bd_1_16) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.block3__DOT__cin))));
    vlSelfRef.block0__DOT__block0__DOT__cin = (1U & (IData)(vlSelfRef.block0__DOT__c));
    vlSelfRef.block0__DOT__block1__DOT__cin = (1U & 
                                               ((IData)(vlSelfRef.block0__DOT__c) 
                                                >> 1U));
    vlSelfRef.block0__DOT__block2__DOT__cin = (1U & 
                                               ((IData)(vlSelfRef.block0__DOT__c) 
                                                >> 2U));
    vlSelfRef.block0__DOT__block3__DOT__cin = (1U & 
                                               ((IData)(vlSelfRef.block0__DOT__c) 
                                                >> 3U));
    vlSelfRef.block1__DOT__block0__DOT__cin = (1U & (IData)(vlSelfRef.block1__DOT__c));
    vlSelfRef.block1__DOT__block1__DOT__cin = (1U & 
                                               ((IData)(vlSelfRef.block1__DOT__c) 
                                                >> 1U));
    vlSelfRef.block1__DOT__block2__DOT__cin = (1U & 
                                               ((IData)(vlSelfRef.block1__DOT__c) 
                                                >> 2U));
    vlSelfRef.block1__DOT__block3__DOT__cin = (1U & 
                                               ((IData)(vlSelfRef.block1__DOT__c) 
                                                >> 3U));
    vlSelfRef.block2__DOT__block0__DOT__cin = (1U & (IData)(vlSelfRef.block2__DOT__c));
    vlSelfRef.block2__DOT__block1__DOT__cin = (1U & 
                                               ((IData)(vlSelfRef.block2__DOT__c) 
                                                >> 1U));
    vlSelfRef.block2__DOT__block2__DOT__cin = (1U & 
                                               ((IData)(vlSelfRef.block2__DOT__c) 
                                                >> 2U));
    vlSelfRef.block2__DOT__block3__DOT__cin = (1U & 
                                               ((IData)(vlSelfRef.block2__DOT__c) 
                                                >> 3U));
    vlSelfRef.block3__DOT__block0__DOT__cin = (1U & (IData)(vlSelfRef.block3__DOT__c));
    vlSelfRef.block3__DOT__block1__DOT__cin = (1U & 
                                               ((IData)(vlSelfRef.block3__DOT__c) 
                                                >> 1U));
    vlSelfRef.block3__DOT__block2__DOT__cin = (1U & 
                                               ((IData)(vlSelfRef.block3__DOT__c) 
                                                >> 2U));
    vlSelfRef.block3__DOT__block3__DOT__cin = (1U & 
                                               ((IData)(vlSelfRef.block3__DOT__c) 
                                                >> 3U));
    block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block0__DOT__block0__DOT__p) 
           & (IData)(vlSelfRef.block0__DOT__block0__DOT__cin));
    block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block0__DOT__block1__DOT__p) 
           & (IData)(vlSelfRef.block0__DOT__block1__DOT__cin));
    block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block0__DOT__block2__DOT__p) 
           & (IData)(vlSelfRef.block0__DOT__block2__DOT__cin));
    block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block0__DOT__block3__DOT__p) 
           & (IData)(vlSelfRef.block0__DOT__block3__DOT__cin));
    block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block1__DOT__block0__DOT__p) 
           & (IData)(vlSelfRef.block1__DOT__block0__DOT__cin));
    block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block1__DOT__block1__DOT__p) 
           & (IData)(vlSelfRef.block1__DOT__block1__DOT__cin));
    block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block1__DOT__block2__DOT__p) 
           & (IData)(vlSelfRef.block1__DOT__block2__DOT__cin));
    block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block1__DOT__block3__DOT__p) 
           & (IData)(vlSelfRef.block1__DOT__block3__DOT__cin));
    block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block2__DOT__block0__DOT__p) 
           & (IData)(vlSelfRef.block2__DOT__block0__DOT__cin));
    block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block2__DOT__block1__DOT__p) 
           & (IData)(vlSelfRef.block2__DOT__block1__DOT__cin));
    block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block2__DOT__block2__DOT__p) 
           & (IData)(vlSelfRef.block2__DOT__block2__DOT__cin));
    block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block2__DOT__block3__DOT__p) 
           & (IData)(vlSelfRef.block2__DOT__block3__DOT__cin));
    block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block3__DOT__block0__DOT__p) 
           & (IData)(vlSelfRef.block3__DOT__block0__DOT__cin));
    block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block3__DOT__block1__DOT__p) 
           & (IData)(vlSelfRef.block3__DOT__block1__DOT__cin));
    block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block3__DOT__block2__DOT__p) 
           & (IData)(vlSelfRef.block3__DOT__block2__DOT__cin));
    block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block3__DOT__block3__DOT__p) 
           & (IData)(vlSelfRef.block3__DOT__block3__DOT__cin));
    __VdfgRegularize_hf246a9bd_1_2 = (1U & ((IData)(vlSelfRef.block0__DOT__block0__DOT__g) 
                                            | (IData)(block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_3 = (1U & ((IData)(vlSelfRef.block0__DOT__block1__DOT__g) 
                                            | (IData)(block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_4 = (1U & ((IData)(vlSelfRef.block0__DOT__block2__DOT__g) 
                                            | (IData)(block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_5 = (1U & ((IData)(vlSelfRef.block0__DOT__block3__DOT__g) 
                                            | (IData)(block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_7 = (1U & ((IData)(vlSelfRef.block1__DOT__block0__DOT__g) 
                                            | (IData)(block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_8 = (1U & ((IData)(vlSelfRef.block1__DOT__block1__DOT__g) 
                                            | (IData)(block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_9 = (1U & ((IData)(vlSelfRef.block1__DOT__block2__DOT__g) 
                                            | (IData)(block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_10 = (1U & ((IData)(vlSelfRef.block1__DOT__block3__DOT__g) 
                                             | (IData)(block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_12 = (1U & ((IData)(vlSelfRef.block2__DOT__block0__DOT__g) 
                                             | (IData)(block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_13 = (1U & ((IData)(vlSelfRef.block2__DOT__block1__DOT__g) 
                                             | (IData)(block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_14 = (1U & ((IData)(vlSelfRef.block2__DOT__block2__DOT__g) 
                                             | (IData)(block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_15 = (1U & ((IData)(vlSelfRef.block2__DOT__block3__DOT__g) 
                                             | (IData)(block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_17 = (1U & ((IData)(vlSelfRef.block3__DOT__block0__DOT__g) 
                                             | (IData)(block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_18 = (1U & ((IData)(vlSelfRef.block3__DOT__block1__DOT__g) 
                                             | (IData)(block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_19 = (1U & ((IData)(vlSelfRef.block3__DOT__block2__DOT__g) 
                                             | (IData)(block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_20 = (1U & ((IData)(vlSelfRef.block3__DOT__block3__DOT__g) 
                                             | (IData)(block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_h6e95ff9d_0_23 = (1U & (((IData)(vlSelfRef.block0__DOT__block0__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block0__DOT__block0__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_2))));
    __VdfgRegularize_h6e95ff9d_0_24 = (1U & (((IData)(vlSelfRef.block0__DOT__block1__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block0__DOT__block1__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_3))));
    __VdfgRegularize_h6e95ff9d_0_25 = (1U & (((IData)(vlSelfRef.block0__DOT__block2__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block0__DOT__block2__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_4))));
    __VdfgRegularize_h6e95ff9d_0_26 = (1U & (((IData)(vlSelfRef.block0__DOT__block3__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block0__DOT__block3__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_5))));
    __VdfgRegularize_h6e95ff9d_0_27 = (1U & (((IData)(vlSelfRef.block1__DOT__block0__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block1__DOT__block0__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_7))));
    __VdfgRegularize_h6e95ff9d_0_28 = (1U & (((IData)(vlSelfRef.block1__DOT__block1__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block1__DOT__block1__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_8))));
    __VdfgRegularize_h6e95ff9d_0_29 = (1U & (((IData)(vlSelfRef.block1__DOT__block2__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block1__DOT__block2__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_9))));
    __VdfgRegularize_h6e95ff9d_0_30 = (1U & (((IData)(vlSelfRef.block1__DOT__block3__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block1__DOT__block3__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_10))));
    __VdfgRegularize_h6e95ff9d_0_31 = (1U & (((IData)(vlSelfRef.block2__DOT__block0__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block2__DOT__block0__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_12))));
    __VdfgRegularize_h6e95ff9d_0_32 = (1U & (((IData)(vlSelfRef.block2__DOT__block1__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block2__DOT__block1__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_13))));
    __VdfgRegularize_h6e95ff9d_0_33 = (1U & (((IData)(vlSelfRef.block2__DOT__block2__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block2__DOT__block2__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_14))));
    __VdfgRegularize_h6e95ff9d_0_34 = (1U & (((IData)(vlSelfRef.block2__DOT__block3__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block2__DOT__block3__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_15))));
    __VdfgRegularize_h6e95ff9d_0_35 = (1U & (((IData)(vlSelfRef.block3__DOT__block0__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block3__DOT__block0__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_17))));
    __VdfgRegularize_h6e95ff9d_0_36 = (1U & (((IData)(vlSelfRef.block3__DOT__block1__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block3__DOT__block1__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_18))));
    __VdfgRegularize_h6e95ff9d_0_37 = (1U & (((IData)(vlSelfRef.block3__DOT__block2__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block3__DOT__block2__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_19))));
    __VdfgRegularize_h6e95ff9d_0_38 = (1U & (((IData)(vlSelfRef.block3__DOT__block3__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block3__DOT__block3__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_20))));
    vlSelfRef.block0__DOT__block0__DOT__c = (((((IData)(block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block0__DOT__block0__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block0__DOT__block0__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_23) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_23)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_2) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block0__DOT__block0__DOT__cin)));
    vlSelfRef.block0__DOT__block1__DOT__c = (((((IData)(block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block0__DOT__block1__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block0__DOT__block1__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_24) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_24)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_3) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block0__DOT__block1__DOT__cin)));
    vlSelfRef.block0__DOT__block2__DOT__c = (((((IData)(block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block0__DOT__block2__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block0__DOT__block2__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_25) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_25)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_4) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block0__DOT__block2__DOT__cin)));
    vlSelfRef.block0__DOT__block3__DOT__c = (((((IData)(block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block0__DOT__block3__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block0__DOT__block3__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_26) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_26)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_5) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block0__DOT__block3__DOT__cin)));
    vlSelfRef.block1__DOT__block0__DOT__c = (((((IData)(block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block1__DOT__block0__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block1__DOT__block0__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_27) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_27)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_7) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block1__DOT__block0__DOT__cin)));
    vlSelfRef.block1__DOT__block1__DOT__c = (((((IData)(block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block1__DOT__block1__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block1__DOT__block1__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_28) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_28)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_8) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block1__DOT__block1__DOT__cin)));
    vlSelfRef.block1__DOT__block2__DOT__c = (((((IData)(block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block1__DOT__block2__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block1__DOT__block2__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_29) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_29)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_9) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block1__DOT__block2__DOT__cin)));
    vlSelfRef.block1__DOT__block3__DOT__c = (((((IData)(block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block1__DOT__block3__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block1__DOT__block3__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_30) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_30)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_10) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block1__DOT__block3__DOT__cin)));
    vlSelfRef.block2__DOT__block0__DOT__c = (((((IData)(block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block2__DOT__block0__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block2__DOT__block0__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_31) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_31)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_12) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block2__DOT__block0__DOT__cin)));
    vlSelfRef.block2__DOT__block1__DOT__c = (((((IData)(block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block2__DOT__block1__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block2__DOT__block1__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_32) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_32)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_13) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block2__DOT__block1__DOT__cin)));
    vlSelfRef.block2__DOT__block2__DOT__c = (((((IData)(block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block2__DOT__block2__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block2__DOT__block2__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_33) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_33)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_14) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block2__DOT__block2__DOT__cin)));
    vlSelfRef.block2__DOT__block3__DOT__c = (((((IData)(block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block2__DOT__block3__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block2__DOT__block3__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_34) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_34)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_15) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block2__DOT__block3__DOT__cin)));
    vlSelfRef.block3__DOT__block0__DOT__c = (((((IData)(block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block3__DOT__block0__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block3__DOT__block0__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_35) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_35)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_17) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block3__DOT__block0__DOT__cin)));
    vlSelfRef.block3__DOT__block1__DOT__c = (((((IData)(block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block3__DOT__block1__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block3__DOT__block1__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_36) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_36)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_18) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block3__DOT__block1__DOT__cin)));
    vlSelfRef.block3__DOT__block2__DOT__c = (((((IData)(block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block3__DOT__block2__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block3__DOT__block2__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_37) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_37)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_19) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block3__DOT__block2__DOT__cin)));
    vlSelfRef.block3__DOT__block3__DOT__c = (((((IData)(block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block3__DOT__block3__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block3__DOT__block3__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_38) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_38)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_20) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block3__DOT__block3__DOT__cin)));
    vlSelfRef.block0__DOT__block0__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block0__DOT__block0__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block0__DOT__block0__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block0__DOT__block0__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block0__DOT__block0__DOT__c)));
    vlSelfRef.block0__DOT__block1__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block0__DOT__block1__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block0__DOT__block1__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block0__DOT__block1__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block0__DOT__block1__DOT__c)));
    vlSelfRef.block0__DOT__block2__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block0__DOT__block2__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block0__DOT__block2__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block0__DOT__block2__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block0__DOT__block2__DOT__c)));
    vlSelfRef.block0__DOT__block3__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block0__DOT__block3__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block0__DOT__block3__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block0__DOT__block3__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block0__DOT__block3__DOT__c)));
    vlSelfRef.block1__DOT__block0__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block1__DOT__block0__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block1__DOT__block0__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block1__DOT__block0__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block1__DOT__block0__DOT__c)));
    vlSelfRef.block1__DOT__block1__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block1__DOT__block1__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block1__DOT__block1__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block1__DOT__block1__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block1__DOT__block1__DOT__c)));
    vlSelfRef.block1__DOT__block2__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block1__DOT__block2__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block1__DOT__block2__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block1__DOT__block2__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block1__DOT__block2__DOT__c)));
    vlSelfRef.block1__DOT__block3__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block1__DOT__block3__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block1__DOT__block3__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block1__DOT__block3__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block1__DOT__block3__DOT__c)));
    vlSelfRef.block2__DOT__block0__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block2__DOT__block0__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block2__DOT__block0__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block2__DOT__block0__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block2__DOT__block0__DOT__c)));
    vlSelfRef.block2__DOT__block1__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block2__DOT__block1__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block2__DOT__block1__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block2__DOT__block1__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block2__DOT__block1__DOT__c)));
    vlSelfRef.block2__DOT__block2__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block2__DOT__block2__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block2__DOT__block2__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block2__DOT__block2__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block2__DOT__block2__DOT__c)));
    vlSelfRef.block2__DOT__block3__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block2__DOT__block3__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block2__DOT__block3__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block2__DOT__block3__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block2__DOT__block3__DOT__c)));
    vlSelfRef.block3__DOT__block0__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block3__DOT__block0__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block3__DOT__block0__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block3__DOT__block0__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block3__DOT__block0__DOT__c)));
    vlSelfRef.block3__DOT__block1__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block3__DOT__block1__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block3__DOT__block1__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block3__DOT__block1__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block3__DOT__block1__DOT__c)));
    vlSelfRef.block3__DOT__block2__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block3__DOT__block2__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block3__DOT__block2__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block3__DOT__block2__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block3__DOT__block2__DOT__c)));
    vlSelfRef.block3__DOT__block3__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block3__DOT__block3__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block3__DOT__block3__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block3__DOT__block3__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block3__DOT__block3__DOT__c)));
    vlSelfRef.block0__DOT__c3_from_last = vlSelfRef.block0__DOT__block3__DOT__c3_out;
    vlSelfRef.block0__DOT__sum = ((((IData)(vlSelfRef.block0__DOT__block3__DOT__sum) 
                                    << 0x0000000cU) 
                                   | ((IData)(vlSelfRef.block0__DOT__block2__DOT__sum) 
                                      << 8U)) | (((IData)(vlSelfRef.block0__DOT__block1__DOT__sum) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.block0__DOT__block0__DOT__sum)));
    vlSelfRef.block1__DOT__c3_from_last = vlSelfRef.block1__DOT__block3__DOT__c3_out;
    vlSelfRef.block1__DOT__sum = ((((IData)(vlSelfRef.block1__DOT__block3__DOT__sum) 
                                    << 0x0000000cU) 
                                   | ((IData)(vlSelfRef.block1__DOT__block2__DOT__sum) 
                                      << 8U)) | (((IData)(vlSelfRef.block1__DOT__block1__DOT__sum) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.block1__DOT__block0__DOT__sum)));
    vlSelfRef.block2__DOT__c3_from_last = vlSelfRef.block2__DOT__block3__DOT__c3_out;
    vlSelfRef.block2__DOT__sum = ((((IData)(vlSelfRef.block2__DOT__block3__DOT__sum) 
                                    << 0x0000000cU) 
                                   | ((IData)(vlSelfRef.block2__DOT__block2__DOT__sum) 
                                      << 8U)) | (((IData)(vlSelfRef.block2__DOT__block1__DOT__sum) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.block2__DOT__block0__DOT__sum)));
    vlSelfRef.block3__DOT__c3_from_last = vlSelfRef.block3__DOT__block3__DOT__c3_out;
    vlSelfRef.block3__DOT__sum = ((((IData)(vlSelfRef.block3__DOT__block3__DOT__sum) 
                                    << 0x0000000cU) 
                                   | ((IData)(vlSelfRef.block3__DOT__block2__DOT__sum) 
                                      << 8U)) | (((IData)(vlSelfRef.block3__DOT__block1__DOT__sum) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.block3__DOT__block0__DOT__sum)));
    vlSelfRef.block0__DOT__c15_out = vlSelfRef.block0__DOT__c3_from_last;
    vlSelfRef.block1__DOT__c15_out = vlSelfRef.block1__DOT__c3_from_last;
    vlSelfRef.block2__DOT__c15_out = vlSelfRef.block2__DOT__c3_from_last;
    vlSelfRef.block3__DOT__c15_out = vlSelfRef.block3__DOT__c3_from_last;
    vlSelfRef.sum = (((QData)((IData)((((IData)(vlSelfRef.block3__DOT__sum) 
                                        << 0x00000010U) 
                                       | (IData)(vlSelfRef.block2__DOT__sum)))) 
                      << 0x00000020U) | (QData)((IData)(
                                                        (((IData)(vlSelfRef.block1__DOT__sum) 
                                                          << 0x00000010U) 
                                                         | (IData)(vlSelfRef.block0__DOT__sum)))));
    vlSelfRef.c63_from_last = vlSelfRef.block3__DOT__c15_out;
    vlSelfRef.carry_into_msb = vlSelfRef.c63_from_last;
}

void Vtop_cla_64b___nba_sequent__TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst__0(Vtop_cla_64b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_cla_64b___nba_sequent__TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cin = vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__sub;
}

void Vtop_cla_64b___nba_comb__TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst__0(Vtop_cla_64b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_cla_64b___nba_comb__TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_0_1;
    __VdfgRegularize_hf246a9bd_0_1 = 0;
    CData/*0:0*/ block0__DOT____VdfgRegularize_h0843a2b9_0_0;
    block0__DOT____VdfgRegularize_h0843a2b9_0_0 = 0;
    CData/*0:0*/ block0__DOT____VdfgRegularize_h0843a2b9_0_1;
    block0__DOT____VdfgRegularize_h0843a2b9_0_1 = 0;
    CData/*0:0*/ block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0;
    block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2;
    block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3;
    block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4;
    block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0;
    block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2;
    block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3;
    block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4;
    block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0;
    block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2;
    block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3;
    block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4;
    block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0;
    block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2;
    block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3;
    block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4;
    block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block1__DOT____VdfgRegularize_h0843a2b9_0_0;
    block1__DOT____VdfgRegularize_h0843a2b9_0_0 = 0;
    CData/*0:0*/ block1__DOT____VdfgRegularize_h0843a2b9_0_1;
    block1__DOT____VdfgRegularize_h0843a2b9_0_1 = 0;
    CData/*0:0*/ block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0;
    block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2;
    block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3;
    block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4;
    block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0;
    block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2;
    block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3;
    block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4;
    block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0;
    block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2;
    block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3;
    block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4;
    block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0;
    block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2;
    block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3;
    block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4;
    block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block2__DOT____VdfgRegularize_h0843a2b9_0_0;
    block2__DOT____VdfgRegularize_h0843a2b9_0_0 = 0;
    CData/*0:0*/ block2__DOT____VdfgRegularize_h0843a2b9_0_1;
    block2__DOT____VdfgRegularize_h0843a2b9_0_1 = 0;
    CData/*0:0*/ block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0;
    block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2;
    block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3;
    block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4;
    block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0;
    block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2;
    block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3;
    block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4;
    block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0;
    block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2;
    block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3;
    block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4;
    block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0;
    block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2;
    block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3;
    block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4;
    block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block3__DOT____VdfgRegularize_h0843a2b9_0_0;
    block3__DOT____VdfgRegularize_h0843a2b9_0_0 = 0;
    CData/*0:0*/ block3__DOT____VdfgRegularize_h0843a2b9_0_1;
    block3__DOT____VdfgRegularize_h0843a2b9_0_1 = 0;
    CData/*0:0*/ block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0;
    block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2;
    block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3;
    block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4;
    block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0;
    block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2;
    block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3;
    block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4;
    block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0;
    block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2;
    block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3;
    block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4;
    block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0;
    block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2;
    block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3;
    block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4;
    block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_1;
    __VdfgRegularize_hf246a9bd_1_1 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_2;
    __VdfgRegularize_hf246a9bd_1_2 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_3;
    __VdfgRegularize_hf246a9bd_1_3 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_4;
    __VdfgRegularize_hf246a9bd_1_4 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_5;
    __VdfgRegularize_hf246a9bd_1_5 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_6;
    __VdfgRegularize_hf246a9bd_1_6 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_7;
    __VdfgRegularize_hf246a9bd_1_7 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_8;
    __VdfgRegularize_hf246a9bd_1_8 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_9;
    __VdfgRegularize_hf246a9bd_1_9 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_10;
    __VdfgRegularize_hf246a9bd_1_10 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_11;
    __VdfgRegularize_hf246a9bd_1_11 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_12;
    __VdfgRegularize_hf246a9bd_1_12 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_13;
    __VdfgRegularize_hf246a9bd_1_13 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_14;
    __VdfgRegularize_hf246a9bd_1_14 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_15;
    __VdfgRegularize_hf246a9bd_1_15 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_16;
    __VdfgRegularize_hf246a9bd_1_16 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_17;
    __VdfgRegularize_hf246a9bd_1_17 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_18;
    __VdfgRegularize_hf246a9bd_1_18 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_19;
    __VdfgRegularize_hf246a9bd_1_19 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_20;
    __VdfgRegularize_hf246a9bd_1_20 = 0;
    SData/*8:0*/ __Vtableidx21;
    __Vtableidx21 = 0;
    SData/*9:0*/ __Vtableidx22;
    __Vtableidx22 = 0;
    SData/*9:0*/ __Vtableidx23;
    __Vtableidx23 = 0;
    SData/*9:0*/ __Vtableidx24;
    __Vtableidx24 = 0;
    SData/*9:0*/ __Vtableidx25;
    __Vtableidx25 = 0;
    SData/*8:0*/ __Vtableidx26;
    __Vtableidx26 = 0;
    SData/*9:0*/ __Vtableidx27;
    __Vtableidx27 = 0;
    SData/*9:0*/ __Vtableidx28;
    __Vtableidx28 = 0;
    SData/*9:0*/ __Vtableidx29;
    __Vtableidx29 = 0;
    SData/*9:0*/ __Vtableidx30;
    __Vtableidx30 = 0;
    SData/*8:0*/ __Vtableidx31;
    __Vtableidx31 = 0;
    SData/*9:0*/ __Vtableidx32;
    __Vtableidx32 = 0;
    SData/*9:0*/ __Vtableidx33;
    __Vtableidx33 = 0;
    SData/*9:0*/ __Vtableidx34;
    __Vtableidx34 = 0;
    SData/*9:0*/ __Vtableidx35;
    __Vtableidx35 = 0;
    SData/*8:0*/ __Vtableidx36;
    __Vtableidx36 = 0;
    SData/*9:0*/ __Vtableidx37;
    __Vtableidx37 = 0;
    SData/*9:0*/ __Vtableidx38;
    __Vtableidx38 = 0;
    SData/*9:0*/ __Vtableidx39;
    __Vtableidx39 = 0;
    SData/*9:0*/ __Vtableidx40;
    __Vtableidx40 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_22;
    __VdfgRegularize_h6e95ff9d_0_22 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_23;
    __VdfgRegularize_h6e95ff9d_0_23 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_24;
    __VdfgRegularize_h6e95ff9d_0_24 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_25;
    __VdfgRegularize_h6e95ff9d_0_25 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_26;
    __VdfgRegularize_h6e95ff9d_0_26 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_27;
    __VdfgRegularize_h6e95ff9d_0_27 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_28;
    __VdfgRegularize_h6e95ff9d_0_28 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_29;
    __VdfgRegularize_h6e95ff9d_0_29 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_30;
    __VdfgRegularize_h6e95ff9d_0_30 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_31;
    __VdfgRegularize_h6e95ff9d_0_31 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_32;
    __VdfgRegularize_h6e95ff9d_0_32 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_33;
    __VdfgRegularize_h6e95ff9d_0_33 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_34;
    __VdfgRegularize_h6e95ff9d_0_34 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_35;
    __VdfgRegularize_h6e95ff9d_0_35 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_36;
    __VdfgRegularize_h6e95ff9d_0_36 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_37;
    __VdfgRegularize_h6e95ff9d_0_37 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_38;
    __VdfgRegularize_h6e95ff9d_0_38 = 0;
    // Body
    vlSelfRef.a = vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__a;
    vlSelfRef.b = vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b;
    vlSelfRef.block0__DOT__a = (0x0000ffffU & (IData)(vlSelfRef.a));
    vlSelfRef.block1__DOT__a = (0x0000ffffU & (IData)(
                                                      (vlSelfRef.a 
                                                       >> 0x00000010U)));
    vlSelfRef.block2__DOT__a = (0x0000ffffU & (IData)(
                                                      (vlSelfRef.a 
                                                       >> 0x00000020U)));
    vlSelfRef.block3__DOT__a = (0x0000ffffU & (IData)(
                                                      (vlSelfRef.a 
                                                       >> 0x00000030U)));
    vlSelfRef.block0__DOT__b = (0x0000ffffU & (IData)(vlSelfRef.b));
    vlSelfRef.block1__DOT__b = (0x0000ffffU & (IData)(
                                                      (vlSelfRef.b 
                                                       >> 0x00000010U)));
    vlSelfRef.block2__DOT__b = (0x0000ffffU & (IData)(
                                                      (vlSelfRef.b 
                                                       >> 0x00000020U)));
    vlSelfRef.block3__DOT__b = (0x0000ffffU & (IData)(
                                                      (vlSelfRef.b 
                                                       >> 0x00000030U)));
    vlSelfRef.block0__DOT__block0__DOT__a = (0x0000000fU 
                                             & (IData)(vlSelfRef.block0__DOT__a));
    vlSelfRef.block0__DOT__block1__DOT__a = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block0__DOT__a) 
                                                >> 4U));
    vlSelfRef.block0__DOT__block2__DOT__a = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block0__DOT__a) 
                                                >> 8U));
    vlSelfRef.block0__DOT__block3__DOT__a = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block0__DOT__a) 
                                                >> 0x0000000cU));
    vlSelfRef.block1__DOT__block0__DOT__a = (0x0000000fU 
                                             & (IData)(vlSelfRef.block1__DOT__a));
    vlSelfRef.block1__DOT__block1__DOT__a = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block1__DOT__a) 
                                                >> 4U));
    vlSelfRef.block1__DOT__block2__DOT__a = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block1__DOT__a) 
                                                >> 8U));
    vlSelfRef.block1__DOT__block3__DOT__a = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block1__DOT__a) 
                                                >> 0x0000000cU));
    vlSelfRef.block2__DOT__block0__DOT__a = (0x0000000fU 
                                             & (IData)(vlSelfRef.block2__DOT__a));
    vlSelfRef.block2__DOT__block1__DOT__a = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block2__DOT__a) 
                                                >> 4U));
    vlSelfRef.block2__DOT__block2__DOT__a = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block2__DOT__a) 
                                                >> 8U));
    vlSelfRef.block2__DOT__block3__DOT__a = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block2__DOT__a) 
                                                >> 0x0000000cU));
    vlSelfRef.block3__DOT__block0__DOT__a = (0x0000000fU 
                                             & (IData)(vlSelfRef.block3__DOT__a));
    vlSelfRef.block3__DOT__block1__DOT__a = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block3__DOT__a) 
                                                >> 4U));
    vlSelfRef.block3__DOT__block2__DOT__a = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block3__DOT__a) 
                                                >> 8U));
    vlSelfRef.block3__DOT__block3__DOT__a = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block3__DOT__a) 
                                                >> 0x0000000cU));
    vlSelfRef.block0__DOT__block0__DOT__b = (0x0000000fU 
                                             & (IData)(vlSelfRef.block0__DOT__b));
    vlSelfRef.block0__DOT__block1__DOT__b = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block0__DOT__b) 
                                                >> 4U));
    vlSelfRef.block0__DOT__block2__DOT__b = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block0__DOT__b) 
                                                >> 8U));
    vlSelfRef.block0__DOT__block3__DOT__b = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block0__DOT__b) 
                                                >> 0x0000000cU));
    vlSelfRef.block1__DOT__block0__DOT__b = (0x0000000fU 
                                             & (IData)(vlSelfRef.block1__DOT__b));
    vlSelfRef.block1__DOT__block1__DOT__b = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block1__DOT__b) 
                                                >> 4U));
    vlSelfRef.block1__DOT__block2__DOT__b = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block1__DOT__b) 
                                                >> 8U));
    vlSelfRef.block1__DOT__block3__DOT__b = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block1__DOT__b) 
                                                >> 0x0000000cU));
    vlSelfRef.block2__DOT__block0__DOT__b = (0x0000000fU 
                                             & (IData)(vlSelfRef.block2__DOT__b));
    vlSelfRef.block2__DOT__block1__DOT__b = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block2__DOT__b) 
                                                >> 4U));
    vlSelfRef.block2__DOT__block2__DOT__b = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block2__DOT__b) 
                                                >> 8U));
    vlSelfRef.block2__DOT__block3__DOT__b = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block2__DOT__b) 
                                                >> 0x0000000cU));
    vlSelfRef.block3__DOT__block0__DOT__b = (0x0000000fU 
                                             & (IData)(vlSelfRef.block3__DOT__b));
    vlSelfRef.block3__DOT__block1__DOT__b = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block3__DOT__b) 
                                                >> 4U));
    vlSelfRef.block3__DOT__block2__DOT__b = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block3__DOT__b) 
                                                >> 8U));
    vlSelfRef.block3__DOT__block3__DOT__b = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block3__DOT__b) 
                                                >> 0x0000000cU));
    vlSelfRef.block0__DOT__block0__DOT__g = ((IData)(vlSelfRef.block0__DOT__block0__DOT__a) 
                                             & (IData)(vlSelfRef.block0__DOT__block0__DOT__b));
    vlSelfRef.block0__DOT__block0__DOT__p = ((IData)(vlSelfRef.block0__DOT__block0__DOT__a) 
                                             ^ (IData)(vlSelfRef.block0__DOT__block0__DOT__b));
    vlSelfRef.block0__DOT__block1__DOT__g = ((IData)(vlSelfRef.block0__DOT__block1__DOT__a) 
                                             & (IData)(vlSelfRef.block0__DOT__block1__DOT__b));
    vlSelfRef.block0__DOT__block1__DOT__p = ((IData)(vlSelfRef.block0__DOT__block1__DOT__a) 
                                             ^ (IData)(vlSelfRef.block0__DOT__block1__DOT__b));
    vlSelfRef.block0__DOT__block2__DOT__g = ((IData)(vlSelfRef.block0__DOT__block2__DOT__a) 
                                             & (IData)(vlSelfRef.block0__DOT__block2__DOT__b));
    vlSelfRef.block0__DOT__block2__DOT__p = ((IData)(vlSelfRef.block0__DOT__block2__DOT__a) 
                                             ^ (IData)(vlSelfRef.block0__DOT__block2__DOT__b));
    vlSelfRef.block0__DOT__block3__DOT__g = ((IData)(vlSelfRef.block0__DOT__block3__DOT__a) 
                                             & (IData)(vlSelfRef.block0__DOT__block3__DOT__b));
    vlSelfRef.block0__DOT__block3__DOT__p = ((IData)(vlSelfRef.block0__DOT__block3__DOT__a) 
                                             ^ (IData)(vlSelfRef.block0__DOT__block3__DOT__b));
    vlSelfRef.block1__DOT__block0__DOT__g = ((IData)(vlSelfRef.block1__DOT__block0__DOT__a) 
                                             & (IData)(vlSelfRef.block1__DOT__block0__DOT__b));
    vlSelfRef.block1__DOT__block0__DOT__p = ((IData)(vlSelfRef.block1__DOT__block0__DOT__a) 
                                             ^ (IData)(vlSelfRef.block1__DOT__block0__DOT__b));
    vlSelfRef.block1__DOT__block1__DOT__g = ((IData)(vlSelfRef.block1__DOT__block1__DOT__a) 
                                             & (IData)(vlSelfRef.block1__DOT__block1__DOT__b));
    vlSelfRef.block1__DOT__block1__DOT__p = ((IData)(vlSelfRef.block1__DOT__block1__DOT__a) 
                                             ^ (IData)(vlSelfRef.block1__DOT__block1__DOT__b));
    vlSelfRef.block1__DOT__block2__DOT__g = ((IData)(vlSelfRef.block1__DOT__block2__DOT__a) 
                                             & (IData)(vlSelfRef.block1__DOT__block2__DOT__b));
    vlSelfRef.block1__DOT__block2__DOT__p = ((IData)(vlSelfRef.block1__DOT__block2__DOT__a) 
                                             ^ (IData)(vlSelfRef.block1__DOT__block2__DOT__b));
    vlSelfRef.block1__DOT__block3__DOT__g = ((IData)(vlSelfRef.block1__DOT__block3__DOT__a) 
                                             & (IData)(vlSelfRef.block1__DOT__block3__DOT__b));
    vlSelfRef.block1__DOT__block3__DOT__p = ((IData)(vlSelfRef.block1__DOT__block3__DOT__a) 
                                             ^ (IData)(vlSelfRef.block1__DOT__block3__DOT__b));
    vlSelfRef.block2__DOT__block0__DOT__g = ((IData)(vlSelfRef.block2__DOT__block0__DOT__a) 
                                             & (IData)(vlSelfRef.block2__DOT__block0__DOT__b));
    vlSelfRef.block2__DOT__block0__DOT__p = ((IData)(vlSelfRef.block2__DOT__block0__DOT__a) 
                                             ^ (IData)(vlSelfRef.block2__DOT__block0__DOT__b));
    vlSelfRef.block2__DOT__block1__DOT__g = ((IData)(vlSelfRef.block2__DOT__block1__DOT__a) 
                                             & (IData)(vlSelfRef.block2__DOT__block1__DOT__b));
    vlSelfRef.block2__DOT__block1__DOT__p = ((IData)(vlSelfRef.block2__DOT__block1__DOT__a) 
                                             ^ (IData)(vlSelfRef.block2__DOT__block1__DOT__b));
    vlSelfRef.block2__DOT__block2__DOT__g = ((IData)(vlSelfRef.block2__DOT__block2__DOT__a) 
                                             & (IData)(vlSelfRef.block2__DOT__block2__DOT__b));
    vlSelfRef.block2__DOT__block2__DOT__p = ((IData)(vlSelfRef.block2__DOT__block2__DOT__a) 
                                             ^ (IData)(vlSelfRef.block2__DOT__block2__DOT__b));
    vlSelfRef.block2__DOT__block3__DOT__g = ((IData)(vlSelfRef.block2__DOT__block3__DOT__a) 
                                             & (IData)(vlSelfRef.block2__DOT__block3__DOT__b));
    vlSelfRef.block2__DOT__block3__DOT__p = ((IData)(vlSelfRef.block2__DOT__block3__DOT__a) 
                                             ^ (IData)(vlSelfRef.block2__DOT__block3__DOT__b));
    vlSelfRef.block3__DOT__block0__DOT__g = ((IData)(vlSelfRef.block3__DOT__block0__DOT__a) 
                                             & (IData)(vlSelfRef.block3__DOT__block0__DOT__b));
    vlSelfRef.block3__DOT__block0__DOT__p = ((IData)(vlSelfRef.block3__DOT__block0__DOT__a) 
                                             ^ (IData)(vlSelfRef.block3__DOT__block0__DOT__b));
    vlSelfRef.block3__DOT__block1__DOT__g = ((IData)(vlSelfRef.block3__DOT__block1__DOT__a) 
                                             & (IData)(vlSelfRef.block3__DOT__block1__DOT__b));
    vlSelfRef.block3__DOT__block1__DOT__p = ((IData)(vlSelfRef.block3__DOT__block1__DOT__a) 
                                             ^ (IData)(vlSelfRef.block3__DOT__block1__DOT__b));
    vlSelfRef.block3__DOT__block2__DOT__g = ((IData)(vlSelfRef.block3__DOT__block2__DOT__a) 
                                             & (IData)(vlSelfRef.block3__DOT__block2__DOT__b));
    vlSelfRef.block3__DOT__block2__DOT__p = ((IData)(vlSelfRef.block3__DOT__block2__DOT__a) 
                                             ^ (IData)(vlSelfRef.block3__DOT__block2__DOT__b));
    vlSelfRef.block3__DOT__block3__DOT__g = ((IData)(vlSelfRef.block3__DOT__block3__DOT__a) 
                                             & (IData)(vlSelfRef.block3__DOT__block3__DOT__b));
    vlSelfRef.block3__DOT__block3__DOT__p = ((IData)(vlSelfRef.block3__DOT__block3__DOT__a) 
                                             ^ (IData)(vlSelfRef.block3__DOT__block3__DOT__b));
    vlSelfRef.block0__DOT__block0__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block0__DOT__block0__DOT__p)));
    block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block0__DOT__block0__DOT__p))));
    vlSelfRef.block0__DOT__block1__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block0__DOT__block1__DOT__p)));
    block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block0__DOT__block1__DOT__p))));
    vlSelfRef.block0__DOT__block2__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block0__DOT__block2__DOT__p)));
    block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block0__DOT__block2__DOT__p))));
    vlSelfRef.block0__DOT__block3__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block0__DOT__block3__DOT__p)));
    block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block0__DOT__block3__DOT__p))));
    vlSelfRef.block1__DOT__block0__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block1__DOT__block0__DOT__p)));
    block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block1__DOT__block0__DOT__p))));
    vlSelfRef.block1__DOT__block1__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block1__DOT__block1__DOT__p)));
    block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block1__DOT__block1__DOT__p))));
    vlSelfRef.block1__DOT__block2__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block1__DOT__block2__DOT__p)));
    block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block1__DOT__block2__DOT__p))));
    vlSelfRef.block1__DOT__block3__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block1__DOT__block3__DOT__p)));
    block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block1__DOT__block3__DOT__p))));
    vlSelfRef.block2__DOT__block0__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block2__DOT__block0__DOT__p)));
    block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block2__DOT__block0__DOT__p))));
    vlSelfRef.block2__DOT__block1__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block2__DOT__block1__DOT__p)));
    block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block2__DOT__block1__DOT__p))));
    vlSelfRef.block2__DOT__block2__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block2__DOT__block2__DOT__p)));
    block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block2__DOT__block2__DOT__p))));
    vlSelfRef.block2__DOT__block3__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block2__DOT__block3__DOT__p)));
    block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block2__DOT__block3__DOT__p))));
    vlSelfRef.block3__DOT__block0__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block3__DOT__block0__DOT__p)));
    block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block3__DOT__block0__DOT__p))));
    vlSelfRef.block3__DOT__block1__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block3__DOT__block1__DOT__p)));
    block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block3__DOT__block1__DOT__p))));
    vlSelfRef.block3__DOT__block2__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block3__DOT__block2__DOT__p)));
    block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block3__DOT__block2__DOT__p))));
    vlSelfRef.block3__DOT__block3__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block3__DOT__block3__DOT__p)));
    block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block3__DOT__block3__DOT__p))));
    block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block0__DOT__block0__DOT__p) 
              >> 1U));
    block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block0__DOT__block1__DOT__p) 
              >> 1U));
    block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block0__DOT__block2__DOT__p) 
              >> 1U));
    vlSelfRef.block0__DOT__p = ((((IData)(vlSelfRef.block0__DOT__block3__DOT__p_out) 
                                  << 3U) | ((IData)(vlSelfRef.block0__DOT__block2__DOT__p_out) 
                                            << 2U)) 
                                | (((IData)(vlSelfRef.block0__DOT__block1__DOT__p_out) 
                                    << 1U) | (IData)(vlSelfRef.block0__DOT__block0__DOT__p_out)));
    block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block0__DOT__block3__DOT__p) 
              >> 1U));
    block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block1__DOT__block0__DOT__p) 
              >> 1U));
    block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block1__DOT__block1__DOT__p) 
              >> 1U));
    block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block1__DOT__block2__DOT__p) 
              >> 1U));
    vlSelfRef.block1__DOT__p = ((((IData)(vlSelfRef.block1__DOT__block3__DOT__p_out) 
                                  << 3U) | ((IData)(vlSelfRef.block1__DOT__block2__DOT__p_out) 
                                            << 2U)) 
                                | (((IData)(vlSelfRef.block1__DOT__block1__DOT__p_out) 
                                    << 1U) | (IData)(vlSelfRef.block1__DOT__block0__DOT__p_out)));
    block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block1__DOT__block3__DOT__p) 
              >> 1U));
    block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block2__DOT__block0__DOT__p) 
              >> 1U));
    block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block2__DOT__block1__DOT__p) 
              >> 1U));
    block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block2__DOT__block2__DOT__p) 
              >> 1U));
    vlSelfRef.block2__DOT__p = ((((IData)(vlSelfRef.block2__DOT__block3__DOT__p_out) 
                                  << 3U) | ((IData)(vlSelfRef.block2__DOT__block2__DOT__p_out) 
                                            << 2U)) 
                                | (((IData)(vlSelfRef.block2__DOT__block1__DOT__p_out) 
                                    << 1U) | (IData)(vlSelfRef.block2__DOT__block0__DOT__p_out)));
    block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block2__DOT__block3__DOT__p) 
              >> 1U));
    block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block3__DOT__block0__DOT__p) 
              >> 1U));
    block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block3__DOT__block1__DOT__p) 
              >> 1U));
    block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block3__DOT__block2__DOT__p) 
              >> 1U));
    vlSelfRef.block3__DOT__p = ((((IData)(vlSelfRef.block3__DOT__block3__DOT__p_out) 
                                  << 3U) | ((IData)(vlSelfRef.block3__DOT__block2__DOT__p_out) 
                                            << 2U)) 
                                | (((IData)(vlSelfRef.block3__DOT__block1__DOT__p_out) 
                                    << 1U) | (IData)(vlSelfRef.block3__DOT__block0__DOT__p_out)));
    block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block3__DOT__block3__DOT__p) 
              >> 1U));
    __Vtableidx22 = ((((IData)(block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3) 
                       << 9U) | ((IData)(block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                 << 8U)) | (((IData)(vlSelfRef.block0__DOT__block0__DOT__p) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.block0__DOT__block0__DOT__g)));
    block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx22];
    __Vtableidx23 = ((((IData)(block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3) 
                       << 9U) | ((IData)(block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                 << 8U)) | (((IData)(vlSelfRef.block0__DOT__block1__DOT__p) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.block0__DOT__block1__DOT__g)));
    block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx23];
    __Vtableidx24 = ((((IData)(block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3) 
                       << 9U) | ((IData)(block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                 << 8U)) | (((IData)(vlSelfRef.block0__DOT__block2__DOT__p) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.block0__DOT__block2__DOT__g)));
    block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx24];
    vlSelfRef.block0__DOT__p_out = (IData)((0x0fU == (IData)(vlSelfRef.block0__DOT__p)));
    __Vtableidx25 = ((((IData)(block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3) 
                       << 9U) | ((IData)(block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                 << 8U)) | (((IData)(vlSelfRef.block0__DOT__block3__DOT__p) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.block0__DOT__block3__DOT__g)));
    block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx25];
    __Vtableidx27 = ((((IData)(block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3) 
                       << 9U) | ((IData)(block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                 << 8U)) | (((IData)(vlSelfRef.block1__DOT__block0__DOT__p) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.block1__DOT__block0__DOT__g)));
    block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx27];
    __Vtableidx28 = ((((IData)(block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3) 
                       << 9U) | ((IData)(block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                 << 8U)) | (((IData)(vlSelfRef.block1__DOT__block1__DOT__p) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.block1__DOT__block1__DOT__g)));
    block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx28];
    __Vtableidx29 = ((((IData)(block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3) 
                       << 9U) | ((IData)(block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                 << 8U)) | (((IData)(vlSelfRef.block1__DOT__block2__DOT__p) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.block1__DOT__block2__DOT__g)));
    block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx29];
    vlSelfRef.block1__DOT__p_out = (IData)((0x0fU == (IData)(vlSelfRef.block1__DOT__p)));
    __Vtableidx30 = ((((IData)(block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3) 
                       << 9U) | ((IData)(block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                 << 8U)) | (((IData)(vlSelfRef.block1__DOT__block3__DOT__p) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.block1__DOT__block3__DOT__g)));
    block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx30];
    __Vtableidx32 = ((((IData)(block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3) 
                       << 9U) | ((IData)(block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                 << 8U)) | (((IData)(vlSelfRef.block2__DOT__block0__DOT__p) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.block2__DOT__block0__DOT__g)));
    block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx32];
    __Vtableidx33 = ((((IData)(block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3) 
                       << 9U) | ((IData)(block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                 << 8U)) | (((IData)(vlSelfRef.block2__DOT__block1__DOT__p) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.block2__DOT__block1__DOT__g)));
    block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx33];
    __Vtableidx34 = ((((IData)(block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3) 
                       << 9U) | ((IData)(block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                 << 8U)) | (((IData)(vlSelfRef.block2__DOT__block2__DOT__p) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.block2__DOT__block2__DOT__g)));
    block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx34];
    vlSelfRef.block2__DOT__p_out = (IData)((0x0fU == (IData)(vlSelfRef.block2__DOT__p)));
    __Vtableidx35 = ((((IData)(block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3) 
                       << 9U) | ((IData)(block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                 << 8U)) | (((IData)(vlSelfRef.block2__DOT__block3__DOT__p) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.block2__DOT__block3__DOT__g)));
    block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx35];
    __Vtableidx37 = ((((IData)(block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3) 
                       << 9U) | ((IData)(block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                 << 8U)) | (((IData)(vlSelfRef.block3__DOT__block0__DOT__p) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.block3__DOT__block0__DOT__g)));
    block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx37];
    __Vtableidx38 = ((((IData)(block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3) 
                       << 9U) | ((IData)(block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                 << 8U)) | (((IData)(vlSelfRef.block3__DOT__block1__DOT__p) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.block3__DOT__block1__DOT__g)));
    block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx38];
    __Vtableidx39 = ((((IData)(block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3) 
                       << 9U) | ((IData)(block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                 << 8U)) | (((IData)(vlSelfRef.block3__DOT__block2__DOT__p) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.block3__DOT__block2__DOT__g)));
    block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx39];
    vlSelfRef.block3__DOT__p_out = (IData)((0x0fU == (IData)(vlSelfRef.block3__DOT__p)));
    __Vtableidx40 = ((((IData)(block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3) 
                       << 9U) | ((IData)(block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                 << 8U)) | (((IData)(vlSelfRef.block3__DOT__block3__DOT__p) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.block3__DOT__block3__DOT__g)));
    block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx40];
    vlSelfRef.block0__DOT__block0__DOT__g_out = block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block0__DOT__block1__DOT__g_out = block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block0__DOT__block2__DOT__g_out = block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block0__DOT__block3__DOT__g_out = block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block1__DOT__block0__DOT__g_out = block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block1__DOT__block1__DOT__g_out = block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block1__DOT__block2__DOT__g_out = block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block1__DOT__block3__DOT__g_out = block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block2__DOT__block0__DOT__g_out = block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block2__DOT__block1__DOT__g_out = block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block2__DOT__block2__DOT__g_out = block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block2__DOT__block3__DOT__g_out = block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block3__DOT__block0__DOT__g_out = block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block3__DOT__block1__DOT__g_out = block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block3__DOT__block2__DOT__g_out = block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.p = ((((IData)(vlSelfRef.block3__DOT__p_out) 
                     << 3U) | ((IData)(vlSelfRef.block2__DOT__p_out) 
                               << 2U)) | (((IData)(vlSelfRef.block1__DOT__p_out) 
                                           << 1U) | (IData)(vlSelfRef.block0__DOT__p_out)));
    vlSelfRef.block3__DOT__block3__DOT__g_out = block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block0__DOT__g = ((((IData)(vlSelfRef.block0__DOT__block3__DOT__g_out) 
                                  << 3U) | ((IData)(vlSelfRef.block0__DOT__block2__DOT__g_out) 
                                            << 2U)) 
                                | (((IData)(vlSelfRef.block0__DOT__block1__DOT__g_out) 
                                    << 1U) | (IData)(vlSelfRef.block0__DOT__block0__DOT__g_out)));
    vlSelfRef.block1__DOT__g = ((((IData)(vlSelfRef.block1__DOT__block3__DOT__g_out) 
                                  << 3U) | ((IData)(vlSelfRef.block1__DOT__block2__DOT__g_out) 
                                            << 2U)) 
                                | (((IData)(vlSelfRef.block1__DOT__block1__DOT__g_out) 
                                    << 1U) | (IData)(vlSelfRef.block1__DOT__block0__DOT__g_out)));
    vlSelfRef.block2__DOT__g = ((((IData)(vlSelfRef.block2__DOT__block3__DOT__g_out) 
                                  << 3U) | ((IData)(vlSelfRef.block2__DOT__block2__DOT__g_out) 
                                            << 2U)) 
                                | (((IData)(vlSelfRef.block2__DOT__block1__DOT__g_out) 
                                    << 1U) | (IData)(vlSelfRef.block2__DOT__block0__DOT__g_out)));
    vlSelfRef.block3__DOT__g = ((((IData)(vlSelfRef.block3__DOT__block3__DOT__g_out) 
                                  << 3U) | ((IData)(vlSelfRef.block3__DOT__block2__DOT__g_out) 
                                            << 2U)) 
                                | (((IData)(vlSelfRef.block3__DOT__block1__DOT__g_out) 
                                    << 1U) | (IData)(vlSelfRef.block3__DOT__block0__DOT__g_out)));
    block0__DOT____VdfgRegularize_h0843a2b9_0_1 = (1U 
                                                   & (((IData)(vlSelfRef.block0__DOT__p) 
                                                       >> 1U) 
                                                      & (IData)(vlSelfRef.block0__DOT__g)));
    block1__DOT____VdfgRegularize_h0843a2b9_0_1 = (1U 
                                                   & (((IData)(vlSelfRef.block1__DOT__p) 
                                                       >> 1U) 
                                                      & (IData)(vlSelfRef.block1__DOT__g)));
    block2__DOT____VdfgRegularize_h0843a2b9_0_1 = (1U 
                                                   & (((IData)(vlSelfRef.block2__DOT__p) 
                                                       >> 1U) 
                                                      & (IData)(vlSelfRef.block2__DOT__g)));
    block3__DOT____VdfgRegularize_h0843a2b9_0_1 = (1U 
                                                   & (((IData)(vlSelfRef.block3__DOT__p) 
                                                       >> 1U) 
                                                      & (IData)(vlSelfRef.block3__DOT__g)));
    __Vtableidx21 = (((IData)(block0__DOT____VdfgRegularize_h0843a2b9_0_1) 
                      << 8U) | (((IData)(vlSelfRef.block0__DOT__p) 
                                 << 4U) | (IData)(vlSelfRef.block0__DOT__g)));
    vlSelfRef.block0__DOT__g_out = Vtop__ConstPool__TABLE_h08c4d8a1_0
        [__Vtableidx21];
    __Vtableidx26 = (((IData)(block1__DOT____VdfgRegularize_h0843a2b9_0_1) 
                      << 8U) | (((IData)(vlSelfRef.block1__DOT__p) 
                                 << 4U) | (IData)(vlSelfRef.block1__DOT__g)));
    vlSelfRef.block1__DOT__g_out = Vtop__ConstPool__TABLE_h08c4d8a1_0
        [__Vtableidx26];
    __Vtableidx31 = (((IData)(block2__DOT____VdfgRegularize_h0843a2b9_0_1) 
                      << 8U) | (((IData)(vlSelfRef.block2__DOT__p) 
                                 << 4U) | (IData)(vlSelfRef.block2__DOT__g)));
    vlSelfRef.block2__DOT__g_out = Vtop__ConstPool__TABLE_h08c4d8a1_0
        [__Vtableidx31];
    __Vtableidx36 = (((IData)(block3__DOT____VdfgRegularize_h0843a2b9_0_1) 
                      << 8U) | (((IData)(vlSelfRef.block3__DOT__p) 
                                 << 4U) | (IData)(vlSelfRef.block3__DOT__g)));
    vlSelfRef.block3__DOT__g_out = Vtop__ConstPool__TABLE_h08c4d8a1_0
        [__Vtableidx36];
    vlSelfRef.g = ((((IData)(vlSelfRef.block3__DOT__g_out) 
                     << 3U) | ((IData)(vlSelfRef.block2__DOT__g_out) 
                               << 2U)) | (((IData)(vlSelfRef.block1__DOT__g_out) 
                                           << 1U) | (IData)(vlSelfRef.block0__DOT__g_out)));
    __VdfgRegularize_hf246a9bd_0_1 = (1U & ((IData)(vlSelfRef.g) 
                                            | ((IData)(vlSelfRef.p) 
                                               & (IData)(vlSelfRef.cin))));
    __VdfgRegularize_h6e95ff9d_0_22 = (1U & (((IData)(vlSelfRef.g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_0_1))));
    vlSelfRef.c = ((((4U & ((0x7ffffffcU & ((IData)(vlSelfRef.g) 
                                            >> 1U)) 
                            | (((((IData)(vlSelfRef.p) 
                                  >> 3U) & ((IData)(vlSelfRef.g) 
                                            >> 2U)) 
                                | (IData)(((0x0cU == 
                                            (0x0cU 
                                             & (IData)(vlSelfRef.p))) 
                                           & (IData)(__VdfgRegularize_h6e95ff9d_0_22)))) 
                               << 2U))) | ((2U & (((IData)(vlSelfRef.g) 
                                                   >> 1U) 
                                                  | (((IData)(vlSelfRef.p) 
                                                      >> 1U) 
                                                     & ((IData)(__VdfgRegularize_h6e95ff9d_0_22) 
                                                        << 1U)))) 
                                           | (IData)(__VdfgRegularize_h6e95ff9d_0_22))) 
                    << 2U) | (((IData)(__VdfgRegularize_hf246a9bd_0_1) 
                               << 1U) | (IData)(vlSelfRef.cin)));
    vlSelfRef.cout = (1U & ((IData)(vlSelfRef.c) >> 4U));
    vlSelfRef.block0__DOT__cin = (1U & (IData)(vlSelfRef.c));
    vlSelfRef.block1__DOT__cin = (1U & ((IData)(vlSelfRef.c) 
                                        >> 1U));
    vlSelfRef.block2__DOT__cin = (1U & ((IData)(vlSelfRef.c) 
                                        >> 2U));
    vlSelfRef.block3__DOT__cin = (1U & ((IData)(vlSelfRef.c) 
                                        >> 3U));
    block0__DOT____VdfgRegularize_h0843a2b9_0_0 = ((IData)(vlSelfRef.block0__DOT__p) 
                                                   & (IData)(vlSelfRef.block0__DOT__cin));
    block1__DOT____VdfgRegularize_h0843a2b9_0_0 = ((IData)(vlSelfRef.block1__DOT__p) 
                                                   & (IData)(vlSelfRef.block1__DOT__cin));
    block2__DOT____VdfgRegularize_h0843a2b9_0_0 = ((IData)(vlSelfRef.block2__DOT__p) 
                                                   & (IData)(vlSelfRef.block2__DOT__cin));
    block3__DOT____VdfgRegularize_h0843a2b9_0_0 = ((IData)(vlSelfRef.block3__DOT__p) 
                                                   & (IData)(vlSelfRef.block3__DOT__cin));
    __VdfgRegularize_hf246a9bd_1_1 = (1U & ((IData)(vlSelfRef.block0__DOT__g) 
                                            | (IData)(block0__DOT____VdfgRegularize_h0843a2b9_0_0)));
    __VdfgRegularize_hf246a9bd_1_6 = (1U & ((IData)(vlSelfRef.block1__DOT__g) 
                                            | (IData)(block1__DOT____VdfgRegularize_h0843a2b9_0_0)));
    __VdfgRegularize_hf246a9bd_1_11 = (1U & ((IData)(vlSelfRef.block2__DOT__g) 
                                             | (IData)(block2__DOT____VdfgRegularize_h0843a2b9_0_0)));
    __VdfgRegularize_hf246a9bd_1_16 = (1U & ((IData)(vlSelfRef.block3__DOT__g) 
                                             | (IData)(block3__DOT____VdfgRegularize_h0843a2b9_0_0)));
    vlSelfRef.block0__DOT__c = ((0x10U & (IData)(vlSelfRef.block0__DOT__c)) 
                                | ((((2U & (((IData)(vlSelfRef.block0__DOT__g) 
                                             >> 1U) 
                                            | (((IData)(vlSelfRef.block0__DOT__p) 
                                                >> 1U) 
                                               & ((IData)(vlSelfRef.block0__DOT__g) 
                                                  | ((IData)(vlSelfRef.block0__DOT__p) 
                                                     & ((IData)(__VdfgRegularize_hf246a9bd_1_1) 
                                                        << 1U)))))) 
                                     | (1U & (((IData)(vlSelfRef.block0__DOT__g) 
                                               >> 1U) 
                                              | ((IData)(block0__DOT____VdfgRegularize_h0843a2b9_0_1) 
                                                 | (((IData)(vlSelfRef.block0__DOT__p) 
                                                     >> 1U) 
                                                    & (IData)(block0__DOT____VdfgRegularize_h0843a2b9_0_0)))))) 
                                    << 2U) | (((IData)(__VdfgRegularize_hf246a9bd_1_1) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.block0__DOT__cin))));
    vlSelfRef.block1__DOT__c = ((0x10U & (IData)(vlSelfRef.block1__DOT__c)) 
                                | ((((2U & (((IData)(vlSelfRef.block1__DOT__g) 
                                             >> 1U) 
                                            | (((IData)(vlSelfRef.block1__DOT__p) 
                                                >> 1U) 
                                               & ((IData)(vlSelfRef.block1__DOT__g) 
                                                  | ((IData)(vlSelfRef.block1__DOT__p) 
                                                     & ((IData)(__VdfgRegularize_hf246a9bd_1_6) 
                                                        << 1U)))))) 
                                     | (1U & (((IData)(vlSelfRef.block1__DOT__g) 
                                               >> 1U) 
                                              | ((IData)(block1__DOT____VdfgRegularize_h0843a2b9_0_1) 
                                                 | (((IData)(vlSelfRef.block1__DOT__p) 
                                                     >> 1U) 
                                                    & (IData)(block1__DOT____VdfgRegularize_h0843a2b9_0_0)))))) 
                                    << 2U) | (((IData)(__VdfgRegularize_hf246a9bd_1_6) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.block1__DOT__cin))));
    vlSelfRef.block2__DOT__c = ((0x10U & (IData)(vlSelfRef.block2__DOT__c)) 
                                | ((((2U & (((IData)(vlSelfRef.block2__DOT__g) 
                                             >> 1U) 
                                            | (((IData)(vlSelfRef.block2__DOT__p) 
                                                >> 1U) 
                                               & ((IData)(vlSelfRef.block2__DOT__g) 
                                                  | ((IData)(vlSelfRef.block2__DOT__p) 
                                                     & ((IData)(__VdfgRegularize_hf246a9bd_1_11) 
                                                        << 1U)))))) 
                                     | (1U & (((IData)(vlSelfRef.block2__DOT__g) 
                                               >> 1U) 
                                              | ((IData)(block2__DOT____VdfgRegularize_h0843a2b9_0_1) 
                                                 | (((IData)(vlSelfRef.block2__DOT__p) 
                                                     >> 1U) 
                                                    & (IData)(block2__DOT____VdfgRegularize_h0843a2b9_0_0)))))) 
                                    << 2U) | (((IData)(__VdfgRegularize_hf246a9bd_1_11) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.block2__DOT__cin))));
    vlSelfRef.block3__DOT__c = ((0x10U & (IData)(vlSelfRef.block3__DOT__c)) 
                                | ((((2U & (((IData)(vlSelfRef.block3__DOT__g) 
                                             >> 1U) 
                                            | (((IData)(vlSelfRef.block3__DOT__p) 
                                                >> 1U) 
                                               & ((IData)(vlSelfRef.block3__DOT__g) 
                                                  | ((IData)(vlSelfRef.block3__DOT__p) 
                                                     & ((IData)(__VdfgRegularize_hf246a9bd_1_16) 
                                                        << 1U)))))) 
                                     | (1U & (((IData)(vlSelfRef.block3__DOT__g) 
                                               >> 1U) 
                                              | ((IData)(block3__DOT____VdfgRegularize_h0843a2b9_0_1) 
                                                 | (((IData)(vlSelfRef.block3__DOT__p) 
                                                     >> 1U) 
                                                    & (IData)(block3__DOT____VdfgRegularize_h0843a2b9_0_0)))))) 
                                    << 2U) | (((IData)(__VdfgRegularize_hf246a9bd_1_16) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.block3__DOT__cin))));
    vlSelfRef.block0__DOT__block0__DOT__cin = (1U & (IData)(vlSelfRef.block0__DOT__c));
    vlSelfRef.block0__DOT__block1__DOT__cin = (1U & 
                                               ((IData)(vlSelfRef.block0__DOT__c) 
                                                >> 1U));
    vlSelfRef.block0__DOT__block2__DOT__cin = (1U & 
                                               ((IData)(vlSelfRef.block0__DOT__c) 
                                                >> 2U));
    vlSelfRef.block0__DOT__block3__DOT__cin = (1U & 
                                               ((IData)(vlSelfRef.block0__DOT__c) 
                                                >> 3U));
    vlSelfRef.block1__DOT__block0__DOT__cin = (1U & (IData)(vlSelfRef.block1__DOT__c));
    vlSelfRef.block1__DOT__block1__DOT__cin = (1U & 
                                               ((IData)(vlSelfRef.block1__DOT__c) 
                                                >> 1U));
    vlSelfRef.block1__DOT__block2__DOT__cin = (1U & 
                                               ((IData)(vlSelfRef.block1__DOT__c) 
                                                >> 2U));
    vlSelfRef.block1__DOT__block3__DOT__cin = (1U & 
                                               ((IData)(vlSelfRef.block1__DOT__c) 
                                                >> 3U));
    vlSelfRef.block2__DOT__block0__DOT__cin = (1U & (IData)(vlSelfRef.block2__DOT__c));
    vlSelfRef.block2__DOT__block1__DOT__cin = (1U & 
                                               ((IData)(vlSelfRef.block2__DOT__c) 
                                                >> 1U));
    vlSelfRef.block2__DOT__block2__DOT__cin = (1U & 
                                               ((IData)(vlSelfRef.block2__DOT__c) 
                                                >> 2U));
    vlSelfRef.block2__DOT__block3__DOT__cin = (1U & 
                                               ((IData)(vlSelfRef.block2__DOT__c) 
                                                >> 3U));
    vlSelfRef.block3__DOT__block0__DOT__cin = (1U & (IData)(vlSelfRef.block3__DOT__c));
    vlSelfRef.block3__DOT__block1__DOT__cin = (1U & 
                                               ((IData)(vlSelfRef.block3__DOT__c) 
                                                >> 1U));
    vlSelfRef.block3__DOT__block2__DOT__cin = (1U & 
                                               ((IData)(vlSelfRef.block3__DOT__c) 
                                                >> 2U));
    vlSelfRef.block3__DOT__block3__DOT__cin = (1U & 
                                               ((IData)(vlSelfRef.block3__DOT__c) 
                                                >> 3U));
    block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block0__DOT__block0__DOT__p) 
           & (IData)(vlSelfRef.block0__DOT__block0__DOT__cin));
    block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block0__DOT__block1__DOT__p) 
           & (IData)(vlSelfRef.block0__DOT__block1__DOT__cin));
    block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block0__DOT__block2__DOT__p) 
           & (IData)(vlSelfRef.block0__DOT__block2__DOT__cin));
    block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block0__DOT__block3__DOT__p) 
           & (IData)(vlSelfRef.block0__DOT__block3__DOT__cin));
    block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block1__DOT__block0__DOT__p) 
           & (IData)(vlSelfRef.block1__DOT__block0__DOT__cin));
    block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block1__DOT__block1__DOT__p) 
           & (IData)(vlSelfRef.block1__DOT__block1__DOT__cin));
    block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block1__DOT__block2__DOT__p) 
           & (IData)(vlSelfRef.block1__DOT__block2__DOT__cin));
    block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block1__DOT__block3__DOT__p) 
           & (IData)(vlSelfRef.block1__DOT__block3__DOT__cin));
    block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block2__DOT__block0__DOT__p) 
           & (IData)(vlSelfRef.block2__DOT__block0__DOT__cin));
    block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block2__DOT__block1__DOT__p) 
           & (IData)(vlSelfRef.block2__DOT__block1__DOT__cin));
    block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block2__DOT__block2__DOT__p) 
           & (IData)(vlSelfRef.block2__DOT__block2__DOT__cin));
    block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block2__DOT__block3__DOT__p) 
           & (IData)(vlSelfRef.block2__DOT__block3__DOT__cin));
    block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block3__DOT__block0__DOT__p) 
           & (IData)(vlSelfRef.block3__DOT__block0__DOT__cin));
    block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block3__DOT__block1__DOT__p) 
           & (IData)(vlSelfRef.block3__DOT__block1__DOT__cin));
    block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block3__DOT__block2__DOT__p) 
           & (IData)(vlSelfRef.block3__DOT__block2__DOT__cin));
    block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block3__DOT__block3__DOT__p) 
           & (IData)(vlSelfRef.block3__DOT__block3__DOT__cin));
    __VdfgRegularize_hf246a9bd_1_2 = (1U & ((IData)(vlSelfRef.block0__DOT__block0__DOT__g) 
                                            | (IData)(block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_3 = (1U & ((IData)(vlSelfRef.block0__DOT__block1__DOT__g) 
                                            | (IData)(block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_4 = (1U & ((IData)(vlSelfRef.block0__DOT__block2__DOT__g) 
                                            | (IData)(block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_5 = (1U & ((IData)(vlSelfRef.block0__DOT__block3__DOT__g) 
                                            | (IData)(block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_7 = (1U & ((IData)(vlSelfRef.block1__DOT__block0__DOT__g) 
                                            | (IData)(block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_8 = (1U & ((IData)(vlSelfRef.block1__DOT__block1__DOT__g) 
                                            | (IData)(block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_9 = (1U & ((IData)(vlSelfRef.block1__DOT__block2__DOT__g) 
                                            | (IData)(block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_10 = (1U & ((IData)(vlSelfRef.block1__DOT__block3__DOT__g) 
                                             | (IData)(block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_12 = (1U & ((IData)(vlSelfRef.block2__DOT__block0__DOT__g) 
                                             | (IData)(block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_13 = (1U & ((IData)(vlSelfRef.block2__DOT__block1__DOT__g) 
                                             | (IData)(block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_14 = (1U & ((IData)(vlSelfRef.block2__DOT__block2__DOT__g) 
                                             | (IData)(block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_15 = (1U & ((IData)(vlSelfRef.block2__DOT__block3__DOT__g) 
                                             | (IData)(block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_17 = (1U & ((IData)(vlSelfRef.block3__DOT__block0__DOT__g) 
                                             | (IData)(block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_18 = (1U & ((IData)(vlSelfRef.block3__DOT__block1__DOT__g) 
                                             | (IData)(block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_19 = (1U & ((IData)(vlSelfRef.block3__DOT__block2__DOT__g) 
                                             | (IData)(block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_20 = (1U & ((IData)(vlSelfRef.block3__DOT__block3__DOT__g) 
                                             | (IData)(block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_h6e95ff9d_0_23 = (1U & (((IData)(vlSelfRef.block0__DOT__block0__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block0__DOT__block0__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_2))));
    __VdfgRegularize_h6e95ff9d_0_24 = (1U & (((IData)(vlSelfRef.block0__DOT__block1__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block0__DOT__block1__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_3))));
    __VdfgRegularize_h6e95ff9d_0_25 = (1U & (((IData)(vlSelfRef.block0__DOT__block2__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block0__DOT__block2__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_4))));
    __VdfgRegularize_h6e95ff9d_0_26 = (1U & (((IData)(vlSelfRef.block0__DOT__block3__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block0__DOT__block3__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_5))));
    __VdfgRegularize_h6e95ff9d_0_27 = (1U & (((IData)(vlSelfRef.block1__DOT__block0__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block1__DOT__block0__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_7))));
    __VdfgRegularize_h6e95ff9d_0_28 = (1U & (((IData)(vlSelfRef.block1__DOT__block1__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block1__DOT__block1__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_8))));
    __VdfgRegularize_h6e95ff9d_0_29 = (1U & (((IData)(vlSelfRef.block1__DOT__block2__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block1__DOT__block2__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_9))));
    __VdfgRegularize_h6e95ff9d_0_30 = (1U & (((IData)(vlSelfRef.block1__DOT__block3__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block1__DOT__block3__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_10))));
    __VdfgRegularize_h6e95ff9d_0_31 = (1U & (((IData)(vlSelfRef.block2__DOT__block0__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block2__DOT__block0__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_12))));
    __VdfgRegularize_h6e95ff9d_0_32 = (1U & (((IData)(vlSelfRef.block2__DOT__block1__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block2__DOT__block1__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_13))));
    __VdfgRegularize_h6e95ff9d_0_33 = (1U & (((IData)(vlSelfRef.block2__DOT__block2__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block2__DOT__block2__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_14))));
    __VdfgRegularize_h6e95ff9d_0_34 = (1U & (((IData)(vlSelfRef.block2__DOT__block3__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block2__DOT__block3__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_15))));
    __VdfgRegularize_h6e95ff9d_0_35 = (1U & (((IData)(vlSelfRef.block3__DOT__block0__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block3__DOT__block0__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_17))));
    __VdfgRegularize_h6e95ff9d_0_36 = (1U & (((IData)(vlSelfRef.block3__DOT__block1__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block3__DOT__block1__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_18))));
    __VdfgRegularize_h6e95ff9d_0_37 = (1U & (((IData)(vlSelfRef.block3__DOT__block2__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block3__DOT__block2__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_19))));
    __VdfgRegularize_h6e95ff9d_0_38 = (1U & (((IData)(vlSelfRef.block3__DOT__block3__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block3__DOT__block3__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_20))));
    vlSelfRef.block0__DOT__block0__DOT__c = (((((IData)(block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block0__DOT__block0__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block0__DOT__block0__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_23) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_23)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_2) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block0__DOT__block0__DOT__cin)));
    vlSelfRef.block0__DOT__block1__DOT__c = (((((IData)(block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block0__DOT__block1__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block0__DOT__block1__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_24) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_24)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_3) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block0__DOT__block1__DOT__cin)));
    vlSelfRef.block0__DOT__block2__DOT__c = (((((IData)(block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block0__DOT__block2__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block0__DOT__block2__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_25) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_25)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_4) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block0__DOT__block2__DOT__cin)));
    vlSelfRef.block0__DOT__block3__DOT__c = (((((IData)(block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block0__DOT__block3__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block0__DOT__block3__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_26) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_26)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_5) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block0__DOT__block3__DOT__cin)));
    vlSelfRef.block1__DOT__block0__DOT__c = (((((IData)(block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block1__DOT__block0__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block1__DOT__block0__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_27) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_27)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_7) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block1__DOT__block0__DOT__cin)));
    vlSelfRef.block1__DOT__block1__DOT__c = (((((IData)(block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block1__DOT__block1__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block1__DOT__block1__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_28) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_28)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_8) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block1__DOT__block1__DOT__cin)));
    vlSelfRef.block1__DOT__block2__DOT__c = (((((IData)(block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block1__DOT__block2__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block1__DOT__block2__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_29) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_29)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_9) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block1__DOT__block2__DOT__cin)));
    vlSelfRef.block1__DOT__block3__DOT__c = (((((IData)(block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block1__DOT__block3__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block1__DOT__block3__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_30) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_30)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_10) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block1__DOT__block3__DOT__cin)));
    vlSelfRef.block2__DOT__block0__DOT__c = (((((IData)(block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block2__DOT__block0__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block2__DOT__block0__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_31) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_31)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_12) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block2__DOT__block0__DOT__cin)));
    vlSelfRef.block2__DOT__block1__DOT__c = (((((IData)(block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block2__DOT__block1__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block2__DOT__block1__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_32) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_32)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_13) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block2__DOT__block1__DOT__cin)));
    vlSelfRef.block2__DOT__block2__DOT__c = (((((IData)(block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block2__DOT__block2__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block2__DOT__block2__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_33) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_33)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_14) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block2__DOT__block2__DOT__cin)));
    vlSelfRef.block2__DOT__block3__DOT__c = (((((IData)(block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block2__DOT__block3__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block2__DOT__block3__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_34) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_34)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_15) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block2__DOT__block3__DOT__cin)));
    vlSelfRef.block3__DOT__block0__DOT__c = (((((IData)(block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block3__DOT__block0__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block3__DOT__block0__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_35) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_35)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_17) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block3__DOT__block0__DOT__cin)));
    vlSelfRef.block3__DOT__block1__DOT__c = (((((IData)(block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block3__DOT__block1__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block3__DOT__block1__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_36) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_36)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_18) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block3__DOT__block1__DOT__cin)));
    vlSelfRef.block3__DOT__block2__DOT__c = (((((IData)(block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block3__DOT__block2__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block3__DOT__block2__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_37) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_37)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_19) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block3__DOT__block2__DOT__cin)));
    vlSelfRef.block3__DOT__block3__DOT__c = (((((IData)(block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block3__DOT__block3__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block3__DOT__block3__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_38) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_38)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_20) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block3__DOT__block3__DOT__cin)));
    vlSelfRef.block0__DOT__block0__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block0__DOT__block0__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block0__DOT__block0__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block0__DOT__block0__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block0__DOT__block0__DOT__c)));
    vlSelfRef.block0__DOT__block1__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block0__DOT__block1__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block0__DOT__block1__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block0__DOT__block1__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block0__DOT__block1__DOT__c)));
    vlSelfRef.block0__DOT__block2__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block0__DOT__block2__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block0__DOT__block2__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block0__DOT__block2__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block0__DOT__block2__DOT__c)));
    vlSelfRef.block0__DOT__block3__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block0__DOT__block3__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block0__DOT__block3__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block0__DOT__block3__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block0__DOT__block3__DOT__c)));
    vlSelfRef.block1__DOT__block0__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block1__DOT__block0__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block1__DOT__block0__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block1__DOT__block0__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block1__DOT__block0__DOT__c)));
    vlSelfRef.block1__DOT__block1__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block1__DOT__block1__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block1__DOT__block1__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block1__DOT__block1__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block1__DOT__block1__DOT__c)));
    vlSelfRef.block1__DOT__block2__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block1__DOT__block2__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block1__DOT__block2__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block1__DOT__block2__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block1__DOT__block2__DOT__c)));
    vlSelfRef.block1__DOT__block3__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block1__DOT__block3__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block1__DOT__block3__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block1__DOT__block3__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block1__DOT__block3__DOT__c)));
    vlSelfRef.block2__DOT__block0__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block2__DOT__block0__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block2__DOT__block0__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block2__DOT__block0__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block2__DOT__block0__DOT__c)));
    vlSelfRef.block2__DOT__block1__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block2__DOT__block1__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block2__DOT__block1__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block2__DOT__block1__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block2__DOT__block1__DOT__c)));
    vlSelfRef.block2__DOT__block2__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block2__DOT__block2__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block2__DOT__block2__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block2__DOT__block2__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block2__DOT__block2__DOT__c)));
    vlSelfRef.block2__DOT__block3__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block2__DOT__block3__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block2__DOT__block3__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block2__DOT__block3__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block2__DOT__block3__DOT__c)));
    vlSelfRef.block3__DOT__block0__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block3__DOT__block0__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block3__DOT__block0__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block3__DOT__block0__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block3__DOT__block0__DOT__c)));
    vlSelfRef.block3__DOT__block1__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block3__DOT__block1__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block3__DOT__block1__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block3__DOT__block1__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block3__DOT__block1__DOT__c)));
    vlSelfRef.block3__DOT__block2__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block3__DOT__block2__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block3__DOT__block2__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block3__DOT__block2__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block3__DOT__block2__DOT__c)));
    vlSelfRef.block3__DOT__block3__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block3__DOT__block3__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block3__DOT__block3__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block3__DOT__block3__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block3__DOT__block3__DOT__c)));
    vlSelfRef.block0__DOT__c3_from_last = vlSelfRef.block0__DOT__block3__DOT__c3_out;
    vlSelfRef.block0__DOT__sum = ((((IData)(vlSelfRef.block0__DOT__block3__DOT__sum) 
                                    << 0x0000000cU) 
                                   | ((IData)(vlSelfRef.block0__DOT__block2__DOT__sum) 
                                      << 8U)) | (((IData)(vlSelfRef.block0__DOT__block1__DOT__sum) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.block0__DOT__block0__DOT__sum)));
    vlSelfRef.block1__DOT__c3_from_last = vlSelfRef.block1__DOT__block3__DOT__c3_out;
    vlSelfRef.block1__DOT__sum = ((((IData)(vlSelfRef.block1__DOT__block3__DOT__sum) 
                                    << 0x0000000cU) 
                                   | ((IData)(vlSelfRef.block1__DOT__block2__DOT__sum) 
                                      << 8U)) | (((IData)(vlSelfRef.block1__DOT__block1__DOT__sum) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.block1__DOT__block0__DOT__sum)));
    vlSelfRef.block2__DOT__c3_from_last = vlSelfRef.block2__DOT__block3__DOT__c3_out;
    vlSelfRef.block2__DOT__sum = ((((IData)(vlSelfRef.block2__DOT__block3__DOT__sum) 
                                    << 0x0000000cU) 
                                   | ((IData)(vlSelfRef.block2__DOT__block2__DOT__sum) 
                                      << 8U)) | (((IData)(vlSelfRef.block2__DOT__block1__DOT__sum) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.block2__DOT__block0__DOT__sum)));
    vlSelfRef.block3__DOT__c3_from_last = vlSelfRef.block3__DOT__block3__DOT__c3_out;
    vlSelfRef.block3__DOT__sum = ((((IData)(vlSelfRef.block3__DOT__block3__DOT__sum) 
                                    << 0x0000000cU) 
                                   | ((IData)(vlSelfRef.block3__DOT__block2__DOT__sum) 
                                      << 8U)) | (((IData)(vlSelfRef.block3__DOT__block1__DOT__sum) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.block3__DOT__block0__DOT__sum)));
    vlSelfRef.block0__DOT__c15_out = vlSelfRef.block0__DOT__c3_from_last;
    vlSelfRef.block1__DOT__c15_out = vlSelfRef.block1__DOT__c3_from_last;
    vlSelfRef.block2__DOT__c15_out = vlSelfRef.block2__DOT__c3_from_last;
    vlSelfRef.block3__DOT__c15_out = vlSelfRef.block3__DOT__c3_from_last;
    vlSelfRef.sum = (((QData)((IData)((((IData)(vlSelfRef.block3__DOT__sum) 
                                        << 0x00000010U) 
                                       | (IData)(vlSelfRef.block2__DOT__sum)))) 
                      << 0x00000020U) | (QData)((IData)(
                                                        (((IData)(vlSelfRef.block1__DOT__sum) 
                                                          << 0x00000010U) 
                                                         | (IData)(vlSelfRef.block0__DOT__sum)))));
    vlSelfRef.c63_from_last = vlSelfRef.block3__DOT__c15_out;
    vlSelfRef.carry_into_msb = vlSelfRef.c63_from_last;
}

void Vtop_cla_64b___ico_sequent__TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst__0(Vtop_cla_64b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_cla_64b___ico_sequent__TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_0_1;
    __VdfgRegularize_hf246a9bd_0_1 = 0;
    CData/*0:0*/ block0__DOT____VdfgRegularize_h0843a2b9_0_0;
    block0__DOT____VdfgRegularize_h0843a2b9_0_0 = 0;
    CData/*0:0*/ block0__DOT____VdfgRegularize_h0843a2b9_0_1;
    block0__DOT____VdfgRegularize_h0843a2b9_0_1 = 0;
    CData/*0:0*/ block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0;
    block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2;
    block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3;
    block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4;
    block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0;
    block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2;
    block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3;
    block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4;
    block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0;
    block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2;
    block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3;
    block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4;
    block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0;
    block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2;
    block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3;
    block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4;
    block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block1__DOT____VdfgRegularize_h0843a2b9_0_0;
    block1__DOT____VdfgRegularize_h0843a2b9_0_0 = 0;
    CData/*0:0*/ block1__DOT____VdfgRegularize_h0843a2b9_0_1;
    block1__DOT____VdfgRegularize_h0843a2b9_0_1 = 0;
    CData/*0:0*/ block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0;
    block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2;
    block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3;
    block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4;
    block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0;
    block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2;
    block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3;
    block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4;
    block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0;
    block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2;
    block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3;
    block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4;
    block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0;
    block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2;
    block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3;
    block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4;
    block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block2__DOT____VdfgRegularize_h0843a2b9_0_0;
    block2__DOT____VdfgRegularize_h0843a2b9_0_0 = 0;
    CData/*0:0*/ block2__DOT____VdfgRegularize_h0843a2b9_0_1;
    block2__DOT____VdfgRegularize_h0843a2b9_0_1 = 0;
    CData/*0:0*/ block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0;
    block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2;
    block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3;
    block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4;
    block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0;
    block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2;
    block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3;
    block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4;
    block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0;
    block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2;
    block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3;
    block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4;
    block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0;
    block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2;
    block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3;
    block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4;
    block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block3__DOT____VdfgRegularize_h0843a2b9_0_0;
    block3__DOT____VdfgRegularize_h0843a2b9_0_0 = 0;
    CData/*0:0*/ block3__DOT____VdfgRegularize_h0843a2b9_0_1;
    block3__DOT____VdfgRegularize_h0843a2b9_0_1 = 0;
    CData/*0:0*/ block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0;
    block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2;
    block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3;
    block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4;
    block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0;
    block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2;
    block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3;
    block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4;
    block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0;
    block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2;
    block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3;
    block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4;
    block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0;
    block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0 = 0;
    CData/*0:0*/ block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2;
    block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2 = 0;
    CData/*0:0*/ block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3;
    block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3 = 0;
    CData/*0:0*/ block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4;
    block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_1;
    __VdfgRegularize_hf246a9bd_1_1 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_2;
    __VdfgRegularize_hf246a9bd_1_2 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_3;
    __VdfgRegularize_hf246a9bd_1_3 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_4;
    __VdfgRegularize_hf246a9bd_1_4 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_5;
    __VdfgRegularize_hf246a9bd_1_5 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_6;
    __VdfgRegularize_hf246a9bd_1_6 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_7;
    __VdfgRegularize_hf246a9bd_1_7 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_8;
    __VdfgRegularize_hf246a9bd_1_8 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_9;
    __VdfgRegularize_hf246a9bd_1_9 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_10;
    __VdfgRegularize_hf246a9bd_1_10 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_11;
    __VdfgRegularize_hf246a9bd_1_11 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_12;
    __VdfgRegularize_hf246a9bd_1_12 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_13;
    __VdfgRegularize_hf246a9bd_1_13 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_14;
    __VdfgRegularize_hf246a9bd_1_14 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_15;
    __VdfgRegularize_hf246a9bd_1_15 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_16;
    __VdfgRegularize_hf246a9bd_1_16 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_17;
    __VdfgRegularize_hf246a9bd_1_17 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_18;
    __VdfgRegularize_hf246a9bd_1_18 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_19;
    __VdfgRegularize_hf246a9bd_1_19 = 0;
    CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_20;
    __VdfgRegularize_hf246a9bd_1_20 = 0;
    SData/*8:0*/ __Vtableidx41;
    __Vtableidx41 = 0;
    SData/*9:0*/ __Vtableidx42;
    __Vtableidx42 = 0;
    SData/*9:0*/ __Vtableidx43;
    __Vtableidx43 = 0;
    SData/*9:0*/ __Vtableidx44;
    __Vtableidx44 = 0;
    SData/*9:0*/ __Vtableidx45;
    __Vtableidx45 = 0;
    SData/*8:0*/ __Vtableidx46;
    __Vtableidx46 = 0;
    SData/*9:0*/ __Vtableidx47;
    __Vtableidx47 = 0;
    SData/*9:0*/ __Vtableidx48;
    __Vtableidx48 = 0;
    SData/*9:0*/ __Vtableidx49;
    __Vtableidx49 = 0;
    SData/*9:0*/ __Vtableidx50;
    __Vtableidx50 = 0;
    SData/*8:0*/ __Vtableidx51;
    __Vtableidx51 = 0;
    SData/*9:0*/ __Vtableidx52;
    __Vtableidx52 = 0;
    SData/*9:0*/ __Vtableidx53;
    __Vtableidx53 = 0;
    SData/*9:0*/ __Vtableidx54;
    __Vtableidx54 = 0;
    SData/*9:0*/ __Vtableidx55;
    __Vtableidx55 = 0;
    SData/*8:0*/ __Vtableidx56;
    __Vtableidx56 = 0;
    SData/*9:0*/ __Vtableidx57;
    __Vtableidx57 = 0;
    SData/*9:0*/ __Vtableidx58;
    __Vtableidx58 = 0;
    SData/*9:0*/ __Vtableidx59;
    __Vtableidx59 = 0;
    SData/*9:0*/ __Vtableidx60;
    __Vtableidx60 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_39;
    __VdfgRegularize_h6e95ff9d_0_39 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_40;
    __VdfgRegularize_h6e95ff9d_0_40 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_41;
    __VdfgRegularize_h6e95ff9d_0_41 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_42;
    __VdfgRegularize_h6e95ff9d_0_42 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_43;
    __VdfgRegularize_h6e95ff9d_0_43 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_44;
    __VdfgRegularize_h6e95ff9d_0_44 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_45;
    __VdfgRegularize_h6e95ff9d_0_45 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_46;
    __VdfgRegularize_h6e95ff9d_0_46 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_47;
    __VdfgRegularize_h6e95ff9d_0_47 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_48;
    __VdfgRegularize_h6e95ff9d_0_48 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_49;
    __VdfgRegularize_h6e95ff9d_0_49 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_50;
    __VdfgRegularize_h6e95ff9d_0_50 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_51;
    __VdfgRegularize_h6e95ff9d_0_51 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_52;
    __VdfgRegularize_h6e95ff9d_0_52 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_53;
    __VdfgRegularize_h6e95ff9d_0_53 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_54;
    __VdfgRegularize_h6e95ff9d_0_54 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_55;
    __VdfgRegularize_h6e95ff9d_0_55 = 0;
    // Body
    vlSelfRef.a = vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__pc_current;
    vlSelfRef.b = vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__offset;
    vlSelfRef.block0__DOT__a = (0x0000ffffU & (IData)(vlSelfRef.a));
    vlSelfRef.block1__DOT__a = (0x0000ffffU & (IData)(
                                                      (vlSelfRef.a 
                                                       >> 0x00000010U)));
    vlSelfRef.block2__DOT__a = (0x0000ffffU & (IData)(
                                                      (vlSelfRef.a 
                                                       >> 0x00000020U)));
    vlSelfRef.block3__DOT__a = (0x0000ffffU & (IData)(
                                                      (vlSelfRef.a 
                                                       >> 0x00000030U)));
    vlSelfRef.block0__DOT__b = (0x0000ffffU & (IData)(vlSelfRef.b));
    vlSelfRef.block1__DOT__b = (0x0000ffffU & (IData)(
                                                      (vlSelfRef.b 
                                                       >> 0x00000010U)));
    vlSelfRef.block2__DOT__b = (0x0000ffffU & (IData)(
                                                      (vlSelfRef.b 
                                                       >> 0x00000020U)));
    vlSelfRef.block3__DOT__b = (0x0000ffffU & (IData)(
                                                      (vlSelfRef.b 
                                                       >> 0x00000030U)));
    vlSelfRef.block0__DOT__block0__DOT__a = (0x0000000fU 
                                             & (IData)(vlSelfRef.block0__DOT__a));
    vlSelfRef.block0__DOT__block1__DOT__a = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block0__DOT__a) 
                                                >> 4U));
    vlSelfRef.block0__DOT__block2__DOT__a = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block0__DOT__a) 
                                                >> 8U));
    vlSelfRef.block0__DOT__block3__DOT__a = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block0__DOT__a) 
                                                >> 0x0000000cU));
    vlSelfRef.block1__DOT__block0__DOT__a = (0x0000000fU 
                                             & (IData)(vlSelfRef.block1__DOT__a));
    vlSelfRef.block1__DOT__block1__DOT__a = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block1__DOT__a) 
                                                >> 4U));
    vlSelfRef.block1__DOT__block2__DOT__a = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block1__DOT__a) 
                                                >> 8U));
    vlSelfRef.block1__DOT__block3__DOT__a = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block1__DOT__a) 
                                                >> 0x0000000cU));
    vlSelfRef.block2__DOT__block0__DOT__a = (0x0000000fU 
                                             & (IData)(vlSelfRef.block2__DOT__a));
    vlSelfRef.block2__DOT__block1__DOT__a = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block2__DOT__a) 
                                                >> 4U));
    vlSelfRef.block2__DOT__block2__DOT__a = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block2__DOT__a) 
                                                >> 8U));
    vlSelfRef.block2__DOT__block3__DOT__a = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block2__DOT__a) 
                                                >> 0x0000000cU));
    vlSelfRef.block3__DOT__block0__DOT__a = (0x0000000fU 
                                             & (IData)(vlSelfRef.block3__DOT__a));
    vlSelfRef.block3__DOT__block1__DOT__a = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block3__DOT__a) 
                                                >> 4U));
    vlSelfRef.block3__DOT__block2__DOT__a = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block3__DOT__a) 
                                                >> 8U));
    vlSelfRef.block3__DOT__block3__DOT__a = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block3__DOT__a) 
                                                >> 0x0000000cU));
    vlSelfRef.block0__DOT__block0__DOT__b = (0x0000000fU 
                                             & (IData)(vlSelfRef.block0__DOT__b));
    vlSelfRef.block0__DOT__block1__DOT__b = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block0__DOT__b) 
                                                >> 4U));
    vlSelfRef.block0__DOT__block2__DOT__b = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block0__DOT__b) 
                                                >> 8U));
    vlSelfRef.block0__DOT__block3__DOT__b = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block0__DOT__b) 
                                                >> 0x0000000cU));
    vlSelfRef.block1__DOT__block0__DOT__b = (0x0000000fU 
                                             & (IData)(vlSelfRef.block1__DOT__b));
    vlSelfRef.block1__DOT__block1__DOT__b = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block1__DOT__b) 
                                                >> 4U));
    vlSelfRef.block1__DOT__block2__DOT__b = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block1__DOT__b) 
                                                >> 8U));
    vlSelfRef.block1__DOT__block3__DOT__b = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block1__DOT__b) 
                                                >> 0x0000000cU));
    vlSelfRef.block2__DOT__block0__DOT__b = (0x0000000fU 
                                             & (IData)(vlSelfRef.block2__DOT__b));
    vlSelfRef.block2__DOT__block1__DOT__b = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block2__DOT__b) 
                                                >> 4U));
    vlSelfRef.block2__DOT__block2__DOT__b = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block2__DOT__b) 
                                                >> 8U));
    vlSelfRef.block2__DOT__block3__DOT__b = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block2__DOT__b) 
                                                >> 0x0000000cU));
    vlSelfRef.block3__DOT__block0__DOT__b = (0x0000000fU 
                                             & (IData)(vlSelfRef.block3__DOT__b));
    vlSelfRef.block3__DOT__block1__DOT__b = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block3__DOT__b) 
                                                >> 4U));
    vlSelfRef.block3__DOT__block2__DOT__b = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block3__DOT__b) 
                                                >> 8U));
    vlSelfRef.block3__DOT__block3__DOT__b = (0x0000000fU 
                                             & ((IData)(vlSelfRef.block3__DOT__b) 
                                                >> 0x0000000cU));
    vlSelfRef.block0__DOT__block0__DOT__g = ((IData)(vlSelfRef.block0__DOT__block0__DOT__a) 
                                             & (IData)(vlSelfRef.block0__DOT__block0__DOT__b));
    vlSelfRef.block0__DOT__block0__DOT__p = ((IData)(vlSelfRef.block0__DOT__block0__DOT__a) 
                                             ^ (IData)(vlSelfRef.block0__DOT__block0__DOT__b));
    vlSelfRef.block0__DOT__block1__DOT__g = ((IData)(vlSelfRef.block0__DOT__block1__DOT__a) 
                                             & (IData)(vlSelfRef.block0__DOT__block1__DOT__b));
    vlSelfRef.block0__DOT__block1__DOT__p = ((IData)(vlSelfRef.block0__DOT__block1__DOT__a) 
                                             ^ (IData)(vlSelfRef.block0__DOT__block1__DOT__b));
    vlSelfRef.block0__DOT__block2__DOT__g = ((IData)(vlSelfRef.block0__DOT__block2__DOT__a) 
                                             & (IData)(vlSelfRef.block0__DOT__block2__DOT__b));
    vlSelfRef.block0__DOT__block2__DOT__p = ((IData)(vlSelfRef.block0__DOT__block2__DOT__a) 
                                             ^ (IData)(vlSelfRef.block0__DOT__block2__DOT__b));
    vlSelfRef.block0__DOT__block3__DOT__g = ((IData)(vlSelfRef.block0__DOT__block3__DOT__a) 
                                             & (IData)(vlSelfRef.block0__DOT__block3__DOT__b));
    vlSelfRef.block0__DOT__block3__DOT__p = ((IData)(vlSelfRef.block0__DOT__block3__DOT__a) 
                                             ^ (IData)(vlSelfRef.block0__DOT__block3__DOT__b));
    vlSelfRef.block1__DOT__block0__DOT__g = ((IData)(vlSelfRef.block1__DOT__block0__DOT__a) 
                                             & (IData)(vlSelfRef.block1__DOT__block0__DOT__b));
    vlSelfRef.block1__DOT__block0__DOT__p = ((IData)(vlSelfRef.block1__DOT__block0__DOT__a) 
                                             ^ (IData)(vlSelfRef.block1__DOT__block0__DOT__b));
    vlSelfRef.block1__DOT__block1__DOT__g = ((IData)(vlSelfRef.block1__DOT__block1__DOT__a) 
                                             & (IData)(vlSelfRef.block1__DOT__block1__DOT__b));
    vlSelfRef.block1__DOT__block1__DOT__p = ((IData)(vlSelfRef.block1__DOT__block1__DOT__a) 
                                             ^ (IData)(vlSelfRef.block1__DOT__block1__DOT__b));
    vlSelfRef.block1__DOT__block2__DOT__g = ((IData)(vlSelfRef.block1__DOT__block2__DOT__a) 
                                             & (IData)(vlSelfRef.block1__DOT__block2__DOT__b));
    vlSelfRef.block1__DOT__block2__DOT__p = ((IData)(vlSelfRef.block1__DOT__block2__DOT__a) 
                                             ^ (IData)(vlSelfRef.block1__DOT__block2__DOT__b));
    vlSelfRef.block1__DOT__block3__DOT__g = ((IData)(vlSelfRef.block1__DOT__block3__DOT__a) 
                                             & (IData)(vlSelfRef.block1__DOT__block3__DOT__b));
    vlSelfRef.block1__DOT__block3__DOT__p = ((IData)(vlSelfRef.block1__DOT__block3__DOT__a) 
                                             ^ (IData)(vlSelfRef.block1__DOT__block3__DOT__b));
    vlSelfRef.block2__DOT__block0__DOT__g = ((IData)(vlSelfRef.block2__DOT__block0__DOT__a) 
                                             & (IData)(vlSelfRef.block2__DOT__block0__DOT__b));
    vlSelfRef.block2__DOT__block0__DOT__p = ((IData)(vlSelfRef.block2__DOT__block0__DOT__a) 
                                             ^ (IData)(vlSelfRef.block2__DOT__block0__DOT__b));
    vlSelfRef.block2__DOT__block1__DOT__g = ((IData)(vlSelfRef.block2__DOT__block1__DOT__a) 
                                             & (IData)(vlSelfRef.block2__DOT__block1__DOT__b));
    vlSelfRef.block2__DOT__block1__DOT__p = ((IData)(vlSelfRef.block2__DOT__block1__DOT__a) 
                                             ^ (IData)(vlSelfRef.block2__DOT__block1__DOT__b));
    vlSelfRef.block2__DOT__block2__DOT__g = ((IData)(vlSelfRef.block2__DOT__block2__DOT__a) 
                                             & (IData)(vlSelfRef.block2__DOT__block2__DOT__b));
    vlSelfRef.block2__DOT__block2__DOT__p = ((IData)(vlSelfRef.block2__DOT__block2__DOT__a) 
                                             ^ (IData)(vlSelfRef.block2__DOT__block2__DOT__b));
    vlSelfRef.block2__DOT__block3__DOT__g = ((IData)(vlSelfRef.block2__DOT__block3__DOT__a) 
                                             & (IData)(vlSelfRef.block2__DOT__block3__DOT__b));
    vlSelfRef.block2__DOT__block3__DOT__p = ((IData)(vlSelfRef.block2__DOT__block3__DOT__a) 
                                             ^ (IData)(vlSelfRef.block2__DOT__block3__DOT__b));
    vlSelfRef.block3__DOT__block0__DOT__g = ((IData)(vlSelfRef.block3__DOT__block0__DOT__a) 
                                             & (IData)(vlSelfRef.block3__DOT__block0__DOT__b));
    vlSelfRef.block3__DOT__block0__DOT__p = ((IData)(vlSelfRef.block3__DOT__block0__DOT__a) 
                                             ^ (IData)(vlSelfRef.block3__DOT__block0__DOT__b));
    vlSelfRef.block3__DOT__block1__DOT__g = ((IData)(vlSelfRef.block3__DOT__block1__DOT__a) 
                                             & (IData)(vlSelfRef.block3__DOT__block1__DOT__b));
    vlSelfRef.block3__DOT__block1__DOT__p = ((IData)(vlSelfRef.block3__DOT__block1__DOT__a) 
                                             ^ (IData)(vlSelfRef.block3__DOT__block1__DOT__b));
    vlSelfRef.block3__DOT__block2__DOT__g = ((IData)(vlSelfRef.block3__DOT__block2__DOT__a) 
                                             & (IData)(vlSelfRef.block3__DOT__block2__DOT__b));
    vlSelfRef.block3__DOT__block2__DOT__p = ((IData)(vlSelfRef.block3__DOT__block2__DOT__a) 
                                             ^ (IData)(vlSelfRef.block3__DOT__block2__DOT__b));
    vlSelfRef.block3__DOT__block3__DOT__g = ((IData)(vlSelfRef.block3__DOT__block3__DOT__a) 
                                             & (IData)(vlSelfRef.block3__DOT__block3__DOT__b));
    vlSelfRef.block3__DOT__block3__DOT__p = ((IData)(vlSelfRef.block3__DOT__block3__DOT__a) 
                                             ^ (IData)(vlSelfRef.block3__DOT__block3__DOT__b));
    vlSelfRef.block0__DOT__block0__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block0__DOT__block0__DOT__p)));
    block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block0__DOT__block0__DOT__p))));
    vlSelfRef.block0__DOT__block1__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block0__DOT__block1__DOT__p)));
    block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block0__DOT__block1__DOT__p))));
    vlSelfRef.block0__DOT__block2__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block0__DOT__block2__DOT__p)));
    block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block0__DOT__block2__DOT__p))));
    vlSelfRef.block0__DOT__block3__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block0__DOT__block3__DOT__p)));
    block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block0__DOT__block3__DOT__p))));
    vlSelfRef.block1__DOT__block0__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block1__DOT__block0__DOT__p)));
    block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block1__DOT__block0__DOT__p))));
    vlSelfRef.block1__DOT__block1__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block1__DOT__block1__DOT__p)));
    block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block1__DOT__block1__DOT__p))));
    vlSelfRef.block1__DOT__block2__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block1__DOT__block2__DOT__p)));
    block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block1__DOT__block2__DOT__p))));
    vlSelfRef.block1__DOT__block3__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block1__DOT__block3__DOT__p)));
    block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block1__DOT__block3__DOT__p))));
    vlSelfRef.block2__DOT__block0__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block2__DOT__block0__DOT__p)));
    block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block2__DOT__block0__DOT__p))));
    vlSelfRef.block2__DOT__block1__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block2__DOT__block1__DOT__p)));
    block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block2__DOT__block1__DOT__p))));
    vlSelfRef.block2__DOT__block2__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block2__DOT__block2__DOT__p)));
    block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block2__DOT__block2__DOT__p))));
    vlSelfRef.block2__DOT__block3__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block2__DOT__block3__DOT__p)));
    block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block2__DOT__block3__DOT__p))));
    vlSelfRef.block3__DOT__block0__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block3__DOT__block0__DOT__p)));
    block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block3__DOT__block0__DOT__p))));
    vlSelfRef.block3__DOT__block1__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block3__DOT__block1__DOT__p)));
    block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block3__DOT__block1__DOT__p))));
    vlSelfRef.block3__DOT__block2__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block3__DOT__block2__DOT__p)));
    block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block3__DOT__block2__DOT__p))));
    vlSelfRef.block3__DOT__block3__DOT__p_out = (IData)(
                                                        (0x0fU 
                                                         == (IData)(vlSelfRef.block3__DOT__block3__DOT__p)));
    block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2 
        = (IData)((0x0cU == (0x0cU & (IData)(vlSelfRef.block3__DOT__block3__DOT__p))));
    block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block0__DOT__block0__DOT__p) 
              >> 1U));
    block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block0__DOT__block1__DOT__p) 
              >> 1U));
    block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block0__DOT__block2__DOT__p) 
              >> 1U));
    vlSelfRef.block0__DOT__p = ((((IData)(vlSelfRef.block0__DOT__block3__DOT__p_out) 
                                  << 3U) | ((IData)(vlSelfRef.block0__DOT__block2__DOT__p_out) 
                                            << 2U)) 
                                | (((IData)(vlSelfRef.block0__DOT__block1__DOT__p_out) 
                                    << 1U) | (IData)(vlSelfRef.block0__DOT__block0__DOT__p_out)));
    block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block0__DOT__block3__DOT__p) 
              >> 1U));
    block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block1__DOT__block0__DOT__p) 
              >> 1U));
    block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block1__DOT__block1__DOT__p) 
              >> 1U));
    block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block1__DOT__block2__DOT__p) 
              >> 1U));
    vlSelfRef.block1__DOT__p = ((((IData)(vlSelfRef.block1__DOT__block3__DOT__p_out) 
                                  << 3U) | ((IData)(vlSelfRef.block1__DOT__block2__DOT__p_out) 
                                            << 2U)) 
                                | (((IData)(vlSelfRef.block1__DOT__block1__DOT__p_out) 
                                    << 1U) | (IData)(vlSelfRef.block1__DOT__block0__DOT__p_out)));
    block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block1__DOT__block3__DOT__p) 
              >> 1U));
    block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block2__DOT__block0__DOT__p) 
              >> 1U));
    block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block2__DOT__block1__DOT__p) 
              >> 1U));
    block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block2__DOT__block2__DOT__p) 
              >> 1U));
    vlSelfRef.block2__DOT__p = ((((IData)(vlSelfRef.block2__DOT__block3__DOT__p_out) 
                                  << 3U) | ((IData)(vlSelfRef.block2__DOT__block2__DOT__p_out) 
                                            << 2U)) 
                                | (((IData)(vlSelfRef.block2__DOT__block1__DOT__p_out) 
                                    << 1U) | (IData)(vlSelfRef.block2__DOT__block0__DOT__p_out)));
    block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block2__DOT__block3__DOT__p) 
              >> 1U));
    block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block3__DOT__block0__DOT__p) 
              >> 1U));
    block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block3__DOT__block1__DOT__p) 
              >> 1U));
    block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block3__DOT__block2__DOT__p) 
              >> 1U));
    vlSelfRef.block3__DOT__p = ((((IData)(vlSelfRef.block3__DOT__block3__DOT__p_out) 
                                  << 3U) | ((IData)(vlSelfRef.block3__DOT__block2__DOT__p_out) 
                                            << 2U)) 
                                | (((IData)(vlSelfRef.block3__DOT__block1__DOT__p_out) 
                                    << 1U) | (IData)(vlSelfRef.block3__DOT__block0__DOT__p_out)));
    block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3 
        = ((IData)(block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2) 
           & ((IData)(vlSelfRef.block3__DOT__block3__DOT__p) 
              >> 1U));
    __Vtableidx42 = ((((IData)(block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3) 
                       << 9U) | ((IData)(block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                 << 8U)) | (((IData)(vlSelfRef.block0__DOT__block0__DOT__p) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.block0__DOT__block0__DOT__g)));
    block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx42];
    __Vtableidx43 = ((((IData)(block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3) 
                       << 9U) | ((IData)(block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                 << 8U)) | (((IData)(vlSelfRef.block0__DOT__block1__DOT__p) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.block0__DOT__block1__DOT__g)));
    block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx43];
    __Vtableidx44 = ((((IData)(block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3) 
                       << 9U) | ((IData)(block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                 << 8U)) | (((IData)(vlSelfRef.block0__DOT__block2__DOT__p) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.block0__DOT__block2__DOT__g)));
    block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx44];
    vlSelfRef.block0__DOT__p_out = (IData)((0x0fU == (IData)(vlSelfRef.block0__DOT__p)));
    __Vtableidx45 = ((((IData)(block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3) 
                       << 9U) | ((IData)(block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                 << 8U)) | (((IData)(vlSelfRef.block0__DOT__block3__DOT__p) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.block0__DOT__block3__DOT__g)));
    block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx45];
    __Vtableidx47 = ((((IData)(block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3) 
                       << 9U) | ((IData)(block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                 << 8U)) | (((IData)(vlSelfRef.block1__DOT__block0__DOT__p) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.block1__DOT__block0__DOT__g)));
    block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx47];
    __Vtableidx48 = ((((IData)(block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3) 
                       << 9U) | ((IData)(block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                 << 8U)) | (((IData)(vlSelfRef.block1__DOT__block1__DOT__p) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.block1__DOT__block1__DOT__g)));
    block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx48];
    __Vtableidx49 = ((((IData)(block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3) 
                       << 9U) | ((IData)(block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                 << 8U)) | (((IData)(vlSelfRef.block1__DOT__block2__DOT__p) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.block1__DOT__block2__DOT__g)));
    block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx49];
    vlSelfRef.block1__DOT__p_out = (IData)((0x0fU == (IData)(vlSelfRef.block1__DOT__p)));
    __Vtableidx50 = ((((IData)(block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3) 
                       << 9U) | ((IData)(block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                 << 8U)) | (((IData)(vlSelfRef.block1__DOT__block3__DOT__p) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.block1__DOT__block3__DOT__g)));
    block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx50];
    __Vtableidx52 = ((((IData)(block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3) 
                       << 9U) | ((IData)(block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                 << 8U)) | (((IData)(vlSelfRef.block2__DOT__block0__DOT__p) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.block2__DOT__block0__DOT__g)));
    block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx52];
    __Vtableidx53 = ((((IData)(block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3) 
                       << 9U) | ((IData)(block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                 << 8U)) | (((IData)(vlSelfRef.block2__DOT__block1__DOT__p) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.block2__DOT__block1__DOT__g)));
    block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx53];
    __Vtableidx54 = ((((IData)(block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3) 
                       << 9U) | ((IData)(block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                 << 8U)) | (((IData)(vlSelfRef.block2__DOT__block2__DOT__p) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.block2__DOT__block2__DOT__g)));
    block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx54];
    vlSelfRef.block2__DOT__p_out = (IData)((0x0fU == (IData)(vlSelfRef.block2__DOT__p)));
    __Vtableidx55 = ((((IData)(block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3) 
                       << 9U) | ((IData)(block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                 << 8U)) | (((IData)(vlSelfRef.block2__DOT__block3__DOT__p) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.block2__DOT__block3__DOT__g)));
    block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx55];
    __Vtableidx57 = ((((IData)(block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3) 
                       << 9U) | ((IData)(block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                 << 8U)) | (((IData)(vlSelfRef.block3__DOT__block0__DOT__p) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.block3__DOT__block0__DOT__g)));
    block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx57];
    __Vtableidx58 = ((((IData)(block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3) 
                       << 9U) | ((IData)(block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                 << 8U)) | (((IData)(vlSelfRef.block3__DOT__block1__DOT__p) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.block3__DOT__block1__DOT__g)));
    block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx58];
    __Vtableidx59 = ((((IData)(block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3) 
                       << 9U) | ((IData)(block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                 << 8U)) | (((IData)(vlSelfRef.block3__DOT__block2__DOT__p) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.block3__DOT__block2__DOT__g)));
    block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx59];
    vlSelfRef.block3__DOT__p_out = (IData)((0x0fU == (IData)(vlSelfRef.block3__DOT__p)));
    __Vtableidx60 = ((((IData)(block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3) 
                       << 9U) | ((IData)(block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_2) 
                                 << 8U)) | (((IData)(vlSelfRef.block3__DOT__block3__DOT__p) 
                                             << 4U) 
                                            | (IData)(vlSelfRef.block3__DOT__block3__DOT__g)));
    block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4 
        = Vtop__ConstPool__TABLE_h349ffa8b_0[__Vtableidx60];
    vlSelfRef.block0__DOT__block0__DOT__g_out = block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block0__DOT__block1__DOT__g_out = block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block0__DOT__block2__DOT__g_out = block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block0__DOT__block3__DOT__g_out = block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block1__DOT__block0__DOT__g_out = block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block1__DOT__block1__DOT__g_out = block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block1__DOT__block2__DOT__g_out = block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block1__DOT__block3__DOT__g_out = block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block2__DOT__block0__DOT__g_out = block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block2__DOT__block1__DOT__g_out = block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block2__DOT__block2__DOT__g_out = block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block2__DOT__block3__DOT__g_out = block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block3__DOT__block0__DOT__g_out = block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block3__DOT__block1__DOT__g_out = block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block3__DOT__block2__DOT__g_out = block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.p = ((((IData)(vlSelfRef.block3__DOT__p_out) 
                     << 3U) | ((IData)(vlSelfRef.block2__DOT__p_out) 
                               << 2U)) | (((IData)(vlSelfRef.block1__DOT__p_out) 
                                           << 1U) | (IData)(vlSelfRef.block0__DOT__p_out)));
    vlSelfRef.block3__DOT__block3__DOT__g_out = block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4;
    vlSelfRef.block0__DOT__g = ((((IData)(vlSelfRef.block0__DOT__block3__DOT__g_out) 
                                  << 3U) | ((IData)(vlSelfRef.block0__DOT__block2__DOT__g_out) 
                                            << 2U)) 
                                | (((IData)(vlSelfRef.block0__DOT__block1__DOT__g_out) 
                                    << 1U) | (IData)(vlSelfRef.block0__DOT__block0__DOT__g_out)));
    vlSelfRef.block1__DOT__g = ((((IData)(vlSelfRef.block1__DOT__block3__DOT__g_out) 
                                  << 3U) | ((IData)(vlSelfRef.block1__DOT__block2__DOT__g_out) 
                                            << 2U)) 
                                | (((IData)(vlSelfRef.block1__DOT__block1__DOT__g_out) 
                                    << 1U) | (IData)(vlSelfRef.block1__DOT__block0__DOT__g_out)));
    vlSelfRef.block2__DOT__g = ((((IData)(vlSelfRef.block2__DOT__block3__DOT__g_out) 
                                  << 3U) | ((IData)(vlSelfRef.block2__DOT__block2__DOT__g_out) 
                                            << 2U)) 
                                | (((IData)(vlSelfRef.block2__DOT__block1__DOT__g_out) 
                                    << 1U) | (IData)(vlSelfRef.block2__DOT__block0__DOT__g_out)));
    vlSelfRef.block3__DOT__g = ((((IData)(vlSelfRef.block3__DOT__block3__DOT__g_out) 
                                  << 3U) | ((IData)(vlSelfRef.block3__DOT__block2__DOT__g_out) 
                                            << 2U)) 
                                | (((IData)(vlSelfRef.block3__DOT__block1__DOT__g_out) 
                                    << 1U) | (IData)(vlSelfRef.block3__DOT__block0__DOT__g_out)));
    block0__DOT____VdfgRegularize_h0843a2b9_0_1 = (1U 
                                                   & (((IData)(vlSelfRef.block0__DOT__p) 
                                                       >> 1U) 
                                                      & (IData)(vlSelfRef.block0__DOT__g)));
    block1__DOT____VdfgRegularize_h0843a2b9_0_1 = (1U 
                                                   & (((IData)(vlSelfRef.block1__DOT__p) 
                                                       >> 1U) 
                                                      & (IData)(vlSelfRef.block1__DOT__g)));
    block2__DOT____VdfgRegularize_h0843a2b9_0_1 = (1U 
                                                   & (((IData)(vlSelfRef.block2__DOT__p) 
                                                       >> 1U) 
                                                      & (IData)(vlSelfRef.block2__DOT__g)));
    block3__DOT____VdfgRegularize_h0843a2b9_0_1 = (1U 
                                                   & (((IData)(vlSelfRef.block3__DOT__p) 
                                                       >> 1U) 
                                                      & (IData)(vlSelfRef.block3__DOT__g)));
    __Vtableidx41 = (((IData)(block0__DOT____VdfgRegularize_h0843a2b9_0_1) 
                      << 8U) | (((IData)(vlSelfRef.block0__DOT__p) 
                                 << 4U) | (IData)(vlSelfRef.block0__DOT__g)));
    vlSelfRef.block0__DOT__g_out = Vtop__ConstPool__TABLE_h08c4d8a1_0
        [__Vtableidx41];
    __Vtableidx46 = (((IData)(block1__DOT____VdfgRegularize_h0843a2b9_0_1) 
                      << 8U) | (((IData)(vlSelfRef.block1__DOT__p) 
                                 << 4U) | (IData)(vlSelfRef.block1__DOT__g)));
    vlSelfRef.block1__DOT__g_out = Vtop__ConstPool__TABLE_h08c4d8a1_0
        [__Vtableidx46];
    __Vtableidx51 = (((IData)(block2__DOT____VdfgRegularize_h0843a2b9_0_1) 
                      << 8U) | (((IData)(vlSelfRef.block2__DOT__p) 
                                 << 4U) | (IData)(vlSelfRef.block2__DOT__g)));
    vlSelfRef.block2__DOT__g_out = Vtop__ConstPool__TABLE_h08c4d8a1_0
        [__Vtableidx51];
    __Vtableidx56 = (((IData)(block3__DOT____VdfgRegularize_h0843a2b9_0_1) 
                      << 8U) | (((IData)(vlSelfRef.block3__DOT__p) 
                                 << 4U) | (IData)(vlSelfRef.block3__DOT__g)));
    vlSelfRef.block3__DOT__g_out = Vtop__ConstPool__TABLE_h08c4d8a1_0
        [__Vtableidx56];
    vlSelfRef.g = ((((IData)(vlSelfRef.block3__DOT__g_out) 
                     << 3U) | ((IData)(vlSelfRef.block2__DOT__g_out) 
                               << 2U)) | (((IData)(vlSelfRef.block1__DOT__g_out) 
                                           << 1U) | (IData)(vlSelfRef.block0__DOT__g_out)));
    __VdfgRegularize_hf246a9bd_0_1 = (1U & ((IData)(vlSelfRef.g) 
                                            | ((IData)(vlSelfRef.p) 
                                               & (IData)(vlSelfRef.cin))));
    __VdfgRegularize_h6e95ff9d_0_39 = (1U & (((IData)(vlSelfRef.g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_0_1))));
    vlSelfRef.c = ((((4U & ((0x7ffffffcU & ((IData)(vlSelfRef.g) 
                                            >> 1U)) 
                            | (((((IData)(vlSelfRef.p) 
                                  >> 3U) & ((IData)(vlSelfRef.g) 
                                            >> 2U)) 
                                | (IData)(((0x0cU == 
                                            (0x0cU 
                                             & (IData)(vlSelfRef.p))) 
                                           & (IData)(__VdfgRegularize_h6e95ff9d_0_39)))) 
                               << 2U))) | ((2U & (((IData)(vlSelfRef.g) 
                                                   >> 1U) 
                                                  | (((IData)(vlSelfRef.p) 
                                                      >> 1U) 
                                                     & ((IData)(__VdfgRegularize_h6e95ff9d_0_39) 
                                                        << 1U)))) 
                                           | (IData)(__VdfgRegularize_h6e95ff9d_0_39))) 
                    << 2U) | (((IData)(__VdfgRegularize_hf246a9bd_0_1) 
                               << 1U) | (IData)(vlSelfRef.cin)));
    vlSelfRef.cout = (1U & ((IData)(vlSelfRef.c) >> 4U));
    vlSelfRef.block0__DOT__cin = (1U & (IData)(vlSelfRef.c));
    vlSelfRef.block1__DOT__cin = (1U & ((IData)(vlSelfRef.c) 
                                        >> 1U));
    vlSelfRef.block2__DOT__cin = (1U & ((IData)(vlSelfRef.c) 
                                        >> 2U));
    vlSelfRef.block3__DOT__cin = (1U & ((IData)(vlSelfRef.c) 
                                        >> 3U));
    block0__DOT____VdfgRegularize_h0843a2b9_0_0 = ((IData)(vlSelfRef.block0__DOT__p) 
                                                   & (IData)(vlSelfRef.block0__DOT__cin));
    block1__DOT____VdfgRegularize_h0843a2b9_0_0 = ((IData)(vlSelfRef.block1__DOT__p) 
                                                   & (IData)(vlSelfRef.block1__DOT__cin));
    block2__DOT____VdfgRegularize_h0843a2b9_0_0 = ((IData)(vlSelfRef.block2__DOT__p) 
                                                   & (IData)(vlSelfRef.block2__DOT__cin));
    block3__DOT____VdfgRegularize_h0843a2b9_0_0 = ((IData)(vlSelfRef.block3__DOT__p) 
                                                   & (IData)(vlSelfRef.block3__DOT__cin));
    __VdfgRegularize_hf246a9bd_1_1 = (1U & ((IData)(vlSelfRef.block0__DOT__g) 
                                            | (IData)(block0__DOT____VdfgRegularize_h0843a2b9_0_0)));
    __VdfgRegularize_hf246a9bd_1_6 = (1U & ((IData)(vlSelfRef.block1__DOT__g) 
                                            | (IData)(block1__DOT____VdfgRegularize_h0843a2b9_0_0)));
    __VdfgRegularize_hf246a9bd_1_11 = (1U & ((IData)(vlSelfRef.block2__DOT__g) 
                                             | (IData)(block2__DOT____VdfgRegularize_h0843a2b9_0_0)));
    __VdfgRegularize_hf246a9bd_1_16 = (1U & ((IData)(vlSelfRef.block3__DOT__g) 
                                             | (IData)(block3__DOT____VdfgRegularize_h0843a2b9_0_0)));
    vlSelfRef.block0__DOT__c = ((0x10U & (IData)(vlSelfRef.block0__DOT__c)) 
                                | ((((2U & (((IData)(vlSelfRef.block0__DOT__g) 
                                             >> 1U) 
                                            | (((IData)(vlSelfRef.block0__DOT__p) 
                                                >> 1U) 
                                               & ((IData)(vlSelfRef.block0__DOT__g) 
                                                  | ((IData)(vlSelfRef.block0__DOT__p) 
                                                     & ((IData)(__VdfgRegularize_hf246a9bd_1_1) 
                                                        << 1U)))))) 
                                     | (1U & (((IData)(vlSelfRef.block0__DOT__g) 
                                               >> 1U) 
                                              | ((IData)(block0__DOT____VdfgRegularize_h0843a2b9_0_1) 
                                                 | (((IData)(vlSelfRef.block0__DOT__p) 
                                                     >> 1U) 
                                                    & (IData)(block0__DOT____VdfgRegularize_h0843a2b9_0_0)))))) 
                                    << 2U) | (((IData)(__VdfgRegularize_hf246a9bd_1_1) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.block0__DOT__cin))));
    vlSelfRef.block1__DOT__c = ((0x10U & (IData)(vlSelfRef.block1__DOT__c)) 
                                | ((((2U & (((IData)(vlSelfRef.block1__DOT__g) 
                                             >> 1U) 
                                            | (((IData)(vlSelfRef.block1__DOT__p) 
                                                >> 1U) 
                                               & ((IData)(vlSelfRef.block1__DOT__g) 
                                                  | ((IData)(vlSelfRef.block1__DOT__p) 
                                                     & ((IData)(__VdfgRegularize_hf246a9bd_1_6) 
                                                        << 1U)))))) 
                                     | (1U & (((IData)(vlSelfRef.block1__DOT__g) 
                                               >> 1U) 
                                              | ((IData)(block1__DOT____VdfgRegularize_h0843a2b9_0_1) 
                                                 | (((IData)(vlSelfRef.block1__DOT__p) 
                                                     >> 1U) 
                                                    & (IData)(block1__DOT____VdfgRegularize_h0843a2b9_0_0)))))) 
                                    << 2U) | (((IData)(__VdfgRegularize_hf246a9bd_1_6) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.block1__DOT__cin))));
    vlSelfRef.block2__DOT__c = ((0x10U & (IData)(vlSelfRef.block2__DOT__c)) 
                                | ((((2U & (((IData)(vlSelfRef.block2__DOT__g) 
                                             >> 1U) 
                                            | (((IData)(vlSelfRef.block2__DOT__p) 
                                                >> 1U) 
                                               & ((IData)(vlSelfRef.block2__DOT__g) 
                                                  | ((IData)(vlSelfRef.block2__DOT__p) 
                                                     & ((IData)(__VdfgRegularize_hf246a9bd_1_11) 
                                                        << 1U)))))) 
                                     | (1U & (((IData)(vlSelfRef.block2__DOT__g) 
                                               >> 1U) 
                                              | ((IData)(block2__DOT____VdfgRegularize_h0843a2b9_0_1) 
                                                 | (((IData)(vlSelfRef.block2__DOT__p) 
                                                     >> 1U) 
                                                    & (IData)(block2__DOT____VdfgRegularize_h0843a2b9_0_0)))))) 
                                    << 2U) | (((IData)(__VdfgRegularize_hf246a9bd_1_11) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.block2__DOT__cin))));
    vlSelfRef.block3__DOT__c = ((0x10U & (IData)(vlSelfRef.block3__DOT__c)) 
                                | ((((2U & (((IData)(vlSelfRef.block3__DOT__g) 
                                             >> 1U) 
                                            | (((IData)(vlSelfRef.block3__DOT__p) 
                                                >> 1U) 
                                               & ((IData)(vlSelfRef.block3__DOT__g) 
                                                  | ((IData)(vlSelfRef.block3__DOT__p) 
                                                     & ((IData)(__VdfgRegularize_hf246a9bd_1_16) 
                                                        << 1U)))))) 
                                     | (1U & (((IData)(vlSelfRef.block3__DOT__g) 
                                               >> 1U) 
                                              | ((IData)(block3__DOT____VdfgRegularize_h0843a2b9_0_1) 
                                                 | (((IData)(vlSelfRef.block3__DOT__p) 
                                                     >> 1U) 
                                                    & (IData)(block3__DOT____VdfgRegularize_h0843a2b9_0_0)))))) 
                                    << 2U) | (((IData)(__VdfgRegularize_hf246a9bd_1_16) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.block3__DOT__cin))));
    vlSelfRef.block0__DOT__block0__DOT__cin = (1U & (IData)(vlSelfRef.block0__DOT__c));
    vlSelfRef.block0__DOT__block1__DOT__cin = (1U & 
                                               ((IData)(vlSelfRef.block0__DOT__c) 
                                                >> 1U));
    vlSelfRef.block0__DOT__block2__DOT__cin = (1U & 
                                               ((IData)(vlSelfRef.block0__DOT__c) 
                                                >> 2U));
    vlSelfRef.block0__DOT__block3__DOT__cin = (1U & 
                                               ((IData)(vlSelfRef.block0__DOT__c) 
                                                >> 3U));
    vlSelfRef.block1__DOT__block0__DOT__cin = (1U & (IData)(vlSelfRef.block1__DOT__c));
    vlSelfRef.block1__DOT__block1__DOT__cin = (1U & 
                                               ((IData)(vlSelfRef.block1__DOT__c) 
                                                >> 1U));
    vlSelfRef.block1__DOT__block2__DOT__cin = (1U & 
                                               ((IData)(vlSelfRef.block1__DOT__c) 
                                                >> 2U));
    vlSelfRef.block1__DOT__block3__DOT__cin = (1U & 
                                               ((IData)(vlSelfRef.block1__DOT__c) 
                                                >> 3U));
    vlSelfRef.block2__DOT__block0__DOT__cin = (1U & (IData)(vlSelfRef.block2__DOT__c));
    vlSelfRef.block2__DOT__block1__DOT__cin = (1U & 
                                               ((IData)(vlSelfRef.block2__DOT__c) 
                                                >> 1U));
    vlSelfRef.block2__DOT__block2__DOT__cin = (1U & 
                                               ((IData)(vlSelfRef.block2__DOT__c) 
                                                >> 2U));
    vlSelfRef.block2__DOT__block3__DOT__cin = (1U & 
                                               ((IData)(vlSelfRef.block2__DOT__c) 
                                                >> 3U));
    vlSelfRef.block3__DOT__block0__DOT__cin = (1U & (IData)(vlSelfRef.block3__DOT__c));
    vlSelfRef.block3__DOT__block1__DOT__cin = (1U & 
                                               ((IData)(vlSelfRef.block3__DOT__c) 
                                                >> 1U));
    vlSelfRef.block3__DOT__block2__DOT__cin = (1U & 
                                               ((IData)(vlSelfRef.block3__DOT__c) 
                                                >> 2U));
    vlSelfRef.block3__DOT__block3__DOT__cin = (1U & 
                                               ((IData)(vlSelfRef.block3__DOT__c) 
                                                >> 3U));
    block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block0__DOT__block0__DOT__p) 
           & (IData)(vlSelfRef.block0__DOT__block0__DOT__cin));
    block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block0__DOT__block1__DOT__p) 
           & (IData)(vlSelfRef.block0__DOT__block1__DOT__cin));
    block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block0__DOT__block2__DOT__p) 
           & (IData)(vlSelfRef.block0__DOT__block2__DOT__cin));
    block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block0__DOT__block3__DOT__p) 
           & (IData)(vlSelfRef.block0__DOT__block3__DOT__cin));
    block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block1__DOT__block0__DOT__p) 
           & (IData)(vlSelfRef.block1__DOT__block0__DOT__cin));
    block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block1__DOT__block1__DOT__p) 
           & (IData)(vlSelfRef.block1__DOT__block1__DOT__cin));
    block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block1__DOT__block2__DOT__p) 
           & (IData)(vlSelfRef.block1__DOT__block2__DOT__cin));
    block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block1__DOT__block3__DOT__p) 
           & (IData)(vlSelfRef.block1__DOT__block3__DOT__cin));
    block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block2__DOT__block0__DOT__p) 
           & (IData)(vlSelfRef.block2__DOT__block0__DOT__cin));
    block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block2__DOT__block1__DOT__p) 
           & (IData)(vlSelfRef.block2__DOT__block1__DOT__cin));
    block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block2__DOT__block2__DOT__p) 
           & (IData)(vlSelfRef.block2__DOT__block2__DOT__cin));
    block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block2__DOT__block3__DOT__p) 
           & (IData)(vlSelfRef.block2__DOT__block3__DOT__cin));
    block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block3__DOT__block0__DOT__p) 
           & (IData)(vlSelfRef.block3__DOT__block0__DOT__cin));
    block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block3__DOT__block1__DOT__p) 
           & (IData)(vlSelfRef.block3__DOT__block1__DOT__cin));
    block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block3__DOT__block2__DOT__p) 
           & (IData)(vlSelfRef.block3__DOT__block2__DOT__cin));
    block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0 
        = ((IData)(vlSelfRef.block3__DOT__block3__DOT__p) 
           & (IData)(vlSelfRef.block3__DOT__block3__DOT__cin));
    __VdfgRegularize_hf246a9bd_1_2 = (1U & ((IData)(vlSelfRef.block0__DOT__block0__DOT__g) 
                                            | (IData)(block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_3 = (1U & ((IData)(vlSelfRef.block0__DOT__block1__DOT__g) 
                                            | (IData)(block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_4 = (1U & ((IData)(vlSelfRef.block0__DOT__block2__DOT__g) 
                                            | (IData)(block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_5 = (1U & ((IData)(vlSelfRef.block0__DOT__block3__DOT__g) 
                                            | (IData)(block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_7 = (1U & ((IData)(vlSelfRef.block1__DOT__block0__DOT__g) 
                                            | (IData)(block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_8 = (1U & ((IData)(vlSelfRef.block1__DOT__block1__DOT__g) 
                                            | (IData)(block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_9 = (1U & ((IData)(vlSelfRef.block1__DOT__block2__DOT__g) 
                                            | (IData)(block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_10 = (1U & ((IData)(vlSelfRef.block1__DOT__block3__DOT__g) 
                                             | (IData)(block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_12 = (1U & ((IData)(vlSelfRef.block2__DOT__block0__DOT__g) 
                                             | (IData)(block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_13 = (1U & ((IData)(vlSelfRef.block2__DOT__block1__DOT__g) 
                                             | (IData)(block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_14 = (1U & ((IData)(vlSelfRef.block2__DOT__block2__DOT__g) 
                                             | (IData)(block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_15 = (1U & ((IData)(vlSelfRef.block2__DOT__block3__DOT__g) 
                                             | (IData)(block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_17 = (1U & ((IData)(vlSelfRef.block3__DOT__block0__DOT__g) 
                                             | (IData)(block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_18 = (1U & ((IData)(vlSelfRef.block3__DOT__block1__DOT__g) 
                                             | (IData)(block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_19 = (1U & ((IData)(vlSelfRef.block3__DOT__block2__DOT__g) 
                                             | (IData)(block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_hf246a9bd_1_20 = (1U & ((IData)(vlSelfRef.block3__DOT__block3__DOT__g) 
                                             | (IData)(block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0)));
    __VdfgRegularize_h6e95ff9d_0_40 = (1U & (((IData)(vlSelfRef.block0__DOT__block0__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block0__DOT__block0__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_2))));
    __VdfgRegularize_h6e95ff9d_0_41 = (1U & (((IData)(vlSelfRef.block0__DOT__block1__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block0__DOT__block1__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_3))));
    __VdfgRegularize_h6e95ff9d_0_42 = (1U & (((IData)(vlSelfRef.block0__DOT__block2__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block0__DOT__block2__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_4))));
    __VdfgRegularize_h6e95ff9d_0_43 = (1U & (((IData)(vlSelfRef.block0__DOT__block3__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block0__DOT__block3__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_5))));
    __VdfgRegularize_h6e95ff9d_0_44 = (1U & (((IData)(vlSelfRef.block1__DOT__block0__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block1__DOT__block0__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_7))));
    __VdfgRegularize_h6e95ff9d_0_45 = (1U & (((IData)(vlSelfRef.block1__DOT__block1__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block1__DOT__block1__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_8))));
    __VdfgRegularize_h6e95ff9d_0_46 = (1U & (((IData)(vlSelfRef.block1__DOT__block2__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block1__DOT__block2__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_9))));
    __VdfgRegularize_h6e95ff9d_0_47 = (1U & (((IData)(vlSelfRef.block1__DOT__block3__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block1__DOT__block3__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_10))));
    __VdfgRegularize_h6e95ff9d_0_48 = (1U & (((IData)(vlSelfRef.block2__DOT__block0__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block2__DOT__block0__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_12))));
    __VdfgRegularize_h6e95ff9d_0_49 = (1U & (((IData)(vlSelfRef.block2__DOT__block1__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block2__DOT__block1__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_13))));
    __VdfgRegularize_h6e95ff9d_0_50 = (1U & (((IData)(vlSelfRef.block2__DOT__block2__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block2__DOT__block2__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_14))));
    __VdfgRegularize_h6e95ff9d_0_51 = (1U & (((IData)(vlSelfRef.block2__DOT__block3__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block2__DOT__block3__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_15))));
    __VdfgRegularize_h6e95ff9d_0_52 = (1U & (((IData)(vlSelfRef.block3__DOT__block0__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block3__DOT__block0__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_17))));
    __VdfgRegularize_h6e95ff9d_0_53 = (1U & (((IData)(vlSelfRef.block3__DOT__block1__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block3__DOT__block1__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_18))));
    __VdfgRegularize_h6e95ff9d_0_54 = (1U & (((IData)(vlSelfRef.block3__DOT__block2__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block3__DOT__block2__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_19))));
    __VdfgRegularize_h6e95ff9d_0_55 = (1U & (((IData)(vlSelfRef.block3__DOT__block3__DOT__g) 
                                              >> 1U) 
                                             | (((IData)(vlSelfRef.block3__DOT__block3__DOT__p) 
                                                 >> 1U) 
                                                & (IData)(__VdfgRegularize_hf246a9bd_1_20))));
    vlSelfRef.block0__DOT__block0__DOT__c = (((((IData)(block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block0__DOT__block0__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block0__DOT__block0__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_40) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_40)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_2) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block0__DOT__block0__DOT__cin)));
    vlSelfRef.block0__DOT__block1__DOT__c = (((((IData)(block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block0__DOT__block1__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block0__DOT__block1__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_41) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_41)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_3) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block0__DOT__block1__DOT__cin)));
    vlSelfRef.block0__DOT__block2__DOT__c = (((((IData)(block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block0__DOT__block2__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block0__DOT__block2__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_42) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_42)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_4) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block0__DOT__block2__DOT__cin)));
    vlSelfRef.block0__DOT__block3__DOT__c = (((((IData)(block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block0__DOT__block3__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block0__DOT__block3__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_43) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_43)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_5) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block0__DOT__block3__DOT__cin)));
    vlSelfRef.block1__DOT__block0__DOT__c = (((((IData)(block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block1__DOT__block0__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block1__DOT__block0__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_44) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_44)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_7) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block1__DOT__block0__DOT__cin)));
    vlSelfRef.block1__DOT__block1__DOT__c = (((((IData)(block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block1__DOT__block1__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block1__DOT__block1__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_45) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_45)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_8) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block1__DOT__block1__DOT__cin)));
    vlSelfRef.block1__DOT__block2__DOT__c = (((((IData)(block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block1__DOT__block2__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block1__DOT__block2__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_46) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_46)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_9) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block1__DOT__block2__DOT__cin)));
    vlSelfRef.block1__DOT__block3__DOT__c = (((((IData)(block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block1__DOT__block3__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block1__DOT__block3__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_47) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_47)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_10) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block1__DOT__block3__DOT__cin)));
    vlSelfRef.block2__DOT__block0__DOT__c = (((((IData)(block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block2__DOT__block0__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block2__DOT__block0__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_48) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_48)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_12) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block2__DOT__block0__DOT__cin)));
    vlSelfRef.block2__DOT__block1__DOT__c = (((((IData)(block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block2__DOT__block1__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block2__DOT__block1__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_49) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_49)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_13) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block2__DOT__block1__DOT__cin)));
    vlSelfRef.block2__DOT__block2__DOT__c = (((((IData)(block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block2__DOT__block2__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block2__DOT__block2__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_50) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_50)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_14) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block2__DOT__block2__DOT__cin)));
    vlSelfRef.block2__DOT__block3__DOT__c = (((((IData)(block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block2__DOT__block3__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block2__DOT__block3__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_51) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_51)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_15) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block2__DOT__block3__DOT__cin)));
    vlSelfRef.block3__DOT__block0__DOT__c = (((((IData)(block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block3__DOT__block0__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block3__DOT__block0__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_52) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_52)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_17) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block3__DOT__block0__DOT__cin)));
    vlSelfRef.block3__DOT__block1__DOT__c = (((((IData)(block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block3__DOT__block1__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block3__DOT__block1__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_53) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_53)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_18) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block3__DOT__block1__DOT__cin)));
    vlSelfRef.block3__DOT__block2__DOT__c = (((((IData)(block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block3__DOT__block2__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block3__DOT__block2__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_54) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_54)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_19) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block3__DOT__block2__DOT__cin)));
    vlSelfRef.block3__DOT__block3__DOT__c = (((((IData)(block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_4) 
                                                | ((IData)(block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_3) 
                                                   & (IData)(block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                               << 4U) 
                                              | (((2U 
                                                   & (((IData)(vlSelfRef.block3__DOT__block3__DOT__g) 
                                                       >> 1U) 
                                                      | (((IData)(vlSelfRef.block3__DOT__block3__DOT__p) 
                                                          >> 1U) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_55) 
                                                            << 1U)))) 
                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_55)) 
                                                 << 2U)) 
                                             | (((IData)(__VdfgRegularize_hf246a9bd_1_20) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.block3__DOT__block3__DOT__cin)));
    vlSelfRef.block0__DOT__block0__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block0__DOT__block0__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block0__DOT__block0__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block0__DOT__block0__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block0__DOT__block0__DOT__c)));
    vlSelfRef.block0__DOT__block1__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block0__DOT__block1__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block0__DOT__block1__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block0__DOT__block1__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block0__DOT__block1__DOT__c)));
    vlSelfRef.block0__DOT__block2__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block0__DOT__block2__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block0__DOT__block2__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block0__DOT__block2__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block0__DOT__block2__DOT__c)));
    vlSelfRef.block0__DOT__block3__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block0__DOT__block3__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block0__DOT__block3__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block0__DOT__block3__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block0__DOT__block3__DOT__c)));
    vlSelfRef.block1__DOT__block0__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block1__DOT__block0__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block1__DOT__block0__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block1__DOT__block0__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block1__DOT__block0__DOT__c)));
    vlSelfRef.block1__DOT__block1__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block1__DOT__block1__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block1__DOT__block1__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block1__DOT__block1__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block1__DOT__block1__DOT__c)));
    vlSelfRef.block1__DOT__block2__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block1__DOT__block2__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block1__DOT__block2__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block1__DOT__block2__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block1__DOT__block2__DOT__c)));
    vlSelfRef.block1__DOT__block3__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block1__DOT__block3__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block1__DOT__block3__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block1__DOT__block3__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block1__DOT__block3__DOT__c)));
    vlSelfRef.block2__DOT__block0__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block2__DOT__block0__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block2__DOT__block0__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block2__DOT__block0__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block2__DOT__block0__DOT__c)));
    vlSelfRef.block2__DOT__block1__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block2__DOT__block1__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block2__DOT__block1__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block2__DOT__block1__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block2__DOT__block1__DOT__c)));
    vlSelfRef.block2__DOT__block2__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block2__DOT__block2__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block2__DOT__block2__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block2__DOT__block2__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block2__DOT__block2__DOT__c)));
    vlSelfRef.block2__DOT__block3__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block2__DOT__block3__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block2__DOT__block3__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block2__DOT__block3__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block2__DOT__block3__DOT__c)));
    vlSelfRef.block3__DOT__block0__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block3__DOT__block0__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block3__DOT__block0__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block3__DOT__block0__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block3__DOT__block0__DOT__c)));
    vlSelfRef.block3__DOT__block1__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block3__DOT__block1__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block3__DOT__block1__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block3__DOT__block1__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block3__DOT__block1__DOT__c)));
    vlSelfRef.block3__DOT__block2__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block3__DOT__block2__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block3__DOT__block2__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block3__DOT__block2__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block3__DOT__block2__DOT__c)));
    vlSelfRef.block3__DOT__block3__DOT__c3_out = (1U 
                                                  & ((IData)(vlSelfRef.block3__DOT__block3__DOT__c) 
                                                     >> 3U));
    vlSelfRef.block3__DOT__block3__DOT__sum = (0x0000000fU 
                                               & ((IData)(vlSelfRef.block3__DOT__block3__DOT__p) 
                                                  ^ (IData)(vlSelfRef.block3__DOT__block3__DOT__c)));
    vlSelfRef.block0__DOT__c3_from_last = vlSelfRef.block0__DOT__block3__DOT__c3_out;
    vlSelfRef.block0__DOT__sum = ((((IData)(vlSelfRef.block0__DOT__block3__DOT__sum) 
                                    << 0x0000000cU) 
                                   | ((IData)(vlSelfRef.block0__DOT__block2__DOT__sum) 
                                      << 8U)) | (((IData)(vlSelfRef.block0__DOT__block1__DOT__sum) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.block0__DOT__block0__DOT__sum)));
    vlSelfRef.block1__DOT__c3_from_last = vlSelfRef.block1__DOT__block3__DOT__c3_out;
    vlSelfRef.block1__DOT__sum = ((((IData)(vlSelfRef.block1__DOT__block3__DOT__sum) 
                                    << 0x0000000cU) 
                                   | ((IData)(vlSelfRef.block1__DOT__block2__DOT__sum) 
                                      << 8U)) | (((IData)(vlSelfRef.block1__DOT__block1__DOT__sum) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.block1__DOT__block0__DOT__sum)));
    vlSelfRef.block2__DOT__c3_from_last = vlSelfRef.block2__DOT__block3__DOT__c3_out;
    vlSelfRef.block2__DOT__sum = ((((IData)(vlSelfRef.block2__DOT__block3__DOT__sum) 
                                    << 0x0000000cU) 
                                   | ((IData)(vlSelfRef.block2__DOT__block2__DOT__sum) 
                                      << 8U)) | (((IData)(vlSelfRef.block2__DOT__block1__DOT__sum) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.block2__DOT__block0__DOT__sum)));
    vlSelfRef.block3__DOT__c3_from_last = vlSelfRef.block3__DOT__block3__DOT__c3_out;
    vlSelfRef.block3__DOT__sum = ((((IData)(vlSelfRef.block3__DOT__block3__DOT__sum) 
                                    << 0x0000000cU) 
                                   | ((IData)(vlSelfRef.block3__DOT__block2__DOT__sum) 
                                      << 8U)) | (((IData)(vlSelfRef.block3__DOT__block1__DOT__sum) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.block3__DOT__block0__DOT__sum)));
    vlSelfRef.block0__DOT__c15_out = vlSelfRef.block0__DOT__c3_from_last;
    vlSelfRef.block1__DOT__c15_out = vlSelfRef.block1__DOT__c3_from_last;
    vlSelfRef.block2__DOT__c15_out = vlSelfRef.block2__DOT__c3_from_last;
    vlSelfRef.block3__DOT__c15_out = vlSelfRef.block3__DOT__c3_from_last;
    vlSelfRef.sum = (((QData)((IData)((((IData)(vlSelfRef.block3__DOT__sum) 
                                        << 0x00000010U) 
                                       | (IData)(vlSelfRef.block2__DOT__sum)))) 
                      << 0x00000020U) | (QData)((IData)(
                                                        (((IData)(vlSelfRef.block1__DOT__sum) 
                                                          << 0x00000010U) 
                                                         | (IData)(vlSelfRef.block0__DOT__sum)))));
    vlSelfRef.c63_from_last = vlSelfRef.block3__DOT__c15_out;
    vlSelfRef.carry_into_msb = vlSelfRef.c63_from_last;
}
