// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop_cla_64b___ico_sequent__TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst__0(Vtop_cla_64b* vlSelf);
void Vtop_cla_64b___ico_sequent__TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst__0(Vtop_cla_64b* vlSelf);
void Vtop_cla_64b___ico_sequent__TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst__0(Vtop_cla_64b* vlSelf);
void Vtop___024root___ico_sequent__TOP__1(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        Vtop_cla_64b___ico_sequent__TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst__0((&vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__adder_inst));
        Vtop_cla_64b___ico_sequent__TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst__0((&vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__adder_inst));
        Vtop_cla_64b___ico_sequent__TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst__0((&vlSymsp->TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cla_inst));
        Vtop___024root___ico_sequent__TOP__1(vlSelf);
    }
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vtop___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge soc_top.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge soc_top.u_core.u_pc.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(posedge soc_top.u_core.u_pc.rst)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(posedge soc_top.u_core.u_if_id.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @(posedge soc_top.u_core.u_if_id.rst)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @(posedge soc_top.u_core.u_id.u_regfile.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @(posedge soc_top.u_core.u_id.u_regfile.rst)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 7U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 7 is active: @(posedge soc_top.u_core.u_id_ex.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 8U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 8 is active: @(posedge soc_top.u_core.u_id_ex.rst)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 9U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 9 is active: @(posedge soc_top.u_core.u_ex.u_multdiv.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000aU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 10 is active: @(posedge soc_top.u_core.u_ex.u_multdiv.rst)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000bU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 11 is active: @(posedge soc_top.u_core.u_ex.u_csr.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000cU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 12 is active: @(posedge soc_top.u_core.u_ex_mem.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000dU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 13 is active: @(posedge soc_top.u_core.u_ex_mem.rst)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000eU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 14 is active: @(posedge soc_top.u_core.u_mem_wb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000fU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 15 is active: @(posedge soc_top.u_core.u_mem_wb.rst)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000010U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 16 is active: @(posedge soc_top.u_ram.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000011U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 17 is active: @(posedge soc_top.u_clint.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000012U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 18 is active: @(posedge soc_top.u_spi.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000013U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 19 is active: @(posedge soc_top.u_vga.clk_25mhz)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000014U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 20 is active: @(posedge soc_top.u_vga.rst)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000015U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 21 is active: @(posedge soc_top.u_vga.u_timing.clk_25mhz)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000016U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 22 is active: @(posedge soc_top.u_vga.u_timing.rst)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000017U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 23 is active: @(posedge soc_top.u_vga.u_ram.clk_cpu)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000018U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 24 is active: @(posedge soc_top.u_vga.u_ram.clk_vga)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
    vlSelf->soc_top__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9470170312804119370ull);
    vlSelf->soc_top__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 940770955363123857ull);
    vlSelf->soc_top__DOT__buttons = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14639642868543310556ull);
    vlSelf->soc_top__DOT__leds = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17990803883438177682ull);
    vlSelf->soc_top__DOT__vga_hsync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9913574300065536109ull);
    vlSelf->soc_top__DOT__vga_vsync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6306493370202809074ull);
    vlSelf->soc_top__DOT__vga_r = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5507897573841498417ull);
    vlSelf->soc_top__DOT__vga_g = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8890456414854118882ull);
    vlSelf->soc_top__DOT__vga_b = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9193723975028382900ull);
    vlSelf->soc_top__DOT__spi_sck = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9554178177637478847ull);
    vlSelf->soc_top__DOT__spi_mosi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1743161404587140039ull);
    vlSelf->soc_top__DOT__spi_miso = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11020412351463773931ull);
    vlSelf->soc_top__DOT__spi_cs_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12130388850008224651ull);
    vlSelf->soc_top__DOT__dbg_vga_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18059671049258706055ull);
    vlSelf->soc_top__DOT__dbg_vga_addr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15149854307654473770ull);
    vlSelf->soc_top__DOT__dbg_vga_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4617267324794415492ull);
    vlSelf->soc_top__DOT__imem_address = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 980416127112221563ull);
    vlSelf->soc_top__DOT__imem_instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5435538860100517860ull);
    vlSelf->soc_top__DOT__dmem_read_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3414899265881818276ull);
    vlSelf->soc_top__DOT__dmem_write_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3771073042804528015ull);
    vlSelf->soc_top__DOT__dmem_address = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3338310224841339442ull);
    vlSelf->soc_top__DOT__dmem_write_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13972134799288607587ull);
    vlSelf->soc_top__DOT__dmem_funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13047518341384661544ull);
    vlSelf->soc_top__DOT__dmem_read_data_in = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14333234923966578469ull);
    vlSelf->soc_top__DOT__ram_read_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1034855322685910763ull);
    vlSelf->soc_top__DOT__ram_write_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18145634860909362061ull);
    vlSelf->soc_top__DOT__ram_address = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 11646885141786708142ull);
    vlSelf->soc_top__DOT__ram_write_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11060792939943815390ull);
    vlSelf->soc_top__DOT__ram_funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1930510191179589090ull);
    vlSelf->soc_top__DOT__ram_read_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 18013073749916745799ull);
    vlSelf->soc_top__DOT__vga_read_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8825260748173170932ull);
    vlSelf->soc_top__DOT__vga_write_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11101478085617926187ull);
    vlSelf->soc_top__DOT__vga_address = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12295863659869829310ull);
    vlSelf->soc_top__DOT__vga_write_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11106819828237436304ull);
    vlSelf->soc_top__DOT__vga_funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16417508522084447031ull);
    vlSelf->soc_top__DOT__vga_read_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11108694955824759769ull);
    vlSelf->soc_top__DOT__io_read_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5828253018407868123ull);
    vlSelf->soc_top__DOT__io_write_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13080087361400862287ull);
    vlSelf->soc_top__DOT__io_address = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5219333777105748924ull);
    vlSelf->soc_top__DOT__io_write_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5137271185700227938ull);
    vlSelf->soc_top__DOT__io_funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5199974807203511129ull);
    vlSelf->soc_top__DOT__io_read_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10540659848770106060ull);
    vlSelf->soc_top__DOT__clint_read_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10604036954821157622ull);
    vlSelf->soc_top__DOT__clint_write_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17688850147282082843ull);
    vlSelf->soc_top__DOT__clint_address = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16489988471131711849ull);
    vlSelf->soc_top__DOT__clint_write_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6137456583154682363ull);
    vlSelf->soc_top__DOT__clint_read_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17998203531284311352ull);
    vlSelf->soc_top__DOT__timer_interrupt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 429484117799634740ull);
    vlSelf->soc_top__DOT__spi_read_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14476486731785056369ull);
    vlSelf->soc_top__DOT__spi_write_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8075350077572338053ull);
    vlSelf->soc_top__DOT__spi_address = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5359341877698021199ull);
    vlSelf->soc_top__DOT__spi_write_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9293121150998091789ull);
    vlSelf->soc_top__DOT__spi_read_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8675740064903704909ull);
    vlSelf->soc_top__DOT__clk_div = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16319071260459709678ull);
    vlSelf->soc_top__DOT__clk_25mhz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7870786060110236258ull);
    vlSelf->soc_top__DOT__led_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 235742829325404552ull);
    vlSelf->soc_top__DOT__u_core__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17527694396415524450ull);
    vlSelf->soc_top__DOT__u_core__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2679913931344263282ull);
    vlSelf->soc_top__DOT__u_core__DOT__imem_address = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15957655927474270746ull);
    vlSelf->soc_top__DOT__u_core__DOT__imem_instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16777868637945542986ull);
    vlSelf->soc_top__DOT__u_core__DOT__dmem_read_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4299820513419894129ull);
    vlSelf->soc_top__DOT__u_core__DOT__dmem_write_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14145518947502654790ull);
    vlSelf->soc_top__DOT__u_core__DOT__dmem_address = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1811932478941503653ull);
    vlSelf->soc_top__DOT__u_core__DOT__dmem_write_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11695905842438978377ull);
    vlSelf->soc_top__DOT__u_core__DOT__dmem_funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10606928375938322918ull);
    vlSelf->soc_top__DOT__u_core__DOT__dmem_read_data_in = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11114556393869110943ull);
    vlSelf->soc_top__DOT__u_core__DOT__timer_interrupt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3777622368524468254ull);
    vlSelf->soc_top__DOT__u_core__DOT__pc_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8636621387700517834ull);
    vlSelf->soc_top__DOT__u_core__DOT__if_id_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14602593977812357517ull);
    vlSelf->soc_top__DOT__u_core__DOT__id_ex_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1597365889048012661ull);
    vlSelf->soc_top__DOT__u_core__DOT__if_id_flush_ext = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 305531659086579347ull);
    vlSelf->soc_top__DOT__u_core__DOT__id_ex_flush_ext = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 219314195775592816ull);
    vlSelf->soc_top__DOT__u_core__DOT__ex_mem_flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17474578163732013644ull);
    vlSelf->soc_top__DOT__u_core__DOT__multdiv_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6137689746211443833ull);
    vlSelf->soc_top__DOT__u_core__DOT__ForwardA = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11672913637972809978ull);
    vlSelf->soc_top__DOT__u_core__DOT__ForwardB = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7275283692125162308ull);
    vlSelf->soc_top__DOT__u_core__DOT__if_pc = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10461591079639538718ull);
    vlSelf->soc_top__DOT__u_core__DOT__if_pc4 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8918836247248188686ull);
    vlSelf->soc_top__DOT__u_core__DOT__if_instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10769725532389483416ull);
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
    vlSelf->soc_top__DOT__u_core__DOT__id_rs1_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1817200687406758478ull);
    vlSelf->soc_top__DOT__u_core__DOT__id_rs2_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15354341930063845725ull);
    vlSelf->soc_top__DOT__u_core__DOT__id_immediate = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15898825677389059596ull);
    vlSelf->soc_top__DOT__u_core__DOT__id_rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13324453372490997086ull);
    vlSelf->soc_top__DOT__u_core__DOT__id_rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2045525055538838479ull);
    vlSelf->soc_top__DOT__u_core__DOT__id_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10452234013199114487ull);
    vlSelf->soc_top__DOT__u_core__DOT__id_funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14487351213076210685ull);
    vlSelf->soc_top__DOT__u_core__DOT__id_funct7 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16456245383343693159ull);
    vlSelf->soc_top__DOT__u_core__DOT__id_funct12 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 10357021426388429584ull);
    vlSelf->soc_top__DOT__u_core__DOT__id_is_csr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8671853907170017650ull);
    vlSelf->soc_top__DOT__u_core__DOT__id_is_mret = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18087455269525650172ull);
    vlSelf->soc_top__DOT__u_core__DOT__id_is_32bit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11979417359500055470ull);
    vlSelf->soc_top__DOT__u_core__DOT__id_pc_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16417431047868705327ull);
    vlSelf->soc_top__DOT__u_core__DOT__id_pc4_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11303414506668743261ull);
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
    vlSelf->soc_top__DOT__u_core__DOT__ex_forwarded_rs2 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14778879115915007611ull);
    vlSelf->soc_top__DOT__u_core__DOT__ex_branch_target = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17047914986040117921ull);
    vlSelf->soc_top__DOT__u_core__DOT__ex_alu_zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12148001721732903018ull);
    vlSelf->soc_top__DOT__u_core__DOT__ex_branch_taken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4344220799066047243ull);
    vlSelf->soc_top__DOT__u_core__DOT__trap_target_pc = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14582313320411966349ull);
    vlSelf->soc_top__DOT__u_core__DOT__mstatus_mie = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6576356250288818451ull);
    vlSelf->soc_top__DOT__u_core__DOT__mie_mtie = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2034320119183115085ull);
    vlSelf->soc_top__DOT__u_core__DOT__trap_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17614272337206823004ull);
    vlSelf->soc_top__DOT__u_core__DOT__take_trap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11907865509697138331ull);
    vlSelf->soc_top__DOT__u_core__DOT__trap_pc = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7264525307987416291ull);
    vlSelf->soc_top__DOT__u_core__DOT__trap_flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6295034694785618477ull);
    vlSelf->soc_top__DOT__u_core__DOT__mem_RegWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17066299196536569347ull);
    vlSelf->soc_top__DOT__u_core__DOT__mem_MemRead = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3992462780302686819ull);
    vlSelf->soc_top__DOT__u_core__DOT__mem_MemWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3246268995627343878ull);
    vlSelf->soc_top__DOT__u_core__DOT__mem_MemToReg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12415014567001191886ull);
    vlSelf->soc_top__DOT__u_core__DOT__mem_Branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3574542679113961381ull);
    vlSelf->soc_top__DOT__u_core__DOT__mem_Jump = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8517085079243738252ull);
    vlSelf->soc_top__DOT__u_core__DOT__mem_alu_zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4416848410102794472ull);
    vlSelf->soc_top__DOT__u_core__DOT__mem_alu_result = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5595186771507935099ull);
    vlSelf->soc_top__DOT__u_core__DOT__mem_rs2_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10565955736427014237ull);
    vlSelf->soc_top__DOT__u_core__DOT__mem_branch_target = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16260056084259871296ull);
    vlSelf->soc_top__DOT__u_core__DOT__mem_pc4 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10160509096079303477ull);
    vlSelf->soc_top__DOT__u_core__DOT__mem_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2453212431684752265ull);
    vlSelf->soc_top__DOT__u_core__DOT__mem_funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 18043401469583331749ull);
    vlSelf->soc_top__DOT__u_core__DOT__mem_read_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1509449727929356620ull);
    vlSelf->soc_top__DOT__u_core__DOT__wb_RegWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17656580888808147019ull);
    vlSelf->soc_top__DOT__u_core__DOT__wb_MemToReg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2405770621468430161ull);
    vlSelf->soc_top__DOT__u_core__DOT__wb_read_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15765844401828615879ull);
    vlSelf->soc_top__DOT__u_core__DOT__wb_alu_result = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8593420711321138523ull);
    vlSelf->soc_top__DOT__u_core__DOT__wb_pc4 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9019428683402935914ull);
    vlSelf->soc_top__DOT__u_core__DOT__wb_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6810561708718676032ull);
    vlSelf->soc_top__DOT__u_core__DOT__wb_write_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13213048368345371376ull);
    vlSelf->soc_top__DOT__u_core__DOT__pc_next = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11139379447243197290ull);
    vlSelf->soc_top__DOT__u_core__DOT__forward_mem_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12007018613709430420ull);
    vlSelf->soc_top__DOT__u_core__DOT__forward_wb_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7705206573777738989ull);
    vlSelf->soc_top__DOT__u_core__DOT__id_opcode = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5217474609372580209ull);
    vlSelf->soc_top__DOT__u_core__DOT__id_uses_rs2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1911338794622624747ull);
    vlSelf->soc_top__DOT__u_core__DOT____VdfgRegularize_h19c8320d_0_0 = 0;
    vlSelf->soc_top__DOT__u_core__DOT__u_forwarding__DOT__ex_rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2991054808357161499ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_forwarding__DOT__ex_rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12966816344006101084ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_forwarding__DOT__mem_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6606117636332629315ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_forwarding__DOT__wb_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10131013055898625835ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_forwarding__DOT__mem_RegWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1261025377316029161ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_forwarding__DOT__wb_RegWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12294811090637862609ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_forwarding__DOT__ForwardA = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7868324233925744307ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_forwarding__DOT__ForwardB = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3411567223320794376ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_hazard__DOT__ex_MemRead = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 843339804710198444ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_hazard__DOT__ex_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 657692667389458598ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_hazard__DOT__id_rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2465790603123949214ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_hazard__DOT__id_rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14391844968618977944ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_hazard__DOT__id_uses_rs2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16362366115742251643ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_hazard__DOT__multdiv_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3484117531943510631ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_hazard__DOT__pc_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5814068590313693376ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_hazard__DOT__if_id_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10655655101550608554ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_hazard__DOT__id_ex_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17978922499698403521ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_hazard__DOT__id_ex_flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5070509046181704581ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_hazard__DOT__ex_mem_flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1849091951002923938ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_hazard__DOT__rs1_hazard = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9561947281087310582ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_hazard__DOT__rs2_hazard = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10138707742250817812ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_hazard__DOT__load_use_hazard = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11609513541409006623ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_pc__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1366271459322569827ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_pc__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5890882621657794493ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_pc__DOT__en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5591451538704138366ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_pc__DOT__pc_next = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 543254424982278678ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_pc__DOT__pc_current = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11263643573520661650ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_if__DOT__if_pc = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12276909353817644117ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_if__DOT__if_pc4 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12506383378085348117ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__pc_current = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5468572526375177570ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__pc_plus_4 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10560902004102931294ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8441495643553317028ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_if__DOT__u_pc4__DOT__carry_into_msb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12081458022322318639ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_if_id__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6281056484164783027ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_if_id__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2742453032066216288ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_if_id__DOT__stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5824561763021466143ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_if_id__DOT__flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14450746940521116075ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_if_id__DOT__if_pc = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14710175114225934960ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_if_id__DOT__if_pc4 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5734927636247970944ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_if_id__DOT__if_instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1175847899908687250ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_if_id__DOT__id_pc = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6479132863623665318ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_if_id__DOT__id_pc4 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7240705444914938952ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_if_id__DOT__id_instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14839021421455078186ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1235534785754833843ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15528842370192340143ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id__DOT__id_instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5164558187663160616ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id__DOT__id_pc = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6250726450252256872ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id__DOT__id_pc4 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5327428677949369385ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id__DOT__wb_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1314664692995516254ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id__DOT__wb_write_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2967719142654579394ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id__DOT__wb_RegWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11893899191732570131ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id__DOT__id_RegWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7414013327009724272ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id__DOT__id_MemRead = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15946317770676570660ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id__DOT__id_MemWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5516444159310362148ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id__DOT__id_MemToReg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14507108673471434827ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id__DOT__id_ALUOp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6234620318357966617ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id__DOT__id_ALUSrcA = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10762787750443171687ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id__DOT__id_ALUSrc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14072946700555640890ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id__DOT__id_Branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10578329710455352061ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id__DOT__id_Jump = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15735015271687770818ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id__DOT__id_is_csr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17453503119049604852ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id__DOT__id_is_mret = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 291410515264532660ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id__DOT__id_is_32bit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5143704837471232622ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id__DOT__id_rs1_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8593679852653697121ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id__DOT__id_rs2_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12097287593540262445ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id__DOT__id_immediate = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 950777455901621324ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id__DOT__id_rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14298184084726753513ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id__DOT__id_rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11913822028262888572ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id__DOT__id_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11436051754718563874ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id__DOT__id_funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15658273707583630123ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id__DOT__id_funct7 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8227663379197589579ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id__DOT__id_funct12 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 12722693922014364429ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id__DOT__id_pc_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2789915946331444495ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id__DOT__id_pc4_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1137756003914045779ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id__DOT__rf_read_data1 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1753771933609690440ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id__DOT__rf_read_data2 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12083653543004912441ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id__DOT____VdfgRegularize_hf18c6620_0_0 = 0;
    vlSelf->soc_top__DOT__u_core__DOT__u_id__DOT__u_ctrl__DOT__opcode = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12289113245061465681ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id__DOT__u_ctrl__DOT__funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17156366612674663687ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id__DOT__u_ctrl__DOT__funct12 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 330991304222480388ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id__DOT__u_ctrl__DOT__Branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5778134664763464798ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id__DOT__u_ctrl__DOT__Jump = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16462748842895940046ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id__DOT__u_ctrl__DOT__MemRead = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2087356159201754833ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id__DOT__u_ctrl__DOT__MemtoReg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15865351016584937525ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id__DOT__u_ctrl__DOT__ALUOp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13530628850849182463ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id__DOT__u_ctrl__DOT__MemWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4815298308928178548ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id__DOT__u_ctrl__DOT__ALUSrc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11273842008492088075ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id__DOT__u_ctrl__DOT__ALUSrcA = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 793251660079826976ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id__DOT__u_ctrl__DOT__RegWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9982187895994568147ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id__DOT__u_ctrl__DOT__is_csr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2292144352027704553ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id__DOT__u_ctrl__DOT__is_mret = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9959032191903468783ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id__DOT__u_ctrl__DOT__is_32bit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16854875878267958132ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 142189451822882920ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2024343553264255516ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10107984378501388571ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16148746028486427457ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14023055003530638526ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__write_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9843014876188823860ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__reg_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1055158453142795046ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__read_data1 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6596510773163848641ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__read_data2 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2281769211250490917ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__zero_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5937542499509482521ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__registers[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12330208994143076794ull);
    }
    vlSelf->soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15610661272739604818ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id__DOT__u_immgen__DOT__instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10765857889123520599ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id__DOT__u_immgen__DOT__immediate = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8453989348598103673ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id__DOT__u_immgen__DOT__opcode = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16169336042404936449ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id_ex__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12489839472779954013ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id_ex__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17599224644040434840ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id_ex__DOT__stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2797313770221035286ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id_ex__DOT__flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13751868135714268561ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id_ex__DOT__id_RegWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14675875262762601067ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id_ex__DOT__id_MemRead = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1180169595843678424ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id_ex__DOT__id_MemWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 37725384793485641ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id_ex__DOT__id_MemToReg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3624844899995929929ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id_ex__DOT__id_ALUOp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10708410100181350869ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id_ex__DOT__id_ALUSrcA = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6127315424715556170ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id_ex__DOT__id_ALUSrc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7955519961689357130ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id_ex__DOT__id_Branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11555636820390501589ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id_ex__DOT__id_Jump = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14925157504153543364ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id_ex__DOT__id_is_csr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13156463148389846645ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id_ex__DOT__id_is_mret = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10239796622760563887ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id_ex__DOT__id_is_32bit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1798395125513599013ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id_ex__DOT__id_pc = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11802355082710358622ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id_ex__DOT__id_pc4 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4705828265655246355ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id_ex__DOT__id_rs1_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13083774873241649821ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id_ex__DOT__id_rs2_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 773601048445292430ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id_ex__DOT__id_immediate = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3025813799320852825ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id_ex__DOT__id_rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6086480147651547433ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id_ex__DOT__id_rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1486852796443208286ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id_ex__DOT__id_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3283732724995428246ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id_ex__DOT__id_funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3630551147279525937ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id_ex__DOT__id_funct7 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4021460391706768588ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id_ex__DOT__id_funct12 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 15802792545659787478ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id_ex__DOT__ex_RegWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7537168265066614728ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id_ex__DOT__ex_MemRead = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2311980528384231076ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id_ex__DOT__ex_MemWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8243798910831846690ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id_ex__DOT__ex_MemToReg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12232790234830733366ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id_ex__DOT__ex_ALUOp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8909020822353656755ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id_ex__DOT__ex_ALUSrcA = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16501735957217971053ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id_ex__DOT__ex_ALUSrc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6546090440276657004ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id_ex__DOT__ex_Branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2968654250869588157ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id_ex__DOT__ex_Jump = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12487178691489577398ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id_ex__DOT__ex_is_csr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12333582519685326983ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id_ex__DOT__ex_is_mret = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5880570023599870912ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id_ex__DOT__ex_is_32bit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17876849552334415750ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id_ex__DOT__ex_pc = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15251987004191355116ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id_ex__DOT__ex_pc4 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 715009470696773905ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id_ex__DOT__ex_rs1_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3715250357373590765ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id_ex__DOT__ex_rs2_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12514729667503058296ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id_ex__DOT__ex_immediate = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5485600668050487637ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id_ex__DOT__ex_rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9229696327575807927ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id_ex__DOT__ex_rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13789354594457840891ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id_ex__DOT__ex_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17151481926872664740ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id_ex__DOT__ex_funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7619668326056302577ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id_ex__DOT__ex_funct7 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16060042218634914295ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_id_ex__DOT__ex_funct12 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 10889673858813170775ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7065469748114746810ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7871160032236857202ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__ex_pc = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7671225152140380312ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__ex_pc4 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16985758927154114581ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__ex_rs1_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1957662155719616135ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__ex_rs2_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9153318716010090465ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__ex_immediate = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12893502385444739170ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__ex_rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11871897940458801326ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__ex_rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17548251138354360656ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__ex_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1927489916408137936ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__ex_funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 18433519138492987941ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__ex_funct7 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12374957138840947611ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__ex_ALUSrc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13594618297924850962ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__ex_ALUOp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 830170067372501223ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__ex_ALUSrcA = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7168061302013595202ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__ex_Branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16229745070682588067ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__ex_Jump = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16319165976000237172ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__ex_is_csr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14503443866236576360ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__ex_is_mret = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14559676270606486567ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__ex_is_32bit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10388007086028178422ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__ex_funct12 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 2815797681045497279ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__timer_interrupt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5872629108612869567ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__take_trap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15981530394996218798ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__trap_pc = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15618958197904757068ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__ForwardA = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8603425357738607557ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__ForwardB = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15969121062172072957ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__forward_mem_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17027007869485957040ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__forward_wb_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11816702549947938323ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__ex_alu_result = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13188613898452025737ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__ex_alu_zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4811734531014612969ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__ex_forwarded_rs2 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1573630502158344483ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__ex_branch_target = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8170921772965170042ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__ex_branch_taken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11362201421290128921ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__multdiv_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17415383609006376567ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__trap_target_pc = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14165405010818777417ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__mstatus_mie = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2646460263893617182ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__mie_mtie = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6633146085384879635ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__fwd_rs1 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17798351756719831763ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_a = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5302484143411556633ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__fwd_rs2 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15355894583194556953ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4043565709283576742ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__alu_ctrl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14447441387846189808ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__alu_res = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2633883565076932454ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__is_m_ext = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4791357132413157927ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__multdiv_result = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3122127892379631978ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__alu_result_raw = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6113748514928818769ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__alu_result_32 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5979937631036416012ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__alu_result_mux = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7140330223681210922ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__is_csr_rs_rc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17602407506141816242ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__csr_write_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8064430332052402033ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__csr_read_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13758579422066295394ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__csr_rdata = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8005242011256409004ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__csr_write_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9585970366484583129ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__mepc_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16049927067188356679ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__mtvec_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12093779492985762776ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__bta_result = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11532511878992719274ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__is_jalr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3703682668556395457ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__branch_cond = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5648801379252554350ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu_ctrl__DOT__ALUOp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12749801089897063985ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu_ctrl__DOT__funct7_bit5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13665765430778186015ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu_ctrl__DOT__funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12180846038794807574ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu_ctrl__DOT__ALUControl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14587980277435263359ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__a = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3246339336550151760ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__b = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 936888915516624041ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__opcode = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10628138564290099537ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__result = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9219778443089516231ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12977479115794896822ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__carry_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4631084658473451645ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__overflow_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 870220868019876195ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__zero_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 307220114761757000ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__addsub_res = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14306591921701166697ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__addsub_cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13604045820830680932ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__addsub_overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8907986860251499355ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__and_res = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11343640030621305386ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__or_res = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12635665110413056250ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__xor_res = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1020153648297107302ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__sll_res = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11422107734199846871ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__srl_res = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16341958920836592377ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__sra_res = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15051704866267285161ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__slt_res = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 793381687035089151ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__sltu_res = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14105092071549818426ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__sub_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9085710826282960620ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__a = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14151438803297609417ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__b = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8190631057137341340ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__sub = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3879914767241696026ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__result = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6482069815333396456ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15554720222239126661ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18077336390441978669ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__use_b = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8381975506764695313ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_addsub__DOT__carry_into_msb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6723452496966676962ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_and__DOT__a = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17166477817173148526ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_and__DOT__b = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 570533884942444085ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_and__DOT__result = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15401344311210205957ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_or__DOT__a = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14403272349681107479ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_or__DOT__b = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13428855492369917036ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_or__DOT__result = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9284229723518017019ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_xor__DOT__a = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7768030004660362698ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_xor__DOT__b = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17793430552329920501ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_xor__DOT__result = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12560670440121541366ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__a = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13037367716096219495ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__shamt = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17897053038208640337ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__result = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16279332658764673258ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9783948444670185247ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12961789091157290953ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9441557614277673364ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14595352555387676315ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3300811520686788321ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s6 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16934667345759657091ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__a = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3883806398319107049ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__shamt = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6566588519819742651ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__result = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9509283289946640982ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s1 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12947154217023381553ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s2 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4730382861294110610ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s3 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5133278138732691150ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s4 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15717211867247137182ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s5 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5051763872875959624ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_srl__DOT__s6 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11337066777498420823ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__a = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8346441478280404804ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__shamt = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11002540947642989517ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__result = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1610147074092984165ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s1 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 667928056524258064ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s2 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4554404326444804374ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s3 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6165014471458295998ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s4 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9634236936160677652ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s5 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9414329605469403396ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sra__DOT__s6 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12281896501596313225ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_slt__DOT__rs1 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7513331157793831614ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_slt__DOT__rs2 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4613357055320302759ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_slt__DOT__result = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5042300299388016649ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_slt__DOT__rs1_sign = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1992232509036339054ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_slt__DOT__rs2_sign = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2419742730979468480ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_slt__DOT__signs_different = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6156937323950584497ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_slt__DOT__rs1_less_rs2_unsigned = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7575369462056021971ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_slt__DOT__rs1_less_rs2_signed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16793766497894990500ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sltu__DOT__rs1 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1255211012341168279ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sltu__DOT__rs2 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3167663500367971759ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sltu__DOT__result = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8151160651014995324ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sltu__DOT__less_unsigned = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3911848136347883360ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 225375037098621513ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10618216179311991737ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__is_m_ext = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2604010868732758241ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17702549973477861619ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__a = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7671682239614443926ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__b = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6325011644454565207ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__result = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16230111394281940564ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7784863648097021916ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2908407524107644497ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__a_signed = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1792084493415499824ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__b_signed = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11895525696110422461ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__mul_signed, __VscopeHash, 584098491858392998ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__mul_unsigned, __VscopeHash, 4756212486413187568ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__mul_su, __VscopeHash, 16511051252277064412ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10510323021815983082ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12404782680146516395ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__csr_addr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 12343490885167584392ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__csr_wdata = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10232063688336058144ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__csr_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5194616323012763476ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__csr_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6451600042326988992ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__csr_rdata = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12761759077434527035ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__timer_interrupt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2827128097786077407ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__take_trap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8901371753391525735ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__trap_pc = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12867143109616842534ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__is_mret = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5181590204696764679ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__mepc = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6823572777123274411ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__mtvec = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12382493483981428486ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__mstatus_mie = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 622143910714165100ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__mie_mtie = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4258240219852721605ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__mstatus = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10396784424992478413ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__mcause = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16325489900447303022ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__mie = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13013270803106044632ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__mscratch = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11912057086079745705ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__pc_current = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 990486532700168788ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__offset = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8650029397425823462ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__branch_target = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12929219133521851516ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6176502885347404132ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex__DOT__u_bta__DOT__carry_into_msb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6054227010735860464ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex_mem__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5430007323620113151ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex_mem__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8546243180545764617ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex_mem__DOT__flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10541600129304316851ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex_mem__DOT__ex_RegWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2633020401332163366ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex_mem__DOT__ex_MemRead = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15596237684050473469ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex_mem__DOT__ex_MemWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10459184190510043570ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex_mem__DOT__ex_MemToReg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11355195171386212940ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex_mem__DOT__ex_Branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15308058532731120935ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex_mem__DOT__ex_Jump = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13486906930058864298ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex_mem__DOT__ex_alu_result = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5489084716019843323ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex_mem__DOT__ex_rs2_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8686548074420132490ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex_mem__DOT__ex_branch_target = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5866967751107233643ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex_mem__DOT__ex_pc4 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3535466482236372411ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex_mem__DOT__ex_alu_zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6982500673322978927ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex_mem__DOT__ex_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7106118283342988271ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex_mem__DOT__ex_funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6377527904304120527ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex_mem__DOT__mem_RegWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18387414329216167807ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex_mem__DOT__mem_MemRead = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10093544244937156775ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex_mem__DOT__mem_MemWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6405446591228522849ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex_mem__DOT__mem_MemToReg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6473169024552254958ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex_mem__DOT__mem_Branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 169477018617358671ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex_mem__DOT__mem_Jump = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14904439510140634405ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex_mem__DOT__mem_alu_result = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11439509250355257811ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex_mem__DOT__mem_rs2_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13215241281878455614ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex_mem__DOT__mem_branch_target = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7674139677791338254ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex_mem__DOT__mem_pc4 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4400139203414250272ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex_mem__DOT__mem_alu_zero = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1985338053865413716ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex_mem__DOT__mem_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9837556900647891165ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_ex_mem__DOT__mem_funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14747533254240422998ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_mem__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5241444050519056825ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_mem__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9289857879030391696ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_mem__DOT__mem_MemRead = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14607884517603614235ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_mem__DOT__mem_MemWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8349182265888138437ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_mem__DOT__mem_alu_result = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16837705525089165809ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_mem__DOT__mem_rs2_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12728771982969092089ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_mem__DOT__mem_funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 780417403926858157ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_mem__DOT__mem_read_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 18402042033342943637ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_mem__DOT__dmem_read_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8218642924638603783ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_mem__DOT__dmem_write_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7280997870508602739ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_mem__DOT__dmem_address = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9147640534783063990ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_mem__DOT__dmem_write_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16722859641470034793ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_mem__DOT__dmem_funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5313456057345876501ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_mem__DOT__dmem_read_data_in = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3904151785813206041ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_mem_wb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8501866560098562626ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_mem_wb__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 969621565533475035ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_mem_wb__DOT__mem_RegWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3046555834586648422ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_mem_wb__DOT__mem_MemToReg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13722944728282154757ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_mem_wb__DOT__mem_read_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3693405118649929807ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_mem_wb__DOT__mem_alu_result = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9140918085327832345ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_mem_wb__DOT__mem_pc4 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11849159510364403120ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_mem_wb__DOT__mem_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17568870811895388609ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_mem_wb__DOT__wb_RegWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4568358027868100398ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_mem_wb__DOT__wb_MemToReg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 78269933070366983ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_mem_wb__DOT__wb_read_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17404094306410187225ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_mem_wb__DOT__wb_alu_result = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16079706036582367703ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_mem_wb__DOT__wb_pc4 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17143772425348224590ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_mem_wb__DOT__wb_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11272188359033606422ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_wb__DOT__wb_MemToReg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15936148393688903244ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_wb__DOT__wb_alu_result = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17956074513133572462ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_wb__DOT__wb_read_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17951067266278770443ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_wb__DOT__wb_pc4 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 687670336390359675ull);
    vlSelf->soc_top__DOT__u_core__DOT__u_wb__DOT__wb_write_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5133684401775916195ull);
    vlSelf->soc_top__DOT__u_bus__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11569467148879625279ull);
    vlSelf->soc_top__DOT__u_bus__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1493385600004437205ull);
    vlSelf->soc_top__DOT__u_bus__DOT__dmem_read_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6901450762944347143ull);
    vlSelf->soc_top__DOT__u_bus__DOT__dmem_write_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7549238899076271341ull);
    vlSelf->soc_top__DOT__u_bus__DOT__dmem_address = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4232058990638497030ull);
    vlSelf->soc_top__DOT__u_bus__DOT__dmem_write_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1519947060708791168ull);
    vlSelf->soc_top__DOT__u_bus__DOT__dmem_funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14623769232983286290ull);
    vlSelf->soc_top__DOT__u_bus__DOT__dmem_read_data_in = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14235783771523911397ull);
    vlSelf->soc_top__DOT__u_bus__DOT__ram_read_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5262485576121115928ull);
    vlSelf->soc_top__DOT__u_bus__DOT__ram_write_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13957384439034507116ull);
    vlSelf->soc_top__DOT__u_bus__DOT__ram_address = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 14269758688417067586ull);
    vlSelf->soc_top__DOT__u_bus__DOT__ram_write_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8571252460488160698ull);
    vlSelf->soc_top__DOT__u_bus__DOT__ram_funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13888766684258444838ull);
    vlSelf->soc_top__DOT__u_bus__DOT__ram_read_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17788142163002444180ull);
    vlSelf->soc_top__DOT__u_bus__DOT__vga_read_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15761087205310479652ull);
    vlSelf->soc_top__DOT__u_bus__DOT__vga_write_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9665090356597270591ull);
    vlSelf->soc_top__DOT__u_bus__DOT__vga_address = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14951326148896793833ull);
    vlSelf->soc_top__DOT__u_bus__DOT__vga_write_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16126352413311907197ull);
    vlSelf->soc_top__DOT__u_bus__DOT__vga_funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11329816513492902272ull);
    vlSelf->soc_top__DOT__u_bus__DOT__vga_read_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3658278137124842845ull);
    vlSelf->soc_top__DOT__u_bus__DOT__spi_read_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4179617443472478441ull);
    vlSelf->soc_top__DOT__u_bus__DOT__spi_write_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9079985752544445023ull);
    vlSelf->soc_top__DOT__u_bus__DOT__spi_address = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4458097461621889517ull);
    vlSelf->soc_top__DOT__u_bus__DOT__spi_write_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2288932068550627824ull);
    vlSelf->soc_top__DOT__u_bus__DOT__spi_read_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17441984616083672708ull);
    vlSelf->soc_top__DOT__u_bus__DOT__clint_read_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 962591722692301955ull);
    vlSelf->soc_top__DOT__u_bus__DOT__clint_write_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16808736392435388963ull);
    vlSelf->soc_top__DOT__u_bus__DOT__clint_address = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6615978855878078403ull);
    vlSelf->soc_top__DOT__u_bus__DOT__clint_write_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2671250759339794233ull);
    vlSelf->soc_top__DOT__u_bus__DOT__clint_read_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7764594985453222457ull);
    vlSelf->soc_top__DOT__u_bus__DOT__io_read_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3968618087088175684ull);
    vlSelf->soc_top__DOT__u_bus__DOT__io_write_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1348477860362597408ull);
    vlSelf->soc_top__DOT__u_bus__DOT__io_address = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7292162947018396321ull);
    vlSelf->soc_top__DOT__u_bus__DOT__io_write_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11277046043094217193ull);
    vlSelf->soc_top__DOT__u_bus__DOT__io_funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6415981200003958170ull);
    vlSelf->soc_top__DOT__u_bus__DOT__io_read_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13742444441179442797ull);
    vlSelf->soc_top__DOT__u_ram__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8437905623194697333ull);
    vlSelf->soc_top__DOT__u_ram__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16244216208930994688ull);
    vlSelf->soc_top__DOT__u_ram__DOT__imem_address = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14596829205330954506ull);
    vlSelf->soc_top__DOT__u_ram__DOT__imem_instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14669495480269729479ull);
    vlSelf->soc_top__DOT__u_ram__DOT__dmem_address = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 5003897633851713894ull);
    vlSelf->soc_top__DOT__u_ram__DOT__dmem_write_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14885842168364321565ull);
    vlSelf->soc_top__DOT__u_ram__DOT__dmem_read_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5115093137867953522ull);
    vlSelf->soc_top__DOT__u_ram__DOT__dmem_write_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 222022501025248722ull);
    vlSelf->soc_top__DOT__u_ram__DOT__dmem_funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6162939213717501651ull);
    vlSelf->soc_top__DOT__u_ram__DOT__dmem_read_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11682977452236453778ull);
    for (int __Vi0 = 0; __Vi0 < 8388608; ++__Vi0) {
        vlSelf->soc_top__DOT__u_ram__DOT__memory[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 552268067303732870ull);
    }
    vlSelf->soc_top__DOT__u_ram__DOT__use_little_endian = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2981381768913570233ull);
    vlSelf->soc_top__DOT__u_ram__DOT__pc_idx = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 12454913921530217091ull);
    vlSelf->soc_top__DOT__u_clint__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9948466594232694328ull);
    vlSelf->soc_top__DOT__u_clint__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14378982674906479349ull);
    vlSelf->soc_top__DOT__u_clint__DOT__clint_read_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12767655218737062495ull);
    vlSelf->soc_top__DOT__u_clint__DOT__clint_write_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13713226882244672813ull);
    vlSelf->soc_top__DOT__u_clint__DOT__clint_address = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8646850860308466995ull);
    vlSelf->soc_top__DOT__u_clint__DOT__clint_write_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4839428858820814568ull);
    vlSelf->soc_top__DOT__u_clint__DOT__clint_read_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4868442109012793882ull);
    vlSelf->soc_top__DOT__u_clint__DOT__timer_interrupt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14839934994995371136ull);
    vlSelf->soc_top__DOT__u_clint__DOT__mtime = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4396366277399774278ull);
    vlSelf->soc_top__DOT__u_clint__DOT__mtimecmp = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11820609185573333154ull);
    vlSelf->soc_top__DOT__u_spi__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13569739950531262731ull);
    vlSelf->soc_top__DOT__u_spi__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15214139066818535079ull);
    vlSelf->soc_top__DOT__u_spi__DOT__read_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16376917973837631999ull);
    vlSelf->soc_top__DOT__u_spi__DOT__write_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2237620866806189395ull);
    vlSelf->soc_top__DOT__u_spi__DOT__address = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7357824634443138769ull);
    vlSelf->soc_top__DOT__u_spi__DOT__write_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4264048908064669148ull);
    vlSelf->soc_top__DOT__u_spi__DOT__read_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16892599409436797684ull);
    vlSelf->soc_top__DOT__u_spi__DOT__sck = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3347079743962493259ull);
    vlSelf->soc_top__DOT__u_spi__DOT__mosi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17212820359705886130ull);
    vlSelf->soc_top__DOT__u_spi__DOT__miso = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5614364150039618625ull);
    vlSelf->soc_top__DOT__u_spi__DOT__cs_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8286505875004468247ull);
    vlSelf->soc_top__DOT__u_spi__DOT__clk_div = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7984457283808682605ull);
    vlSelf->soc_top__DOT__u_spi__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10905560258609483562ull);
    vlSelf->soc_top__DOT__u_spi__DOT__shift_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6375813665882087158ull);
    vlSelf->soc_top__DOT__u_spi__DOT__rx_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6086927494642911965ull);
    vlSelf->soc_top__DOT__u_spi__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2249725234025744710ull);
    vlSelf->soc_top__DOT__u_spi__DOT__clk_cnt = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4211750982898613008ull);
    vlSelf->soc_top__DOT__u_spi__DOT__bit_cnt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14658653244359401037ull);
    vlSelf->soc_top__DOT__u_vga__DOT__clk_cpu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4753243013880064798ull);
    vlSelf->soc_top__DOT__u_vga__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2782314112924358057ull);
    vlSelf->soc_top__DOT__u_vga__DOT__cpu_address = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16957809729813307954ull);
    vlSelf->soc_top__DOT__u_vga__DOT__cpu_write_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9201675180813361971ull);
    vlSelf->soc_top__DOT__u_vga__DOT__cpu_write_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13968921394428918226ull);
    vlSelf->soc_top__DOT__u_vga__DOT__cpu_funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 418838690774342804ull);
    vlSelf->soc_top__DOT__u_vga__DOT__cpu_read_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 18333516068284841115ull);
    vlSelf->soc_top__DOT__u_vga__DOT__clk_25mhz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8285816253679593899ull);
    vlSelf->soc_top__DOT__u_vga__DOT__vga_hsync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13277268367002974502ull);
    vlSelf->soc_top__DOT__u_vga__DOT__vga_vsync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2613894244578084512ull);
    vlSelf->soc_top__DOT__u_vga__DOT__vga_r = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10603328657828540803ull);
    vlSelf->soc_top__DOT__u_vga__DOT__vga_g = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11047019043787288290ull);
    vlSelf->soc_top__DOT__u_vga__DOT__vga_b = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15739284554307366859ull);
    vlSelf->soc_top__DOT__u_vga__DOT__h_sync_raw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17486226260875018427ull);
    vlSelf->soc_top__DOT__u_vga__DOT__v_sync_raw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17949236770994429685ull);
    vlSelf->soc_top__DOT__u_vga__DOT__pixel_x = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8740814518269187821ull);
    vlSelf->soc_top__DOT__u_vga__DOT__pixel_y = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 720326478533149108ull);
    vlSelf->soc_top__DOT__u_vga__DOT__video_active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11336384858970955734ull);
    vlSelf->soc_top__DOT__u_vga__DOT__in_window = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6781072613806206865ull);
    vlSelf->soc_top__DOT__u_vga__DOT__fb_x = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 4705889019893317953ull);
    vlSelf->soc_top__DOT__u_vga__DOT__fb_y = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14597026234240325191ull);
    vlSelf->soc_top__DOT__u_vga__DOT__vga_ram_addr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5820843387215830473ull);
    vlSelf->soc_top__DOT__u_vga__DOT__vga_pixel_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1049183241002728785ull);
    vlSelf->soc_top__DOT__u_vga__DOT__h_sync_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14152794227746952979ull);
    vlSelf->soc_top__DOT__u_vga__DOT__v_sync_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12434960414197569376ull);
    vlSelf->soc_top__DOT__u_vga__DOT__video_active_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10441599931103782804ull);
    vlSelf->soc_top__DOT__u_vga__DOT__in_window_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14878866121146651901ull);
    vlSelf->soc_top__DOT__u_vga__DOT__r_out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7981967131260033044ull);
    vlSelf->soc_top__DOT__u_vga__DOT__g_out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6013235241034612160ull);
    vlSelf->soc_top__DOT__u_vga__DOT__b_out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17737961661133688260ull);
    vlSelf->soc_top__DOT__u_vga__DOT__u_timing__DOT__clk_25mhz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5525778895830104133ull);
    vlSelf->soc_top__DOT__u_vga__DOT__u_timing__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3256898031432264330ull);
    vlSelf->soc_top__DOT__u_vga__DOT__u_timing__DOT__h_sync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4957498654144654710ull);
    vlSelf->soc_top__DOT__u_vga__DOT__u_timing__DOT__v_sync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13359120534906372846ull);
    vlSelf->soc_top__DOT__u_vga__DOT__u_timing__DOT__pixel_x = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5401146928788849319ull);
    vlSelf->soc_top__DOT__u_vga__DOT__u_timing__DOT__pixel_y = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 17735901125399840775ull);
    vlSelf->soc_top__DOT__u_vga__DOT__u_timing__DOT__video_active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2996665462141301455ull);
    vlSelf->soc_top__DOT__u_vga__DOT__u_timing__DOT__h_count = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 17988472353195455572ull);
    vlSelf->soc_top__DOT__u_vga__DOT__u_timing__DOT__v_count = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16309450569581939252ull);
    vlSelf->soc_top__DOT__u_vga__DOT__u_ram__DOT__clk_cpu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15806579662107084744ull);
    vlSelf->soc_top__DOT__u_vga__DOT__u_ram__DOT__cpu_address = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6173758835395766183ull);
    vlSelf->soc_top__DOT__u_vga__DOT__u_ram__DOT__cpu_write_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13866144436397608394ull);
    vlSelf->soc_top__DOT__u_vga__DOT__u_ram__DOT__cpu_write_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5881959108635500388ull);
    vlSelf->soc_top__DOT__u_vga__DOT__u_ram__DOT__cpu_funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15103799475770506176ull);
    vlSelf->soc_top__DOT__u_vga__DOT__u_ram__DOT__cpu_read_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6209788707806864537ull);
    vlSelf->soc_top__DOT__u_vga__DOT__u_ram__DOT__clk_vga = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12826824660044927707ull);
    vlSelf->soc_top__DOT__u_vga__DOT__u_ram__DOT__vga_address = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5937526523273742819ull);
    vlSelf->soc_top__DOT__u_vga__DOT__u_ram__DOT__vga_read_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15256646646298430600ull);
    for (int __Vi0 = 0; __Vi0 < 65536; ++__Vi0) {
        vlSelf->soc_top__DOT__u_vga__DOT__u_ram__DOT__memory[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1298553197311022873ull);
    }
    vlSelf->soc_top__DOT__u_vga__DOT__u_ram__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10115127346320075883ull);
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
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__soc_top__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__soc_top__DOT__u_core__DOT__u_pc__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__soc_top__DOT__u_core__DOT__u_pc__DOT__rst__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__soc_top__DOT__u_core__DOT__u_if_id__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__soc_top__DOT__u_core__DOT__u_if_id__DOT__rst__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__soc_top__DOT__u_core__DOT__u_id__DOT__u_regfile__DOT__rst__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__soc_top__DOT__u_core__DOT__u_id_ex__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__soc_top__DOT__u_core__DOT__u_id_ex__DOT__rst__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__rst__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__soc_top__DOT__u_core__DOT__u_ex__DOT__u_csr__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__soc_top__DOT__u_core__DOT__u_ex_mem__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__soc_top__DOT__u_core__DOT__u_ex_mem__DOT__rst__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__soc_top__DOT__u_core__DOT__u_mem_wb__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__soc_top__DOT__u_core__DOT__u_mem_wb__DOT__rst__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__soc_top__DOT__u_ram__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__soc_top__DOT__u_clint__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__soc_top__DOT__u_spi__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__soc_top__DOT__u_vga__DOT__clk_25mhz__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__soc_top__DOT__u_vga__DOT__rst__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__soc_top__DOT__u_vga__DOT__u_timing__DOT__clk_25mhz__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__soc_top__DOT__u_vga__DOT__u_timing__DOT__rst__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__soc_top__DOT__u_vga__DOT__u_ram__DOT__clk_cpu__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__soc_top__DOT__u_vga__DOT__u_ram__DOT__clk_vga__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
