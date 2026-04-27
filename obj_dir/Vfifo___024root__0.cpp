// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfifo.h for the primary calling header

#include "Vfifo__pch.h"

VlCoroutine Vfifo___024root___eval_initial__TOP__Vtiming__0(Vfifo___024root* vlSelf);
VlCoroutine Vfifo___024root___eval_initial__TOP__Vtiming__1(Vfifo___024root* vlSelf);

void Vfifo___024root___eval_initial(Vfifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root___eval_initial\n"); );
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vfifo___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vfifo___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vfifo___024root___eval_initial__TOP__Vtiming__0(Vfifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile("fifo.vcd"s);
    vlSymsp->_traceDumpOpen();
    vlSelfRef.tb__DOT__clk = 0U;
    vlSelfRef.tb__DOT__rst = 1U;
    vlSelfRef.tb__DOT__wr_en = 0U;
    vlSelfRef.tb__DOT__rd_en = 0U;
    vlSelfRef.tb__DOT__din = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb.v", 
                                         37);
    vlSelfRef.tb__DOT__rst = 0U;
    vlSelfRef.tb__DOT__wr_en = 1U;
    vlSelfRef.tb__DOT__din = 0x11U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb.v", 
                                         39);
    vlSelfRef.tb__DOT__din = 0x22U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb.v", 
                                         40);
    vlSelfRef.tb__DOT__din = 0x33U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb.v", 
                                         41);
    vlSelfRef.tb__DOT__din = 0x44U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb.v", 
                                         42);
    vlSelfRef.tb__DOT__wr_en = 0U;
    vlSelfRef.tb__DOT__rd_en = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb.v", 
                                         45);
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb.v", 
                                         46);
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb.v", 
                                         47);
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb.v", 
                                         48);
    vlSelfRef.tb__DOT__rd_en = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000004e20ULL, 
                                         nullptr, "tb.v", 
                                         51);
    VL_FINISH_MT("tb.v", 51, "");
    co_return;
}

VlCoroutine Vfifo___024root___eval_initial__TOP__Vtiming__1(Vfifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "tb.v", 
                                             25);
        vlSelfRef.tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb__DOT__clk)));
    }
    co_return;
}

void Vfifo___024root___eval_triggers_vec__act(Vfifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root___eval_triggers_vec__act\n"); );
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                      << 2U) 
                                                     | ((((IData)(vlSelfRef.tb__DOT__rst) 
                                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__rst__0))) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.tb__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__clk__0 
        = vlSelfRef.tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__rst__0 
        = vlSelfRef.tb__DOT__rst;
}

bool Vfifo___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vfifo___024root___nba_sequent__TOP__0(Vfifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root___nba_sequent__TOP__0\n"); );
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__tb__DOT__dut__DOT__wptr = vlSelfRef.tb__DOT__dut__DOT__wptr;
    vlSelfRef.__Vdly__tb__DOT__dut__DOT__rptr = vlSelfRef.tb__DOT__dut__DOT__rptr;
    vlSelfRef.__Vdly__tb__DOT__dut__DOT__count = vlSelfRef.tb__DOT__dut__DOT__count;
    vlSelfRef.__Vdly__tb__DOT__full = vlSelfRef.tb__DOT__full;
    vlSelfRef.__Vdly__tb__DOT__empty = vlSelfRef.tb__DOT__empty;
    vlSelfRef.__VdlySet__tb__DOT__dut__DOT__mem__v0 = 0U;
}

void Vfifo___024root___nba_sequent__TOP__1(Vfifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root___nba_sequent__TOP__1\n"); );
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("time=%0t din=%x dout=%x full=%b empty=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(vlSelfRef.tb__DOT__din),
                 8,vlSelfRef.tb__DOT__dout,1,(IData)(vlSelfRef.tb__DOT__full),
                 1,vlSelfRef.tb__DOT__empty);
}

