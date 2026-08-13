// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcircuito_ej3_tb.h for the primary calling header

#include "Vcircuito_ej3_tb__pch.h"

VL_ATTR_COLD void Vcircuito_ej3_tb___024root___eval_static__TOP(Vcircuito_ej3_tb___024root* vlSelf);

VL_ATTR_COLD void Vcircuito_ej3_tb___024root___eval_static(Vcircuito_ej3_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcircuito_ej3_tb___024root___eval_static\n"); );
    Vcircuito_ej3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcircuito_ej3_tb___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__circuito_ej3_tb__DOT__clk__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__circuito_ej3_tb__DOT__done__0 
        = vlSelfRef.circuito_ej3_tb__DOT__done;
}

VL_ATTR_COLD void Vcircuito_ej3_tb___024root___eval_static__TOP(Vcircuito_ej3_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcircuito_ej3_tb___024root___eval_static__TOP\n"); );
    Vcircuito_ej3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.circuito_ej3_tb__DOT__clk = 0U;
    vlSelfRef.circuito_ej3_tb__DOT__rst = 1U;
}

VL_ATTR_COLD void Vcircuito_ej3_tb___024root___eval_final(Vcircuito_ej3_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcircuito_ej3_tb___024root___eval_final\n"); );
    Vcircuito_ej3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcircuito_ej3_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vcircuito_ej3_tb___024root___eval_phase__stl(Vcircuito_ej3_tb___024root* vlSelf);

VL_ATTR_COLD void Vcircuito_ej3_tb___024root___eval_settle(Vcircuito_ej3_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcircuito_ej3_tb___024root___eval_settle\n"); );
    Vcircuito_ej3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vcircuito_ej3_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("circuito_ej3_tb.sv", 4, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vcircuito_ej3_tb___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vcircuito_ej3_tb___024root___eval_triggers__stl(Vcircuito_ej3_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcircuito_ej3_tb___024root___eval_triggers__stl\n"); );
    Vcircuito_ej3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcircuito_ej3_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vcircuito_ej3_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcircuito_ej3_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcircuito_ej3_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vcircuito_ej3_tb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vcircuito_ej3_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcircuito_ej3_tb___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vcircuito_ej3_tb___024root___stl_sequent__TOP__0(Vcircuito_ej3_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcircuito_ej3_tb___024root___stl_sequent__TOP__0\n"); );
    Vcircuito_ej3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.circuito_ej3_tb__DOT__dut__DOT__y = (1U 
                                                   & ((IData)(
                                                              (1U 
                                                               == (IData)(vlSelfRef.circuito_ej3_tb__DOT__value))) 
                                                      | (IData)(
                                                                (2U 
                                                                 == (IData)(vlSelfRef.circuito_ej3_tb__DOT__value)))));
}

VL_ATTR_COLD void Vcircuito_ej3_tb___024root___eval_stl(Vcircuito_ej3_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcircuito_ej3_tb___024root___eval_stl\n"); );
    Vcircuito_ej3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vcircuito_ej3_tb___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vcircuito_ej3_tb___024root___eval_phase__stl(Vcircuito_ej3_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcircuito_ej3_tb___024root___eval_phase__stl\n"); );
    Vcircuito_ej3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vcircuito_ej3_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vcircuito_ej3_tb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vcircuito_ej3_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vcircuito_ej3_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcircuito_ej3_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcircuito_ej3_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vcircuito_ej3_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge circuito_ej3_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @( circuito_ej3_tb.done)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcircuito_ej3_tb___024root___ctor_var_reset(Vcircuito_ej3_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcircuito_ej3_tb___024root___ctor_var_reset\n"); );
    Vcircuito_ej3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->circuito_ej3_tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14611929559660837344ull);
    vlSelf->circuito_ej3_tb__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13623409513788176226ull);
    vlSelf->circuito_ej3_tb__DOT__value = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3379555990646178506ull);
    vlSelf->circuito_ej3_tb__DOT__done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14383225434799448860ull);
    vlSelf->circuito_ej3_tb__DOT__dut__DOT__y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11437303332315503565ull);
    vlSelf->circuito_ej3_tb__DOT__oracle__DOT__dv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11199886901062181709ull);
    vlSelf->circuito_ej3_tb__DOT__oracle__DOT__tests_passing = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707534736206707077ull);
    vlSelf->circuito_ej3_tb__DOT__oracle__DOT__first = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9466716002745703936ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__circuito_ej3_tb__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__circuito_ej3_tb__DOT__done__0 = 0;
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
