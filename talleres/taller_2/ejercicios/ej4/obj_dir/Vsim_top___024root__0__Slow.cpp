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
    vlSelfRef.__VactTriggered[0U] = (4ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__Vtrigprevexpr___TOP__sim_top__DOT__clk__0 
        = vlSelfRef.sim_top__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sim_top__DOT__done__0 
        = vlSelfRef.sim_top__DOT__done;
    vlSelfRef.__Vtrigprevexpr_h5b83a2b0__1 = (1U & 
                                              (~ (IData)(vlSelfRef.sim_top__DOT__rst)));
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
            VL_FATAL_MT("/workspaces/Sistemas-Digitales-2c2026/talleres/taller_2/ejercicios/lib/sim_top.sv", 5, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
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

VL_ATTR_COLD void Vsim_top___024root___stl_sequent__TOP__0(Vsim_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___stl_sequent__TOP__0\n"); );
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT__regis0__DOT__nuevo_ff_d__DOT__rst 
        = ((IData)(vlSelfRef.sim_top__DOT__rst) | (IData)(vlSelfRef.sim_top__DOT__tb__DOT__rst_extra));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT__din 
        = ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__force_en)
            ? (IData)(vlSelfRef.sim_top__DOT__tb__DOT__force_in)
            : ((0U == (IData)(vlSelfRef.sim_top__DOT__tb__DOT__src))
                ? ((((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT____Vcellout__regis3__q) 
                     << 3U) | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT____Vcellout__regis2__q) 
                               << 2U)) | (((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT____Vcellout__regis1__q) 
                                           << 1U) | (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT____Vcellout__regis0__q)))
                : ((1U == (IData)(vlSelfRef.sim_top__DOT__tb__DOT__src))
                    ? ((((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b1__DOT____Vcellout__regis3__q) 
                         << 3U) | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b1__DOT____Vcellout__regis2__q) 
                                   << 2U)) | (((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b1__DOT____Vcellout__regis1__q) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b1__DOT____Vcellout__regis0__q)))
                    : ((2U == (IData)(vlSelfRef.sim_top__DOT__tb__DOT__src))
                        ? ((((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b2__DOT____Vcellout__regis3__q) 
                             << 3U) | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b2__DOT____Vcellout__regis2__q) 
                                       << 2U)) | (((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b2__DOT____Vcellout__regis1__q) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b2__DOT____Vcellout__regis0__q)))
                        : ((((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b3__DOT____Vcellout__regis3__q) 
                             << 3U) | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b3__DOT____Vcellout__regis2__q) 
                                       << 2U)) | (((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b3__DOT____Vcellout__regis1__q) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b3__DOT____Vcellout__regis0__q)))))));
    if (vlSelfRef.sim_top__DOT__tb__DOT__we3) {
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b3__DOT__regis3__DOT__nuevo_ff_d__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT__din) 
                     >> 3U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b3__DOT__regis2__DOT__nuevo_ff_d__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT__din) 
                     >> 2U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b3__DOT__regis1__DOT__nuevo_ff_d__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT__din) 
                     >> 1U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b3__DOT__regis0__DOT__nuevo_ff_d__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT__din));
    } else {
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b3__DOT__regis3__DOT__nuevo_ff_d__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b3__DOT____Vcellout__regis3__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b3__DOT__regis2__DOT__nuevo_ff_d__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b3__DOT____Vcellout__regis2__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b3__DOT__regis1__DOT__nuevo_ff_d__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b3__DOT____Vcellout__regis1__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b3__DOT__regis0__DOT__nuevo_ff_d__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b3__DOT____Vcellout__regis0__q));
    }
    if (vlSelfRef.sim_top__DOT__tb__DOT__we2) {
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b2__DOT__regis3__DOT__nuevo_ff_d__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT__din) 
                     >> 3U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b2__DOT__regis2__DOT__nuevo_ff_d__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT__din) 
                     >> 2U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b2__DOT__regis1__DOT__nuevo_ff_d__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT__din) 
                     >> 1U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b2__DOT__regis0__DOT__nuevo_ff_d__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT__din));
    } else {
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b2__DOT__regis3__DOT__nuevo_ff_d__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b2__DOT____Vcellout__regis3__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b2__DOT__regis2__DOT__nuevo_ff_d__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b2__DOT____Vcellout__regis2__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b2__DOT__regis1__DOT__nuevo_ff_d__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b2__DOT____Vcellout__regis1__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b2__DOT__regis0__DOT__nuevo_ff_d__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b2__DOT____Vcellout__regis0__q));
    }
    if (vlSelfRef.sim_top__DOT__tb__DOT__we1) {
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b1__DOT__regis3__DOT__nuevo_ff_d__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT__din) 
                     >> 3U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b1__DOT__regis2__DOT__nuevo_ff_d__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT__din) 
                     >> 2U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b1__DOT__regis1__DOT__nuevo_ff_d__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT__din) 
                     >> 1U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b1__DOT__regis0__DOT__nuevo_ff_d__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT__din));
    } else {
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b1__DOT__regis3__DOT__nuevo_ff_d__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b1__DOT____Vcellout__regis3__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b1__DOT__regis2__DOT__nuevo_ff_d__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b1__DOT____Vcellout__regis2__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b1__DOT__regis1__DOT__nuevo_ff_d__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b1__DOT____Vcellout__regis1__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b1__DOT__regis0__DOT__nuevo_ff_d__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b1__DOT____Vcellout__regis0__q));
    }
    if (vlSelfRef.sim_top__DOT__tb__DOT__we0) {
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT__regis3__DOT__nuevo_ff_d__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT__din) 
                     >> 3U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT__regis2__DOT__nuevo_ff_d__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT__din) 
                     >> 2U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT__regis1__DOT__nuevo_ff_d__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT__din) 
                     >> 1U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT__regis0__DOT__nuevo_ff_d__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT__din));
    } else {
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT__regis3__DOT__nuevo_ff_d__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT____Vcellout__regis3__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT__regis2__DOT__nuevo_ff_d__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT____Vcellout__regis2__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT__regis1__DOT__nuevo_ff_d__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT____Vcellout__regis1__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT__regis0__DOT__nuevo_ff_d__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT____Vcellout__regis0__q));
    }
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
                Vsim_top___024root___stl_sequent__TOP__0(vlSelf);
                {
                    // Inlined CFunc: __Vm_traceActivitySetAll
                    vlSelfRef.__Vm_traceActivity[0U] = 1U;
                    vlSelfRef.__Vm_traceActivity[1U] = 1U;
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    vlSelfRef.__Vm_traceActivity[3U] = 1U;
                    vlSelfRef.__Vm_traceActivity[4U] = 1U;
                    vlSelfRef.__Vm_traceActivity[5U] = 1U;
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
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @( (~ sim_top.rst))\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(negedge sim_top.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
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
    vlSelf->sim_top__DOT__pass_all = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 753177774469670543ull);
    vlSelf->sim_top__DOT__tb__DOT__force_in = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17808076716579637202ull);
    vlSelf->sim_top__DOT__tb__DOT__force_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11825736345054608814ull);
    vlSelf->sim_top__DOT__tb__DOT__src = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4269988290084301558ull);
    vlSelf->sim_top__DOT__tb__DOT__we0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6694083616346457009ull);
    vlSelf->sim_top__DOT__tb__DOT__we1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18000738162312929594ull);
    vlSelf->sim_top__DOT__tb__DOT__we2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3040683914065009311ull);
    vlSelf->sim_top__DOT__tb__DOT__we3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 82640113596366877ull);
    vlSelf->sim_top__DOT__tb__DOT__rst_extra = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8651839580731846872ull);
    vlSelf->sim_top__DOT__tb__DOT__nfail = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3770900744349794232ull);
    vlSelf->sim_top__DOT__tb__DOT__npass = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4804682576698571265ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__regis4b3__DOT____Vcellout__regis0__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__regis4b3__DOT____Vcellout__regis1__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__regis4b3__DOT____Vcellout__regis2__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__regis4b3__DOT____Vcellout__regis3__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__regis4b3__DOT__regis3__DOT__nuevo_ff_d__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1563376646891275924ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__regis4b3__DOT__regis2__DOT__nuevo_ff_d__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3291525253097129273ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__regis4b3__DOT__regis1__DOT__nuevo_ff_d__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2823549336175645848ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__regis4b3__DOT__regis0__DOT__nuevo_ff_d__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10983166096326761066ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__regis4b2__DOT____Vcellout__regis0__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__regis4b2__DOT____Vcellout__regis1__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__regis4b2__DOT____Vcellout__regis2__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__regis4b2__DOT____Vcellout__regis3__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__regis4b2__DOT__regis3__DOT__nuevo_ff_d__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10479787614211923980ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__regis4b2__DOT__regis2__DOT__nuevo_ff_d__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 241563036774420815ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__regis4b2__DOT__regis1__DOT__nuevo_ff_d__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 844914226010244128ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__regis4b2__DOT__regis0__DOT__nuevo_ff_d__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1257950221938193665ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__regis4b1__DOT____Vcellout__regis0__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__regis4b1__DOT____Vcellout__regis1__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__regis4b1__DOT____Vcellout__regis2__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__regis4b1__DOT____Vcellout__regis3__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__regis4b1__DOT__regis3__DOT__nuevo_ff_d__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16967368391064397792ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__regis4b1__DOT__regis2__DOT__nuevo_ff_d__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5195189399049240714ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__regis4b1__DOT__regis1__DOT__nuevo_ff_d__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13281406854375445258ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__regis4b1__DOT__regis0__DOT__nuevo_ff_d__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5062358005325966394ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT__din = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2946016218257663501ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT____Vcellout__regis0__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT____Vcellout__regis1__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT____Vcellout__regis2__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT____Vcellout__regis3__q = 0;
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT__regis3__DOT__nuevo_ff_d__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16626052283110165943ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT__regis2__DOT__nuevo_ff_d__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8505904259651997596ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT__regis1__DOT__nuevo_ff_d__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5279498491188395489ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT__regis0__DOT__nuevo_ff_d__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11546571899120219417ull);
    vlSelf->sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT__regis0__DOT__nuevo_ff_d__DOT__d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2791758702013429888ull);
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
    vlSelf->__Vtrigprevexpr_h5b83a2b0__1 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
