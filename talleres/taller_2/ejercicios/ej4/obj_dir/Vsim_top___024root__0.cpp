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
        vlSymsp->_vm_contextp__->dumpfile("obj_dir/sim.vcd"s);
        vlSymsp->_traceDumpOpen();
    }
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
                                                             "/workspaces/Sistemas-Digitales-2c2026/talleres/taller_2/ejercicios/lib/sim_top.sv", 
                                                             21);
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
                                                             "/workspaces/Sistemas-Digitales-2c2026/talleres/taller_2/ejercicios/lib/sim_top.sv", 
                                                             23);
    }
    sim_top__DOT__unnamedblk1_2__DOT____Vrepeat1 = 2U;
    while (VL_LTS_III(32, 0U, sim_top__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vsim_top___024root____VbeforeTrig_hffd278f5__0(vlSelf, 
                                                       "@(posedge sim_top.clk)");
        co_await vlSelfRef.__VtrigSched_hffd278f5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge sim_top.clk)", 
                                                             "/workspaces/Sistemas-Digitales-2c2026/talleres/taller_2/ejercicios/lib/sim_top.sv", 
                                                             24);
        sim_top__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (sim_top__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.sim_top__DOT__pass_all)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: sim_top.sv:25: Assertion failed in %m: Hubo tests que fallaron\n",3, 'M',vlSymsp->name(),"sim_top", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
        VL_STOP_MT("/workspaces/Sistemas-Digitales-2c2026/talleres/taller_2/ejercicios/lib/sim_top.sv", 25, "", false);
    }
    VL_FINISH_MT("/workspaces/Sistemas-Digitales-2c2026/talleres/taller_2/ejercicios/lib/sim_top.sv", 26, "");
    co_return;
}

