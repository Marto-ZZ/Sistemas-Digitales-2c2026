// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim_top.h for the primary calling header

#include "Vsim_top__pch.h"

VlCoroutine Vsim_top___024root___eval_initial__TOP__Vtiming__0(Vsim_top___024root* vlSelf);
VlCoroutine Vsim_top___024root___eval_initial__TOP__Vtiming__1(Vsim_top___024root* vlSelf);
VlCoroutine Vsim_top___024root___eval_initial__TOP__Vtiming__2(Vsim_top___024root* vlSelf);

void Vsim_top___024root___eval_initial(Vsim_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___eval_initial\n"); );
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        vlSelfRef.sim_top__DOT__clk = 0U;
    }
    Vsim_top___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vsim_top___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vsim_top___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

void Vsim_top___024root____VbeforeTrig_hffd278f5__0(Vsim_top___024root* vlSelf, const char* __VeventDescription);
void Vsim_top___024root____VbeforeTrig_hde298250__0(Vsim_top___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vsim_top___024root___eval_initial__TOP__Vtiming__0(Vsim_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ sim_top__DOT__unnamedblk1_1__DOT____Vrepeat0;
    sim_top__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ sim_top__DOT__unnamedblk1_2__DOT____Vrepeat1;
    sim_top__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    // Body
    vlSelfRef.sim_top__DOT__rst = 1U;
    sim_top__DOT__unnamedblk1_1__DOT____Vrepeat0 = 2U;
    while (VL_LTS_III(32, 0U, sim_top__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vsim_top___024root____VbeforeTrig_hffd278f5__0(vlSelf, 
                                                       "@(posedge sim_top.clk)");
        co_await vlSelfRef.__VtrigSched_hffd278f5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge sim_top.clk)", 
                                                             "/workspaces/Sistemas-Digitales-2c2026/talleres/taller_1/ejercicios/lib/sim_top.sv", 
                                                             16);
        sim_top__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (sim_top__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.sim_top__DOT__rst = 0U;
    while ((1U & (~ (IData)(vlSelfRef.sim_top__DOT__done)))) {
        Vsim_top___024root____VbeforeTrig_hde298250__0(vlSelf, 
                                                       "@( sim_top.done)");
        co_await vlSelfRef.__VtrigSched_hde298250__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( sim_top.done)", 
                                                             "/workspaces/Sistemas-Digitales-2c2026/talleres/taller_1/ejercicios/lib/sim_top.sv", 
                                                             18);
    }
    sim_top__DOT__unnamedblk1_2__DOT____Vrepeat1 = 2U;
    while (VL_LTS_III(32, 0U, sim_top__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vsim_top___024root____VbeforeTrig_hffd278f5__0(vlSelf, 
                                                       "@(posedge sim_top.clk)");
        co_await vlSelfRef.__VtrigSched_hffd278f5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge sim_top.clk)", 
                                                             "/workspaces/Sistemas-Digitales-2c2026/talleres/taller_1/ejercicios/lib/sim_top.sv", 
                                                             19);
        sim_top__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (sim_top__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.sim_top__DOT__tb__DOT__oracle__DOT__tests_passing)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: sim_top.sv:20: Assertion failed in %m: Hubo tests que fallaron\n",3, 'M',vlSymsp->name(),"sim_top", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
        VL_STOP_MT("/workspaces/Sistemas-Digitales-2c2026/talleres/taller_1/ejercicios/lib/sim_top.sv", 20, "", false);
    }
    VL_FINISH_MT("/workspaces/Sistemas-Digitales-2c2026/talleres/taller_1/ejercicios/lib/sim_top.sv", 21, "");
    co_return;
}

VlCoroutine Vsim_top___024root___eval_initial__TOP__Vtiming__1(Vsim_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while ((1U & (~ (IData)(vlSelfRef.sim_top__DOT__done)))) {
        Vsim_top___024root____VbeforeTrig_hde298250__0(vlSelf, 
                                                       "@( sim_top.done)");
        co_await vlSelfRef.__VtrigSched_hde298250__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( sim_top.done)", 
                                                             "/workspaces/Sistemas-Digitales-2c2026/talleres/taller_1/ejercicios/lib/oracle_tb.sv", 
                                                             47);
    }
    if (vlSelfRef.sim_top__DOT__tb__DOT__oracle__DOT__tests_passing) {
        VL_WRITEF_NX("\n\033[1;32m\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\n  \342\234\223  PASS: todos los tests pasaron\n\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\033[0m\n\n",0);
    } else {
        VL_WRITEF_NX("\n\033[1;31m\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\n  \342\234\227  FAIL: hubo tests que fallaron\n\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\033[0m\n\n",0);
    }
    co_return;
}

