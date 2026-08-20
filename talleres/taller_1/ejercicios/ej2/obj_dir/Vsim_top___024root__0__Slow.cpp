// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim_top.h for the primary calling header

#include "Vsim_top__pch.h"

void Vsim_top___024root___timing_ready(Vsim_top___024root* vlSelf);

VL_ATTR_COLD void Vsim_top___024root___eval_static(Vsim_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___eval_static\n"); );
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (2ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__Vtrigprevexpr___TOP__sim_top__DOT__clk__0 
        = vlSelfRef.sim_top__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sim_top__DOT__done__0 
        = vlSelfRef.sim_top__DOT__done;
    Vsim_top___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vsim_top___024root___eval_final(Vsim_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___eval_final\n"); );
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsim_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vsim_top___024root___eval_phase__stl(Vsim_top___024root* vlSelf);

VL_ATTR_COLD void Vsim_top___024root___eval_settle(Vsim_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___eval_settle\n"); );
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vsim_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("/workspaces/Sistemas-Digitales-2c2026/talleres/taller_1/ejercicios/lib/sim_top.sv", 5, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vsim_top___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD bool Vsim_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsim_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vsim_top___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vsim_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD bool Vsim_top___024root___eval_phase__stl(Vsim_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___eval_phase__stl\n"); );
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__stl
        vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                          & vlSelfRef.__VstlTriggered[0U]) 
                                         | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsim_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vsim_top___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                {
                    // Inlined CFunc: _stl_sequent__TOP__0
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1 
                        = VL_COUNTONES_I((IData)(vlSelfRef.sim_top__DOT__tb__DOT__value));
                    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__d1 
                        = (1U & ((IData)((1U == (3U 
                                                 & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__value)))) 
                                 | (IData)((2U == (3U 
                                                   & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__value))))));
                    vlSelfRef.sim_top__DOT__tb__DOT__sum 
                        = (1U & (((~ (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__d1)) 
                                  & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__value) 
                                     >> 2U)) | ((~ 
                                                 ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__value) 
                                                  >> 2U)) 
                                                & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__d1))));
                }
            }
        }
    }
    return (__VstlExecute);
}

bool Vsim_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsim_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vsim_top___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge sim_top.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @( sim_top.done)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsim_top___024root___ctor_var_reset(Vsim_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___ctor_var_reset\n"); );
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->sim_top__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3530725056373553288ull);
    vlSelf->sim_top__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11400418036824371223ull);
    vlSelf->sim_top__DOT__done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3402611505963488124ull);
    vlSelf->sim_top__DOT__tb__DOT__sum = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2254340644364066514ull);
    vlSelf->sim_top__DOT__tb__DOT__value = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9754964420938149737ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__d1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13504226841206200255ull);
    vlSelf->sim_top__DOT__tb__DOT__oracle__DOT__tests_passing = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2729346496452167318ull);
    vlSelf->sim_top__DOT__tb__DOT__oracle__DOT__first = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8482684709481172728ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_1 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__sim_top__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__sim_top__DOT__done__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
