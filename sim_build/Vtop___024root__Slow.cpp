// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

// Parameter definitions for Vtop___024root
constexpr CData/*3:0*/ Vtop___024root::soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu_ctrl__DOT__ALU_ADD;
constexpr CData/*3:0*/ Vtop___024root::soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu_ctrl__DOT__ALU_SLL;
constexpr CData/*3:0*/ Vtop___024root::soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu_ctrl__DOT__ALU_SLT;
constexpr CData/*3:0*/ Vtop___024root::soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu_ctrl__DOT__ALU_SLTU;
constexpr CData/*3:0*/ Vtop___024root::soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu_ctrl__DOT__ALU_XOR;
constexpr CData/*3:0*/ Vtop___024root::soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu_ctrl__DOT__ALU_SRL;
constexpr CData/*3:0*/ Vtop___024root::soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu_ctrl__DOT__ALU_OR;
constexpr CData/*3:0*/ Vtop___024root::soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu_ctrl__DOT__ALU_AND;
constexpr CData/*3:0*/ Vtop___024root::soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu_ctrl__DOT__ALU_SUB;
constexpr CData/*3:0*/ Vtop___024root::soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu_ctrl__DOT__ALU_SRA;
constexpr CData/*3:0*/ Vtop___024root::soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu_ctrl__DOT__ALU_INV;
constexpr CData/*1:0*/ Vtop___024root::soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__IDLE;
constexpr CData/*1:0*/ Vtop___024root::soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__CALC1;
constexpr CData/*1:0*/ Vtop___024root::soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__CALC2;
constexpr CData/*1:0*/ Vtop___024root::soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__CALC3;
constexpr CData/*2:0*/ Vtop___024root::soc_top__DOT__u_spi__DOT__IDLE;
constexpr CData/*2:0*/ Vtop___024root::soc_top__DOT__u_spi__DOT__SETUP;
constexpr CData/*2:0*/ Vtop___024root::soc_top__DOT__u_spi__DOT__HIGH;
constexpr CData/*2:0*/ Vtop___024root::soc_top__DOT__u_spi__DOT__LOW;
constexpr CData/*2:0*/ Vtop___024root::soc_top__DOT__u_spi__DOT__DONE;
constexpr IData/*31:0*/ Vtop___024root::soc_top__DOT__u_vga__DOT__u_timing__DOT__H_DISPLAY;
constexpr IData/*31:0*/ Vtop___024root::soc_top__DOT__u_vga__DOT__u_timing__DOT__H_FRONT;
constexpr IData/*31:0*/ Vtop___024root::soc_top__DOT__u_vga__DOT__u_timing__DOT__H_SYNC;
constexpr IData/*31:0*/ Vtop___024root::soc_top__DOT__u_vga__DOT__u_timing__DOT__H_BACK;
constexpr IData/*31:0*/ Vtop___024root::soc_top__DOT__u_vga__DOT__u_timing__DOT__H_TOTAL;
constexpr IData/*31:0*/ Vtop___024root::soc_top__DOT__u_vga__DOT__u_timing__DOT__V_DISPLAY;
constexpr IData/*31:0*/ Vtop___024root::soc_top__DOT__u_vga__DOT__u_timing__DOT__V_FRONT;
constexpr IData/*31:0*/ Vtop___024root::soc_top__DOT__u_vga__DOT__u_timing__DOT__V_SYNC;
constexpr IData/*31:0*/ Vtop___024root::soc_top__DOT__u_vga__DOT__u_timing__DOT__V_BACK;
constexpr IData/*31:0*/ Vtop___024root::soc_top__DOT__u_vga__DOT__u_timing__DOT__V_TOTAL;


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(Vtop__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop___024root::~Vtop___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
