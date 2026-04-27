// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfifo.h for the primary calling header

#ifndef VERILATED_VFIFO___024ROOT_H_
#define VERILATED_VFIFO___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vfifo__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfifo___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb__DOT__clk;
    CData/*0:0*/ tb__DOT__rst;
    CData/*0:0*/ tb__DOT__wr_en;
    CData/*0:0*/ tb__DOT__rd_en;
    CData/*7:0*/ tb__DOT__din;
    CData/*7:0*/ tb__DOT__dout;
    CData/*0:0*/ tb__DOT__full;
    CData/*0:0*/ tb__DOT__empty;
    CData/*1:0*/ tb__DOT__dut__DOT__wptr;
    CData/*1:0*/ tb__DOT__dut__DOT__rptr;
    CData/*2:0*/ tb__DOT__dut__DOT__count;
    CData/*1:0*/ __Vdly__tb__DOT__dut__DOT__wptr;
    CData/*1:0*/ __Vdly__tb__DOT__dut__DOT__rptr;
    CData/*2:0*/ __Vdly__tb__DOT__dut__DOT__count;
    CData/*0:0*/ __Vdly__tb__DOT__full;
    CData/*0:0*/ __Vdly__tb__DOT__empty;
    CData/*0:0*/ __VdlySet__tb__DOT__dut__DOT__mem__v0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb__DOT__rst__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<CData/*7:0*/, 4> tb__DOT__dut__DOT__mem;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;

    // INTERNAL VARIABLES
    Vfifo__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vfifo___024root(Vfifo__Syms* symsp, const char* namep);
    ~Vfifo___024root();
    VL_UNCOPYABLE(Vfifo___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
