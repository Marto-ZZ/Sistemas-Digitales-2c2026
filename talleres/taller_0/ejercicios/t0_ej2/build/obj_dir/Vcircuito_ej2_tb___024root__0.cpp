// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcircuito_ej2_tb.h for the primary calling header

#include "Vcircuito_ej2_tb__pch.h"

VlCoroutine Vcircuito_ej2_tb___024root___eval_initial__TOP__Vtiming__0(Vcircuito_ej2_tb___024root* vlSelf);
VlCoroutine Vcircuito_ej2_tb___024root___eval_initial__TOP__Vtiming__1(Vcircuito_ej2_tb___024root* vlSelf);
VlCoroutine Vcircuito_ej2_tb___024root___eval_initial__TOP__Vtiming__2(Vcircuito_ej2_tb___024root* vlSelf);
VlCoroutine Vcircuito_ej2_tb___024root___eval_initial__TOP__Vtiming__3(Vcircuito_ej2_tb___024root* vlSelf);

void Vcircuito_ej2_tb___024root___eval_initial(Vcircuito_ej2_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcircuito_ej2_tb___024root___eval_initial\n"); );
    Vcircuito_ej2_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcircuito_ej2_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vcircuito_ej2_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vcircuito_ej2_tb___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    Vcircuito_ej2_tb___024root___eval_initial__TOP__Vtiming__3(vlSelf);
}

VlCoroutine Vcircuito_ej2_tb___024root___eval_initial__TOP__Vtiming__0(Vcircuito_ej2_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcircuito_ej2_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vcircuito_ej2_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ circuito_ej2_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    circuito_ej2_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    // Body
    circuito_ej2_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 2U;
    while (VL_LTS_III(32, 0U, circuito_ej2_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h5be41617__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge circuito_ej2_tb.clk)", 
                                                             "circuito_ej2_tb.sv", 
                                                             11);
        circuito_ej2_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (circuito_ej2_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.circuito_ej2_tb__DOT__rst = 0U;
    co_return;}

VlCoroutine Vcircuito_ej2_tb___024root___eval_initial__TOP__Vtiming__1(Vcircuito_ej2_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcircuito_ej2_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vcircuito_ej2_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile("build/sim.fst"s);
    vlSymsp->_traceDumpOpen();
    while ((1U & (~ (IData)(vlSelfRef.circuito_ej2_tb__DOT__done)))) {
        co_await vlSelfRef.__VtrigSched_hc90ad68a__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( circuito_ej2_tb.done)", 
                                                             "circuito_ej2_tb.sv", 
                                                             51);
    }
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "circuito_ej2_tb.sv", 
                                         53);
    VL_FINISH_MT("circuito_ej2_tb.sv", 54, "");
    co_return;}

VlCoroutine Vcircuito_ej2_tb___024root___eval_initial__TOP__Vtiming__2(Vcircuito_ej2_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcircuito_ej2_tb___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vcircuito_ej2_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while ((1U & (~ (IData)(vlSelfRef.circuito_ej2_tb__DOT__done)))) {
        co_await vlSelfRef.__VtrigSched_hc90ad68a__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( circuito_ej2_tb.done)", 
                                                             "/home/Estudiante/Descargas/hdl_studio_taller_zero/ejercicios/lib/oracle_tb.sv", 
                                                             44);
    }
    if (vlSelfRef.circuito_ej2_tb__DOT__oracle__DOT__tests_passing) {
        VL_WRITEF_NX("\n\033[1;32m\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\n  \342\234\223  PASS: todos los tests pasaron\n\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\033[0m\n\n",0);
    } else {
        VL_WRITEF_NX("\n\033[1;31m\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\n  \342\234\227  FAIL: hubo tests que fallaron\n\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\033[0m\n\n",0);
    }
    co_return;}

