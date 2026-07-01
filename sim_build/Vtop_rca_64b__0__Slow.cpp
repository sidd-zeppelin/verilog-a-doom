// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop_rca_64b___eval_initial__TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst(Vtop_rca_64b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_rca_64b___eval_initial__TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.b = 4ULL;
    vlSelfRef.cin = 0U;
}

VL_ATTR_COLD void Vtop_rca_64b___stl_sequent__TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst__0(Vtop_rca_64b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_rca_64b___stl_sequent__TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rca_gen__BRA__0__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)(vlSelfRef.b));
    vlSelfRef.rca_gen__BRA__1__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 1U)));
    vlSelfRef.rca_gen__BRA__2__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 2U)));
    vlSelfRef.rca_gen__BRA__3__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 3U)));
    vlSelfRef.rca_gen__BRA__4__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 4U)));
    vlSelfRef.rca_gen__BRA__5__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 5U)));
    vlSelfRef.rca_gen__BRA__6__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 6U)));
    vlSelfRef.rca_gen__BRA__7__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 7U)));
    vlSelfRef.rca_gen__BRA__8__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 8U)));
    vlSelfRef.rca_gen__BRA__9__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 9U)));
    vlSelfRef.rca_gen__BRA__10__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000000aU)));
    vlSelfRef.rca_gen__BRA__11__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000000bU)));
    vlSelfRef.rca_gen__BRA__12__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000000cU)));
    vlSelfRef.rca_gen__BRA__13__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000000dU)));
    vlSelfRef.rca_gen__BRA__14__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000000eU)));
    vlSelfRef.rca_gen__BRA__15__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000000fU)));
    vlSelfRef.rca_gen__BRA__16__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000010U)));
    vlSelfRef.rca_gen__BRA__17__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000011U)));
    vlSelfRef.rca_gen__BRA__18__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000012U)));
    vlSelfRef.rca_gen__BRA__19__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000013U)));
    vlSelfRef.rca_gen__BRA__20__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000014U)));
    vlSelfRef.rca_gen__BRA__21__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000015U)));
    vlSelfRef.rca_gen__BRA__22__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000016U)));
    vlSelfRef.rca_gen__BRA__23__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000017U)));
    vlSelfRef.rca_gen__BRA__24__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000018U)));
    vlSelfRef.rca_gen__BRA__25__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000019U)));
    vlSelfRef.rca_gen__BRA__26__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000001aU)));
    vlSelfRef.rca_gen__BRA__27__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000001bU)));
    vlSelfRef.rca_gen__BRA__28__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000001cU)));
    vlSelfRef.rca_gen__BRA__29__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000001dU)));
    vlSelfRef.rca_gen__BRA__30__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000001eU)));
    vlSelfRef.rca_gen__BRA__31__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000001fU)));
    vlSelfRef.rca_gen__BRA__32__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000020U)));
    vlSelfRef.rca_gen__BRA__33__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000021U)));
    vlSelfRef.rca_gen__BRA__34__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000022U)));
    vlSelfRef.rca_gen__BRA__35__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000023U)));
    vlSelfRef.rca_gen__BRA__36__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000024U)));
    vlSelfRef.rca_gen__BRA__37__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000025U)));
    vlSelfRef.rca_gen__BRA__38__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000026U)));
    vlSelfRef.rca_gen__BRA__39__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000027U)));
    vlSelfRef.rca_gen__BRA__40__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000028U)));
    vlSelfRef.rca_gen__BRA__41__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000029U)));
    vlSelfRef.rca_gen__BRA__42__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000002aU)));
    vlSelfRef.rca_gen__BRA__43__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000002bU)));
    vlSelfRef.rca_gen__BRA__44__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000002cU)));
    vlSelfRef.rca_gen__BRA__45__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000002dU)));
    vlSelfRef.rca_gen__BRA__46__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000002eU)));
    vlSelfRef.rca_gen__BRA__47__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000002fU)));
    vlSelfRef.rca_gen__BRA__48__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000030U)));
    vlSelfRef.rca_gen__BRA__49__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000031U)));
    vlSelfRef.rca_gen__BRA__50__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000032U)));
    vlSelfRef.rca_gen__BRA__51__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000033U)));
    vlSelfRef.rca_gen__BRA__52__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000034U)));
    vlSelfRef.rca_gen__BRA__53__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000035U)));
    vlSelfRef.rca_gen__BRA__54__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000036U)));
    vlSelfRef.rca_gen__BRA__55__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000037U)));
    vlSelfRef.rca_gen__BRA__56__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000038U)));
    vlSelfRef.rca_gen__BRA__57__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000039U)));
    vlSelfRef.rca_gen__BRA__58__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000003aU)));
    vlSelfRef.rca_gen__BRA__59__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000003bU)));
    vlSelfRef.rca_gen__BRA__60__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000003cU)));
    vlSelfRef.rca_gen__BRA__61__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000003dU)));
    vlSelfRef.rca_gen__BRA__62__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000003eU)));
    vlSelfRef.rca_gen__BRA__63__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000003fU)));
    vlSelfRef.a = vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__pc_current;
    vlSelfRef.rca_gen__BRA__0__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)(vlSelfRef.a));
    vlSelfRef.rca_gen__BRA__1__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 1U)));
    vlSelfRef.rca_gen__BRA__2__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 2U)));
    vlSelfRef.rca_gen__BRA__3__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 3U)));
    vlSelfRef.rca_gen__BRA__4__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 4U)));
    vlSelfRef.rca_gen__BRA__5__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 5U)));
    vlSelfRef.rca_gen__BRA__6__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 6U)));
    vlSelfRef.rca_gen__BRA__7__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 7U)));
    vlSelfRef.rca_gen__BRA__8__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 8U)));
    vlSelfRef.rca_gen__BRA__9__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 9U)));
    vlSelfRef.rca_gen__BRA__10__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000000aU)));
    vlSelfRef.rca_gen__BRA__11__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000000bU)));
    vlSelfRef.rca_gen__BRA__12__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000000cU)));
    vlSelfRef.rca_gen__BRA__13__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000000dU)));
    vlSelfRef.rca_gen__BRA__14__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000000eU)));
    vlSelfRef.rca_gen__BRA__15__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000000fU)));
    vlSelfRef.rca_gen__BRA__16__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000010U)));
    vlSelfRef.rca_gen__BRA__17__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000011U)));
    vlSelfRef.rca_gen__BRA__18__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000012U)));
    vlSelfRef.rca_gen__BRA__19__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000013U)));
    vlSelfRef.rca_gen__BRA__20__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000014U)));
    vlSelfRef.rca_gen__BRA__21__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000015U)));
    vlSelfRef.rca_gen__BRA__22__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000016U)));
    vlSelfRef.rca_gen__BRA__23__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000017U)));
    vlSelfRef.rca_gen__BRA__24__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000018U)));
    vlSelfRef.rca_gen__BRA__25__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000019U)));
    vlSelfRef.rca_gen__BRA__26__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000001aU)));
    vlSelfRef.rca_gen__BRA__27__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000001bU)));
    vlSelfRef.rca_gen__BRA__28__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000001cU)));
    vlSelfRef.rca_gen__BRA__29__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000001dU)));
    vlSelfRef.rca_gen__BRA__30__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000001eU)));
    vlSelfRef.rca_gen__BRA__31__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000001fU)));
    vlSelfRef.rca_gen__BRA__32__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000020U)));
    vlSelfRef.rca_gen__BRA__33__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000021U)));
    vlSelfRef.rca_gen__BRA__34__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000022U)));
    vlSelfRef.rca_gen__BRA__35__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000023U)));
    vlSelfRef.rca_gen__BRA__36__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000024U)));
    vlSelfRef.rca_gen__BRA__37__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000025U)));
    vlSelfRef.rca_gen__BRA__38__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000026U)));
    vlSelfRef.rca_gen__BRA__39__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000027U)));
    vlSelfRef.rca_gen__BRA__40__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000028U)));
    vlSelfRef.rca_gen__BRA__41__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000029U)));
    vlSelfRef.rca_gen__BRA__42__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000002aU)));
    vlSelfRef.rca_gen__BRA__43__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000002bU)));
    vlSelfRef.rca_gen__BRA__44__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000002cU)));
    vlSelfRef.rca_gen__BRA__45__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000002dU)));
    vlSelfRef.rca_gen__BRA__46__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000002eU)));
    vlSelfRef.rca_gen__BRA__47__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000002fU)));
    vlSelfRef.rca_gen__BRA__48__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000030U)));
    vlSelfRef.rca_gen__BRA__49__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000031U)));
    vlSelfRef.rca_gen__BRA__50__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000032U)));
    vlSelfRef.rca_gen__BRA__51__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000033U)));
    vlSelfRef.rca_gen__BRA__52__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000034U)));
    vlSelfRef.rca_gen__BRA__53__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000035U)));
    vlSelfRef.rca_gen__BRA__54__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000036U)));
    vlSelfRef.rca_gen__BRA__55__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000037U)));
    vlSelfRef.rca_gen__BRA__56__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000038U)));
    vlSelfRef.rca_gen__BRA__57__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000039U)));
    vlSelfRef.rca_gen__BRA__58__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000003aU)));
    vlSelfRef.rca_gen__BRA__59__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000003bU)));
    vlSelfRef.rca_gen__BRA__60__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000003cU)));
    vlSelfRef.rca_gen__BRA__61__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000003dU)));
    vlSelfRef.rca_gen__BRA__62__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000003eU)));
    vlSelfRef.rca_gen__BRA__63__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000003fU)));
    vlSelfRef.rca_gen__BRA__0__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__0__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__0__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__0__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__0__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__0__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__1__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__1__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__1__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__1__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__1__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__1__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__2__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__2__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__2__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__2__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__2__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__2__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__3__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__3__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__3__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__3__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__3__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__3__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__4__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__4__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__4__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__4__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__4__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__4__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__5__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__5__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__5__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__5__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__5__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__5__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__6__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__6__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__6__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__6__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__6__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__6__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__7__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__7__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__7__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__7__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__7__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__7__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__8__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__8__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__8__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__8__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__8__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__8__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__9__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__9__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__9__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__9__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__9__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__9__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__10__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__10__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__10__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__10__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__10__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__10__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__11__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__11__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__11__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__11__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__11__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__11__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__12__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__12__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__12__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__12__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__12__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__12__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__13__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__13__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__13__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__13__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__13__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__13__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__14__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__14__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__14__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__14__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__14__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__14__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__15__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__15__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__15__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__15__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__15__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__15__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__16__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__16__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__16__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__16__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__16__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__16__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__17__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__17__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__17__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__17__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__17__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__17__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__18__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__18__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__18__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__18__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__18__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__18__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__19__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__19__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__19__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__19__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__19__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__19__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__20__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__20__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__20__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__20__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__20__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__20__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__21__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__21__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__21__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__21__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__21__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__21__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__22__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__22__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__22__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__22__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__22__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__22__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__23__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__23__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__23__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__23__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__23__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__23__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__24__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__24__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__24__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__24__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__24__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__24__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__25__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__25__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__25__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__25__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__25__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__25__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__26__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__26__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__26__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__26__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__26__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__26__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__27__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__27__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__27__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__27__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__27__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__27__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__28__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__28__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__28__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__28__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__28__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__28__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__29__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__29__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__29__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__29__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__29__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__29__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__30__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__30__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__30__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__30__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__30__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__30__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__31__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__31__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__31__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__31__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__31__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__31__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__32__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__32__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__32__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__32__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__32__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__32__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__33__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__33__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__33__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__33__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__33__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__33__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__34__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__34__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__34__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__34__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__34__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__34__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__35__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__35__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__35__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__35__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__35__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__35__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__36__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__36__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__36__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__36__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__36__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__36__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__37__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__37__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__37__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__37__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__37__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__37__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__38__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__38__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__38__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__38__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__38__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__38__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__39__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__39__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__39__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__39__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__39__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__39__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__40__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__40__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__40__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__40__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__40__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__40__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__41__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__41__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__41__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__41__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__41__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__41__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__42__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__42__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__42__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__42__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__42__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__42__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__43__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__43__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__43__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__43__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__43__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__43__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__44__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__44__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__44__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__44__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__44__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__44__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__45__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__45__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__45__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__45__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__45__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__45__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__46__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__46__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__46__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__46__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__46__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__46__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__47__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__47__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__47__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__47__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__47__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__47__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__48__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__48__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__48__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__48__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__48__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__48__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__49__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__49__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__49__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__49__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__49__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__49__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__50__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__50__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__50__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__50__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__50__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__50__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__51__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__51__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__51__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__51__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__51__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__51__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__52__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__52__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__52__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__52__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__52__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__52__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__53__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__53__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__53__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__53__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__53__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__53__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__54__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__54__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__54__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__54__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__54__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__54__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__55__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__55__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__55__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__55__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__55__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__55__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__56__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__56__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__56__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__56__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__56__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__56__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__57__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__57__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__57__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__57__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__57__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__57__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__58__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__58__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__58__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__58__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__58__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__58__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__59__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__59__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__59__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__59__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__59__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__59__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__60__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__60__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__60__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__60__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__60__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__60__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__61__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__61__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__61__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__61__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__61__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__61__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__62__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__62__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__62__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__62__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__62__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__62__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__63__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__63__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__63__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__63__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__63__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__63__KET____DOT__fa_inst__DOT__b));
}

VL_ATTR_COLD void Vtop_rca_64b___stl_sequent__TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst__1(Vtop_rca_64b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_rca_64b___stl_sequent__TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rca_gen__BRA__0__KET____DOT__fa_inst__DOT__cin 
        = (1U & vlSelfRef.carry[0U]);
    vlSelfRef.rca_gen__BRA__1__KET____DOT__fa_inst__DOT__cin 
        = (1U & (vlSelfRef.carry[0U] >> 1U));
    vlSelfRef.rca_gen__BRA__2__KET____DOT__fa_inst__DOT__cin 
        = (1U & (vlSelfRef.carry[0U] >> 2U));
    vlSelfRef.rca_gen__BRA__3__KET____DOT__fa_inst__DOT__cin 
        = (1U & (vlSelfRef.carry[0U] >> 3U));
    vlSelfRef.rca_gen__BRA__4__KET____DOT__fa_inst__DOT__cin 
        = (1U & (vlSelfRef.carry[0U] >> 4U));
    vlSelfRef.rca_gen__BRA__5__KET____DOT__fa_inst__DOT__cin 
        = (1U & (vlSelfRef.carry[0U] >> 5U));
    vlSelfRef.rca_gen__BRA__6__KET____DOT__fa_inst__DOT__cin 
        = (1U & (vlSelfRef.carry[0U] >> 6U));
    vlSelfRef.rca_gen__BRA__7__KET____DOT__fa_inst__DOT__cin 
        = (1U & (vlSelfRef.carry[0U] >> 7U));
    vlSelfRef.rca_gen__BRA__8__KET____DOT__fa_inst__DOT__cin 
        = (1U & (vlSelfRef.carry[0U] >> 8U));
    vlSelfRef.rca_gen__BRA__9__KET____DOT__fa_inst__DOT__cin 
        = (1U & (vlSelfRef.carry[0U] >> 9U));
    vlSelfRef.rca_gen__BRA__10__KET____DOT__fa_inst__DOT__cin 
        = (1U & (vlSelfRef.carry[0U] >> 0x0000000aU));
    vlSelfRef.rca_gen__BRA__11__KET____DOT__fa_inst__DOT__cin 
        = (1U & (vlSelfRef.carry[0U] >> 0x0000000bU));
    vlSelfRef.rca_gen__BRA__12__KET____DOT__fa_inst__DOT__cin 
        = (1U & (vlSelfRef.carry[0U] >> 0x0000000cU));
    vlSelfRef.rca_gen__BRA__13__KET____DOT__fa_inst__DOT__cin 
        = (1U & (vlSelfRef.carry[0U] >> 0x0000000dU));
    vlSelfRef.rca_gen__BRA__14__KET____DOT__fa_inst__DOT__cin 
        = (1U & (vlSelfRef.carry[0U] >> 0x0000000eU));
    vlSelfRef.rca_gen__BRA__15__KET____DOT__fa_inst__DOT__cin 
        = (1U & (vlSelfRef.carry[0U] >> 0x0000000fU));
    vlSelfRef.rca_gen__BRA__16__KET____DOT__fa_inst__DOT__cin 
        = (1U & (vlSelfRef.carry[0U] >> 0x00000010U));
    vlSelfRef.rca_gen__BRA__17__KET____DOT__fa_inst__DOT__cin 
        = (1U & (vlSelfRef.carry[0U] >> 0x00000011U));
    vlSelfRef.rca_gen__BRA__18__KET____DOT__fa_inst__DOT__cin 
        = (1U & (vlSelfRef.carry[0U] >> 0x00000012U));
    vlSelfRef.rca_gen__BRA__19__KET____DOT__fa_inst__DOT__cin 
        = (1U & (vlSelfRef.carry[0U] >> 0x00000013U));
    vlSelfRef.rca_gen__BRA__20__KET____DOT__fa_inst__DOT__cin 
        = (1U & (vlSelfRef.carry[0U] >> 0x00000014U));
    vlSelfRef.rca_gen__BRA__21__KET____DOT__fa_inst__DOT__cin 
        = (1U & (vlSelfRef.carry[0U] >> 0x00000015U));
    vlSelfRef.rca_gen__BRA__22__KET____DOT__fa_inst__DOT__cin 
        = (1U & (vlSelfRef.carry[0U] >> 0x00000016U));
    vlSelfRef.rca_gen__BRA__23__KET____DOT__fa_inst__DOT__cin 
        = (1U & (vlSelfRef.carry[0U] >> 0x00000017U));
    vlSelfRef.rca_gen__BRA__24__KET____DOT__fa_inst__DOT__cin 
        = (1U & (vlSelfRef.carry[0U] >> 0x00000018U));
    vlSelfRef.rca_gen__BRA__25__KET____DOT__fa_inst__DOT__cin 
        = (1U & (vlSelfRef.carry[0U] >> 0x00000019U));
    vlSelfRef.rca_gen__BRA__26__KET____DOT__fa_inst__DOT__cin 
        = (1U & (vlSelfRef.carry[0U] >> 0x0000001aU));
    vlSelfRef.rca_gen__BRA__27__KET____DOT__fa_inst__DOT__cin 
        = (1U & (vlSelfRef.carry[0U] >> 0x0000001bU));
    vlSelfRef.rca_gen__BRA__28__KET____DOT__fa_inst__DOT__cin 
        = (1U & (vlSelfRef.carry[0U] >> 0x0000001cU));
    vlSelfRef.rca_gen__BRA__29__KET____DOT__fa_inst__DOT__cin 
        = (1U & (vlSelfRef.carry[0U] >> 0x0000001dU));
    vlSelfRef.rca_gen__BRA__30__KET____DOT__fa_inst__DOT__cin 
        = (1U & (vlSelfRef.carry[0U] >> 0x0000001eU));
    vlSelfRef.rca_gen__BRA__31__KET____DOT__fa_inst__DOT__cin 
        = (vlSelfRef.carry[0U] >> 0x0000001fU);
    vlSelfRef.rca_gen__BRA__32__KET____DOT__fa_inst__DOT__cin 
        = (1U & vlSelfRef.carry[1U]);
    vlSelfRef.rca_gen__BRA__33__KET____DOT__fa_inst__DOT__cin 
        = (1U & (vlSelfRef.carry[1U] >> 1U));
    vlSelfRef.rca_gen__BRA__34__KET____DOT__fa_inst__DOT__cin 
        = (1U & (vlSelfRef.carry[1U] >> 2U));
    vlSelfRef.rca_gen__BRA__35__KET____DOT__fa_inst__DOT__cin 
        = (1U & (vlSelfRef.carry[1U] >> 3U));
    vlSelfRef.rca_gen__BRA__36__KET____DOT__fa_inst__DOT__cin 
        = (1U & (vlSelfRef.carry[1U] >> 4U));
    vlSelfRef.rca_gen__BRA__37__KET____DOT__fa_inst__DOT__cin 
        = (1U & (vlSelfRef.carry[1U] >> 5U));
    vlSelfRef.rca_gen__BRA__38__KET____DOT__fa_inst__DOT__cin 
        = (1U & (vlSelfRef.carry[1U] >> 6U));
    vlSelfRef.rca_gen__BRA__39__KET____DOT__fa_inst__DOT__cin 
        = (1U & (vlSelfRef.carry[1U] >> 7U));
    vlSelfRef.rca_gen__BRA__40__KET____DOT__fa_inst__DOT__cin 
        = (1U & (vlSelfRef.carry[1U] >> 8U));
    vlSelfRef.rca_gen__BRA__41__KET____DOT__fa_inst__DOT__cin 
        = (1U & (vlSelfRef.carry[1U] >> 9U));
    vlSelfRef.rca_gen__BRA__42__KET____DOT__fa_inst__DOT__cin 
        = (1U & (vlSelfRef.carry[1U] >> 0x0000000aU));
    vlSelfRef.rca_gen__BRA__43__KET____DOT__fa_inst__DOT__cin 
        = (1U & (vlSelfRef.carry[1U] >> 0x0000000bU));
    vlSelfRef.rca_gen__BRA__44__KET____DOT__fa_inst__DOT__cin 
        = (1U & (vlSelfRef.carry[1U] >> 0x0000000cU));
    vlSelfRef.rca_gen__BRA__45__KET____DOT__fa_inst__DOT__cin 
        = (1U & (vlSelfRef.carry[1U] >> 0x0000000dU));
    vlSelfRef.rca_gen__BRA__46__KET____DOT__fa_inst__DOT__cin 
        = (1U & (vlSelfRef.carry[1U] >> 0x0000000eU));
    vlSelfRef.rca_gen__BRA__47__KET____DOT__fa_inst__DOT__cin 
        = (1U & (vlSelfRef.carry[1U] >> 0x0000000fU));
    vlSelfRef.rca_gen__BRA__48__KET____DOT__fa_inst__DOT__cin 
        = (1U & (vlSelfRef.carry[1U] >> 0x00000010U));
    vlSelfRef.rca_gen__BRA__49__KET____DOT__fa_inst__DOT__cin 
        = (1U & (vlSelfRef.carry[1U] >> 0x00000011U));
    vlSelfRef.rca_gen__BRA__50__KET____DOT__fa_inst__DOT__cin 
        = (1U & (vlSelfRef.carry[1U] >> 0x00000012U));
    vlSelfRef.rca_gen__BRA__51__KET____DOT__fa_inst__DOT__cin 
        = (1U & (vlSelfRef.carry[1U] >> 0x00000013U));
    vlSelfRef.rca_gen__BRA__52__KET____DOT__fa_inst__DOT__cin 
        = (1U & (vlSelfRef.carry[1U] >> 0x00000014U));
    vlSelfRef.rca_gen__BRA__53__KET____DOT__fa_inst__DOT__cin 
        = (1U & (vlSelfRef.carry[1U] >> 0x00000015U));
    vlSelfRef.rca_gen__BRA__54__KET____DOT__fa_inst__DOT__cin 
        = (1U & (vlSelfRef.carry[1U] >> 0x00000016U));
    vlSelfRef.rca_gen__BRA__55__KET____DOT__fa_inst__DOT__cin 
        = (1U & (vlSelfRef.carry[1U] >> 0x00000017U));
    vlSelfRef.rca_gen__BRA__56__KET____DOT__fa_inst__DOT__cin 
        = (1U & (vlSelfRef.carry[1U] >> 0x00000018U));
    vlSelfRef.rca_gen__BRA__57__KET____DOT__fa_inst__DOT__cin 
        = (1U & (vlSelfRef.carry[1U] >> 0x00000019U));
    vlSelfRef.rca_gen__BRA__58__KET____DOT__fa_inst__DOT__cin 
        = (1U & (vlSelfRef.carry[1U] >> 0x0000001aU));
    vlSelfRef.rca_gen__BRA__59__KET____DOT__fa_inst__DOT__cin 
        = (1U & (vlSelfRef.carry[1U] >> 0x0000001bU));
    vlSelfRef.rca_gen__BRA__60__KET____DOT__fa_inst__DOT__cin 
        = (1U & (vlSelfRef.carry[1U] >> 0x0000001cU));
    vlSelfRef.rca_gen__BRA__61__KET____DOT__fa_inst__DOT__cin 
        = (1U & (vlSelfRef.carry[1U] >> 0x0000001dU));
    vlSelfRef.rca_gen__BRA__62__KET____DOT__fa_inst__DOT__cin 
        = (1U & (vlSelfRef.carry[1U] >> 0x0000001eU));
    vlSelfRef.rca_gen__BRA__63__KET____DOT__fa_inst__DOT__cin 
        = (vlSelfRef.carry[1U] >> 0x0000001fU);
}

