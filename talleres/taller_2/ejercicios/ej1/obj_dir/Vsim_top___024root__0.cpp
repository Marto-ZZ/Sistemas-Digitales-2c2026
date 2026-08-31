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
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__1__got;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__1__got = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__1__exp;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__1__exp = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__3__got;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__3__got = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__3__exp;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__3__exp = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__4__got;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__4__got = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__4__exp;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__4__exp = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__6__got;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__6__got = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__6__exp;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__6__exp = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__8__got;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__8__got = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__8__exp;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__8__exp = 0;
    // Body
    vlSelfRef.sim_top__DOT__tb__DOT__d = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__rst_extra = 0U;
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
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__1__exp = 0U;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__1__got 
        = vlSelfRef.sim_top__DOT__tb__DOT__q;
    vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__1__tag = "reset inicial"s;
    if ((__Vtask_sim_top__DOT__tb__DOT__expect_eq__1__got 
         != __Vtask_sim_top__DOT__tb__DOT__expect_eq__1__exp)) {
        VL_WRITEF_NX("\033[31mFAIL: %s  got=%0d (%b)  exp=%0d (%b)\033[0m\n",5
                     , 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__1__tag)
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__1__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__1__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__1__exp
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__1__exp);
        vlSelfRef.sim_top__DOT__tb__DOT__nfail = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__nfail);
    } else {
        VL_WRITEF_NX("\033[32mPASS: %s\033[0m\n",1, 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__1__tag));
        vlSelfRef.sim_top__DOT__tb__DOT__npass = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__npass);
    }
    vlSelfRef.sim_top__DOT__tb__DOT__d = 1U;
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
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__3__exp = 1U;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__3__got 
        = vlSelfRef.sim_top__DOT__tb__DOT__q;
    vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__3__tag = "carga 1"s;
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
    vlSelfRef.sim_top__DOT__tb__DOT__d = 0U;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__4__exp = 1U;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__4__got 
        = vlSelfRef.sim_top__DOT__tb__DOT__q;
    vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__4__tag = "d cambio entre flancos, q conserva"s;
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
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__6__exp = 0U;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__6__got 
        = vlSelfRef.sim_top__DOT__tb__DOT__q;
    vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__6__tag = "flanco captura d=0"s;
    if ((__Vtask_sim_top__DOT__tb__DOT__expect_eq__6__got 
         != __Vtask_sim_top__DOT__tb__DOT__expect_eq__6__exp)) {
        VL_WRITEF_NX("\033[31mFAIL: %s  got=%0d (%b)  exp=%0d (%b)\033[0m\n",5
                     , 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__6__tag)
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__6__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__6__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__6__exp
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__6__exp);
        vlSelfRef.sim_top__DOT__tb__DOT__nfail = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__nfail);
    } else {
        VL_WRITEF_NX("\033[32mPASS: %s\033[0m\n",1, 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__6__tag));
        vlSelfRef.sim_top__DOT__tb__DOT__npass = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__npass);
    }
    vlSelfRef.sim_top__DOT__tb__DOT__d = 1U;
    vlSelfRef.sim_top__DOT__tb__DOT__rst_extra = 1U;
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
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__8__exp = 0U;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__8__got 
        = vlSelfRef.sim_top__DOT__tb__DOT__q;
    vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__8__tag = "rst gana a d"s;
    if ((__Vtask_sim_top__DOT__tb__DOT__expect_eq__8__got 
         != __Vtask_sim_top__DOT__tb__DOT__expect_eq__8__exp)) {
        VL_WRITEF_NX("\033[31mFAIL: %s  got=%0d (%b)  exp=%0d (%b)\033[0m\n",5
                     , 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__8__tag)
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__8__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__8__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__8__exp
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__8__exp);
        vlSelfRef.sim_top__DOT__tb__DOT__nfail = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__nfail);
    } else {
        VL_WRITEF_NX("\033[32mPASS: %s\033[0m\n",1, 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__8__tag));
        vlSelfRef.sim_top__DOT__tb__DOT__npass = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__npass);
    }
    vlSelfRef.sim_top__DOT__tb__DOT__rst_extra = 0U;
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
                    vlSelfRef.sim_top__DOT__tb__DOT__q 
                        = ((1U & (~ ((IData)(vlSelfRef.sim_top__DOT__rst) 
                                     | (IData)(vlSelfRef.sim_top__DOT__tb__DOT__rst_extra)))) 
                           && (IData)(vlSelfRef.sim_top__DOT__tb__DOT__d));
                }
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
    }
    if ((8ULL & __VTmp[0U])) {
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
    }
    if ((8ULL & __VTmp[0U])) {
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
