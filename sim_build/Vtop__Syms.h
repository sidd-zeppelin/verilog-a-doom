// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP__SYMS_H_
#define VERILATED_VTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtop.h"

// INCLUDE MODULE CLASSES
#include "Vtop___024root.h"
#include "Vtop_cla_64b.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop___024root                 TOP;
    Vtop_cla_64b                   TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst;
    Vtop_cla_64b                   TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst;
    Vtop_cla_64b                   TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst;

    // SCOPE NAMES
    VerilatedScope* __Vscopep_TOP;
    VerilatedScope* __Vscopep_soc_top;
    VerilatedScope* __Vscopep_soc_top__u_bus;
    VerilatedScope* __Vscopep_soc_top__u_clint;
    VerilatedScope* __Vscopep_soc_top__u_core;
    VerilatedScope* __Vscopep_soc_top__u_core__u_ex;
    VerilatedScope* __Vscopep_soc_top__u_core__u_ex__u_alu;
    VerilatedScope* __Vscopep_soc_top__u_core__u_ex__u_alu__u_addsub;
    VerilatedScope* __Vscopep_soc_top__u_core__u_ex__u_alu__u_addsub__cla_inst;
    VerilatedScope* __Vscopep_soc_top__u_core__u_ex__u_alu__u_addsub__cla_inst__block0;
    VerilatedScope* __Vscopep_soc_top__u_core__u_ex__u_alu__u_addsub__cla_inst__block0__block0;
    VerilatedScope* __Vscopep_soc_top__u_core__u_ex__u_alu__u_addsub__cla_inst__block0__block1;
    VerilatedScope* __Vscopep_soc_top__u_core__u_ex__u_alu__u_addsub__cla_inst__block0__block2;
    VerilatedScope* __Vscopep_soc_top__u_core__u_ex__u_alu__u_addsub__cla_inst__block0__block3;
    VerilatedScope* __Vscopep_soc_top__u_core__u_ex__u_alu__u_addsub__cla_inst__block1;
    VerilatedScope* __Vscopep_soc_top__u_core__u_ex__u_alu__u_addsub__cla_inst__block1__block0;
    VerilatedScope* __Vscopep_soc_top__u_core__u_ex__u_alu__u_addsub__cla_inst__block1__block1;
    VerilatedScope* __Vscopep_soc_top__u_core__u_ex__u_alu__u_addsub__cla_inst__block1__block2;
    VerilatedScope* __Vscopep_soc_top__u_core__u_ex__u_alu__u_addsub__cla_inst__block1__block3;
    VerilatedScope* __Vscopep_soc_top__u_core__u_ex__u_alu__u_addsub__cla_inst__block2;
    VerilatedScope* __Vscopep_soc_top__u_core__u_ex__u_alu__u_addsub__cla_inst__block2__block0;
    VerilatedScope* __Vscopep_soc_top__u_core__u_ex__u_alu__u_addsub__cla_inst__block2__block1;
    VerilatedScope* __Vscopep_soc_top__u_core__u_ex__u_alu__u_addsub__cla_inst__block2__block2;
    VerilatedScope* __Vscopep_soc_top__u_core__u_ex__u_alu__u_addsub__cla_inst__block2__block3;
    VerilatedScope* __Vscopep_soc_top__u_core__u_ex__u_alu__u_addsub__cla_inst__block3;
    VerilatedScope* __Vscopep_soc_top__u_core__u_ex__u_alu__u_addsub__cla_inst__block3__block0;
    VerilatedScope* __Vscopep_soc_top__u_core__u_ex__u_alu__u_addsub__cla_inst__block3__block1;
    VerilatedScope* __Vscopep_soc_top__u_core__u_ex__u_alu__u_addsub__cla_inst__block3__block2;
    VerilatedScope* __Vscopep_soc_top__u_core__u_ex__u_alu__u_addsub__cla_inst__block3__block3;
    VerilatedScope* __Vscopep_soc_top__u_core__u_ex__u_alu__u_and;
    VerilatedScope* __Vscopep_soc_top__u_core__u_ex__u_alu__u_or;
    VerilatedScope* __Vscopep_soc_top__u_core__u_ex__u_alu__u_sll;
    VerilatedScope* __Vscopep_soc_top__u_core__u_ex__u_alu__u_slt;
    VerilatedScope* __Vscopep_soc_top__u_core__u_ex__u_alu__u_sltu;
    VerilatedScope* __Vscopep_soc_top__u_core__u_ex__u_alu__u_sra;
    VerilatedScope* __Vscopep_soc_top__u_core__u_ex__u_alu__u_srl;
    VerilatedScope* __Vscopep_soc_top__u_core__u_ex__u_alu__u_xor;
    VerilatedScope* __Vscopep_soc_top__u_core__u_ex__u_alu_ctrl;
    VerilatedScope* __Vscopep_soc_top__u_core__u_ex__u_bta;
    VerilatedScope* __Vscopep_soc_top__u_core__u_ex__u_bta__adder_inst;
    VerilatedScope* __Vscopep_soc_top__u_core__u_ex__u_bta__adder_inst__block0;
    VerilatedScope* __Vscopep_soc_top__u_core__u_ex__u_bta__adder_inst__block0__block0;
    VerilatedScope* __Vscopep_soc_top__u_core__u_ex__u_bta__adder_inst__block0__block1;
    VerilatedScope* __Vscopep_soc_top__u_core__u_ex__u_bta__adder_inst__block0__block2;
    VerilatedScope* __Vscopep_soc_top__u_core__u_ex__u_bta__adder_inst__block0__block3;
    VerilatedScope* __Vscopep_soc_top__u_core__u_ex__u_bta__adder_inst__block1;
    VerilatedScope* __Vscopep_soc_top__u_core__u_ex__u_bta__adder_inst__block1__block0;
    VerilatedScope* __Vscopep_soc_top__u_core__u_ex__u_bta__adder_inst__block1__block1;
    VerilatedScope* __Vscopep_soc_top__u_core__u_ex__u_bta__adder_inst__block1__block2;
    VerilatedScope* __Vscopep_soc_top__u_core__u_ex__u_bta__adder_inst__block1__block3;
    VerilatedScope* __Vscopep_soc_top__u_core__u_ex__u_bta__adder_inst__block2;
    VerilatedScope* __Vscopep_soc_top__u_core__u_ex__u_bta__adder_inst__block2__block0;
    VerilatedScope* __Vscopep_soc_top__u_core__u_ex__u_bta__adder_inst__block2__block1;
    VerilatedScope* __Vscopep_soc_top__u_core__u_ex__u_bta__adder_inst__block2__block2;
    VerilatedScope* __Vscopep_soc_top__u_core__u_ex__u_bta__adder_inst__block2__block3;
    VerilatedScope* __Vscopep_soc_top__u_core__u_ex__u_bta__adder_inst__block3;
    VerilatedScope* __Vscopep_soc_top__u_core__u_ex__u_bta__adder_inst__block3__block0;
    VerilatedScope* __Vscopep_soc_top__u_core__u_ex__u_bta__adder_inst__block3__block1;
    VerilatedScope* __Vscopep_soc_top__u_core__u_ex__u_bta__adder_inst__block3__block2;
    VerilatedScope* __Vscopep_soc_top__u_core__u_ex__u_bta__adder_inst__block3__block3;
    VerilatedScope* __Vscopep_soc_top__u_core__u_ex__u_csr;
    VerilatedScope* __Vscopep_soc_top__u_core__u_ex__u_multdiv;
    VerilatedScope* __Vscopep_soc_top__u_core__u_ex_mem;
    VerilatedScope* __Vscopep_soc_top__u_core__u_forwarding;
    VerilatedScope* __Vscopep_soc_top__u_core__u_hazard;
    VerilatedScope* __Vscopep_soc_top__u_core__u_id;
    VerilatedScope* __Vscopep_soc_top__u_core__u_id__u_ctrl;
    VerilatedScope* __Vscopep_soc_top__u_core__u_id__u_immgen;
    VerilatedScope* __Vscopep_soc_top__u_core__u_id__u_regfile;
    VerilatedScope* __Vscopep_soc_top__u_core__u_id_ex;
    VerilatedScope* __Vscopep_soc_top__u_core__u_if;
    VerilatedScope* __Vscopep_soc_top__u_core__u_if__u_pc4;
    VerilatedScope* __Vscopep_soc_top__u_core__u_if__u_pc4__adder_inst;
    VerilatedScope* __Vscopep_soc_top__u_core__u_if__u_pc4__adder_inst__block0;
    VerilatedScope* __Vscopep_soc_top__u_core__u_if__u_pc4__adder_inst__block0__block0;
    VerilatedScope* __Vscopep_soc_top__u_core__u_if__u_pc4__adder_inst__block0__block1;
    VerilatedScope* __Vscopep_soc_top__u_core__u_if__u_pc4__adder_inst__block0__block2;
    VerilatedScope* __Vscopep_soc_top__u_core__u_if__u_pc4__adder_inst__block0__block3;
    VerilatedScope* __Vscopep_soc_top__u_core__u_if__u_pc4__adder_inst__block1;
    VerilatedScope* __Vscopep_soc_top__u_core__u_if__u_pc4__adder_inst__block1__block0;
    VerilatedScope* __Vscopep_soc_top__u_core__u_if__u_pc4__adder_inst__block1__block1;
    VerilatedScope* __Vscopep_soc_top__u_core__u_if__u_pc4__adder_inst__block1__block2;
    VerilatedScope* __Vscopep_soc_top__u_core__u_if__u_pc4__adder_inst__block1__block3;
    VerilatedScope* __Vscopep_soc_top__u_core__u_if__u_pc4__adder_inst__block2;
    VerilatedScope* __Vscopep_soc_top__u_core__u_if__u_pc4__adder_inst__block2__block0;
    VerilatedScope* __Vscopep_soc_top__u_core__u_if__u_pc4__adder_inst__block2__block1;
    VerilatedScope* __Vscopep_soc_top__u_core__u_if__u_pc4__adder_inst__block2__block2;
    VerilatedScope* __Vscopep_soc_top__u_core__u_if__u_pc4__adder_inst__block2__block3;
    VerilatedScope* __Vscopep_soc_top__u_core__u_if__u_pc4__adder_inst__block3;
    VerilatedScope* __Vscopep_soc_top__u_core__u_if__u_pc4__adder_inst__block3__block0;
    VerilatedScope* __Vscopep_soc_top__u_core__u_if__u_pc4__adder_inst__block3__block1;
    VerilatedScope* __Vscopep_soc_top__u_core__u_if__u_pc4__adder_inst__block3__block2;
    VerilatedScope* __Vscopep_soc_top__u_core__u_if__u_pc4__adder_inst__block3__block3;
    VerilatedScope* __Vscopep_soc_top__u_core__u_if_id;
    VerilatedScope* __Vscopep_soc_top__u_core__u_mem;
    VerilatedScope* __Vscopep_soc_top__u_core__u_mem_wb;
    VerilatedScope* __Vscopep_soc_top__u_core__u_pc;
    VerilatedScope* __Vscopep_soc_top__u_core__u_wb;
    VerilatedScope* __Vscopep_soc_top__u_ram;
    VerilatedScope* __Vscopep_soc_top__u_spi;
    VerilatedScope* __Vscopep_soc_top__u_vga;
    VerilatedScope* __Vscopep_soc_top__u_vga__u_ram;
    VerilatedScope* __Vscopep_soc_top__u_vga__u_timing;

    // SCOPE HIERARCHY
    VerilatedHierarchy __Vhier;

    // CONSTRUCTORS
    Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp);
    ~Vtop__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
