// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfifo.h for the primary calling header

#include "Vfifo__pch.h"

void Vfifo___024root___ctor_var_reset(Vfifo___024root* vlSelf);

Vfifo___024root::Vfifo___024root(Vfifo__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vfifo___024root___ctor_var_reset(this);
}

void Vfifo___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vfifo___024root::~Vfifo___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