VL_ATTR_COLD void Vtop_rca_64b___stl_comb__TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst__0(Vtop_rca_64b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_rca_64b___stl_comb__TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rca_gen__BRA__0__KET____DOT__fa_inst__DOT__c2 
        = ((IData)(vlSelfRef.rca_gen__BRA__0__KET____DOT__fa_inst__DOT__cin) 
           & (IData)(vlSelfRef.rca_gen__BRA__0__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__0__KET____DOT__fa_inst__DOT__sum 
        = ((IData)(vlSelfRef.rca_gen__BRA__0__KET____DOT__fa_inst__DOT__cin) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__0__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__1__KET____DOT__fa_inst__DOT__c2 
        = ((IData)(vlSelfRef.rca_gen__BRA__1__KET____DOT__fa_inst__DOT__cin) 
           & (IData)(vlSelfRef.rca_gen__BRA__1__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__1__KET____DOT__fa_inst__DOT__sum 
        = ((IData)(vlSelfRef.rca_gen__BRA__1__KET____DOT__fa_inst__DOT__cin) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__1__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__2__KET____DOT__fa_inst__DOT__c2 
        = ((IData)(vlSelfRef.rca_gen__BRA__2__KET____DOT__fa_inst__DOT__cin) 
           & (IData)(vlSelfRef.rca_gen__BRA__2__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__2__KET____DOT__fa_inst__DOT__sum 
        = ((IData)(vlSelfRef.rca_gen__BRA__2__KET____DOT__fa_inst__DOT__cin) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__2__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__3__KET____DOT__fa_inst__DOT__c2 
        = ((IData)(vlSelfRef.rca_gen__BRA__3__KET____DOT__fa_inst__DOT__cin) 
           & (IData)(vlSelfRef.rca_gen__BRA__3__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__3__KET____DOT__fa_inst__DOT__sum 
        = ((IData)(vlSelfRef.rca_gen__BRA__3__KET____DOT__fa_inst__DOT__cin) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__3__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__4__KET____DOT__fa_inst__DOT__c2 
        = ((IData)(vlSelfRef.rca_gen__BRA__4__KET____DOT__fa_inst__DOT__cin) 
           & (IData)(vlSelfRef.rca_gen__BRA__4__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__4__KET____DOT__fa_inst__DOT__sum 
        = ((IData)(vlSelfRef.rca_gen__BRA__4__KET____DOT__fa_inst__DOT__cin) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__4__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__5__KET____DOT__fa_inst__DOT__c2 
        = ((IData)(vlSelfRef.rca_gen__BRA__5__KET____DOT__fa_inst__DOT__cin) 
           & (IData)(vlSelfRef.rca_gen__BRA__5__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__5__KET____DOT__fa_inst__DOT__sum 
        = ((IData)(vlSelfRef.rca_gen__BRA__5__KET____DOT__fa_inst__DOT__cin) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__5__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__6__KET____DOT__fa_inst__DOT__c2 
        = ((IData)(vlSelfRef.rca_gen__BRA__6__KET____DOT__fa_inst__DOT__cin) 
           & (IData)(vlSelfRef.rca_gen__BRA__6__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__6__KET____DOT__fa_inst__DOT__sum 
        = ((IData)(vlSelfRef.rca_gen__BRA__6__KET____DOT__fa_inst__DOT__cin) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__6__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__7__KET____DOT__fa_inst__DOT__c2 
        = ((IData)(vlSelfRef.rca_gen__BRA__7__KET____DOT__fa_inst__DOT__cin) 
           & (IData)(vlSelfRef.rca_gen__BRA__7__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__7__KET____DOT__fa_inst__DOT__sum 
        = ((IData)(vlSelfRef.rca_gen__BRA__7__KET____DOT__fa_inst__DOT__cin) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__7__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__8__KET____DOT__fa_inst__DOT__c2 
        = ((IData)(vlSelfRef.rca_gen__BRA__8__KET____DOT__fa_inst__DOT__cin) 
           & (IData)(vlSelfRef.rca_gen__BRA__8__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__8__KET____DOT__fa_inst__DOT__sum 
        = ((IData)(vlSelfRef.rca_gen__BRA__8__KET____DOT__fa_inst__DOT__cin) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__8__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__9__KET____DOT__fa_inst__DOT__c2 
        = ((IData)(vlSelfRef.rca_gen__BRA__9__KET____DOT__fa_inst__DOT__cin) 
           & (IData)(vlSelfRef.rca_gen__BRA__9__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__9__KET____DOT__fa_inst__DOT__sum 
        = ((IData)(vlSelfRef.rca_gen__BRA__9__KET____DOT__fa_inst__DOT__cin) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__9__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__10__KET____DOT__fa_inst__DOT__c2 
        = ((IData)(vlSelfRef.rca_gen__BRA__10__KET____DOT__fa_inst__DOT__cin) 
           & (IData)(vlSelfRef.rca_gen__BRA__10__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__10__KET____DOT__fa_inst__DOT__sum 
        = ((IData)(vlSelfRef.rca_gen__BRA__10__KET____DOT__fa_inst__DOT__cin) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__10__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__11__KET____DOT__fa_inst__DOT__c2 
        = ((IData)(vlSelfRef.rca_gen__BRA__11__KET____DOT__fa_inst__DOT__cin) 
           & (IData)(vlSelfRef.rca_gen__BRA__11__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__11__KET____DOT__fa_inst__DOT__sum 
        = ((IData)(vlSelfRef.rca_gen__BRA__11__KET____DOT__fa_inst__DOT__cin) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__11__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__12__KET____DOT__fa_inst__DOT__c2 
        = ((IData)(vlSelfRef.rca_gen__BRA__12__KET____DOT__fa_inst__DOT__cin) 
           & (IData)(vlSelfRef.rca_gen__BRA__12__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__12__KET____DOT__fa_inst__DOT__sum 
        = ((IData)(vlSelfRef.rca_gen__BRA__12__KET____DOT__fa_inst__DOT__cin) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__12__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__13__KET____DOT__fa_inst__DOT__c2 
        = ((IData)(vlSelfRef.rca_gen__BRA__13__KET____DOT__fa_inst__DOT__cin) 
           & (IData)(vlSelfRef.rca_gen__BRA__13__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__13__KET____DOT__fa_inst__DOT__sum 
        = ((IData)(vlSelfRef.rca_gen__BRA__13__KET____DOT__fa_inst__DOT__cin) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__13__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__14__KET____DOT__fa_inst__DOT__c2 
        = ((IData)(vlSelfRef.rca_gen__BRA__14__KET____DOT__fa_inst__DOT__cin) 
           & (IData)(vlSelfRef.rca_gen__BRA__14__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__14__KET____DOT__fa_inst__DOT__sum 
        = ((IData)(vlSelfRef.rca_gen__BRA__14__KET____DOT__fa_inst__DOT__cin) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__14__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__15__KET____DOT__fa_inst__DOT__c2 
        = ((IData)(vlSelfRef.rca_gen__BRA__15__KET____DOT__fa_inst__DOT__cin) 
           & (IData)(vlSelfRef.rca_gen__BRA__15__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__15__KET____DOT__fa_inst__DOT__sum 
        = ((IData)(vlSelfRef.rca_gen__BRA__15__KET____DOT__fa_inst__DOT__cin) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__15__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__16__KET____DOT__fa_inst__DOT__c2 
        = ((IData)(vlSelfRef.rca_gen__BRA__16__KET____DOT__fa_inst__DOT__cin) 
           & (IData)(vlSelfRef.rca_gen__BRA__16__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__16__KET____DOT__fa_inst__DOT__sum 
        = ((IData)(vlSelfRef.rca_gen__BRA__16__KET____DOT__fa_inst__DOT__cin) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__16__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__17__KET____DOT__fa_inst__DOT__c2 
        = ((IData)(vlSelfRef.rca_gen__BRA__17__KET____DOT__fa_inst__DOT__cin) 
           & (IData)(vlSelfRef.rca_gen__BRA__17__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__17__KET____DOT__fa_inst__DOT__sum 
        = ((IData)(vlSelfRef.rca_gen__BRA__17__KET____DOT__fa_inst__DOT__cin) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__17__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__18__KET____DOT__fa_inst__DOT__c2 
        = ((IData)(vlSelfRef.rca_gen__BRA__18__KET____DOT__fa_inst__DOT__cin) 
           & (IData)(vlSelfRef.rca_gen__BRA__18__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__18__KET____DOT__fa_inst__DOT__sum 
        = ((IData)(vlSelfRef.rca_gen__BRA__18__KET____DOT__fa_inst__DOT__cin) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__18__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__19__KET____DOT__fa_inst__DOT__c2 
        = ((IData)(vlSelfRef.rca_gen__BRA__19__KET____DOT__fa_inst__DOT__cin) 
           & (IData)(vlSelfRef.rca_gen__BRA__19__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__19__KET____DOT__fa_inst__DOT__sum 
        = ((IData)(vlSelfRef.rca_gen__BRA__19__KET____DOT__fa_inst__DOT__cin) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__19__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__20__KET____DOT__fa_inst__DOT__c2 
        = ((IData)(vlSelfRef.rca_gen__BRA__20__KET____DOT__fa_inst__DOT__cin) 
           & (IData)(vlSelfRef.rca_gen__BRA__20__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__20__KET____DOT__fa_inst__DOT__sum 
        = ((IData)(vlSelfRef.rca_gen__BRA__20__KET____DOT__fa_inst__DOT__cin) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__20__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__21__KET____DOT__fa_inst__DOT__c2 
        = ((IData)(vlSelfRef.rca_gen__BRA__21__KET____DOT__fa_inst__DOT__cin) 
           & (IData)(vlSelfRef.rca_gen__BRA__21__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__21__KET____DOT__fa_inst__DOT__sum 
        = ((IData)(vlSelfRef.rca_gen__BRA__21__KET____DOT__fa_inst__DOT__cin) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__21__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__22__KET____DOT__fa_inst__DOT__c2 
        = ((IData)(vlSelfRef.rca_gen__BRA__22__KET____DOT__fa_inst__DOT__cin) 
           & (IData)(vlSelfRef.rca_gen__BRA__22__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__22__KET____DOT__fa_inst__DOT__sum 
        = ((IData)(vlSelfRef.rca_gen__BRA__22__KET____DOT__fa_inst__DOT__cin) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__22__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__23__KET____DOT__fa_inst__DOT__c2 
        = ((IData)(vlSelfRef.rca_gen__BRA__23__KET____DOT__fa_inst__DOT__cin) 
           & (IData)(vlSelfRef.rca_gen__BRA__23__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__23__KET____DOT__fa_inst__DOT__sum 
        = ((IData)(vlSelfRef.rca_gen__BRA__23__KET____DOT__fa_inst__DOT__cin) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__23__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__24__KET____DOT__fa_inst__DOT__c2 
        = ((IData)(vlSelfRef.rca_gen__BRA__24__KET____DOT__fa_inst__DOT__cin) 
           & (IData)(vlSelfRef.rca_gen__BRA__24__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__24__KET____DOT__fa_inst__DOT__sum 
        = ((IData)(vlSelfRef.rca_gen__BRA__24__KET____DOT__fa_inst__DOT__cin) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__24__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__25__KET____DOT__fa_inst__DOT__c2 
        = ((IData)(vlSelfRef.rca_gen__BRA__25__KET____DOT__fa_inst__DOT__cin) 
           & (IData)(vlSelfRef.rca_gen__BRA__25__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__25__KET____DOT__fa_inst__DOT__sum 
        = ((IData)(vlSelfRef.rca_gen__BRA__25__KET____DOT__fa_inst__DOT__cin) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__25__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__26__KET____DOT__fa_inst__DOT__c2 
        = ((IData)(vlSelfRef.rca_gen__BRA__26__KET____DOT__fa_inst__DOT__cin) 
           & (IData)(vlSelfRef.rca_gen__BRA__26__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__26__KET____DOT__fa_inst__DOT__sum 
        = ((IData)(vlSelfRef.rca_gen__BRA__26__KET____DOT__fa_inst__DOT__cin) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__26__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__27__KET____DOT__fa_inst__DOT__c2 
        = ((IData)(vlSelfRef.rca_gen__BRA__27__KET____DOT__fa_inst__DOT__cin) 
           & (IData)(vlSelfRef.rca_gen__BRA__27__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__27__KET____DOT__fa_inst__DOT__sum 
        = ((IData)(vlSelfRef.rca_gen__BRA__27__KET____DOT__fa_inst__DOT__cin) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__27__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__28__KET____DOT__fa_inst__DOT__c2 
        = ((IData)(vlSelfRef.rca_gen__BRA__28__KET____DOT__fa_inst__DOT__cin) 
           & (IData)(vlSelfRef.rca_gen__BRA__28__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__28__KET____DOT__fa_inst__DOT__sum 
        = ((IData)(vlSelfRef.rca_gen__BRA__28__KET____DOT__fa_inst__DOT__cin) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__28__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__29__KET____DOT__fa_inst__DOT__c2 
        = ((IData)(vlSelfRef.rca_gen__BRA__29__KET____DOT__fa_inst__DOT__cin) 
           & (IData)(vlSelfRef.rca_gen__BRA__29__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__29__KET____DOT__fa_inst__DOT__sum 
        = ((IData)(vlSelfRef.rca_gen__BRA__29__KET____DOT__fa_inst__DOT__cin) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__29__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__30__KET____DOT__fa_inst__DOT__c2 
        = ((IData)(vlSelfRef.rca_gen__BRA__30__KET____DOT__fa_inst__DOT__cin) 
           & (IData)(vlSelfRef.rca_gen__BRA__30__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__30__KET____DOT__fa_inst__DOT__sum 
        = ((IData)(vlSelfRef.rca_gen__BRA__30__KET____DOT__fa_inst__DOT__cin) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__30__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__31__KET____DOT__fa_inst__DOT__c2 
        = ((IData)(vlSelfRef.rca_gen__BRA__31__KET____DOT__fa_inst__DOT__cin) 
           & (IData)(vlSelfRef.rca_gen__BRA__31__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__31__KET____DOT__fa_inst__DOT__sum 
        = ((IData)(vlSelfRef.rca_gen__BRA__31__KET____DOT__fa_inst__DOT__cin) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__31__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__32__KET____DOT__fa_inst__DOT__c2 
        = ((IData)(vlSelfRef.rca_gen__BRA__32__KET____DOT__fa_inst__DOT__cin) 
           & (IData)(vlSelfRef.rca_gen__BRA__32__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__32__KET____DOT__fa_inst__DOT__sum 
        = ((IData)(vlSelfRef.rca_gen__BRA__32__KET____DOT__fa_inst__DOT__cin) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__32__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__33__KET____DOT__fa_inst__DOT__c2 
        = ((IData)(vlSelfRef.rca_gen__BRA__33__KET____DOT__fa_inst__DOT__cin) 
           & (IData)(vlSelfRef.rca_gen__BRA__33__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__33__KET____DOT__fa_inst__DOT__sum 
        = ((IData)(vlSelfRef.rca_gen__BRA__33__KET____DOT__fa_inst__DOT__cin) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__33__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__34__KET____DOT__fa_inst__DOT__c2 
        = ((IData)(vlSelfRef.rca_gen__BRA__34__KET____DOT__fa_inst__DOT__cin) 
           & (IData)(vlSelfRef.rca_gen__BRA__34__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__34__KET____DOT__fa_inst__DOT__sum 
        = ((IData)(vlSelfRef.rca_gen__BRA__34__KET____DOT__fa_inst__DOT__cin) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__34__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__35__KET____DOT__fa_inst__DOT__c2 
        = ((IData)(vlSelfRef.rca_gen__BRA__35__KET____DOT__fa_inst__DOT__cin) 
           & (IData)(vlSelfRef.rca_gen__BRA__35__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__35__KET____DOT__fa_inst__DOT__sum 
        = ((IData)(vlSelfRef.rca_gen__BRA__35__KET____DOT__fa_inst__DOT__cin) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__35__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__36__KET____DOT__fa_inst__DOT__c2 
        = ((IData)(vlSelfRef.rca_gen__BRA__36__KET____DOT__fa_inst__DOT__cin) 
           & (IData)(vlSelfRef.rca_gen__BRA__36__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__36__KET____DOT__fa_inst__DOT__sum 
        = ((IData)(vlSelfRef.rca_gen__BRA__36__KET____DOT__fa_inst__DOT__cin) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__36__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__37__KET____DOT__fa_inst__DOT__c2 
        = ((IData)(vlSelfRef.rca_gen__BRA__37__KET____DOT__fa_inst__DOT__cin) 
           & (IData)(vlSelfRef.rca_gen__BRA__37__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__37__KET____DOT__fa_inst__DOT__sum 
        = ((IData)(vlSelfRef.rca_gen__BRA__37__KET____DOT__fa_inst__DOT__cin) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__37__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__38__KET____DOT__fa_inst__DOT__c2 
        = ((IData)(vlSelfRef.rca_gen__BRA__38__KET____DOT__fa_inst__DOT__cin) 
           & (IData)(vlSelfRef.rca_gen__BRA__38__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__38__KET____DOT__fa_inst__DOT__sum 
        = ((IData)(vlSelfRef.rca_gen__BRA__38__KET____DOT__fa_inst__DOT__cin) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__38__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__39__KET____DOT__fa_inst__DOT__c2 
        = ((IData)(vlSelfRef.rca_gen__BRA__39__KET____DOT__fa_inst__DOT__cin) 
           & (IData)(vlSelfRef.rca_gen__BRA__39__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__39__KET____DOT__fa_inst__DOT__sum 
        = ((IData)(vlSelfRef.rca_gen__BRA__39__KET____DOT__fa_inst__DOT__cin) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__39__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__40__KET____DOT__fa_inst__DOT__c2 
        = ((IData)(vlSelfRef.rca_gen__BRA__40__KET____DOT__fa_inst__DOT__cin) 
           & (IData)(vlSelfRef.rca_gen__BRA__40__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__40__KET____DOT__fa_inst__DOT__sum 
        = ((IData)(vlSelfRef.rca_gen__BRA__40__KET____DOT__fa_inst__DOT__cin) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__40__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__41__KET____DOT__fa_inst__DOT__c2 
        = ((IData)(vlSelfRef.rca_gen__BRA__41__KET____DOT__fa_inst__DOT__cin) 
           & (IData)(vlSelfRef.rca_gen__BRA__41__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__41__KET____DOT__fa_inst__DOT__sum 
        = ((IData)(vlSelfRef.rca_gen__BRA__41__KET____DOT__fa_inst__DOT__cin) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__41__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__42__KET____DOT__fa_inst__DOT__c2 
        = ((IData)(vlSelfRef.rca_gen__BRA__42__KET____DOT__fa_inst__DOT__cin) 
           & (IData)(vlSelfRef.rca_gen__BRA__42__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__42__KET____DOT__fa_inst__DOT__sum 
        = ((IData)(vlSelfRef.rca_gen__BRA__42__KET____DOT__fa_inst__DOT__cin) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__42__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__43__KET____DOT__fa_inst__DOT__c2 
        = ((IData)(vlSelfRef.rca_gen__BRA__43__KET____DOT__fa_inst__DOT__cin) 
           & (IData)(vlSelfRef.rca_gen__BRA__43__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__43__KET____DOT__fa_inst__DOT__sum 
        = ((IData)(vlSelfRef.rca_gen__BRA__43__KET____DOT__fa_inst__DOT__cin) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__43__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__44__KET____DOT__fa_inst__DOT__c2 
        = ((IData)(vlSelfRef.rca_gen__BRA__44__KET____DOT__fa_inst__DOT__cin) 
           & (IData)(vlSelfRef.rca_gen__BRA__44__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__44__KET____DOT__fa_inst__DOT__sum 
        = ((IData)(vlSelfRef.rca_gen__BRA__44__KET____DOT__fa_inst__DOT__cin) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__44__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__45__KET____DOT__fa_inst__DOT__c2 
        = ((IData)(vlSelfRef.rca_gen__BRA__45__KET____DOT__fa_inst__DOT__cin) 
           & (IData)(vlSelfRef.rca_gen__BRA__45__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__45__KET____DOT__fa_inst__DOT__sum 
        = ((IData)(vlSelfRef.rca_gen__BRA__45__KET____DOT__fa_inst__DOT__cin) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__45__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__46__KET____DOT__fa_inst__DOT__c2 
        = ((IData)(vlSelfRef.rca_gen__BRA__46__KET____DOT__fa_inst__DOT__cin) 
           & (IData)(vlSelfRef.rca_gen__BRA__46__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__46__KET____DOT__fa_inst__DOT__sum 
        = ((IData)(vlSelfRef.rca_gen__BRA__46__KET____DOT__fa_inst__DOT__cin) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__46__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__47__KET____DOT__fa_inst__DOT__c2 
        = ((IData)(vlSelfRef.rca_gen__BRA__47__KET____DOT__fa_inst__DOT__cin) 
           & (IData)(vlSelfRef.rca_gen__BRA__47__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__47__KET____DOT__fa_inst__DOT__sum 
        = ((IData)(vlSelfRef.rca_gen__BRA__47__KET____DOT__fa_inst__DOT__cin) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__47__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__48__KET____DOT__fa_inst__DOT__c2 
        = ((IData)(vlSelfRef.rca_gen__BRA__48__KET____DOT__fa_inst__DOT__cin) 
           & (IData)(vlSelfRef.rca_gen__BRA__48__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__48__KET____DOT__fa_inst__DOT__sum 
        = ((IData)(vlSelfRef.rca_gen__BRA__48__KET____DOT__fa_inst__DOT__cin) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__48__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__49__KET____DOT__fa_inst__DOT__c2 
        = ((IData)(vlSelfRef.rca_gen__BRA__49__KET____DOT__fa_inst__DOT__cin) 
           & (IData)(vlSelfRef.rca_gen__BRA__49__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__49__KET____DOT__fa_inst__DOT__sum 
        = ((IData)(vlSelfRef.rca_gen__BRA__49__KET____DOT__fa_inst__DOT__cin) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__49__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__50__KET____DOT__fa_inst__DOT__c2 
        = ((IData)(vlSelfRef.rca_gen__BRA__50__KET____DOT__fa_inst__DOT__cin) 
           & (IData)(vlSelfRef.rca_gen__BRA__50__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__50__KET____DOT__fa_inst__DOT__sum 
        = ((IData)(vlSelfRef.rca_gen__BRA__50__KET____DOT__fa_inst__DOT__cin) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__50__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__51__KET____DOT__fa_inst__DOT__c2 
        = ((IData)(vlSelfRef.rca_gen__BRA__51__KET____DOT__fa_inst__DOT__cin) 
           & (IData)(vlSelfRef.rca_gen__BRA__51__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__51__KET____DOT__fa_inst__DOT__sum 
        = ((IData)(vlSelfRef.rca_gen__BRA__51__KET____DOT__fa_inst__DOT__cin) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__51__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__52__KET____DOT__fa_inst__DOT__c2 
        = ((IData)(vlSelfRef.rca_gen__BRA__52__KET____DOT__fa_inst__DOT__cin) 
           & (IData)(vlSelfRef.rca_gen__BRA__52__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__52__KET____DOT__fa_inst__DOT__sum 
        = ((IData)(vlSelfRef.rca_gen__BRA__52__KET____DOT__fa_inst__DOT__cin) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__52__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__53__KET____DOT__fa_inst__DOT__c2 
        = ((IData)(vlSelfRef.rca_gen__BRA__53__KET____DOT__fa_inst__DOT__cin) 
           & (IData)(vlSelfRef.rca_gen__BRA__53__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__53__KET____DOT__fa_inst__DOT__sum 
        = ((IData)(vlSelfRef.rca_gen__BRA__53__KET____DOT__fa_inst__DOT__cin) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__53__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__54__KET____DOT__fa_inst__DOT__c2 
        = ((IData)(vlSelfRef.rca_gen__BRA__54__KET____DOT__fa_inst__DOT__cin) 
           & (IData)(vlSelfRef.rca_gen__BRA__54__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__54__KET____DOT__fa_inst__DOT__sum 
        = ((IData)(vlSelfRef.rca_gen__BRA__54__KET____DOT__fa_inst__DOT__cin) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__54__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__55__KET____DOT__fa_inst__DOT__c2 
        = ((IData)(vlSelfRef.rca_gen__BRA__55__KET____DOT__fa_inst__DOT__cin) 
           & (IData)(vlSelfRef.rca_gen__BRA__55__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__55__KET____DOT__fa_inst__DOT__sum 
        = ((IData)(vlSelfRef.rca_gen__BRA__55__KET____DOT__fa_inst__DOT__cin) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__55__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__56__KET____DOT__fa_inst__DOT__c2 
        = ((IData)(vlSelfRef.rca_gen__BRA__56__KET____DOT__fa_inst__DOT__cin) 
           & (IData)(vlSelfRef.rca_gen__BRA__56__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__56__KET____DOT__fa_inst__DOT__sum 
        = ((IData)(vlSelfRef.rca_gen__BRA__56__KET____DOT__fa_inst__DOT__cin) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__56__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__57__KET____DOT__fa_inst__DOT__c2 
        = ((IData)(vlSelfRef.rca_gen__BRA__57__KET____DOT__fa_inst__DOT__cin) 
           & (IData)(vlSelfRef.rca_gen__BRA__57__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__57__KET____DOT__fa_inst__DOT__sum 
        = ((IData)(vlSelfRef.rca_gen__BRA__57__KET____DOT__fa_inst__DOT__cin) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__57__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__58__KET____DOT__fa_inst__DOT__c2 
        = ((IData)(vlSelfRef.rca_gen__BRA__58__KET____DOT__fa_inst__DOT__cin) 
           & (IData)(vlSelfRef.rca_gen__BRA__58__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__58__KET____DOT__fa_inst__DOT__sum 
        = ((IData)(vlSelfRef.rca_gen__BRA__58__KET____DOT__fa_inst__DOT__cin) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__58__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__59__KET____DOT__fa_inst__DOT__c2 
        = ((IData)(vlSelfRef.rca_gen__BRA__59__KET____DOT__fa_inst__DOT__cin) 
           & (IData)(vlSelfRef.rca_gen__BRA__59__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__59__KET____DOT__fa_inst__DOT__sum 
        = ((IData)(vlSelfRef.rca_gen__BRA__59__KET____DOT__fa_inst__DOT__cin) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__59__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__60__KET____DOT__fa_inst__DOT__c2 
        = ((IData)(vlSelfRef.rca_gen__BRA__60__KET____DOT__fa_inst__DOT__cin) 
           & (IData)(vlSelfRef.rca_gen__BRA__60__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__60__KET____DOT__fa_inst__DOT__sum 
        = ((IData)(vlSelfRef.rca_gen__BRA__60__KET____DOT__fa_inst__DOT__cin) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__60__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__61__KET____DOT__fa_inst__DOT__c2 
        = ((IData)(vlSelfRef.rca_gen__BRA__61__KET____DOT__fa_inst__DOT__cin) 
           & (IData)(vlSelfRef.rca_gen__BRA__61__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__61__KET____DOT__fa_inst__DOT__sum 
        = ((IData)(vlSelfRef.rca_gen__BRA__61__KET____DOT__fa_inst__DOT__cin) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__61__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__62__KET____DOT__fa_inst__DOT__c2 
        = ((IData)(vlSelfRef.rca_gen__BRA__62__KET____DOT__fa_inst__DOT__cin) 
           & (IData)(vlSelfRef.rca_gen__BRA__62__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__62__KET____DOT__fa_inst__DOT__sum 
        = ((IData)(vlSelfRef.rca_gen__BRA__62__KET____DOT__fa_inst__DOT__cin) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__62__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__63__KET____DOT__fa_inst__DOT__c2 
        = ((IData)(vlSelfRef.rca_gen__BRA__63__KET____DOT__fa_inst__DOT__cin) 
           & (IData)(vlSelfRef.rca_gen__BRA__63__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__63__KET____DOT__fa_inst__DOT__sum 
        = ((IData)(vlSelfRef.rca_gen__BRA__63__KET____DOT__fa_inst__DOT__cin) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__63__KET____DOT__fa_inst__DOT__x1));
    vlSelfRef.rca_gen__BRA__0__KET____DOT__fa_inst__DOT__cout 
        = ((IData)(vlSelfRef.rca_gen__BRA__0__KET____DOT__fa_inst__DOT__c1) 
           | (IData)(vlSelfRef.rca_gen__BRA__0__KET____DOT__fa_inst__DOT__c2));
    vlSelfRef.rca_gen__BRA__1__KET____DOT__fa_inst__DOT__cout 
        = ((IData)(vlSelfRef.rca_gen__BRA__1__KET____DOT__fa_inst__DOT__c1) 
           | (IData)(vlSelfRef.rca_gen__BRA__1__KET____DOT__fa_inst__DOT__c2));
    vlSelfRef.rca_gen__BRA__2__KET____DOT__fa_inst__DOT__cout 
        = ((IData)(vlSelfRef.rca_gen__BRA__2__KET____DOT__fa_inst__DOT__c1) 
           | (IData)(vlSelfRef.rca_gen__BRA__2__KET____DOT__fa_inst__DOT__c2));
    vlSelfRef.rca_gen__BRA__3__KET____DOT__fa_inst__DOT__cout 
        = ((IData)(vlSelfRef.rca_gen__BRA__3__KET____DOT__fa_inst__DOT__c1) 
           | (IData)(vlSelfRef.rca_gen__BRA__3__KET____DOT__fa_inst__DOT__c2));
    vlSelfRef.rca_gen__BRA__4__KET____DOT__fa_inst__DOT__cout 
        = ((IData)(vlSelfRef.rca_gen__BRA__4__KET____DOT__fa_inst__DOT__c1) 
           | (IData)(vlSelfRef.rca_gen__BRA__4__KET____DOT__fa_inst__DOT__c2));
    vlSelfRef.rca_gen__BRA__5__KET____DOT__fa_inst__DOT__cout 
        = ((IData)(vlSelfRef.rca_gen__BRA__5__KET____DOT__fa_inst__DOT__c1) 
           | (IData)(vlSelfRef.rca_gen__BRA__5__KET____DOT__fa_inst__DOT__c2));
    vlSelfRef.rca_gen__BRA__6__KET____DOT__fa_inst__DOT__cout 
        = ((IData)(vlSelfRef.rca_gen__BRA__6__KET____DOT__fa_inst__DOT__c1) 
           | (IData)(vlSelfRef.rca_gen__BRA__6__KET____DOT__fa_inst__DOT__c2));
    vlSelfRef.rca_gen__BRA__7__KET____DOT__fa_inst__DOT__cout 
        = ((IData)(vlSelfRef.rca_gen__BRA__7__KET____DOT__fa_inst__DOT__c1) 
           | (IData)(vlSelfRef.rca_gen__BRA__7__KET____DOT__fa_inst__DOT__c2));
    vlSelfRef.rca_gen__BRA__8__KET____DOT__fa_inst__DOT__cout 
        = ((IData)(vlSelfRef.rca_gen__BRA__8__KET____DOT__fa_inst__DOT__c1) 
           | (IData)(vlSelfRef.rca_gen__BRA__8__KET____DOT__fa_inst__DOT__c2));
    vlSelfRef.rca_gen__BRA__9__KET____DOT__fa_inst__DOT__cout 
        = ((IData)(vlSelfRef.rca_gen__BRA__9__KET____DOT__fa_inst__DOT__c1) 
           | (IData)(vlSelfRef.rca_gen__BRA__9__KET____DOT__fa_inst__DOT__c2));
    vlSelfRef.rca_gen__BRA__10__KET____DOT__fa_inst__DOT__cout 
        = ((IData)(vlSelfRef.rca_gen__BRA__10__KET____DOT__fa_inst__DOT__c1) 
           | (IData)(vlSelfRef.rca_gen__BRA__10__KET____DOT__fa_inst__DOT__c2));
    vlSelfRef.rca_gen__BRA__11__KET____DOT__fa_inst__DOT__cout 
        = ((IData)(vlSelfRef.rca_gen__BRA__11__KET____DOT__fa_inst__DOT__c1) 
           | (IData)(vlSelfRef.rca_gen__BRA__11__KET____DOT__fa_inst__DOT__c2));
    vlSelfRef.rca_gen__BRA__12__KET____DOT__fa_inst__DOT__cout 
        = ((IData)(vlSelfRef.rca_gen__BRA__12__KET____DOT__fa_inst__DOT__c1) 
           | (IData)(vlSelfRef.rca_gen__BRA__12__KET____DOT__fa_inst__DOT__c2));
    vlSelfRef.rca_gen__BRA__13__KET____DOT__fa_inst__DOT__cout 
        = ((IData)(vlSelfRef.rca_gen__BRA__13__KET____DOT__fa_inst__DOT__c1) 
           | (IData)(vlSelfRef.rca_gen__BRA__13__KET____DOT__fa_inst__DOT__c2));
    vlSelfRef.rca_gen__BRA__14__KET____DOT__fa_inst__DOT__cout 
        = ((IData)(vlSelfRef.rca_gen__BRA__14__KET____DOT__fa_inst__DOT__c1) 
           | (IData)(vlSelfRef.rca_gen__BRA__14__KET____DOT__fa_inst__DOT__c2));
    vlSelfRef.rca_gen__BRA__15__KET____DOT__fa_inst__DOT__cout 
        = ((IData)(vlSelfRef.rca_gen__BRA__15__KET____DOT__fa_inst__DOT__c1) 
           | (IData)(vlSelfRef.rca_gen__BRA__15__KET____DOT__fa_inst__DOT__c2));
    vlSelfRef.rca_gen__BRA__16__KET____DOT__fa_inst__DOT__cout 
        = ((IData)(vlSelfRef.rca_gen__BRA__16__KET____DOT__fa_inst__DOT__c1) 
           | (IData)(vlSelfRef.rca_gen__BRA__16__KET____DOT__fa_inst__DOT__c2));
    vlSelfRef.rca_gen__BRA__17__KET____DOT__fa_inst__DOT__cout 
        = ((IData)(vlSelfRef.rca_gen__BRA__17__KET____DOT__fa_inst__DOT__c1) 
           | (IData)(vlSelfRef.rca_gen__BRA__17__KET____DOT__fa_inst__DOT__c2));
    vlSelfRef.rca_gen__BRA__18__KET____DOT__fa_inst__DOT__cout 
        = ((IData)(vlSelfRef.rca_gen__BRA__18__KET____DOT__fa_inst__DOT__c1) 
           | (IData)(vlSelfRef.rca_gen__BRA__18__KET____DOT__fa_inst__DOT__c2));
    vlSelfRef.rca_gen__BRA__19__KET____DOT__fa_inst__DOT__cout 
        = ((IData)(vlSelfRef.rca_gen__BRA__19__KET____DOT__fa_inst__DOT__c1) 
           | (IData)(vlSelfRef.rca_gen__BRA__19__KET____DOT__fa_inst__DOT__c2));
    vlSelfRef.rca_gen__BRA__20__KET____DOT__fa_inst__DOT__cout 
        = ((IData)(vlSelfRef.rca_gen__BRA__20__KET____DOT__fa_inst__DOT__c1) 
           | (IData)(vlSelfRef.rca_gen__BRA__20__KET____DOT__fa_inst__DOT__c2));
    vlSelfRef.rca_gen__BRA__21__KET____DOT__fa_inst__DOT__cout 
        = ((IData)(vlSelfRef.rca_gen__BRA__21__KET____DOT__fa_inst__DOT__c1) 
           | (IData)(vlSelfRef.rca_gen__BRA__21__KET____DOT__fa_inst__DOT__c2));
    vlSelfRef.rca_gen__BRA__22__KET____DOT__fa_inst__DOT__cout 
        = ((IData)(vlSelfRef.rca_gen__BRA__22__KET____DOT__fa_inst__DOT__c1) 
           | (IData)(vlSelfRef.rca_gen__BRA__22__KET____DOT__fa_inst__DOT__c2));
    vlSelfRef.rca_gen__BRA__23__KET____DOT__fa_inst__DOT__cout 
        = ((IData)(vlSelfRef.rca_gen__BRA__23__KET____DOT__fa_inst__DOT__c1) 
           | (IData)(vlSelfRef.rca_gen__BRA__23__KET____DOT__fa_inst__DOT__c2));
    vlSelfRef.rca_gen__BRA__24__KET____DOT__fa_inst__DOT__cout 
        = ((IData)(vlSelfRef.rca_gen__BRA__24__KET____DOT__fa_inst__DOT__c1) 
           | (IData)(vlSelfRef.rca_gen__BRA__24__KET____DOT__fa_inst__DOT__c2));
    vlSelfRef.rca_gen__BRA__25__KET____DOT__fa_inst__DOT__cout 
        = ((IData)(vlSelfRef.rca_gen__BRA__25__KET____DOT__fa_inst__DOT__c1) 
           | (IData)(vlSelfRef.rca_gen__BRA__25__KET____DOT__fa_inst__DOT__c2));
    vlSelfRef.rca_gen__BRA__26__KET____DOT__fa_inst__DOT__cout 
        = ((IData)(vlSelfRef.rca_gen__BRA__26__KET____DOT__fa_inst__DOT__c1) 
           | (IData)(vlSelfRef.rca_gen__BRA__26__KET____DOT__fa_inst__DOT__c2));
    vlSelfRef.rca_gen__BRA__27__KET____DOT__fa_inst__DOT__cout 
        = ((IData)(vlSelfRef.rca_gen__BRA__27__KET____DOT__fa_inst__DOT__c1) 
           | (IData)(vlSelfRef.rca_gen__BRA__27__KET____DOT__fa_inst__DOT__c2));
    vlSelfRef.rca_gen__BRA__28__KET____DOT__fa_inst__DOT__cout 
        = ((IData)(vlSelfRef.rca_gen__BRA__28__KET____DOT__fa_inst__DOT__c1) 
           | (IData)(vlSelfRef.rca_gen__BRA__28__KET____DOT__fa_inst__DOT__c2));
    vlSelfRef.rca_gen__BRA__29__KET____DOT__fa_inst__DOT__cout 
        = ((IData)(vlSelfRef.rca_gen__BRA__29__KET____DOT__fa_inst__DOT__c1) 
           | (IData)(vlSelfRef.rca_gen__BRA__29__KET____DOT__fa_inst__DOT__c2));
    vlSelfRef.rca_gen__BRA__30__KET____DOT__fa_inst__DOT__cout 
        = ((IData)(vlSelfRef.rca_gen__BRA__30__KET____DOT__fa_inst__DOT__c1) 
           | (IData)(vlSelfRef.rca_gen__BRA__30__KET____DOT__fa_inst__DOT__c2));
    vlSelfRef.rca_gen__BRA__31__KET____DOT__fa_inst__DOT__cout 
        = ((IData)(vlSelfRef.rca_gen__BRA__31__KET____DOT__fa_inst__DOT__c1) 
           | (IData)(vlSelfRef.rca_gen__BRA__31__KET____DOT__fa_inst__DOT__c2));
    vlSelfRef.rca_gen__BRA__32__KET____DOT__fa_inst__DOT__cout 
        = ((IData)(vlSelfRef.rca_gen__BRA__32__KET____DOT__fa_inst__DOT__c1) 
           | (IData)(vlSelfRef.rca_gen__BRA__32__KET____DOT__fa_inst__DOT__c2));
    vlSelfRef.rca_gen__BRA__33__KET____DOT__fa_inst__DOT__cout 
        = ((IData)(vlSelfRef.rca_gen__BRA__33__KET____DOT__fa_inst__DOT__c1) 
           | (IData)(vlSelfRef.rca_gen__BRA__33__KET____DOT__fa_inst__DOT__c2));
    vlSelfRef.rca_gen__BRA__34__KET____DOT__fa_inst__DOT__cout 
        = ((IData)(vlSelfRef.rca_gen__BRA__34__KET____DOT__fa_inst__DOT__c1) 
           | (IData)(vlSelfRef.rca_gen__BRA__34__KET____DOT__fa_inst__DOT__c2));
    vlSelfRef.rca_gen__BRA__35__KET____DOT__fa_inst__DOT__cout 
        = ((IData)(vlSelfRef.rca_gen__BRA__35__KET____DOT__fa_inst__DOT__c1) 
           | (IData)(vlSelfRef.rca_gen__BRA__35__KET____DOT__fa_inst__DOT__c2));
    vlSelfRef.rca_gen__BRA__36__KET____DOT__fa_inst__DOT__cout 
        = ((IData)(vlSelfRef.rca_gen__BRA__36__KET____DOT__fa_inst__DOT__c1) 
           | (IData)(vlSelfRef.rca_gen__BRA__36__KET____DOT__fa_inst__DOT__c2));
    vlSelfRef.rca_gen__BRA__37__KET____DOT__fa_inst__DOT__cout 
        = ((IData)(vlSelfRef.rca_gen__BRA__37__KET____DOT__fa_inst__DOT__c1) 
           | (IData)(vlSelfRef.rca_gen__BRA__37__KET____DOT__fa_inst__DOT__c2));
    vlSelfRef.rca_gen__BRA__38__KET____DOT__fa_inst__DOT__cout 
        = ((IData)(vlSelfRef.rca_gen__BRA__38__KET____DOT__fa_inst__DOT__c1) 
           | (IData)(vlSelfRef.rca_gen__BRA__38__KET____DOT__fa_inst__DOT__c2));
    vlSelfRef.rca_gen__BRA__39__KET____DOT__fa_inst__DOT__cout 
        = ((IData)(vlSelfRef.rca_gen__BRA__39__KET____DOT__fa_inst__DOT__c1) 
           | (IData)(vlSelfRef.rca_gen__BRA__39__KET____DOT__fa_inst__DOT__c2));
    vlSelfRef.rca_gen__BRA__40__KET____DOT__fa_inst__DOT__cout 
        = ((IData)(vlSelfRef.rca_gen__BRA__40__KET____DOT__fa_inst__DOT__c1) 
           | (IData)(vlSelfRef.rca_gen__BRA__40__KET____DOT__fa_inst__DOT__c2));
    vlSelfRef.rca_gen__BRA__41__KET____DOT__fa_inst__DOT__cout 
        = ((IData)(vlSelfRef.rca_gen__BRA__41__KET____DOT__fa_inst__DOT__c1) 
           | (IData)(vlSelfRef.rca_gen__BRA__41__KET____DOT__fa_inst__DOT__c2));
    vlSelfRef.rca_gen__BRA__42__KET____DOT__fa_inst__DOT__cout 
        = ((IData)(vlSelfRef.rca_gen__BRA__42__KET____DOT__fa_inst__DOT__c1) 
           | (IData)(vlSelfRef.rca_gen__BRA__42__KET____DOT__fa_inst__DOT__c2));
    vlSelfRef.rca_gen__BRA__43__KET____DOT__fa_inst__DOT__cout 
        = ((IData)(vlSelfRef.rca_gen__BRA__43__KET____DOT__fa_inst__DOT__c1) 
           | (IData)(vlSelfRef.rca_gen__BRA__43__KET____DOT__fa_inst__DOT__c2));
    vlSelfRef.rca_gen__BRA__44__KET____DOT__fa_inst__DOT__cout 
        = ((IData)(vlSelfRef.rca_gen__BRA__44__KET____DOT__fa_inst__DOT__c1) 
           | (IData)(vlSelfRef.rca_gen__BRA__44__KET____DOT__fa_inst__DOT__c2));
    vlSelfRef.rca_gen__BRA__45__KET____DOT__fa_inst__DOT__cout 
        = ((IData)(vlSelfRef.rca_gen__BRA__45__KET____DOT__fa_inst__DOT__c1) 
           | (IData)(vlSelfRef.rca_gen__BRA__45__KET____DOT__fa_inst__DOT__c2));
    vlSelfRef.rca_gen__BRA__46__KET____DOT__fa_inst__DOT__cout 
        = ((IData)(vlSelfRef.rca_gen__BRA__46__KET____DOT__fa_inst__DOT__c1) 
           | (IData)(vlSelfRef.rca_gen__BRA__46__KET____DOT__fa_inst__DOT__c2));
    vlSelfRef.rca_gen__BRA__47__KET____DOT__fa_inst__DOT__cout 
        = ((IData)(vlSelfRef.rca_gen__BRA__47__KET____DOT__fa_inst__DOT__c1) 
           | (IData)(vlSelfRef.rca_gen__BRA__47__KET____DOT__fa_inst__DOT__c2));
    vlSelfRef.rca_gen__BRA__48__KET____DOT__fa_inst__DOT__cout 
        = ((IData)(vlSelfRef.rca_gen__BRA__48__KET____DOT__fa_inst__DOT__c1) 
           | (IData)(vlSelfRef.rca_gen__BRA__48__KET____DOT__fa_inst__DOT__c2));
    vlSelfRef.rca_gen__BRA__49__KET____DOT__fa_inst__DOT__cout 
        = ((IData)(vlSelfRef.rca_gen__BRA__49__KET____DOT__fa_inst__DOT__c1) 
           | (IData)(vlSelfRef.rca_gen__BRA__49__KET____DOT__fa_inst__DOT__c2));
    vlSelfRef.rca_gen__BRA__50__KET____DOT__fa_inst__DOT__cout 
        = ((IData)(vlSelfRef.rca_gen__BRA__50__KET____DOT__fa_inst__DOT__c1) 
           | (IData)(vlSelfRef.rca_gen__BRA__50__KET____DOT__fa_inst__DOT__c2));
    vlSelfRef.rca_gen__BRA__51__KET____DOT__fa_inst__DOT__cout 
        = ((IData)(vlSelfRef.rca_gen__BRA__51__KET____DOT__fa_inst__DOT__c1) 
           | (IData)(vlSelfRef.rca_gen__BRA__51__KET____DOT__fa_inst__DOT__c2));
    vlSelfRef.rca_gen__BRA__52__KET____DOT__fa_inst__DOT__cout 
        = ((IData)(vlSelfRef.rca_gen__BRA__52__KET____DOT__fa_inst__DOT__c1) 
           | (IData)(vlSelfRef.rca_gen__BRA__52__KET____DOT__fa_inst__DOT__c2));
    vlSelfRef.rca_gen__BRA__53__KET____DOT__fa_inst__DOT__cout 
        = ((IData)(vlSelfRef.rca_gen__BRA__53__KET____DOT__fa_inst__DOT__c1) 
           | (IData)(vlSelfRef.rca_gen__BRA__53__KET____DOT__fa_inst__DOT__c2));
    vlSelfRef.rca_gen__BRA__54__KET____DOT__fa_inst__DOT__cout 
        = ((IData)(vlSelfRef.rca_gen__BRA__54__KET____DOT__fa_inst__DOT__c1) 
           | (IData)(vlSelfRef.rca_gen__BRA__54__KET____DOT__fa_inst__DOT__c2));
    vlSelfRef.rca_gen__BRA__55__KET____DOT__fa_inst__DOT__cout 
        = ((IData)(vlSelfRef.rca_gen__BRA__55__KET____DOT__fa_inst__DOT__c1) 
           | (IData)(vlSelfRef.rca_gen__BRA__55__KET____DOT__fa_inst__DOT__c2));
    vlSelfRef.rca_gen__BRA__56__KET____DOT__fa_inst__DOT__cout 
        = ((IData)(vlSelfRef.rca_gen__BRA__56__KET____DOT__fa_inst__DOT__c1) 
           | (IData)(vlSelfRef.rca_gen__BRA__56__KET____DOT__fa_inst__DOT__c2));
    vlSelfRef.rca_gen__BRA__57__KET____DOT__fa_inst__DOT__cout 
        = ((IData)(vlSelfRef.rca_gen__BRA__57__KET____DOT__fa_inst__DOT__c1) 
           | (IData)(vlSelfRef.rca_gen__BRA__57__KET____DOT__fa_inst__DOT__c2));
    vlSelfRef.rca_gen__BRA__58__KET____DOT__fa_inst__DOT__cout 
        = ((IData)(vlSelfRef.rca_gen__BRA__58__KET____DOT__fa_inst__DOT__c1) 
           | (IData)(vlSelfRef.rca_gen__BRA__58__KET____DOT__fa_inst__DOT__c2));
    vlSelfRef.rca_gen__BRA__59__KET____DOT__fa_inst__DOT__cout 
        = ((IData)(vlSelfRef.rca_gen__BRA__59__KET____DOT__fa_inst__DOT__c1) 
           | (IData)(vlSelfRef.rca_gen__BRA__59__KET____DOT__fa_inst__DOT__c2));
    vlSelfRef.rca_gen__BRA__60__KET____DOT__fa_inst__DOT__cout 
        = ((IData)(vlSelfRef.rca_gen__BRA__60__KET____DOT__fa_inst__DOT__c1) 
           | (IData)(vlSelfRef.rca_gen__BRA__60__KET____DOT__fa_inst__DOT__c2));
    vlSelfRef.rca_gen__BRA__61__KET____DOT__fa_inst__DOT__cout 
        = ((IData)(vlSelfRef.rca_gen__BRA__61__KET____DOT__fa_inst__DOT__c1) 
           | (IData)(vlSelfRef.rca_gen__BRA__61__KET____DOT__fa_inst__DOT__c2));
    vlSelfRef.rca_gen__BRA__62__KET____DOT__fa_inst__DOT__cout 
        = ((IData)(vlSelfRef.rca_gen__BRA__62__KET____DOT__fa_inst__DOT__c1) 
           | (IData)(vlSelfRef.rca_gen__BRA__62__KET____DOT__fa_inst__DOT__c2));
    vlSelfRef.rca_gen__BRA__63__KET____DOT__fa_inst__DOT__cout 
        = ((IData)(vlSelfRef.rca_gen__BRA__63__KET____DOT__fa_inst__DOT__c1) 
           | (IData)(vlSelfRef.rca_gen__BRA__63__KET____DOT__fa_inst__DOT__c2));
    vlSelfRef.sum = (((QData)((IData)((((((((((IData)(vlSelfRef.rca_gen__BRA__63__KET____DOT__fa_inst__DOT__sum) 
                                              << 3U) 
                                             | ((IData)(vlSelfRef.rca_gen__BRA__62__KET____DOT__fa_inst__DOT__sum) 
                                                << 2U)) 
                                            | (((IData)(vlSelfRef.rca_gen__BRA__61__KET____DOT__fa_inst__DOT__sum) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.rca_gen__BRA__60__KET____DOT__fa_inst__DOT__sum))) 
                                           << 0x0000000cU) 
                                          | (((((IData)(vlSelfRef.rca_gen__BRA__59__KET____DOT__fa_inst__DOT__sum) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.rca_gen__BRA__58__KET____DOT__fa_inst__DOT__sum) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.rca_gen__BRA__57__KET____DOT__fa_inst__DOT__sum) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.rca_gen__BRA__56__KET____DOT__fa_inst__DOT__sum))) 
                                             << 8U)) 
                                         | ((((((IData)(vlSelfRef.rca_gen__BRA__55__KET____DOT__fa_inst__DOT__sum) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.rca_gen__BRA__54__KET____DOT__fa_inst__DOT__sum) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.rca_gen__BRA__53__KET____DOT__fa_inst__DOT__sum) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.rca_gen__BRA__52__KET____DOT__fa_inst__DOT__sum))) 
                                             << 4U) 
                                            | ((((IData)(vlSelfRef.rca_gen__BRA__51__KET____DOT__fa_inst__DOT__sum) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.rca_gen__BRA__50__KET____DOT__fa_inst__DOT__sum) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.rca_gen__BRA__49__KET____DOT__fa_inst__DOT__sum) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.rca_gen__BRA__48__KET____DOT__fa_inst__DOT__sum))))) 
                                        << 0x00000010U) 
                                       | (((((((IData)(vlSelfRef.rca_gen__BRA__47__KET____DOT__fa_inst__DOT__sum) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.rca_gen__BRA__46__KET____DOT__fa_inst__DOT__sum) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.rca_gen__BRA__45__KET____DOT__fa_inst__DOT__sum) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.rca_gen__BRA__44__KET____DOT__fa_inst__DOT__sum))) 
                                            << 0x0000000cU) 
                                           | (((((IData)(vlSelfRef.rca_gen__BRA__43__KET____DOT__fa_inst__DOT__sum) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.rca_gen__BRA__42__KET____DOT__fa_inst__DOT__sum) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.rca_gen__BRA__41__KET____DOT__fa_inst__DOT__sum) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.rca_gen__BRA__40__KET____DOT__fa_inst__DOT__sum))) 
                                              << 8U)) 
                                          | ((((((IData)(vlSelfRef.rca_gen__BRA__39__KET____DOT__fa_inst__DOT__sum) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.rca_gen__BRA__38__KET____DOT__fa_inst__DOT__sum) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.rca_gen__BRA__37__KET____DOT__fa_inst__DOT__sum) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.rca_gen__BRA__36__KET____DOT__fa_inst__DOT__sum))) 
                                              << 4U) 
                                             | ((((IData)(vlSelfRef.rca_gen__BRA__35__KET____DOT__fa_inst__DOT__sum) 
                                                  << 3U) 
                                                 | ((IData)(vlSelfRef.rca_gen__BRA__34__KET____DOT__fa_inst__DOT__sum) 
                                                    << 2U)) 
                                                | (((IData)(vlSelfRef.rca_gen__BRA__33__KET____DOT__fa_inst__DOT__sum) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.rca_gen__BRA__32__KET____DOT__fa_inst__DOT__sum)))))))) 
                      << 0x00000020U) | (QData)((IData)(
                                                        (((((((((IData)(vlSelfRef.rca_gen__BRA__31__KET____DOT__fa_inst__DOT__sum) 
                                                                << 3U) 
                                                               | ((IData)(vlSelfRef.rca_gen__BRA__30__KET____DOT__fa_inst__DOT__sum) 
                                                                  << 2U)) 
                                                              | (((IData)(vlSelfRef.rca_gen__BRA__29__KET____DOT__fa_inst__DOT__sum) 
                                                                  << 1U) 
                                                                 | (IData)(vlSelfRef.rca_gen__BRA__28__KET____DOT__fa_inst__DOT__sum))) 
                                                             << 0x0000000cU) 
                                                            | (((((IData)(vlSelfRef.rca_gen__BRA__27__KET____DOT__fa_inst__DOT__sum) 
                                                                  << 3U) 
                                                                 | ((IData)(vlSelfRef.rca_gen__BRA__26__KET____DOT__fa_inst__DOT__sum) 
                                                                    << 2U)) 
                                                                | (((IData)(vlSelfRef.rca_gen__BRA__25__KET____DOT__fa_inst__DOT__sum) 
                                                                    << 1U) 
                                                                   | (IData)(vlSelfRef.rca_gen__BRA__24__KET____DOT__fa_inst__DOT__sum))) 
                                                               << 8U)) 
                                                           | ((((((IData)(vlSelfRef.rca_gen__BRA__23__KET____DOT__fa_inst__DOT__sum) 
                                                                  << 3U) 
                                                                 | ((IData)(vlSelfRef.rca_gen__BRA__22__KET____DOT__fa_inst__DOT__sum) 
                                                                    << 2U)) 
                                                                | (((IData)(vlSelfRef.rca_gen__BRA__21__KET____DOT__fa_inst__DOT__sum) 
                                                                    << 1U) 
                                                                   | (IData)(vlSelfRef.rca_gen__BRA__20__KET____DOT__fa_inst__DOT__sum))) 
                                                               << 4U) 
                                                              | ((((IData)(vlSelfRef.rca_gen__BRA__19__KET____DOT__fa_inst__DOT__sum) 
                                                                   << 3U) 
                                                                  | ((IData)(vlSelfRef.rca_gen__BRA__18__KET____DOT__fa_inst__DOT__sum) 
                                                                     << 2U)) 
                                                                 | (((IData)(vlSelfRef.rca_gen__BRA__17__KET____DOT__fa_inst__DOT__sum) 
                                                                     << 1U) 
                                                                    | (IData)(vlSelfRef.rca_gen__BRA__16__KET____DOT__fa_inst__DOT__sum))))) 
                                                          << 0x00000010U) 
                                                         | (((((((IData)(vlSelfRef.rca_gen__BRA__15__KET____DOT__fa_inst__DOT__sum) 
                                                                 << 3U) 
                                                                | ((IData)(vlSelfRef.rca_gen__BRA__14__KET____DOT__fa_inst__DOT__sum) 
                                                                   << 2U)) 
                                                               | (((IData)(vlSelfRef.rca_gen__BRA__13__KET____DOT__fa_inst__DOT__sum) 
                                                                   << 1U) 
                                                                  | (IData)(vlSelfRef.rca_gen__BRA__12__KET____DOT__fa_inst__DOT__sum))) 
                                                              << 0x0000000cU) 
                                                             | (((((IData)(vlSelfRef.rca_gen__BRA__11__KET____DOT__fa_inst__DOT__sum) 
                                                                   << 3U) 
                                                                  | ((IData)(vlSelfRef.rca_gen__BRA__10__KET____DOT__fa_inst__DOT__sum) 
                                                                     << 2U)) 
                                                                 | (((IData)(vlSelfRef.rca_gen__BRA__9__KET____DOT__fa_inst__DOT__sum) 
                                                                     << 1U) 
                                                                    | (IData)(vlSelfRef.rca_gen__BRA__8__KET____DOT__fa_inst__DOT__sum))) 
                                                                << 8U)) 
                                                            | ((((((IData)(vlSelfRef.rca_gen__BRA__7__KET____DOT__fa_inst__DOT__sum) 
                                                                   << 3U) 
                                                                  | ((IData)(vlSelfRef.rca_gen__BRA__6__KET____DOT__fa_inst__DOT__sum) 
                                                                     << 2U)) 
                                                                 | (((IData)(vlSelfRef.rca_gen__BRA__5__KET____DOT__fa_inst__DOT__sum) 
                                                                     << 1U) 
                                                                    | (IData)(vlSelfRef.rca_gen__BRA__4__KET____DOT__fa_inst__DOT__sum))) 
                                                                << 4U) 
                                                               | ((((IData)(vlSelfRef.rca_gen__BRA__3__KET____DOT__fa_inst__DOT__sum) 
                                                                    << 3U) 
                                                                   | ((IData)(vlSelfRef.rca_gen__BRA__2__KET____DOT__fa_inst__DOT__sum) 
                                                                      << 2U)) 
                                                                  | (((IData)(vlSelfRef.rca_gen__BRA__1__KET____DOT__fa_inst__DOT__sum) 
                                                                      << 1U) 
                                                                     | (IData)(vlSelfRef.rca_gen__BRA__0__KET____DOT__fa_inst__DOT__sum)))))))));
    vlSelfRef.carry[0U] = (((((((((IData)(vlSelfRef.rca_gen__BRA__30__KET____DOT__fa_inst__DOT__cout) 
                                  << 3U) | ((IData)(vlSelfRef.rca_gen__BRA__29__KET____DOT__fa_inst__DOT__cout) 
                                            << 2U)) 
                                | (((IData)(vlSelfRef.rca_gen__BRA__28__KET____DOT__fa_inst__DOT__cout) 
                                    << 1U) | (IData)(vlSelfRef.rca_gen__BRA__27__KET____DOT__fa_inst__DOT__cout))) 
                               << 0x0000000cU) | ((
                                                   (((IData)(vlSelfRef.rca_gen__BRA__26__KET____DOT__fa_inst__DOT__cout) 
                                                     << 3U) 
                                                    | ((IData)(vlSelfRef.rca_gen__BRA__25__KET____DOT__fa_inst__DOT__cout) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelfRef.rca_gen__BRA__24__KET____DOT__fa_inst__DOT__cout) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.rca_gen__BRA__23__KET____DOT__fa_inst__DOT__cout))) 
                                                  << 8U)) 
                             | ((((((IData)(vlSelfRef.rca_gen__BRA__22__KET____DOT__fa_inst__DOT__cout) 
                                    << 3U) | ((IData)(vlSelfRef.rca_gen__BRA__21__KET____DOT__fa_inst__DOT__cout) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.rca_gen__BRA__20__KET____DOT__fa_inst__DOT__cout) 
                                      << 1U) | (IData)(vlSelfRef.rca_gen__BRA__19__KET____DOT__fa_inst__DOT__cout))) 
                                 << 4U) | ((((IData)(vlSelfRef.rca_gen__BRA__18__KET____DOT__fa_inst__DOT__cout) 
                                             << 3U) 
                                            | ((IData)(vlSelfRef.rca_gen__BRA__17__KET____DOT__fa_inst__DOT__cout) 
                                               << 2U)) 
                                           | (((IData)(vlSelfRef.rca_gen__BRA__16__KET____DOT__fa_inst__DOT__cout) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.rca_gen__BRA__15__KET____DOT__fa_inst__DOT__cout))))) 
                            << 0x00000010U) | (((((
                                                   ((IData)(vlSelfRef.rca_gen__BRA__14__KET____DOT__fa_inst__DOT__cout) 
                                                    << 3U) 
                                                   | ((IData)(vlSelfRef.rca_gen__BRA__13__KET____DOT__fa_inst__DOT__cout) 
                                                      << 2U)) 
                                                  | (((IData)(vlSelfRef.rca_gen__BRA__12__KET____DOT__fa_inst__DOT__cout) 
                                                      << 1U) 
                                                     | (IData)(vlSelfRef.rca_gen__BRA__11__KET____DOT__fa_inst__DOT__cout))) 
                                                 << 0x0000000cU) 
                                                | (((((IData)(vlSelfRef.rca_gen__BRA__10__KET____DOT__fa_inst__DOT__cout) 
                                                      << 3U) 
                                                     | ((IData)(vlSelfRef.rca_gen__BRA__9__KET____DOT__fa_inst__DOT__cout) 
                                                        << 2U)) 
                                                    | (((IData)(vlSelfRef.rca_gen__BRA__8__KET____DOT__fa_inst__DOT__cout) 
                                                        << 1U) 
                                                       | (IData)(vlSelfRef.rca_gen__BRA__7__KET____DOT__fa_inst__DOT__cout))) 
                                                   << 8U)) 
                                               | ((((((IData)(vlSelfRef.rca_gen__BRA__6__KET____DOT__fa_inst__DOT__cout) 
                                                      << 3U) 
                                                     | ((IData)(vlSelfRef.rca_gen__BRA__5__KET____DOT__fa_inst__DOT__cout) 
                                                        << 2U)) 
                                                    | (((IData)(vlSelfRef.rca_gen__BRA__4__KET____DOT__fa_inst__DOT__cout) 
                                                        << 1U) 
                                                       | (IData)(vlSelfRef.rca_gen__BRA__3__KET____DOT__fa_inst__DOT__cout))) 
                                                   << 4U) 
                                                  | ((((IData)(vlSelfRef.rca_gen__BRA__2__KET____DOT__fa_inst__DOT__cout) 
                                                       << 3U) 
                                                      | ((IData)(vlSelfRef.rca_gen__BRA__1__KET____DOT__fa_inst__DOT__cout) 
                                                         << 2U)) 
                                                     | (((IData)(vlSelfRef.rca_gen__BRA__0__KET____DOT__fa_inst__DOT__cout) 
                                                         << 1U) 
                                                        | (IData)(vlSelfRef.cin))))));
    vlSelfRef.carry[1U] = (((((((((IData)(vlSelfRef.rca_gen__BRA__62__KET____DOT__fa_inst__DOT__cout) 
                                  << 3U) | ((IData)(vlSelfRef.rca_gen__BRA__61__KET____DOT__fa_inst__DOT__cout) 
                                            << 2U)) 
                                | (((IData)(vlSelfRef.rca_gen__BRA__60__KET____DOT__fa_inst__DOT__cout) 
                                    << 1U) | (IData)(vlSelfRef.rca_gen__BRA__59__KET____DOT__fa_inst__DOT__cout))) 
                               << 0x0000000cU) | ((
                                                   (((IData)(vlSelfRef.rca_gen__BRA__58__KET____DOT__fa_inst__DOT__cout) 
                                                     << 3U) 
                                                    | ((IData)(vlSelfRef.rca_gen__BRA__57__KET____DOT__fa_inst__DOT__cout) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelfRef.rca_gen__BRA__56__KET____DOT__fa_inst__DOT__cout) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.rca_gen__BRA__55__KET____DOT__fa_inst__DOT__cout))) 
                                                  << 8U)) 
                             | ((((((IData)(vlSelfRef.rca_gen__BRA__54__KET____DOT__fa_inst__DOT__cout) 
                                    << 3U) | ((IData)(vlSelfRef.rca_gen__BRA__53__KET____DOT__fa_inst__DOT__cout) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.rca_gen__BRA__52__KET____DOT__fa_inst__DOT__cout) 
                                      << 1U) | (IData)(vlSelfRef.rca_gen__BRA__51__KET____DOT__fa_inst__DOT__cout))) 
                                 << 4U) | ((((IData)(vlSelfRef.rca_gen__BRA__50__KET____DOT__fa_inst__DOT__cout) 
                                             << 3U) 
                                            | ((IData)(vlSelfRef.rca_gen__BRA__49__KET____DOT__fa_inst__DOT__cout) 
                                               << 2U)) 
                                           | (((IData)(vlSelfRef.rca_gen__BRA__48__KET____DOT__fa_inst__DOT__cout) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.rca_gen__BRA__47__KET____DOT__fa_inst__DOT__cout))))) 
                            << 0x00000010U) | (((((
                                                   ((IData)(vlSelfRef.rca_gen__BRA__46__KET____DOT__fa_inst__DOT__cout) 
                                                    << 3U) 
                                                   | ((IData)(vlSelfRef.rca_gen__BRA__45__KET____DOT__fa_inst__DOT__cout) 
                                                      << 2U)) 
                                                  | (((IData)(vlSelfRef.rca_gen__BRA__44__KET____DOT__fa_inst__DOT__cout) 
                                                      << 1U) 
                                                     | (IData)(vlSelfRef.rca_gen__BRA__43__KET____DOT__fa_inst__DOT__cout))) 
                                                 << 0x0000000cU) 
                                                | (((((IData)(vlSelfRef.rca_gen__BRA__42__KET____DOT__fa_inst__DOT__cout) 
                                                      << 3U) 
                                                     | ((IData)(vlSelfRef.rca_gen__BRA__41__KET____DOT__fa_inst__DOT__cout) 
                                                        << 2U)) 
                                                    | (((IData)(vlSelfRef.rca_gen__BRA__40__KET____DOT__fa_inst__DOT__cout) 
                                                        << 1U) 
                                                       | (IData)(vlSelfRef.rca_gen__BRA__39__KET____DOT__fa_inst__DOT__cout))) 
                                                   << 8U)) 
                                               | ((((((IData)(vlSelfRef.rca_gen__BRA__38__KET____DOT__fa_inst__DOT__cout) 
                                                      << 3U) 
                                                     | ((IData)(vlSelfRef.rca_gen__BRA__37__KET____DOT__fa_inst__DOT__cout) 
                                                        << 2U)) 
                                                    | (((IData)(vlSelfRef.rca_gen__BRA__36__KET____DOT__fa_inst__DOT__cout) 
                                                        << 1U) 
                                                       | (IData)(vlSelfRef.rca_gen__BRA__35__KET____DOT__fa_inst__DOT__cout))) 
                                                   << 4U) 
                                                  | ((((IData)(vlSelfRef.rca_gen__BRA__34__KET____DOT__fa_inst__DOT__cout) 
                                                       << 3U) 
                                                      | ((IData)(vlSelfRef.rca_gen__BRA__33__KET____DOT__fa_inst__DOT__cout) 
                                                         << 2U)) 
                                                     | (((IData)(vlSelfRef.rca_gen__BRA__32__KET____DOT__fa_inst__DOT__cout) 
                                                         << 1U) 
                                                        | (IData)(vlSelfRef.rca_gen__BRA__31__KET____DOT__fa_inst__DOT__cout))))));
    vlSelfRef.carry[2U] = (1U & (IData)(vlSelfRef.rca_gen__BRA__63__KET____DOT__fa_inst__DOT__cout));
    vlSelfRef.carry_into_msb = (vlSelfRef.carry[1U] 
                                >> 0x0000001fU);
    vlSelfRef.cout = (1U & vlSelfRef.carry[2U]);
}

VL_ATTR_COLD void Vtop_rca_64b___stl_sequent__TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst__0(Vtop_rca_64b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_rca_64b___stl_sequent__TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cin = vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__sub;
    vlSelfRef.a = vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__a;
    vlSelfRef.b = vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b;
    vlSelfRef.rca_gen__BRA__0__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)(vlSelfRef.a));
    vlSelfRef.rca_gen__BRA__1__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 1U)));
    vlSelfRef.rca_gen__BRA__2__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 2U)));
    vlSelfRef.rca_gen__BRA__3__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 3U)));
    vlSelfRef.rca_gen__BRA__4__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 4U)));
    vlSelfRef.rca_gen__BRA__5__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 5U)));
    vlSelfRef.rca_gen__BRA__6__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 6U)));
    vlSelfRef.rca_gen__BRA__7__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 7U)));
    vlSelfRef.rca_gen__BRA__8__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 8U)));
    vlSelfRef.rca_gen__BRA__9__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 9U)));
    vlSelfRef.rca_gen__BRA__10__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000000aU)));
    vlSelfRef.rca_gen__BRA__11__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000000bU)));
    vlSelfRef.rca_gen__BRA__12__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000000cU)));
    vlSelfRef.rca_gen__BRA__13__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000000dU)));
    vlSelfRef.rca_gen__BRA__14__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000000eU)));
    vlSelfRef.rca_gen__BRA__15__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000000fU)));
    vlSelfRef.rca_gen__BRA__16__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000010U)));
    vlSelfRef.rca_gen__BRA__17__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000011U)));
    vlSelfRef.rca_gen__BRA__18__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000012U)));
    vlSelfRef.rca_gen__BRA__19__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000013U)));
    vlSelfRef.rca_gen__BRA__20__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000014U)));
    vlSelfRef.rca_gen__BRA__21__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000015U)));
    vlSelfRef.rca_gen__BRA__22__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000016U)));
    vlSelfRef.rca_gen__BRA__23__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000017U)));
    vlSelfRef.rca_gen__BRA__24__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000018U)));
    vlSelfRef.rca_gen__BRA__25__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000019U)));
    vlSelfRef.rca_gen__BRA__26__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000001aU)));
    vlSelfRef.rca_gen__BRA__27__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000001bU)));
    vlSelfRef.rca_gen__BRA__28__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000001cU)));
    vlSelfRef.rca_gen__BRA__29__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000001dU)));
    vlSelfRef.rca_gen__BRA__30__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000001eU)));
    vlSelfRef.rca_gen__BRA__31__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000001fU)));
    vlSelfRef.rca_gen__BRA__32__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000020U)));
    vlSelfRef.rca_gen__BRA__33__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000021U)));
    vlSelfRef.rca_gen__BRA__34__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000022U)));
    vlSelfRef.rca_gen__BRA__35__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000023U)));
    vlSelfRef.rca_gen__BRA__36__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000024U)));
    vlSelfRef.rca_gen__BRA__37__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000025U)));
    vlSelfRef.rca_gen__BRA__38__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000026U)));
    vlSelfRef.rca_gen__BRA__39__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000027U)));
    vlSelfRef.rca_gen__BRA__40__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000028U)));
    vlSelfRef.rca_gen__BRA__41__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000029U)));
    vlSelfRef.rca_gen__BRA__42__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000002aU)));
    vlSelfRef.rca_gen__BRA__43__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000002bU)));
    vlSelfRef.rca_gen__BRA__44__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000002cU)));
    vlSelfRef.rca_gen__BRA__45__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000002dU)));
    vlSelfRef.rca_gen__BRA__46__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000002eU)));
    vlSelfRef.rca_gen__BRA__47__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000002fU)));
    vlSelfRef.rca_gen__BRA__48__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000030U)));
    vlSelfRef.rca_gen__BRA__49__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000031U)));
    vlSelfRef.rca_gen__BRA__50__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000032U)));
    vlSelfRef.rca_gen__BRA__51__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000033U)));
    vlSelfRef.rca_gen__BRA__52__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000034U)));
    vlSelfRef.rca_gen__BRA__53__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000035U)));
    vlSelfRef.rca_gen__BRA__54__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000036U)));
    vlSelfRef.rca_gen__BRA__55__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000037U)));
    vlSelfRef.rca_gen__BRA__56__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000038U)));
    vlSelfRef.rca_gen__BRA__57__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000039U)));
    vlSelfRef.rca_gen__BRA__58__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000003aU)));
    vlSelfRef.rca_gen__BRA__59__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000003bU)));
    vlSelfRef.rca_gen__BRA__60__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000003cU)));
    vlSelfRef.rca_gen__BRA__61__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000003dU)));
    vlSelfRef.rca_gen__BRA__62__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000003eU)));
    vlSelfRef.rca_gen__BRA__63__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000003fU)));
    vlSelfRef.rca_gen__BRA__0__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)(vlSelfRef.b));
    vlSelfRef.rca_gen__BRA__1__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 1U)));
    vlSelfRef.rca_gen__BRA__2__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 2U)));
    vlSelfRef.rca_gen__BRA__3__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 3U)));
    vlSelfRef.rca_gen__BRA__4__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 4U)));
    vlSelfRef.rca_gen__BRA__5__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 5U)));
    vlSelfRef.rca_gen__BRA__6__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 6U)));
    vlSelfRef.rca_gen__BRA__7__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 7U)));
    vlSelfRef.rca_gen__BRA__8__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 8U)));
    vlSelfRef.rca_gen__BRA__9__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 9U)));
    vlSelfRef.rca_gen__BRA__10__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000000aU)));
    vlSelfRef.rca_gen__BRA__11__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000000bU)));
    vlSelfRef.rca_gen__BRA__12__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000000cU)));
    vlSelfRef.rca_gen__BRA__13__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000000dU)));
    vlSelfRef.rca_gen__BRA__14__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000000eU)));
    vlSelfRef.rca_gen__BRA__15__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000000fU)));
    vlSelfRef.rca_gen__BRA__16__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000010U)));
    vlSelfRef.rca_gen__BRA__17__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000011U)));
    vlSelfRef.rca_gen__BRA__18__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000012U)));
    vlSelfRef.rca_gen__BRA__19__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000013U)));
    vlSelfRef.rca_gen__BRA__20__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000014U)));
    vlSelfRef.rca_gen__BRA__21__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000015U)));
    vlSelfRef.rca_gen__BRA__22__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000016U)));
    vlSelfRef.rca_gen__BRA__23__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000017U)));
    vlSelfRef.rca_gen__BRA__24__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000018U)));
    vlSelfRef.rca_gen__BRA__25__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000019U)));
    vlSelfRef.rca_gen__BRA__26__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000001aU)));
    vlSelfRef.rca_gen__BRA__27__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000001bU)));
    vlSelfRef.rca_gen__BRA__28__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000001cU)));
    vlSelfRef.rca_gen__BRA__29__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000001dU)));
    vlSelfRef.rca_gen__BRA__30__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000001eU)));
    vlSelfRef.rca_gen__BRA__31__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000001fU)));
    vlSelfRef.rca_gen__BRA__32__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000020U)));
    vlSelfRef.rca_gen__BRA__33__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000021U)));
    vlSelfRef.rca_gen__BRA__34__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000022U)));
    vlSelfRef.rca_gen__BRA__35__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000023U)));
    vlSelfRef.rca_gen__BRA__36__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000024U)));
    vlSelfRef.rca_gen__BRA__37__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000025U)));
    vlSelfRef.rca_gen__BRA__38__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000026U)));
    vlSelfRef.rca_gen__BRA__39__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000027U)));
    vlSelfRef.rca_gen__BRA__40__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000028U)));
    vlSelfRef.rca_gen__BRA__41__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000029U)));
    vlSelfRef.rca_gen__BRA__42__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000002aU)));
    vlSelfRef.rca_gen__BRA__43__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000002bU)));
    vlSelfRef.rca_gen__BRA__44__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000002cU)));
    vlSelfRef.rca_gen__BRA__45__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000002dU)));
    vlSelfRef.rca_gen__BRA__46__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000002eU)));
    vlSelfRef.rca_gen__BRA__47__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000002fU)));
    vlSelfRef.rca_gen__BRA__48__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000030U)));
    vlSelfRef.rca_gen__BRA__49__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000031U)));
    vlSelfRef.rca_gen__BRA__50__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000032U)));
    vlSelfRef.rca_gen__BRA__51__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000033U)));
    vlSelfRef.rca_gen__BRA__52__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000034U)));
    vlSelfRef.rca_gen__BRA__53__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000035U)));
    vlSelfRef.rca_gen__BRA__54__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000036U)));
    vlSelfRef.rca_gen__BRA__55__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000037U)));
    vlSelfRef.rca_gen__BRA__56__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000038U)));
    vlSelfRef.rca_gen__BRA__57__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000039U)));
    vlSelfRef.rca_gen__BRA__58__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000003aU)));
    vlSelfRef.rca_gen__BRA__59__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000003bU)));
    vlSelfRef.rca_gen__BRA__60__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000003cU)));
    vlSelfRef.rca_gen__BRA__61__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000003dU)));
    vlSelfRef.rca_gen__BRA__62__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000003eU)));
    vlSelfRef.rca_gen__BRA__63__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000003fU)));
    vlSelfRef.rca_gen__BRA__0__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__0__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__0__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__0__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__0__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__0__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__1__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__1__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__1__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__1__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__1__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__1__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__2__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__2__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__2__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__2__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__2__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__2__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__3__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__3__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__3__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__3__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__3__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__3__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__4__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__4__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__4__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__4__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__4__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__4__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__5__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__5__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__5__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__5__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__5__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__5__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__6__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__6__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__6__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__6__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__6__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__6__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__7__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__7__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__7__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__7__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__7__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__7__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__8__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__8__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__8__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__8__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__8__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__8__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__9__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__9__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__9__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__9__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__9__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__9__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__10__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__10__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__10__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__10__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__10__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__10__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__11__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__11__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__11__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__11__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__11__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__11__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__12__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__12__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__12__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__12__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__12__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__12__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__13__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__13__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__13__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__13__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__13__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__13__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__14__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__14__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__14__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__14__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__14__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__14__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__15__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__15__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__15__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__15__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__15__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__15__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__16__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__16__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__16__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__16__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__16__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__16__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__17__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__17__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__17__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__17__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__17__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__17__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__18__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__18__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__18__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__18__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__18__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__18__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__19__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__19__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__19__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__19__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__19__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__19__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__20__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__20__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__20__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__20__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__20__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__20__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__21__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__21__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__21__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__21__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__21__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__21__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__22__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__22__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__22__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__22__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__22__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__22__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__23__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__23__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__23__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__23__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__23__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__23__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__24__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__24__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__24__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__24__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__24__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__24__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__25__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__25__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__25__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__25__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__25__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__25__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__26__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__26__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__26__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__26__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__26__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__26__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__27__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__27__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__27__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__27__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__27__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__27__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__28__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__28__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__28__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__28__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__28__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__28__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__29__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__29__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__29__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__29__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__29__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__29__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__30__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__30__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__30__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__30__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__30__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__30__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__31__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__31__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__31__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__31__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__31__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__31__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__32__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__32__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__32__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__32__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__32__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__32__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__33__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__33__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__33__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__33__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__33__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__33__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__34__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__34__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__34__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__34__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__34__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__34__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__35__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__35__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__35__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__35__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__35__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__35__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__36__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__36__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__36__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__36__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__36__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__36__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__37__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__37__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__37__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__37__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__37__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__37__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__38__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__38__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__38__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__38__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__38__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__38__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__39__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__39__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__39__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__39__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__39__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__39__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__40__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__40__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__40__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__40__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__40__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__40__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__41__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__41__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__41__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__41__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__41__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__41__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__42__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__42__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__42__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__42__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__42__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__42__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__43__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__43__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__43__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__43__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__43__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__43__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__44__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__44__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__44__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__44__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__44__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__44__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__45__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__45__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__45__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__45__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__45__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__45__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__46__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__46__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__46__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__46__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__46__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__46__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__47__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__47__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__47__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__47__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__47__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__47__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__48__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__48__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__48__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__48__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__48__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__48__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__49__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__49__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__49__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__49__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__49__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__49__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__50__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__50__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__50__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__50__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__50__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__50__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__51__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__51__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__51__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__51__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__51__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__51__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__52__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__52__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__52__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__52__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__52__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__52__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__53__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__53__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__53__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__53__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__53__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__53__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__54__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__54__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__54__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__54__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__54__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__54__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__55__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__55__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__55__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__55__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__55__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__55__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__56__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__56__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__56__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__56__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__56__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__56__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__57__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__57__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__57__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__57__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__57__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__57__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__58__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__58__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__58__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__58__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__58__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__58__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__59__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__59__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__59__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__59__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__59__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__59__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__60__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__60__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__60__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__60__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__60__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__60__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__61__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__61__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__61__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__61__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__61__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__61__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__62__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__62__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__62__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__62__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__62__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__62__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__63__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__63__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__63__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__63__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__63__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__63__KET____DOT__fa_inst__DOT__b));
}