VlCoroutine Vsim_top___024root___eval_initial__TOP__Vtiming__2(Vsim_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "/workspaces/Sistemas-Digitales-2c2026/talleres/taller_1/ejercicios/lib/sim_top.sv", 
                                             12);
        vlSelfRef.sim_top__DOT__clk = (1U & (~ (IData)(vlSelfRef.sim_top__DOT__clk)));
    }
    co_return;
}

bool Vsim_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___trigger_anySet__act\n"); );
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

void Vsim_top___024root___nba_sequent__TOP__0(Vsim_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___nba_sequent__TOP__0\n"); );
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__c1;
    sim_top__DOT__tb__DOT__dut__DOT__c1 = 0;
    CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__c2;
    sim_top__DOT__tb__DOT__dut__DOT__c2 = 0;
    CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__s3__DOT__d1;
    sim_top__DOT__tb__DOT__dut__DOT__s3__DOT__d1 = 0;
    CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__s2__DOT__d1;
    sim_top__DOT__tb__DOT__dut__DOT__s2__DOT__d1 = 0;
    CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__s1__DOT__d1;
    sim_top__DOT__tb__DOT__dut__DOT__s1__DOT__d1 = 0;
    SData/*8:0*/ __Vdly__sim_top__DOT__tb__DOT__value;
    __Vdly__sim_top__DOT__tb__DOT__value = 0;
    CData/*0:0*/ __Vdly__sim_top__DOT__done;
    __Vdly__sim_top__DOT__done = 0;
    CData/*0:0*/ __Vdly__sim_top__DOT__tb__DOT__oracle__DOT__first;
    __Vdly__sim_top__DOT__tb__DOT__oracle__DOT__first = 0;
    // Body
    __Vdly__sim_top__DOT__done = vlSelfRef.sim_top__DOT__done;
    __Vdly__sim_top__DOT__tb__DOT__oracle__DOT__first 
        = vlSelfRef.sim_top__DOT__tb__DOT__oracle__DOT__first;
    __Vdly__sim_top__DOT__tb__DOT__value = vlSelfRef.sim_top__DOT__tb__DOT__value;
    if (vlSelfRef.sim_top__DOT__rst) {
        __Vdly__sim_top__DOT__tb__DOT__value = 0x01ffU;
        __Vdly__sim_top__DOT__done = 0U;
        vlSelfRef.sim_top__DOT__tb__DOT__oracle__DOT__tests_passing = 1U;
        __Vdly__sim_top__DOT__tb__DOT__oracle__DOT__first = 1U;
    } else if ((1U & (~ (IData)(vlSelfRef.sim_top__DOT__done)))) {
        __Vdly__sim_top__DOT__tb__DOT__value = (0x000001ffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.sim_top__DOT__tb__DOT__value)));
        if ((1U & (~ (IData)(vlSelfRef.sim_top__DOT__tb__DOT__oracle__DOT__first)))) {
            if (VL_UNLIKELY(((1U & (~ (((1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__exp) 
                                               >> 4U)) 
                                        == (1U & ((
                                                   (~ (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__s4__DOT__d1)) 
                                                   & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                      >> 3U)) 
                                                  | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__s4__DOT__d1) 
                                                     & ((~ (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT____Vcellout__s4__sum)) 
                                                        & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__c3)))))) 
                                       & ((0x0000000fU 
                                           & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__exp)) 
                                          == ((((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT____Vcellout__s4__sum) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT____Vcellout__s3__sum) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT____Vcellout__s2__sum) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT____Vcellout__s1__sum)))))))))) {
                VL_WRITEF_NX("\033[31mFAIL: value = %0d (%b)\033[0m\n",2
                             , '#',9,vlSelfRef.sim_top__DOT__tb__DOT__value
                             , '#',9,(IData)(vlSelfRef.sim_top__DOT__tb__DOT__value));
                vlSelfRef.sim_top__DOT__tb__DOT__oracle__DOT__tests_passing = 0U;
            }
            if ((0x000001ffU == (IData)(vlSelfRef.sim_top__DOT__tb__DOT__value))) {
                __Vdly__sim_top__DOT__done = 1U;
            }
        }
        __Vdly__sim_top__DOT__tb__DOT__oracle__DOT__first = 0U;
    }
    vlSelfRef.sim_top__DOT__done = __Vdly__sim_top__DOT__done;
    vlSelfRef.sim_top__DOT__tb__DOT__oracle__DOT__first 
        = __Vdly__sim_top__DOT__tb__DOT__oracle__DOT__first;
    vlSelfRef.sim_top__DOT__tb__DOT__value = __Vdly__sim_top__DOT__tb__DOT__value;
    vlSelfRef.sim_top__DOT__tb__DOT__exp = (0x0000001fU 
                                            & ((0x0000000fU 
                                                & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__value) 
                                                   >> 4U)) 
                                               + ((1U 
                                                   & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__value) 
                                                      >> 8U)) 
                                                  + 
                                                  (0x0000000fU 
                                                   & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__value)))));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__s4__DOT__d1 
        = (1U & ((IData)((8U == (0x0088U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__value)))) 
                 | (IData)((0x0080U == (0x0088U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__value))))));
    sim_top__DOT__tb__DOT__dut__DOT__s3__DOT__d1 = 
        (1U & ((IData)((4U == (0x0044U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__value)))) 
               | (IData)((0x0040U == (0x0044U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__value))))));
    sim_top__DOT__tb__DOT__dut__DOT__s2__DOT__d1 = 
        (1U & ((IData)((2U == (0x0022U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__value)))) 
               | (IData)((0x0020U == (0x0022U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__value))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = (0x0000000fU 
                                                & (((IData)(vlSelfRef.sim_top__DOT__tb__DOT__value) 
                                                    >> 4U) 
                                                   & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__value)));
    sim_top__DOT__tb__DOT__dut__DOT__s1__DOT__d1 = 
        (1U & ((IData)((1U == (0x0011U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__value)))) 
               | (IData)((0x0010U == (0x0011U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__value))))));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT____Vcellout__s1__sum 
        = (1U & (((~ (IData)(sim_top__DOT__tb__DOT__dut__DOT__s1__DOT__d1)) 
                  & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__value) 
                     >> 8U)) | ((~ ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__value) 
                                    >> 8U)) & (IData)(sim_top__DOT__tb__DOT__dut__DOT__s1__DOT__d1))));
    sim_top__DOT__tb__DOT__dut__DOT__c1 = (1U & (((~ (IData)(sim_top__DOT__tb__DOT__dut__DOT__s1__DOT__d1)) 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)) 
                                                 | ((IData)(sim_top__DOT__tb__DOT__dut__DOT__s1__DOT__d1) 
                                                    & ((~ (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT____Vcellout__s1__sum)) 
                                                       & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__value) 
                                                          >> 8U)))));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT____Vcellout__s2__sum 
        = (((~ (IData)(sim_top__DOT__tb__DOT__dut__DOT__s2__DOT__d1)) 
            & (IData)(sim_top__DOT__tb__DOT__dut__DOT__c1)) 
           | ((~ (IData)(sim_top__DOT__tb__DOT__dut__DOT__c1)) 
              & (IData)(sim_top__DOT__tb__DOT__dut__DOT__s2__DOT__d1)));
    sim_top__DOT__tb__DOT__dut__DOT__c2 = (1U & (((~ (IData)(sim_top__DOT__tb__DOT__dut__DOT__s2__DOT__d1)) 
                                                  & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                     >> 1U)) 
                                                 | ((IData)(sim_top__DOT__tb__DOT__dut__DOT__s2__DOT__d1) 
                                                    & ((~ (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT____Vcellout__s2__sum)) 
                                                       & (IData)(sim_top__DOT__tb__DOT__dut__DOT__c1)))));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT____Vcellout__s3__sum 
        = (((~ (IData)(sim_top__DOT__tb__DOT__dut__DOT__s3__DOT__d1)) 
            & (IData)(sim_top__DOT__tb__DOT__dut__DOT__c2)) 
           | ((~ (IData)(sim_top__DOT__tb__DOT__dut__DOT__c2)) 
              & (IData)(sim_top__DOT__tb__DOT__dut__DOT__s3__DOT__d1)));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__c3 = 
        (1U & (((~ (IData)(sim_top__DOT__tb__DOT__dut__DOT__s3__DOT__d1)) 
                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                   >> 2U)) | ((IData)(sim_top__DOT__tb__DOT__dut__DOT__s3__DOT__d1) 
                              & ((~ (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT____Vcellout__s3__sum)) 
                                 & (IData)(sim_top__DOT__tb__DOT__dut__DOT__c2)))));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT____Vcellout__s4__sum 
        = (((~ (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__s4__DOT__d1)) 
            & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__c3)) 
           | ((~ (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__c3)) 
              & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__s4__DOT__d1)));
}