VlCoroutine Vcircuito_ej2_tb___024root___eval_initial__TOP__Vtiming__3(Vcircuito_ej2_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcircuito_ej2_tb___024root___eval_initial__TOP__Vtiming__3\n"); );
    Vcircuito_ej2_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "circuito_ej2_tb.sv", 
                                             7);
        vlSelfRef.circuito_ej2_tb__DOT__clk = (1U & 
                                               (~ (IData)(vlSelfRef.circuito_ej2_tb__DOT__clk)));
    }
    co_return;}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcircuito_ej2_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vcircuito_ej2_tb___024root___eval_triggers__act(Vcircuito_ej2_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcircuito_ej2_tb___024root___eval_triggers__act\n"); );
    Vcircuito_ej2_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                      << 2U) 
                                                     | ((((IData)(vlSelfRef.circuito_ej2_tb__DOT__done) 
                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__circuito_ej2_tb__DOT__done__0)) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.circuito_ej2_tb__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__circuito_ej2_tb__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__circuito_ej2_tb__DOT__clk__0 
        = vlSelfRef.circuito_ej2_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__circuito_ej2_tb__DOT__done__0 
        = vlSelfRef.circuito_ej2_tb__DOT__done;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered[0U] = (2ULL | vlSelfRef.__VactTriggered
                                         [0U]);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcircuito_ej2_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vcircuito_ej2_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcircuito_ej2_tb___024root___trigger_anySet__act\n"); );
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

extern const VlUnpacked<CData/*4:0*/, 64> Vcircuito_ej2_tb__ConstPool__TABLE_haf4a9844_0;
extern const VlUnpacked<CData/*2:0*/, 64> Vcircuito_ej2_tb__ConstPool__TABLE_h2d74ac17_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vcircuito_ej2_tb__ConstPool__TABLE_hc7e7841b_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vcircuito_ej2_tb__ConstPool__TABLE_hb53b4d7e_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vcircuito_ej2_tb__ConstPool__TABLE_h5b90359e_0;

void Vcircuito_ej2_tb___024root___nba_sequent__TOP__0(Vcircuito_ej2_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcircuito_ej2_tb___024root___nba_sequent__TOP__0\n"); );
    Vcircuito_ej2_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelfRef.circuito_ej2_tb__DOT__oracle__DOT__first) 
                     << 5U) | (((IData)(vlSelfRef.circuito_ej2_tb__DOT__value) 
                                << 2U) | (((IData)(vlSelfRef.circuito_ej2_tb__DOT__done) 
                                           << 1U) | (IData)(vlSelfRef.circuito_ej2_tb__DOT__rst))));
    if ((1U & Vcircuito_ej2_tb__ConstPool__TABLE_haf4a9844_0
         [__Vtableidx1])) {
        vlSelfRef.circuito_ej2_tb__DOT__value = Vcircuito_ej2_tb__ConstPool__TABLE_h2d74ac17_0
            [__Vtableidx1];
    }
    if ((2U & Vcircuito_ej2_tb__ConstPool__TABLE_haf4a9844_0
         [__Vtableidx1])) {
        vlSelfRef.circuito_ej2_tb__DOT__done = Vcircuito_ej2_tb__ConstPool__TABLE_hc7e7841b_0
            [__Vtableidx1];
    }
    if ((4U & Vcircuito_ej2_tb__ConstPool__TABLE_haf4a9844_0
         [__Vtableidx1])) {
        vlSelfRef.circuito_ej2_tb__DOT__oracle__DOT__dv 
            = Vcircuito_ej2_tb__ConstPool__TABLE_hb53b4d7e_0
            [__Vtableidx1];
    }
    if ((8U & Vcircuito_ej2_tb__ConstPool__TABLE_haf4a9844_0
         [__Vtableidx1])) {
        vlSelfRef.circuito_ej2_tb__DOT__oracle__DOT__tests_passing 
            = Vcircuito_ej2_tb__ConstPool__TABLE_h5b90359e_0
            [__Vtableidx1];
    }
    if ((0x10U & Vcircuito_ej2_tb__ConstPool__TABLE_haf4a9844_0
         [__Vtableidx1])) {
        vlSelfRef.circuito_ej2_tb__DOT__oracle__DOT__first 
            = Vcircuito_ej2_tb__ConstPool__TABLE_h5b90359e_0
            [__Vtableidx1];
    }
}

void Vcircuito_ej2_tb___024root___eval_nba(Vcircuito_ej2_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcircuito_ej2_tb___024root___eval_nba\n"); );
    Vcircuito_ej2_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vcircuito_ej2_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

void Vcircuito_ej2_tb___024root___timing_commit(Vcircuito_ej2_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcircuito_ej2_tb___024root___timing_commit\n"); );
    Vcircuito_ej2_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered[0U]))) {
        vlSelfRef.__VtrigSched_h5be41617__0.commit(
                                                   "@(posedge circuito_ej2_tb.clk)");
    }
    if ((! (2ULL & vlSelfRef.__VactTriggered[0U]))) {
        vlSelfRef.__VtrigSched_hc90ad68a__0.commit(
                                                   "@( circuito_ej2_tb.done)");
    }
}

void Vcircuito_ej2_tb___024root___timing_resume(Vcircuito_ej2_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcircuito_ej2_tb___024root___timing_resume\n"); );
    Vcircuito_ej2_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h5be41617__0.resume(
                                                   "@(posedge circuito_ej2_tb.clk)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hc90ad68a__0.resume(
                                                   "@( circuito_ej2_tb.done)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vcircuito_ej2_tb___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcircuito_ej2_tb___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vcircuito_ej2_tb___024root___eval_phase__act(Vcircuito_ej2_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcircuito_ej2_tb___024root___eval_phase__act\n"); );
    Vcircuito_ej2_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vcircuito_ej2_tb___024root___eval_triggers__act(vlSelf);
    Vcircuito_ej2_tb___024root___timing_commit(vlSelf);
    Vcircuito_ej2_tb___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vcircuito_ej2_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        Vcircuito_ej2_tb___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

void Vcircuito_ej2_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcircuito_ej2_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vcircuito_ej2_tb___024root___eval_phase__nba(Vcircuito_ej2_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcircuito_ej2_tb___024root___eval_phase__nba\n"); );
    Vcircuito_ej2_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vcircuito_ej2_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vcircuito_ej2_tb___024root___eval_nba(vlSelf);
        Vcircuito_ej2_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vcircuito_ej2_tb___024root___eval(Vcircuito_ej2_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcircuito_ej2_tb___024root___eval\n"); );
    Vcircuito_ej2_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vcircuito_ej2_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("circuito_ej2_tb.sv", 3, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vcircuito_ej2_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("circuito_ej2_tb.sv", 3, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vcircuito_ej2_tb___024root___eval_phase__act(vlSelf));
    } while (Vcircuito_ej2_tb___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vcircuito_ej2_tb___024root___eval_debug_assertions(Vcircuito_ej2_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcircuito_ej2_tb___024root___eval_debug_assertions\n"); );
    Vcircuito_ej2_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