void Vsim_top___024root____VbeforeTrig_hcb33f8c5__0(Vsim_top___024root* vlSelf, const char* __VeventDescription);
void Vsim_top___024root____VbeforeTrig_hffd279b4__0(Vsim_top___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vsim_top___024root___eval_initial__TOP__Vtiming__1(Vsim_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__2__got;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__2__got = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__2__exp;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__2__exp = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__3__got;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__3__got = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__3__exp;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__3__exp = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__4__got;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__4__got = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__4__exp;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__4__exp = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__5__got;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__5__got = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__5__exp;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__5__exp = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__force_reg__6__dest;
    __Vtask_sim_top__DOT__tb__DOT__force_reg__6__dest = 0;
    CData/*3:0*/ __Vtask_sim_top__DOT__tb__DOT__force_reg__6__val;
    __Vtask_sim_top__DOT__tb__DOT__force_reg__6__val = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__10__got;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__10__got = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__10__exp;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__10__exp = 0;
    CData/*1:0*/ __Vtask_sim_top__DOT__tb__DOT__copy__11__from;
    __Vtask_sim_top__DOT__tb__DOT__copy__11__from = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__copy__11__dest;
    __Vtask_sim_top__DOT__tb__DOT__copy__11__dest = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__15__got;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__15__got = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__15__exp;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__15__exp = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__16__got;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__16__got = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__16__exp;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__16__exp = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__force_reg__17__dest;
    __Vtask_sim_top__DOT__tb__DOT__force_reg__17__dest = 0;
    CData/*3:0*/ __Vtask_sim_top__DOT__tb__DOT__force_reg__17__val;
    __Vtask_sim_top__DOT__tb__DOT__force_reg__17__val = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__21__got;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__21__got = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__21__exp;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__21__exp = 0;
    CData/*1:0*/ __Vtask_sim_top__DOT__tb__DOT__copy__22__from;
    __Vtask_sim_top__DOT__tb__DOT__copy__22__from = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__copy__22__dest;
    __Vtask_sim_top__DOT__tb__DOT__copy__22__dest = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__26__got;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__26__got = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__26__exp;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__26__exp = 0;
    CData/*1:0*/ __Vtask_sim_top__DOT__tb__DOT__copy__27__from;
    __Vtask_sim_top__DOT__tb__DOT__copy__27__from = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__copy__27__dest;
    __Vtask_sim_top__DOT__tb__DOT__copy__27__dest = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__31__got;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__31__got = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__31__exp;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__31__exp = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__32__got;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__32__got = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__32__exp;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__32__exp = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__33__got;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__33__got = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__33__exp;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__33__exp = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__36__got;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__36__got = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__36__exp;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__36__exp = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__37__got;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__37__got = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__37__exp;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__37__exp = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__38__got;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__38__got = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__38__exp;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__38__exp = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__39__got;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__39__got = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__39__exp;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__39__exp = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__force_reg__40__dest;
    __Vtask_sim_top__DOT__tb__DOT__force_reg__40__dest = 0;
    CData/*3:0*/ __Vtask_sim_top__DOT__tb__DOT__force_reg__40__val;
    __Vtask_sim_top__DOT__tb__DOT__force_reg__40__val = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__44__got;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__44__got = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__44__exp;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__44__exp = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__45__got;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__45__got = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__45__exp;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__45__exp = 0;
    CData/*1:0*/ __Vtask_sim_top__DOT__tb__DOT__copy__46__from;
    __Vtask_sim_top__DOT__tb__DOT__copy__46__from = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__copy__46__dest;
    __Vtask_sim_top__DOT__tb__DOT__copy__46__dest = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__50__got;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__50__got = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__50__exp;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__50__exp = 0;
    // Body
    vlSelfRef.sim_top__DOT__tb__DOT__rst_extra = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_en = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_in = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we0 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we1 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we2 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we3 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__nfail = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__npass = 0U;
    vlSelfRef.sim_top__DOT__done = 0U;
    vlSelfRef.sim_top__DOT__pass_all = 1U;
    while (vlSelfRef.sim_top__DOT__rst) {
        Vsim_top___024root____VbeforeTrig_hcb33f8c5__0(vlSelf, 
                                                       "@( (~ sim_top.rst))");
        co_await vlSelfRef.__VtrigSched_hcb33f8c5__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (~ sim_top.rst))", 
                                                             "/workspaces/Sistemas-Digitales-2c2026/talleres/taller_2/ejercicios/lib/tb_seq.svh", 
                                                             9);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    Vsim_top___024root____VbeforeTrig_hffd279b4__0(vlSelf, 
                                                   "@(negedge sim_top.clk)");
    co_await vlSelfRef.__VtrigSched_hffd279b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge sim_top.clk)", 
                                                         "/workspaces/Sistemas-Digitales-2c2026/talleres/taller_2/ejercicios/lib/tb_seq.svh", 
                                                         10);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__2__exp = 0U;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__2__got 
        = ((((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT____Vcellout__regis3__q) 
             << 3U) | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT____Vcellout__regis2__q) 
                       << 2U)) | (((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT____Vcellout__regis1__q) 
                                   << 1U) | (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT____Vcellout__regis0__q)));
    vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__2__tag = "reset R0"s;
    if ((__Vtask_sim_top__DOT__tb__DOT__expect_eq__2__got 
         != __Vtask_sim_top__DOT__tb__DOT__expect_eq__2__exp)) {
        VL_WRITEF_NX("\033[31mFAIL: %s  got=%0d (%b)  exp=%0d (%b)\033[0m\n",5
                     , 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__2__tag)
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__2__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__2__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__2__exp
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__2__exp);
        vlSelfRef.sim_top__DOT__tb__DOT__nfail = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__nfail);
    } else {
        VL_WRITEF_NX("\033[32mPASS: %s\033[0m\n",1, 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__2__tag));
        vlSelfRef.sim_top__DOT__tb__DOT__npass = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__npass);
    }
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__3__exp = 0U;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__3__got 
        = ((((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b1__DOT____Vcellout__regis3__q) 
             << 3U) | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b1__DOT____Vcellout__regis2__q) 
                       << 2U)) | (((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b1__DOT____Vcellout__regis1__q) 
                                   << 1U) | (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b1__DOT____Vcellout__regis0__q)));
    vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__3__tag = "reset R1"s;
    if ((__Vtask_sim_top__DOT__tb__DOT__expect_eq__3__got 
         != __Vtask_sim_top__DOT__tb__DOT__expect_eq__3__exp)) {
        VL_WRITEF_NX("\033[31mFAIL: %s  got=%0d (%b)  exp=%0d (%b)\033[0m\n",5
                     , 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__3__tag)
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__3__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__3__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__3__exp
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__3__exp);
        vlSelfRef.sim_top__DOT__tb__DOT__nfail = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__nfail);
    } else {
        VL_WRITEF_NX("\033[32mPASS: %s\033[0m\n",1, 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__3__tag));
        vlSelfRef.sim_top__DOT__tb__DOT__npass = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__npass);
    }
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__4__exp = 0U;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__4__got 
        = ((((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b2__DOT____Vcellout__regis3__q) 
             << 3U) | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b2__DOT____Vcellout__regis2__q) 
                       << 2U)) | (((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b2__DOT____Vcellout__regis1__q) 
                                   << 1U) | (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b2__DOT____Vcellout__regis0__q)));
    vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__4__tag = "reset R2"s;
    if ((__Vtask_sim_top__DOT__tb__DOT__expect_eq__4__got 
         != __Vtask_sim_top__DOT__tb__DOT__expect_eq__4__exp)) {
        VL_WRITEF_NX("\033[31mFAIL: %s  got=%0d (%b)  exp=%0d (%b)\033[0m\n",5
                     , 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__4__tag)
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__4__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__4__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__4__exp
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__4__exp);
        vlSelfRef.sim_top__DOT__tb__DOT__nfail = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__nfail);
    } else {
        VL_WRITEF_NX("\033[32mPASS: %s\033[0m\n",1, 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__4__tag));
        vlSelfRef.sim_top__DOT__tb__DOT__npass = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__npass);
    }
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__5__exp = 0U;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__5__got 
        = ((((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b3__DOT____Vcellout__regis3__q) 
             << 3U) | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b3__DOT____Vcellout__regis2__q) 
                       << 2U)) | (((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b3__DOT____Vcellout__regis1__q) 
                                   << 1U) | (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b3__DOT____Vcellout__regis0__q)));
    vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__5__tag = "reset R3"s;
    if ((__Vtask_sim_top__DOT__tb__DOT__expect_eq__5__got 
         != __Vtask_sim_top__DOT__tb__DOT__expect_eq__5__exp)) {
        VL_WRITEF_NX("\033[31mFAIL: %s  got=%0d (%b)  exp=%0d (%b)\033[0m\n",5
                     , 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__5__tag)
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__5__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__5__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__5__exp
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__5__exp);
        vlSelfRef.sim_top__DOT__tb__DOT__nfail = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__nfail);
    } else {
        VL_WRITEF_NX("\033[32mPASS: %s\033[0m\n",1, 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__5__tag));
        vlSelfRef.sim_top__DOT__tb__DOT__npass = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__npass);
    }
    __Vtask_sim_top__DOT__tb__DOT__force_reg__6__val = 0x0aU;
    __Vtask_sim_top__DOT__tb__DOT__force_reg__6__dest = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_en = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_in = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we0 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we1 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we2 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we3 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_en = 1U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_in = __Vtask_sim_top__DOT__tb__DOT__force_reg__6__val;
    vlSelfRef.sim_top__DOT__tb__DOT__we0 = (0U == __Vtask_sim_top__DOT__tb__DOT__force_reg__6__dest);
    vlSelfRef.sim_top__DOT__tb__DOT__we1 = (1U == __Vtask_sim_top__DOT__tb__DOT__force_reg__6__dest);
    vlSelfRef.sim_top__DOT__tb__DOT__we2 = (2U == __Vtask_sim_top__DOT__tb__DOT__force_reg__6__dest);
    vlSelfRef.sim_top__DOT__tb__DOT__we3 = (3U == __Vtask_sim_top__DOT__tb__DOT__force_reg__6__dest);
    Vsim_top___024root____VbeforeTrig_hffd278f5__0(vlSelf, 
                                                   "@(posedge sim_top.clk)");
    co_await vlSelfRef.__VtrigSched_hffd278f5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge sim_top.clk)", 
                                                         "/workspaces/Sistemas-Digitales-2c2026/talleres/taller_2/ejercicios/lib/tb_seq.svh", 
                                                         44);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    Vsim_top___024root____VbeforeTrig_hffd279b4__0(vlSelf, 
                                                   "@(negedge sim_top.clk)");
    co_await vlSelfRef.__VtrigSched_hffd279b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge sim_top.clk)", 
                                                         "/workspaces/Sistemas-Digitales-2c2026/talleres/taller_2/ejercicios/lib/tb_seq.svh", 
                                                         45);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_en = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_in = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we0 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we1 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we2 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we3 = 0U;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__10__exp = 0x0000000aU;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__10__got 
        = ((((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT____Vcellout__regis3__q) 
             << 3U) | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT____Vcellout__regis2__q) 
                       << 2U)) | (((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT____Vcellout__regis1__q) 
                                   << 1U) | (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT____Vcellout__regis0__q)));
    vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__10__tag = "R0=1010"s;
    if ((__Vtask_sim_top__DOT__tb__DOT__expect_eq__10__got 
         != __Vtask_sim_top__DOT__tb__DOT__expect_eq__10__exp)) {
        VL_WRITEF_NX("\033[31mFAIL: %s  got=%0d (%b)  exp=%0d (%b)\033[0m\n",5
                     , 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__10__tag)
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__10__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__10__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__10__exp
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__10__exp);
        vlSelfRef.sim_top__DOT__tb__DOT__nfail = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__nfail);
    } else {
        VL_WRITEF_NX("\033[32mPASS: %s\033[0m\n",1, 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__10__tag));
        vlSelfRef.sim_top__DOT__tb__DOT__npass = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__npass);
    }
    __Vtask_sim_top__DOT__tb__DOT__copy__11__dest = 1U;
    __Vtask_sim_top__DOT__tb__DOT__copy__11__from = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_en = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_in = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we0 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we1 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we2 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we3 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src = __Vtask_sim_top__DOT__tb__DOT__copy__11__from;
    vlSelfRef.sim_top__DOT__tb__DOT__we0 = (0U == __Vtask_sim_top__DOT__tb__DOT__copy__11__dest);
    vlSelfRef.sim_top__DOT__tb__DOT__we1 = (1U == __Vtask_sim_top__DOT__tb__DOT__copy__11__dest);
    vlSelfRef.sim_top__DOT__tb__DOT__we2 = (2U == __Vtask_sim_top__DOT__tb__DOT__copy__11__dest);
    vlSelfRef.sim_top__DOT__tb__DOT__we3 = (3U == __Vtask_sim_top__DOT__tb__DOT__copy__11__dest);
    Vsim_top___024root____VbeforeTrig_hffd278f5__0(vlSelf, 
                                                   "@(posedge sim_top.clk)");
    co_await vlSelfRef.__VtrigSched_hffd278f5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge sim_top.clk)", 
                                                         "/workspaces/Sistemas-Digitales-2c2026/talleres/taller_2/ejercicios/lib/tb_seq.svh", 
                                                         44);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    Vsim_top___024root____VbeforeTrig_hffd279b4__0(vlSelf, 
                                                   "@(negedge sim_top.clk)");
    co_await vlSelfRef.__VtrigSched_hffd279b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge sim_top.clk)", 
                                                         "/workspaces/Sistemas-Digitales-2c2026/talleres/taller_2/ejercicios/lib/tb_seq.svh", 
                                                         45);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_en = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_in = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we0 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we1 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we2 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we3 = 0U;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__15__exp = 0x0000000aU;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__15__got 
        = ((((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b1__DOT____Vcellout__regis3__q) 
             << 3U) | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b1__DOT____Vcellout__regis2__q) 
                       << 2U)) | (((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b1__DOT____Vcellout__regis1__q) 
                                   << 1U) | (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b1__DOT____Vcellout__regis0__q)));
    vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__15__tag = "R0\342\206\222R1"s;
    if ((__Vtask_sim_top__DOT__tb__DOT__expect_eq__15__got 
         != __Vtask_sim_top__DOT__tb__DOT__expect_eq__15__exp)) {
        VL_WRITEF_NX("\033[31mFAIL: %s  got=%0d (%b)  exp=%0d (%b)\033[0m\n",5
                     , 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__15__tag)
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__15__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__15__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__15__exp
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__15__exp);
        vlSelfRef.sim_top__DOT__tb__DOT__nfail = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__nfail);
    } else {
        VL_WRITEF_NX("\033[32mPASS: %s\033[0m\n",1, 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__15__tag));
        vlSelfRef.sim_top__DOT__tb__DOT__npass = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__npass);
    }
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__16__exp = 0x0000000aU;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__16__got 
        = ((((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT____Vcellout__regis3__q) 
             << 3U) | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT____Vcellout__regis2__q) 
                       << 2U)) | (((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT____Vcellout__regis1__q) 
                                   << 1U) | (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT____Vcellout__regis0__q)));
    vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__16__tag = "R0 sigue 1010"s;
    if ((__Vtask_sim_top__DOT__tb__DOT__expect_eq__16__got 
         != __Vtask_sim_top__DOT__tb__DOT__expect_eq__16__exp)) {
        VL_WRITEF_NX("\033[31mFAIL: %s  got=%0d (%b)  exp=%0d (%b)\033[0m\n",5
                     , 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__16__tag)
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__16__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__16__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__16__exp
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__16__exp);
        vlSelfRef.sim_top__DOT__tb__DOT__nfail = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__nfail);
    } else {
        VL_WRITEF_NX("\033[32mPASS: %s\033[0m\n",1, 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__16__tag));
        vlSelfRef.sim_top__DOT__tb__DOT__npass = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__npass);
    }
    __Vtask_sim_top__DOT__tb__DOT__force_reg__17__val = 4U;
    __Vtask_sim_top__DOT__tb__DOT__force_reg__17__dest = 2U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_en = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_in = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we0 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we1 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we2 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we3 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_en = 1U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_in = __Vtask_sim_top__DOT__tb__DOT__force_reg__17__val;
    vlSelfRef.sim_top__DOT__tb__DOT__we0 = (0U == __Vtask_sim_top__DOT__tb__DOT__force_reg__17__dest);
    vlSelfRef.sim_top__DOT__tb__DOT__we1 = (1U == __Vtask_sim_top__DOT__tb__DOT__force_reg__17__dest);
    vlSelfRef.sim_top__DOT__tb__DOT__we2 = (2U == __Vtask_sim_top__DOT__tb__DOT__force_reg__17__dest);
    vlSelfRef.sim_top__DOT__tb__DOT__we3 = (3U == __Vtask_sim_top__DOT__tb__DOT__force_reg__17__dest);
    Vsim_top___024root____VbeforeTrig_hffd278f5__0(vlSelf, 
                                                   "@(posedge sim_top.clk)");
    co_await vlSelfRef.__VtrigSched_hffd278f5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge sim_top.clk)", 
                                                         "/workspaces/Sistemas-Digitales-2c2026/talleres/taller_2/ejercicios/lib/tb_seq.svh", 
                                                         44);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    Vsim_top___024root____VbeforeTrig_hffd279b4__0(vlSelf, 
                                                   "@(negedge sim_top.clk)");
    co_await vlSelfRef.__VtrigSched_hffd279b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge sim_top.clk)", 
                                                         "/workspaces/Sistemas-Digitales-2c2026/talleres/taller_2/ejercicios/lib/tb_seq.svh", 
                                                         45);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_en = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_in = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we0 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we1 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we2 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we3 = 0U;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__21__exp = 4U;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__21__got 
        = ((((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b2__DOT____Vcellout__regis3__q) 
             << 3U) | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b2__DOT____Vcellout__regis2__q) 
                       << 2U)) | (((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b2__DOT____Vcellout__regis1__q) 
                                   << 1U) | (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b2__DOT____Vcellout__regis0__q)));
    vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__21__tag = "R2=0100"s;
    if ((__Vtask_sim_top__DOT__tb__DOT__expect_eq__21__got 
         != __Vtask_sim_top__DOT__tb__DOT__expect_eq__21__exp)) {
        VL_WRITEF_NX("\033[31mFAIL: %s  got=%0d (%b)  exp=%0d (%b)\033[0m\n",5
                     , 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__21__tag)
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__21__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__21__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__21__exp
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__21__exp);
        vlSelfRef.sim_top__DOT__tb__DOT__nfail = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__nfail);
    } else {
        VL_WRITEF_NX("\033[32mPASS: %s\033[0m\n",1, 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__21__tag));
        vlSelfRef.sim_top__DOT__tb__DOT__npass = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__npass);
    }
    __Vtask_sim_top__DOT__tb__DOT__copy__22__dest = 0U;
    __Vtask_sim_top__DOT__tb__DOT__copy__22__from = 2U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_en = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_in = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we0 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we1 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we2 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we3 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src = __Vtask_sim_top__DOT__tb__DOT__copy__22__from;
    vlSelfRef.sim_top__DOT__tb__DOT__we0 = (0U == __Vtask_sim_top__DOT__tb__DOT__copy__22__dest);
    vlSelfRef.sim_top__DOT__tb__DOT__we1 = (1U == __Vtask_sim_top__DOT__tb__DOT__copy__22__dest);
    vlSelfRef.sim_top__DOT__tb__DOT__we2 = (2U == __Vtask_sim_top__DOT__tb__DOT__copy__22__dest);
    vlSelfRef.sim_top__DOT__tb__DOT__we3 = (3U == __Vtask_sim_top__DOT__tb__DOT__copy__22__dest);
    Vsim_top___024root____VbeforeTrig_hffd278f5__0(vlSelf, 
                                                   "@(posedge sim_top.clk)");
    co_await vlSelfRef.__VtrigSched_hffd278f5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge sim_top.clk)", 
                                                         "/workspaces/Sistemas-Digitales-2c2026/talleres/taller_2/ejercicios/lib/tb_seq.svh", 
                                                         44);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    Vsim_top___024root____VbeforeTrig_hffd279b4__0(vlSelf, 
                                                   "@(negedge sim_top.clk)");
    co_await vlSelfRef.__VtrigSched_hffd279b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge sim_top.clk)", 
                                                         "/workspaces/Sistemas-Digitales-2c2026/talleres/taller_2/ejercicios/lib/tb_seq.svh", 
                                                         45);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_en = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_in = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we0 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we1 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we2 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we3 = 0U;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__26__exp = 4U;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__26__got 
        = ((((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT____Vcellout__regis3__q) 
             << 3U) | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT____Vcellout__regis2__q) 
                       << 2U)) | (((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT____Vcellout__regis1__q) 
                                   << 1U) | (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT____Vcellout__regis0__q)));
    vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__26__tag = "R2\342\206\222R0"s;
    if ((__Vtask_sim_top__DOT__tb__DOT__expect_eq__26__got 
         != __Vtask_sim_top__DOT__tb__DOT__expect_eq__26__exp)) {
        VL_WRITEF_NX("\033[31mFAIL: %s  got=%0d (%b)  exp=%0d (%b)\033[0m\n",5
                     , 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__26__tag)
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__26__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__26__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__26__exp
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__26__exp);
        vlSelfRef.sim_top__DOT__tb__DOT__nfail = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__nfail);
    } else {
        VL_WRITEF_NX("\033[32mPASS: %s\033[0m\n",1, 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__26__tag));
        vlSelfRef.sim_top__DOT__tb__DOT__npass = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__npass);
    }
    __Vtask_sim_top__DOT__tb__DOT__copy__27__dest = 2U;
    __Vtask_sim_top__DOT__tb__DOT__copy__27__from = 1U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_en = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_in = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we0 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we1 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we2 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we3 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src = __Vtask_sim_top__DOT__tb__DOT__copy__27__from;
    vlSelfRef.sim_top__DOT__tb__DOT__we0 = (0U == __Vtask_sim_top__DOT__tb__DOT__copy__27__dest);
    vlSelfRef.sim_top__DOT__tb__DOT__we1 = (1U == __Vtask_sim_top__DOT__tb__DOT__copy__27__dest);
    vlSelfRef.sim_top__DOT__tb__DOT__we2 = (2U == __Vtask_sim_top__DOT__tb__DOT__copy__27__dest);
    vlSelfRef.sim_top__DOT__tb__DOT__we3 = (3U == __Vtask_sim_top__DOT__tb__DOT__copy__27__dest);
    Vsim_top___024root____VbeforeTrig_hffd278f5__0(vlSelf, 
                                                   "@(posedge sim_top.clk)");
    co_await vlSelfRef.__VtrigSched_hffd278f5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge sim_top.clk)", 
                                                         "/workspaces/Sistemas-Digitales-2c2026/talleres/taller_2/ejercicios/lib/tb_seq.svh", 
                                                         44);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    Vsim_top___024root____VbeforeTrig_hffd279b4__0(vlSelf, 
                                                   "@(negedge sim_top.clk)");
    co_await vlSelfRef.__VtrigSched_hffd279b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge sim_top.clk)", 
                                                         "/workspaces/Sistemas-Digitales-2c2026/talleres/taller_2/ejercicios/lib/tb_seq.svh", 
                                                         45);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_en = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_in = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we0 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we1 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we2 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we3 = 0U;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__31__exp = 0x0000000aU;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__31__got 
        = ((((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b2__DOT____Vcellout__regis3__q) 
             << 3U) | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b2__DOT____Vcellout__regis2__q) 
                       << 2U)) | (((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b2__DOT____Vcellout__regis1__q) 
                                   << 1U) | (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b2__DOT____Vcellout__regis0__q)));
    vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__31__tag = "R1\342\206\222R2"s;
    if ((__Vtask_sim_top__DOT__tb__DOT__expect_eq__31__got 
         != __Vtask_sim_top__DOT__tb__DOT__expect_eq__31__exp)) {
        VL_WRITEF_NX("\033[31mFAIL: %s  got=%0d (%b)  exp=%0d (%b)\033[0m\n",5
                     , 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__31__tag)
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__31__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__31__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__31__exp
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__31__exp);
        vlSelfRef.sim_top__DOT__tb__DOT__nfail = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__nfail);
    } else {
        VL_WRITEF_NX("\033[32mPASS: %s\033[0m\n",1, 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__31__tag));
        vlSelfRef.sim_top__DOT__tb__DOT__npass = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__npass);
    }
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__32__exp = 0x0000000aU;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__32__got 
        = ((((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b1__DOT____Vcellout__regis3__q) 
             << 3U) | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b1__DOT____Vcellout__regis2__q) 
                       << 2U)) | (((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b1__DOT____Vcellout__regis1__q) 
                                   << 1U) | (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b1__DOT____Vcellout__regis0__q)));
    vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__32__tag = "R1 sigue 1010"s;
    if ((__Vtask_sim_top__DOT__tb__DOT__expect_eq__32__got 
         != __Vtask_sim_top__DOT__tb__DOT__expect_eq__32__exp)) {
        VL_WRITEF_NX("\033[31mFAIL: %s  got=%0d (%b)  exp=%0d (%b)\033[0m\n",5
                     , 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__32__tag)
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__32__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__32__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__32__exp
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__32__exp);
        vlSelfRef.sim_top__DOT__tb__DOT__nfail = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__nfail);
    } else {
        VL_WRITEF_NX("\033[32mPASS: %s\033[0m\n",1, 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__32__tag));
        vlSelfRef.sim_top__DOT__tb__DOT__npass = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__npass);
    }
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__33__exp = 0U;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__33__got 
        = ((((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b3__DOT____Vcellout__regis3__q) 
             << 3U) | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b3__DOT____Vcellout__regis2__q) 
                       << 2U)) | (((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b3__DOT____Vcellout__regis1__q) 
                                   << 1U) | (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b3__DOT____Vcellout__regis0__q)));
    vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__33__tag = "R3 intacto"s;
    if ((__Vtask_sim_top__DOT__tb__DOT__expect_eq__33__got 
         != __Vtask_sim_top__DOT__tb__DOT__expect_eq__33__exp)) {
        VL_WRITEF_NX("\033[31mFAIL: %s  got=%0d (%b)  exp=%0d (%b)\033[0m\n",5
                     , 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__33__tag)
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__33__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__33__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__33__exp
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__33__exp);
        vlSelfRef.sim_top__DOT__tb__DOT__nfail = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__nfail);
    } else {
        VL_WRITEF_NX("\033[32mPASS: %s\033[0m\n",1, 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__33__tag));
        vlSelfRef.sim_top__DOT__tb__DOT__npass = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__npass);
    }
    vlSelfRef.sim_top__DOT__tb__DOT__force_en = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_in = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we0 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we1 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we2 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we3 = 0U;
    Vsim_top___024root____VbeforeTrig_hffd278f5__0(vlSelf, 
                                                   "@(posedge sim_top.clk)");
    co_await vlSelfRef.__VtrigSched_hffd278f5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge sim_top.clk)", 
                                                         "/workspaces/Sistemas-Digitales-2c2026/talleres/taller_2/ejercicios/lib/tb_seq.svh", 
                                                         44);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    Vsim_top___024root____VbeforeTrig_hffd279b4__0(vlSelf, 
                                                   "@(negedge sim_top.clk)");
    co_await vlSelfRef.__VtrigSched_hffd279b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge sim_top.clk)", 
                                                         "/workspaces/Sistemas-Digitales-2c2026/talleres/taller_2/ejercicios/lib/tb_seq.svh", 
                                                         45);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__36__exp = 4U;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__36__got 
        = ((((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT____Vcellout__regis3__q) 
             << 3U) | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT____Vcellout__regis2__q) 
                       << 2U)) | (((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT____Vcellout__regis1__q) 
                                   << 1U) | (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT____Vcellout__regis0__q)));
    vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__36__tag = "idle R0"s;
    if ((__Vtask_sim_top__DOT__tb__DOT__expect_eq__36__got 
         != __Vtask_sim_top__DOT__tb__DOT__expect_eq__36__exp)) {
        VL_WRITEF_NX("\033[31mFAIL: %s  got=%0d (%b)  exp=%0d (%b)\033[0m\n",5
                     , 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__36__tag)
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__36__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__36__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__36__exp
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__36__exp);
        vlSelfRef.sim_top__DOT__tb__DOT__nfail = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__nfail);
    } else {
        VL_WRITEF_NX("\033[32mPASS: %s\033[0m\n",1, 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__36__tag));
        vlSelfRef.sim_top__DOT__tb__DOT__npass = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__npass);
    }
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__37__exp = 0x0000000aU;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__37__got 
        = ((((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b1__DOT____Vcellout__regis3__q) 
             << 3U) | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b1__DOT____Vcellout__regis2__q) 
                       << 2U)) | (((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b1__DOT____Vcellout__regis1__q) 
                                   << 1U) | (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b1__DOT____Vcellout__regis0__q)));
    vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__37__tag = "idle R1"s;
    if ((__Vtask_sim_top__DOT__tb__DOT__expect_eq__37__got 
         != __Vtask_sim_top__DOT__tb__DOT__expect_eq__37__exp)) {
        VL_WRITEF_NX("\033[31mFAIL: %s  got=%0d (%b)  exp=%0d (%b)\033[0m\n",5
                     , 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__37__tag)
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__37__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__37__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__37__exp
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__37__exp);
        vlSelfRef.sim_top__DOT__tb__DOT__nfail = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__nfail);
    } else {
        VL_WRITEF_NX("\033[32mPASS: %s\033[0m\n",1, 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__37__tag));
        vlSelfRef.sim_top__DOT__tb__DOT__npass = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__npass);
    }
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__38__exp = 0x0000000aU;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__38__got 
        = ((((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b2__DOT____Vcellout__regis3__q) 
             << 3U) | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b2__DOT____Vcellout__regis2__q) 
                       << 2U)) | (((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b2__DOT____Vcellout__regis1__q) 
                                   << 1U) | (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b2__DOT____Vcellout__regis0__q)));
    vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__38__tag = "idle R2"s;
    if ((__Vtask_sim_top__DOT__tb__DOT__expect_eq__38__got 
         != __Vtask_sim_top__DOT__tb__DOT__expect_eq__38__exp)) {
        VL_WRITEF_NX("\033[31mFAIL: %s  got=%0d (%b)  exp=%0d (%b)\033[0m\n",5
                     , 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__38__tag)
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__38__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__38__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__38__exp
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__38__exp);
        vlSelfRef.sim_top__DOT__tb__DOT__nfail = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__nfail);
    } else {
        VL_WRITEF_NX("\033[32mPASS: %s\033[0m\n",1, 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__38__tag));
        vlSelfRef.sim_top__DOT__tb__DOT__npass = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__npass);
    }
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__39__exp = 0U;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__39__got 
        = ((((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b3__DOT____Vcellout__regis3__q) 
             << 3U) | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b3__DOT____Vcellout__regis2__q) 
                       << 2U)) | (((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b3__DOT____Vcellout__regis1__q) 
                                   << 1U) | (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b3__DOT____Vcellout__regis0__q)));
    vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__39__tag = "idle R3"s;
    if ((__Vtask_sim_top__DOT__tb__DOT__expect_eq__39__got 
         != __Vtask_sim_top__DOT__tb__DOT__expect_eq__39__exp)) {
        VL_WRITEF_NX("\033[31mFAIL: %s  got=%0d (%b)  exp=%0d (%b)\033[0m\n",5
                     , 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__39__tag)
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__39__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__39__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__39__exp
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__39__exp);
        vlSelfRef.sim_top__DOT__tb__DOT__nfail = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__nfail);
    } else {
        VL_WRITEF_NX("\033[32mPASS: %s\033[0m\n",1, 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__39__tag));
        vlSelfRef.sim_top__DOT__tb__DOT__npass = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__npass);
    }
    __Vtask_sim_top__DOT__tb__DOT__force_reg__40__val = 6U;
    __Vtask_sim_top__DOT__tb__DOT__force_reg__40__dest = 3U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_en = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_in = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we0 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we1 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we2 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we3 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_en = 1U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_in = __Vtask_sim_top__DOT__tb__DOT__force_reg__40__val;
    vlSelfRef.sim_top__DOT__tb__DOT__we0 = (0U == __Vtask_sim_top__DOT__tb__DOT__force_reg__40__dest);
    vlSelfRef.sim_top__DOT__tb__DOT__we1 = (1U == __Vtask_sim_top__DOT__tb__DOT__force_reg__40__dest);
    vlSelfRef.sim_top__DOT__tb__DOT__we2 = (2U == __Vtask_sim_top__DOT__tb__DOT__force_reg__40__dest);
    vlSelfRef.sim_top__DOT__tb__DOT__we3 = (3U == __Vtask_sim_top__DOT__tb__DOT__force_reg__40__dest);
    Vsim_top___024root____VbeforeTrig_hffd278f5__0(vlSelf, 
                                                   "@(posedge sim_top.clk)");
    co_await vlSelfRef.__VtrigSched_hffd278f5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge sim_top.clk)", 
                                                         "/workspaces/Sistemas-Digitales-2c2026/talleres/taller_2/ejercicios/lib/tb_seq.svh", 
                                                         44);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    Vsim_top___024root____VbeforeTrig_hffd279b4__0(vlSelf, 
                                                   "@(negedge sim_top.clk)");
    co_await vlSelfRef.__VtrigSched_hffd279b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge sim_top.clk)", 
                                                         "/workspaces/Sistemas-Digitales-2c2026/talleres/taller_2/ejercicios/lib/tb_seq.svh", 
                                                         45);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_en = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_in = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we0 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we1 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we2 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we3 = 0U;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__44__exp = 6U;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__44__got 
        = ((((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b3__DOT____Vcellout__regis3__q) 
             << 3U) | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b3__DOT____Vcellout__regis2__q) 
                       << 2U)) | (((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b3__DOT____Vcellout__regis1__q) 
                                   << 1U) | (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b3__DOT____Vcellout__regis0__q)));
    vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__44__tag = "R3=0110"s;
    if ((__Vtask_sim_top__DOT__tb__DOT__expect_eq__44__got 
         != __Vtask_sim_top__DOT__tb__DOT__expect_eq__44__exp)) {
        VL_WRITEF_NX("\033[31mFAIL: %s  got=%0d (%b)  exp=%0d (%b)\033[0m\n",5
                     , 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__44__tag)
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__44__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__44__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__44__exp
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__44__exp);
        vlSelfRef.sim_top__DOT__tb__DOT__nfail = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__nfail);
    } else {
        VL_WRITEF_NX("\033[32mPASS: %s\033[0m\n",1, 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__44__tag));
        vlSelfRef.sim_top__DOT__tb__DOT__npass = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__npass);
    }
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__45__exp = 0x0000000aU;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__45__got 
        = ((((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b2__DOT____Vcellout__regis3__q) 
             << 3U) | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b2__DOT____Vcellout__regis2__q) 
                       << 2U)) | (((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b2__DOT____Vcellout__regis1__q) 
                                   << 1U) | (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b2__DOT____Vcellout__regis0__q)));
    vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__45__tag = "force R3 no pisa R2"s;
    if ((__Vtask_sim_top__DOT__tb__DOT__expect_eq__45__got 
         != __Vtask_sim_top__DOT__tb__DOT__expect_eq__45__exp)) {
        VL_WRITEF_NX("\033[31mFAIL: %s  got=%0d (%b)  exp=%0d (%b)\033[0m\n",5
                     , 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__45__tag)
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__45__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__45__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__45__exp
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__45__exp);
        vlSelfRef.sim_top__DOT__tb__DOT__nfail = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__nfail);
    } else {
        VL_WRITEF_NX("\033[32mPASS: %s\033[0m\n",1, 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__45__tag));
        vlSelfRef.sim_top__DOT__tb__DOT__npass = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__npass);
    }
    __Vtask_sim_top__DOT__tb__DOT__copy__46__dest = 1U;
    __Vtask_sim_top__DOT__tb__DOT__copy__46__from = 3U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_en = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_in = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we0 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we1 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we2 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we3 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src = __Vtask_sim_top__DOT__tb__DOT__copy__46__from;
    vlSelfRef.sim_top__DOT__tb__DOT__we0 = (0U == __Vtask_sim_top__DOT__tb__DOT__copy__46__dest);
    vlSelfRef.sim_top__DOT__tb__DOT__we1 = (1U == __Vtask_sim_top__DOT__tb__DOT__copy__46__dest);
    vlSelfRef.sim_top__DOT__tb__DOT__we2 = (2U == __Vtask_sim_top__DOT__tb__DOT__copy__46__dest);
    vlSelfRef.sim_top__DOT__tb__DOT__we3 = (3U == __Vtask_sim_top__DOT__tb__DOT__copy__46__dest);
    Vsim_top___024root____VbeforeTrig_hffd278f5__0(vlSelf, 
                                                   "@(posedge sim_top.clk)");
    co_await vlSelfRef.__VtrigSched_hffd278f5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge sim_top.clk)", 
                                                         "/workspaces/Sistemas-Digitales-2c2026/talleres/taller_2/ejercicios/lib/tb_seq.svh", 
                                                         44);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    Vsim_top___024root____VbeforeTrig_hffd279b4__0(vlSelf, 
                                                   "@(negedge sim_top.clk)");
    co_await vlSelfRef.__VtrigSched_hffd279b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge sim_top.clk)", 
                                                         "/workspaces/Sistemas-Digitales-2c2026/talleres/taller_2/ejercicios/lib/tb_seq.svh", 
                                                         45);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_en = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_in = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we0 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we1 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we2 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we3 = 0U;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__50__exp = 6U;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__50__got 
        = ((((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b1__DOT____Vcellout__regis3__q) 
             << 3U) | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b1__DOT____Vcellout__regis2__q) 
                       << 2U)) | (((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b1__DOT____Vcellout__regis1__q) 
                                   << 1U) | (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b1__DOT____Vcellout__regis0__q)));
    vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__50__tag = "R3\342\206\222R1"s;
    if ((__Vtask_sim_top__DOT__tb__DOT__expect_eq__50__got 
         != __Vtask_sim_top__DOT__tb__DOT__expect_eq__50__exp)) {
        VL_WRITEF_NX("\033[31mFAIL: %s  got=%0d (%b)  exp=%0d (%b)\033[0m\n",5
                     , 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__50__tag)
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__50__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__50__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__50__exp
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__50__exp);
        vlSelfRef.sim_top__DOT__tb__DOT__nfail = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__nfail);
    } else {
        VL_WRITEF_NX("\033[32mPASS: %s\033[0m\n",1, 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__50__tag));
        vlSelfRef.sim_top__DOT__tb__DOT__npass = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__npass);
    }
    if ((0U == vlSelfRef.sim_top__DOT__tb__DOT__nfail)) {
        VL_WRITEF_NX("\n\033[1;32m\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\n  \342\234\223  PASS: todos los tests pasaron\n\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\033[0m\n\n",0);
        vlSelfRef.sim_top__DOT__pass_all = 1U;
    } else {
        VL_WRITEF_NX("\n\033[1;31m\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\n  \342\234\227  FAIL: hubo tests que fallaron\n\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\033[0m\n\n",0);
        vlSelfRef.sim_top__DOT__pass_all = 0U;
    }
    vlSelfRef.sim_top__DOT__done = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
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
                                             "/workspaces/Sistemas-Digitales-2c2026/talleres/taller_2/ejercicios/lib/sim_top.sv", 
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