VL_ATTR_COLD void Vtop_rca_64b___eval_initial__TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst(Vtop_rca_64b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_rca_64b___eval_initial__TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cin = 0U;
}

VL_ATTR_COLD void Vtop_rca_64b___stl_sequent__TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst__0(Vtop_rca_64b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_rca_64b___stl_sequent__TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.a = vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__pc_current;
    vlSelfRef.b = vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__offset;
    vlSelfRef.rca_gen__BRA__0__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)(vlSelfRef.a));
    vlSelfRef.rca_gen__BRA__1__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 1U)));
    vlSelfRef.rca_gen__BRA__2__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 2U)));
    vlSelfRef.rca_gen__BRA__3__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 3U)));
    vlSelfRef.rca_gen__BRA__4__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 4U)));
    vlSelfRef.rca_gen__BRA__5__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 5U)));
    vlSelfRef.rca_gen__BRA__6__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 6U)));
    vlSelfRef.rca_gen__BRA__7__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 7U)));
    vlSelfRef.rca_gen__BRA__8__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 8U)));
    vlSelfRef.rca_gen__BRA__9__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 9U)));
    vlSelfRef.rca_gen__BRA__10__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000000aU)));
    vlSelfRef.rca_gen__BRA__11__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000000bU)));
    vlSelfRef.rca_gen__BRA__12__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000000cU)));
    vlSelfRef.rca_gen__BRA__13__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000000dU)));
    vlSelfRef.rca_gen__BRA__14__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000000eU)));
    vlSelfRef.rca_gen__BRA__15__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000000fU)));
    vlSelfRef.rca_gen__BRA__16__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000010U)));
    vlSelfRef.rca_gen__BRA__17__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000011U)));
    vlSelfRef.rca_gen__BRA__18__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000012U)));
    vlSelfRef.rca_gen__BRA__19__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000013U)));
    vlSelfRef.rca_gen__BRA__20__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000014U)));
    vlSelfRef.rca_gen__BRA__21__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000015U)));
    vlSelfRef.rca_gen__BRA__22__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000016U)));
    vlSelfRef.rca_gen__BRA__23__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000017U)));
    vlSelfRef.rca_gen__BRA__24__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000018U)));
    vlSelfRef.rca_gen__BRA__25__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000019U)));
    vlSelfRef.rca_gen__BRA__26__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000001aU)));
    vlSelfRef.rca_gen__BRA__27__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000001bU)));
    vlSelfRef.rca_gen__BRA__28__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000001cU)));
    vlSelfRef.rca_gen__BRA__29__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000001dU)));
    vlSelfRef.rca_gen__BRA__30__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000001eU)));
    vlSelfRef.rca_gen__BRA__31__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000001fU)));
    vlSelfRef.rca_gen__BRA__32__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000020U)));
    vlSelfRef.rca_gen__BRA__33__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000021U)));
    vlSelfRef.rca_gen__BRA__34__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000022U)));
    vlSelfRef.rca_gen__BRA__35__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000023U)));
    vlSelfRef.rca_gen__BRA__36__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000024U)));
    vlSelfRef.rca_gen__BRA__37__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000025U)));
    vlSelfRef.rca_gen__BRA__38__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000026U)));
    vlSelfRef.rca_gen__BRA__39__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000027U)));
    vlSelfRef.rca_gen__BRA__40__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000028U)));
    vlSelfRef.rca_gen__BRA__41__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000029U)));
    vlSelfRef.rca_gen__BRA__42__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000002aU)));
    vlSelfRef.rca_gen__BRA__43__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000002bU)));
    vlSelfRef.rca_gen__BRA__44__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000002cU)));
    vlSelfRef.rca_gen__BRA__45__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000002dU)));
    vlSelfRef.rca_gen__BRA__46__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000002eU)));
    vlSelfRef.rca_gen__BRA__47__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000002fU)));
    vlSelfRef.rca_gen__BRA__48__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000030U)));
    vlSelfRef.rca_gen__BRA__49__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000031U)));
    vlSelfRef.rca_gen__BRA__50__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000032U)));
    vlSelfRef.rca_gen__BRA__51__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000033U)));
    vlSelfRef.rca_gen__BRA__52__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000034U)));
    vlSelfRef.rca_gen__BRA__53__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000035U)));
    vlSelfRef.rca_gen__BRA__54__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000036U)));
    vlSelfRef.rca_gen__BRA__55__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000037U)));
    vlSelfRef.rca_gen__BRA__56__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000038U)));
    vlSelfRef.rca_gen__BRA__57__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x00000039U)));
    vlSelfRef.rca_gen__BRA__58__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000003aU)));
    vlSelfRef.rca_gen__BRA__59__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000003bU)));
    vlSelfRef.rca_gen__BRA__60__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000003cU)));
    vlSelfRef.rca_gen__BRA__61__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000003dU)));
    vlSelfRef.rca_gen__BRA__62__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000003eU)));
    vlSelfRef.rca_gen__BRA__63__KET____DOT__fa_inst__DOT__a 
        = (1U & (IData)((vlSelfRef.a >> 0x0000003fU)));
    vlSelfRef.rca_gen__BRA__0__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)(vlSelfRef.b));
    vlSelfRef.rca_gen__BRA__1__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 1U)));
    vlSelfRef.rca_gen__BRA__2__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 2U)));
    vlSelfRef.rca_gen__BRA__3__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 3U)));
    vlSelfRef.rca_gen__BRA__4__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 4U)));
    vlSelfRef.rca_gen__BRA__5__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 5U)));
    vlSelfRef.rca_gen__BRA__6__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 6U)));
    vlSelfRef.rca_gen__BRA__7__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 7U)));
    vlSelfRef.rca_gen__BRA__8__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 8U)));
    vlSelfRef.rca_gen__BRA__9__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 9U)));
    vlSelfRef.rca_gen__BRA__10__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000000aU)));
    vlSelfRef.rca_gen__BRA__11__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000000bU)));
    vlSelfRef.rca_gen__BRA__12__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000000cU)));
    vlSelfRef.rca_gen__BRA__13__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000000dU)));
    vlSelfRef.rca_gen__BRA__14__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000000eU)));
    vlSelfRef.rca_gen__BRA__15__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000000fU)));
    vlSelfRef.rca_gen__BRA__16__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000010U)));
    vlSelfRef.rca_gen__BRA__17__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000011U)));
    vlSelfRef.rca_gen__BRA__18__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000012U)));
    vlSelfRef.rca_gen__BRA__19__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000013U)));
    vlSelfRef.rca_gen__BRA__20__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000014U)));
    vlSelfRef.rca_gen__BRA__21__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000015U)));
    vlSelfRef.rca_gen__BRA__22__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000016U)));
    vlSelfRef.rca_gen__BRA__23__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000017U)));
    vlSelfRef.rca_gen__BRA__24__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000018U)));
    vlSelfRef.rca_gen__BRA__25__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000019U)));
    vlSelfRef.rca_gen__BRA__26__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000001aU)));
    vlSelfRef.rca_gen__BRA__27__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000001bU)));
    vlSelfRef.rca_gen__BRA__28__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000001cU)));
    vlSelfRef.rca_gen__BRA__29__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000001dU)));
    vlSelfRef.rca_gen__BRA__30__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000001eU)));
    vlSelfRef.rca_gen__BRA__31__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000001fU)));
    vlSelfRef.rca_gen__BRA__32__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000020U)));
    vlSelfRef.rca_gen__BRA__33__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000021U)));
    vlSelfRef.rca_gen__BRA__34__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000022U)));
    vlSelfRef.rca_gen__BRA__35__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000023U)));
    vlSelfRef.rca_gen__BRA__36__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000024U)));
    vlSelfRef.rca_gen__BRA__37__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000025U)));
    vlSelfRef.rca_gen__BRA__38__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000026U)));
    vlSelfRef.rca_gen__BRA__39__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000027U)));
    vlSelfRef.rca_gen__BRA__40__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000028U)));
    vlSelfRef.rca_gen__BRA__41__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000029U)));
    vlSelfRef.rca_gen__BRA__42__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000002aU)));
    vlSelfRef.rca_gen__BRA__43__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000002bU)));
    vlSelfRef.rca_gen__BRA__44__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000002cU)));
    vlSelfRef.rca_gen__BRA__45__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000002dU)));
    vlSelfRef.rca_gen__BRA__46__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000002eU)));
    vlSelfRef.rca_gen__BRA__47__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000002fU)));
    vlSelfRef.rca_gen__BRA__48__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000030U)));
    vlSelfRef.rca_gen__BRA__49__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000031U)));
    vlSelfRef.rca_gen__BRA__50__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000032U)));
    vlSelfRef.rca_gen__BRA__51__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000033U)));
    vlSelfRef.rca_gen__BRA__52__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000034U)));
    vlSelfRef.rca_gen__BRA__53__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000035U)));
    vlSelfRef.rca_gen__BRA__54__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000036U)));
    vlSelfRef.rca_gen__BRA__55__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000037U)));
    vlSelfRef.rca_gen__BRA__56__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000038U)));
    vlSelfRef.rca_gen__BRA__57__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x00000039U)));
    vlSelfRef.rca_gen__BRA__58__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000003aU)));
    vlSelfRef.rca_gen__BRA__59__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000003bU)));
    vlSelfRef.rca_gen__BRA__60__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000003cU)));
    vlSelfRef.rca_gen__BRA__61__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000003dU)));
    vlSelfRef.rca_gen__BRA__62__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000003eU)));
    vlSelfRef.rca_gen__BRA__63__KET____DOT__fa_inst__DOT__b 
        = (1U & (IData)((vlSelfRef.b >> 0x0000003fU)));
    vlSelfRef.rca_gen__BRA__0__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__0__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__0__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__0__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__0__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__0__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__1__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__1__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__1__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__1__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__1__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__1__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__2__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__2__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__2__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__2__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__2__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__2__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__3__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__3__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__3__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__3__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__3__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__3__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__4__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__4__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__4__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__4__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__4__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__4__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__5__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__5__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__5__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__5__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__5__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__5__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__6__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__6__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__6__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__6__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__6__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__6__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__7__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__7__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__7__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__7__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__7__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__7__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__8__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__8__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__8__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__8__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__8__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__8__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__9__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__9__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__9__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__9__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__9__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__9__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__10__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__10__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__10__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__10__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__10__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__10__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__11__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__11__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__11__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__11__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__11__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__11__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__12__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__12__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__12__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__12__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__12__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__12__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__13__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__13__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__13__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__13__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__13__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__13__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__14__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__14__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__14__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__14__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__14__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__14__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__15__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__15__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__15__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__15__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__15__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__15__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__16__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__16__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__16__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__16__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__16__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__16__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__17__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__17__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__17__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__17__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__17__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__17__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__18__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__18__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__18__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__18__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__18__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__18__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__19__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__19__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__19__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__19__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__19__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__19__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__20__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__20__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__20__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__20__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__20__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__20__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__21__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__21__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__21__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__21__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__21__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__21__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__22__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__22__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__22__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__22__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__22__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__22__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__23__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__23__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__23__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__23__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__23__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__23__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__24__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__24__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__24__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__24__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__24__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__24__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__25__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__25__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__25__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__25__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__25__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__25__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__26__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__26__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__26__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__26__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__26__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__26__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__27__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__27__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__27__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__27__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__27__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__27__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__28__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__28__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__28__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__28__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__28__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__28__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__29__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__29__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__29__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__29__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__29__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__29__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__30__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__30__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__30__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__30__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__30__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__30__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__31__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__31__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__31__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__31__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__31__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__31__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__32__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__32__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__32__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__32__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__32__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__32__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__33__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__33__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__33__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__33__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__33__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__33__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__34__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__34__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__34__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__34__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__34__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__34__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__35__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__35__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__35__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__35__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__35__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__35__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__36__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__36__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__36__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__36__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__36__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__36__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__37__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__37__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__37__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__37__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__37__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__37__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__38__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__38__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__38__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__38__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__38__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__38__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__39__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__39__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__39__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__39__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__39__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__39__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__40__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__40__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__40__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__40__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__40__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__40__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__41__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__41__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__41__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__41__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__41__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__41__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__42__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__42__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__42__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__42__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__42__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__42__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__43__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__43__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__43__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__43__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__43__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__43__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__44__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__44__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__44__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__44__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__44__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__44__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__45__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__45__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__45__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__45__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__45__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__45__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__46__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__46__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__46__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__46__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__46__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__46__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__47__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__47__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__47__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__47__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__47__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__47__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__48__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__48__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__48__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__48__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__48__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__48__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__49__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__49__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__49__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__49__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__49__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__49__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__50__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__50__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__50__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__50__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__50__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__50__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__51__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__51__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__51__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__51__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__51__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__51__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__52__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__52__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__52__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__52__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__52__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__52__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__53__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__53__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__53__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__53__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__53__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__53__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__54__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__54__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__54__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__54__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__54__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__54__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__55__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__55__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__55__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__55__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__55__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__55__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__56__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__56__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__56__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__56__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__56__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__56__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__57__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__57__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__57__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__57__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__57__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__57__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__58__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__58__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__58__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__58__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__58__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__58__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__59__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__59__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__59__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__59__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__59__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__59__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__60__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__60__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__60__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__60__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__60__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__60__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__61__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__61__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__61__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__61__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__61__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__61__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__62__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__62__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__62__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__62__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__62__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__62__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__63__KET____DOT__fa_inst__DOT__c1 
        = ((IData)(vlSelfRef.rca_gen__BRA__63__KET____DOT__fa_inst__DOT__a) 
           & (IData)(vlSelfRef.rca_gen__BRA__63__KET____DOT__fa_inst__DOT__b));
    vlSelfRef.rca_gen__BRA__63__KET____DOT__fa_inst__DOT__x1 
        = ((IData)(vlSelfRef.rca_gen__BRA__63__KET____DOT__fa_inst__DOT__a) 
           ^ (IData)(vlSelfRef.rca_gen__BRA__63__KET____DOT__fa_inst__DOT__b));
}