void Vfifo___024root___nba_sequent__TOP__2(Vfifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root___nba_sequent__TOP__2\n"); );
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __VdlyVal__tb__DOT__dut__DOT__mem__v0;
    __VdlyVal__tb__DOT__dut__DOT__mem__v0 = 0;
    CData/*1:0*/ __VdlyDim0__tb__DOT__dut__DOT__mem__v0;
    __VdlyDim0__tb__DOT__dut__DOT__mem__v0 = 0;
    // Body
    if (vlSelfRef.tb__DOT__rst) {
        vlSelfRef.__Vdly__tb__DOT__dut__DOT__wptr = 0U;
        vlSelfRef.__Vdly__tb__DOT__dut__DOT__rptr = 0U;
        vlSelfRef.__Vdly__tb__DOT__dut__DOT__count = 0U;
        vlSelfRef.__Vdly__tb__DOT__full = 0U;
        vlSelfRef.__Vdly__tb__DOT__empty = 1U;
        vlSelfRef.tb__DOT__dout = 0U;
    } else {
        if (((IData)(vlSelfRef.tb__DOT__wr_en) & (~ (IData)(vlSelfRef.tb__DOT__full)))) {
            vlSelfRef.__Vdly__tb__DOT__dut__DOT__count 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.tb__DOT__dut__DOT__count)));
            __VdlyVal__tb__DOT__dut__DOT__mem__v0 = vlSelfRef.tb__DOT__din;
            __VdlyDim0__tb__DOT__dut__DOT__mem__v0 
                = vlSelfRef.tb__DOT__dut__DOT__wptr;
            vlSelfRef.__VdlySet__tb__DOT__dut__DOT__mem__v0 = 1U;
            vlSelfRef.__Vdly__tb__DOT__dut__DOT__wptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb__DOT__dut__DOT__wptr)));
        }
        if (((IData)(vlSelfRef.tb__DOT__rd_en) & (~ (IData)(vlSelfRef.tb__DOT__empty)))) {
            vlSelfRef.__Vdly__tb__DOT__dut__DOT__count 
                = (7U & ((IData)(vlSelfRef.tb__DOT__dut__DOT__count) 
                         - (IData)(1U)));
            vlSelfRef.tb__DOT__dout = vlSelfRef.tb__DOT__dut__DOT__mem
                [vlSelfRef.tb__DOT__dut__DOT__rptr];
            vlSelfRef.__Vdly__tb__DOT__dut__DOT__rptr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb__DOT__dut__DOT__rptr)));
        }
        vlSelfRef.__Vdly__tb__DOT__full = (4U == (IData)(vlSelfRef.tb__DOT__dut__DOT__count));
        vlSelfRef.__Vdly__tb__DOT__empty = (0U == (IData)(vlSelfRef.tb__DOT__dut__DOT__count));
    }
    vlSelfRef.tb__DOT__dut__DOT__wptr = vlSelfRef.__Vdly__tb__DOT__dut__DOT__wptr;
    vlSelfRef.tb__DOT__dut__DOT__rptr = vlSelfRef.__Vdly__tb__DOT__dut__DOT__rptr;
    vlSelfRef.tb__DOT__dut__DOT__count = vlSelfRef.__Vdly__tb__DOT__dut__DOT__count;
    vlSelfRef.tb__DOT__full = vlSelfRef.__Vdly__tb__DOT__full;
    vlSelfRef.tb__DOT__empty = vlSelfRef.__Vdly__tb__DOT__empty;
    if (vlSelfRef.__VdlySet__tb__DOT__dut__DOT__mem__v0) {
        vlSelfRef.tb__DOT__dut__DOT__mem[__VdlyDim0__tb__DOT__dut__DOT__mem__v0] 
            = __VdlyVal__tb__DOT__dut__DOT__mem__v0;
    }
}

void Vfifo___024root___eval_nba(Vfifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root___eval_nba\n"); );
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vfifo___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vfifo___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vfifo___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

void Vfifo___024root___timing_resume(Vfifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root___timing_resume\n"); );
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vfifo___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfifo___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vfifo___024root___eval_phase__act(Vfifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root___eval_phase__act\n"); );
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vfifo___024root___eval_triggers_vec__act(vlSelf);
    Vfifo___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vfifo___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vfifo___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vfifo___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vfifo___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

bool Vfifo___024root___eval_phase__inact(Vfifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root___eval_phase__inact\n"); );
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb.v", 3, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vfifo___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vfifo___024root___eval_phase__nba(Vfifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root___eval_phase__nba\n"); );
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vfifo___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vfifo___024root___eval_nba(vlSelf);
        Vfifo___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vfifo___024root___eval(Vfifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root___eval\n"); );
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vfifo___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb.v", 3, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("tb.v", 3, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vfifo___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("tb.v", 3, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vfifo___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vfifo___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vfifo___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vfifo___024root___eval_debug_assertions(Vfifo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root___eval_debug_assertions\n"); );
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
