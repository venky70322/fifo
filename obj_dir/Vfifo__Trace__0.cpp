// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vfifo__Syms.h"


void Vfifo___024root__trace_chg_0_sub_0(Vfifo___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vfifo___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root__trace_chg_0\n"); );
    // Body
    Vfifo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfifo___024root*>(voidSelf);
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vfifo___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vfifo___024root__trace_chg_0_sub_0(Vfifo___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root__trace_chg_0_sub_0\n"); );
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgCData(oldp+0,(vlSelfRef.tb__DOT__dout),8);
        bufp->chgBit(oldp+1,(vlSelfRef.tb__DOT__full));
        bufp->chgBit(oldp+2,(vlSelfRef.tb__DOT__empty));
        bufp->chgCData(oldp+3,(vlSelfRef.tb__DOT__dut__DOT__mem[0]),8);
        bufp->chgCData(oldp+4,(vlSelfRef.tb__DOT__dut__DOT__mem[1]),8);
        bufp->chgCData(oldp+5,(vlSelfRef.tb__DOT__dut__DOT__mem[2]),8);
        bufp->chgCData(oldp+6,(vlSelfRef.tb__DOT__dut__DOT__mem[3]),8);
        bufp->chgCData(oldp+7,(vlSelfRef.tb__DOT__dut__DOT__wptr),2);
        bufp->chgCData(oldp+8,(vlSelfRef.tb__DOT__dut__DOT__rptr),2);
        bufp->chgCData(oldp+9,(vlSelfRef.tb__DOT__dut__DOT__count),3);
    }
    bufp->chgBit(oldp+10,(vlSelfRef.tb__DOT__clk));
    bufp->chgBit(oldp+11,(vlSelfRef.tb__DOT__rst));
    bufp->chgBit(oldp+12,(vlSelfRef.tb__DOT__wr_en));
    bufp->chgBit(oldp+13,(vlSelfRef.tb__DOT__rd_en));
    bufp->chgCData(oldp+14,(vlSelfRef.tb__DOT__din),8);
}

void Vfifo___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfifo___024root__trace_cleanup\n"); );
    // Body
    Vfifo___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfifo___024root*>(voidSelf);
    Vfifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