void Vsim_top___024root___act_comb__TOP__1(Vsim_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___act_comb__TOP__1\n"); );
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hcb33f8c5__0.ready("@( (~ sim_top.rst))");
    }
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hffd279b4__0.ready("@(negedge sim_top.clk)");
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
    vlSelfRef.__VtrigSched_hcb33f8c5__0.moveToResumeQueue(
                                                          "@( (~ sim_top.rst))");
    vlSelfRef.__VtrigSched_hffd279b4__0.moveToResumeQueue(
                                                          "@(negedge sim_top.clk)");
    vlSelfRef.__VtrigSched_hffd278f5__0.resume("@(posedge sim_top.clk)");
    vlSelfRef.__VtrigSched_hde298250__0.resume("@( sim_top.done)");
    vlSelfRef.__VtrigSched_hcb33f8c5__0.resume("@( (~ sim_top.rst))");
    vlSelfRef.__VtrigSched_hffd279b4__0.resume("@(negedge sim_top.clk)");
    if ((0x0000000000000010ULL & vlSelfRef.__VactTriggered[0U])) {
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
        CData/*0:0*/ __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_h5b83a2b0__0;
        __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_h5b83a2b0__0 = 0;
        __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_h5b83a2b0__0 
            = (1U & (~ (IData)(vlSelfRef.sim_top__DOT__rst)));
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 4U) 
                                                         | (((((~ (IData)(vlSelfRef.sim_top__DOT__clk)) 
                                                               & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sim_top__DOT__clk__0)) 
                                                              << 3U) 
                                                             | ((__Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_h5b83a2b0__0 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr_h5b83a2b0__1)) 
                                                                << 2U)) 
                                                            | ((((IData)(vlSelfRef.sim_top__DOT__done) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sim_top__DOT__done__0)) 
                                                                << 1U) 
                                                               | ((IData)(vlSelfRef.sim_top__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sim_top__DOT__clk__0))))))));
        vlSelfRef.__Vtrigprevexpr___TOP__sim_top__DOT__clk__0 
            = vlSelfRef.sim_top__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__sim_top__DOT__done__0 
            = vlSelfRef.sim_top__DOT__done;
        vlSelfRef.__Vtrigprevexpr_h5b83a2b0__1 = __Vinline_0__eval_triggers_vec__act___Vtrigprevexpr_h5b83a2b0__0;
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
        {
            // Inlined CFunc: _eval_act
            if ((0x000000000000000fULL & vlSelfRef.__VactTriggered[0U])) {
                {
                    // Inlined CFunc: _act_comb__TOP__0
                    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT__regis0__DOT__nuevo_ff_d__DOT__rst 
                        = ((IData)(vlSelfRef.sim_top__DOT__rst) 
                           | (IData)(vlSelfRef.sim_top__DOT__tb__DOT__rst_extra));
                }
            }
            if ((0x000000000000000dULL & vlSelfRef.__VactTriggered[0U])) {
                Vsim_top___024root___act_comb__TOP__1(vlSelf);
                vlSelfRef.__Vm_traceActivity[3U] = 1U;
            }
        }
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
        VL_FATAL_MT("/workspaces/Sistemas-Digitales-2c2026/talleres/taller_2/ejercicios/lib/sim_top.sv", 5, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
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
                {
                    // Inlined CFunc: _nba_sequent__TOP__0
                    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b3__DOT____Vcellout__regis3__q 
                        = ((1U & (~ (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT__regis0__DOT__nuevo_ff_d__DOT__rst))) 
                           && (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b3__DOT__regis3__DOT__nuevo_ff_d__DOT__d));
                    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b3__DOT____Vcellout__regis2__q 
                        = ((1U & (~ (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT__regis0__DOT__nuevo_ff_d__DOT__rst))) 
                           && (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b3__DOT__regis2__DOT__nuevo_ff_d__DOT__d));
                    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b3__DOT____Vcellout__regis1__q 
                        = ((1U & (~ (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT__regis0__DOT__nuevo_ff_d__DOT__rst))) 
                           && (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b3__DOT__regis1__DOT__nuevo_ff_d__DOT__d));
                    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b3__DOT____Vcellout__regis0__q 
                        = ((1U & (~ (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT__regis0__DOT__nuevo_ff_d__DOT__rst))) 
                           && (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b3__DOT__regis0__DOT__nuevo_ff_d__DOT__d));
                    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b2__DOT____Vcellout__regis3__q 
                        = ((1U & (~ (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT__regis0__DOT__nuevo_ff_d__DOT__rst))) 
                           && (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b2__DOT__regis3__DOT__nuevo_ff_d__DOT__d));
                    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b2__DOT____Vcellout__regis2__q 
                        = ((1U & (~ (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT__regis0__DOT__nuevo_ff_d__DOT__rst))) 
                           && (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b2__DOT__regis2__DOT__nuevo_ff_d__DOT__d));
                    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b2__DOT____Vcellout__regis1__q 
                        = ((1U & (~ (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT__regis0__DOT__nuevo_ff_d__DOT__rst))) 
                           && (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b2__DOT__regis1__DOT__nuevo_ff_d__DOT__d));
                    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b2__DOT____Vcellout__regis0__q 
                        = ((1U & (~ (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT__regis0__DOT__nuevo_ff_d__DOT__rst))) 
                           && (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b2__DOT__regis0__DOT__nuevo_ff_d__DOT__d));
                    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b1__DOT____Vcellout__regis3__q 
                        = ((1U & (~ (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT__regis0__DOT__nuevo_ff_d__DOT__rst))) 
                           && (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b1__DOT__regis3__DOT__nuevo_ff_d__DOT__d));
                    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b1__DOT____Vcellout__regis2__q 
                        = ((1U & (~ (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT__regis0__DOT__nuevo_ff_d__DOT__rst))) 
                           && (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b1__DOT__regis2__DOT__nuevo_ff_d__DOT__d));
                    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b1__DOT____Vcellout__regis1__q 
                        = ((1U & (~ (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT__regis0__DOT__nuevo_ff_d__DOT__rst))) 
                           && (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b1__DOT__regis1__DOT__nuevo_ff_d__DOT__d));
                    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b1__DOT____Vcellout__regis0__q 
                        = ((1U & (~ (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT__regis0__DOT__nuevo_ff_d__DOT__rst))) 
                           && (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b1__DOT__regis0__DOT__nuevo_ff_d__DOT__d));
                    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT____Vcellout__regis3__q 
                        = ((1U & (~ (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT__regis0__DOT__nuevo_ff_d__DOT__rst))) 
                           && (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT__regis3__DOT__nuevo_ff_d__DOT__d));
                    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT____Vcellout__regis2__q 
                        = ((1U & (~ (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT__regis0__DOT__nuevo_ff_d__DOT__rst))) 
                           && (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT__regis2__DOT__nuevo_ff_d__DOT__d));
                    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT____Vcellout__regis1__q 
                        = ((1U & (~ (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT__regis0__DOT__nuevo_ff_d__DOT__rst))) 
                           && (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT__regis1__DOT__nuevo_ff_d__DOT__d));
                    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT____Vcellout__regis0__q 
                        = ((1U & (~ (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT__regis0__DOT__nuevo_ff_d__DOT__rst))) 
                           && (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT__regis0__DOT__nuevo_ff_d__DOT__d));
                }
                vlSelfRef.__Vm_traceActivity[4U] = 1U;
            }
            if ((0x000000000000000fULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _act_comb__TOP__0
                    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT__regis0__DOT__nuevo_ff_d__DOT__rst 
                        = ((IData)(vlSelfRef.sim_top__DOT__rst) 
                           | (IData)(vlSelfRef.sim_top__DOT__tb__DOT__rst_extra));
                }
            }
            if ((0x000000000000000dULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vsim_top___024root___act_comb__TOP__1(vlSelf);
                vlSelfRef.__Vm_traceActivity[5U] = 1U;
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
            VL_FATAL_MT("/workspaces/Sistemas-Digitales-2c2026/talleres/taller_2/ejercicios/lib/sim_top.sv", 5, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("/workspaces/Sistemas-Digitales-2c2026/talleres/taller_2/ejercicios/lib/sim_top.sv", 5, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vsim_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("/workspaces/Sistemas-Digitales-2c2026/talleres/taller_2/ejercicios/lib/sim_top.sv", 5, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
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
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.sim_top__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sim_top__DOT__clk__0)) 
                                   << 3U) | ((IData)(vlSelfRef.sim_top__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sim_top__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__sim_top__DOT__clk__0 
        = vlSelfRef.sim_top__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hffd278f5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd278f5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd278f5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd278f5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd278f5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd278f5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd278f5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd278f5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd278f5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd278f5__0.ready(__VeventDescription);
    }
    if ((8ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hffd279b4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd279b4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd279b4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd279b4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd279b4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd279b4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd279b4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd279b4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd279b4__0.ready(__VeventDescription);
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
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vsim_top___024root____VbeforeTrig_hcb33f8c5__0(Vsim_top___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root____VbeforeTrig_hcb33f8c5__0\n"); );
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    CData/*0:0*/ __Vtrigprevexpr_h5b83a2b0__0;
    __Vtrigprevexpr_h5b83a2b0__0 = 0;
    // Body
    __Vtrigprevexpr_h5b83a2b0__0 = (1U & (~ (IData)(vlSelfRef.sim_top__DOT__rst)));
    __VTmp[0U] = (QData)((IData)((((IData)(__Vtrigprevexpr_h5b83a2b0__0) 
                                   != (IData)(vlSelfRef.__Vtrigprevexpr_h5b83a2b0__1)) 
                                  << 2U)));
    vlSelfRef.__Vtrigprevexpr_h5b83a2b0__1 = __Vtrigprevexpr_h5b83a2b0__0;
    if ((4ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hcb33f8c5__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vsim_top___024root____VbeforeTrig_hffd279b4__0(Vsim_top___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root____VbeforeTrig_hffd279b4__0\n"); );
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.sim_top__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sim_top__DOT__clk__0)) 
                                   << 3U) | ((IData)(vlSelfRef.sim_top__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sim_top__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__sim_top__DOT__clk__0 
        = vlSelfRef.sim_top__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hffd278f5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd278f5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd278f5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd278f5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd278f5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd278f5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd278f5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd278f5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd278f5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd278f5__0.ready(__VeventDescription);
    }
    if ((8ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hffd279b4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd279b4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd279b4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd279b4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd279b4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd279b4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd279b4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd279b4__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hffd279b4__0.ready(__VeventDescription);
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
