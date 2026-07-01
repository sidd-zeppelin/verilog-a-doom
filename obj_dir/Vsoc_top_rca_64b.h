// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsoc_top.h for the primary calling header

#ifndef VERILATED_VSOC_TOP_RCA_64B_H_
#define VERILATED_VSOC_TOP_RCA_64B_H_  // guard

#include "verilated.h"


class Vsoc_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsoc_top_rca_64b final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(cin,0,0);
        VL_OUT8(cout,0,0);
        VL_OUT8(carry_into_msb,0,0);
        CData/*0:0*/ __PVT__rca_gen__BRA__0__KET____DOT__fa_inst__DOT__x1;
        CData/*0:0*/ __PVT__rca_gen__BRA__1__KET____DOT__fa_inst__DOT__cin;
        CData/*0:0*/ __PVT__rca_gen__BRA__1__KET____DOT__fa_inst__DOT__x1;
        CData/*0:0*/ __PVT__rca_gen__BRA__2__KET____DOT__fa_inst__DOT__cin;
        CData/*0:0*/ __PVT__rca_gen__BRA__2__KET____DOT__fa_inst__DOT__x1;
        CData/*0:0*/ __PVT__rca_gen__BRA__3__KET____DOT__fa_inst__DOT__cin;
        CData/*0:0*/ __PVT__rca_gen__BRA__3__KET____DOT__fa_inst__DOT__x1;
        CData/*0:0*/ __PVT__rca_gen__BRA__4__KET____DOT__fa_inst__DOT__cin;
        CData/*0:0*/ __PVT__rca_gen__BRA__4__KET____DOT__fa_inst__DOT__x1;
        CData/*0:0*/ __PVT__rca_gen__BRA__5__KET____DOT__fa_inst__DOT__cin;
        CData/*0:0*/ __PVT__rca_gen__BRA__5__KET____DOT__fa_inst__DOT__x1;
        CData/*0:0*/ __PVT__rca_gen__BRA__6__KET____DOT__fa_inst__DOT__cin;
        CData/*0:0*/ __PVT__rca_gen__BRA__6__KET____DOT__fa_inst__DOT__x1;
        CData/*0:0*/ __PVT__rca_gen__BRA__7__KET____DOT__fa_inst__DOT__cin;
        CData/*0:0*/ __PVT__rca_gen__BRA__7__KET____DOT__fa_inst__DOT__x1;
        CData/*0:0*/ __PVT__rca_gen__BRA__8__KET____DOT__fa_inst__DOT__cin;
        CData/*0:0*/ __PVT__rca_gen__BRA__8__KET____DOT__fa_inst__DOT__x1;
        CData/*0:0*/ __PVT__rca_gen__BRA__9__KET____DOT__fa_inst__DOT__cin;
        CData/*0:0*/ __PVT__rca_gen__BRA__9__KET____DOT__fa_inst__DOT__x1;
        CData/*0:0*/ __PVT__rca_gen__BRA__10__KET____DOT__fa_inst__DOT__cin;
        CData/*0:0*/ __PVT__rca_gen__BRA__10__KET____DOT__fa_inst__DOT__x1;
        CData/*0:0*/ __PVT__rca_gen__BRA__11__KET____DOT__fa_inst__DOT__cin;
        CData/*0:0*/ __PVT__rca_gen__BRA__11__KET____DOT__fa_inst__DOT__x1;
        CData/*0:0*/ __PVT__rca_gen__BRA__12__KET____DOT__fa_inst__DOT__cin;
        CData/*0:0*/ __PVT__rca_gen__BRA__12__KET____DOT__fa_inst__DOT__x1;
        CData/*0:0*/ __PVT__rca_gen__BRA__13__KET____DOT__fa_inst__DOT__cin;
        CData/*0:0*/ __PVT__rca_gen__BRA__13__KET____DOT__fa_inst__DOT__x1;
        CData/*0:0*/ __PVT__rca_gen__BRA__14__KET____DOT__fa_inst__DOT__cin;
        CData/*0:0*/ __PVT__rca_gen__BRA__14__KET____DOT__fa_inst__DOT__x1;
        CData/*0:0*/ __PVT__rca_gen__BRA__15__KET____DOT__fa_inst__DOT__cin;
        CData/*0:0*/ __PVT__rca_gen__BRA__15__KET____DOT__fa_inst__DOT__x1;
        CData/*0:0*/ __PVT__rca_gen__BRA__16__KET____DOT__fa_inst__DOT__cin;
        CData/*0:0*/ __PVT__rca_gen__BRA__16__KET____DOT__fa_inst__DOT__x1;
        CData/*0:0*/ __PVT__rca_gen__BRA__17__KET____DOT__fa_inst__DOT__cin;
        CData/*0:0*/ __PVT__rca_gen__BRA__17__KET____DOT__fa_inst__DOT__x1;
        CData/*0:0*/ __PVT__rca_gen__BRA__18__KET____DOT__fa_inst__DOT__cin;
        CData/*0:0*/ __PVT__rca_gen__BRA__18__KET____DOT__fa_inst__DOT__x1;
        CData/*0:0*/ __PVT__rca_gen__BRA__19__KET____DOT__fa_inst__DOT__cin;
        CData/*0:0*/ __PVT__rca_gen__BRA__19__KET____DOT__fa_inst__DOT__x1;
        CData/*0:0*/ __PVT__rca_gen__BRA__20__KET____DOT__fa_inst__DOT__cin;
        CData/*0:0*/ __PVT__rca_gen__BRA__20__KET____DOT__fa_inst__DOT__x1;
        CData/*0:0*/ __PVT__rca_gen__BRA__21__KET____DOT__fa_inst__DOT__cin;
        CData/*0:0*/ __PVT__rca_gen__BRA__21__KET____DOT__fa_inst__DOT__x1;
        CData/*0:0*/ __PVT__rca_gen__BRA__22__KET____DOT__fa_inst__DOT__cin;
        CData/*0:0*/ __PVT__rca_gen__BRA__22__KET____DOT__fa_inst__DOT__x1;
        CData/*0:0*/ __PVT__rca_gen__BRA__23__KET____DOT__fa_inst__DOT__cin;
        CData/*0:0*/ __PVT__rca_gen__BRA__23__KET____DOT__fa_inst__DOT__x1;
        CData/*0:0*/ __PVT__rca_gen__BRA__24__KET____DOT__fa_inst__DOT__cin;
        CData/*0:0*/ __PVT__rca_gen__BRA__24__KET____DOT__fa_inst__DOT__x1;
        CData/*0:0*/ __PVT__rca_gen__BRA__25__KET____DOT__fa_inst__DOT__cin;
        CData/*0:0*/ __PVT__rca_gen__BRA__25__KET____DOT__fa_inst__DOT__x1;
        CData/*0:0*/ __PVT__rca_gen__BRA__26__KET____DOT__fa_inst__DOT__cin;
        CData/*0:0*/ __PVT__rca_gen__BRA__26__KET____DOT__fa_inst__DOT__x1;
        CData/*0:0*/ __PVT__rca_gen__BRA__27__KET____DOT__fa_inst__DOT__cin;
        CData/*0:0*/ __PVT__rca_gen__BRA__27__KET____DOT__fa_inst__DOT__x1;
        CData/*0:0*/ __PVT__rca_gen__BRA__28__KET____DOT__fa_inst__DOT__cin;
        CData/*0:0*/ __PVT__rca_gen__BRA__28__KET____DOT__fa_inst__DOT__x1;
        CData/*0:0*/ __PVT__rca_gen__BRA__29__KET____DOT__fa_inst__DOT__cin;
        CData/*0:0*/ __PVT__rca_gen__BRA__29__KET____DOT__fa_inst__DOT__x1;
        CData/*0:0*/ __PVT__rca_gen__BRA__30__KET____DOT__fa_inst__DOT__cin;
        CData/*0:0*/ __PVT__rca_gen__BRA__30__KET____DOT__fa_inst__DOT__x1;
    };
    struct {
        CData/*0:0*/ __PVT__rca_gen__BRA__31__KET____DOT__fa_inst__DOT__cin;
        CData/*0:0*/ __PVT__rca_gen__BRA__31__KET____DOT__fa_inst__DOT__x1;
        CData/*0:0*/ __PVT__rca_gen__BRA__32__KET____DOT__fa_inst__DOT__cin;
        CData/*0:0*/ __PVT__rca_gen__BRA__32__KET____DOT__fa_inst__DOT__x1;
        CData/*0:0*/ __PVT__rca_gen__BRA__33__KET____DOT__fa_inst__DOT__cin;
        CData/*0:0*/ __PVT__rca_gen__BRA__33__KET____DOT__fa_inst__DOT__x1;
        CData/*0:0*/ __PVT__rca_gen__BRA__34__KET____DOT__fa_inst__DOT__cin;
        CData/*0:0*/ __PVT__rca_gen__BRA__34__KET____DOT__fa_inst__DOT__x1;
        CData/*0:0*/ __PVT__rca_gen__BRA__35__KET____DOT__fa_inst__DOT__cin;
        CData/*0:0*/ __PVT__rca_gen__BRA__35__KET____DOT__fa_inst__DOT__x1;
        CData/*0:0*/ __PVT__rca_gen__BRA__36__KET____DOT__fa_inst__DOT__cin;
        CData/*0:0*/ __PVT__rca_gen__BRA__36__KET____DOT__fa_inst__DOT__x1;
        CData/*0:0*/ __PVT__rca_gen__BRA__37__KET____DOT__fa_inst__DOT__cin;
        CData/*0:0*/ __PVT__rca_gen__BRA__37__KET____DOT__fa_inst__DOT__x1;
        CData/*0:0*/ __PVT__rca_gen__BRA__38__KET____DOT__fa_inst__DOT__cin;
        CData/*0:0*/ __PVT__rca_gen__BRA__38__KET____DOT__fa_inst__DOT__x1;
        CData/*0:0*/ __PVT__rca_gen__BRA__39__KET____DOT__fa_inst__DOT__cin;
        CData/*0:0*/ __PVT__rca_gen__BRA__39__KET____DOT__fa_inst__DOT__x1;
        CData/*0:0*/ __PVT__rca_gen__BRA__40__KET____DOT__fa_inst__DOT__cin;
        CData/*0:0*/ __PVT__rca_gen__BRA__40__KET____DOT__fa_inst__DOT__x1;
        CData/*0:0*/ __PVT__rca_gen__BRA__41__KET____DOT__fa_inst__DOT__cin;
        CData/*0:0*/ __PVT__rca_gen__BRA__41__KET____DOT__fa_inst__DOT__x1;
        CData/*0:0*/ __PVT__rca_gen__BRA__42__KET____DOT__fa_inst__DOT__cin;
        CData/*0:0*/ __PVT__rca_gen__BRA__42__KET____DOT__fa_inst__DOT__x1;
        CData/*0:0*/ __PVT__rca_gen__BRA__43__KET____DOT__fa_inst__DOT__cin;
        CData/*0:0*/ __PVT__rca_gen__BRA__43__KET____DOT__fa_inst__DOT__x1;
        CData/*0:0*/ __PVT__rca_gen__BRA__44__KET____DOT__fa_inst__DOT__cin;
        CData/*0:0*/ __PVT__rca_gen__BRA__44__KET____DOT__fa_inst__DOT__x1;
        CData/*0:0*/ __PVT__rca_gen__BRA__45__KET____DOT__fa_inst__DOT__cin;
        CData/*0:0*/ __PVT__rca_gen__BRA__45__KET____DOT__fa_inst__DOT__x1;
        CData/*0:0*/ __PVT__rca_gen__BRA__46__KET____DOT__fa_inst__DOT__cin;
        CData/*0:0*/ __PVT__rca_gen__BRA__46__KET____DOT__fa_inst__DOT__x1;
        CData/*0:0*/ __PVT__rca_gen__BRA__47__KET____DOT__fa_inst__DOT__cin;
        CData/*0:0*/ __PVT__rca_gen__BRA__47__KET____DOT__fa_inst__DOT__x1;
        CData/*0:0*/ __PVT__rca_gen__BRA__48__KET____DOT__fa_inst__DOT__cin;
        CData/*0:0*/ __PVT__rca_gen__BRA__48__KET____DOT__fa_inst__DOT__x1;
        CData/*0:0*/ __PVT__rca_gen__BRA__49__KET____DOT__fa_inst__DOT__cin;
        CData/*0:0*/ __PVT__rca_gen__BRA__49__KET____DOT__fa_inst__DOT__x1;
        CData/*0:0*/ __PVT__rca_gen__BRA__50__KET____DOT__fa_inst__DOT__cin;
        CData/*0:0*/ __PVT__rca_gen__BRA__50__KET____DOT__fa_inst__DOT__x1;
        CData/*0:0*/ __PVT__rca_gen__BRA__51__KET____DOT__fa_inst__DOT__cin;
        CData/*0:0*/ __PVT__rca_gen__BRA__51__KET____DOT__fa_inst__DOT__x1;
        CData/*0:0*/ __PVT__rca_gen__BRA__52__KET____DOT__fa_inst__DOT__cin;
        CData/*0:0*/ __PVT__rca_gen__BRA__52__KET____DOT__fa_inst__DOT__x1;
        CData/*0:0*/ __PVT__rca_gen__BRA__53__KET____DOT__fa_inst__DOT__cin;
        CData/*0:0*/ __PVT__rca_gen__BRA__53__KET____DOT__fa_inst__DOT__x1;
        CData/*0:0*/ __PVT__rca_gen__BRA__54__KET____DOT__fa_inst__DOT__cin;
        CData/*0:0*/ __PVT__rca_gen__BRA__54__KET____DOT__fa_inst__DOT__x1;
        CData/*0:0*/ __PVT__rca_gen__BRA__55__KET____DOT__fa_inst__DOT__cin;
        CData/*0:0*/ __PVT__rca_gen__BRA__55__KET____DOT__fa_inst__DOT__x1;
        CData/*0:0*/ __PVT__rca_gen__BRA__56__KET____DOT__fa_inst__DOT__cin;
        CData/*0:0*/ __PVT__rca_gen__BRA__56__KET____DOT__fa_inst__DOT__x1;
        CData/*0:0*/ __PVT__rca_gen__BRA__57__KET____DOT__fa_inst__DOT__cin;
        CData/*0:0*/ __PVT__rca_gen__BRA__57__KET____DOT__fa_inst__DOT__x1;
        CData/*0:0*/ __PVT__rca_gen__BRA__58__KET____DOT__fa_inst__DOT__cin;
        CData/*0:0*/ __PVT__rca_gen__BRA__58__KET____DOT__fa_inst__DOT__x1;
        CData/*0:0*/ __PVT__rca_gen__BRA__59__KET____DOT__fa_inst__DOT__cin;
        CData/*0:0*/ __PVT__rca_gen__BRA__59__KET____DOT__fa_inst__DOT__x1;
        CData/*0:0*/ __PVT__rca_gen__BRA__60__KET____DOT__fa_inst__DOT__cin;
        CData/*0:0*/ __PVT__rca_gen__BRA__60__KET____DOT__fa_inst__DOT__x1;
        CData/*0:0*/ __PVT__rca_gen__BRA__61__KET____DOT__fa_inst__DOT__cin;
        CData/*0:0*/ __PVT__rca_gen__BRA__61__KET____DOT__fa_inst__DOT__x1;
        CData/*0:0*/ __PVT__rca_gen__BRA__62__KET____DOT__fa_inst__DOT__cin;
        CData/*0:0*/ __PVT__rca_gen__BRA__62__KET____DOT__fa_inst__DOT__x1;
    };
    struct {
        CData/*0:0*/ __PVT__rca_gen__BRA__63__KET____DOT__fa_inst__DOT__x1;
        VL_IN64(a,63,0);
        VL_IN64(b,63,0);
        VL_OUT64(sum,63,0);
    };

    // INTERNAL VARIABLES
    Vsoc_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vsoc_top_rca_64b() = default;
    ~Vsoc_top_rca_64b() = default;
    void ctor(Vsoc_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vsoc_top_rca_64b);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
