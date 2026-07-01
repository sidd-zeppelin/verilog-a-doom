// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsoc_top.h for the primary calling header

#include "Vsoc_top__pch.h"

void Vsoc_top_rca_64b___nba_sequent__TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst__0(Vsoc_top_rca_64b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsoc_top_rca_64b___nba_sequent__TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst__0\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rca_gen__BRA__4__KET____DOT__fa_inst__DOT__cin 
        = (IData)((0x000000000000000cULL == (0x000000000000000cULL 
                                             & vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc)));
    vlSelfRef.__PVT__rca_gen__BRA__5__KET____DOT__fa_inst__DOT__cin 
        = ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                    >> 4U)) & (IData)(vlSelfRef.__PVT__rca_gen__BRA__4__KET____DOT__fa_inst__DOT__cin));
    vlSelfRef.__PVT__rca_gen__BRA__6__KET____DOT__fa_inst__DOT__cin 
        = ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                    >> 5U)) & (IData)(vlSelfRef.__PVT__rca_gen__BRA__5__KET____DOT__fa_inst__DOT__cin));
    vlSelfRef.__PVT__rca_gen__BRA__7__KET____DOT__fa_inst__DOT__cin 
        = ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                    >> 6U)) & (IData)(vlSelfRef.__PVT__rca_gen__BRA__6__KET____DOT__fa_inst__DOT__cin));
    vlSelfRef.__PVT__rca_gen__BRA__8__KET____DOT__fa_inst__DOT__cin 
        = ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                    >> 7U)) & (IData)(vlSelfRef.__PVT__rca_gen__BRA__7__KET____DOT__fa_inst__DOT__cin));
    vlSelfRef.__PVT__rca_gen__BRA__9__KET____DOT__fa_inst__DOT__cin 
        = ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                    >> 8U)) & (IData)(vlSelfRef.__PVT__rca_gen__BRA__8__KET____DOT__fa_inst__DOT__cin));
    vlSelfRef.__PVT__rca_gen__BRA__10__KET____DOT__fa_inst__DOT__cin 
        = ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                    >> 9U)) & (IData)(vlSelfRef.__PVT__rca_gen__BRA__9__KET____DOT__fa_inst__DOT__cin));
    vlSelfRef.__PVT__rca_gen__BRA__11__KET____DOT__fa_inst__DOT__cin 
        = ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                    >> 0x0000000aU)) & (IData)(vlSelfRef.__PVT__rca_gen__BRA__10__KET____DOT__fa_inst__DOT__cin));
    vlSelfRef.__PVT__rca_gen__BRA__12__KET____DOT__fa_inst__DOT__cin 
        = ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                    >> 0x0000000bU)) & (IData)(vlSelfRef.__PVT__rca_gen__BRA__11__KET____DOT__fa_inst__DOT__cin));
    vlSelfRef.__PVT__rca_gen__BRA__13__KET____DOT__fa_inst__DOT__cin 
        = ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                    >> 0x0000000cU)) & (IData)(vlSelfRef.__PVT__rca_gen__BRA__12__KET____DOT__fa_inst__DOT__cin));
    vlSelfRef.__PVT__rca_gen__BRA__14__KET____DOT__fa_inst__DOT__cin 
        = ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                    >> 0x0000000dU)) & (IData)(vlSelfRef.__PVT__rca_gen__BRA__13__KET____DOT__fa_inst__DOT__cin));
    vlSelfRef.__PVT__rca_gen__BRA__15__KET____DOT__fa_inst__DOT__cin 
        = ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                    >> 0x0000000eU)) & (IData)(vlSelfRef.__PVT__rca_gen__BRA__14__KET____DOT__fa_inst__DOT__cin));
    vlSelfRef.__PVT__rca_gen__BRA__16__KET____DOT__fa_inst__DOT__cin 
        = ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                    >> 0x0000000fU)) & (IData)(vlSelfRef.__PVT__rca_gen__BRA__15__KET____DOT__fa_inst__DOT__cin));
    vlSelfRef.__PVT__rca_gen__BRA__17__KET____DOT__fa_inst__DOT__cin 
        = ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                    >> 0x00000010U)) & (IData)(vlSelfRef.__PVT__rca_gen__BRA__16__KET____DOT__fa_inst__DOT__cin));
    vlSelfRef.__PVT__rca_gen__BRA__18__KET____DOT__fa_inst__DOT__cin 
        = ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                    >> 0x00000011U)) & (IData)(vlSelfRef.__PVT__rca_gen__BRA__17__KET____DOT__fa_inst__DOT__cin));
    vlSelfRef.__PVT__rca_gen__BRA__19__KET____DOT__fa_inst__DOT__cin 
        = ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                    >> 0x00000012U)) & (IData)(vlSelfRef.__PVT__rca_gen__BRA__18__KET____DOT__fa_inst__DOT__cin));
    vlSelfRef.__PVT__rca_gen__BRA__20__KET____DOT__fa_inst__DOT__cin 
        = ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                    >> 0x00000013U)) & (IData)(vlSelfRef.__PVT__rca_gen__BRA__19__KET____DOT__fa_inst__DOT__cin));
    vlSelfRef.__PVT__rca_gen__BRA__21__KET____DOT__fa_inst__DOT__cin 
        = ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                    >> 0x00000014U)) & (IData)(vlSelfRef.__PVT__rca_gen__BRA__20__KET____DOT__fa_inst__DOT__cin));
    vlSelfRef.__PVT__rca_gen__BRA__22__KET____DOT__fa_inst__DOT__cin 
        = ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                    >> 0x00000015U)) & (IData)(vlSelfRef.__PVT__rca_gen__BRA__21__KET____DOT__fa_inst__DOT__cin));
    vlSelfRef.__PVT__rca_gen__BRA__23__KET____DOT__fa_inst__DOT__cin 
        = ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                    >> 0x00000016U)) & (IData)(vlSelfRef.__PVT__rca_gen__BRA__22__KET____DOT__fa_inst__DOT__cin));
    vlSelfRef.__PVT__rca_gen__BRA__24__KET____DOT__fa_inst__DOT__cin 
        = ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                    >> 0x00000017U)) & (IData)(vlSelfRef.__PVT__rca_gen__BRA__23__KET____DOT__fa_inst__DOT__cin));
    vlSelfRef.__PVT__rca_gen__BRA__25__KET____DOT__fa_inst__DOT__cin 
        = ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                    >> 0x00000018U)) & (IData)(vlSelfRef.__PVT__rca_gen__BRA__24__KET____DOT__fa_inst__DOT__cin));
    vlSelfRef.__PVT__rca_gen__BRA__26__KET____DOT__fa_inst__DOT__cin 
        = ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                    >> 0x00000019U)) & (IData)(vlSelfRef.__PVT__rca_gen__BRA__25__KET____DOT__fa_inst__DOT__cin));
    vlSelfRef.__PVT__rca_gen__BRA__27__KET____DOT__fa_inst__DOT__cin 
        = ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                    >> 0x0000001aU)) & (IData)(vlSelfRef.__PVT__rca_gen__BRA__26__KET____DOT__fa_inst__DOT__cin));
    vlSelfRef.__PVT__rca_gen__BRA__28__KET____DOT__fa_inst__DOT__cin 
        = ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                    >> 0x0000001bU)) & (IData)(vlSelfRef.__PVT__rca_gen__BRA__27__KET____DOT__fa_inst__DOT__cin));
    vlSelfRef.__PVT__rca_gen__BRA__29__KET____DOT__fa_inst__DOT__cin 
        = ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                    >> 0x0000001cU)) & (IData)(vlSelfRef.__PVT__rca_gen__BRA__28__KET____DOT__fa_inst__DOT__cin));
    vlSelfRef.__PVT__rca_gen__BRA__30__KET____DOT__fa_inst__DOT__cin 
        = ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                    >> 0x0000001dU)) & (IData)(vlSelfRef.__PVT__rca_gen__BRA__29__KET____DOT__fa_inst__DOT__cin));
    vlSelfRef.__PVT__rca_gen__BRA__31__KET____DOT__fa_inst__DOT__cin 
        = ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                    >> 0x0000001eU)) & (IData)(vlSelfRef.__PVT__rca_gen__BRA__30__KET____DOT__fa_inst__DOT__cin));
    vlSelfRef.__PVT__rca_gen__BRA__32__KET____DOT__fa_inst__DOT__cin 
        = ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                    >> 0x0000001fU)) & (IData)(vlSelfRef.__PVT__rca_gen__BRA__31__KET____DOT__fa_inst__DOT__cin));
    vlSelfRef.__PVT__rca_gen__BRA__33__KET____DOT__fa_inst__DOT__cin 
        = ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                    >> 0x00000020U)) & (IData)(vlSelfRef.__PVT__rca_gen__BRA__32__KET____DOT__fa_inst__DOT__cin));
    vlSelfRef.__PVT__rca_gen__BRA__34__KET____DOT__fa_inst__DOT__cin 
        = ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                    >> 0x00000021U)) & (IData)(vlSelfRef.__PVT__rca_gen__BRA__33__KET____DOT__fa_inst__DOT__cin));
    vlSelfRef.__PVT__rca_gen__BRA__35__KET____DOT__fa_inst__DOT__cin 
        = ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                    >> 0x00000022U)) & (IData)(vlSelfRef.__PVT__rca_gen__BRA__34__KET____DOT__fa_inst__DOT__cin));
    vlSelfRef.__PVT__rca_gen__BRA__36__KET____DOT__fa_inst__DOT__cin 
        = ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                    >> 0x00000023U)) & (IData)(vlSelfRef.__PVT__rca_gen__BRA__35__KET____DOT__fa_inst__DOT__cin));
    vlSelfRef.__PVT__rca_gen__BRA__37__KET____DOT__fa_inst__DOT__cin 
        = ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                    >> 0x00000024U)) & (IData)(vlSelfRef.__PVT__rca_gen__BRA__36__KET____DOT__fa_inst__DOT__cin));
    vlSelfRef.__PVT__rca_gen__BRA__38__KET____DOT__fa_inst__DOT__cin 
        = ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                    >> 0x00000025U)) & (IData)(vlSelfRef.__PVT__rca_gen__BRA__37__KET____DOT__fa_inst__DOT__cin));
    vlSelfRef.__PVT__rca_gen__BRA__39__KET____DOT__fa_inst__DOT__cin 
        = ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                    >> 0x00000026U)) & (IData)(vlSelfRef.__PVT__rca_gen__BRA__38__KET____DOT__fa_inst__DOT__cin));
    vlSelfRef.__PVT__rca_gen__BRA__40__KET____DOT__fa_inst__DOT__cin 
        = ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                    >> 0x00000027U)) & (IData)(vlSelfRef.__PVT__rca_gen__BRA__39__KET____DOT__fa_inst__DOT__cin));
    vlSelfRef.__PVT__rca_gen__BRA__41__KET____DOT__fa_inst__DOT__cin 
        = ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                    >> 0x00000028U)) & (IData)(vlSelfRef.__PVT__rca_gen__BRA__40__KET____DOT__fa_inst__DOT__cin));
    vlSelfRef.__PVT__rca_gen__BRA__42__KET____DOT__fa_inst__DOT__cin 
        = ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                    >> 0x00000029U)) & (IData)(vlSelfRef.__PVT__rca_gen__BRA__41__KET____DOT__fa_inst__DOT__cin));
    vlSelfRef.__PVT__rca_gen__BRA__43__KET____DOT__fa_inst__DOT__cin 
        = ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                    >> 0x0000002aU)) & (IData)(vlSelfRef.__PVT__rca_gen__BRA__42__KET____DOT__fa_inst__DOT__cin));
    vlSelfRef.__PVT__rca_gen__BRA__44__KET____DOT__fa_inst__DOT__cin 
        = ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                    >> 0x0000002bU)) & (IData)(vlSelfRef.__PVT__rca_gen__BRA__43__KET____DOT__fa_inst__DOT__cin));
    vlSelfRef.__PVT__rca_gen__BRA__45__KET____DOT__fa_inst__DOT__cin 
        = ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                    >> 0x0000002cU)) & (IData)(vlSelfRef.__PVT__rca_gen__BRA__44__KET____DOT__fa_inst__DOT__cin));
    vlSelfRef.__PVT__rca_gen__BRA__46__KET____DOT__fa_inst__DOT__cin 
        = ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                    >> 0x0000002dU)) & (IData)(vlSelfRef.__PVT__rca_gen__BRA__45__KET____DOT__fa_inst__DOT__cin));
    vlSelfRef.__PVT__rca_gen__BRA__47__KET____DOT__fa_inst__DOT__cin 
        = ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                    >> 0x0000002eU)) & (IData)(vlSelfRef.__PVT__rca_gen__BRA__46__KET____DOT__fa_inst__DOT__cin));
    vlSelfRef.__PVT__rca_gen__BRA__48__KET____DOT__fa_inst__DOT__cin 
        = ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                    >> 0x0000002fU)) & (IData)(vlSelfRef.__PVT__rca_gen__BRA__47__KET____DOT__fa_inst__DOT__cin));
    vlSelfRef.__PVT__rca_gen__BRA__49__KET____DOT__fa_inst__DOT__cin 
        = ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                    >> 0x00000030U)) & (IData)(vlSelfRef.__PVT__rca_gen__BRA__48__KET____DOT__fa_inst__DOT__cin));
    vlSelfRef.__PVT__rca_gen__BRA__50__KET____DOT__fa_inst__DOT__cin 
        = ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                    >> 0x00000031U)) & (IData)(vlSelfRef.__PVT__rca_gen__BRA__49__KET____DOT__fa_inst__DOT__cin));
    vlSelfRef.__PVT__rca_gen__BRA__51__KET____DOT__fa_inst__DOT__cin 
        = ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                    >> 0x00000032U)) & (IData)(vlSelfRef.__PVT__rca_gen__BRA__50__KET____DOT__fa_inst__DOT__cin));
    vlSelfRef.__PVT__rca_gen__BRA__52__KET____DOT__fa_inst__DOT__cin 
        = ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                    >> 0x00000033U)) & (IData)(vlSelfRef.__PVT__rca_gen__BRA__51__KET____DOT__fa_inst__DOT__cin));
    vlSelfRef.__PVT__rca_gen__BRA__53__KET____DOT__fa_inst__DOT__cin 
        = ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                    >> 0x00000034U)) & (IData)(vlSelfRef.__PVT__rca_gen__BRA__52__KET____DOT__fa_inst__DOT__cin));
    vlSelfRef.__PVT__rca_gen__BRA__54__KET____DOT__fa_inst__DOT__cin 
        = ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                    >> 0x00000035U)) & (IData)(vlSelfRef.__PVT__rca_gen__BRA__53__KET____DOT__fa_inst__DOT__cin));
    vlSelfRef.__PVT__rca_gen__BRA__55__KET____DOT__fa_inst__DOT__cin 
        = ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                    >> 0x00000036U)) & (IData)(vlSelfRef.__PVT__rca_gen__BRA__54__KET____DOT__fa_inst__DOT__cin));
    vlSelfRef.__PVT__rca_gen__BRA__56__KET____DOT__fa_inst__DOT__cin 
        = ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                    >> 0x00000037U)) & (IData)(vlSelfRef.__PVT__rca_gen__BRA__55__KET____DOT__fa_inst__DOT__cin));
    vlSelfRef.__PVT__rca_gen__BRA__57__KET____DOT__fa_inst__DOT__cin 
        = ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                    >> 0x00000038U)) & (IData)(vlSelfRef.__PVT__rca_gen__BRA__56__KET____DOT__fa_inst__DOT__cin));
    vlSelfRef.__PVT__rca_gen__BRA__58__KET____DOT__fa_inst__DOT__cin 
        = ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                    >> 0x00000039U)) & (IData)(vlSelfRef.__PVT__rca_gen__BRA__57__KET____DOT__fa_inst__DOT__cin));
    vlSelfRef.__PVT__rca_gen__BRA__59__KET____DOT__fa_inst__DOT__cin 
        = ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                    >> 0x0000003aU)) & (IData)(vlSelfRef.__PVT__rca_gen__BRA__58__KET____DOT__fa_inst__DOT__cin));
    vlSelfRef.__PVT__rca_gen__BRA__60__KET____DOT__fa_inst__DOT__cin 
        = ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                    >> 0x0000003bU)) & (IData)(vlSelfRef.__PVT__rca_gen__BRA__59__KET____DOT__fa_inst__DOT__cin));
    vlSelfRef.__PVT__rca_gen__BRA__61__KET____DOT__fa_inst__DOT__cin 
        = ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                    >> 0x0000003cU)) & (IData)(vlSelfRef.__PVT__rca_gen__BRA__60__KET____DOT__fa_inst__DOT__cin));
    vlSelfRef.__PVT__rca_gen__BRA__62__KET____DOT__fa_inst__DOT__cin 
        = ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__if_pc 
                    >> 0x0000003dU)) & (IData)(vlSelfRef.__PVT__rca_gen__BRA__61__KET____DOT__fa_inst__DOT__cin));
}

