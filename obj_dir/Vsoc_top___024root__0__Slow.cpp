// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsoc_top.h for the primary calling header

#include "Vsoc_top__pch.h"

VL_ATTR_COLD void Vsoc_top___024root___eval_static(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___eval_static\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__clk_25mhz__0 
        = vlSelfRef.soc_top__DOT__clk_25mhz;
}

VL_ATTR_COLD void Vsoc_top___024root___eval_initial(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___eval_initial\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vinline__eval_initial__TOP_soc_top__DOT__u_vga__DOT__u_ram__DOT__i;
    __Vinline__eval_initial__TOP_soc_top__DOT__u_vga__DOT__u_ram__DOT__i = 0;
    // Body
    VL_READMEM_N(true, 8, 16777216, 0, "instructions.txt"s
                 ,  &(vlSelfRef.soc_top__DOT__u_ram__DOT__memory)
                 , 0, ~0ULL);
    __Vinline__eval_initial__TOP_soc_top__DOT__u_vga__DOT__u_ram__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00010000U, __Vinline__eval_initial__TOP_soc_top__DOT__u_vga__DOT__u_ram__DOT__i)) {
        vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory[(0x0000ffffU 
                                                                & __Vinline__eval_initial__TOP_soc_top__DOT__u_vga__DOT__u_ram__DOT__i)] = 0U;
        __Vinline__eval_initial__TOP_soc_top__DOT__u_vga__DOT__u_ram__DOT__i 
            = ((IData)(1U) + __Vinline__eval_initial__TOP_soc_top__DOT__u_vga__DOT__u_ram__DOT__i);
    }
}

VL_ATTR_COLD void Vsoc_top___024root___eval_initial__TOP(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___eval_initial__TOP\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ soc_top__DOT__u_vga__DOT__u_ram__DOT__i;
    soc_top__DOT__u_vga__DOT__u_ram__DOT__i = 0;
    // Body
    VL_READMEM_N(true, 8, 16777216, 0, "instructions.txt"s
                 ,  &(vlSelfRef.soc_top__DOT__u_ram__DOT__memory)
                 , 0, ~0ULL);
    soc_top__DOT__u_vga__DOT__u_ram__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00010000U, soc_top__DOT__u_vga__DOT__u_ram__DOT__i)) {
        vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory[(0x0000ffffU 
                                                                & soc_top__DOT__u_vga__DOT__u_ram__DOT__i)] = 0U;
        soc_top__DOT__u_vga__DOT__u_ram__DOT__i = ((IData)(1U) 
                                                   + soc_top__DOT__u_vga__DOT__u_ram__DOT__i);
    }
}

