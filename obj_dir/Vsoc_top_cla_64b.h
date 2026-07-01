// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsoc_top.h for the primary calling header

#ifndef VERILATED_VSOC_TOP_CLA_64B_H_
#define VERILATED_VSOC_TOP_CLA_64B_H_  // guard

#include "verilated.h"


class Vsoc_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsoc_top_cla_64b final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(cin,0,0);
        VL_OUT8(cout,0,0);
        VL_OUT8(carry_into_msb,0,0);
        CData/*0:0*/ __PVT__block0__DOT__g__BRA__0__KET__;
        CData/*3:0*/ __PVT__block0__DOT__block0__DOT__p;
        CData/*3:0*/ __PVT__block0__DOT__block0__DOT__g;
        CData/*0:0*/ block0__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0;
        CData/*0:0*/ __PVT__block0__DOT__block1__DOT__cin;
        CData/*3:0*/ __PVT__block0__DOT__block1__DOT__p;
        CData/*3:0*/ __PVT__block0__DOT__block1__DOT__g;
        CData/*0:0*/ block0__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0;
        CData/*0:0*/ __PVT__block0__DOT__block2__DOT__cin;
        CData/*3:0*/ __PVT__block0__DOT__block2__DOT__p;
        CData/*3:0*/ __PVT__block0__DOT__block2__DOT__g;
        CData/*0:0*/ block0__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0;
        CData/*0:0*/ __PVT__block0__DOT__block3__DOT__cin;
        CData/*3:0*/ __PVT__block0__DOT__block3__DOT__p;
        CData/*3:0*/ __PVT__block0__DOT__block3__DOT__g;
        CData/*0:0*/ block0__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0;
        CData/*0:0*/ __PVT__block1__DOT__block0__DOT__cin;
        CData/*3:0*/ __PVT__block1__DOT__block0__DOT__p;
        CData/*3:0*/ __PVT__block1__DOT__block0__DOT__g;
        CData/*0:0*/ block1__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0;
        CData/*0:0*/ __PVT__block1__DOT__block1__DOT__cin;
        CData/*3:0*/ __PVT__block1__DOT__block1__DOT__p;
        CData/*3:0*/ __PVT__block1__DOT__block1__DOT__g;
        CData/*0:0*/ block1__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0;
        CData/*0:0*/ __PVT__block1__DOT__block2__DOT__cin;
        CData/*3:0*/ __PVT__block1__DOT__block2__DOT__p;
        CData/*3:0*/ __PVT__block1__DOT__block2__DOT__g;
        CData/*0:0*/ block1__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0;
        CData/*0:0*/ __PVT__block1__DOT__block3__DOT__cin;
        CData/*3:0*/ __PVT__block1__DOT__block3__DOT__p;
        CData/*3:0*/ __PVT__block1__DOT__block3__DOT__g;
        CData/*0:0*/ block1__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0;
        CData/*0:0*/ __PVT__block2__DOT__block0__DOT__cin;
        CData/*3:0*/ __PVT__block2__DOT__block0__DOT__p;
        CData/*3:0*/ __PVT__block2__DOT__block0__DOT__g;
        CData/*0:0*/ block2__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0;
        CData/*0:0*/ __PVT__block2__DOT__block1__DOT__cin;
        CData/*3:0*/ __PVT__block2__DOT__block1__DOT__p;
        CData/*3:0*/ __PVT__block2__DOT__block1__DOT__g;
        CData/*0:0*/ block2__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0;
        CData/*0:0*/ __PVT__block2__DOT__block2__DOT__cin;
        CData/*3:0*/ __PVT__block2__DOT__block2__DOT__p;
        CData/*3:0*/ __PVT__block2__DOT__block2__DOT__g;
        CData/*0:0*/ block2__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0;
        CData/*0:0*/ __PVT__block2__DOT__block3__DOT__cin;
        CData/*3:0*/ __PVT__block2__DOT__block3__DOT__p;
        CData/*3:0*/ __PVT__block2__DOT__block3__DOT__g;
        CData/*0:0*/ block2__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0;
        CData/*0:0*/ __PVT__block3__DOT__block0__DOT__cin;
        CData/*3:0*/ __PVT__block3__DOT__block0__DOT__p;
        CData/*3:0*/ __PVT__block3__DOT__block0__DOT__g;
        CData/*0:0*/ block3__DOT__block0__DOT____VdfgRegularize_h0946ca9c_0_0;
        CData/*0:0*/ __PVT__block3__DOT__block1__DOT__cin;
        CData/*3:0*/ __PVT__block3__DOT__block1__DOT__p;
        CData/*3:0*/ __PVT__block3__DOT__block1__DOT__g;
        CData/*0:0*/ block3__DOT__block1__DOT____VdfgRegularize_h0946ca9c_0_0;
        CData/*0:0*/ __PVT__block3__DOT__block2__DOT__cin;
        CData/*3:0*/ __PVT__block3__DOT__block2__DOT__p;
        CData/*3:0*/ __PVT__block3__DOT__block2__DOT__g;
        CData/*0:0*/ block3__DOT__block2__DOT____VdfgRegularize_h0946ca9c_0_0;
        CData/*0:0*/ __PVT__block3__DOT__block3__DOT__cin;
    };
    struct {
        CData/*0:0*/ __PVT__block3__DOT__block3__DOT__c3_out;
        CData/*3:0*/ __PVT__block3__DOT__block3__DOT__p;
        CData/*3:0*/ __PVT__block3__DOT__block3__DOT__g;
        CData/*0:0*/ block3__DOT__block3__DOT____VdfgRegularize_h0946ca9c_0_0;
        CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_1;
        CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_2;
        CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_3;
        CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_4;
        CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_5;
        CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_6;
        CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_7;
        CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_8;
        CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_9;
        CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_10;
        CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_11;
        CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_12;
        CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_13;
        CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_14;
        CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_15;
        CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_16;
        CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_17;
        CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_18;
        CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_19;
        CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_20;
        CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_21;
        CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_22;
        CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_23;
        CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_24;
        CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_25;
        CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_26;
        CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_27;
        CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_28;
        CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_29;
        CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_30;
        CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_31;
        CData/*0:0*/ __VdfgRegularize_hf246a9bd_1_32;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_5;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_6;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_7;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_9;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_10;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_11;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_12;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_13;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_14;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_15;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_16;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_17;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_18;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_19;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_20;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_21;
        VL_IN64(a,63,0);
        VL_IN64(b,63,0);
        VL_OUT64(sum,63,0);
    };

    // INTERNAL VARIABLES
    Vsoc_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vsoc_top_cla_64b() = default;
    ~Vsoc_top_cla_64b() = default;
    void ctor(Vsoc_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vsoc_top_cla_64b);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
