// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop_rca_64b___ctor_var_reset(Vtop_rca_64b* vlSelf);

void Vtop_rca_64b::ctor(Vtop__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vtop_rca_64b___ctor_var_reset(this);
}

void Vtop_rca_64b::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtop_rca_64b::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