VL_ATTR_COLD void Vsoc_top___024root___eval_final(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___eval_final\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsoc_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vsoc_top___024root___eval_phase__stl(Vsoc_top___024root* vlSelf);

VL_ATTR_COLD void Vsoc_top___024root___eval_settle(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___eval_settle\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vsoc_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("src/soc_top.v", 1, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vsoc_top___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vsoc_top___024root___eval_triggers__stl(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___eval_triggers__stl\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsoc_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vsoc_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsoc_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vsoc_top___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vsoc_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___trigger_anySet__stl\n"); );
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

extern const VlUnpacked<CData/*3:0*/, 64> Vsoc_top__ConstPool__TABLE_h4c20ea82_0;

VL_ATTR_COLD void Vsoc_top___024root___stl_sequent__TOP__0(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___stl_sequent__TOP__0\n"); );
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
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_1;
    __VdfgRegularize_h6e95ff9d_0_1 = 0;
    QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_2;
    __VdfgRegularize_h6e95ff9d_0_2 = 0;
    QData/*63:0*/ __VdfgRegularize_h6e95ff9d_0_3;
    __VdfgRegularize_h6e95ff9d_0_3 = 0;
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    vlSelfRef.soc_top__DOT__u_core__DOT__id_is_32bit = 0U;
    vlSelfRef.soc_top__DOT__u_core__DOT__id_is_mret = 0U;
    vlSelfRef.soc_top__DOT__u_core__DOT__id_is_csr = 0U;
    vlSelfRef.soc_top__DOT__u_core__DOT__id_RegWrite = 0U;
    vlSelfRef.soc_top__DOT__u_core__DOT__id_ALUSrcA = 0U;
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
                        if ((0U == (7U & (vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction 
                                          >> 0x0000000cU)))) {
                            if ((0x0302U == (vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction 
                                             >> 0x00000014U))) {
                                vlSelfRef.soc_top__DOT__u_core__DOT__id_is_mret = 1U;
                            }
                        }
                        if ((0U != (7U & (vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction 
                                          >> 0x0000000cU)))) {
                            vlSelfRef.soc_top__DOT__u_core__DOT__id_is_csr = 1U;
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
    vlSelfRef.soc_top__DOT__u_core__DOT__id_ALUSrc = 0U;
    vlSelfRef.soc_top__DOT__u_core__DOT__id_MemWrite = 0U;
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
                        if ((3U != (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) {
                            if ((0x23U == (0x0000007fU 
                                           & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) {
                                vlSelfRef.soc_top__DOT__u_core__DOT__id_MemWrite = 1U;
                            }
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
    vlSelfRef.dbg_vga_addr = (0x0000ffffU & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result));
    vlSelfRef.__VdfgRegularize_he50b618e_0_38 = ((0x0000000010020000ULL 
                                                  <= vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result) 
                                                 & (0x0000000010020100ULL 
                                                    > vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result));
    vlSelfRef.leds = vlSelfRef.soc_top__DOT__led_reg;
    vlSelfRef.vga_hsync = vlSelfRef.soc_top__DOT__u_vga__DOT__h_sync_d;
    vlSelfRef.vga_vsync = vlSelfRef.soc_top__DOT__u_vga__DOT__v_sync_d;
    vlSelfRef.dbg_vga_data = vlSelfRef.soc_top__DOT__u_core__DOT__mem_rs2_data;
    vlSelfRef.soc_top__DOT__clk_25mhz = (1U & ((IData)(vlSelfRef.soc_top__DOT__clk_div) 
                                               >> 1U));
    vlSelfRef.soc_top__DOT__u_core__DOT__u_id__DOT____VdfgRegularize_hf18c6620_0_0 
        = ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__wb_RegWrite) 
           & (0U != (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__wb_rd)));
    vlSelfRef.soc_top__DOT__u_vga__DOT__in_window = 
        ((0x0280U > (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__h_count)) 
         & ((0x0028U <= (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__v_count)) 
            & (0x01b8U > (IData)(vlSelfRef.soc_top__DOT__u_vga__DOT__u_timing__DOT__v_count))));
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
                                                                    (0x0000ffffU 
                                                                     & ((IData)(3U) 
                                                                        + (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)))])) 
                                                    << 0x00000018U) 
                                                   | (QData)((IData)(
                                                                     ((vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                                                       [
                                                                       (0x0000ffffU 
                                                                        & ((IData)(2U) 
                                                                           + (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)))] 
                                                                       << 0x00000010U) 
                                                                      | ((vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                                                          [
                                                                          (0x0000ffffU 
                                                                           & ((IData)(1U) 
                                                                              + (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)))] 
                                                                          << 8U) 
                                                                         | vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                                                         [
                                                                         (0x0000ffffU 
                                                                          & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result))]))))))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_funct3))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                                                    [
                                                                    (0x0000ffffU 
                                                                     & ((IData)(1U) 
                                                                        + (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)))])) 
                                                    << 8U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                                                     [
                                                                     (0x0000ffffU 
                                                                      & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result))])))
                                                   : (QData)((IData)(
                                                                     vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                                                     [
                                                                     (0x0000ffffU 
                                                                      & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result))]))))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_funct3))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_funct3))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    (((vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                                                       [
                                                                       (0x0000ffffU 
                                                                        & ((IData)(7U) 
                                                                           + (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)))] 
                                                                       << 0x00000018U) 
                                                                      | (vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                                                         [
                                                                         (0x0000ffffU 
                                                                          & ((IData)(6U) 
                                                                             + (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)))] 
                                                                         << 0x00000010U)) 
                                                                     | ((vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                                                         [
                                                                         (0x0000ffffU 
                                                                          & ((IData)(5U) 
                                                                             + (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)))] 
                                                                         << 8U) 
                                                                        | vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                                                        [
                                                                        (0x0000ffffU 
                                                                         & ((IData)(4U) 
                                                                            + (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)))])))) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     (((vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                                                        [
                                                                        (0x0000ffffU 
                                                                         & ((IData)(3U) 
                                                                            + (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)))] 
                                                                        << 0x00000018U) 
                                                                       | (vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                                                          [
                                                                          (0x0000ffffU 
                                                                           & ((IData)(2U) 
                                                                              + (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)))] 
                                                                          << 0x00000010U)) 
                                                                      | ((vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                                                          [
                                                                          (0x0000ffffU 
                                                                           & ((IData)(1U) 
                                                                              + (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)))] 
                                                                          << 8U) 
                                                                         | vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                                                         [
                                                                         (0x0000ffffU 
                                                                          & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result))])))))
                                                   : 
                                                  (((QData)((IData)(
                                                                    (- (IData)(
                                                                               (1U 
                                                                                & (vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                                                                [
                                                                                (0x0000ffffU 
                                                                                & ((IData)(3U) 
                                                                                + (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)))] 
                                                                                >> 7U)))))) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     (((vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                                                        [
                                                                        (0x0000ffffU 
                                                                         & ((IData)(3U) 
                                                                            + (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)))] 
                                                                        << 0x00000018U) 
                                                                       | (vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                                                          [
                                                                          (0x0000ffffU 
                                                                           & ((IData)(2U) 
                                                                              + (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)))] 
                                                                          << 0x00000010U)) 
                                                                      | ((vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                                                          [
                                                                          (0x0000ffffU 
                                                                           & ((IData)(1U) 
                                                                              + (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)))] 
                                                                          << 8U) 
                                                                         | vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                                                         [
                                                                         (0x0000ffffU 
                                                                          & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result))]))))))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_funct3))
                                                   ? 
                                                  (((- (QData)((IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                                                           [
                                                                           (0x0000ffffU 
                                                                            & ((IData)(1U) 
                                                                               + (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)))] 
                                                                           >> 7U))))) 
                                                    << 0x00000010U) 
                                                   | (QData)((IData)(
                                                                     ((vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                                                       [
                                                                       (0x0000ffffU 
                                                                        & ((IData)(1U) 
                                                                           + (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)))] 
                                                                       << 8U) 
                                                                      | vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                                                      [
                                                                      (0x0000ffffU 
                                                                       & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result))]))))
                                                   : 
                                                  (((- (QData)((IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                                                           [
                                                                           (0x0000ffffU 
                                                                            & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result))] 
                                                                           >> 7U))))) 
                                                    << 8U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.soc_top__DOT__u_vga__DOT__u_ram__DOT__memory
                                                                     [
                                                                     (0x0000ffffU 
                                                                      & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result))]))))));
    vlSelfRef.soc_top__DOT__u_core__DOT__trap_target_pc 
        = ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_is_mret)
            ? vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__mepc_out
            : vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__mtvec_out);
    vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__csr_write_en 
        = ((~ (((2U == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_funct3)) 
                | ((3U == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_funct3)) 
                   | ((6U == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_funct3)) 
                      | (7U == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_funct3))))) 
               & (0U == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_rs1)))) 
           & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_is_csr));
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
    vlSelfRef.soc_top__DOT__ram_read_data = (((0x0000000001000000ULL 
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
                                                                     (0x00ffffffU 
                                                                      & ((IData)(3U) 
                                                                         + (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)))])) 
                                                     << 0x00000018U) 
                                                    | (QData)((IData)(
                                                                      ((vlSelfRef.soc_top__DOT__u_ram__DOT__memory
                                                                        [
                                                                        (0x00ffffffU 
                                                                         & ((IData)(2U) 
                                                                            + (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)))] 
                                                                        << 0x00000010U) 
                                                                       | ((vlSelfRef.soc_top__DOT__u_ram__DOT__memory
                                                                           [
                                                                           (0x00ffffffU 
                                                                            & ((IData)(1U) 
                                                                               + (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)))] 
                                                                           << 8U) 
                                                                          | vlSelfRef.soc_top__DOT__u_ram__DOT__memory
                                                                          [
                                                                          (0x00ffffffU 
                                                                           & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result))]))))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_funct3))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelfRef.soc_top__DOT__u_ram__DOT__memory
                                                                     [
                                                                     (0x00ffffffU 
                                                                      & ((IData)(1U) 
                                                                         + (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)))])) 
                                                     << 8U) 
                                                    | (QData)((IData)(
                                                                      vlSelfRef.soc_top__DOT__u_ram__DOT__memory
                                                                      [
                                                                      (0x00ffffffU 
                                                                       & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result))])))
                                                    : (QData)((IData)(
                                                                      vlSelfRef.soc_top__DOT__u_ram__DOT__memory
                                                                      [
                                                                      (0x00ffffffU 
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
                                                                        (0x00ffffffU 
                                                                         & ((IData)(7U) 
                                                                            + (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)))] 
                                                                        << 0x00000018U) 
                                                                       | (vlSelfRef.soc_top__DOT__u_ram__DOT__memory
                                                                          [
                                                                          (0x00ffffffU 
                                                                           & ((IData)(6U) 
                                                                              + (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)))] 
                                                                          << 0x00000010U)) 
                                                                      | ((vlSelfRef.soc_top__DOT__u_ram__DOT__memory
                                                                          [
                                                                          (0x00ffffffU 
                                                                           & ((IData)(5U) 
                                                                              + (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)))] 
                                                                          << 8U) 
                                                                         | vlSelfRef.soc_top__DOT__u_ram__DOT__memory
                                                                         [
                                                                         (0x00ffffffU 
                                                                          & ((IData)(4U) 
                                                                             + (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)))])))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(
                                                                      (((vlSelfRef.soc_top__DOT__u_ram__DOT__memory
                                                                         [
                                                                         (0x00ffffffU 
                                                                          & ((IData)(3U) 
                                                                             + (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)))] 
                                                                         << 0x00000018U) 
                                                                        | (vlSelfRef.soc_top__DOT__u_ram__DOT__memory
                                                                           [
                                                                           (0x00ffffffU 
                                                                            & ((IData)(2U) 
                                                                               + (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)))] 
                                                                           << 0x00000010U)) 
                                                                       | ((vlSelfRef.soc_top__DOT__u_ram__DOT__memory
                                                                           [
                                                                           (0x00ffffffU 
                                                                            & ((IData)(1U) 
                                                                               + (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)))] 
                                                                           << 8U) 
                                                                          | vlSelfRef.soc_top__DOT__u_ram__DOT__memory
                                                                          [
                                                                          (0x00ffffffU 
                                                                           & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result))])))))
                                                    : 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.soc_top__DOT__u_ram__DOT__memory
                                                                                [
                                                                                (0x00ffffffU 
                                                                                & ((IData)(3U) 
                                                                                + (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)))] 
                                                                                >> 7U)))))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(
                                                                      (((vlSelfRef.soc_top__DOT__u_ram__DOT__memory
                                                                         [
                                                                         (0x00ffffffU 
                                                                          & ((IData)(3U) 
                                                                             + (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)))] 
                                                                         << 0x00000018U) 
                                                                        | (vlSelfRef.soc_top__DOT__u_ram__DOT__memory
                                                                           [
                                                                           (0x00ffffffU 
                                                                            & ((IData)(2U) 
                                                                               + (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)))] 
                                                                           << 0x00000010U)) 
                                                                       | ((vlSelfRef.soc_top__DOT__u_ram__DOT__memory
                                                                           [
                                                                           (0x00ffffffU 
                                                                            & ((IData)(1U) 
                                                                               + (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)))] 
                                                                           << 8U) 
                                                                          | vlSelfRef.soc_top__DOT__u_ram__DOT__memory
                                                                          [
                                                                          (0x00ffffffU 
                                                                           & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result))]))))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_funct3))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (vlSelfRef.soc_top__DOT__u_ram__DOT__memory
                                                                            [
                                                                            (0x00ffffffU 
                                                                             & ((IData)(1U) 
                                                                                + (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)))] 
                                                                            >> 7U))))) 
                                                     << 0x00000010U) 
                                                    | (QData)((IData)(
                                                                      ((vlSelfRef.soc_top__DOT__u_ram__DOT__memory
                                                                        [
                                                                        (0x00ffffffU 
                                                                         & ((IData)(1U) 
                                                                            + (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result)))] 
                                                                        << 8U) 
                                                                       | vlSelfRef.soc_top__DOT__u_ram__DOT__memory
                                                                       [
                                                                       (0x00ffffffU 
                                                                        & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result))]))))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (vlSelfRef.soc_top__DOT__u_ram__DOT__memory
                                                                            [
                                                                            (0x00ffffffU 
                                                                             & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result))] 
                                                                            >> 7U))))) 
                                                     << 8U) 
                                                    | (QData)((IData)(
                                                                      vlSelfRef.soc_top__DOT__u_ram__DOT__memory
                                                                      [
                                                                      (0x00ffffffU 
                                                                       & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result))]))))))
                                              : 0ULL);
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
    vlSelfRef.__VdfgRegularize_he50b618e_0_36 = ((0x0000000010000000ULL 
                                                  <= vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result) 
                                                 & (0x0000000010000100ULL 
                                                    > vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result));
    vlSelfRef.__VdfgRegularize_he50b618e_0_37 = ((0x0000000010010000ULL 
                                                  <= vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result) 
                                                 & (0x0000000010010100ULL 
                                                    > vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result));
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
    vlSelfRef.__VdfgRegularize_he50b618e_0_35 = ((0x0000000001000000ULL 
                                                  <= vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result) 
                                                 & (0x0000000001100000ULL 
                                                    > vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result));
    vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__is_m_ext 
        = ((2U == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_ALUOp)) 
           & (1U == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_funct7)));
    vlSelfRef.soc_top__DOT__timer_interrupt = (vlSelfRef.soc_top__DOT__u_clint__DOT__mtime 
                                               >= vlSelfRef.soc_top__DOT__u_clint__DOT__mtimecmp);
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
    vlSelfRef.soc_top__DOT__u_core__DOT__wb_write_data 
        = ((1U == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__wb_MemToReg))
            ? vlSelfRef.soc_top__DOT__u_core__DOT__wb_read_data
            : ((2U == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__wb_MemToReg))
                ? vlSelfRef.soc_top__DOT__u_core__DOT__wb_pc4
                : vlSelfRef.soc_top__DOT__u_core__DOT__wb_alu_result));
    vlSelfRef.soc_top__DOT__clint_write_req = ((0x0000000001000000ULL 
                                                <= vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result) 
                                               & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_35)) 
                                                  & ((~ (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_36)) 
                                                     & ((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_37) 
                                                        & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_MemWrite)))));
    vlSelfRef.soc_top__DOT__vga_write_req = ((0x0000000001000000ULL 
                                              <= vlSelfRef.soc_top__DOT__u_core__DOT__mem_alu_result) 
                                             & ((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_35) 
                                                & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__mem_MemWrite)));
    __VdfgRegularize_h6e95ff9d_0_3 = ((4U & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction)
                                       ? 0ULL : __VdfgRegularize_h6e95ff9d_0_1);
    vlSelfRef.soc_top__DOT__u_core__DOT__id_ex_stall 
        = ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__is_m_ext) 
           & (3U != (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__state)));
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
    vlSelfRef.dbg_vga_we = vlSelfRef.soc_top__DOT__vga_write_req;
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
    vlSelfRef.soc_top__DOT__u_core__DOT__pc_stall = 
        ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__id_ex_flush_ext) 
         | (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__id_ex_stall));
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
    vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
        = ((1U == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_ALUSrcA))
            ? vlSelfRef.soc_top__DOT__u_core__DOT__ex_pc
            : ((2U == (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_ALUSrcA))
                ? 0ULL : vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__fwd_rs1));
    vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
        = ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_ALUSrc)
            ? vlSelfRef.soc_top__DOT__u_core__DOT__ex_immediate
            : vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__fwd_rs2);
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
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__9__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000000aU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__8__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 9U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__30__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000001dU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__31__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000001eU)));
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
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__9__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 9U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__8__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 8U)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__30__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000001eU)));
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__31__KET__ 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a 
                             >> 0x0000001fU)));
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
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__7__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__9__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__6__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__8__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__32__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__30__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__33__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__31__KET__;
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
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__7__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__7__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2__BRA__6__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1__BRA__6__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__32__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__32__KET__;
        soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__33__KET__ 
            = soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__33__KET__;
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