void Vsoc_top_rca_64b___nba_sequent__TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst__0(Vsoc_top_rca_64b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsoc_top_rca_64b___nba_sequent__TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst__0\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rca_gen__BRA__63__KET____DOT__fa_inst__DOT__x1 
        = (IData)(((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                    ^ vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b) 
                   >> 0x0000003fU));
    vlSelfRef.__PVT__rca_gen__BRA__62__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                          >> 0x0000003eU)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                      >> 0x0000003eU))));
    vlSelfRef.__PVT__rca_gen__BRA__61__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                          >> 0x0000003dU)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                      >> 0x0000003dU))));
    vlSelfRef.__PVT__rca_gen__BRA__60__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                          >> 0x0000003cU)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                      >> 0x0000003cU))));
    vlSelfRef.__PVT__rca_gen__BRA__59__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                          >> 0x0000003bU)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                      >> 0x0000003bU))));
    vlSelfRef.__PVT__rca_gen__BRA__58__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                          >> 0x0000003aU)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                      >> 0x0000003aU))));
    vlSelfRef.__PVT__rca_gen__BRA__57__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                          >> 0x00000039U)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                      >> 0x00000039U))));
    vlSelfRef.__PVT__rca_gen__BRA__56__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                          >> 0x00000038U)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                      >> 0x00000038U))));
    vlSelfRef.__PVT__rca_gen__BRA__55__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                          >> 0x00000037U)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                      >> 0x00000037U))));
    vlSelfRef.__PVT__rca_gen__BRA__54__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                          >> 0x00000036U)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                      >> 0x00000036U))));
    vlSelfRef.__PVT__rca_gen__BRA__53__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                          >> 0x00000035U)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                      >> 0x00000035U))));
    vlSelfRef.__PVT__rca_gen__BRA__52__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                          >> 0x00000034U)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                      >> 0x00000034U))));
    vlSelfRef.__PVT__rca_gen__BRA__51__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                          >> 0x00000033U)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                      >> 0x00000033U))));
    vlSelfRef.__PVT__rca_gen__BRA__50__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                          >> 0x00000032U)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                      >> 0x00000032U))));
    vlSelfRef.__PVT__rca_gen__BRA__49__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                          >> 0x00000031U)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                      >> 0x00000031U))));
    vlSelfRef.__PVT__rca_gen__BRA__48__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                          >> 0x00000030U)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                      >> 0x00000030U))));
    vlSelfRef.__PVT__rca_gen__BRA__47__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                          >> 0x0000002fU)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                      >> 0x0000002fU))));
    vlSelfRef.__PVT__rca_gen__BRA__46__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                          >> 0x0000002eU)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                      >> 0x0000002eU))));
    vlSelfRef.__PVT__rca_gen__BRA__45__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                          >> 0x0000002dU)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                      >> 0x0000002dU))));
    vlSelfRef.__PVT__rca_gen__BRA__44__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                          >> 0x0000002cU)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                      >> 0x0000002cU))));
    vlSelfRef.__PVT__rca_gen__BRA__43__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                          >> 0x0000002bU)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                      >> 0x0000002bU))));
    vlSelfRef.__PVT__rca_gen__BRA__42__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                          >> 0x0000002aU)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                      >> 0x0000002aU))));
    vlSelfRef.__PVT__rca_gen__BRA__41__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                          >> 0x00000029U)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                      >> 0x00000029U))));
    vlSelfRef.__PVT__rca_gen__BRA__40__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                          >> 0x00000028U)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                      >> 0x00000028U))));
    vlSelfRef.__PVT__rca_gen__BRA__39__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                          >> 0x00000027U)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                      >> 0x00000027U))));
    vlSelfRef.__PVT__rca_gen__BRA__38__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                          >> 0x00000026U)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                      >> 0x00000026U))));
    vlSelfRef.__PVT__rca_gen__BRA__37__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                          >> 0x00000025U)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                      >> 0x00000025U))));
    vlSelfRef.__PVT__rca_gen__BRA__36__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                          >> 0x00000024U)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                      >> 0x00000024U))));
    vlSelfRef.__PVT__rca_gen__BRA__35__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                          >> 0x00000023U)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                      >> 0x00000023U))));
    vlSelfRef.__PVT__rca_gen__BRA__34__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                          >> 0x00000022U)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                      >> 0x00000022U))));
    vlSelfRef.__PVT__rca_gen__BRA__33__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                          >> 0x00000021U)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                      >> 0x00000021U))));
    vlSelfRef.__PVT__rca_gen__BRA__32__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                          >> 0x00000020U)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                      >> 0x00000020U))));
    vlSelfRef.__PVT__rca_gen__BRA__31__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                          >> 0x0000001fU)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                      >> 0x0000001fU))));
    vlSelfRef.__PVT__rca_gen__BRA__30__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                          >> 0x0000001eU)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                      >> 0x0000001eU))));
    vlSelfRef.__PVT__rca_gen__BRA__29__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                          >> 0x0000001dU)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                      >> 0x0000001dU))));
    vlSelfRef.__PVT__rca_gen__BRA__28__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                          >> 0x0000001cU)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                      >> 0x0000001cU))));
    vlSelfRef.__PVT__rca_gen__BRA__27__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                          >> 0x0000001bU)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                      >> 0x0000001bU))));
    vlSelfRef.__PVT__rca_gen__BRA__26__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                          >> 0x0000001aU)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                      >> 0x0000001aU))));
    vlSelfRef.__PVT__rca_gen__BRA__25__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                          >> 0x00000019U)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                      >> 0x00000019U))));
    vlSelfRef.__PVT__rca_gen__BRA__24__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                          >> 0x00000018U)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                      >> 0x00000018U))));
    vlSelfRef.__PVT__rca_gen__BRA__23__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                          >> 0x00000017U)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                      >> 0x00000017U))));
    vlSelfRef.__PVT__rca_gen__BRA__22__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                          >> 0x00000016U)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                      >> 0x00000016U))));
    vlSelfRef.__PVT__rca_gen__BRA__21__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                          >> 0x00000015U)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                      >> 0x00000015U))));
    vlSelfRef.__PVT__rca_gen__BRA__20__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                          >> 0x00000014U)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                      >> 0x00000014U))));
    vlSelfRef.__PVT__rca_gen__BRA__19__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                          >> 0x00000013U)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                      >> 0x00000013U))));
    vlSelfRef.__PVT__rca_gen__BRA__18__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                          >> 0x00000012U)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                      >> 0x00000012U))));
    vlSelfRef.__PVT__rca_gen__BRA__17__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                          >> 0x00000011U)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                      >> 0x00000011U))));
    vlSelfRef.__PVT__rca_gen__BRA__16__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                          >> 0x00000010U)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                      >> 0x00000010U))));
    vlSelfRef.__PVT__rca_gen__BRA__15__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                          >> 0x0000000fU)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                      >> 0x0000000fU))));
    vlSelfRef.__PVT__rca_gen__BRA__14__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                          >> 0x0000000eU)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                      >> 0x0000000eU))));
    vlSelfRef.__PVT__rca_gen__BRA__13__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                          >> 0x0000000dU)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                      >> 0x0000000dU))));
    vlSelfRef.__PVT__rca_gen__BRA__12__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                          >> 0x0000000cU)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                      >> 0x0000000cU))));
    vlSelfRef.__PVT__rca_gen__BRA__11__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                          >> 0x0000000bU)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                      >> 0x0000000bU))));
    vlSelfRef.__PVT__rca_gen__BRA__10__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                          >> 0x0000000aU)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                      >> 0x0000000aU))));
    vlSelfRef.__PVT__rca_gen__BRA__9__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                          >> 9U)) ^ (IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                             >> 9U))));
    vlSelfRef.__PVT__rca_gen__BRA__8__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                          >> 8U)) ^ (IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                             >> 8U))));
    vlSelfRef.__PVT__rca_gen__BRA__7__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                          >> 7U)) ^ (IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                             >> 7U))));
    vlSelfRef.__PVT__rca_gen__BRA__6__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                          >> 6U)) ^ (IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                             >> 6U))));
    vlSelfRef.__PVT__rca_gen__BRA__5__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                          >> 5U)) ^ (IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                             >> 5U))));
    vlSelfRef.__PVT__rca_gen__BRA__4__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                          >> 4U)) ^ (IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                             >> 4U))));
    vlSelfRef.__PVT__rca_gen__BRA__3__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                          >> 3U)) ^ (IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                             >> 3U))));
    vlSelfRef.__PVT__rca_gen__BRA__2__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                          >> 2U)) ^ (IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                             >> 2U))));
    vlSelfRef.__PVT__rca_gen__BRA__1__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                          >> 1U)) ^ (IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                             >> 1U))));
    vlSelfRef.__PVT__rca_gen__BRA__0__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)(vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a) 
                 ^ (IData)(vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b)));
    vlSelfRef.__PVT__rca_gen__BRA__1__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)(vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a) 
                  & (IData)(vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b)) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__0__KET____DOT__fa_inst__DOT__x1) 
                    & (8U == (IData)(vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_ctrl)))));
    vlSelfRef.__PVT__rca_gen__BRA__2__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                           >> 1U)) & (IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                              >> 1U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__1__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__1__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__3__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                           >> 2U)) & (IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                              >> 2U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__2__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__2__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__4__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                           >> 3U)) & (IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                              >> 3U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__3__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__3__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__5__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                           >> 4U)) & (IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                              >> 4U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__4__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__4__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__6__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                           >> 5U)) & (IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                              >> 5U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__5__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__5__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__7__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                           >> 6U)) & (IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                              >> 6U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__6__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__6__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__8__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                           >> 7U)) & (IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                              >> 7U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__7__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__7__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__9__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                           >> 8U)) & (IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                              >> 8U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__8__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__8__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__10__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                           >> 9U)) & (IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                              >> 9U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__9__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__9__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__11__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                           >> 0x0000000aU)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                       >> 0x0000000aU))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__10__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__10__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__12__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                           >> 0x0000000bU)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                       >> 0x0000000bU))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__11__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__11__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__13__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                           >> 0x0000000cU)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                       >> 0x0000000cU))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__12__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__12__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__14__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                           >> 0x0000000dU)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                       >> 0x0000000dU))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__13__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__13__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__15__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                           >> 0x0000000eU)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                       >> 0x0000000eU))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__14__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__14__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__16__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                           >> 0x0000000fU)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                       >> 0x0000000fU))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__15__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__15__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__17__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                           >> 0x00000010U)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                       >> 0x00000010U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__16__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__16__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__18__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                           >> 0x00000011U)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                       >> 0x00000011U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__17__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__17__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__19__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                           >> 0x00000012U)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                       >> 0x00000012U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__18__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__18__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__20__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                           >> 0x00000013U)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                       >> 0x00000013U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__19__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__19__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__21__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                           >> 0x00000014U)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                       >> 0x00000014U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__20__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__20__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__22__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                           >> 0x00000015U)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                       >> 0x00000015U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__21__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__21__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__23__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                           >> 0x00000016U)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                       >> 0x00000016U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__22__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__22__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__24__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                           >> 0x00000017U)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                       >> 0x00000017U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__23__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__23__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__25__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                           >> 0x00000018U)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                       >> 0x00000018U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__24__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__24__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__26__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                           >> 0x00000019U)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                       >> 0x00000019U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__25__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__25__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__27__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                           >> 0x0000001aU)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                       >> 0x0000001aU))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__26__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__26__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__28__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                           >> 0x0000001bU)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                       >> 0x0000001bU))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__27__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__27__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__29__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                           >> 0x0000001cU)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                       >> 0x0000001cU))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__28__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__28__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__30__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                           >> 0x0000001dU)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                       >> 0x0000001dU))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__29__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__29__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__31__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                           >> 0x0000001eU)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                       >> 0x0000001eU))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__30__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__30__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__32__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                           >> 0x0000001fU)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                       >> 0x0000001fU))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__31__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__31__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__33__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                           >> 0x00000020U)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                       >> 0x00000020U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__32__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__32__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__34__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                           >> 0x00000021U)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                       >> 0x00000021U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__33__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__33__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__35__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                           >> 0x00000022U)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                       >> 0x00000022U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__34__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__34__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__36__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                           >> 0x00000023U)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                       >> 0x00000023U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__35__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__35__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__37__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                           >> 0x00000024U)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                       >> 0x00000024U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__36__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__36__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__38__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                           >> 0x00000025U)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                       >> 0x00000025U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__37__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__37__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__39__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                           >> 0x00000026U)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                       >> 0x00000026U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__38__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__38__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__40__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                           >> 0x00000027U)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                       >> 0x00000027U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__39__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__39__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__41__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                           >> 0x00000028U)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                       >> 0x00000028U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__40__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__40__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__42__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                           >> 0x00000029U)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                       >> 0x00000029U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__41__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__41__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__43__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                           >> 0x0000002aU)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                       >> 0x0000002aU))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__42__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__42__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__44__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                           >> 0x0000002bU)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                       >> 0x0000002bU))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__43__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__43__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__45__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                           >> 0x0000002cU)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                       >> 0x0000002cU))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__44__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__44__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__46__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                           >> 0x0000002dU)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                       >> 0x0000002dU))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__45__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__45__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__47__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                           >> 0x0000002eU)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                       >> 0x0000002eU))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__46__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__46__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__48__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                           >> 0x0000002fU)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                       >> 0x0000002fU))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__47__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__47__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__49__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                           >> 0x00000030U)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                       >> 0x00000030U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__48__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__48__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__50__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                           >> 0x00000031U)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                       >> 0x00000031U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__49__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__49__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__51__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                           >> 0x00000032U)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                       >> 0x00000032U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__50__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__50__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__52__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                           >> 0x00000033U)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                       >> 0x00000033U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__51__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__51__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__53__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                           >> 0x00000034U)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                       >> 0x00000034U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__52__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__52__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__54__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                           >> 0x00000035U)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                       >> 0x00000035U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__53__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__53__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__55__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                           >> 0x00000036U)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                       >> 0x00000036U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__54__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__54__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__56__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                           >> 0x00000037U)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                       >> 0x00000037U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__55__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__55__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__57__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                           >> 0x00000038U)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                       >> 0x00000038U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__56__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__56__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__58__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                           >> 0x00000039U)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                       >> 0x00000039U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__57__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__57__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__59__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                           >> 0x0000003aU)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                       >> 0x0000003aU))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__58__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__58__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__60__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                           >> 0x0000003bU)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                       >> 0x0000003bU))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__59__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__59__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__61__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                           >> 0x0000003cU)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                       >> 0x0000003cU))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__60__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__60__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__62__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                           >> 0x0000003dU)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b 
                                                       >> 0x0000003dU))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__61__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__61__KET____DOT__fa_inst__DOT__cin))));
}

