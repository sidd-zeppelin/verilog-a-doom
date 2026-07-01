// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsoc_top.h for the primary calling header

#include "Vsoc_top__pch.h"

VL_ATTR_COLD void Vsoc_top___024root___stl_sequent__TOP__1(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___stl_sequent__TOP__1\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__addsub_res;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__addsub_res = 0;
    CData/*0:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__carry_into_msb;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__carry_into_msb = 0;
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

VL_ATTR_COLD void Vsoc_top___024root___stl_sequent__TOP__0(Vsoc_top___024root* vlSelf);
void Vsoc_top_rca_64b___nba_sequent__TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst__0(Vsoc_top_rca_64b* vlSelf);
void Vsoc_top_rca_64b___nba_sequent__TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst__0(Vsoc_top_rca_64b* vlSelf);
void Vsoc_top_rca_64b___nba_sequent__TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst__0(Vsoc_top_rca_64b* vlSelf);

VL_ATTR_COLD void Vsoc_top___024root___eval_stl(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___eval_stl\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vsoc_top___024root___stl_sequent__TOP__0(vlSelf);
        Vsoc_top_rca_64b___nba_sequent__TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst__0((&vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst));
        Vsoc_top_rca_64b___nba_sequent__TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst__0((&vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst));
        Vsoc_top_rca_64b___nba_sequent__TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst__0((&vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst));
        Vsoc_top___024root___stl_sequent__TOP__1(vlSelf);
    }
}

VL_ATTR_COLD void Vsoc_top___024root___eval_triggers__stl(Vsoc_top___024root* vlSelf);
VL_ATTR_COLD bool Vsoc_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

VL_ATTR_COLD bool Vsoc_top___024root___eval_phase__stl(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___eval_phase__stl\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vsoc_top___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vsoc_top___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vsoc_top___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vsoc_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsoc_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vsoc_top___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge rst)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(posedge soc_top.clk_25mhz)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsoc_top___024root___ctor_var_reset(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___ctor_var_reset\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    vlSelf->buttons = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16324203130493001403ull);
    vlSelf->leds = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15857012054290625897ull);
    vlSelf->vga_hsync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9248359358575596599ull);
    vlSelf->vga_vsync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10946138257059144876ull);
    vlSelf->vga_r = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2055607138462276192ull);
    vlSelf->vga_g = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5773750216550251743ull);
    vlSelf->vga_b = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17771436561197612375ull);
    vlSelf->spi_sck = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7598659639805510901ull);
    vlSelf->spi_mosi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 852284730959930751ull);
    vlSelf->spi_miso = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12140560756394917646ull);
    vlSelf->spi_cs_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5466454749172535206ull);
    vlSelf->dbg_vga_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5448606227618654761ull);
    vlSelf->dbg_vga_addr = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 13476769968086005431ull);
    vlSelf->dbg_vga_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2067551607613482746ull);
    vlSelf->soc_top__DOT__ram_read_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 18013073749916745799ull);
    vlSelf->soc_top__DOT__vga_write_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11101478085617926187ull);
    vlSelf->soc_top__DOT__vga_read_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11108694955824759769ull);
    vlSelf->soc_top__DOT__clint_write_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17688850147282082843ull);
    vlSelf->soc_top__DOT__timer_interrupt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 429484117799634740ull);
    vlSelf->soc_top__DOT__clk_div = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16319071260459709678ull);
    vlSelf->soc_top__DOT__clk_25mhz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7870786060110236258ull);
    vlSelf->soc_top__DOT__led_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 235742829325404552ull);
    vlSelf->soc_top__DOT__u_core__DOT__pc_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8636621387700517834ull);
    vlSelf->soc_top__DOT__u_core__DOT__id_ex_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1597365889048012661ull);
    vlSelf->soc_top__DOT__u_core__DOT__id_ex_flush_ext = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 219314195775592816ull);
    vlSelf->soc_top__DOT__u_core__DOT__ForwardA = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11672913637972809978ull);
    vlSelf->soc_top__DOT__u_core__DOT__ForwardB = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7275283692125162308ull);
    vlSelf->soc_top__DOT__u_core__DOT__if_pc = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10461591079639538718ull);
    vlSelf->soc_top__DOT__u_core__DOT__if_pc4 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8918836247248188686ull);
    vlSelf->soc_top__DOT__u_core__DOT__id_pc = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8138126837777545517ull);
    vlSelf->soc_top__DOT__u_core__DOT__id_pc4 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 18185680507183758920ull);
    vlSelf->soc_top__DOT__u_core__DOT__id_instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10856073135515736000ull);
    vlSelf->soc_top__DOT__u_core__DOT__id_RegWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4879756461421858023ull);
    vlSelf->soc_top__DOT__u_core__DOT__id_MemRead = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12223346309061604312ull);
    vlSelf->soc_top__DOT__u_core__DOT__id_MemWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5857376425597983648ull);
    vlSelf->soc_top__DOT__u_core__DOT__id_MemToReg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16101925860415045945ull);
    vlSelf->soc_top__DOT__u_core__DOT__id_ALUOp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4149790754370022766ull);
    vlSelf->soc_top__DOT__u_core__DOT__id_ALUSrcA = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11631501111002737314ull);
    vlSelf->soc_top__DOT__u_core__DOT__id_ALUSrc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17865836892173862939ull);
    vlSelf->soc_top__DOT__u_core__DOT__id_Branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11221781800560945619ull);
    vlSelf->soc_top__DOT__u_core__DOT__id_Jump = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5156520537923535488ull);
    vlSelf->soc_top__DOT__u_core__DOT__id_immediate = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15898825677389059596ull);
    vlSelf->soc_top__DOT__u_core__DOT__id_is_csr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8671853907170017650ull);
    vlSelf->soc_top__DOT__u_core__DOT__id_is_mret = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18087455269525650172ull);
    vlSelf->soc_top__DOT__u_core__DOT__id_is_32bit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11979417359500055470ull);
    vlSelf->soc_top__DOT__u_core__DOT__ex_RegWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2538405690363336797ull);
    vlSelf->soc_top__DOT__u_core__DOT__ex_MemRead = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10867793372255424458ull);
    vlSelf->soc_top__DOT__u_core__DOT__ex_MemWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2261068832265803740ull);
    vlSelf->soc_top__DOT__u_core__DOT__ex_MemToReg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2907174060580563063ull);
    vlSelf->soc_top__DOT__u_core__DOT__ex_ALUOp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4507444260219651152ull);
    vlSelf->soc_top__DOT__u_core__DOT__ex_ALUSrcA = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14634326919718187451ull);
    vlSelf->soc_top__DOT__u_core__DOT__ex_ALUSrc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16002520980506511880ull);
    vlSelf->soc_top__DOT__u_core__DOT__ex_Branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10458618801286858918ull);
    vlSelf->soc_top__DOT__u_core__DOT__ex_Jump = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2520212564457530665ull);
    vlSelf->soc_top__DOT__u_core__DOT__ex_pc = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5560763648917544051ull);
    vlSelf->soc_top__DOT__u_core__DOT__ex_pc4 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2481757096411264192ull);
    vlSelf->soc_top__DOT__u_core__DOT__ex_rs1_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1349768666260770ull);
    vlSelf->soc_top__DOT__u_core__DOT__ex_rs2_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8425417602687392483ull);
    vlSelf->soc_top__DOT__u_core__DOT__ex_immediate = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1826800183963314144ull);
    vlSelf->soc_top__DOT__u_core__DOT__ex_rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2122153090949077927ull);
    vlSelf->soc_top__DOT__u_core__DOT__ex_rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15479264725887277447ull);
    vlSelf->soc_top__DOT__u_core__DOT__ex_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 433425125393419783ull);
    vlSelf->soc_top__DOT__u_core__DOT__ex_funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5683187678871436784ull);
    vlSelf->soc_top__DOT__u_core__DOT__ex_funct7 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10910252656441586162ull);
    vlSelf->soc_top__DOT__u_core__DOT__ex_funct12 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 3844410419406431755ull);
    vlSelf->soc_top__DOT__u_core__DOT__ex_is_csr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2325612909041899778ull);
    vlSelf->soc_top__DOT__u_core__DOT__ex_is_mret = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4075163028511353797ull);
    vlSelf->soc_top__DOT__u_core__DOT__ex_is_32bit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1745192630257259667ull);
    vlSelf->soc_top__DOT__u_core__DOT__ex_alu_result = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 838309150333081362ull);
    vlSelf->soc_top__DOT__u_core__DOT__ex_branch_target = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17047914986040117921ull);
    vlSelf->soc_top__DOT__u_core__DOT__ex_branch_taken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4344220799066047243ull);
    vlSelf->soc_top__DOT__u_core__DOT__trap_target_pc = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14582313320411966349ull);
    vlSelf->soc_top__DOT__u_core__DOT__take_trap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11907865509697138331ull);
    vlSelf->soc_top__DOT__u_core__DOT__mem_RegWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17066299196536569347ull);
    vlSelf->soc_top__DOT__u_core__DOT__mem_MemRead = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3992462780302686819ull);
    vlSelf->soc_top__DOT__u_core__DOT__mem_MemWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3246268995627343878ull);
    vlSelf->soc_top__DOT__u_core__DOT__mem_MemToReg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12415014567001191886ull);
    vlSelf->soc_top__DOT__u_core__DOT__mem_alu_result = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5595186771507935099ull);
    vlSelf->soc_top__DOT__u_core__DOT__mem_rs2_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10565955736427014237ull);
    vlSelf->soc_top__DOT__u_core__DOT__mem_pc4 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10160509096079303477ull);
    vlSelf->soc_top__DOT__u_core__DOT__mem_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2453212431684752265ull);
    vlSelf->soc_top__DOT__u_core__DOT__mem_funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 18043401469583331749ull);
    vlSelf->soc_top__DOT__u_core__DOT__wb_RegWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17656580888808147019ull);
    vlSelf->soc_top__DOT__u_core__DOT__wb_MemToReg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2405770621468430161ull);
    vlSelf->soc_top__DOT__u_core__DOT__wb_read_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15765844401828615879ull);
    vlSelf->soc_top__DOT__u_core__DOT__wb_alu_result = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8593420711321138523ull);
    vlSelf->soc_top__DOT__u_core__DOT__wb_pc4 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9019428683402935914ull);
    vlSelf->soc_top__DOT__u_core__DOT__wb_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6810561708718676032ull);
    vlSelf->soc_top__DOT__u_core__DOT__wb_write_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13213048368345371376ull);
    vlSelf->soc_top__DOT__u_core__DOT____Vcellinp__u_if_id__flush = 0;
    vlSelf->soc_top__DOT__u_core__DOT____Vcellinp__u_id_ex__flush = 0;
    vlSelf->soc_top__DOT__u_core__DOT__u_id__DOT____VdfgRegularize_hf18c6620_0_0 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12330208994143076794ull);
    }
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__fwd_rs1 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17798351756719831763ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5302484143411556633ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__fwd_rs2 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15355894583194556953ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4043565709283576742ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__alu_ctrl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14447441387846189808ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__alu_res = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2633883565076932454ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__is_m_ext = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4791357132413157927ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__multdiv_result = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3122127892379631978ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__alu_result_raw = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6113748514928818769ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__csr_write_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8064430332052402033ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__csr_rdata = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8005242011256409004ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__csr_write_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9585970366484583129ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__mepc_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16049927067188356679ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__mtvec_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12093779492985762776ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__sll_res = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11422107734199846871ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__srl_res = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16341958920836592377ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__sra_res = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15051704866267285161ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8381975506764695313ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2908407524107644497ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__mul_signed, __VscopeHash, 584098491858392998ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__mstatus = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10396784424992478413ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__mcause = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16325489900447303022ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__mie = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13013270803106044632ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__mscratch = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11912057086079745705ull);
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->soc_top__DOT__u_ram__DOT__memory[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 552268067303732870ull);
    }
    vlSelf->soc_top__DOT__u_ram__DOT__use_little_endian = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2981381768913570233ull);
    vlSelf->soc_top__DOT__u_clint__DOT__mtime = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4396366277399774278ull);
    vlSelf->soc_top__DOT__u_clint__DOT__mtimecmp = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11820609185573333154ull);
    vlSelf->soc_top__DOT__u_spi__DOT__clk_div = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7984457283808682605ull);
    vlSelf->soc_top__DOT__u_spi__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10905560258609483562ull);
    vlSelf->soc_top__DOT__u_spi__DOT__shift_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6375813665882087158ull);
    vlSelf->soc_top__DOT__u_spi__DOT__rx_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6086927494642911965ull);
    vlSelf->soc_top__DOT__u_spi__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2249725234025744710ull);
    vlSelf->soc_top__DOT__u_spi__DOT__clk_cnt = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4211750982898613008ull);
    vlSelf->soc_top__DOT__u_spi__DOT__bit_cnt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14658653244359401037ull);
    vlSelf->soc_top__DOT__u_vga__DOT__in_window = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6781072613806206865ull);
    vlSelf->soc_top__DOT__u_vga__DOT__vga_pixel_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1049183241002728785ull);
    vlSelf->soc_top__DOT__u_vga__DOT__h_sync_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14152794227746952979ull);
    vlSelf->soc_top__DOT__u_vga__DOT__v_sync_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12434960414197569376ull);
    vlSelf->soc_top__DOT__u_vga__DOT__video_active_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10441599931103782804ull);
    vlSelf->soc_top__DOT__u_vga__DOT__in_window_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14878866121146651901ull);
    vlSelf->soc_top__DOT__u_vga__DOT__u_timing__DOT__h_count = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 17988472353195455572ull);
    vlSelf->soc_top__DOT__u_vga__DOT__u_timing__DOT__v_count = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16309450569581939252ull);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->soc_top__DOT__u_vga__DOT__u_ram__DOT__memory[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1298553197311022873ull);
    }
    vlSelf->__VdfgRegularize_he50b618e_0_33 = 0;
    vlSelf->__VdfgRegularize_he50b618e_0_35 = 0;
    vlSelf->__VdfgRegularize_he50b618e_0_36 = 0;
    vlSelf->__VdfgRegularize_he50b618e_0_37 = 0;
    vlSelf->__VdfgRegularize_he50b618e_0_38 = 0;
    vlSelf->__Vdly__soc_top__DOT__u_clint__DOT__mtime = 0;
    vlSelf->__Vdly__soc_top__DOT__u_spi__DOT__clk_div = 0;
    vlSelf->__Vdly__soc_top__DOT__u_spi__DOT__shift_reg = 0;
    vlSelf->__Vdly__soc_top__DOT__u_spi__DOT__state = 0;
    vlSelf->__Vdly__soc_top__DOT__u_spi__DOT__clk_cnt = 0;
    vlSelf->__Vdly__soc_top__DOT__u_spi__DOT__bit_cnt = 0;
    vlSelf->__Vdly__soc_top__DOT__u_vga__DOT__u_timing__DOT__h_count = 0;
    vlSelf->__Vdly__soc_top__DOT__u_vga__DOT__u_timing__DOT__v_count = 0;
    vlSelf->__VdlyVal__soc_top__DOT__u_ram__DOT__memory__v0 = 0;
    vlSelf->__VdlyDim0__soc_top__DOT__u_ram__DOT__memory__v0 = 0;
    vlSelf->__VdlySet__soc_top__DOT__u_ram__DOT__memory__v0 = 0;
    vlSelf->__VdlyVal__soc_top__DOT__u_ram__DOT__memory__v1 = 0;
    vlSelf->__VdlyDim0__soc_top__DOT__u_ram__DOT__memory__v1 = 0;
    vlSelf->__VdlySet__soc_top__DOT__u_ram__DOT__memory__v1 = 0;
    vlSelf->__VdlyVal__soc_top__DOT__u_ram__DOT__memory__v2 = 0;
    vlSelf->__VdlyDim0__soc_top__DOT__u_ram__DOT__memory__v2 = 0;
    vlSelf->__VdlyVal__soc_top__DOT__u_ram__DOT__memory__v3 = 0;
    vlSelf->__VdlyDim0__soc_top__DOT__u_ram__DOT__memory__v3 = 0;
    vlSelf->__VdlySet__soc_top__DOT__u_ram__DOT__memory__v3 = 0;
    vlSelf->__VdlyVal__soc_top__DOT__u_ram__DOT__memory__v4 = 0;
    vlSelf->__VdlyDim0__soc_top__DOT__u_ram__DOT__memory__v4 = 0;
    vlSelf->__VdlyVal__soc_top__DOT__u_ram__DOT__memory__v5 = 0;
    vlSelf->__VdlyDim0__soc_top__DOT__u_ram__DOT__memory__v5 = 0;
    vlSelf->__VdlyVal__soc_top__DOT__u_ram__DOT__memory__v6 = 0;
    vlSelf->__VdlyDim0__soc_top__DOT__u_ram__DOT__memory__v6 = 0;
    vlSelf->__VdlyVal__soc_top__DOT__u_ram__DOT__memory__v7 = 0;
    vlSelf->__VdlyDim0__soc_top__DOT__u_ram__DOT__memory__v7 = 0;
    vlSelf->__VdlySet__soc_top__DOT__u_ram__DOT__memory__v7 = 0;
    vlSelf->__VdlyVal__soc_top__DOT__u_ram__DOT__memory__v8 = 0;
    vlSelf->__VdlyDim0__soc_top__DOT__u_ram__DOT__memory__v8 = 0;
    vlSelf->__VdlyVal__soc_top__DOT__u_ram__DOT__memory__v9 = 0;
    vlSelf->__VdlyDim0__soc_top__DOT__u_ram__DOT__memory__v9 = 0;
    vlSelf->__VdlyVal__soc_top__DOT__u_ram__DOT__memory__v10 = 0;
    vlSelf->__VdlyDim0__soc_top__DOT__u_ram__DOT__memory__v10 = 0;
    vlSelf->__VdlyVal__soc_top__DOT__u_ram__DOT__memory__v11 = 0;
    vlSelf->__VdlyDim0__soc_top__DOT__u_ram__DOT__memory__v11 = 0;
    vlSelf->__VdlyVal__soc_top__DOT__u_ram__DOT__memory__v12 = 0;
    vlSelf->__VdlyDim0__soc_top__DOT__u_ram__DOT__memory__v12 = 0;
    vlSelf->__VdlyVal__soc_top__DOT__u_ram__DOT__memory__v13 = 0;
    vlSelf->__VdlyDim0__soc_top__DOT__u_ram__DOT__memory__v13 = 0;
    vlSelf->__VdlyVal__soc_top__DOT__u_ram__DOT__memory__v14 = 0;
    vlSelf->__VdlyDim0__soc_top__DOT__u_ram__DOT__memory__v14 = 0;
    vlSelf->__VdlyVal__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v0 = 0;
    vlSelf->__VdlyDim0__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v0 = 0;
    vlSelf->__VdlySet__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v0 = 0;
    vlSelf->__VdlyVal__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v1 = 0;
    vlSelf->__VdlyDim0__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v1 = 0;
    vlSelf->__VdlySet__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v1 = 0;
    vlSelf->__VdlyVal__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v2 = 0;
    vlSelf->__VdlyDim0__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v2 = 0;
    vlSelf->__VdlyVal__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v3 = 0;
    vlSelf->__VdlyDim0__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v3 = 0;
    vlSelf->__VdlySet__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v3 = 0;
    vlSelf->__VdlyVal__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v4 = 0;
    vlSelf->__VdlyDim0__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v4 = 0;
    vlSelf->__VdlyVal__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v5 = 0;
    vlSelf->__VdlyDim0__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v5 = 0;
    vlSelf->__VdlyVal__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v6 = 0;
    vlSelf->__VdlyDim0__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v6 = 0;
    vlSelf->__VdlyVal__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v7 = 0;
    vlSelf->__VdlyDim0__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v7 = 0;
    vlSelf->__VdlySet__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v7 = 0;
    vlSelf->__VdlyVal__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v8 = 0;
    vlSelf->__VdlyDim0__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v8 = 0;
    vlSelf->__VdlyVal__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v9 = 0;
    vlSelf->__VdlyDim0__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v9 = 0;
    vlSelf->__VdlyVal__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v10 = 0;
    vlSelf->__VdlyDim0__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v10 = 0;
    vlSelf->__VdlyVal__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v11 = 0;
    vlSelf->__VdlyDim0__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v11 = 0;
    vlSelf->__VdlyVal__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v12 = 0;
    vlSelf->__VdlyDim0__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v12 = 0;
    vlSelf->__VdlyVal__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v13 = 0;
    vlSelf->__VdlyDim0__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v13 = 0;
    vlSelf->__VdlyVal__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v14 = 0;
    vlSelf->__VdlyDim0__soc_top__DOT__u_vga__DOT__u_ram__DOT__memory__v14 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__soc_top__DOT__clk_25mhz__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
