// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsoc_top.h for the primary calling header

#include "Vsoc_top__pch.h"

void Vsoc_top___024root___nba_sequent__TOP__64(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__64\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__sll_res 
        = (((QData)((IData)(((((((((2U & (((1U & (IData)(
                                                         (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                          >> 5U)))
                                            ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__31__KET__)
                                            : ((1U 
                                                & (IData)(
                                                          (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                           >> 4U)))
                                                ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__47__KET__)
                                                : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                               >> 3U)))
                                                    ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__55__KET__)
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                >> 2U)))
                                                     ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__59__KET__)
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                 >> 1U)))
                                                      ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__61__KET__)
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
                                           ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__30__KET__)
                                           : ((1U & (IData)(
                                                            (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                             >> 4U)))
                                               ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__46__KET__)
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                              >> 3U)))
                                                   ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__54__KET__)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                               >> 2U)))
                                                    ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__58__KET__)
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                >> 1U)))
                                                     ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__60__KET__)
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
                                               ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__29__KET__)
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                              >> 4U)))
                                                   ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__45__KET__)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                               >> 3U)))
                                                    ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__53__KET__)
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                >> 2U)))
                                                     ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__57__KET__)
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                 >> 1U)))
                                                      ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__59__KET__)
                                                      : (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__61__KET__)))))) 
                                             << 5U) 
                                            | (((1U 
                                                 & (IData)(
                                                           (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                            >> 5U)))
                                                 ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__28__KET__)
                                                 : 
                                                ((1U 
                                                  & (IData)(
                                                            (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                             >> 4U)))
                                                  ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__44__KET__)
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                              >> 3U)))
                                                   ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__52__KET__)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                               >> 2U)))
                                                    ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__56__KET__)
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                >> 1U)))
                                                     ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__58__KET__)
                                                     : (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s1__BRA__60__KET__)))))) 
                                               << 4U))) 
                                | (((((1U & (IData)(
                                                    (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                     >> 5U)))
                                       ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__27__KET__)
                                       : ((1U & (IData)(
                                                        (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                         >> 4U)))
                                           ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__43__KET__)
                                           : ((1U & (IData)(
                                                            (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                             >> 3U)))
                                               ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__51__KET__)
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                              >> 2U)))
                                                   ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__55__KET__)
                                                   : (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__59__KET__))))) 
                                     << 3U) | (((1U 
                                                 & (IData)(
                                                           (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                            >> 5U)))
                                                 ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__26__KET__)
                                                 : 
                                                ((1U 
                                                  & (IData)(
                                                            (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                             >> 4U)))
                                                  ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__42__KET__)
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                              >> 3U)))
                                                   ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__50__KET__)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                               >> 2U)))
                                                    ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__54__KET__)
                                                    : (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__58__KET__))))) 
                                               << 2U)) 
                                   | ((((1U & (IData)(
                                                      (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                       >> 5U)))
                                         ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__25__KET__)
                                         : ((1U & (IData)(
                                                          (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                           >> 4U)))
                                             ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__41__KET__)
                                             : ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                            >> 3U)))
                                                 ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__49__KET__)
                                                 : 
                                                ((1U 
                                                  & (IData)(
                                                            (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                             >> 2U)))
                                                  ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__53__KET__)
                                                  : (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__57__KET__))))) 
                                       << 1U) | ((1U 
                                                  & (IData)(
                                                            (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                             >> 5U)))
                                                  ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__24__KET__)
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                              >> 4U)))
                                                   ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__40__KET__)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                               >> 3U)))
                                                    ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__48__KET__)
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                >> 2U)))
                                                     ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__52__KET__)
                                                     : (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s2__BRA__56__KET__)))))))) 
                               << 0x00000018U) | ((
                                                   (((((1U 
                                                        & (IData)(
                                                                  (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                   >> 5U)))
                                                        ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__23__KET__)
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                    >> 4U)))
                                                         ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__39__KET__)
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                     >> 3U)))
                                                          ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__47__KET__)
                                                          : (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__55__KET__)))) 
                                                      << 3U) 
                                                     | (((1U 
                                                          & (IData)(
                                                                    (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                     >> 5U)))
                                                          ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__22__KET__)
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                      >> 4U)))
                                                           ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__38__KET__)
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                       >> 3U)))
                                                            ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__46__KET__)
                                                            : (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__54__KET__)))) 
                                                        << 2U)) 
                                                    | ((((1U 
                                                          & (IData)(
                                                                    (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                     >> 5U)))
                                                          ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__21__KET__)
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                      >> 4U)))
                                                           ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__37__KET__)
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                       >> 3U)))
                                                            ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__45__KET__)
                                                            : (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__53__KET__)))) 
                                                        << 1U) 
                                                       | ((1U 
                                                           & (IData)(
                                                                     (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                      >> 5U)))
                                                           ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__20__KET__)
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                       >> 4U)))
                                                            ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__36__KET__)
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                        >> 3U)))
                                                             ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__44__KET__)
                                                             : (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__52__KET__)))))) 
                                                   << 0x00000014U) 
                                                  | ((((((1U 
                                                          & (IData)(
                                                                    (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                     >> 5U)))
                                                          ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__19__KET__)
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                      >> 4U)))
                                                           ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__35__KET__)
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                       >> 3U)))
                                                            ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__43__KET__)
                                                            : (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__51__KET__)))) 
                                                        << 3U) 
                                                       | (((1U 
                                                            & (IData)(
                                                                      (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                       >> 5U)))
                                                            ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__18__KET__)
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                        >> 4U)))
                                                             ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__34__KET__)
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                         >> 3U)))
                                                              ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__42__KET__)
                                                              : (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__50__KET__)))) 
                                                          << 2U)) 
                                                      | ((((1U 
                                                            & (IData)(
                                                                      (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                       >> 5U)))
                                                            ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__17__KET__)
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                        >> 4U)))
                                                             ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__33__KET__)
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                         >> 3U)))
                                                              ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__41__KET__)
                                                              : (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__49__KET__)))) 
                                                          << 1U) 
                                                         | ((1U 
                                                             & (IData)(
                                                                       (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                        >> 5U)))
                                                             ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__16__KET__)
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                         >> 4U)))
                                                              ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__32__KET__)
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                          >> 3U)))
                                                               ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__40__KET__)
                                                               : (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s3__BRA__48__KET__)))))) 
                                                     << 0x00000010U))) 
                             | ((((((((1U & (IData)(
                                                    (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                     >> 5U)))
                                       ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__15__KET__)
                                       : ((1U & (IData)(
                                                        (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                         >> 4U)))
                                           ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__31__KET__)
                                           : (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__47__KET__))) 
                                     << 3U) | (((1U 
                                                 & (IData)(
                                                           (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                            >> 5U)))
                                                 ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__14__KET__)
                                                 : 
                                                ((1U 
                                                  & (IData)(
                                                            (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                             >> 4U)))
                                                  ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__30__KET__)
                                                  : (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__46__KET__))) 
                                               << 2U)) 
                                   | ((((1U & (IData)(
                                                      (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                       >> 5U)))
                                         ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__13__KET__)
                                         : ((1U & (IData)(
                                                          (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                           >> 4U)))
                                             ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__29__KET__)
                                             : (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__45__KET__))) 
                                       << 1U) | ((1U 
                                                  & (IData)(
                                                            (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                             >> 5U)))
                                                  ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__12__KET__)
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                              >> 4U)))
                                                   ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__28__KET__)
                                                   : (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__44__KET__))))) 
                                  << 0x0000000cU) | 
                                 ((((((1U & (IData)(
                                                    (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                     >> 5U)))
                                       ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__11__KET__)
                                       : ((1U & (IData)(
                                                        (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                         >> 4U)))
                                           ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__27__KET__)
                                           : (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__43__KET__))) 
                                     << 3U) | (((1U 
                                                 & (IData)(
                                                           (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                            >> 5U)))
                                                 ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__10__KET__)
                                                 : 
                                                ((1U 
                                                  & (IData)(
                                                            (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                             >> 4U)))
                                                  ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__26__KET__)
                                                  : (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__42__KET__))) 
                                               << 2U)) 
                                   | ((((1U & (IData)(
                                                      (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                       >> 5U)))
                                         ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__9__KET__)
                                         : ((1U & (IData)(
                                                          (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                           >> 4U)))
                                             ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__25__KET__)
                                             : (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__41__KET__))) 
                                       << 1U) | ((1U 
                                                  & (IData)(
                                                            (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                             >> 5U)))
                                                  ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__8__KET__)
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                              >> 4U)))
                                                   ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__24__KET__)
                                                   : (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__40__KET__))))) 
                                  << 8U)) | (((((((1U 
                                                   & (IData)(
                                                             (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                              >> 5U)))
                                                   ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__7__KET__)
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                               >> 4U)))
                                                    ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__23__KET__)
                                                    : (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__39__KET__))) 
                                                 << 3U) 
                                                | (((1U 
                                                     & (IData)(
                                                               (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                >> 5U)))
                                                     ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__6__KET__)
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                 >> 4U)))
                                                      ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__22__KET__)
                                                      : (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__38__KET__))) 
                                                   << 2U)) 
                                               | ((((1U 
                                                     & (IData)(
                                                               (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                >> 5U)))
                                                     ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__5__KET__)
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                 >> 4U)))
                                                      ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__21__KET__)
                                                      : (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__37__KET__))) 
                                                   << 1U) 
                                                  | ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                 >> 5U)))
                                                      ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__4__KET__)
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                  >> 4U)))
                                                       ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__20__KET__)
                                                       : (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__36__KET__))))) 
                                              << 4U) 
                                             | (((((1U 
                                                    & (IData)(
                                                              (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                               >> 5U)))
                                                    ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__3__KET__)
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                >> 4U)))
                                                     ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__19__KET__)
                                                     : (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__35__KET__))) 
                                                  << 3U) 
                                                 | (((1U 
                                                      & (IData)(
                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                 >> 5U)))
                                                      ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__2__KET__)
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                  >> 4U)))
                                                       ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__18__KET__)
                                                       : (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__34__KET__))) 
                                                    << 2U)) 
                                                | ((((1U 
                                                      & (IData)(
                                                                (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                 >> 5U)))
                                                      ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__1__KET__)
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                  >> 4U)))
                                                       ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__17__KET__)
                                                       : (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__33__KET__))) 
                                                    << 1U) 
                                                   | ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                  >> 5U)))
                                                       ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__0__KET__)
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                   >> 4U)))
                                                        ? (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__16__KET__)
                                                        : (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s4__BRA__32__KET__)))))))))) 
            << 0x00000020U) | (QData)((IData)((((((
                                                   (((((~ (IData)(
                                                                  (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                   >> 5U))) 
                                                       & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__31__KET__)) 
                                                      << 3U) 
                                                     | (((~ (IData)(
                                                                    (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                     >> 5U))) 
                                                         & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__30__KET__)) 
                                                        << 2U)) 
                                                    | ((((~ (IData)(
                                                                    (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                     >> 5U))) 
                                                         & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__29__KET__)) 
                                                        << 1U) 
                                                       | ((~ (IData)(
                                                                     (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                      >> 5U))) 
                                                          & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__28__KET__)))) 
                                                   << 0x0000000cU) 
                                                  | ((((((~ (IData)(
                                                                    (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                     >> 5U))) 
                                                         & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__27__KET__)) 
                                                        << 3U) 
                                                       | (((~ (IData)(
                                                                      (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                       >> 5U))) 
                                                           & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__26__KET__)) 
                                                          << 2U)) 
                                                      | ((((~ (IData)(
                                                                      (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                       >> 5U))) 
                                                           & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__25__KET__)) 
                                                          << 1U) 
                                                         | ((~ (IData)(
                                                                       (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                        >> 5U))) 
                                                            & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__24__KET__)))) 
                                                     << 8U)) 
                                                 | (((((((~ (IData)(
                                                                    (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                     >> 5U))) 
                                                         & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__23__KET__)) 
                                                        << 3U) 
                                                       | (((~ (IData)(
                                                                      (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                       >> 5U))) 
                                                           & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__22__KET__)) 
                                                          << 2U)) 
                                                      | ((((~ (IData)(
                                                                      (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                       >> 5U))) 
                                                           & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__21__KET__)) 
                                                          << 1U) 
                                                         | ((~ (IData)(
                                                                       (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                        >> 5U))) 
                                                            & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__20__KET__)))) 
                                                     << 4U) 
                                                    | (((((~ (IData)(
                                                                     (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                      >> 5U))) 
                                                          & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__19__KET__)) 
                                                         << 3U) 
                                                        | (((~ (IData)(
                                                                       (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                        >> 5U))) 
                                                            & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__18__KET__)) 
                                                           << 2U)) 
                                                       | ((((~ (IData)(
                                                                       (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                        >> 5U))) 
                                                            & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__17__KET__)) 
                                                           << 1U) 
                                                          | ((~ (IData)(
                                                                        (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                         >> 5U))) 
                                                             & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__16__KET__)))))) 
                                                << 0x00000010U) 
                                               | ((((((((~ (IData)(
                                                                   (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                    >> 5U))) 
                                                        & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__15__KET__)) 
                                                       << 3U) 
                                                      | (((~ (IData)(
                                                                     (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                      >> 5U))) 
                                                          & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__14__KET__)) 
                                                         << 2U)) 
                                                     | ((((~ (IData)(
                                                                     (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                      >> 5U))) 
                                                          & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__13__KET__)) 
                                                         << 1U) 
                                                        | ((~ (IData)(
                                                                      (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                       >> 5U))) 
                                                           & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__12__KET__)))) 
                                                    << 0x0000000cU) 
                                                   | ((((((~ (IData)(
                                                                     (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                      >> 5U))) 
                                                          & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__11__KET__)) 
                                                         << 3U) 
                                                        | (((~ (IData)(
                                                                       (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                        >> 5U))) 
                                                            & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__10__KET__)) 
                                                           << 2U)) 
                                                       | ((((~ (IData)(
                                                                       (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                        >> 5U))) 
                                                            & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__9__KET__)) 
                                                           << 1U) 
                                                          | ((~ (IData)(
                                                                        (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                         >> 5U))) 
                                                             & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__8__KET__)))) 
                                                      << 8U)) 
                                                  | (((((((~ (IData)(
                                                                     (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                      >> 5U))) 
                                                          & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__7__KET__)) 
                                                         << 3U) 
                                                        | (((~ (IData)(
                                                                       (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                        >> 5U))) 
                                                            & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__6__KET__)) 
                                                           << 2U)) 
                                                       | ((((~ (IData)(
                                                                       (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                        >> 5U))) 
                                                            & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__5__KET__)) 
                                                           << 1U) 
                                                          | ((~ (IData)(
                                                                        (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                         >> 5U))) 
                                                             & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__4__KET__)))) 
                                                      << 4U) 
                                                     | (((((~ (IData)(
                                                                      (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                       >> 5U))) 
                                                           & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__3__KET__)) 
                                                          << 3U) 
                                                         | (((~ (IData)(
                                                                        (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                         >> 5U))) 
                                                             & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__2__KET__)) 
                                                            << 2U)) 
                                                        | ((((~ (IData)(
                                                                        (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                         >> 5U))) 
                                                             & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__1__KET__)) 
                                                            << 1U) 
                                                           | ((~ (IData)(
                                                                         (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_op_b 
                                                                          >> 5U))) 
                                                              & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__u_sll__DOT__s5__BRA__0__KET__))))))))));
}