void Vsim_top___024root___timing_ready(Vsim_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___timing_ready\n"); );
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hffd278f5__0.ready("@(posedge sim_top.clk)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hde298250__0.ready("@( sim_top.done)");
    }
}

void Vsim_top___024root___timing_resume(Vsim_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___timing_resume\n"); );
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_hffd278f5__0.moveToResumeQueue(
                                                          "@(posedge sim_top.clk)");
    vlSelfRef.__VtrigSched_hde298250__0.moveToResumeQueue(
                                                          "@( sim_top.done)");
    vlSelfRef.__VtrigSched_hffd278f5__0.resume("@(posedge sim_top.clk)");
    vlSelfRef.__VtrigSched_hde298250__0.resume("@( sim_top.done)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vsim_top___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vsim_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vsim_top___024root___eval_phase__act(Vsim_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___eval_phase__act\n"); );
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 2U) 
                                                         | ((((IData)(vlSelfRef.sim_top__DOT__done) 
                                                              != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sim_top__DOT__done__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.sim_top__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sim_top__DOT__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__sim_top__DOT__clk__0 
            = vlSelfRef.sim_top__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__sim_top__DOT__done__0 
            = vlSelfRef.sim_top__DOT__done;
    }
    Vsim_top___024root___timing_ready(vlSelf);
    Vsim_top___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsim_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vsim_top___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vsim_top___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vsim_top___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

bool Vsim_top___024root___eval_phase__inact(Vsim_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___eval_phase__inact\n"); );
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("/workspaces/Sistemas-Digitales-2c2026/talleres/taller_1/ejercicios/lib/sim_top.sv", 5, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vsim_top___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vsim_top___024root___eval_phase__nba(Vsim_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___eval_phase__nba\n"); );
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vsim_top___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vsim_top___024root___nba_sequent__TOP__0(vlSelf);
            }
        }
        Vsim_top___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vsim_top___024root___eval(Vsim_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___eval\n"); );
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vsim_top___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/workspaces/Sistemas-Digitales-2c2026/talleres/taller_1/ejercicios/lib/sim_top.sv", 5, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("/workspaces/Sistemas-Digitales-2c2026/talleres/taller_1/ejercicios/lib/sim_top.sv", 5, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vsim_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("/workspaces/Sistemas-Digitales-2c2026/talleres/taller_1/ejercicios/lib/sim_top.sv", 5, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vsim_top___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vsim_top___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vsim_top___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vsim_top___024root____VbeforeTrig_hffd278f5__0(Vsim_top___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root____VbeforeTrig_hffd278f5__0\n"); );
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((IData)(vlSelfRef.sim_top__DOT__clk) 
                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sim_top__DOT__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__sim_top__DOT__clk__0 
        = vlSelfRef.sim_top__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hffd278f5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd278f5__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vsim_top___024root____VbeforeTrig_hde298250__0(Vsim_top___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root____VbeforeTrig_hde298250__0\n"); );
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((IData)(vlSelfRef.sim_top__DOT__done) 
                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sim_top__DOT__done__0)) 
                                  << 1U)));
    vlSelfRef.__Vtrigprevexpr___TOP__sim_top__DOT__done__0 
        = vlSelfRef.sim_top__DOT__done;
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hde298250__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hde298250__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vsim_top___024root___eval_debug_assertions(Vsim_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___eval_debug_assertions\n"); );
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