VL_ATTR_COLD void Vtop_rca_64b___ctor_var_reset(Vtop_rca_64b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_rca_64b___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->a = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 510903276987443985ull);
    vlSelf->b = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16900879642891266615ull);
    vlSelf->cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8404852791380219477ull);
    vlSelf->sum = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17823321413984766096ull);
    vlSelf->cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3402043879796434022ull);
    vlSelf->carry_into_msb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13464864009163458432ull);
    VL_SCOPED_RAND_RESET_W(65, vlSelf->carry, __VscopeHash, 16970673489425401941ull);
    vlSelf->rca_gen__BRA__0__KET____DOT__fa_inst__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7299054738533853583ull);
    vlSelf->rca_gen__BRA__0__KET____DOT__fa_inst__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12980150988774719604ull);
    vlSelf->rca_gen__BRA__0__KET____DOT__fa_inst__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7850928075400688494ull);
    vlSelf->rca_gen__BRA__0__KET____DOT__fa_inst__DOT__sum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14376375235562177073ull);
    vlSelf->rca_gen__BRA__0__KET____DOT__fa_inst__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 291277836419027895ull);
    vlSelf->rca_gen__BRA__0__KET____DOT__fa_inst__DOT__x1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2955599738079845135ull);
    vlSelf->rca_gen__BRA__0__KET____DOT__fa_inst__DOT__c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17991663023264639529ull);
    vlSelf->rca_gen__BRA__0__KET____DOT__fa_inst__DOT__c2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7724216377121587848ull);
    vlSelf->rca_gen__BRA__1__KET____DOT__fa_inst__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16161555704568980716ull);
    vlSelf->rca_gen__BRA__1__KET____DOT__fa_inst__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7402845077642441897ull);
    vlSelf->rca_gen__BRA__1__KET____DOT__fa_inst__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8664080202258134989ull);
    vlSelf->rca_gen__BRA__1__KET____DOT__fa_inst__DOT__sum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8046603042227954967ull);
    vlSelf->rca_gen__BRA__1__KET____DOT__fa_inst__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7774813165330592731ull);
    vlSelf->rca_gen__BRA__1__KET____DOT__fa_inst__DOT__x1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13196556641211269612ull);
    vlSelf->rca_gen__BRA__1__KET____DOT__fa_inst__DOT__c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3513756803307204270ull);
    vlSelf->rca_gen__BRA__1__KET____DOT__fa_inst__DOT__c2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12307480493899390037ull);
    vlSelf->rca_gen__BRA__2__KET____DOT__fa_inst__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9863754325866347001ull);
    vlSelf->rca_gen__BRA__2__KET____DOT__fa_inst__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17917828086801929500ull);
    vlSelf->rca_gen__BRA__2__KET____DOT__fa_inst__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6718600506656641097ull);
    vlSelf->rca_gen__BRA__2__KET____DOT__fa_inst__DOT__sum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13143818382820242450ull);
    vlSelf->rca_gen__BRA__2__KET____DOT__fa_inst__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15857735025555929550ull);
    vlSelf->rca_gen__BRA__2__KET____DOT__fa_inst__DOT__x1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10921733004731661660ull);
    vlSelf->rca_gen__BRA__2__KET____DOT__fa_inst__DOT__c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9594972013932889152ull);
    vlSelf->rca_gen__BRA__2__KET____DOT__fa_inst__DOT__c2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4776111150484578028ull);
    vlSelf->rca_gen__BRA__3__KET____DOT__fa_inst__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 198970843422634914ull);
    vlSelf->rca_gen__BRA__3__KET____DOT__fa_inst__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15063291549547234525ull);
    vlSelf->rca_gen__BRA__3__KET____DOT__fa_inst__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2182394206125431207ull);
    vlSelf->rca_gen__BRA__3__KET____DOT__fa_inst__DOT__sum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9766209845819526116ull);
    vlSelf->rca_gen__BRA__3__KET____DOT__fa_inst__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13601481060546015309ull);
    vlSelf->rca_gen__BRA__3__KET____DOT__fa_inst__DOT__x1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10978609566495248275ull);
    vlSelf->rca_gen__BRA__3__KET____DOT__fa_inst__DOT__c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1966152576242224289ull);
    vlSelf->rca_gen__BRA__3__KET____DOT__fa_inst__DOT__c2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17243621311219586228ull);
    vlSelf->rca_gen__BRA__4__KET____DOT__fa_inst__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11883117390623437807ull);
    vlSelf->rca_gen__BRA__4__KET____DOT__fa_inst__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17300369436557850574ull);
    vlSelf->rca_gen__BRA__4__KET____DOT__fa_inst__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12195632832110196486ull);
    vlSelf->rca_gen__BRA__4__KET____DOT__fa_inst__DOT__sum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9146670062971829610ull);
    vlSelf->rca_gen__BRA__4__KET____DOT__fa_inst__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5176855156240116352ull);
    vlSelf->rca_gen__BRA__4__KET____DOT__fa_inst__DOT__x1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9764800873528923958ull);
    vlSelf->rca_gen__BRA__4__KET____DOT__fa_inst__DOT__c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8781343783260872439ull);
    vlSelf->rca_gen__BRA__4__KET____DOT__fa_inst__DOT__c2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7822784421626247651ull);
    vlSelf->rca_gen__BRA__5__KET____DOT__fa_inst__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2330674410940731804ull);
    vlSelf->rca_gen__BRA__5__KET____DOT__fa_inst__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8508997795707170392ull);
    vlSelf->rca_gen__BRA__5__KET____DOT__fa_inst__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13372850699143057411ull);
    vlSelf->rca_gen__BRA__5__KET____DOT__fa_inst__DOT__sum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1979466459885158071ull);
    vlSelf->rca_gen__BRA__5__KET____DOT__fa_inst__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7162731043397863515ull);
    vlSelf->rca_gen__BRA__5__KET____DOT__fa_inst__DOT__x1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5745216266217673019ull);
    vlSelf->rca_gen__BRA__5__KET____DOT__fa_inst__DOT__c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12278089487696646673ull);
    vlSelf->rca_gen__BRA__5__KET____DOT__fa_inst__DOT__c2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11098847636557144186ull);
    vlSelf->rca_gen__BRA__6__KET____DOT__fa_inst__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14638583717624235826ull);
    vlSelf->rca_gen__BRA__6__KET____DOT__fa_inst__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13522577459391125019ull);
    vlSelf->rca_gen__BRA__6__KET____DOT__fa_inst__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8556250719489047468ull);
    vlSelf->rca_gen__BRA__6__KET____DOT__fa_inst__DOT__sum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17215509920391085169ull);
    vlSelf->rca_gen__BRA__6__KET____DOT__fa_inst__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11339829651993227798ull);
    vlSelf->rca_gen__BRA__6__KET____DOT__fa_inst__DOT__x1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9328969042503380867ull);
    vlSelf->rca_gen__BRA__6__KET____DOT__fa_inst__DOT__c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14738998979280009437ull);
    vlSelf->rca_gen__BRA__6__KET____DOT__fa_inst__DOT__c2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18291008080827981882ull);
    vlSelf->rca_gen__BRA__7__KET____DOT__fa_inst__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3212075534000350477ull);
    vlSelf->rca_gen__BRA__7__KET____DOT__fa_inst__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5367839851552489435ull);
    vlSelf->rca_gen__BRA__7__KET____DOT__fa_inst__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2268751502566535916ull);
    vlSelf->rca_gen__BRA__7__KET____DOT__fa_inst__DOT__sum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8227273316575194102ull);
    vlSelf->rca_gen__BRA__7__KET____DOT__fa_inst__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10584653844781528453ull);
    vlSelf->rca_gen__BRA__7__KET____DOT__fa_inst__DOT__x1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11821903464522822387ull);
    vlSelf->rca_gen__BRA__7__KET____DOT__fa_inst__DOT__c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6863717916038914425ull);
    vlSelf->rca_gen__BRA__7__KET____DOT__fa_inst__DOT__c2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11562748861205780663ull);
    vlSelf->rca_gen__BRA__8__KET____DOT__fa_inst__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2304663238417569548ull);
    vlSelf->rca_gen__BRA__8__KET____DOT__fa_inst__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18050248639839006394ull);
    vlSelf->rca_gen__BRA__8__KET____DOT__fa_inst__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9377724039569906663ull);
    vlSelf->rca_gen__BRA__8__KET____DOT__fa_inst__DOT__sum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 229721310132265140ull);
    vlSelf->rca_gen__BRA__8__KET____DOT__fa_inst__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18193557541439345708ull);
    vlSelf->rca_gen__BRA__8__KET____DOT__fa_inst__DOT__x1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15762033562371052854ull);
    vlSelf->rca_gen__BRA__8__KET____DOT__fa_inst__DOT__c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9543715839414885929ull);
    vlSelf->rca_gen__BRA__8__KET____DOT__fa_inst__DOT__c2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12344477087046513697ull);
    vlSelf->rca_gen__BRA__9__KET____DOT__fa_inst__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2347554400336201389ull);
    vlSelf->rca_gen__BRA__9__KET____DOT__fa_inst__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3878550971376778699ull);
    vlSelf->rca_gen__BRA__9__KET____DOT__fa_inst__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2085653273227824677ull);
    vlSelf->rca_gen__BRA__9__KET____DOT__fa_inst__DOT__sum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 821248752751700135ull);
    vlSelf->rca_gen__BRA__9__KET____DOT__fa_inst__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11265216951911177518ull);
    vlSelf->rca_gen__BRA__9__KET____DOT__fa_inst__DOT__x1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17400927422081381055ull);
    vlSelf->rca_gen__BRA__9__KET____DOT__fa_inst__DOT__c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2169049336313750581ull);
    vlSelf->rca_gen__BRA__9__KET____DOT__fa_inst__DOT__c2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2597043333536896088ull);
    vlSelf->rca_gen__BRA__10__KET____DOT__fa_inst__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15167147350914173702ull);
    vlSelf->rca_gen__BRA__10__KET____DOT__fa_inst__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 399435628236277685ull);
    vlSelf->rca_gen__BRA__10__KET____DOT__fa_inst__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17648224245964458162ull);
    vlSelf->rca_gen__BRA__10__KET____DOT__fa_inst__DOT__sum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4660265013546164512ull);
    vlSelf->rca_gen__BRA__10__KET____DOT__fa_inst__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14123409295644399621ull);
    vlSelf->rca_gen__BRA__10__KET____DOT__fa_inst__DOT__x1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7225553759866306597ull);
    vlSelf->rca_gen__BRA__10__KET____DOT__fa_inst__DOT__c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9181966881611758231ull);
    vlSelf->rca_gen__BRA__10__KET____DOT__fa_inst__DOT__c2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17860386370636032198ull);
    vlSelf->rca_gen__BRA__11__KET____DOT__fa_inst__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17871819489047816358ull);
    vlSelf->rca_gen__BRA__11__KET____DOT__fa_inst__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3301671633044309868ull);
    vlSelf->rca_gen__BRA__11__KET____DOT__fa_inst__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1993945419858589456ull);
    vlSelf->rca_gen__BRA__11__KET____DOT__fa_inst__DOT__sum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8903730665507130338ull);
    vlSelf->rca_gen__BRA__11__KET____DOT__fa_inst__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2075184110079593046ull);
    vlSelf->rca_gen__BRA__11__KET____DOT__fa_inst__DOT__x1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11157758551108920644ull);
    vlSelf->rca_gen__BRA__11__KET____DOT__fa_inst__DOT__c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 188744188479525065ull);
    vlSelf->rca_gen__BRA__11__KET____DOT__fa_inst__DOT__c2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3918214905616581095ull);
    vlSelf->rca_gen__BRA__12__KET____DOT__fa_inst__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8141987803229348713ull);
    vlSelf->rca_gen__BRA__12__KET____DOT__fa_inst__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1841645240082704491ull);
    vlSelf->rca_gen__BRA__12__KET____DOT__fa_inst__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4479435459216987346ull);
    vlSelf->rca_gen__BRA__12__KET____DOT__fa_inst__DOT__sum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12411309322751886389ull);
    vlSelf->rca_gen__BRA__12__KET____DOT__fa_inst__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1012742595410466538ull);
    vlSelf->rca_gen__BRA__12__KET____DOT__fa_inst__DOT__x1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3077870842571112482ull);
    vlSelf->rca_gen__BRA__12__KET____DOT__fa_inst__DOT__c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16854771544150264885ull);
    vlSelf->rca_gen__BRA__12__KET____DOT__fa_inst__DOT__c2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12765583416813019827ull);
    vlSelf->rca_gen__BRA__13__KET____DOT__fa_inst__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11967551681697252723ull);
    vlSelf->rca_gen__BRA__13__KET____DOT__fa_inst__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3788254254130816192ull);
    vlSelf->rca_gen__BRA__13__KET____DOT__fa_inst__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11511790563065885985ull);
    vlSelf->rca_gen__BRA__13__KET____DOT__fa_inst__DOT__sum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1939202461864518449ull);
    vlSelf->rca_gen__BRA__13__KET____DOT__fa_inst__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17826705450664530331ull);
    vlSelf->rca_gen__BRA__13__KET____DOT__fa_inst__DOT__x1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13966701246233467797ull);
    vlSelf->rca_gen__BRA__13__KET____DOT__fa_inst__DOT__c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4585027232461932259ull);
    vlSelf->rca_gen__BRA__13__KET____DOT__fa_inst__DOT__c2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6392871477208113534ull);
    vlSelf->rca_gen__BRA__14__KET____DOT__fa_inst__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7091472675870913898ull);
    vlSelf->rca_gen__BRA__14__KET____DOT__fa_inst__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3294631241661726388ull);
    vlSelf->rca_gen__BRA__14__KET____DOT__fa_inst__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13247424804835014905ull);
    vlSelf->rca_gen__BRA__14__KET____DOT__fa_inst__DOT__sum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13234541102221908517ull);
    vlSelf->rca_gen__BRA__14__KET____DOT__fa_inst__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13128393039712945262ull);
    vlSelf->rca_gen__BRA__14__KET____DOT__fa_inst__DOT__x1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8812509814292446327ull);
    vlSelf->rca_gen__BRA__14__KET____DOT__fa_inst__DOT__c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18426460503374449183ull);
    vlSelf->rca_gen__BRA__14__KET____DOT__fa_inst__DOT__c2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8431468258570468858ull);
    vlSelf->rca_gen__BRA__15__KET____DOT__fa_inst__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7862212384067670660ull);
    vlSelf->rca_gen__BRA__15__KET____DOT__fa_inst__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8632887280187846505ull);
    vlSelf->rca_gen__BRA__15__KET____DOT__fa_inst__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9606203061870947882ull);
    vlSelf->rca_gen__BRA__15__KET____DOT__fa_inst__DOT__sum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9235389503668654324ull);
    vlSelf->rca_gen__BRA__15__KET____DOT__fa_inst__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17577794246577492063ull);
    vlSelf->rca_gen__BRA__15__KET____DOT__fa_inst__DOT__x1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17383075099711552020ull);
    vlSelf->rca_gen__BRA__15__KET____DOT__fa_inst__DOT__c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4116259515411342655ull);
    vlSelf->rca_gen__BRA__15__KET____DOT__fa_inst__DOT__c2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16848477495666330330ull);
    vlSelf->rca_gen__BRA__16__KET____DOT__fa_inst__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12126893705687321548ull);
    vlSelf->rca_gen__BRA__16__KET____DOT__fa_inst__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4657519231115628376ull);
    vlSelf->rca_gen__BRA__16__KET____DOT__fa_inst__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9718515099138888753ull);
    vlSelf->rca_gen__BRA__16__KET____DOT__fa_inst__DOT__sum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8264564369554105808ull);
    vlSelf->rca_gen__BRA__16__KET____DOT__fa_inst__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18428912363506655448ull);
    vlSelf->rca_gen__BRA__16__KET____DOT__fa_inst__DOT__x1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7927599188752823379ull);
    vlSelf->rca_gen__BRA__16__KET____DOT__fa_inst__DOT__c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2181564598335922343ull);
    vlSelf->rca_gen__BRA__16__KET____DOT__fa_inst__DOT__c2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13960143338914971752ull);
    vlSelf->rca_gen__BRA__17__KET____DOT__fa_inst__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2807356939907080907ull);
    vlSelf->rca_gen__BRA__17__KET____DOT__fa_inst__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14335371360645004654ull);
    vlSelf->rca_gen__BRA__17__KET____DOT__fa_inst__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2569770519279833335ull);
    vlSelf->rca_gen__BRA__17__KET____DOT__fa_inst__DOT__sum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15292618267520625818ull);
    vlSelf->rca_gen__BRA__17__KET____DOT__fa_inst__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18415499758672652662ull);
    vlSelf->rca_gen__BRA__17__KET____DOT__fa_inst__DOT__x1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 229225085250838574ull);
    vlSelf->rca_gen__BRA__17__KET____DOT__fa_inst__DOT__c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16480722905978552860ull);
    vlSelf->rca_gen__BRA__17__KET____DOT__fa_inst__DOT__c2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17473429140273266967ull);
    vlSelf->rca_gen__BRA__18__KET____DOT__fa_inst__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15134897988509744375ull);
    vlSelf->rca_gen__BRA__18__KET____DOT__fa_inst__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18268910931632560032ull);
    vlSelf->rca_gen__BRA__18__KET____DOT__fa_inst__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13225540689481766489ull);
    vlSelf->rca_gen__BRA__18__KET____DOT__fa_inst__DOT__sum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14095850152642381233ull);
    vlSelf->rca_gen__BRA__18__KET____DOT__fa_inst__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8514104250222164030ull);
    vlSelf->rca_gen__BRA__18__KET____DOT__fa_inst__DOT__x1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11717816678984751879ull);
    vlSelf->rca_gen__BRA__18__KET____DOT__fa_inst__DOT__c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8769258417884071350ull);
    vlSelf->rca_gen__BRA__18__KET____DOT__fa_inst__DOT__c2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14360588941025005719ull);
    vlSelf->rca_gen__BRA__19__KET____DOT__fa_inst__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2149473717360671812ull);
    vlSelf->rca_gen__BRA__19__KET____DOT__fa_inst__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14546204652951734045ull);
    vlSelf->rca_gen__BRA__19__KET____DOT__fa_inst__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8573953808689764439ull);
    vlSelf->rca_gen__BRA__19__KET____DOT__fa_inst__DOT__sum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10691809881581005206ull);
    vlSelf->rca_gen__BRA__19__KET____DOT__fa_inst__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11068896483068874498ull);
    vlSelf->rca_gen__BRA__19__KET____DOT__fa_inst__DOT__x1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14376417421394645423ull);
    vlSelf->rca_gen__BRA__19__KET____DOT__fa_inst__DOT__c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18198789722404764510ull);
    vlSelf->rca_gen__BRA__19__KET____DOT__fa_inst__DOT__c2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3396701581589349174ull);
    vlSelf->rca_gen__BRA__20__KET____DOT__fa_inst__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5441716163542843804ull);
    vlSelf->rca_gen__BRA__20__KET____DOT__fa_inst__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9871183693974950838ull);
    vlSelf->rca_gen__BRA__20__KET____DOT__fa_inst__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6507176903720964937ull);
    vlSelf->rca_gen__BRA__20__KET____DOT__fa_inst__DOT__sum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15221132994349469859ull);
    vlSelf->rca_gen__BRA__20__KET____DOT__fa_inst__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5550061726383836225ull);
    vlSelf->rca_gen__BRA__20__KET____DOT__fa_inst__DOT__x1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11612547220731337460ull);
    vlSelf->rca_gen__BRA__20__KET____DOT__fa_inst__DOT__c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13039657633990796065ull);
    vlSelf->rca_gen__BRA__20__KET____DOT__fa_inst__DOT__c2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13913301238728080468ull);
    vlSelf->rca_gen__BRA__21__KET____DOT__fa_inst__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9481705989395749317ull);
    vlSelf->rca_gen__BRA__21__KET____DOT__fa_inst__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8907004771572746255ull);
    vlSelf->rca_gen__BRA__21__KET____DOT__fa_inst__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15685337762949622368ull);
    vlSelf->rca_gen__BRA__21__KET____DOT__fa_inst__DOT__sum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5991347316410276493ull);
    vlSelf->rca_gen__BRA__21__KET____DOT__fa_inst__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13533434016964593653ull);
    vlSelf->rca_gen__BRA__21__KET____DOT__fa_inst__DOT__x1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9080841147036346297ull);
    vlSelf->rca_gen__BRA__21__KET____DOT__fa_inst__DOT__c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6504241582355620211ull);
    vlSelf->rca_gen__BRA__21__KET____DOT__fa_inst__DOT__c2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 827141820848657706ull);
    vlSelf->rca_gen__BRA__22__KET____DOT__fa_inst__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4561006895843646217ull);
    vlSelf->rca_gen__BRA__22__KET____DOT__fa_inst__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9586298925138053941ull);
    vlSelf->rca_gen__BRA__22__KET____DOT__fa_inst__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13421391672098281311ull);
    vlSelf->rca_gen__BRA__22__KET____DOT__fa_inst__DOT__sum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11432495515007203136ull);
    vlSelf->rca_gen__BRA__22__KET____DOT__fa_inst__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9467845435015296499ull);
    vlSelf->rca_gen__BRA__22__KET____DOT__fa_inst__DOT__x1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14067083179695538545ull);
    vlSelf->rca_gen__BRA__22__KET____DOT__fa_inst__DOT__c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1866513388796290647ull);
    vlSelf->rca_gen__BRA__22__KET____DOT__fa_inst__DOT__c2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16231488703137315235ull);
    vlSelf->rca_gen__BRA__23__KET____DOT__fa_inst__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8944979510502318646ull);
    vlSelf->rca_gen__BRA__23__KET____DOT__fa_inst__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14352025068912329550ull);
    vlSelf->rca_gen__BRA__23__KET____DOT__fa_inst__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12026782363576448979ull);
    vlSelf->rca_gen__BRA__23__KET____DOT__fa_inst__DOT__sum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12074866380545114131ull);
    vlSelf->rca_gen__BRA__23__KET____DOT__fa_inst__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8299853128093357441ull);
    vlSelf->rca_gen__BRA__23__KET____DOT__fa_inst__DOT__x1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9153373060722274182ull);
    vlSelf->rca_gen__BRA__23__KET____DOT__fa_inst__DOT__c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11128695003378181933ull);
    vlSelf->rca_gen__BRA__23__KET____DOT__fa_inst__DOT__c2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3665600212838291424ull);
    vlSelf->rca_gen__BRA__24__KET____DOT__fa_inst__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14522969927902722862ull);
    vlSelf->rca_gen__BRA__24__KET____DOT__fa_inst__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6238225735748601624ull);
    vlSelf->rca_gen__BRA__24__KET____DOT__fa_inst__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6963350510357415479ull);
    vlSelf->rca_gen__BRA__24__KET____DOT__fa_inst__DOT__sum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8050728906725119161ull);
    vlSelf->rca_gen__BRA__24__KET____DOT__fa_inst__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2316948393931944830ull);
    vlSelf->rca_gen__BRA__24__KET____DOT__fa_inst__DOT__x1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5638826978262405823ull);
    vlSelf->rca_gen__BRA__24__KET____DOT__fa_inst__DOT__c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16234627005968471177ull);
    vlSelf->rca_gen__BRA__24__KET____DOT__fa_inst__DOT__c2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11141050089400649296ull);
    vlSelf->rca_gen__BRA__25__KET____DOT__fa_inst__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9537392952698583731ull);
    vlSelf->rca_gen__BRA__25__KET____DOT__fa_inst__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13174075627376520303ull);
    vlSelf->rca_gen__BRA__25__KET____DOT__fa_inst__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13189025495616822170ull);
    vlSelf->rca_gen__BRA__25__KET____DOT__fa_inst__DOT__sum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2162545933515873768ull);
    vlSelf->rca_gen__BRA__25__KET____DOT__fa_inst__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14824206843094286715ull);
    vlSelf->rca_gen__BRA__25__KET____DOT__fa_inst__DOT__x1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14391154057959432254ull);
    vlSelf->rca_gen__BRA__25__KET____DOT__fa_inst__DOT__c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10261430066259568463ull);
    vlSelf->rca_gen__BRA__25__KET____DOT__fa_inst__DOT__c2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10800160897324907502ull);
    vlSelf->rca_gen__BRA__26__KET____DOT__fa_inst__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9365872815071977889ull);
    vlSelf->rca_gen__BRA__26__KET____DOT__fa_inst__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4335752220630674334ull);
    vlSelf->rca_gen__BRA__26__KET____DOT__fa_inst__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1313937892867233179ull);
    vlSelf->rca_gen__BRA__26__KET____DOT__fa_inst__DOT__sum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9002282929355195753ull);
    vlSelf->rca_gen__BRA__26__KET____DOT__fa_inst__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12262923067042454642ull);
    vlSelf->rca_gen__BRA__26__KET____DOT__fa_inst__DOT__x1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7877931026792258903ull);
    vlSelf->rca_gen__BRA__26__KET____DOT__fa_inst__DOT__c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18132681376999561693ull);
    vlSelf->rca_gen__BRA__26__KET____DOT__fa_inst__DOT__c2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1071935439575038106ull);
    vlSelf->rca_gen__BRA__27__KET____DOT__fa_inst__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9781770651481588822ull);
    vlSelf->rca_gen__BRA__27__KET____DOT__fa_inst__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2318686609110096797ull);
    vlSelf->rca_gen__BRA__27__KET____DOT__fa_inst__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13924789315840433827ull);
    vlSelf->rca_gen__BRA__27__KET____DOT__fa_inst__DOT__sum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18075205843668410072ull);
    vlSelf->rca_gen__BRA__27__KET____DOT__fa_inst__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14034529238830221985ull);
    vlSelf->rca_gen__BRA__27__KET____DOT__fa_inst__DOT__x1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11772196975494612327ull);
    vlSelf->rca_gen__BRA__27__KET____DOT__fa_inst__DOT__c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11535941647599479030ull);
    vlSelf->rca_gen__BRA__27__KET____DOT__fa_inst__DOT__c2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4637330915744542829ull);
    vlSelf->rca_gen__BRA__28__KET____DOT__fa_inst__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11867914124460638149ull);
    vlSelf->rca_gen__BRA__28__KET____DOT__fa_inst__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8417329451975287759ull);
    vlSelf->rca_gen__BRA__28__KET____DOT__fa_inst__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14985625920411135593ull);
    vlSelf->rca_gen__BRA__28__KET____DOT__fa_inst__DOT__sum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14569474674235908128ull);
    vlSelf->rca_gen__BRA__28__KET____DOT__fa_inst__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18373135595564449896ull);
    vlSelf->rca_gen__BRA__28__KET____DOT__fa_inst__DOT__x1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16277111199150701109ull);
    vlSelf->rca_gen__BRA__28__KET____DOT__fa_inst__DOT__c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14425939185970979755ull);
    vlSelf->rca_gen__BRA__28__KET____DOT__fa_inst__DOT__c2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14643827916048057186ull);
    vlSelf->rca_gen__BRA__29__KET____DOT__fa_inst__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5273573557607446288ull);
    vlSelf->rca_gen__BRA__29__KET____DOT__fa_inst__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3125103042631965095ull);
    vlSelf->rca_gen__BRA__29__KET____DOT__fa_inst__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18236581197117578675ull);
    vlSelf->rca_gen__BRA__29__KET____DOT__fa_inst__DOT__sum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9356676739063261758ull);
    vlSelf->rca_gen__BRA__29__KET____DOT__fa_inst__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5104700649322310358ull);
    vlSelf->rca_gen__BRA__29__KET____DOT__fa_inst__DOT__x1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9885009052370582300ull);
    vlSelf->rca_gen__BRA__29__KET____DOT__fa_inst__DOT__c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 922205952793551156ull);
    vlSelf->rca_gen__BRA__29__KET____DOT__fa_inst__DOT__c2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15209469589607627061ull);
    vlSelf->rca_gen__BRA__30__KET____DOT__fa_inst__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17347324313204339005ull);
    vlSelf->rca_gen__BRA__30__KET____DOT__fa_inst__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14113711501178445638ull);
    vlSelf->rca_gen__BRA__30__KET____DOT__fa_inst__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1662678992654571800ull);
    vlSelf->rca_gen__BRA__30__KET____DOT__fa_inst__DOT__sum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9892924089855971202ull);
    vlSelf->rca_gen__BRA__30__KET____DOT__fa_inst__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14496311716184801609ull);
    vlSelf->rca_gen__BRA__30__KET____DOT__fa_inst__DOT__x1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 160437237892824137ull);
    vlSelf->rca_gen__BRA__30__KET____DOT__fa_inst__DOT__c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14064392268371851159ull);
    vlSelf->rca_gen__BRA__30__KET____DOT__fa_inst__DOT__c2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12060234969149821820ull);
    vlSelf->rca_gen__BRA__31__KET____DOT__fa_inst__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2536494477842033519ull);
    vlSelf->rca_gen__BRA__31__KET____DOT__fa_inst__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4631737135793414427ull);
    vlSelf->rca_gen__BRA__31__KET____DOT__fa_inst__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8724643178044122310ull);
    vlSelf->rca_gen__BRA__31__KET____DOT__fa_inst__DOT__sum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1250541465728864448ull);
    vlSelf->rca_gen__BRA__31__KET____DOT__fa_inst__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4687533880975694642ull);
    vlSelf->rca_gen__BRA__31__KET____DOT__fa_inst__DOT__x1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13661887508323078724ull);
    vlSelf->rca_gen__BRA__31__KET____DOT__fa_inst__DOT__c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 978646027120274845ull);
    vlSelf->rca_gen__BRA__31__KET____DOT__fa_inst__DOT__c2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13272614684645846625ull);
    vlSelf->rca_gen__BRA__32__KET____DOT__fa_inst__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1209377546905028481ull);
    vlSelf->rca_gen__BRA__32__KET____DOT__fa_inst__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5157966867777282373ull);
    vlSelf->rca_gen__BRA__32__KET____DOT__fa_inst__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 989196112221887659ull);
    vlSelf->rca_gen__BRA__32__KET____DOT__fa_inst__DOT__sum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3289739194709463581ull);
    vlSelf->rca_gen__BRA__32__KET____DOT__fa_inst__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13768259267938552336ull);
    vlSelf->rca_gen__BRA__32__KET____DOT__fa_inst__DOT__x1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13046504205160872244ull);
    vlSelf->rca_gen__BRA__32__KET____DOT__fa_inst__DOT__c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5834411670143239329ull);
    vlSelf->rca_gen__BRA__32__KET____DOT__fa_inst__DOT__c2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5526797701205897497ull);
    vlSelf->rca_gen__BRA__33__KET____DOT__fa_inst__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6909760364349541915ull);
    vlSelf->rca_gen__BRA__33__KET____DOT__fa_inst__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3877171850289184771ull);
    vlSelf->rca_gen__BRA__33__KET____DOT__fa_inst__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12444065967071221788ull);
    vlSelf->rca_gen__BRA__33__KET____DOT__fa_inst__DOT__sum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8790512307300773248ull);
    vlSelf->rca_gen__BRA__33__KET____DOT__fa_inst__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3870745577693816649ull);
    vlSelf->rca_gen__BRA__33__KET____DOT__fa_inst__DOT__x1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7664761241505601230ull);
    vlSelf->rca_gen__BRA__33__KET____DOT__fa_inst__DOT__c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12570894815921702701ull);
    vlSelf->rca_gen__BRA__33__KET____DOT__fa_inst__DOT__c2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3136670330392676858ull);
    vlSelf->rca_gen__BRA__34__KET____DOT__fa_inst__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16005245984475481780ull);
    vlSelf->rca_gen__BRA__34__KET____DOT__fa_inst__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17638453013706981052ull);
    vlSelf->rca_gen__BRA__34__KET____DOT__fa_inst__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11609898346015885237ull);
    vlSelf->rca_gen__BRA__34__KET____DOT__fa_inst__DOT__sum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13880492660271765834ull);
    vlSelf->rca_gen__BRA__34__KET____DOT__fa_inst__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12159785376138180190ull);
    vlSelf->rca_gen__BRA__34__KET____DOT__fa_inst__DOT__x1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4526237788509616682ull);
    vlSelf->rca_gen__BRA__34__KET____DOT__fa_inst__DOT__c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16305968530286524497ull);
    vlSelf->rca_gen__BRA__34__KET____DOT__fa_inst__DOT__c2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7717980904180296479ull);
    vlSelf->rca_gen__BRA__35__KET____DOT__fa_inst__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15941535431412567024ull);
    vlSelf->rca_gen__BRA__35__KET____DOT__fa_inst__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10505540180459458104ull);
    vlSelf->rca_gen__BRA__35__KET____DOT__fa_inst__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1644143526608831135ull);
    vlSelf->rca_gen__BRA__35__KET____DOT__fa_inst__DOT__sum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17953812974496829882ull);
    vlSelf->rca_gen__BRA__35__KET____DOT__fa_inst__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1484335470253305429ull);
    vlSelf->rca_gen__BRA__35__KET____DOT__fa_inst__DOT__x1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4507418938411154357ull);
    vlSelf->rca_gen__BRA__35__KET____DOT__fa_inst__DOT__c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11046962548161386467ull);
    vlSelf->rca_gen__BRA__35__KET____DOT__fa_inst__DOT__c2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11762673884493738897ull);
    vlSelf->rca_gen__BRA__36__KET____DOT__fa_inst__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10046586786555298784ull);
    vlSelf->rca_gen__BRA__36__KET____DOT__fa_inst__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8145853003664614930ull);
    vlSelf->rca_gen__BRA__36__KET____DOT__fa_inst__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 536668815072542203ull);
    vlSelf->rca_gen__BRA__36__KET____DOT__fa_inst__DOT__sum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5923509719232632644ull);
    vlSelf->rca_gen__BRA__36__KET____DOT__fa_inst__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 814680122327430267ull);
    vlSelf->rca_gen__BRA__36__KET____DOT__fa_inst__DOT__x1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3026889444506553279ull);
    vlSelf->rca_gen__BRA__36__KET____DOT__fa_inst__DOT__c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17748547306679896736ull);
    vlSelf->rca_gen__BRA__36__KET____DOT__fa_inst__DOT__c2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15307801762909283608ull);
    vlSelf->rca_gen__BRA__37__KET____DOT__fa_inst__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9456430815757825159ull);
    vlSelf->rca_gen__BRA__37__KET____DOT__fa_inst__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9867368695462628694ull);
    vlSelf->rca_gen__BRA__37__KET____DOT__fa_inst__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 383229311245982957ull);
    vlSelf->rca_gen__BRA__37__KET____DOT__fa_inst__DOT__sum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17181770201159291757ull);
    vlSelf->rca_gen__BRA__37__KET____DOT__fa_inst__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16143988909979996717ull);
    vlSelf->rca_gen__BRA__37__KET____DOT__fa_inst__DOT__x1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13321140860293442389ull);
    vlSelf->rca_gen__BRA__37__KET____DOT__fa_inst__DOT__c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18313116358040160008ull);
    vlSelf->rca_gen__BRA__37__KET____DOT__fa_inst__DOT__c2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17100319098294910478ull);
    vlSelf->rca_gen__BRA__38__KET____DOT__fa_inst__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12592988007514453588ull);
    vlSelf->rca_gen__BRA__38__KET____DOT__fa_inst__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13783143199978691716ull);
    vlSelf->rca_gen__BRA__38__KET____DOT__fa_inst__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4375223228468560656ull);
    vlSelf->rca_gen__BRA__38__KET____DOT__fa_inst__DOT__sum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1246130758351516213ull);
    vlSelf->rca_gen__BRA__38__KET____DOT__fa_inst__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16095930929003558755ull);
    vlSelf->rca_gen__BRA__38__KET____DOT__fa_inst__DOT__x1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15689573379418619858ull);
    vlSelf->rca_gen__BRA__38__KET____DOT__fa_inst__DOT__c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6140508037053460653ull);
    vlSelf->rca_gen__BRA__38__KET____DOT__fa_inst__DOT__c2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11382189320799694294ull);
    vlSelf->rca_gen__BRA__39__KET____DOT__fa_inst__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15173639463893002023ull);
    vlSelf->rca_gen__BRA__39__KET____DOT__fa_inst__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6526905984620555673ull);
    vlSelf->rca_gen__BRA__39__KET____DOT__fa_inst__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5986392567980444307ull);
    vlSelf->rca_gen__BRA__39__KET____DOT__fa_inst__DOT__sum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2092695566842092354ull);
    vlSelf->rca_gen__BRA__39__KET____DOT__fa_inst__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15956481963749766470ull);
    vlSelf->rca_gen__BRA__39__KET____DOT__fa_inst__DOT__x1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5932755780398888182ull);
    vlSelf->rca_gen__BRA__39__KET____DOT__fa_inst__DOT__c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6783644249975309105ull);
    vlSelf->rca_gen__BRA__39__KET____DOT__fa_inst__DOT__c2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 24764063206992975ull);
    vlSelf->rca_gen__BRA__40__KET____DOT__fa_inst__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17299179921781611890ull);
    vlSelf->rca_gen__BRA__40__KET____DOT__fa_inst__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10575434332329450710ull);
    vlSelf->rca_gen__BRA__40__KET____DOT__fa_inst__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17007018666748030747ull);
    vlSelf->rca_gen__BRA__40__KET____DOT__fa_inst__DOT__sum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2246704820449818332ull);
    vlSelf->rca_gen__BRA__40__KET____DOT__fa_inst__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6884861016624894278ull);
    vlSelf->rca_gen__BRA__40__KET____DOT__fa_inst__DOT__x1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12552591387744497870ull);
    vlSelf->rca_gen__BRA__40__KET____DOT__fa_inst__DOT__c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1583577025114954330ull);
    vlSelf->rca_gen__BRA__40__KET____DOT__fa_inst__DOT__c2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4558191529505642687ull);
    vlSelf->rca_gen__BRA__41__KET____DOT__fa_inst__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10287084686116475595ull);
    vlSelf->rca_gen__BRA__41__KET____DOT__fa_inst__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11950082798167499240ull);
    vlSelf->rca_gen__BRA__41__KET____DOT__fa_inst__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5561638797590076862ull);
    vlSelf->rca_gen__BRA__41__KET____DOT__fa_inst__DOT__sum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2109561964182386288ull);
    vlSelf->rca_gen__BRA__41__KET____DOT__fa_inst__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5057831994681575760ull);
    vlSelf->rca_gen__BRA__41__KET____DOT__fa_inst__DOT__x1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4077790985722976919ull);
    vlSelf->rca_gen__BRA__41__KET____DOT__fa_inst__DOT__c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6380639604615064357ull);
    vlSelf->rca_gen__BRA__41__KET____DOT__fa_inst__DOT__c2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5573994321736911948ull);
    vlSelf->rca_gen__BRA__42__KET____DOT__fa_inst__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1235561782260851229ull);
    vlSelf->rca_gen__BRA__42__KET____DOT__fa_inst__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11954506298693734895ull);
    vlSelf->rca_gen__BRA__42__KET____DOT__fa_inst__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2475527706432509537ull);
    vlSelf->rca_gen__BRA__42__KET____DOT__fa_inst__DOT__sum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12929328509469341954ull);
    vlSelf->rca_gen__BRA__42__KET____DOT__fa_inst__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9745506197897790013ull);
    vlSelf->rca_gen__BRA__42__KET____DOT__fa_inst__DOT__x1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15857690269733269130ull);
    vlSelf->rca_gen__BRA__42__KET____DOT__fa_inst__DOT__c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16693785987122002465ull);
    vlSelf->rca_gen__BRA__42__KET____DOT__fa_inst__DOT__c2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18296344671822511309ull);
    vlSelf->rca_gen__BRA__43__KET____DOT__fa_inst__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10982499780917515953ull);
    vlSelf->rca_gen__BRA__43__KET____DOT__fa_inst__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9404987916512724332ull);
    vlSelf->rca_gen__BRA__43__KET____DOT__fa_inst__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4209802282194784244ull);
    vlSelf->rca_gen__BRA__43__KET____DOT__fa_inst__DOT__sum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3625936059353201690ull);
    vlSelf->rca_gen__BRA__43__KET____DOT__fa_inst__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12256318369824406533ull);
    vlSelf->rca_gen__BRA__43__KET____DOT__fa_inst__DOT__x1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10382843607537516796ull);
    vlSelf->rca_gen__BRA__43__KET____DOT__fa_inst__DOT__c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2910227247485159478ull);
    vlSelf->rca_gen__BRA__43__KET____DOT__fa_inst__DOT__c2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14941520831424561812ull);
    vlSelf->rca_gen__BRA__44__KET____DOT__fa_inst__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7265592897488866159ull);
    vlSelf->rca_gen__BRA__44__KET____DOT__fa_inst__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9333319014189629908ull);
    vlSelf->rca_gen__BRA__44__KET____DOT__fa_inst__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12729271476918889226ull);
    vlSelf->rca_gen__BRA__44__KET____DOT__fa_inst__DOT__sum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13716011209399598122ull);
    vlSelf->rca_gen__BRA__44__KET____DOT__fa_inst__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16223305848875546542ull);
    vlSelf->rca_gen__BRA__44__KET____DOT__fa_inst__DOT__x1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4237823209994143751ull);
    vlSelf->rca_gen__BRA__44__KET____DOT__fa_inst__DOT__c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6120660057618119332ull);
    vlSelf->rca_gen__BRA__44__KET____DOT__fa_inst__DOT__c2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14364756734117468793ull);
    vlSelf->rca_gen__BRA__45__KET____DOT__fa_inst__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16070339445135992426ull);
    vlSelf->rca_gen__BRA__45__KET____DOT__fa_inst__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 179659052615144440ull);
    vlSelf->rca_gen__BRA__45__KET____DOT__fa_inst__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10100036644734843630ull);
    vlSelf->rca_gen__BRA__45__KET____DOT__fa_inst__DOT__sum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13383276470455078114ull);
    vlSelf->rca_gen__BRA__45__KET____DOT__fa_inst__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8342056727499806884ull);
    vlSelf->rca_gen__BRA__45__KET____DOT__fa_inst__DOT__x1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16094078523707140925ull);
    vlSelf->rca_gen__BRA__45__KET____DOT__fa_inst__DOT__c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5712523469826524545ull);
    vlSelf->rca_gen__BRA__45__KET____DOT__fa_inst__DOT__c2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12867206362057861406ull);
    vlSelf->rca_gen__BRA__46__KET____DOT__fa_inst__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5439461897875230007ull);
    vlSelf->rca_gen__BRA__46__KET____DOT__fa_inst__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9216442420706561932ull);
    vlSelf->rca_gen__BRA__46__KET____DOT__fa_inst__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10051613730803119890ull);
    vlSelf->rca_gen__BRA__46__KET____DOT__fa_inst__DOT__sum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5688798889236730784ull);
    vlSelf->rca_gen__BRA__46__KET____DOT__fa_inst__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8010916776002128712ull);
    vlSelf->rca_gen__BRA__46__KET____DOT__fa_inst__DOT__x1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9353341678435913098ull);
    vlSelf->rca_gen__BRA__46__KET____DOT__fa_inst__DOT__c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6702947293822986596ull);
    vlSelf->rca_gen__BRA__46__KET____DOT__fa_inst__DOT__c2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4416780481684375223ull);
    vlSelf->rca_gen__BRA__47__KET____DOT__fa_inst__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15102171373479064178ull);
    vlSelf->rca_gen__BRA__47__KET____DOT__fa_inst__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3760239128962240280ull);
    vlSelf->rca_gen__BRA__47__KET____DOT__fa_inst__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3101877531368837675ull);
    vlSelf->rca_gen__BRA__47__KET____DOT__fa_inst__DOT__sum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2086428519654442919ull);
    vlSelf->rca_gen__BRA__47__KET____DOT__fa_inst__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4715354748784718784ull);
    vlSelf->rca_gen__BRA__47__KET____DOT__fa_inst__DOT__x1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1762502260556046744ull);
    vlSelf->rca_gen__BRA__47__KET____DOT__fa_inst__DOT__c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6951900986392280953ull);
    vlSelf->rca_gen__BRA__47__KET____DOT__fa_inst__DOT__c2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11472586751650516479ull);
    vlSelf->rca_gen__BRA__48__KET____DOT__fa_inst__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 898652219039036685ull);
    vlSelf->rca_gen__BRA__48__KET____DOT__fa_inst__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10193294338519267342ull);
    vlSelf->rca_gen__BRA__48__KET____DOT__fa_inst__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13899628042377492234ull);
    vlSelf->rca_gen__BRA__48__KET____DOT__fa_inst__DOT__sum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6680575022469111500ull);
    vlSelf->rca_gen__BRA__48__KET____DOT__fa_inst__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16138377449181320701ull);
    vlSelf->rca_gen__BRA__48__KET____DOT__fa_inst__DOT__x1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8776266362637146592ull);
    vlSelf->rca_gen__BRA__48__KET____DOT__fa_inst__DOT__c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15544320382293373238ull);
    vlSelf->rca_gen__BRA__48__KET____DOT__fa_inst__DOT__c2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7558059214566242434ull);
    vlSelf->rca_gen__BRA__49__KET____DOT__fa_inst__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13365762735005420532ull);
    vlSelf->rca_gen__BRA__49__KET____DOT__fa_inst__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9036566536879674137ull);
    vlSelf->rca_gen__BRA__49__KET____DOT__fa_inst__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8831771753795515156ull);
    vlSelf->rca_gen__BRA__49__KET____DOT__fa_inst__DOT__sum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7185999601555150421ull);
    vlSelf->rca_gen__BRA__49__KET____DOT__fa_inst__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6915483220858109878ull);
    vlSelf->rca_gen__BRA__49__KET____DOT__fa_inst__DOT__x1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1572230073059266958ull);
    vlSelf->rca_gen__BRA__49__KET____DOT__fa_inst__DOT__c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8935011131181089616ull);
    vlSelf->rca_gen__BRA__49__KET____DOT__fa_inst__DOT__c2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 236165317833801358ull);
    vlSelf->rca_gen__BRA__50__KET____DOT__fa_inst__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 934464634757354863ull);
    vlSelf->rca_gen__BRA__50__KET____DOT__fa_inst__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10475282013705398072ull);
    vlSelf->rca_gen__BRA__50__KET____DOT__fa_inst__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8872210682295555907ull);
    vlSelf->rca_gen__BRA__50__KET____DOT__fa_inst__DOT__sum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8714603459072033911ull);
    vlSelf->rca_gen__BRA__50__KET____DOT__fa_inst__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6306773050431877472ull);
    vlSelf->rca_gen__BRA__50__KET____DOT__fa_inst__DOT__x1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5519144335706154796ull);
    vlSelf->rca_gen__BRA__50__KET____DOT__fa_inst__DOT__c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10307739500403963470ull);
    vlSelf->rca_gen__BRA__50__KET____DOT__fa_inst__DOT__c2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8027293927277096068ull);
    vlSelf->rca_gen__BRA__51__KET____DOT__fa_inst__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10540328727443272232ull);
    vlSelf->rca_gen__BRA__51__KET____DOT__fa_inst__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12028325563782429720ull);
    vlSelf->rca_gen__BRA__51__KET____DOT__fa_inst__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17441937494912320172ull);
    vlSelf->rca_gen__BRA__51__KET____DOT__fa_inst__DOT__sum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13265799022169777630ull);
    vlSelf->rca_gen__BRA__51__KET____DOT__fa_inst__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17023191870065276742ull);
    vlSelf->rca_gen__BRA__51__KET____DOT__fa_inst__DOT__x1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16000843602310532940ull);
    vlSelf->rca_gen__BRA__51__KET____DOT__fa_inst__DOT__c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1207326830661664994ull);
    vlSelf->rca_gen__BRA__51__KET____DOT__fa_inst__DOT__c2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17721331070232862683ull);
    vlSelf->rca_gen__BRA__52__KET____DOT__fa_inst__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3885792479498110964ull);
    vlSelf->rca_gen__BRA__52__KET____DOT__fa_inst__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16337441066054548198ull);
    vlSelf->rca_gen__BRA__52__KET____DOT__fa_inst__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6414128809886588764ull);
    vlSelf->rca_gen__BRA__52__KET____DOT__fa_inst__DOT__sum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13785644759869960827ull);
    vlSelf->rca_gen__BRA__52__KET____DOT__fa_inst__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15851709640499128582ull);
    vlSelf->rca_gen__BRA__52__KET____DOT__fa_inst__DOT__x1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13026168082277221660ull);
    vlSelf->rca_gen__BRA__52__KET____DOT__fa_inst__DOT__c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1724018028219971551ull);
    vlSelf->rca_gen__BRA__52__KET____DOT__fa_inst__DOT__c2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10676002886759982244ull);
    vlSelf->rca_gen__BRA__53__KET____DOT__fa_inst__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15382461190017936529ull);
    vlSelf->rca_gen__BRA__53__KET____DOT__fa_inst__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4741363117330527051ull);
    vlSelf->rca_gen__BRA__53__KET____DOT__fa_inst__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2239690732520488375ull);
    vlSelf->rca_gen__BRA__53__KET____DOT__fa_inst__DOT__sum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13499213829221853335ull);
    vlSelf->rca_gen__BRA__53__KET____DOT__fa_inst__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14739507101228345017ull);
    vlSelf->rca_gen__BRA__53__KET____DOT__fa_inst__DOT__x1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8263763595043441128ull);
    vlSelf->rca_gen__BRA__53__KET____DOT__fa_inst__DOT__c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17715213029404982847ull);
    vlSelf->rca_gen__BRA__53__KET____DOT__fa_inst__DOT__c2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7692689463440503281ull);
    vlSelf->rca_gen__BRA__54__KET____DOT__fa_inst__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9363860587472652439ull);
    vlSelf->rca_gen__BRA__54__KET____DOT__fa_inst__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4479946245595480327ull);
    vlSelf->rca_gen__BRA__54__KET____DOT__fa_inst__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13422228217681901151ull);
    vlSelf->rca_gen__BRA__54__KET____DOT__fa_inst__DOT__sum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16262546827717328030ull);
    vlSelf->rca_gen__BRA__54__KET____DOT__fa_inst__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9842166778400464420ull);
    vlSelf->rca_gen__BRA__54__KET____DOT__fa_inst__DOT__x1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14125030080007881882ull);
    vlSelf->rca_gen__BRA__54__KET____DOT__fa_inst__DOT__c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13166001974808634537ull);
    vlSelf->rca_gen__BRA__54__KET____DOT__fa_inst__DOT__c2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1156051550044625119ull);
    vlSelf->rca_gen__BRA__55__KET____DOT__fa_inst__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8667983861113634137ull);
    vlSelf->rca_gen__BRA__55__KET____DOT__fa_inst__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4133240061461319472ull);
    vlSelf->rca_gen__BRA__55__KET____DOT__fa_inst__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1046137613193237941ull);
    vlSelf->rca_gen__BRA__55__KET____DOT__fa_inst__DOT__sum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9581940051978045620ull);
    vlSelf->rca_gen__BRA__55__KET____DOT__fa_inst__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13239328892605663590ull);
    vlSelf->rca_gen__BRA__55__KET____DOT__fa_inst__DOT__x1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11780899635400286480ull);
    vlSelf->rca_gen__BRA__55__KET____DOT__fa_inst__DOT__c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17078225323415532918ull);
    vlSelf->rca_gen__BRA__55__KET____DOT__fa_inst__DOT__c2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14703110786277880984ull);
    vlSelf->rca_gen__BRA__56__KET____DOT__fa_inst__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15756088003682939661ull);
    vlSelf->rca_gen__BRA__56__KET____DOT__fa_inst__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3656745794373996803ull);
    vlSelf->rca_gen__BRA__56__KET____DOT__fa_inst__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6258970230975955921ull);
    vlSelf->rca_gen__BRA__56__KET____DOT__fa_inst__DOT__sum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5617519758405628995ull);
    vlSelf->rca_gen__BRA__56__KET____DOT__fa_inst__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4299997221439515233ull);
    vlSelf->rca_gen__BRA__56__KET____DOT__fa_inst__DOT__x1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9712907381226598950ull);
    vlSelf->rca_gen__BRA__56__KET____DOT__fa_inst__DOT__c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18088725137880221962ull);
    vlSelf->rca_gen__BRA__56__KET____DOT__fa_inst__DOT__c2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12767388676200842017ull);
    vlSelf->rca_gen__BRA__57__KET____DOT__fa_inst__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9470799114705487956ull);
    vlSelf->rca_gen__BRA__57__KET____DOT__fa_inst__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4335000320077354228ull);
    vlSelf->rca_gen__BRA__57__KET____DOT__fa_inst__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3240487627176857190ull);
    vlSelf->rca_gen__BRA__57__KET____DOT__fa_inst__DOT__sum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8953854143897319270ull);
    vlSelf->rca_gen__BRA__57__KET____DOT__fa_inst__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15904202499101063357ull);
    vlSelf->rca_gen__BRA__57__KET____DOT__fa_inst__DOT__x1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12774374534754134287ull);
    vlSelf->rca_gen__BRA__57__KET____DOT__fa_inst__DOT__c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6331232227524872266ull);
    vlSelf->rca_gen__BRA__57__KET____DOT__fa_inst__DOT__c2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10083495081102101910ull);
    vlSelf->rca_gen__BRA__58__KET____DOT__fa_inst__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14179338606758575830ull);
    vlSelf->rca_gen__BRA__58__KET____DOT__fa_inst__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4546654323477872261ull);
    vlSelf->rca_gen__BRA__58__KET____DOT__fa_inst__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11716945280654078610ull);
    vlSelf->rca_gen__BRA__58__KET____DOT__fa_inst__DOT__sum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9730196575935593044ull);
    vlSelf->rca_gen__BRA__58__KET____DOT__fa_inst__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5673869575110295221ull);
    vlSelf->rca_gen__BRA__58__KET____DOT__fa_inst__DOT__x1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7421271260396021639ull);
    vlSelf->rca_gen__BRA__58__KET____DOT__fa_inst__DOT__c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12264310110233663563ull);
    vlSelf->rca_gen__BRA__58__KET____DOT__fa_inst__DOT__c2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4543802122632389315ull);
    vlSelf->rca_gen__BRA__59__KET____DOT__fa_inst__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11408682257393287175ull);
    vlSelf->rca_gen__BRA__59__KET____DOT__fa_inst__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7834862299167202839ull);
    vlSelf->rca_gen__BRA__59__KET____DOT__fa_inst__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 285584863727167067ull);
    vlSelf->rca_gen__BRA__59__KET____DOT__fa_inst__DOT__sum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9664547654187439403ull);
    vlSelf->rca_gen__BRA__59__KET____DOT__fa_inst__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10853827541121595816ull);
    vlSelf->rca_gen__BRA__59__KET____DOT__fa_inst__DOT__x1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9239601494169004330ull);
    vlSelf->rca_gen__BRA__59__KET____DOT__fa_inst__DOT__c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3354916102969059966ull);
    vlSelf->rca_gen__BRA__59__KET____DOT__fa_inst__DOT__c2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7026217902582702845ull);
    vlSelf->rca_gen__BRA__60__KET____DOT__fa_inst__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8176557751648364521ull);
    vlSelf->rca_gen__BRA__60__KET____DOT__fa_inst__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1020969547262265882ull);
    vlSelf->rca_gen__BRA__60__KET____DOT__fa_inst__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12946643586015719352ull);
    vlSelf->rca_gen__BRA__60__KET____DOT__fa_inst__DOT__sum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16098892554001639802ull);
    vlSelf->rca_gen__BRA__60__KET____DOT__fa_inst__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14530048837821106369ull);
    vlSelf->rca_gen__BRA__60__KET____DOT__fa_inst__DOT__x1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3530945897005812693ull);
    vlSelf->rca_gen__BRA__60__KET____DOT__fa_inst__DOT__c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1727569665920432388ull);
    vlSelf->rca_gen__BRA__60__KET____DOT__fa_inst__DOT__c2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11619831605631534007ull);
    vlSelf->rca_gen__BRA__61__KET____DOT__fa_inst__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 842249391260173445ull);
    vlSelf->rca_gen__BRA__61__KET____DOT__fa_inst__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1892232120712178628ull);
    vlSelf->rca_gen__BRA__61__KET____DOT__fa_inst__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11256000262297403106ull);
    vlSelf->rca_gen__BRA__61__KET____DOT__fa_inst__DOT__sum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2989146995824498548ull);
    vlSelf->rca_gen__BRA__61__KET____DOT__fa_inst__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4855916627516136435ull);
    vlSelf->rca_gen__BRA__61__KET____DOT__fa_inst__DOT__x1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2891264293597718436ull);
    vlSelf->rca_gen__BRA__61__KET____DOT__fa_inst__DOT__c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9026657056376432145ull);
    vlSelf->rca_gen__BRA__61__KET____DOT__fa_inst__DOT__c2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 560099762066459953ull);
    vlSelf->rca_gen__BRA__62__KET____DOT__fa_inst__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5987607958865907347ull);
    vlSelf->rca_gen__BRA__62__KET____DOT__fa_inst__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5217620352120743245ull);
    vlSelf->rca_gen__BRA__62__KET____DOT__fa_inst__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13679122526186157754ull);
    vlSelf->rca_gen__BRA__62__KET____DOT__fa_inst__DOT__sum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6732827106778887959ull);
    vlSelf->rca_gen__BRA__62__KET____DOT__fa_inst__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3900598420900128096ull);
    vlSelf->rca_gen__BRA__62__KET____DOT__fa_inst__DOT__x1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16750145921519530082ull);
    vlSelf->rca_gen__BRA__62__KET____DOT__fa_inst__DOT__c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4036410814678162015ull);
    vlSelf->rca_gen__BRA__62__KET____DOT__fa_inst__DOT__c2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9018809502508988410ull);
    vlSelf->rca_gen__BRA__63__KET____DOT__fa_inst__DOT__a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5951822786866880664ull);
    vlSelf->rca_gen__BRA__63__KET____DOT__fa_inst__DOT__b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12744403373596834988ull);
    vlSelf->rca_gen__BRA__63__KET____DOT__fa_inst__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14964205004410763279ull);
    vlSelf->rca_gen__BRA__63__KET____DOT__fa_inst__DOT__sum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7918125822314113049ull);
    vlSelf->rca_gen__BRA__63__KET____DOT__fa_inst__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12780025876119847998ull);
    vlSelf->rca_gen__BRA__63__KET____DOT__fa_inst__DOT__x1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3287949450256565383ull);
    vlSelf->rca_gen__BRA__63__KET____DOT__fa_inst__DOT__c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13294448069532507819ull);
    vlSelf->rca_gen__BRA__63__KET____DOT__fa_inst__DOT__c2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6877156349571183625ull);
}
