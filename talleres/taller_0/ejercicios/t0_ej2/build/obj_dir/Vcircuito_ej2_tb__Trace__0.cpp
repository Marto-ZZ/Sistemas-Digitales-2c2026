// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_fst_c.h"
#include "Vcircuito_ej2_tb__Syms.h"


void Vcircuito_ej2_tb___024root__trace_chg_0_sub_0(Vcircuito_ej2_tb___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vcircuito_ej2_tb___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcircuito_ej2_tb___024root__trace_chg_0\n"); );
    // Body
    Vcircuito_ej2_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcircuito_ej2_tb___024root*>(voidSelf);
    Vcircuito_ej2_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vcircuito_ej2_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vcircuito_ej2_tb___024root__trace_chg_0_sub_0(Vcircuito_ej2_tb___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcircuito_ej2_tb___024root__trace_chg_0_sub_0\n"); );
    Vcircuito_ej2_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgCData(oldp+0,(vlSelfRef.circuito_ej2_tb__DOT__value),3);
        bufp->chgBit(oldp+1,((1U & ((IData)(vlSelfRef.circuito_ej2_tb__DOT__value) 
                                    >> 2U))));
        bufp->chgBit(oldp+2,((1U & ((IData)(vlSelfRef.circuito_ej2_tb__DOT__value) 
                                    >> 1U))));
        bufp->chgBit(oldp+3,((1U & (IData)(vlSelfRef.circuito_ej2_tb__DOT__value))));
        bufp->chgBit(oldp+4,((1U & ((IData)((6U == 
                                             (6U & (IData)(vlSelfRef.circuito_ej2_tb__DOT__value)))) 
                                    | (IData)((1U == 
                                               (5U 
                                                & (IData)(vlSelfRef.circuito_ej2_tb__DOT__value))))))));
        bufp->chgBit(oldp+5,(vlSelfRef.circuito_ej2_tb__DOT__done));
        bufp->chgBit(oldp+6,((IData)((6U == (6U & (IData)(vlSelfRef.circuito_ej2_tb__DOT__value))))));
        bufp->chgBit(oldp+7,((IData)((1U == (5U & (IData)(vlSelfRef.circuito_ej2_tb__DOT__value))))));
        bufp->chgBit(oldp+8,(vlSelfRef.circuito_ej2_tb__DOT__oracle__DOT__dv));
        bufp->chgBit(oldp+9,(vlSelfRef.circuito_ej2_tb__DOT__oracle__DOT__tests_passing));
        bufp->chgBit(oldp+10,(vlSelfRef.circuito_ej2_tb__DOT__oracle__DOT__first));
    }
    bufp->chgBit(oldp+11,(vlSelfRef.circuito_ej2_tb__DOT__clk));
    bufp->chgBit(oldp+12,(vlSelfRef.circuito_ej2_tb__DOT__rst));
}

void Vcircuito_ej2_tb___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcircuito_ej2_tb___024root__trace_cleanup\n"); );
    // Body
    Vcircuito_ej2_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcircuito_ej2_tb___024root*>(voidSelf);
    Vcircuito_ej2_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
