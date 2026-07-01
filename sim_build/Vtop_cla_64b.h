// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_CLA_64B_H_
#define VERILATED_VTOP_CLA_64B_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_cla_64b final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(cin,0,0);
        VL_OUT8(cout,0,0);
        VL_OUT8(carry_into_msb,0,0);
        CData/*3:0*/ p;
        CData/*3:0*/ g;
        CData/*4:0*/ c;
        CData/*0:0*/ c63_from_last;
        CData/*0:0*/ block0__DOT__cin;
        CData/*0:0*/ block0__DOT__g_out;
        CData/*0:0*/ block0__DOT__p_out;
        CData/*0:0*/ block0__DOT__c15_out;
        CData/*3:0*/ block0__DOT__p;
        CData/*3:0*/ block0__DOT__g;
        CData/*4:0*/ block0__DOT__c;
        CData/*0:0*/ block0__DOT__c3_from_last;
        CData/*3:0*/ block0__DOT__block0__DOT__a;
        CData/*3:0*/ block0__DOT__block0__DOT__b;
        CData/*0:0*/ block0__DOT__block0__DOT__cin;
        CData/*3:0*/ block0__DOT__block0__DOT__sum;
        CData/*0:0*/ block0__DOT__block0__DOT__g_out;
        CData/*0:0*/ block0__DOT__block0__DOT__p_out;
        CData/*0:0*/ block0__DOT__block0__DOT__c3_out;
        CData/*3:0*/ block0__DOT__block0__DOT__p;
        CData/*3:0*/ block0__DOT__block0__DOT__g;
        CData/*4:0*/ block0__DOT__block0__DOT__c;
        CData/*3:0*/ block0__DOT__block1__DOT__a;
        CData/*3:0*/ block0__DOT__block1__DOT__b;
        CData/*0:0*/ block0__DOT__block1__DOT__cin;
        CData/*3:0*/ block0__DOT__block1__DOT__sum;
        CData/*0:0*/ block0__DOT__block1__DOT__g_out;
        CData/*0:0*/ block0__DOT__block1__DOT__p_out;
        CData/*0:0*/ block0__DOT__block1__DOT__c3_out;
        CData/*3:0*/ block0__DOT__block1__DOT__p;
        CData/*3:0*/ block0__DOT__block1__DOT__g;
        CData/*4:0*/ block0__DOT__block1__DOT__c;
        CData/*3:0*/ block0__DOT__block2__DOT__a;
        CData/*3:0*/ block0__DOT__block2__DOT__b;
        CData/*0:0*/ block0__DOT__block2__DOT__cin;
        CData/*3:0*/ block0__DOT__block2__DOT__sum;
        CData/*0:0*/ block0__DOT__block2__DOT__g_out;
        CData/*0:0*/ block0__DOT__block2__DOT__p_out;
        CData/*0:0*/ block0__DOT__block2__DOT__c3_out;
        CData/*3:0*/ block0__DOT__block2__DOT__p;
        CData/*3:0*/ block0__DOT__block2__DOT__g;
        CData/*4:0*/ block0__DOT__block2__DOT__c;
        CData/*3:0*/ block0__DOT__block3__DOT__a;
        CData/*3:0*/ block0__DOT__block3__DOT__b;
        CData/*0:0*/ block0__DOT__block3__DOT__cin;
        CData/*3:0*/ block0__DOT__block3__DOT__sum;
        CData/*0:0*/ block0__DOT__block3__DOT__g_out;
        CData/*0:0*/ block0__DOT__block3__DOT__p_out;
        CData/*0:0*/ block0__DOT__block3__DOT__c3_out;
        CData/*3:0*/ block0__DOT__block3__DOT__p;
        CData/*3:0*/ block0__DOT__block3__DOT__g;
        CData/*4:0*/ block0__DOT__block3__DOT__c;
        CData/*0:0*/ block1__DOT__cin;
        CData/*0:0*/ block1__DOT__g_out;
        CData/*0:0*/ block1__DOT__p_out;
        CData/*0:0*/ block1__DOT__c15_out;
        CData/*3:0*/ block1__DOT__p;
        CData/*3:0*/ block1__DOT__g;
        CData/*4:0*/ block1__DOT__c;
        CData/*0:0*/ block1__DOT__c3_from_last;
        CData/*3:0*/ block1__DOT__block0__DOT__a;
    };
    struct {
        CData/*3:0*/ block1__DOT__block0__DOT__b;
        CData/*0:0*/ block1__DOT__block0__DOT__cin;
        CData/*3:0*/ block1__DOT__block0__DOT__sum;
        CData/*0:0*/ block1__DOT__block0__DOT__g_out;
        CData/*0:0*/ block1__DOT__block0__DOT__p_out;
        CData/*0:0*/ block1__DOT__block0__DOT__c3_out;
        CData/*3:0*/ block1__DOT__block0__DOT__p;
        CData/*3:0*/ block1__DOT__block0__DOT__g;
        CData/*4:0*/ block1__DOT__block0__DOT__c;
        CData/*3:0*/ block1__DOT__block1__DOT__a;
        CData/*3:0*/ block1__DOT__block1__DOT__b;
        CData/*0:0*/ block1__DOT__block1__DOT__cin;
        CData/*3:0*/ block1__DOT__block1__DOT__sum;
        CData/*0:0*/ block1__DOT__block1__DOT__g_out;
        CData/*0:0*/ block1__DOT__block1__DOT__p_out;
        CData/*0:0*/ block1__DOT__block1__DOT__c3_out;
        CData/*3:0*/ block1__DOT__block1__DOT__p;
        CData/*3:0*/ block1__DOT__block1__DOT__g;
        CData/*4:0*/ block1__DOT__block1__DOT__c;
        CData/*3:0*/ block1__DOT__block2__DOT__a;
        CData/*3:0*/ block1__DOT__block2__DOT__b;
        CData/*0:0*/ block1__DOT__block2__DOT__cin;
        CData/*3:0*/ block1__DOT__block2__DOT__sum;
        CData/*0:0*/ block1__DOT__block2__DOT__g_out;
        CData/*0:0*/ block1__DOT__block2__DOT__p_out;
        CData/*0:0*/ block1__DOT__block2__DOT__c3_out;
        CData/*3:0*/ block1__DOT__block2__DOT__p;
        CData/*3:0*/ block1__DOT__block2__DOT__g;
        CData/*4:0*/ block1__DOT__block2__DOT__c;
        CData/*3:0*/ block1__DOT__block3__DOT__a;
        CData/*3:0*/ block1__DOT__block3__DOT__b;
        CData/*0:0*/ block1__DOT__block3__DOT__cin;
        CData/*3:0*/ block1__DOT__block3__DOT__sum;
        CData/*0:0*/ block1__DOT__block3__DOT__g_out;
        CData/*0:0*/ block1__DOT__block3__DOT__p_out;
        CData/*0:0*/ block1__DOT__block3__DOT__c3_out;
        CData/*3:0*/ block1__DOT__block3__DOT__p;
        CData/*3:0*/ block1__DOT__block3__DOT__g;
        CData/*4:0*/ block1__DOT__block3__DOT__c;
        CData/*0:0*/ block2__DOT__cin;
        CData/*0:0*/ block2__DOT__g_out;
        CData/*0:0*/ block2__DOT__p_out;
        CData/*0:0*/ block2__DOT__c15_out;
        CData/*3:0*/ block2__DOT__p;
        CData/*3:0*/ block2__DOT__g;
        CData/*4:0*/ block2__DOT__c;
        CData/*0:0*/ block2__DOT__c3_from_last;
        CData/*3:0*/ block2__DOT__block0__DOT__a;
        CData/*3:0*/ block2__DOT__block0__DOT__b;
        CData/*0:0*/ block2__DOT__block0__DOT__cin;
        CData/*3:0*/ block2__DOT__block0__DOT__sum;
        CData/*0:0*/ block2__DOT__block0__DOT__g_out;
        CData/*0:0*/ block2__DOT__block0__DOT__p_out;
        CData/*0:0*/ block2__DOT__block0__DOT__c3_out;
        CData/*3:0*/ block2__DOT__block0__DOT__p;
        CData/*3:0*/ block2__DOT__block0__DOT__g;
        CData/*4:0*/ block2__DOT__block0__DOT__c;
        CData/*3:0*/ block2__DOT__block1__DOT__a;
        CData/*3:0*/ block2__DOT__block1__DOT__b;
        CData/*0:0*/ block2__DOT__block1__DOT__cin;
        CData/*3:0*/ block2__DOT__block1__DOT__sum;
        CData/*0:0*/ block2__DOT__block1__DOT__g_out;
        CData/*0:0*/ block2__DOT__block1__DOT__p_out;
        CData/*0:0*/ block2__DOT__block1__DOT__c3_out;
    };
    struct {
        CData/*3:0*/ block2__DOT__block1__DOT__p;
        CData/*3:0*/ block2__DOT__block1__DOT__g;
        CData/*4:0*/ block2__DOT__block1__DOT__c;
        CData/*3:0*/ block2__DOT__block2__DOT__a;
        CData/*3:0*/ block2__DOT__block2__DOT__b;
        CData/*0:0*/ block2__DOT__block2__DOT__cin;
        CData/*3:0*/ block2__DOT__block2__DOT__sum;
        CData/*0:0*/ block2__DOT__block2__DOT__g_out;
        CData/*0:0*/ block2__DOT__block2__DOT__p_out;
        CData/*0:0*/ block2__DOT__block2__DOT__c3_out;
        CData/*3:0*/ block2__DOT__block2__DOT__p;
        CData/*3:0*/ block2__DOT__block2__DOT__g;
        CData/*4:0*/ block2__DOT__block2__DOT__c;
        CData/*3:0*/ block2__DOT__block3__DOT__a;
        CData/*3:0*/ block2__DOT__block3__DOT__b;
        CData/*0:0*/ block2__DOT__block3__DOT__cin;
        CData/*3:0*/ block2__DOT__block3__DOT__sum;
        CData/*0:0*/ block2__DOT__block3__DOT__g_out;
        CData/*0:0*/ block2__DOT__block3__DOT__p_out;
        CData/*0:0*/ block2__DOT__block3__DOT__c3_out;
        CData/*3:0*/ block2__DOT__block3__DOT__p;
        CData/*3:0*/ block2__DOT__block3__DOT__g;
        CData/*4:0*/ block2__DOT__block3__DOT__c;
        CData/*0:0*/ block3__DOT__cin;
        CData/*0:0*/ block3__DOT__g_out;
        CData/*0:0*/ block3__DOT__p_out;
        CData/*0:0*/ block3__DOT__c15_out;
        CData/*3:0*/ block3__DOT__p;
        CData/*3:0*/ block3__DOT__g;
        CData/*4:0*/ block3__DOT__c;
        CData/*0:0*/ block3__DOT__c3_from_last;
        CData/*3:0*/ block3__DOT__block0__DOT__a;
        CData/*3:0*/ block3__DOT__block0__DOT__b;
        CData/*0:0*/ block3__DOT__block0__DOT__cin;
        CData/*3:0*/ block3__DOT__block0__DOT__sum;
        CData/*0:0*/ block3__DOT__block0__DOT__g_out;
        CData/*0:0*/ block3__DOT__block0__DOT__p_out;
        CData/*0:0*/ block3__DOT__block0__DOT__c3_out;
        CData/*3:0*/ block3__DOT__block0__DOT__p;
        CData/*3:0*/ block3__DOT__block0__DOT__g;
        CData/*4:0*/ block3__DOT__block0__DOT__c;
        CData/*3:0*/ block3__DOT__block1__DOT__a;
        CData/*3:0*/ block3__DOT__block1__DOT__b;
        CData/*0:0*/ block3__DOT__block1__DOT__cin;
        CData/*3:0*/ block3__DOT__block1__DOT__sum;
        CData/*0:0*/ block3__DOT__block1__DOT__g_out;
        CData/*0:0*/ block3__DOT__block1__DOT__p_out;
        CData/*0:0*/ block3__DOT__block1__DOT__c3_out;
        CData/*3:0*/ block3__DOT__block1__DOT__p;
        CData/*3:0*/ block3__DOT__block1__DOT__g;
        CData/*4:0*/ block3__DOT__block1__DOT__c;
        CData/*3:0*/ block3__DOT__block2__DOT__a;
        CData/*3:0*/ block3__DOT__block2__DOT__b;
        CData/*0:0*/ block3__DOT__block2__DOT__cin;
        CData/*3:0*/ block3__DOT__block2__DOT__sum;
        CData/*0:0*/ block3__DOT__block2__DOT__g_out;
        CData/*0:0*/ block3__DOT__block2__DOT__p_out;
        CData/*0:0*/ block3__DOT__block2__DOT__c3_out;
        CData/*3:0*/ block3__DOT__block2__DOT__p;
        CData/*3:0*/ block3__DOT__block2__DOT__g;
        CData/*4:0*/ block3__DOT__block2__DOT__c;
        CData/*3:0*/ block3__DOT__block3__DOT__a;
        CData/*3:0*/ block3__DOT__block3__DOT__b;
        CData/*0:0*/ block3__DOT__block3__DOT__cin;
    };
    struct {
        CData/*3:0*/ block3__DOT__block3__DOT__sum;
        CData/*0:0*/ block3__DOT__block3__DOT__g_out;
        CData/*0:0*/ block3__DOT__block3__DOT__p_out;
        CData/*0:0*/ block3__DOT__block3__DOT__c3_out;
        CData/*3:0*/ block3__DOT__block3__DOT__p;
        CData/*3:0*/ block3__DOT__block3__DOT__g;
        CData/*4:0*/ block3__DOT__block3__DOT__c;
        SData/*15:0*/ block0__DOT__a;
        SData/*15:0*/ block0__DOT__b;
        SData/*15:0*/ block0__DOT__sum;
        SData/*15:0*/ block1__DOT__a;
        SData/*15:0*/ block1__DOT__b;
        SData/*15:0*/ block1__DOT__sum;
        SData/*15:0*/ block2__DOT__a;
        SData/*15:0*/ block2__DOT__b;
        SData/*15:0*/ block2__DOT__sum;
        SData/*15:0*/ block3__DOT__a;
        SData/*15:0*/ block3__DOT__b;
        SData/*15:0*/ block3__DOT__sum;
        VL_IN64(a,63,0);
        VL_IN64(b,63,0);
        VL_OUT64(sum,63,0);
    };

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtop_cla_64b() = default;
    ~Vtop_cla_64b() = default;
    void ctor(Vtop__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtop_cla_64b);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