VL_ATTR_COLD void Vsoc_top___024root___stl_sequent__TOP__1(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___stl_sequent__TOP__1\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__addsub_res;
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__addsub_res = 0;
    // Body
    vlSelfRef.soc_top__DOT__u_core__DOT__if_pc4 = (
                                                   ((QData)((IData)(
                                                                    (((((0x000000f0U 
                                                                         & (((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x0000003cU)) 
                                                                             ^ 
                                                                             (((((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x0000003eU)) 
                                                                                & (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__VdfgRegularize_h6e95ff9d_0_17)) 
                                                                                << 3U) 
                                                                               | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__VdfgRegularize_h6e95ff9d_0_17) 
                                                                                << 2U)) 
                                                                              | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__VdfgRegularize_hf246a9bd_1_32) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__block3__DOT__block3__DOT__cin)))) 
                                                                            << 4U)) 
                                                                        | (0x0000000fU 
                                                                           & ((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x00000038U)) 
                                                                              ^ 
                                                                              (((((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x0000003aU)) 
                                                                                & (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__VdfgRegularize_h6e95ff9d_0_18)) 
                                                                                << 3U) 
                                                                                | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__VdfgRegularize_h6e95ff9d_0_18) 
                                                                                << 2U)) 
                                                                               | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__VdfgRegularize_hf246a9bd_1_30) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__block3__DOT__block2__DOT__cin)))))) 
                                                                       << 0x00000018U) 
                                                                      | (((0x000000f0U 
                                                                           & (((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x00000034U)) 
                                                                               ^ 
                                                                               (((((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x00000036U)) 
                                                                                & (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__VdfgRegularize_h6e95ff9d_0_19)) 
                                                                                << 3U) 
                                                                                | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__VdfgRegularize_h6e95ff9d_0_19) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__VdfgRegularize_hf246a9bd_1_28) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__block3__DOT__block1__DOT__cin)))) 
                                                                              << 4U)) 
                                                                          | (0x0000000fU 
                                                                             & ((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x00000030U)) 
                                                                                ^ 
                                                                                (((((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x00000032U)) 
                                                                                & (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__VdfgRegularize_h6e95ff9d_0_20)) 
                                                                                << 3U) 
                                                                                | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__VdfgRegularize_h6e95ff9d_0_20) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__VdfgRegularize_hf246a9bd_1_26) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__block3__DOT__block0__DOT__cin)))))) 
                                                                         << 0x00000010U)) 
                                                                     | ((((0x000000f0U 
                                                                           & (((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x0000002cU)) 
                                                                               ^ 
                                                                               (((((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x0000002eU)) 
                                                                                & (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__VdfgRegularize_h6e95ff9d_0_13)) 
                                                                                << 3U) 
                                                                                | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__VdfgRegularize_h6e95ff9d_0_13) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__VdfgRegularize_hf246a9bd_1_24) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__block2__DOT__block3__DOT__cin)))) 
                                                                              << 4U)) 
                                                                          | (0x0000000fU 
                                                                             & ((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x00000028U)) 
                                                                                ^ 
                                                                                (((((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x0000002aU)) 
                                                                                & (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__VdfgRegularize_h6e95ff9d_0_14)) 
                                                                                << 3U) 
                                                                                | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__VdfgRegularize_h6e95ff9d_0_14) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__VdfgRegularize_hf246a9bd_1_22) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__block2__DOT__block2__DOT__cin)))))) 
                                                                         << 8U) 
                                                                        | ((0x000000f0U 
                                                                            & (((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x00000024U)) 
                                                                                ^ 
                                                                                (((((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x00000026U)) 
                                                                                & (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__VdfgRegularize_h6e95ff9d_0_15)) 
                                                                                << 3U) 
                                                                                | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__VdfgRegularize_h6e95ff9d_0_15) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__VdfgRegularize_hf246a9bd_1_20) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__block2__DOT__block1__DOT__cin)))) 
                                                                               << 4U)) 
                                                                           | (0x0000000fU 
                                                                              & ((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x00000020U)) 
                                                                                ^ 
                                                                                (((((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x00000022U)) 
                                                                                & (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__VdfgRegularize_h6e95ff9d_0_16)) 
                                                                                << 3U) 
                                                                                | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__VdfgRegularize_h6e95ff9d_0_16) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__VdfgRegularize_hf246a9bd_1_18) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__block2__DOT__block0__DOT__cin)))))))))) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     (((((0x000000f0U 
                                                                          & (((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x0000001cU)) 
                                                                              ^ 
                                                                              (((((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x0000001eU)) 
                                                                                & (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__VdfgRegularize_h6e95ff9d_0_9)) 
                                                                                << 3U) 
                                                                                | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__VdfgRegularize_h6e95ff9d_0_9) 
                                                                                << 2U)) 
                                                                               | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__VdfgRegularize_hf246a9bd_1_16) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__block1__DOT__block3__DOT__cin)))) 
                                                                             << 4U)) 
                                                                         | (0x0000000fU 
                                                                            & ((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x00000018U)) 
                                                                               ^ 
                                                                               (((((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x0000001aU)) 
                                                                                & (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__VdfgRegularize_h6e95ff9d_0_10)) 
                                                                                << 3U) 
                                                                                | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__VdfgRegularize_h6e95ff9d_0_10) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__VdfgRegularize_hf246a9bd_1_14) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__block1__DOT__block2__DOT__cin)))))) 
                                                                        << 0x00000018U) 
                                                                       | (((0x000000f0U 
                                                                            & (((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x00000014U)) 
                                                                                ^ 
                                                                                (((((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x00000016U)) 
                                                                                & (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__VdfgRegularize_h6e95ff9d_0_11)) 
                                                                                << 3U) 
                                                                                | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__VdfgRegularize_h6e95ff9d_0_11) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__VdfgRegularize_hf246a9bd_1_12) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__block1__DOT__block1__DOT__cin)))) 
                                                                               << 4U)) 
                                                                           | (0x0000000fU 
                                                                              & ((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x00000010U)) 
                                                                                ^ 
                                                                                (((((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x00000012U)) 
                                                                                & (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__VdfgRegularize_h6e95ff9d_0_12)) 
                                                                                << 3U) 
                                                                                | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__VdfgRegularize_h6e95ff9d_0_12) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__VdfgRegularize_hf246a9bd_1_10) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__block1__DOT__block0__DOT__cin)))))) 
                                                                          << 0x00000010U)) 
                                                                      | ((((0x000000f0U 
                                                                            & (((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x0000000cU)) 
                                                                                ^ 
                                                                                (((((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x0000000eU)) 
                                                                                & (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__VdfgRegularize_h6e95ff9d_0_5)) 
                                                                                << 3U) 
                                                                                | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__VdfgRegularize_h6e95ff9d_0_5) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__VdfgRegularize_hf246a9bd_1_8) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__block0__DOT__block3__DOT__cin)))) 
                                                                               << 4U)) 
                                                                           | (0x0000000fU 
                                                                              & ((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 8U)) 
                                                                                ^ 
                                                                                (((((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 0x0000000aU)) 
                                                                                & (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__VdfgRegularize_h6e95ff9d_0_6)) 
                                                                                << 3U) 
                                                                                | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__VdfgRegularize_h6e95ff9d_0_6) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__VdfgRegularize_hf246a9bd_1_6) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__block0__DOT__block2__DOT__cin)))))) 
                                                                          << 8U) 
                                                                         | ((0x000000f0U 
                                                                             & (((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 4U)) 
                                                                                ^ 
                                                                                (((((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 6U)) 
                                                                                & (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__VdfgRegularize_h6e95ff9d_0_7)) 
                                                                                << 3U) 
                                                                                | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__VdfgRegularize_h6e95ff9d_0_7) 
                                                                                << 2U)) 
                                                                                | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__VdfgRegularize_hf246a9bd_1_4) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__PVT__block0__DOT__g__BRA__0__KET__)))) 
                                                                                << 4U)) 
                                                                            | (0x0000000fU 
                                                                               & (4U 
                                                                                ^ 
                                                                                ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__if_pc) 
                                                                                ^ 
                                                                                (8U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__if_pc 
                                                                                >> 2U)) 
                                                                                << 3U)))))))))));
    soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__addsub_res 
        = (((QData)((IData)((((((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block3__DOT__block3__DOT__p) 
                                  ^ ((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block3__DOT__block3__DOT__c3_out) 
                                       << 3U) | (4U 
                                                 & ((0xfffffffcU 
                                                     & ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block3__DOT__block3__DOT__g) 
                                                        << 1U)) 
                                                    | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__VdfgRegularize_hf246a9bd_1_31) 
                                                        | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block3__DOT__block3__DOT__p) 
                                                            >> 1U) 
                                                           & (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0))) 
                                                       << 2U)))) 
                                     | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__VdfgRegularize_hf246a9bd_1_32) 
                                         << 1U) | (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block3__DOT__block3__DOT__cin)))) 
                                 << 0x0000000cU) | 
                                (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block3__DOT__block2__DOT__p) 
                                  ^ ((((2U & (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block3__DOT__block2__DOT__g) 
                                               >> 1U) 
                                              | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block3__DOT__block2__DOT__p) 
                                                  >> 1U) 
                                                 & ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block3__DOT__block2__DOT__g) 
                                                    | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block3__DOT__block2__DOT__p) 
                                                       & ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__VdfgRegularize_hf246a9bd_1_30) 
                                                          << 1U)))))) 
                                       | (1U & (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block3__DOT__block2__DOT__g) 
                                                 >> 1U) 
                                                | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__VdfgRegularize_hf246a9bd_1_29) 
                                                   | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block3__DOT__block2__DOT__p) 
                                                       >> 1U) 
                                                      & (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0)))))) 
                                      << 2U) | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__VdfgRegularize_hf246a9bd_1_30) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block3__DOT__block2__DOT__cin)))) 
                                 << 8U)) | ((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block3__DOT__block1__DOT__p) 
                                              ^ (((
                                                   (2U 
                                                    & (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block3__DOT__block1__DOT__g) 
                                                        >> 1U) 
                                                       | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block3__DOT__block1__DOT__p) 
                                                           >> 1U) 
                                                          & ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block3__DOT__block1__DOT__g) 
                                                             | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block3__DOT__block1__DOT__p) 
                                                                & ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__VdfgRegularize_hf246a9bd_1_28) 
                                                                   << 1U)))))) 
                                                   | (1U 
                                                      & (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block3__DOT__block1__DOT__g) 
                                                          >> 1U) 
                                                         | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__VdfgRegularize_hf246a9bd_1_27) 
                                                            | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block3__DOT__block1__DOT__p) 
                                                                >> 1U) 
                                                               & (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0)))))) 
                                                  << 2U) 
                                                 | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__VdfgRegularize_hf246a9bd_1_28) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block3__DOT__block1__DOT__cin)))) 
                                             << 4U) 
                                            | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block3__DOT__block0__DOT__p) 
                                               ^ ((
                                                   ((2U 
                                                     & (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block3__DOT__block0__DOT__g) 
                                                         >> 1U) 
                                                        | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block3__DOT__block0__DOT__p) 
                                                            >> 1U) 
                                                           & ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block3__DOT__block0__DOT__g) 
                                                              | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block3__DOT__block0__DOT__p) 
                                                                 & ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__VdfgRegularize_hf246a9bd_1_26) 
                                                                    << 1U)))))) 
                                                    | (1U 
                                                       & (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block3__DOT__block0__DOT__g) 
                                                           >> 1U) 
                                                          | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__VdfgRegularize_hf246a9bd_1_25) 
                                                             | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block3__DOT__block0__DOT__p) 
                                                                 >> 1U) 
                                                                & (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0)))))) 
                                                   << 2U) 
                                                  | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__VdfgRegularize_hf246a9bd_1_26) 
                                                      << 1U) 
                                                     | (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block3__DOT__block0__DOT__cin)))))) 
                              << 0x00000010U) | (((
                                                   ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block2__DOT__block3__DOT__p) 
                                                    ^ 
                                                    ((((2U 
                                                        & (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block2__DOT__block3__DOT__g) 
                                                            >> 1U) 
                                                           | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block2__DOT__block3__DOT__p) 
                                                               >> 1U) 
                                                              & ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block2__DOT__block3__DOT__g) 
                                                                 | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block2__DOT__block3__DOT__p) 
                                                                    & ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__VdfgRegularize_hf246a9bd_1_24) 
                                                                       << 1U)))))) 
                                                       | (1U 
                                                          & (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block2__DOT__block3__DOT__g) 
                                                              >> 1U) 
                                                             | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__VdfgRegularize_hf246a9bd_1_23) 
                                                                | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block2__DOT__block3__DOT__p) 
                                                                    >> 1U) 
                                                                   & (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0)))))) 
                                                      << 2U) 
                                                     | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__VdfgRegularize_hf246a9bd_1_24) 
                                                         << 1U) 
                                                        | (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block2__DOT__block3__DOT__cin)))) 
                                                   << 0x0000000cU) 
                                                  | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block2__DOT__block2__DOT__p) 
                                                      ^ 
                                                      ((((2U 
                                                          & (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block2__DOT__block2__DOT__g) 
                                                              >> 1U) 
                                                             | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block2__DOT__block2__DOT__p) 
                                                                 >> 1U) 
                                                                & ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block2__DOT__block2__DOT__g) 
                                                                   | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block2__DOT__block2__DOT__p) 
                                                                      & ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__VdfgRegularize_hf246a9bd_1_22) 
                                                                         << 1U)))))) 
                                                         | (1U 
                                                            & (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block2__DOT__block2__DOT__g) 
                                                                >> 1U) 
                                                               | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__VdfgRegularize_hf246a9bd_1_21) 
                                                                  | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block2__DOT__block2__DOT__p) 
                                                                      >> 1U) 
                                                                     & (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0)))))) 
                                                        << 2U) 
                                                       | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__VdfgRegularize_hf246a9bd_1_22) 
                                                           << 1U) 
                                                          | (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block2__DOT__block2__DOT__cin)))) 
                                                     << 8U)) 
                                                 | ((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block2__DOT__block1__DOT__p) 
                                                      ^ 
                                                      ((((2U 
                                                          & (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block2__DOT__block1__DOT__g) 
                                                              >> 1U) 
                                                             | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block2__DOT__block1__DOT__p) 
                                                                 >> 1U) 
                                                                & ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block2__DOT__block1__DOT__g) 
                                                                   | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block2__DOT__block1__DOT__p) 
                                                                      & ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__VdfgRegularize_hf246a9bd_1_20) 
                                                                         << 1U)))))) 
                                                         | (1U 
                                                            & (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block2__DOT__block1__DOT__g) 
                                                                >> 1U) 
                                                               | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__VdfgRegularize_hf246a9bd_1_19) 
                                                                  | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block2__DOT__block1__DOT__p) 
                                                                      >> 1U) 
                                                                     & (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0)))))) 
                                                        << 2U) 
                                                       | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__VdfgRegularize_hf246a9bd_1_20) 
                                                           << 1U) 
                                                          | (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block2__DOT__block1__DOT__cin)))) 
                                                     << 4U) 
                                                    | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block2__DOT__block0__DOT__p) 
                                                       ^ 
                                                       ((((2U 
                                                           & (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block2__DOT__block0__DOT__g) 
                                                               >> 1U) 
                                                              | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block2__DOT__block0__DOT__p) 
                                                                  >> 1U) 
                                                                 & ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block2__DOT__block0__DOT__g) 
                                                                    | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block2__DOT__block0__DOT__p) 
                                                                       & ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__VdfgRegularize_hf246a9bd_1_18) 
                                                                          << 1U)))))) 
                                                          | (1U 
                                                             & (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block2__DOT__block0__DOT__g) 
                                                                 >> 1U) 
                                                                | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__VdfgRegularize_hf246a9bd_1_17) 
                                                                   | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block2__DOT__block0__DOT__p) 
                                                                       >> 1U) 
                                                                      & (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0)))))) 
                                                         << 2U) 
                                                        | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__VdfgRegularize_hf246a9bd_1_18) 
                                                            << 1U) 
                                                           | (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block2__DOT__block0__DOT__cin))))))))) 
            << 0x00000020U) | (QData)((IData)((((((
                                                   ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block1__DOT__block3__DOT__p) 
                                                    ^ 
                                                    ((((2U 
                                                        & (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block1__DOT__block3__DOT__g) 
                                                            >> 1U) 
                                                           | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block1__DOT__block3__DOT__p) 
                                                               >> 1U) 
                                                              & ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block1__DOT__block3__DOT__g) 
                                                                 | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block1__DOT__block3__DOT__p) 
                                                                    & ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__VdfgRegularize_hf246a9bd_1_16) 
                                                                       << 1U)))))) 
                                                       | (1U 
                                                          & (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block1__DOT__block3__DOT__g) 
                                                              >> 1U) 
                                                             | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__VdfgRegularize_hf246a9bd_1_15) 
                                                                | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block1__DOT__block3__DOT__p) 
                                                                    >> 1U) 
                                                                   & (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0)))))) 
                                                      << 2U) 
                                                     | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__VdfgRegularize_hf246a9bd_1_16) 
                                                         << 1U) 
                                                        | (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block1__DOT__block3__DOT__cin)))) 
                                                   << 0x0000000cU) 
                                                  | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block1__DOT__block2__DOT__p) 
                                                      ^ 
                                                      ((((2U 
                                                          & (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block1__DOT__block2__DOT__g) 
                                                              >> 1U) 
                                                             | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block1__DOT__block2__DOT__p) 
                                                                 >> 1U) 
                                                                & ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block1__DOT__block2__DOT__g) 
                                                                   | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block1__DOT__block2__DOT__p) 
                                                                      & ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__VdfgRegularize_hf246a9bd_1_14) 
                                                                         << 1U)))))) 
                                                         | (1U 
                                                            & (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block1__DOT__block2__DOT__g) 
                                                                >> 1U) 
                                                               | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__VdfgRegularize_hf246a9bd_1_13) 
                                                                  | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block1__DOT__block2__DOT__p) 
                                                                      >> 1U) 
                                                                     & (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0)))))) 
                                                        << 2U) 
                                                       | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__VdfgRegularize_hf246a9bd_1_14) 
                                                           << 1U) 
                                                          | (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block1__DOT__block2__DOT__cin)))) 
                                                     << 8U)) 
                                                 | ((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block1__DOT__block1__DOT__p) 
                                                      ^ 
                                                      ((((2U 
                                                          & (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block1__DOT__block1__DOT__g) 
                                                              >> 1U) 
                                                             | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block1__DOT__block1__DOT__p) 
                                                                 >> 1U) 
                                                                & ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block1__DOT__block1__DOT__g) 
                                                                   | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block1__DOT__block1__DOT__p) 
                                                                      & ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__VdfgRegularize_hf246a9bd_1_12) 
                                                                         << 1U)))))) 
                                                         | (1U 
                                                            & (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block1__DOT__block1__DOT__g) 
                                                                >> 1U) 
                                                               | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__VdfgRegularize_hf246a9bd_1_11) 
                                                                  | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block1__DOT__block1__DOT__p) 
                                                                      >> 1U) 
                                                                     & (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0)))))) 
                                                        << 2U) 
                                                       | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__VdfgRegularize_hf246a9bd_1_12) 
                                                           << 1U) 
                                                          | (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block1__DOT__block1__DOT__cin)))) 
                                                     << 4U) 
                                                    | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block1__DOT__block0__DOT__p) 
                                                       ^ 
                                                       ((((2U 
                                                           & (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block1__DOT__block0__DOT__g) 
                                                               >> 1U) 
                                                              | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block1__DOT__block0__DOT__p) 
                                                                  >> 1U) 
                                                                 & ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block1__DOT__block0__DOT__g) 
                                                                    | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block1__DOT__block0__DOT__p) 
                                                                       & ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__VdfgRegularize_hf246a9bd_1_10) 
                                                                          << 1U)))))) 
                                                          | (1U 
                                                             & (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block1__DOT__block0__DOT__g) 
                                                                 >> 1U) 
                                                                | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__VdfgRegularize_hf246a9bd_1_9) 
                                                                   | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block1__DOT__block0__DOT__p) 
                                                                       >> 1U) 
                                                                      & (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0)))))) 
                                                         << 2U) 
                                                        | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__VdfgRegularize_hf246a9bd_1_10) 
                                                            << 1U) 
                                                           | (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block1__DOT__block0__DOT__cin)))))) 
                                                << 0x00000010U) 
                                               | (((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block0__DOT__block3__DOT__p) 
                                                     ^ 
                                                     ((((2U 
                                                         & (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block0__DOT__block3__DOT__g) 
                                                             >> 1U) 
                                                            | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block0__DOT__block3__DOT__p) 
                                                                >> 1U) 
                                                               & ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block0__DOT__block3__DOT__g) 
                                                                  | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block0__DOT__block3__DOT__p) 
                                                                     & ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__VdfgRegularize_hf246a9bd_1_8) 
                                                                        << 1U)))))) 
                                                        | (1U 
                                                           & (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block0__DOT__block3__DOT__g) 
                                                               >> 1U) 
                                                              | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__VdfgRegularize_hf246a9bd_1_7) 
                                                                 | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block0__DOT__block3__DOT__p) 
                                                                     >> 1U) 
                                                                    & (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0)))))) 
                                                       << 2U) 
                                                      | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__VdfgRegularize_hf246a9bd_1_8) 
                                                          << 1U) 
                                                         | (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block0__DOT__block3__DOT__cin)))) 
                                                    << 0x0000000cU) 
                                                   | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block0__DOT__block2__DOT__p) 
                                                       ^ 
                                                       ((((2U 
                                                           & (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block0__DOT__block2__DOT__g) 
                                                               >> 1U) 
                                                              | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block0__DOT__block2__DOT__p) 
                                                                  >> 1U) 
                                                                 & ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block0__DOT__block2__DOT__g) 
                                                                    | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block0__DOT__block2__DOT__p) 
                                                                       & ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__VdfgRegularize_hf246a9bd_1_6) 
                                                                          << 1U)))))) 
                                                          | (1U 
                                                             & (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block0__DOT__block2__DOT__g) 
                                                                 >> 1U) 
                                                                | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__VdfgRegularize_hf246a9bd_1_5) 
                                                                   | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block0__DOT__block2__DOT__p) 
                                                                       >> 1U) 
                                                                      & (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0)))))) 
                                                         << 2U) 
                                                        | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__VdfgRegularize_hf246a9bd_1_6) 
                                                            << 1U) 
                                                           | (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block0__DOT__block2__DOT__cin)))) 
                                                      << 8U)) 
                                                  | ((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block0__DOT__block1__DOT__p) 
                                                       ^ 
                                                       ((((2U 
                                                           & (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block0__DOT__block1__DOT__g) 
                                                               >> 1U) 
                                                              | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block0__DOT__block1__DOT__p) 
                                                                  >> 1U) 
                                                                 & ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block0__DOT__block1__DOT__g) 
                                                                    | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block0__DOT__block1__DOT__p) 
                                                                       & ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__VdfgRegularize_hf246a9bd_1_4) 
                                                                          << 1U)))))) 
                                                          | (1U 
                                                             & (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block0__DOT__block1__DOT__g) 
                                                                 >> 1U) 
                                                                | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__VdfgRegularize_hf246a9bd_1_3) 
                                                                   | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block0__DOT__block1__DOT__p) 
                                                                       >> 1U) 
                                                                      & (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0)))))) 
                                                         << 2U) 
                                                        | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__VdfgRegularize_hf246a9bd_1_4) 
                                                            << 1U) 
                                                           | (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block0__DOT__block1__DOT__cin)))) 
                                                      << 4U) 
                                                     | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block0__DOT__block0__DOT__p) 
                                                        ^ 
                                                        ((((2U 
                                                            & (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block0__DOT__block0__DOT__g) 
                                                                >> 1U) 
                                                               | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block0__DOT__block0__DOT__p) 
                                                                   >> 1U) 
                                                                  & ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block0__DOT__block0__DOT__g) 
                                                                     | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block0__DOT__block0__DOT__p) 
                                                                        & ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__VdfgRegularize_hf246a9bd_1_2) 
                                                                           << 1U)))))) 
                                                           | (1U 
                                                              & (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block0__DOT__block0__DOT__g) 
                                                                  >> 1U) 
                                                                 | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__VdfgRegularize_hf246a9bd_1_1) 
                                                                    | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__PVT__block0__DOT__block0__DOT__p) 
                                                                        >> 1U) 
                                                                       & (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0)))))) 
                                                          << 2U) 
                                                         | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst.__VdfgRegularize_hf246a9bd_1_2) 
                                                             << 1U) 
                                                            | (8U 
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
            : (((QData)((IData)((((((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block3__DOT__block3__DOT__p) 
                                      ^ ((((2U & (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block3__DOT__block3__DOT__g) 
                                                   >> 1U) 
                                                  | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block3__DOT__block3__DOT__p) 
                                                      >> 1U) 
                                                     & ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block3__DOT__block3__DOT__g) 
                                                        | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block3__DOT__block3__DOT__p) 
                                                           & ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__VdfgRegularize_hf246a9bd_1_32) 
                                                              << 1U)))))) 
                                           | (1U & 
                                              (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block3__DOT__block3__DOT__g) 
                                                >> 1U) 
                                               | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__VdfgRegularize_hf246a9bd_1_31) 
                                                  | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block3__DOT__block3__DOT__p) 
                                                      >> 1U) 
                                                     & (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0)))))) 
                                          << 2U) | 
                                         (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__VdfgRegularize_hf246a9bd_1_32) 
                                           << 1U) | (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block3__DOT__block3__DOT__cin)))) 
                                     << 0x0000000cU) 
                                    | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block3__DOT__block2__DOT__p) 
                                        ^ ((((2U & 
                                              (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block3__DOT__block2__DOT__g) 
                                                >> 1U) 
                                               | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block3__DOT__block2__DOT__p) 
                                                   >> 1U) 
                                                  & ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block3__DOT__block2__DOT__g) 
                                                     | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block3__DOT__block2__DOT__p) 
                                                        & ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__VdfgRegularize_hf246a9bd_1_30) 
                                                           << 1U)))))) 
                                             | (1U 
                                                & (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block3__DOT__block2__DOT__g) 
                                                    >> 1U) 
                                                   | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__VdfgRegularize_hf246a9bd_1_29) 
                                                      | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block3__DOT__block2__DOT__p) 
                                                          >> 1U) 
                                                         & (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0)))))) 
                                            << 2U) 
                                           | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__VdfgRegularize_hf246a9bd_1_30) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block3__DOT__block2__DOT__cin)))) 
                                       << 8U)) | ((
                                                   ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block3__DOT__block1__DOT__p) 
                                                    ^ 
                                                    ((((2U 
                                                        & (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block3__DOT__block1__DOT__g) 
                                                            >> 1U) 
                                                           | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block3__DOT__block1__DOT__p) 
                                                               >> 1U) 
                                                              & ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block3__DOT__block1__DOT__g) 
                                                                 | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block3__DOT__block1__DOT__p) 
                                                                    & ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__VdfgRegularize_hf246a9bd_1_28) 
                                                                       << 1U)))))) 
                                                       | (1U 
                                                          & (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block3__DOT__block1__DOT__g) 
                                                              >> 1U) 
                                                             | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__VdfgRegularize_hf246a9bd_1_27) 
                                                                | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block3__DOT__block1__DOT__p) 
                                                                    >> 1U) 
                                                                   & (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0)))))) 
                                                      << 2U) 
                                                     | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__VdfgRegularize_hf246a9bd_1_28) 
                                                         << 1U) 
                                                        | (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block3__DOT__block1__DOT__cin)))) 
                                                   << 4U) 
                                                  | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block3__DOT__block0__DOT__p) 
                                                     ^ 
                                                     ((((2U 
                                                         & (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block3__DOT__block0__DOT__g) 
                                                             >> 1U) 
                                                            | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block3__DOT__block0__DOT__p) 
                                                                >> 1U) 
                                                               & ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block3__DOT__block0__DOT__g) 
                                                                  | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block3__DOT__block0__DOT__p) 
                                                                     & ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__VdfgRegularize_hf246a9bd_1_26) 
                                                                        << 1U)))))) 
                                                        | (1U 
                                                           & (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block3__DOT__block0__DOT__g) 
                                                               >> 1U) 
                                                              | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__VdfgRegularize_hf246a9bd_1_25) 
                                                                 | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block3__DOT__block0__DOT__p) 
                                                                     >> 1U) 
                                                                    & (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0)))))) 
                                                       << 2U) 
                                                      | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__VdfgRegularize_hf246a9bd_1_26) 
                                                          << 1U) 
                                                         | (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block3__DOT__block0__DOT__cin)))))) 
                                  << 0x00000010U) | 
                                 (((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block2__DOT__block3__DOT__p) 
                                     ^ ((((2U & (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block2__DOT__block3__DOT__g) 
                                                  >> 1U) 
                                                 | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block2__DOT__block3__DOT__p) 
                                                     >> 1U) 
                                                    & ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block2__DOT__block3__DOT__g) 
                                                       | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block2__DOT__block3__DOT__p) 
                                                          & ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__VdfgRegularize_hf246a9bd_1_24) 
                                                             << 1U)))))) 
                                          | (1U & (
                                                   ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block2__DOT__block3__DOT__g) 
                                                    >> 1U) 
                                                   | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__VdfgRegularize_hf246a9bd_1_23) 
                                                      | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block2__DOT__block3__DOT__p) 
                                                          >> 1U) 
                                                         & (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0)))))) 
                                         << 2U) | (
                                                   ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__VdfgRegularize_hf246a9bd_1_24) 
                                                    << 1U) 
                                                   | (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block2__DOT__block3__DOT__cin)))) 
                                    << 0x0000000cU) 
                                   | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block2__DOT__block2__DOT__p) 
                                       ^ ((((2U & (
                                                   ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block2__DOT__block2__DOT__g) 
                                                    >> 1U) 
                                                   | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block2__DOT__block2__DOT__p) 
                                                       >> 1U) 
                                                      & ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block2__DOT__block2__DOT__g) 
                                                         | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block2__DOT__block2__DOT__p) 
                                                            & ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__VdfgRegularize_hf246a9bd_1_22) 
                                                               << 1U)))))) 
                                            | (1U & 
                                               (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block2__DOT__block2__DOT__g) 
                                                 >> 1U) 
                                                | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__VdfgRegularize_hf246a9bd_1_21) 
                                                   | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block2__DOT__block2__DOT__p) 
                                                       >> 1U) 
                                                      & (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0)))))) 
                                           << 2U) | 
                                          (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__VdfgRegularize_hf246a9bd_1_22) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block2__DOT__block2__DOT__cin)))) 
                                      << 8U)) | ((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block2__DOT__block1__DOT__p) 
                                                   ^ 
                                                   ((((2U 
                                                       & (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block2__DOT__block1__DOT__g) 
                                                           >> 1U) 
                                                          | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block2__DOT__block1__DOT__p) 
                                                              >> 1U) 
                                                             & ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block2__DOT__block1__DOT__g) 
                                                                | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block2__DOT__block1__DOT__p) 
                                                                   & ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__VdfgRegularize_hf246a9bd_1_20) 
                                                                      << 1U)))))) 
                                                      | (1U 
                                                         & (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block2__DOT__block1__DOT__g) 
                                                             >> 1U) 
                                                            | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__VdfgRegularize_hf246a9bd_1_19) 
                                                               | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block2__DOT__block1__DOT__p) 
                                                                   >> 1U) 
                                                                  & (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0)))))) 
                                                     << 2U) 
                                                    | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__VdfgRegularize_hf246a9bd_1_20) 
                                                        << 1U) 
                                                       | (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block2__DOT__block1__DOT__cin)))) 
                                                  << 4U) 
                                                 | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block2__DOT__block0__DOT__p) 
                                                    ^ 
                                                    ((((2U 
                                                        & (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block2__DOT__block0__DOT__g) 
                                                            >> 1U) 
                                                           | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block2__DOT__block0__DOT__p) 
                                                               >> 1U) 
                                                              & ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block2__DOT__block0__DOT__g) 
                                                                 | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block2__DOT__block0__DOT__p) 
                                                                    & ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__VdfgRegularize_hf246a9bd_1_18) 
                                                                       << 1U)))))) 
                                                       | (1U 
                                                          & (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block2__DOT__block0__DOT__g) 
                                                              >> 1U) 
                                                             | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__VdfgRegularize_hf246a9bd_1_17) 
                                                                | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block2__DOT__block0__DOT__p) 
                                                                    >> 1U) 
                                                                   & (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0)))))) 
                                                      << 2U) 
                                                     | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__VdfgRegularize_hf246a9bd_1_18) 
                                                         << 1U) 
                                                        | (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block2__DOT__block0__DOT__cin))))))))) 
                << 0x00000020U) | (QData)((IData)((
                                                   ((((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block1__DOT__block3__DOT__p) 
                                                        ^ 
                                                        ((((2U 
                                                            & (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block1__DOT__block3__DOT__g) 
                                                                >> 1U) 
                                                               | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block1__DOT__block3__DOT__p) 
                                                                   >> 1U) 
                                                                  & ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block1__DOT__block3__DOT__g) 
                                                                     | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block1__DOT__block3__DOT__p) 
                                                                        & ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__VdfgRegularize_hf246a9bd_1_16) 
                                                                           << 1U)))))) 
                                                           | (1U 
                                                              & (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block1__DOT__block3__DOT__g) 
                                                                  >> 1U) 
                                                                 | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__VdfgRegularize_hf246a9bd_1_15) 
                                                                    | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block1__DOT__block3__DOT__p) 
                                                                        >> 1U) 
                                                                       & (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0)))))) 
                                                          << 2U) 
                                                         | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__VdfgRegularize_hf246a9bd_1_16) 
                                                             << 1U) 
                                                            | (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block1__DOT__block3__DOT__cin)))) 
                                                       << 0x0000000cU) 
                                                      | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block1__DOT__block2__DOT__p) 
                                                          ^ 
                                                          ((((2U 
                                                              & (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block1__DOT__block2__DOT__g) 
                                                                  >> 1U) 
                                                                 | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block1__DOT__block2__DOT__p) 
                                                                     >> 1U) 
                                                                    & ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block1__DOT__block2__DOT__g) 
                                                                       | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block1__DOT__block2__DOT__p) 
                                                                          & ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__VdfgRegularize_hf246a9bd_1_14) 
                                                                             << 1U)))))) 
                                                             | (1U 
                                                                & (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block1__DOT__block2__DOT__g) 
                                                                    >> 1U) 
                                                                   | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__VdfgRegularize_hf246a9bd_1_13) 
                                                                      | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block1__DOT__block2__DOT__p) 
                                                                          >> 1U) 
                                                                         & (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0)))))) 
                                                            << 2U) 
                                                           | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__VdfgRegularize_hf246a9bd_1_14) 
                                                               << 1U) 
                                                              | (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block1__DOT__block2__DOT__cin)))) 
                                                         << 8U)) 
                                                     | ((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block1__DOT__block1__DOT__p) 
                                                          ^ 
                                                          ((((2U 
                                                              & (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block1__DOT__block1__DOT__g) 
                                                                  >> 1U) 
                                                                 | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block1__DOT__block1__DOT__p) 
                                                                     >> 1U) 
                                                                    & ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block1__DOT__block1__DOT__g) 
                                                                       | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block1__DOT__block1__DOT__p) 
                                                                          & ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__VdfgRegularize_hf246a9bd_1_12) 
                                                                             << 1U)))))) 
                                                             | (1U 
                                                                & (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block1__DOT__block1__DOT__g) 
                                                                    >> 1U) 
                                                                   | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__VdfgRegularize_hf246a9bd_1_11) 
                                                                      | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block1__DOT__block1__DOT__p) 
                                                                          >> 1U) 
                                                                         & (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0)))))) 
                                                            << 2U) 
                                                           | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__VdfgRegularize_hf246a9bd_1_12) 
                                                               << 1U) 
                                                              | (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block1__DOT__block1__DOT__cin)))) 
                                                         << 4U) 
                                                        | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block1__DOT__block0__DOT__p) 
                                                           ^ 
                                                           ((((2U 
                                                               & (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block1__DOT__block0__DOT__g) 
                                                                   >> 1U) 
                                                                  | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block1__DOT__block0__DOT__p) 
                                                                      >> 1U) 
                                                                     & ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block1__DOT__block0__DOT__g) 
                                                                        | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block1__DOT__block0__DOT__p) 
                                                                           & ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__VdfgRegularize_hf246a9bd_1_10) 
                                                                              << 1U)))))) 
                                                              | (1U 
                                                                 & (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block1__DOT__block0__DOT__g) 
                                                                     >> 1U) 
                                                                    | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__VdfgRegularize_hf246a9bd_1_9) 
                                                                       | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block1__DOT__block0__DOT__p) 
                                                                           >> 1U) 
                                                                          & (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0)))))) 
                                                             << 2U) 
                                                            | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__VdfgRegularize_hf246a9bd_1_10) 
                                                                << 1U) 
                                                               | (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block1__DOT__block0__DOT__cin)))))) 
                                                    << 0x00000010U) 
                                                   | (((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block0__DOT__block3__DOT__p) 
                                                         ^ 
                                                         ((((2U 
                                                             & (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block0__DOT__block3__DOT__g) 
                                                                 >> 1U) 
                                                                | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block0__DOT__block3__DOT__p) 
                                                                    >> 1U) 
                                                                   & ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block0__DOT__block3__DOT__g) 
                                                                      | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block0__DOT__block3__DOT__p) 
                                                                         & ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__VdfgRegularize_hf246a9bd_1_8) 
                                                                            << 1U)))))) 
                                                            | (1U 
                                                               & (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block0__DOT__block3__DOT__g) 
                                                                   >> 1U) 
                                                                  | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__VdfgRegularize_hf246a9bd_1_7) 
                                                                     | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block0__DOT__block3__DOT__p) 
                                                                         >> 1U) 
                                                                        & (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0)))))) 
                                                           << 2U) 
                                                          | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__VdfgRegularize_hf246a9bd_1_8) 
                                                              << 1U) 
                                                             | (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block0__DOT__block3__DOT__cin)))) 
                                                        << 0x0000000cU) 
                                                       | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block0__DOT__block2__DOT__p) 
                                                           ^ 
                                                           ((((2U 
                                                               & (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block0__DOT__block2__DOT__g) 
                                                                   >> 1U) 
                                                                  | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block0__DOT__block2__DOT__p) 
                                                                      >> 1U) 
                                                                     & ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block0__DOT__block2__DOT__g) 
                                                                        | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block0__DOT__block2__DOT__p) 
                                                                           & ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__VdfgRegularize_hf246a9bd_1_6) 
                                                                              << 1U)))))) 
                                                              | (1U 
                                                                 & (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block0__DOT__block2__DOT__g) 
                                                                     >> 1U) 
                                                                    | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__VdfgRegularize_hf246a9bd_1_5) 
                                                                       | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block0__DOT__block2__DOT__p) 
                                                                           >> 1U) 
                                                                          & (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0)))))) 
                                                             << 2U) 
                                                            | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__VdfgRegularize_hf246a9bd_1_6) 
                                                                << 1U) 
                                                               | (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block0__DOT__block2__DOT__cin)))) 
                                                          << 8U)) 
                                                      | ((((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block0__DOT__block1__DOT__p) 
                                                           ^ 
                                                           ((((2U 
                                                               & (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block0__DOT__block1__DOT__g) 
                                                                   >> 1U) 
                                                                  | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block0__DOT__block1__DOT__p) 
                                                                      >> 1U) 
                                                                     & ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block0__DOT__block1__DOT__g) 
                                                                        | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block0__DOT__block1__DOT__p) 
                                                                           & ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__VdfgRegularize_hf246a9bd_1_4) 
                                                                              << 1U)))))) 
                                                              | (1U 
                                                                 & (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block0__DOT__block1__DOT__g) 
                                                                     >> 1U) 
                                                                    | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__VdfgRegularize_hf246a9bd_1_3) 
                                                                       | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block0__DOT__block1__DOT__p) 
                                                                           >> 1U) 
                                                                          & (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0)))))) 
                                                             << 2U) 
                                                            | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__VdfgRegularize_hf246a9bd_1_4) 
                                                                << 1U) 
                                                               | (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block0__DOT__g__BRA__0__KET__)))) 
                                                          << 4U) 
                                                         | ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block0__DOT__block0__DOT__p) 
                                                            ^ 
                                                            ((((2U 
                                                                & (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block0__DOT__block0__DOT__g) 
                                                                    >> 1U) 
                                                                   | (((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block0__DOT__block0__DOT__p) 
                                                                       >> 1U) 
                                                                      & ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__VdfgRegularize_h6e95ff9d_0_21) 
                                                                         << 1U)))) 
                                                               | (IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__VdfgRegularize_h6e95ff9d_0_21)) 
                                                              << 2U) 
                                                             | (2U 
                                                                & ((IData)(vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__PVT__block0__DOT__block0__DOT__g) 
                                                                   << 1U)))))))))));
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