void Vsoc_top___024root__nba_mtask59(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root__nba_mtask59\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Verilated::mtaskId(59);
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsoc_top___024root___nba_sequent__TOP__64(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vsoc_top___024root___nba_sequent__TOP__65(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__65\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
                                             : vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__addsub_res)))
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
                        : vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__addsub_res))));
    vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_result_raw 
        = ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__is_m_ext)
            ? vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__multdiv_result
            : vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_res);
}

void Vsoc_top___024root___nba_comb__TOP__4(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__4\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

void Vsoc_top___024root__nba_mtask60(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root__nba_mtask60\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Verilated::mtaskId(60);
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_res 
            = ((8U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_ctrl))
                ? ((4U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_ctrl))
                    ? ((2U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_ctrl))
                        ? 0ULL : ((1U & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_ctrl))
                                   ? vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__sra_res
                                   : 0ULL)) : ((2U 
                                                & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_ctrl))
                                                ? 0ULL
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_ctrl))
                                                    ? 0ULL
                                                    : vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__addsub_res)))
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
                            : (QData)((IData)((1U & 
                                               (((1U 
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
                            : vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_alu__DOT__addsub_res))));
        vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_result_raw 
            = ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__is_m_ext)
                ? vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__multdiv_result
                : vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_res);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.soc_top__DOT__u_core__DOT__ex_alu_result 
            = ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_is_csr)
                ? vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__csr_rdata
                : ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_is_32bit)
                    ? (((QData)((IData)((- (IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_result_raw 
                                                               >> 0x0000001fU))))))) 
                        << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_result_raw)))
                    : vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__alu_result_raw));
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vsoc_top___024root___nba_comb__TOP__5(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__5\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

void Vsoc_top___024root__nba_mtask61(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root__nba_mtask61\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Verilated::mtaskId(61);
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsoc_top___024root___nba_comb__TOP__5(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vsoc_top___024root___nba_sequent__TOP__66(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__66\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__u_core__DOT__id_is_csr = 0U;
    vlSelfRef.soc_top__DOT__u_core__DOT__id_ALUSrc = 0U;
    if (((((((((0x33U == (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction)) 
               | (0x3bU == (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) 
              | (0x13U == (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) 
             | (0x1bU == (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) 
            | (3U == (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) 
           | (0x23U == (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) 
          | (0x63U == (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) 
         | (0x6fU == (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction)))) {
        if ((0x33U != (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) {
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
            }
        }
    } else if ((0x67U == (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) {
        vlSelfRef.soc_top__DOT__u_core__DOT__id_ALUSrc = 1U;
    } else if ((0x37U == (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) {
        vlSelfRef.soc_top__DOT__u_core__DOT__id_ALUSrc = 1U;
    } else if ((0x17U == (0x0000007fU & vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction))) {
        vlSelfRef.soc_top__DOT__u_core__DOT__id_ALUSrc = 1U;
    }
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
    if (((IData)(vlSelfRef.rst) | (IData)(vlSelfRef.soc_top__DOT__u_core__DOT____Vcellinp__u_id_ex__flush))) {
        vlSelfRef.soc_top__DOT__u_core__DOT__ex_is_mret = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__id_ex_stall)))) {
        vlSelfRef.soc_top__DOT__u_core__DOT__ex_is_mret 
            = vlSelfRef.soc_top__DOT__u_core__DOT__id_is_mret;
    }
    vlSelfRef.soc_top__DOT__u_core__DOT__id_ex_stall 
        = ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__is_m_ext) 
           & (3U != (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__u_multdiv__DOT__state)));
    vlSelfRef.soc_top__DOT__u_core__DOT__id_is_mret = 0U;
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
                        if ((0U != (7U & (vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction 
                                          >> 0x0000000cU)))) {
                            vlSelfRef.soc_top__DOT__u_core__DOT__id_is_csr = 1U;
                        }
                        if ((0U == (7U & (vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction 
                                          >> 0x0000000cU)))) {
                            if ((0x0302U == (vlSelfRef.soc_top__DOT__u_core__DOT__id_instruction 
                                             >> 0x00000014U))) {
                                vlSelfRef.soc_top__DOT__u_core__DOT__id_is_mret = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.soc_top__DOT__u_core__DOT__pc_stall = 
        ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__id_ex_flush_ext) 
         | (IData)(vlSelfRef.soc_top__DOT__u_core__DOT__id_ex_stall));
}

void Vsoc_top___024root___nba_comb__TOP__6(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__6\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.soc_top__DOT__u_core__DOT__trap_target_pc 
        = ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_is_mret)
            ? vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__mepc_out
            : vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__mtvec_out);
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

void Vsoc_top___024root__nba_mtask62(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root__nba_mtask62\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Verilated::mtaskId(62);
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsoc_top___024root___nba_sequent__TOP__66(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
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
        vlSelfRef.soc_top__DOT__u_core__DOT__trap_target_pc 
            = ((IData)(vlSelfRef.soc_top__DOT__u_core__DOT__ex_is_mret)
                ? vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__mepc_out
                : vlSelfRef.soc_top__DOT__u_core__DOT__u_ex__DOT__mtvec_out);
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
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
}

void Vsoc_top___024root____Vthread__nba__s0__t0(void* voidSelf, bool even_cycle);
void Vsoc_top___024root____Vthread__nba__s0__t1(void* voidSelf, bool even_cycle);
void Vsoc_top___024root____Vthread__nba__s0__t2(void* voidSelf, bool even_cycle);
void Vsoc_top___024root____Vthread__nba__s0__t3(void* voidSelf, bool even_cycle);

void Vsoc_top___024root___eval_nba(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___eval_nba\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->__Vm_even_cycle__nba = !vlSymsp->__Vm_even_cycle__nba;
    vlSymsp->__Vm_threadPoolp->workerp(0)->addTask(&Vsoc_top___024root____Vthread__nba__s0__t0, vlSelf, vlSymsp->__Vm_even_cycle__nba);
    vlSymsp->__Vm_threadPoolp->workerp(1)->addTask(&Vsoc_top___024root____Vthread__nba__s0__t1, vlSelf, vlSymsp->__Vm_even_cycle__nba);
    vlSymsp->__Vm_threadPoolp->workerp(2)->addTask(&Vsoc_top___024root____Vthread__nba__s0__t2, vlSelf, vlSymsp->__Vm_even_cycle__nba);
    Vsoc_top___024root____Vthread__nba__s0__t3(vlSelf, vlSymsp->__Vm_even_cycle__nba);
    vlSelf->__Vm_mtaskstate_final__0nba.waitUntilUpstreamDone(vlSymsp->__Vm_even_cycle__nba);
    Verilated::mtaskId(0);
}

void Vsoc_top___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vsoc_top___024root___eval_triggers__act(Vsoc_top___024root* vlSelf);

bool Vsoc_top___024root___eval_phase__act(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___eval_phase__act\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsoc_top___024root___eval_triggers__act(vlSelf);
    Vsoc_top___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vsoc_top___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vsoc_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

bool Vsoc_top___024root___eval_phase__nba(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___eval_phase__nba\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vsoc_top___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vsoc_top___024root___eval_nba(vlSelf);
        Vsoc_top___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsoc_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vsoc_top___024root___eval(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___eval\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vsoc_top___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("src/soc_top.v", 1, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vsoc_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("src/soc_top.v", 1, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vsoc_top___024root___eval_phase__act(vlSelf));
    } while (Vsoc_top___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vsoc_top___024root___eval_debug_assertions(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___eval_debug_assertions\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");
    }
    if (VL_UNLIKELY(((vlSelfRef.spi_miso & 0xfeU)))) {
        Verilated::overWidthError("spi_miso");
    }
}
#endif  // VL_DEBUG

void Vsoc_top___024root__nba_mtask3(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root__nba_mtask5(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root__nba_mtask17(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root__nba_mtask12(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root__nba_mtask33(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root__nba_mtask39(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root__nba_mtask31(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root__nba_mtask48(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root__nba_mtask32(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root__nba_mtask53(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root__nba_mtask36(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root__nba_mtask38(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root__nba_mtask51(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root__nba_mtask40(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root__nba_mtask45(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root__nba_mtask56(Vsoc_top___024root* vlSelf);

void Vsoc_top___024root____Vthread__nba__s0__t0(void* voidSelf, bool even_cycle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root____Vthread__nba__s0__t0\n"); );
    // Body
    Vsoc_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsoc_top___024root*>(voidSelf);
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vsoc_top___024root__nba_mtask3((&vlSymsp->TOP));
    vlSelf->__Vm_mtaskstate_7.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_8.signalUpstreamDone(even_cycle);
    Vsoc_top___024root__nba_mtask5((&vlSymsp->TOP));
    vlSelf->__Vm_mtaskstate_10.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_17.waitUntilUpstreamDone(even_cycle);
    Vsoc_top___024root__nba_mtask17((&vlSymsp->TOP));
    vlSelf->__Vm_mtaskstate_26.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_27.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_12.waitUntilUpstreamDone(even_cycle);
    Vsoc_top___024root__nba_mtask12((&vlSymsp->TOP));
    vlSelf->__Vm_mtaskstate_20.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_23.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_46.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_33.waitUntilUpstreamDone(even_cycle);
    Vsoc_top___024root__nba_mtask33((&vlSymsp->TOP));
    vlSelf->__Vm_mtaskstate_39.waitUntilUpstreamDone(even_cycle);
    Vsoc_top___024root__nba_mtask39((&vlSymsp->TOP));
    vlSelf->__Vm_mtaskstate_41.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_42.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_31.waitUntilUpstreamDone(even_cycle);
    Vsoc_top___024root__nba_mtask31((&vlSymsp->TOP));
    vlSelf->__Vm_mtaskstate_34.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_35.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_37.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_48.waitUntilUpstreamDone(even_cycle);
    Vsoc_top___024root__nba_mtask48((&vlSymsp->TOP));
    vlSelf->__Vm_mtaskstate_57.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_58.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_32.waitUntilUpstreamDone(even_cycle);
    Vsoc_top___024root__nba_mtask32((&vlSymsp->TOP));
    vlSelf->__Vm_mtaskstate_53.waitUntilUpstreamDone(even_cycle);
    Vsoc_top___024root__nba_mtask53((&vlSymsp->TOP));
    vlSelf->__Vm_mtaskstate_59.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_36.waitUntilUpstreamDone(even_cycle);
    Vsoc_top___024root__nba_mtask36((&vlSymsp->TOP));
    vlSelf->__Vm_mtaskstate_38.waitUntilUpstreamDone(even_cycle);
    Vsoc_top___024root__nba_mtask38((&vlSymsp->TOP));
    vlSelf->__Vm_mtaskstate_54.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_51.waitUntilUpstreamDone(even_cycle);
    Vsoc_top___024root__nba_mtask51((&vlSymsp->TOP));
    vlSelf->__Vm_mtaskstate_54.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_40.waitUntilUpstreamDone(even_cycle);
    Vsoc_top___024root__nba_mtask40((&vlSymsp->TOP));
    vlSelf->__Vm_mtaskstate_60.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_45.waitUntilUpstreamDone(even_cycle);
    Vsoc_top___024root__nba_mtask45((&vlSymsp->TOP));
    vlSelf->__Vm_mtaskstate_56.waitUntilUpstreamDone(even_cycle);
    Vsoc_top___024root__nba_mtask56((&vlSymsp->TOP));
    vlSelf->__Vm_mtaskstate_final__0nba.signalUpstreamDone(even_cycle);
}

void Vsoc_top___024root__nba_mtask2(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root__nba_mtask7(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root__nba_mtask16(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root__nba_mtask13(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root__nba_mtask14(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root__nba_mtask21(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root__nba_mtask26(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root__nba_mtask46(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root__nba_mtask29(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root__nba_mtask49(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root__nba_mtask37(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root__nba_mtask57(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root__nba_mtask34(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root__nba_mtask35(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root__nba_mtask43(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root__nba_mtask50(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root__nba_mtask55(Vsoc_top___024root* vlSelf);

void Vsoc_top___024root____Vthread__nba__s0__t1(void* voidSelf, bool even_cycle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root____Vthread__nba__s0__t1\n"); );
    // Body
    Vsoc_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsoc_top___024root*>(voidSelf);
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vsoc_top___024root__nba_mtask2((&vlSymsp->TOP));
    vlSelf->__Vm_mtaskstate_6.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_10.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_7.waitUntilUpstreamDone(even_cycle);
    Vsoc_top___024root__nba_mtask7((&vlSymsp->TOP));
    vlSelf->__Vm_mtaskstate_10.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_16.waitUntilUpstreamDone(even_cycle);
    Vsoc_top___024root__nba_mtask16((&vlSymsp->TOP));
    vlSelf->__Vm_mtaskstate_25.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_27.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_13.waitUntilUpstreamDone(even_cycle);
    Vsoc_top___024root__nba_mtask13((&vlSymsp->TOP));
    vlSelf->__Vm_mtaskstate_20.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_14.waitUntilUpstreamDone(even_cycle);
    Vsoc_top___024root__nba_mtask14((&vlSymsp->TOP));
    vlSelf->__Vm_mtaskstate_27.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_31.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_21.waitUntilUpstreamDone(even_cycle);
    Vsoc_top___024root__nba_mtask21((&vlSymsp->TOP));
    vlSelf->__Vm_mtaskstate_23.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_26.waitUntilUpstreamDone(even_cycle);
    Vsoc_top___024root__nba_mtask26((&vlSymsp->TOP));
    vlSelf->__Vm_mtaskstate_30.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_32.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_46.waitUntilUpstreamDone(even_cycle);
    Vsoc_top___024root__nba_mtask46((&vlSymsp->TOP));
    vlSelf->__Vm_mtaskstate_47.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_48.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_52.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_29.waitUntilUpstreamDone(even_cycle);
    Vsoc_top___024root__nba_mtask29((&vlSymsp->TOP));
    vlSelf->__Vm_mtaskstate_32.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_36.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_38.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_49.waitUntilUpstreamDone(even_cycle);
    Vsoc_top___024root__nba_mtask49((&vlSymsp->TOP));
    vlSelf->__Vm_mtaskstate_58.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_37.waitUntilUpstreamDone(even_cycle);
    Vsoc_top___024root__nba_mtask37((&vlSymsp->TOP));
    vlSelf->__Vm_mtaskstate_40.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_51.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_57.waitUntilUpstreamDone(even_cycle);
    Vsoc_top___024root__nba_mtask57((&vlSymsp->TOP));
    vlSelf->__Vm_mtaskstate_59.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_34.waitUntilUpstreamDone(even_cycle);
    Vsoc_top___024root__nba_mtask34((&vlSymsp->TOP));
    vlSelf->__Vm_mtaskstate_40.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_54.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_35.waitUntilUpstreamDone(even_cycle);
    Vsoc_top___024root__nba_mtask35((&vlSymsp->TOP));
    vlSelf->__Vm_mtaskstate_40.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_54.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_43.waitUntilUpstreamDone(even_cycle);
    Vsoc_top___024root__nba_mtask43((&vlSymsp->TOP));
    vlSelf->__Vm_mtaskstate_60.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_50.waitUntilUpstreamDone(even_cycle);
    Vsoc_top___024root__nba_mtask50((&vlSymsp->TOP));
    vlSelf->__Vm_mtaskstate_56.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_60.signalUpstreamDone(even_cycle);
    Vsoc_top___024root__nba_mtask55((&vlSymsp->TOP));
    vlSelf->__Vm_mtaskstate_final__0nba.signalUpstreamDone(even_cycle);
}

void Vsoc_top___024root__nba_mtask4(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root__nba_mtask8(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root__nba_mtask10(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root__nba_mtask22(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root__nba_mtask28(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root__nba_mtask20(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root__nba_mtask27(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root__nba_mtask25(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root__nba_mtask24(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root__nba_mtask30(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root__nba_mtask42(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root__nba_mtask58(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root__nba_mtask9(Vsoc_top___024root* vlSelf);

void Vsoc_top___024root____Vthread__nba__s0__t2(void* voidSelf, bool even_cycle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root____Vthread__nba__s0__t2\n"); );
    // Body
    Vsoc_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsoc_top___024root*>(voidSelf);
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vsoc_top___024root__nba_mtask4((&vlSymsp->TOP));
    vlSelf->__Vm_mtaskstate_7.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_8.waitUntilUpstreamDone(even_cycle);
    Vsoc_top___024root__nba_mtask8((&vlSymsp->TOP));
    vlSelf->__Vm_mtaskstate_10.waitUntilUpstreamDone(even_cycle);
    Vsoc_top___024root__nba_mtask10((&vlSymsp->TOP));
    vlSelf->__Vm_mtaskstate_11.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_12.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_13.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_14.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_15.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_16.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_17.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_18.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_21.signalUpstreamDone(even_cycle);
    Vsoc_top___024root__nba_mtask22((&vlSymsp->TOP));
    vlSelf->__Vm_mtaskstate_33.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_44.signalUpstreamDone(even_cycle);
    Vsoc_top___024root__nba_mtask28((&vlSymsp->TOP));
    vlSelf->__Vm_mtaskstate_39.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_20.waitUntilUpstreamDone(even_cycle);
    Vsoc_top___024root__nba_mtask20((&vlSymsp->TOP));
    vlSelf->__Vm_mtaskstate_49.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_52.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_27.waitUntilUpstreamDone(even_cycle);
    Vsoc_top___024root__nba_mtask27((&vlSymsp->TOP));
    vlSelf->__Vm_mtaskstate_32.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_34.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_35.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_37.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_38.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_25.waitUntilUpstreamDone(even_cycle);
    Vsoc_top___024root__nba_mtask25((&vlSymsp->TOP));
    vlSelf->__Vm_mtaskstate_32.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_37.signalUpstreamDone(even_cycle);
    Vsoc_top___024root__nba_mtask24((&vlSymsp->TOP));
    vlSelf->__Vm_mtaskstate_53.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_30.waitUntilUpstreamDone(even_cycle);
    Vsoc_top___024root__nba_mtask30((&vlSymsp->TOP));
    vlSelf->__Vm_mtaskstate_34.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_35.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_36.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_38.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_42.waitUntilUpstreamDone(even_cycle);
    Vsoc_top___024root__nba_mtask42((&vlSymsp->TOP));
    vlSelf->__Vm_mtaskstate_43.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_58.waitUntilUpstreamDone(even_cycle);
    Vsoc_top___024root__nba_mtask58((&vlSymsp->TOP));
    vlSelf->__Vm_mtaskstate_59.waitUntilUpstreamDone(even_cycle);
    Vsoc_top___024root__nba_mtask59((&vlSymsp->TOP));
    vlSelf->__Vm_mtaskstate_9.waitUntilUpstreamDone(even_cycle);
    Vsoc_top___024root__nba_mtask9((&vlSymsp->TOP));
    vlSelf->__Vm_mtaskstate_60.waitUntilUpstreamDone(even_cycle);
    Vsoc_top___024root__nba_mtask60((&vlSymsp->TOP));
    vlSelf->__Vm_mtaskstate_62.signalUpstreamDone(even_cycle);
    Vsoc_top___024root__nba_mtask61((&vlSymsp->TOP));
    vlSelf->__Vm_mtaskstate_final__0nba.signalUpstreamDone(even_cycle);
}

void Vsoc_top___024root__nba_mtask0(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root__nba_mtask1(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root__nba_mtask6(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root__nba_mtask15(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root__nba_mtask18(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root__nba_mtask11(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root__nba_mtask19(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root__nba_mtask23(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root__nba_mtask52(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root__nba_mtask47(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root__nba_mtask41(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root__nba_mtask44(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root__nba_mtask54(Vsoc_top___024root* vlSelf);

void Vsoc_top___024root____Vthread__nba__s0__t3(void* voidSelf, bool even_cycle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root____Vthread__nba__s0__t3\n"); );
    // Body
    Vsoc_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsoc_top___024root*>(voidSelf);
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vsoc_top___024root__nba_mtask0((&vlSymsp->TOP));
    vlSelf->__Vm_mtaskstate_7.signalUpstreamDone(even_cycle);
    Vsoc_top___024root__nba_mtask1((&vlSymsp->TOP));
    vlSelf->__Vm_mtaskstate_10.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_6.waitUntilUpstreamDone(even_cycle);
    Vsoc_top___024root__nba_mtask6((&vlSymsp->TOP));
    vlSelf->__Vm_mtaskstate_9.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_45.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_60.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_15.waitUntilUpstreamDone(even_cycle);
    Vsoc_top___024root__nba_mtask15((&vlSymsp->TOP));
    vlSelf->__Vm_mtaskstate_25.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_29.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_18.waitUntilUpstreamDone(even_cycle);
    Vsoc_top___024root__nba_mtask18((&vlSymsp->TOP));
    vlSelf->__Vm_mtaskstate_26.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_27.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_31.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_46.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_11.waitUntilUpstreamDone(even_cycle);
    Vsoc_top___024root__nba_mtask11((&vlSymsp->TOP));
    vlSelf->__Vm_mtaskstate_46.signalUpstreamDone(even_cycle);
    Vsoc_top___024root__nba_mtask19((&vlSymsp->TOP));
    vlSelf->__Vm_mtaskstate_49.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_23.waitUntilUpstreamDone(even_cycle);
    Vsoc_top___024root__nba_mtask23((&vlSymsp->TOP));
    vlSelf->__Vm_mtaskstate_57.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_52.waitUntilUpstreamDone(even_cycle);
    Vsoc_top___024root__nba_mtask52((&vlSymsp->TOP));
    vlSelf->__Vm_mtaskstate_53.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_57.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_58.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_47.waitUntilUpstreamDone(even_cycle);
    Vsoc_top___024root__nba_mtask47((&vlSymsp->TOP));
    vlSelf->__Vm_mtaskstate_59.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_41.waitUntilUpstreamDone(even_cycle);
    Vsoc_top___024root__nba_mtask41((&vlSymsp->TOP));
    vlSelf->__Vm_mtaskstate_43.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_44.waitUntilUpstreamDone(even_cycle);
    Vsoc_top___024root__nba_mtask44((&vlSymsp->TOP));
    vlSelf->__Vm_mtaskstate_45.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_50.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_54.waitUntilUpstreamDone(even_cycle);
    Vsoc_top___024root__nba_mtask54((&vlSymsp->TOP));
    vlSelf->__Vm_mtaskstate_60.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_62.waitUntilUpstreamDone(even_cycle);
    Vsoc_top___024root__nba_mtask62((&vlSymsp->TOP));
    vlSelf->__Vm_mtaskstate_final__0nba.signalUpstreamDone(even_cycle);
}
