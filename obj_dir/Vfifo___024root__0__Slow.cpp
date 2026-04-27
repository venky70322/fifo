// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfifo.h for the primary calling header

#include "Vfifo__pch.h"

VL_ATTR_COLD void Vfifo___024root___eval_static(Vfifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root___eval_static\n"); );
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__clk__0 
        = vlSelfRef.tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__rst__0 
        = vlSelfRef.tb__DOT__rst;
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vfifo___024root___eval_final(Vfifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root___eval_final\n"); );
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vfifo___024root___eval_settle(Vfifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root___eval_settle\n"); );
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

bool Vfifo___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfifo___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vfifo___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge tb.rst)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vfifo___024root___ctor_var_reset(Vfifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root___ctor_var_reset\n"); );
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6743979137201610926ull);
    vlSelf->tb__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1156696098083290880ull);
    vlSelf->tb__DOT__wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3356372634300358166ull);
    vlSelf->tb__DOT__rd_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11409252414468141752ull);
    vlSelf->tb__DOT__din = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18252559219757070495ull);
    vlSelf->tb__DOT__dout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11903263544940607131ull);
    vlSelf->tb__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18425776955440643727ull);
    vlSelf->tb__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6595165909196775192ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb__DOT__dut__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17692772037244782821ull);
    }
    vlSelf->tb__DOT__dut__DOT__wptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3356974497154331070ull);
    vlSelf->tb__DOT__dut__DOT__rptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15453275246581660793ull);
    vlSelf->tb__DOT__dut__DOT__count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14392900413836799378ull);
    vlSelf->__Vdly__tb__DOT__dut__DOT__wptr = 0;
    vlSelf->__Vdly__tb__DOT__dut__DOT__rptr = 0;
    vlSelf->__Vdly__tb__DOT__dut__DOT__count = 0;
    vlSelf->__Vdly__tb__DOT__full = 0;
    vlSelf->__Vdly__tb__DOT__empty = 0;
    vlSelf->__VdlySet__tb__DOT__dut__DOT__mem__v0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__rst__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
