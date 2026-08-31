// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vsim_top__Syms.h"


void Vsim_top___024root__trace_chg_0_sub_0(Vsim_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vsim_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root__trace_chg_0\n"); );
    // Body
    Vsim_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsim_top___024root*>(voidSelf);
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vsim_top___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vsim_top___024root__trace_chg_0_sub_0(Vsim_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root__trace_chg_0_sub_0\n"); );
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.sim_top__DOT__done));
        bufp->chgBit(oldp+1,(vlSelfRef.sim_top__DOT__pass_all));
        bufp->chgBit(oldp+2,(vlSelfRef.sim_top__DOT__tb__DOT__we));
        bufp->chgBit(oldp+3,(vlSelfRef.sim_top__DOT__tb__DOT__din));
        bufp->chgBit(oldp+4,(vlSelfRef.sim_top__DOT__tb__DOT__rst_extra));
        bufp->chgIData(oldp+5,(vlSelfRef.sim_top__DOT__tb__DOT__nfail),32);
        bufp->chgIData(oldp+6,(vlSelfRef.sim_top__DOT__tb__DOT__npass),32);
    }
    bufp->chgBit(oldp+7,(vlSelfRef.sim_top__DOT__clk));
    bufp->chgBit(oldp+8,(vlSelfRef.sim_top__DOT__rst));
    bufp->chgBit(oldp+9,(vlSelfRef.sim_top__DOT__tb__DOT__q));
    bufp->chgBit(oldp+10,(((IData)(vlSelfRef.sim_top__DOT__rst) 
                           | (IData)(vlSelfRef.sim_top__DOT__tb__DOT__rst_extra))));
    bufp->chgBit(oldp+11,(((IData)(vlSelfRef.sim_top__DOT__tb__DOT__we)
                            ? (IData)(vlSelfRef.sim_top__DOT__tb__DOT__din)
                            : (IData)(vlSelfRef.sim_top__DOT__tb__DOT__q))));
}

void Vsim_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root__trace_cleanup\n"); );
    // Body
    Vsim_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsim_top___024root*>(voidSelf);
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