void Vsoc_top_cla_64b___nba_sequent__TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst__0(Vsoc_top_cla_64b* vlSelf);
void Vsoc_top_cla_64b___nba_sequent__TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst__0(Vsoc_top_cla_64b* vlSelf);
void Vsoc_top_cla_64b___nba_sequent__TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst__0(Vsoc_top_cla_64b* vlSelf);

VL_ATTR_COLD void Vsoc_top___024root___eval_stl(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___eval_stl\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vsoc_top___024root___stl_sequent__TOP__0(vlSelf);
        Vsoc_top_cla_64b___nba_sequent__TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst__0((&vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst));
        Vsoc_top_cla_64b___nba_sequent__TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst__0((&vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst));
        Vsoc_top_cla_64b___nba_sequent__TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst__0((&vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst));
        Vsoc_top___024root___stl_sequent__TOP__1(vlSelf);
    }
}

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
    vlSelf->dbg_vga_addr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13476769968086005431ull);
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
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2908407524107644497ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__mul_signed, __VscopeHash, 584098491858392998ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__mstatus = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10396784424992478413ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__mcause = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16325489900447303022ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__mie = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13013270803106044632ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__mscratch = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11912057086079745705ull);
    for (int __Vi0 = 0; __Vi0 < 16777216; ++__Vi0) {
        vlSelf->soc_top__DOT__u_ram__DOT__memory[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 552268067303732870ull);
    }
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
    for (int __Vi0 = 0; __Vi0 < 65536; ++__Vi0) {
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
