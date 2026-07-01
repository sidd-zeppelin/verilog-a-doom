// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vsoc_top__pch.h"

Vsoc_top__Syms::Vsoc_top__Syms(VerilatedContext* contextp, const char* namep, Vsoc_top* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(3136);
    // Setup sub module instances
    TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.ctor(this, "soc_top.u_core.u_ex.u_alu.u_addsub.rca_inst");
    TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.ctor(this, "soc_top.u_core.u_ex.u_bta.adder_inst");
    TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.ctor(this, "soc_top.u_core.u_if.u_pc4.adder_inst");
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst = &TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst;
    TOP.__PVT__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst = &TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst;
    TOP.__PVT__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst = &TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.__Vconfigure(true);
    TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.__Vconfigure(false);
    TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.__Vconfigure(false);
    // Setup scopes
}

Vsoc_top__Syms::~Vsoc_top__Syms() {
    // Tear down scopes
    // Tear down sub module instances
    TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst.dtor();
    TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst.dtor();
    TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__rca_inst.dtor();
}