void Vsoc_top_rca_64b___nba_sequent__TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst__0(Vsoc_top_rca_64b* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsoc_top_rca_64b___nba_sequent__TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst__0\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rca_gen__BRA__62__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                          >> 0x0000003eU)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                      >> 0x0000003eU))));
    vlSelfRef.__PVT__rca_gen__BRA__61__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                          >> 0x0000003dU)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                      >> 0x0000003dU))));
    vlSelfRef.__PVT__rca_gen__BRA__60__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                          >> 0x0000003cU)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                      >> 0x0000003cU))));
    vlSelfRef.__PVT__rca_gen__BRA__59__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                          >> 0x0000003bU)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                      >> 0x0000003bU))));
    vlSelfRef.__PVT__rca_gen__BRA__58__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                          >> 0x0000003aU)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                      >> 0x0000003aU))));
    vlSelfRef.__PVT__rca_gen__BRA__57__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                          >> 0x00000039U)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                      >> 0x00000039U))));
    vlSelfRef.__PVT__rca_gen__BRA__56__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                          >> 0x00000038U)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                      >> 0x00000038U))));
    vlSelfRef.__PVT__rca_gen__BRA__55__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                          >> 0x00000037U)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                      >> 0x00000037U))));
    vlSelfRef.__PVT__rca_gen__BRA__54__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                          >> 0x00000036U)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                      >> 0x00000036U))));
    vlSelfRef.__PVT__rca_gen__BRA__53__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                          >> 0x00000035U)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                      >> 0x00000035U))));
    vlSelfRef.__PVT__rca_gen__BRA__52__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                          >> 0x00000034U)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                      >> 0x00000034U))));
    vlSelfRef.__PVT__rca_gen__BRA__51__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                          >> 0x00000033U)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                      >> 0x00000033U))));
    vlSelfRef.__PVT__rca_gen__BRA__50__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                          >> 0x00000032U)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                      >> 0x00000032U))));
    vlSelfRef.__PVT__rca_gen__BRA__49__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                          >> 0x00000031U)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                      >> 0x00000031U))));
    vlSelfRef.__PVT__rca_gen__BRA__48__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                          >> 0x00000030U)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                      >> 0x00000030U))));
    vlSelfRef.__PVT__rca_gen__BRA__47__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                          >> 0x0000002fU)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                      >> 0x0000002fU))));
    vlSelfRef.__PVT__rca_gen__BRA__46__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                          >> 0x0000002eU)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                      >> 0x0000002eU))));
    vlSelfRef.__PVT__rca_gen__BRA__45__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                          >> 0x0000002dU)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                      >> 0x0000002dU))));
    vlSelfRef.__PVT__rca_gen__BRA__44__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                          >> 0x0000002cU)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                      >> 0x0000002cU))));
    vlSelfRef.__PVT__rca_gen__BRA__43__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                          >> 0x0000002bU)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                      >> 0x0000002bU))));
    vlSelfRef.__PVT__rca_gen__BRA__42__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                          >> 0x0000002aU)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                      >> 0x0000002aU))));
    vlSelfRef.__PVT__rca_gen__BRA__41__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                          >> 0x00000029U)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                      >> 0x00000029U))));
    vlSelfRef.__PVT__rca_gen__BRA__40__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                          >> 0x00000028U)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                      >> 0x00000028U))));
    vlSelfRef.__PVT__rca_gen__BRA__39__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                          >> 0x00000027U)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                      >> 0x00000027U))));
    vlSelfRef.__PVT__rca_gen__BRA__38__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                          >> 0x00000026U)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                      >> 0x00000026U))));
    vlSelfRef.__PVT__rca_gen__BRA__37__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                          >> 0x00000025U)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                      >> 0x00000025U))));
    vlSelfRef.__PVT__rca_gen__BRA__36__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                          >> 0x00000024U)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                      >> 0x00000024U))));
    vlSelfRef.__PVT__rca_gen__BRA__35__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                          >> 0x00000023U)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                      >> 0x00000023U))));
    vlSelfRef.__PVT__rca_gen__BRA__34__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                          >> 0x00000022U)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                      >> 0x00000022U))));
    vlSelfRef.__PVT__rca_gen__BRA__33__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                          >> 0x00000021U)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                      >> 0x00000021U))));
    vlSelfRef.__PVT__rca_gen__BRA__32__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                          >> 0x00000020U)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                      >> 0x00000020U))));
    vlSelfRef.__PVT__rca_gen__BRA__31__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                          >> 0x0000001fU)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                      >> 0x0000001fU))));
    vlSelfRef.__PVT__rca_gen__BRA__30__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                          >> 0x0000001eU)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                      >> 0x0000001eU))));
    vlSelfRef.__PVT__rca_gen__BRA__29__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                          >> 0x0000001dU)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                      >> 0x0000001dU))));
    vlSelfRef.__PVT__rca_gen__BRA__28__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                          >> 0x0000001cU)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                      >> 0x0000001cU))));
    vlSelfRef.__PVT__rca_gen__BRA__27__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                          >> 0x0000001bU)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                      >> 0x0000001bU))));
    vlSelfRef.__PVT__rca_gen__BRA__26__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                          >> 0x0000001aU)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                      >> 0x0000001aU))));
    vlSelfRef.__PVT__rca_gen__BRA__25__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                          >> 0x00000019U)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                      >> 0x00000019U))));
    vlSelfRef.__PVT__rca_gen__BRA__24__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                          >> 0x00000018U)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                      >> 0x00000018U))));
    vlSelfRef.__PVT__rca_gen__BRA__23__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                          >> 0x00000017U)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                      >> 0x00000017U))));
    vlSelfRef.__PVT__rca_gen__BRA__22__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                          >> 0x00000016U)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                      >> 0x00000016U))));
    vlSelfRef.__PVT__rca_gen__BRA__21__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                          >> 0x00000015U)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                      >> 0x00000015U))));
    vlSelfRef.__PVT__rca_gen__BRA__20__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                          >> 0x00000014U)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                      >> 0x00000014U))));
    vlSelfRef.__PVT__rca_gen__BRA__19__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                          >> 0x00000013U)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                      >> 0x00000013U))));
    vlSelfRef.__PVT__rca_gen__BRA__18__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                          >> 0x00000012U)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                      >> 0x00000012U))));
    vlSelfRef.__PVT__rca_gen__BRA__17__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                          >> 0x00000011U)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                      >> 0x00000011U))));
    vlSelfRef.__PVT__rca_gen__BRA__16__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                          >> 0x00000010U)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                      >> 0x00000010U))));
    vlSelfRef.__PVT__rca_gen__BRA__15__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                          >> 0x0000000fU)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                      >> 0x0000000fU))));
    vlSelfRef.__PVT__rca_gen__BRA__14__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                          >> 0x0000000eU)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                      >> 0x0000000eU))));
    vlSelfRef.__PVT__rca_gen__BRA__13__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                          >> 0x0000000dU)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                      >> 0x0000000dU))));
    vlSelfRef.__PVT__rca_gen__BRA__12__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                          >> 0x0000000cU)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                      >> 0x0000000cU))));
    vlSelfRef.__PVT__rca_gen__BRA__11__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                          >> 0x0000000bU)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                      >> 0x0000000bU))));
    vlSelfRef.__PVT__rca_gen__BRA__10__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                          >> 0x0000000aU)) ^ (IData)(
                                                     (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                      >> 0x0000000aU))));
    vlSelfRef.__PVT__rca_gen__BRA__9__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                          >> 9U)) ^ (IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                             >> 9U))));
    vlSelfRef.__PVT__rca_gen__BRA__8__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                          >> 8U)) ^ (IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                             >> 8U))));
    vlSelfRef.__PVT__rca_gen__BRA__7__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                          >> 7U)) ^ (IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                             >> 7U))));
    vlSelfRef.__PVT__rca_gen__BRA__6__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                          >> 6U)) ^ (IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                             >> 6U))));
    vlSelfRef.__PVT__rca_gen__BRA__5__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                          >> 5U)) ^ (IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                             >> 5U))));
    vlSelfRef.__PVT__rca_gen__BRA__4__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                          >> 4U)) ^ (IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                             >> 4U))));
    vlSelfRef.__PVT__rca_gen__BRA__3__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                          >> 3U)) ^ (IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                             >> 3U))));
    vlSelfRef.__PVT__rca_gen__BRA__2__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                          >> 2U)) ^ (IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                             >> 2U))));
    vlSelfRef.__PVT__rca_gen__BRA__1__KET____DOT__fa_inst__DOT__cin 
        = (1U & ((IData)(vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc) 
                 & (IData)(vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate)));
    vlSelfRef.__PVT__rca_gen__BRA__1__KET____DOT__fa_inst__DOT__x1 
        = (1U & ((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                          >> 1U)) ^ (IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                             >> 1U))));
    vlSelfRef.__PVT__rca_gen__BRA__2__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                           >> 1U)) & (IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                              >> 1U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__1__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__1__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__3__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                           >> 2U)) & (IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                              >> 2U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__2__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__2__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__4__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                           >> 3U)) & (IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                              >> 3U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__3__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__3__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__5__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                           >> 4U)) & (IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                              >> 4U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__4__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__4__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__6__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                           >> 5U)) & (IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                              >> 5U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__5__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__5__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__7__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                           >> 6U)) & (IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                              >> 6U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__6__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__6__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__8__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                           >> 7U)) & (IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                              >> 7U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__7__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__7__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__9__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                           >> 8U)) & (IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                              >> 8U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__8__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__8__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__10__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                           >> 9U)) & (IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                              >> 9U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__9__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__9__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__11__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                           >> 0x0000000aU)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                       >> 0x0000000aU))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__10__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__10__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__12__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                           >> 0x0000000bU)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                       >> 0x0000000bU))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__11__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__11__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__13__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                           >> 0x0000000cU)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                       >> 0x0000000cU))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__12__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__12__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__14__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                           >> 0x0000000dU)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                       >> 0x0000000dU))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__13__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__13__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__15__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                           >> 0x0000000eU)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                       >> 0x0000000eU))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__14__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__14__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__16__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                           >> 0x0000000fU)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                       >> 0x0000000fU))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__15__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__15__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__17__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                           >> 0x00000010U)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                       >> 0x00000010U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__16__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__16__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__18__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                           >> 0x00000011U)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                       >> 0x00000011U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__17__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__17__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__19__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                           >> 0x00000012U)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                       >> 0x00000012U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__18__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__18__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__20__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                           >> 0x00000013U)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                       >> 0x00000013U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__19__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__19__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__21__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                           >> 0x00000014U)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                       >> 0x00000014U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__20__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__20__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__22__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                           >> 0x00000015U)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                       >> 0x00000015U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__21__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__21__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__23__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                           >> 0x00000016U)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                       >> 0x00000016U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__22__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__22__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__24__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                           >> 0x00000017U)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                       >> 0x00000017U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__23__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__23__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__25__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                           >> 0x00000018U)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                       >> 0x00000018U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__24__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__24__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__26__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                           >> 0x00000019U)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                       >> 0x00000019U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__25__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__25__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__27__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                           >> 0x0000001aU)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                       >> 0x0000001aU))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__26__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__26__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__28__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                           >> 0x0000001bU)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                       >> 0x0000001bU))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__27__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__27__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__29__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                           >> 0x0000001cU)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                       >> 0x0000001cU))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__28__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__28__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__30__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                           >> 0x0000001dU)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                       >> 0x0000001dU))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__29__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__29__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__31__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                           >> 0x0000001eU)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                       >> 0x0000001eU))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__30__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__30__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__32__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                           >> 0x0000001fU)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                       >> 0x0000001fU))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__31__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__31__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__33__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                           >> 0x00000020U)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                       >> 0x00000020U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__32__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__32__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__34__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                           >> 0x00000021U)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                       >> 0x00000021U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__33__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__33__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__35__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                           >> 0x00000022U)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                       >> 0x00000022U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__34__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__34__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__36__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                           >> 0x00000023U)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                       >> 0x00000023U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__35__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__35__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__37__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                           >> 0x00000024U)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                       >> 0x00000024U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__36__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__36__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__38__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                           >> 0x00000025U)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                       >> 0x00000025U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__37__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__37__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__39__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                           >> 0x00000026U)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                       >> 0x00000026U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__38__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__38__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__40__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                           >> 0x00000027U)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                       >> 0x00000027U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__39__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__39__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__41__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                           >> 0x00000028U)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                       >> 0x00000028U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__40__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__40__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__42__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                           >> 0x00000029U)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                       >> 0x00000029U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__41__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__41__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__43__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                           >> 0x0000002aU)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                       >> 0x0000002aU))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__42__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__42__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__44__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                           >> 0x0000002bU)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                       >> 0x0000002bU))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__43__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__43__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__45__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                           >> 0x0000002cU)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                       >> 0x0000002cU))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__44__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__44__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__46__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                           >> 0x0000002dU)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                       >> 0x0000002dU))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__45__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__45__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__47__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                           >> 0x0000002eU)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                       >> 0x0000002eU))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__46__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__46__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__48__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                           >> 0x0000002fU)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                       >> 0x0000002fU))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__47__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__47__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__49__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                           >> 0x00000030U)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                       >> 0x00000030U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__48__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__48__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__50__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                           >> 0x00000031U)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                       >> 0x00000031U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__49__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__49__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__51__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                           >> 0x00000032U)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                       >> 0x00000032U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__50__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__50__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__52__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                           >> 0x00000033U)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                       >> 0x00000033U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__51__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__51__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__53__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                           >> 0x00000034U)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                       >> 0x00000034U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__52__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__52__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__54__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                           >> 0x00000035U)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                       >> 0x00000035U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__53__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__53__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__55__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                           >> 0x00000036U)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                       >> 0x00000036U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__54__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__54__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__56__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                           >> 0x00000037U)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                       >> 0x00000037U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__55__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__55__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__57__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                           >> 0x00000038U)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                       >> 0x00000038U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__56__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__56__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__58__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                           >> 0x00000039U)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                       >> 0x00000039U))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__57__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__57__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__59__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                           >> 0x0000003aU)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                       >> 0x0000003aU))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__58__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__58__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__60__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                           >> 0x0000003bU)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                       >> 0x0000003bU))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__59__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__59__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__61__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                           >> 0x0000003cU)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                       >> 0x0000003cU))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__60__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__60__KET____DOT__fa_inst__DOT__cin))));
    vlSelfRef.__PVT__rca_gen__BRA__62__KET____DOT__fa_inst__DOT__cin 
        = (1U & (((IData)((vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_pc 
                           >> 0x0000003dU)) & (IData)(
                                                      (vlSymsp->TOP.soc_top__DOT__u_core__DOT__ex_immediate 
                                                       >> 0x0000003dU))) 
                 | ((IData)(vlSelfRef.__PVT__rca_gen__BRA__61__KET____DOT__fa_inst__DOT__x1) 
                    & (IData)(vlSelfRef.__PVT__rca_gen__BRA__61__KET____DOT__fa_inst__DOT__cin))));
}
