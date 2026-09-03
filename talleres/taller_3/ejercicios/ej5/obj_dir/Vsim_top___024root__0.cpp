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
    vlSymsp->_vm_contextp__->dumpfile("obj_dir/sim.vcd"s);
    vlSymsp->_traceDumpOpen();
    vlSelfRef.sim_top__DOT__rst = 1U;
    sim_top__DOT__unnamedblk1_1__DOT____Vrepeat0 = 2U;
    while (VL_LTS_III(32, 0U, sim_top__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vsim_top___024root____VbeforeTrig_hffd278f5__0(vlSelf, 
                                                       "@(posedge sim_top.clk)");
        co_await vlSelfRef.__VtrigSched_hffd278f5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge sim_top.clk)", 
                                                             "/workspaces/Sistemas-Digitales-2c2026/talleres/taller_3/ejercicios/lib/sim_top.sv", 
                                                             12);
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
                                                             "/workspaces/Sistemas-Digitales-2c2026/talleres/taller_3/ejercicios/lib/sim_top.sv", 
                                                             14);
    }
    sim_top__DOT__unnamedblk1_2__DOT____Vrepeat1 = 2U;
    while (VL_LTS_III(32, 0U, sim_top__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vsim_top___024root____VbeforeTrig_hffd278f5__0(vlSelf, 
                                                       "@(posedge sim_top.clk)");
        co_await vlSelfRef.__VtrigSched_hffd278f5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge sim_top.clk)", 
                                                             "/workspaces/Sistemas-Digitales-2c2026/talleres/taller_3/ejercicios/lib/sim_top.sv", 
                                                             15);
        sim_top__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (sim_top__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.sim_top__DOT__pass_all)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: sim_top.sv:16: Assertion failed in %m: Hubo tests que fallaron\n",3, 'M',vlSymsp->name(),"sim_top", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1));
        VL_STOP_MT("/workspaces/Sistemas-Digitales-2c2026/talleres/taller_3/ejercicios/lib/sim_top.sv", 16, "", false);
    }
    VL_FINISH_MT("/workspaces/Sistemas-Digitales-2c2026/talleres/taller_3/ejercicios/lib/sim_top.sv", 17, "");
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
    CData/*1:0*/ __Vtask_sim_top__DOT__tb__DOT__force_register__5__target;
    __Vtask_sim_top__DOT__tb__DOT__force_register__5__target = 0;
    CData/*3:0*/ __Vtask_sim_top__DOT__tb__DOT__force_register__5__value;
    __Vtask_sim_top__DOT__tb__DOT__force_register__5__value = 0;
    CData/*1:0*/ __Vtask_sim_top__DOT__tb__DOT__we_only__7__target;
    __Vtask_sim_top__DOT__tb__DOT__we_only__7__target = 0;
    CData/*1:0*/ __Vtask_sim_top__DOT__tb__DOT__force_register__10__target;
    __Vtask_sim_top__DOT__tb__DOT__force_register__10__target = 0;
    CData/*3:0*/ __Vtask_sim_top__DOT__tb__DOT__force_register__10__value;
    __Vtask_sim_top__DOT__tb__DOT__force_register__10__value = 0;
    CData/*1:0*/ __Vtask_sim_top__DOT__tb__DOT__we_only__12__target;
    __Vtask_sim_top__DOT__tb__DOT__we_only__12__target = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__15__got;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__15__got = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__15__exp;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__15__exp = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__16__got;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__16__got = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__16__exp;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__16__exp = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__17__got;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__17__got = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__17__exp;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__17__exp = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__18__got;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__18__got = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__18__exp;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__18__exp = 0;
    CData/*1:0*/ __Vtask_sim_top__DOT__tb__DOT__force_register__19__target;
    __Vtask_sim_top__DOT__tb__DOT__force_register__19__target = 0;
    CData/*3:0*/ __Vtask_sim_top__DOT__tb__DOT__force_register__19__value;
    __Vtask_sim_top__DOT__tb__DOT__force_register__19__value = 0;
    CData/*1:0*/ __Vtask_sim_top__DOT__tb__DOT__we_only__21__target;
    __Vtask_sim_top__DOT__tb__DOT__we_only__21__target = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__24__got;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__24__got = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__24__exp;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__24__exp = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__25__got;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__25__got = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__25__exp;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__25__exp = 0;
    CData/*1:0*/ __Vtask_sim_top__DOT__tb__DOT__force_register__26__target;
    __Vtask_sim_top__DOT__tb__DOT__force_register__26__target = 0;
    CData/*3:0*/ __Vtask_sim_top__DOT__tb__DOT__force_register__26__value;
    __Vtask_sim_top__DOT__tb__DOT__force_register__26__value = 0;
    CData/*1:0*/ __Vtask_sim_top__DOT__tb__DOT__we_only__28__target;
    __Vtask_sim_top__DOT__tb__DOT__we_only__28__target = 0;
    CData/*1:0*/ __Vtask_sim_top__DOT__tb__DOT__load_operands__31__source_a;
    __Vtask_sim_top__DOT__tb__DOT__load_operands__31__source_a = 0;
    CData/*1:0*/ __Vtask_sim_top__DOT__tb__DOT__load_operands__31__source_b;
    __Vtask_sim_top__DOT__tb__DOT__load_operands__31__source_b = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__35__got;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__35__got = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__35__exp;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__35__exp = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__36__got;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__36__got = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__36__exp;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__36__exp = 0;
    CData/*1:0*/ __Vtask_sim_top__DOT__tb__DOT__save_result__37__operation;
    __Vtask_sim_top__DOT__tb__DOT__save_result__37__operation = 0;
    CData/*1:0*/ __Vtask_sim_top__DOT__tb__DOT__save_result__37__target;
    __Vtask_sim_top__DOT__tb__DOT__save_result__37__target = 0;
    CData/*1:0*/ __Vtask_sim_top__DOT__tb__DOT__we_only__39__target;
    __Vtask_sim_top__DOT__tb__DOT__we_only__39__target = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__42__got;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__42__got = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__42__exp;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__42__exp = 0;
    CData/*1:0*/ __Vtask_sim_top__DOT__tb__DOT__load_operands__43__source_a;
    __Vtask_sim_top__DOT__tb__DOT__load_operands__43__source_a = 0;
    CData/*1:0*/ __Vtask_sim_top__DOT__tb__DOT__load_operands__43__source_b;
    __Vtask_sim_top__DOT__tb__DOT__load_operands__43__source_b = 0;
    CData/*1:0*/ __Vtask_sim_top__DOT__tb__DOT__save_result__47__operation;
    __Vtask_sim_top__DOT__tb__DOT__save_result__47__operation = 0;
    CData/*1:0*/ __Vtask_sim_top__DOT__tb__DOT__save_result__47__target;
    __Vtask_sim_top__DOT__tb__DOT__save_result__47__target = 0;
    CData/*1:0*/ __Vtask_sim_top__DOT__tb__DOT__we_only__49__target;
    __Vtask_sim_top__DOT__tb__DOT__we_only__49__target = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__52__got;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__52__got = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__52__exp;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__52__exp = 0;
    CData/*1:0*/ __Vtask_sim_top__DOT__tb__DOT__load_operands__53__source_a;
    __Vtask_sim_top__DOT__tb__DOT__load_operands__53__source_a = 0;
    CData/*1:0*/ __Vtask_sim_top__DOT__tb__DOT__load_operands__53__source_b;
    __Vtask_sim_top__DOT__tb__DOT__load_operands__53__source_b = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__57__got;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__57__got = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__57__exp;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__57__exp = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__58__got;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__58__got = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__58__exp;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__58__exp = 0;
    CData/*1:0*/ __Vtask_sim_top__DOT__tb__DOT__save_result__59__operation;
    __Vtask_sim_top__DOT__tb__DOT__save_result__59__operation = 0;
    CData/*1:0*/ __Vtask_sim_top__DOT__tb__DOT__save_result__59__target;
    __Vtask_sim_top__DOT__tb__DOT__save_result__59__target = 0;
    CData/*1:0*/ __Vtask_sim_top__DOT__tb__DOT__we_only__61__target;
    __Vtask_sim_top__DOT__tb__DOT__we_only__61__target = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__64__got;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__64__got = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__64__exp;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__64__exp = 0;
    CData/*1:0*/ __Vtask_sim_top__DOT__tb__DOT__load_operands__65__source_a;
    __Vtask_sim_top__DOT__tb__DOT__load_operands__65__source_a = 0;
    CData/*1:0*/ __Vtask_sim_top__DOT__tb__DOT__load_operands__65__source_b;
    __Vtask_sim_top__DOT__tb__DOT__load_operands__65__source_b = 0;
    CData/*1:0*/ __Vtask_sim_top__DOT__tb__DOT__save_result__69__operation;
    __Vtask_sim_top__DOT__tb__DOT__save_result__69__operation = 0;
    CData/*1:0*/ __Vtask_sim_top__DOT__tb__DOT__save_result__69__target;
    __Vtask_sim_top__DOT__tb__DOT__save_result__69__target = 0;
    CData/*1:0*/ __Vtask_sim_top__DOT__tb__DOT__we_only__71__target;
    __Vtask_sim_top__DOT__tb__DOT__we_only__71__target = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__74__got;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__74__got = 0;
    IData/*31:0*/ __Vtask_sim_top__DOT__tb__DOT__expect_eq__74__exp;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__74__exp = 0;
    // Body
    vlSelfRef.sim_top__DOT__done = 0U;
    vlSelfRef.sim_top__DOT__pass_all = 1U;
    vlSelfRef.sim_top__DOT__tb__DOT__nfail = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_in = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_en = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we0 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we1 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we2 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we3 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src_a = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src_b = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__load_op_a = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__load_op_b = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__op = 0U;
    while (vlSelfRef.sim_top__DOT__rst) {
        Vsim_top___024root____VbeforeTrig_hcb33f8c5__0(vlSelf, 
                                                       "@( (~ sim_top.rst))");
        co_await vlSelfRef.__VtrigSched_hcb33f8c5__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (~ sim_top.rst))", 
                                                             "uupal_tb.sv", 
                                                             39);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    Vsim_top___024root____VbeforeTrig_hffd279b4__0(vlSelf, 
                                                   "@(negedge sim_top.clk)");
    co_await vlSelfRef.__VtrigSched_hffd279b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge sim_top.clk)", 
                                                         "uupal_tb.sv", 
                                                         39);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__1__exp = 0U;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__1__got 
        = vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT__q;
    vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__1__tag = "reset R0"s;
    if ((__Vtask_sim_top__DOT__tb__DOT__expect_eq__1__got 
         != __Vtask_sim_top__DOT__tb__DOT__expect_eq__1__exp)) {
        VL_WRITEF_NX("FAIL: %s got=%0d (%b) exp=%0d (%b)\n",5
                     , 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__1__tag)
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__1__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__1__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__1__exp
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__1__exp);
        vlSelfRef.sim_top__DOT__tb__DOT__nfail = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__nfail);
    } else {
        VL_WRITEF_NX("PASS: %s\n",1, 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__1__tag));
    }
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__2__exp = 0U;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__2__got 
        = vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b1__DOT__q;
    vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__2__tag = "reset R1"s;
    if ((__Vtask_sim_top__DOT__tb__DOT__expect_eq__2__got 
         != __Vtask_sim_top__DOT__tb__DOT__expect_eq__2__exp)) {
        VL_WRITEF_NX("FAIL: %s got=%0d (%b) exp=%0d (%b)\n",5
                     , 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__2__tag)
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__2__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__2__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__2__exp
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__2__exp);
        vlSelfRef.sim_top__DOT__tb__DOT__nfail = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__nfail);
    } else {
        VL_WRITEF_NX("PASS: %s\n",1, 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__2__tag));
    }
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__3__exp = 0U;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__3__got 
        = vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b2__DOT__q;
    vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__3__tag = "reset R2"s;
    if ((__Vtask_sim_top__DOT__tb__DOT__expect_eq__3__got 
         != __Vtask_sim_top__DOT__tb__DOT__expect_eq__3__exp)) {
        VL_WRITEF_NX("FAIL: %s got=%0d (%b) exp=%0d (%b)\n",5
                     , 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__3__tag)
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__3__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__3__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__3__exp
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__3__exp);
        vlSelfRef.sim_top__DOT__tb__DOT__nfail = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__nfail);
    } else {
        VL_WRITEF_NX("PASS: %s\n",1, 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__3__tag));
    }
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__4__exp = 0U;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__4__got 
        = vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b3__DOT__q;
    vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__4__tag = "reset R3"s;
    if ((__Vtask_sim_top__DOT__tb__DOT__expect_eq__4__got 
         != __Vtask_sim_top__DOT__tb__DOT__expect_eq__4__exp)) {
        VL_WRITEF_NX("FAIL: %s got=%0d (%b) exp=%0d (%b)\n",5
                     , 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__4__tag)
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__4__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__4__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__4__exp
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__4__exp);
        vlSelfRef.sim_top__DOT__tb__DOT__nfail = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__nfail);
    } else {
        VL_WRITEF_NX("PASS: %s\n",1, 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__4__tag));
    }
    __Vtask_sim_top__DOT__tb__DOT__force_register__5__value = 3U;
    __Vtask_sim_top__DOT__tb__DOT__force_register__5__target = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_in = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_en = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we0 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we1 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we2 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we3 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src_a = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src_b = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__load_op_a = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__load_op_b = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__op = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_en = 1U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_in = __Vtask_sim_top__DOT__tb__DOT__force_register__5__value;
    __Vtask_sim_top__DOT__tb__DOT__we_only__7__target 
        = __Vtask_sim_top__DOT__tb__DOT__force_register__5__target;
    vlSelfRef.sim_top__DOT__tb__DOT__we0 = (0U == (IData)(__Vtask_sim_top__DOT__tb__DOT__we_only__7__target));
    vlSelfRef.sim_top__DOT__tb__DOT__we1 = (1U == (IData)(__Vtask_sim_top__DOT__tb__DOT__we_only__7__target));
    vlSelfRef.sim_top__DOT__tb__DOT__we2 = (2U == (IData)(__Vtask_sim_top__DOT__tb__DOT__we_only__7__target));
    vlSelfRef.sim_top__DOT__tb__DOT__we3 = (3U == (IData)(__Vtask_sim_top__DOT__tb__DOT__we_only__7__target));
    Vsim_top___024root____VbeforeTrig_hffd278f5__0(vlSelf, 
                                                   "@(posedge sim_top.clk)");
    co_await vlSelfRef.__VtrigSched_hffd278f5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge sim_top.clk)", 
                                                         "/workspaces/Sistemas-Digitales-2c2026/talleres/taller_3/ejercicios/lib/tb_helpers.svh", 
                                                         13);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    Vsim_top___024root____VbeforeTrig_hffd279b4__0(vlSelf, 
                                                   "@(negedge sim_top.clk)");
    co_await vlSelfRef.__VtrigSched_hffd279b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge sim_top.clk)", 
                                                         "/workspaces/Sistemas-Digitales-2c2026/talleres/taller_3/ejercicios/lib/tb_helpers.svh", 
                                                         13);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_in = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_en = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we0 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we1 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we2 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we3 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src_a = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src_b = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__load_op_a = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__load_op_b = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__op = 0U;
    __Vtask_sim_top__DOT__tb__DOT__force_register__10__value = 5U;
    __Vtask_sim_top__DOT__tb__DOT__force_register__10__target = 1U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_in = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_en = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we0 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we1 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we2 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we3 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src_a = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src_b = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__load_op_a = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__load_op_b = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__op = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_en = 1U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_in = __Vtask_sim_top__DOT__tb__DOT__force_register__10__value;
    __Vtask_sim_top__DOT__tb__DOT__we_only__12__target 
        = __Vtask_sim_top__DOT__tb__DOT__force_register__10__target;
    vlSelfRef.sim_top__DOT__tb__DOT__we0 = (0U == (IData)(__Vtask_sim_top__DOT__tb__DOT__we_only__12__target));
    vlSelfRef.sim_top__DOT__tb__DOT__we1 = (1U == (IData)(__Vtask_sim_top__DOT__tb__DOT__we_only__12__target));
    vlSelfRef.sim_top__DOT__tb__DOT__we2 = (2U == (IData)(__Vtask_sim_top__DOT__tb__DOT__we_only__12__target));
    vlSelfRef.sim_top__DOT__tb__DOT__we3 = (3U == (IData)(__Vtask_sim_top__DOT__tb__DOT__we_only__12__target));
    Vsim_top___024root____VbeforeTrig_hffd278f5__0(vlSelf, 
                                                   "@(posedge sim_top.clk)");
    co_await vlSelfRef.__VtrigSched_hffd278f5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge sim_top.clk)", 
                                                         "/workspaces/Sistemas-Digitales-2c2026/talleres/taller_3/ejercicios/lib/tb_helpers.svh", 
                                                         13);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    Vsim_top___024root____VbeforeTrig_hffd279b4__0(vlSelf, 
                                                   "@(negedge sim_top.clk)");
    co_await vlSelfRef.__VtrigSched_hffd279b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge sim_top.clk)", 
                                                         "/workspaces/Sistemas-Digitales-2c2026/talleres/taller_3/ejercicios/lib/tb_helpers.svh", 
                                                         13);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_in = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_en = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we0 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we1 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we2 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we3 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src_a = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src_b = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__load_op_a = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__load_op_b = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__op = 0U;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__15__exp = 3U;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__15__got 
        = vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT__q;
    vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__15__tag = "R0=3"s;
    if ((__Vtask_sim_top__DOT__tb__DOT__expect_eq__15__got 
         != __Vtask_sim_top__DOT__tb__DOT__expect_eq__15__exp)) {
        VL_WRITEF_NX("FAIL: %s got=%0d (%b) exp=%0d (%b)\n",5
                     , 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__15__tag)
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__15__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__15__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__15__exp
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__15__exp);
        vlSelfRef.sim_top__DOT__tb__DOT__nfail = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__nfail);
    } else {
        VL_WRITEF_NX("PASS: %s\n",1, 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__15__tag));
    }
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__16__exp = 5U;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__16__got 
        = vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b1__DOT__q;
    vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__16__tag = "R1=5"s;
    if ((__Vtask_sim_top__DOT__tb__DOT__expect_eq__16__got 
         != __Vtask_sim_top__DOT__tb__DOT__expect_eq__16__exp)) {
        VL_WRITEF_NX("FAIL: %s got=%0d (%b) exp=%0d (%b)\n",5
                     , 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__16__tag)
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__16__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__16__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__16__exp
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__16__exp);
        vlSelfRef.sim_top__DOT__tb__DOT__nfail = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__nfail);
    } else {
        VL_WRITEF_NX("PASS: %s\n",1, 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__16__tag));
    }
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__17__exp = 5U;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__17__got 
        = vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b1__DOT__q;
    vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__17__tag = "force R0 no toca R1"s;
    if ((__Vtask_sim_top__DOT__tb__DOT__expect_eq__17__got 
         != __Vtask_sim_top__DOT__tb__DOT__expect_eq__17__exp)) {
        VL_WRITEF_NX("FAIL: %s got=%0d (%b) exp=%0d (%b)\n",5
                     , 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__17__tag)
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__17__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__17__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__17__exp
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__17__exp);
        vlSelfRef.sim_top__DOT__tb__DOT__nfail = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__nfail);
    } else {
        VL_WRITEF_NX("PASS: %s\n",1, 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__17__tag));
    }
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__18__exp = 3U;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__18__got 
        = vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT__q;
    vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__18__tag = "force R1 no toca R0"s;
    if ((__Vtask_sim_top__DOT__tb__DOT__expect_eq__18__got 
         != __Vtask_sim_top__DOT__tb__DOT__expect_eq__18__exp)) {
        VL_WRITEF_NX("FAIL: %s got=%0d (%b) exp=%0d (%b)\n",5
                     , 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__18__tag)
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__18__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__18__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__18__exp
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__18__exp);
        vlSelfRef.sim_top__DOT__tb__DOT__nfail = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__nfail);
    } else {
        VL_WRITEF_NX("PASS: %s\n",1, 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__18__tag));
    }
    __Vtask_sim_top__DOT__tb__DOT__force_register__19__value = 7U;
    __Vtask_sim_top__DOT__tb__DOT__force_register__19__target = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_in = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_en = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we0 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we1 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we2 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we3 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src_a = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src_b = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__load_op_a = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__load_op_b = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__op = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_en = 1U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_in = __Vtask_sim_top__DOT__tb__DOT__force_register__19__value;
    __Vtask_sim_top__DOT__tb__DOT__we_only__21__target 
        = __Vtask_sim_top__DOT__tb__DOT__force_register__19__target;
    vlSelfRef.sim_top__DOT__tb__DOT__we0 = (0U == (IData)(__Vtask_sim_top__DOT__tb__DOT__we_only__21__target));
    vlSelfRef.sim_top__DOT__tb__DOT__we1 = (1U == (IData)(__Vtask_sim_top__DOT__tb__DOT__we_only__21__target));
    vlSelfRef.sim_top__DOT__tb__DOT__we2 = (2U == (IData)(__Vtask_sim_top__DOT__tb__DOT__we_only__21__target));
    vlSelfRef.sim_top__DOT__tb__DOT__we3 = (3U == (IData)(__Vtask_sim_top__DOT__tb__DOT__we_only__21__target));
    Vsim_top___024root____VbeforeTrig_hffd278f5__0(vlSelf, 
                                                   "@(posedge sim_top.clk)");
    co_await vlSelfRef.__VtrigSched_hffd278f5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge sim_top.clk)", 
                                                         "/workspaces/Sistemas-Digitales-2c2026/talleres/taller_3/ejercicios/lib/tb_helpers.svh", 
                                                         13);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    Vsim_top___024root____VbeforeTrig_hffd279b4__0(vlSelf, 
                                                   "@(negedge sim_top.clk)");
    co_await vlSelfRef.__VtrigSched_hffd279b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge sim_top.clk)", 
                                                         "/workspaces/Sistemas-Digitales-2c2026/talleres/taller_3/ejercicios/lib/tb_helpers.svh", 
                                                         13);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_in = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_en = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we0 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we1 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we2 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we3 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src_a = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src_b = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__load_op_a = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__load_op_b = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__op = 0U;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__24__exp = 7U;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__24__got 
        = vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT__q;
    vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__24__tag = "we0 reescribe R0"s;
    if ((__Vtask_sim_top__DOT__tb__DOT__expect_eq__24__got 
         != __Vtask_sim_top__DOT__tb__DOT__expect_eq__24__exp)) {
        VL_WRITEF_NX("FAIL: %s got=%0d (%b) exp=%0d (%b)\n",5
                     , 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__24__tag)
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__24__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__24__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__24__exp
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__24__exp);
        vlSelfRef.sim_top__DOT__tb__DOT__nfail = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__nfail);
    } else {
        VL_WRITEF_NX("PASS: %s\n",1, 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__24__tag));
    }
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__25__exp = 5U;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__25__got 
        = vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b1__DOT__q;
    vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__25__tag = "we0 no toca R1"s;
    if ((__Vtask_sim_top__DOT__tb__DOT__expect_eq__25__got 
         != __Vtask_sim_top__DOT__tb__DOT__expect_eq__25__exp)) {
        VL_WRITEF_NX("FAIL: %s got=%0d (%b) exp=%0d (%b)\n",5
                     , 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__25__tag)
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__25__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__25__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__25__exp
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__25__exp);
        vlSelfRef.sim_top__DOT__tb__DOT__nfail = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__nfail);
    } else {
        VL_WRITEF_NX("PASS: %s\n",1, 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__25__tag));
    }
    __Vtask_sim_top__DOT__tb__DOT__force_register__26__value = 3U;
    __Vtask_sim_top__DOT__tb__DOT__force_register__26__target = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_in = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_en = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we0 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we1 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we2 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we3 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src_a = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src_b = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__load_op_a = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__load_op_b = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__op = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_en = 1U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_in = __Vtask_sim_top__DOT__tb__DOT__force_register__26__value;
    __Vtask_sim_top__DOT__tb__DOT__we_only__28__target 
        = __Vtask_sim_top__DOT__tb__DOT__force_register__26__target;
    vlSelfRef.sim_top__DOT__tb__DOT__we0 = (0U == (IData)(__Vtask_sim_top__DOT__tb__DOT__we_only__28__target));
    vlSelfRef.sim_top__DOT__tb__DOT__we1 = (1U == (IData)(__Vtask_sim_top__DOT__tb__DOT__we_only__28__target));
    vlSelfRef.sim_top__DOT__tb__DOT__we2 = (2U == (IData)(__Vtask_sim_top__DOT__tb__DOT__we_only__28__target));
    vlSelfRef.sim_top__DOT__tb__DOT__we3 = (3U == (IData)(__Vtask_sim_top__DOT__tb__DOT__we_only__28__target));
    Vsim_top___024root____VbeforeTrig_hffd278f5__0(vlSelf, 
                                                   "@(posedge sim_top.clk)");
    co_await vlSelfRef.__VtrigSched_hffd278f5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge sim_top.clk)", 
                                                         "/workspaces/Sistemas-Digitales-2c2026/talleres/taller_3/ejercicios/lib/tb_helpers.svh", 
                                                         13);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    Vsim_top___024root____VbeforeTrig_hffd279b4__0(vlSelf, 
                                                   "@(negedge sim_top.clk)");
    co_await vlSelfRef.__VtrigSched_hffd279b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge sim_top.clk)", 
                                                         "/workspaces/Sistemas-Digitales-2c2026/talleres/taller_3/ejercicios/lib/tb_helpers.svh", 
                                                         13);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_in = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_en = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we0 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we1 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we2 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we3 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src_a = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src_b = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__load_op_a = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__load_op_b = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__op = 0U;
    __Vtask_sim_top__DOT__tb__DOT__load_operands__31__source_b = 1U;
    __Vtask_sim_top__DOT__tb__DOT__load_operands__31__source_a = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_in = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_en = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we0 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we1 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we2 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we3 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src_a = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src_b = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__load_op_a = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__load_op_b = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__op = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src_a = __Vtask_sim_top__DOT__tb__DOT__load_operands__31__source_a;
    vlSelfRef.sim_top__DOT__tb__DOT__src_b = __Vtask_sim_top__DOT__tb__DOT__load_operands__31__source_b;
    vlSelfRef.sim_top__DOT__tb__DOT__load_op_a = 1U;
    vlSelfRef.sim_top__DOT__tb__DOT__load_op_b = 1U;
    Vsim_top___024root____VbeforeTrig_hffd278f5__0(vlSelf, 
                                                   "@(posedge sim_top.clk)");
    co_await vlSelfRef.__VtrigSched_hffd278f5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge sim_top.clk)", 
                                                         "/workspaces/Sistemas-Digitales-2c2026/talleres/taller_3/ejercicios/lib/tb_helpers.svh", 
                                                         13);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    Vsim_top___024root____VbeforeTrig_hffd279b4__0(vlSelf, 
                                                   "@(negedge sim_top.clk)");
    co_await vlSelfRef.__VtrigSched_hffd279b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge sim_top.clk)", 
                                                         "/workspaces/Sistemas-Digitales-2c2026/talleres/taller_3/ejercicios/lib/tb_helpers.svh", 
                                                         13);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_in = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_en = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we0 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we1 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we2 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we3 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src_a = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src_b = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__load_op_a = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__load_op_b = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__op = 0U;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__35__exp = 3U;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__35__got 
        = vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT__q;
    vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__35__tag = "operando A"s;
    if ((__Vtask_sim_top__DOT__tb__DOT__expect_eq__35__got 
         != __Vtask_sim_top__DOT__tb__DOT__expect_eq__35__exp)) {
        VL_WRITEF_NX("FAIL: %s got=%0d (%b) exp=%0d (%b)\n",5
                     , 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__35__tag)
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__35__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__35__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__35__exp
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__35__exp);
        vlSelfRef.sim_top__DOT__tb__DOT__nfail = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__nfail);
    } else {
        VL_WRITEF_NX("PASS: %s\n",1, 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__35__tag));
    }
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__36__exp = 5U;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__36__got 
        = vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT__q;
    vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__36__tag = "operando B"s;
    if ((__Vtask_sim_top__DOT__tb__DOT__expect_eq__36__got 
         != __Vtask_sim_top__DOT__tb__DOT__expect_eq__36__exp)) {
        VL_WRITEF_NX("FAIL: %s got=%0d (%b) exp=%0d (%b)\n",5
                     , 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__36__tag)
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__36__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__36__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__36__exp
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__36__exp);
        vlSelfRef.sim_top__DOT__tb__DOT__nfail = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__nfail);
    } else {
        VL_WRITEF_NX("PASS: %s\n",1, 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__36__tag));
    }
    __Vtask_sim_top__DOT__tb__DOT__save_result__37__target = 2U;
    __Vtask_sim_top__DOT__tb__DOT__save_result__37__operation = 2U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_in = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_en = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we0 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we1 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we2 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we3 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src_a = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src_b = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__load_op_a = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__load_op_b = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__op = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__op = __Vtask_sim_top__DOT__tb__DOT__save_result__37__operation;
    vlSelfRef.sim_top__DOT__tb__DOT__force_en = 0U;
    __Vtask_sim_top__DOT__tb__DOT__we_only__39__target 
        = __Vtask_sim_top__DOT__tb__DOT__save_result__37__target;
    vlSelfRef.sim_top__DOT__tb__DOT__we0 = (0U == (IData)(__Vtask_sim_top__DOT__tb__DOT__we_only__39__target));
    vlSelfRef.sim_top__DOT__tb__DOT__we1 = (1U == (IData)(__Vtask_sim_top__DOT__tb__DOT__we_only__39__target));
    vlSelfRef.sim_top__DOT__tb__DOT__we2 = (2U == (IData)(__Vtask_sim_top__DOT__tb__DOT__we_only__39__target));
    vlSelfRef.sim_top__DOT__tb__DOT__we3 = (3U == (IData)(__Vtask_sim_top__DOT__tb__DOT__we_only__39__target));
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "uupal_tb.sv", 
                                         34);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    Vsim_top___024root____VbeforeTrig_hffd278f5__0(vlSelf, 
                                                   "@(posedge sim_top.clk)");
    co_await vlSelfRef.__VtrigSched_hffd278f5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge sim_top.clk)", 
                                                         "/workspaces/Sistemas-Digitales-2c2026/talleres/taller_3/ejercicios/lib/tb_helpers.svh", 
                                                         13);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    Vsim_top___024root____VbeforeTrig_hffd279b4__0(vlSelf, 
                                                   "@(negedge sim_top.clk)");
    co_await vlSelfRef.__VtrigSched_hffd279b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge sim_top.clk)", 
                                                         "/workspaces/Sistemas-Digitales-2c2026/talleres/taller_3/ejercicios/lib/tb_helpers.svh", 
                                                         13);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_in = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_en = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we0 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we1 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we2 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we3 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src_a = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src_b = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__load_op_a = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__load_op_b = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__op = 0U;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__42__exp = 8U;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__42__got 
        = vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b2__DOT__q;
    vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__42__tag = "R2=R0+R1"s;
    if ((__Vtask_sim_top__DOT__tb__DOT__expect_eq__42__got 
         != __Vtask_sim_top__DOT__tb__DOT__expect_eq__42__exp)) {
        VL_WRITEF_NX("FAIL: %s got=%0d (%b) exp=%0d (%b)\n",5
                     , 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__42__tag)
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__42__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__42__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__42__exp
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__42__exp);
        vlSelfRef.sim_top__DOT__tb__DOT__nfail = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__nfail);
    } else {
        VL_WRITEF_NX("PASS: %s\n",1, 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__42__tag));
    }
    __Vtask_sim_top__DOT__tb__DOT__load_operands__43__source_b = 1U;
    __Vtask_sim_top__DOT__tb__DOT__load_operands__43__source_a = 2U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_in = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_en = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we0 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we1 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we2 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we3 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src_a = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src_b = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__load_op_a = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__load_op_b = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__op = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src_a = __Vtask_sim_top__DOT__tb__DOT__load_operands__43__source_a;
    vlSelfRef.sim_top__DOT__tb__DOT__src_b = __Vtask_sim_top__DOT__tb__DOT__load_operands__43__source_b;
    vlSelfRef.sim_top__DOT__tb__DOT__load_op_a = 1U;
    vlSelfRef.sim_top__DOT__tb__DOT__load_op_b = 1U;
    Vsim_top___024root____VbeforeTrig_hffd278f5__0(vlSelf, 
                                                   "@(posedge sim_top.clk)");
    co_await vlSelfRef.__VtrigSched_hffd278f5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge sim_top.clk)", 
                                                         "/workspaces/Sistemas-Digitales-2c2026/talleres/taller_3/ejercicios/lib/tb_helpers.svh", 
                                                         13);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    Vsim_top___024root____VbeforeTrig_hffd279b4__0(vlSelf, 
                                                   "@(negedge sim_top.clk)");
    co_await vlSelfRef.__VtrigSched_hffd279b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge sim_top.clk)", 
                                                         "/workspaces/Sistemas-Digitales-2c2026/talleres/taller_3/ejercicios/lib/tb_helpers.svh", 
                                                         13);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_in = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_en = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we0 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we1 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we2 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we3 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src_a = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src_b = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__load_op_a = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__load_op_b = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__op = 0U;
    __Vtask_sim_top__DOT__tb__DOT__save_result__47__target = 3U;
    __Vtask_sim_top__DOT__tb__DOT__save_result__47__operation = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_in = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_en = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we0 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we1 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we2 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we3 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src_a = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src_b = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__load_op_a = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__load_op_b = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__op = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__op = __Vtask_sim_top__DOT__tb__DOT__save_result__47__operation;
    vlSelfRef.sim_top__DOT__tb__DOT__force_en = 0U;
    __Vtask_sim_top__DOT__tb__DOT__we_only__49__target 
        = __Vtask_sim_top__DOT__tb__DOT__save_result__47__target;
    vlSelfRef.sim_top__DOT__tb__DOT__we0 = (0U == (IData)(__Vtask_sim_top__DOT__tb__DOT__we_only__49__target));
    vlSelfRef.sim_top__DOT__tb__DOT__we1 = (1U == (IData)(__Vtask_sim_top__DOT__tb__DOT__we_only__49__target));
    vlSelfRef.sim_top__DOT__tb__DOT__we2 = (2U == (IData)(__Vtask_sim_top__DOT__tb__DOT__we_only__49__target));
    vlSelfRef.sim_top__DOT__tb__DOT__we3 = (3U == (IData)(__Vtask_sim_top__DOT__tb__DOT__we_only__49__target));
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "uupal_tb.sv", 
                                         34);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    Vsim_top___024root____VbeforeTrig_hffd278f5__0(vlSelf, 
                                                   "@(posedge sim_top.clk)");
    co_await vlSelfRef.__VtrigSched_hffd278f5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge sim_top.clk)", 
                                                         "/workspaces/Sistemas-Digitales-2c2026/talleres/taller_3/ejercicios/lib/tb_helpers.svh", 
                                                         13);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    Vsim_top___024root____VbeforeTrig_hffd279b4__0(vlSelf, 
                                                   "@(negedge sim_top.clk)");
    co_await vlSelfRef.__VtrigSched_hffd279b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge sim_top.clk)", 
                                                         "/workspaces/Sistemas-Digitales-2c2026/talleres/taller_3/ejercicios/lib/tb_helpers.svh", 
                                                         13);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_in = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_en = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we0 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we1 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we2 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we3 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src_a = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src_b = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__load_op_a = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__load_op_b = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__op = 0U;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__52__exp = 0U;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__52__got 
        = vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b3__DOT__q;
    vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__52__tag = "R3=R2 AND R1"s;
    if ((__Vtask_sim_top__DOT__tb__DOT__expect_eq__52__got 
         != __Vtask_sim_top__DOT__tb__DOT__expect_eq__52__exp)) {
        VL_WRITEF_NX("FAIL: %s got=%0d (%b) exp=%0d (%b)\n",5
                     , 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__52__tag)
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__52__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__52__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__52__exp
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__52__exp);
        vlSelfRef.sim_top__DOT__tb__DOT__nfail = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__nfail);
    } else {
        VL_WRITEF_NX("PASS: %s\n",1, 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__52__tag));
    }
    __Vtask_sim_top__DOT__tb__DOT__load_operands__53__source_b = 1U;
    __Vtask_sim_top__DOT__tb__DOT__load_operands__53__source_a = 3U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_in = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_en = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we0 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we1 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we2 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we3 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src_a = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src_b = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__load_op_a = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__load_op_b = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__op = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src_a = __Vtask_sim_top__DOT__tb__DOT__load_operands__53__source_a;
    vlSelfRef.sim_top__DOT__tb__DOT__src_b = __Vtask_sim_top__DOT__tb__DOT__load_operands__53__source_b;
    vlSelfRef.sim_top__DOT__tb__DOT__load_op_a = 1U;
    vlSelfRef.sim_top__DOT__tb__DOT__load_op_b = 1U;
    Vsim_top___024root____VbeforeTrig_hffd278f5__0(vlSelf, 
                                                   "@(posedge sim_top.clk)");
    co_await vlSelfRef.__VtrigSched_hffd278f5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge sim_top.clk)", 
                                                         "/workspaces/Sistemas-Digitales-2c2026/talleres/taller_3/ejercicios/lib/tb_helpers.svh", 
                                                         13);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    Vsim_top___024root____VbeforeTrig_hffd279b4__0(vlSelf, 
                                                   "@(negedge sim_top.clk)");
    co_await vlSelfRef.__VtrigSched_hffd279b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge sim_top.clk)", 
                                                         "/workspaces/Sistemas-Digitales-2c2026/talleres/taller_3/ejercicios/lib/tb_helpers.svh", 
                                                         13);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_in = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_en = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we0 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we1 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we2 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we3 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src_a = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src_b = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__load_op_a = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__load_op_b = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__op = 0U;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__57__exp = 0U;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__57__got 
        = vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT__q;
    vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__57__tag = "R3 llega a operand_a"s;
    if ((__Vtask_sim_top__DOT__tb__DOT__expect_eq__57__got 
         != __Vtask_sim_top__DOT__tb__DOT__expect_eq__57__exp)) {
        VL_WRITEF_NX("FAIL: %s got=%0d (%b) exp=%0d (%b)\n",5
                     , 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__57__tag)
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__57__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__57__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__57__exp
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__57__exp);
        vlSelfRef.sim_top__DOT__tb__DOT__nfail = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__nfail);
    } else {
        VL_WRITEF_NX("PASS: %s\n",1, 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__57__tag));
    }
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__58__exp = 5U;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__58__got 
        = vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT__q;
    vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__58__tag = "R1 llega a operand_b"s;
    if ((__Vtask_sim_top__DOT__tb__DOT__expect_eq__58__got 
         != __Vtask_sim_top__DOT__tb__DOT__expect_eq__58__exp)) {
        VL_WRITEF_NX("FAIL: %s got=%0d (%b) exp=%0d (%b)\n",5
                     , 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__58__tag)
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__58__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__58__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__58__exp
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__58__exp);
        vlSelfRef.sim_top__DOT__tb__DOT__nfail = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__nfail);
    } else {
        VL_WRITEF_NX("PASS: %s\n",1, 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__58__tag));
    }
    __Vtask_sim_top__DOT__tb__DOT__save_result__59__target = 0U;
    __Vtask_sim_top__DOT__tb__DOT__save_result__59__operation = 1U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_in = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_en = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we0 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we1 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we2 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we3 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src_a = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src_b = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__load_op_a = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__load_op_b = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__op = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__op = __Vtask_sim_top__DOT__tb__DOT__save_result__59__operation;
    vlSelfRef.sim_top__DOT__tb__DOT__force_en = 0U;
    __Vtask_sim_top__DOT__tb__DOT__we_only__61__target 
        = __Vtask_sim_top__DOT__tb__DOT__save_result__59__target;
    vlSelfRef.sim_top__DOT__tb__DOT__we0 = (0U == (IData)(__Vtask_sim_top__DOT__tb__DOT__we_only__61__target));
    vlSelfRef.sim_top__DOT__tb__DOT__we1 = (1U == (IData)(__Vtask_sim_top__DOT__tb__DOT__we_only__61__target));
    vlSelfRef.sim_top__DOT__tb__DOT__we2 = (2U == (IData)(__Vtask_sim_top__DOT__tb__DOT__we_only__61__target));
    vlSelfRef.sim_top__DOT__tb__DOT__we3 = (3U == (IData)(__Vtask_sim_top__DOT__tb__DOT__we_only__61__target));
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "uupal_tb.sv", 
                                         34);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    Vsim_top___024root____VbeforeTrig_hffd278f5__0(vlSelf, 
                                                   "@(posedge sim_top.clk)");
    co_await vlSelfRef.__VtrigSched_hffd278f5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge sim_top.clk)", 
                                                         "/workspaces/Sistemas-Digitales-2c2026/talleres/taller_3/ejercicios/lib/tb_helpers.svh", 
                                                         13);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    Vsim_top___024root____VbeforeTrig_hffd279b4__0(vlSelf, 
                                                   "@(negedge sim_top.clk)");
    co_await vlSelfRef.__VtrigSched_hffd279b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge sim_top.clk)", 
                                                         "/workspaces/Sistemas-Digitales-2c2026/talleres/taller_3/ejercicios/lib/tb_helpers.svh", 
                                                         13);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_in = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_en = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we0 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we1 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we2 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we3 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src_a = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src_b = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__load_op_a = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__load_op_b = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__op = 0U;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__64__exp = 5U;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__64__got 
        = vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT__q;
    vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__64__tag = "R0=R3 OR R1"s;
    if ((__Vtask_sim_top__DOT__tb__DOT__expect_eq__64__got 
         != __Vtask_sim_top__DOT__tb__DOT__expect_eq__64__exp)) {
        VL_WRITEF_NX("FAIL: %s got=%0d (%b) exp=%0d (%b)\n",5
                     , 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__64__tag)
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__64__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__64__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__64__exp
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__64__exp);
        vlSelfRef.sim_top__DOT__tb__DOT__nfail = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__nfail);
    } else {
        VL_WRITEF_NX("PASS: %s\n",1, 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__64__tag));
    }
    __Vtask_sim_top__DOT__tb__DOT__load_operands__65__source_b = 2U;
    __Vtask_sim_top__DOT__tb__DOT__load_operands__65__source_a = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_in = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_en = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we0 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we1 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we2 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we3 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src_a = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src_b = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__load_op_a = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__load_op_b = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__op = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src_a = __Vtask_sim_top__DOT__tb__DOT__load_operands__65__source_a;
    vlSelfRef.sim_top__DOT__tb__DOT__src_b = __Vtask_sim_top__DOT__tb__DOT__load_operands__65__source_b;
    vlSelfRef.sim_top__DOT__tb__DOT__load_op_a = 1U;
    vlSelfRef.sim_top__DOT__tb__DOT__load_op_b = 1U;
    Vsim_top___024root____VbeforeTrig_hffd278f5__0(vlSelf, 
                                                   "@(posedge sim_top.clk)");
    co_await vlSelfRef.__VtrigSched_hffd278f5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge sim_top.clk)", 
                                                         "/workspaces/Sistemas-Digitales-2c2026/talleres/taller_3/ejercicios/lib/tb_helpers.svh", 
                                                         13);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    Vsim_top___024root____VbeforeTrig_hffd279b4__0(vlSelf, 
                                                   "@(negedge sim_top.clk)");
    co_await vlSelfRef.__VtrigSched_hffd279b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge sim_top.clk)", 
                                                         "/workspaces/Sistemas-Digitales-2c2026/talleres/taller_3/ejercicios/lib/tb_helpers.svh", 
                                                         13);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_in = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_en = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we0 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we1 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we2 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we3 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src_a = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src_b = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__load_op_a = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__load_op_b = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__op = 0U;
    __Vtask_sim_top__DOT__tb__DOT__save_result__69__target = 1U;
    __Vtask_sim_top__DOT__tb__DOT__save_result__69__operation = 3U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_in = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_en = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we0 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we1 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we2 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we3 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src_a = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src_b = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__load_op_a = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__load_op_b = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__op = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__op = __Vtask_sim_top__DOT__tb__DOT__save_result__69__operation;
    vlSelfRef.sim_top__DOT__tb__DOT__force_en = 0U;
    __Vtask_sim_top__DOT__tb__DOT__we_only__71__target 
        = __Vtask_sim_top__DOT__tb__DOT__save_result__69__target;
    vlSelfRef.sim_top__DOT__tb__DOT__we0 = (0U == (IData)(__Vtask_sim_top__DOT__tb__DOT__we_only__71__target));
    vlSelfRef.sim_top__DOT__tb__DOT__we1 = (1U == (IData)(__Vtask_sim_top__DOT__tb__DOT__we_only__71__target));
    vlSelfRef.sim_top__DOT__tb__DOT__we2 = (2U == (IData)(__Vtask_sim_top__DOT__tb__DOT__we_only__71__target));
    vlSelfRef.sim_top__DOT__tb__DOT__we3 = (3U == (IData)(__Vtask_sim_top__DOT__tb__DOT__we_only__71__target));
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "uupal_tb.sv", 
                                         34);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    Vsim_top___024root____VbeforeTrig_hffd278f5__0(vlSelf, 
                                                   "@(posedge sim_top.clk)");
    co_await vlSelfRef.__VtrigSched_hffd278f5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge sim_top.clk)", 
                                                         "/workspaces/Sistemas-Digitales-2c2026/talleres/taller_3/ejercicios/lib/tb_helpers.svh", 
                                                         13);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    Vsim_top___024root____VbeforeTrig_hffd279b4__0(vlSelf, 
                                                   "@(negedge sim_top.clk)");
    co_await vlSelfRef.__VtrigSched_hffd279b4__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge sim_top.clk)", 
                                                         "/workspaces/Sistemas-Digitales-2c2026/talleres/taller_3/ejercicios/lib/tb_helpers.svh", 
                                                         13);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_in = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__force_en = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we0 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we1 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we2 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__we3 = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src_a = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__src_b = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__load_op_a = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__load_op_b = 0U;
    vlSelfRef.sim_top__DOT__tb__DOT__op = 0U;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__74__exp = 0x0000000dU;
    __Vtask_sim_top__DOT__tb__DOT__expect_eq__74__got 
        = vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b1__DOT__q;
    vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__74__tag = "R1=R0-R2 modulo 16"s;
    if ((__Vtask_sim_top__DOT__tb__DOT__expect_eq__74__got 
         != __Vtask_sim_top__DOT__tb__DOT__expect_eq__74__exp)) {
        VL_WRITEF_NX("FAIL: %s got=%0d (%b) exp=%0d (%b)\n",5
                     , 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__74__tag)
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__74__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__74__got
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__74__exp
                     , '~',32,__Vtask_sim_top__DOT__tb__DOT__expect_eq__74__exp);
        vlSelfRef.sim_top__DOT__tb__DOT__nfail = ((IData)(1U) 
                                                  + vlSelfRef.sim_top__DOT__tb__DOT__nfail);
    } else {
        VL_WRITEF_NX("PASS: %s\n",1, 'S',&(vlSelfRef.__Vtask_sim_top__DOT__tb__DOT__expect_eq__74__tag));
    }
    vlSelfRef.sim_top__DOT__pass_all = (0U == vlSelfRef.sim_top__DOT__tb__DOT__nfail);
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
                                             "/workspaces/Sistemas-Digitales-2c2026/talleres/taller_3/ejercicios/lib/sim_top.sv", 
                                             7);
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

void Vsim_top___024root___act_comb__TOP__0(Vsim_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___act_comb__TOP__0\n"); );
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT__din 
        = ((0U == (IData)(vlSelfRef.sim_top__DOT__tb__DOT__src_b))
            ? (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT__q)
            : ((1U == (IData)(vlSelfRef.sim_top__DOT__tb__DOT__src_b))
                ? (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b1__DOT__q)
                : ((2U == (IData)(vlSelfRef.sim_top__DOT__tb__DOT__src_b))
                    ? (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b2__DOT__q)
                    : (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b3__DOT__q))));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT__din 
        = ((0U == (IData)(vlSelfRef.sim_top__DOT__tb__DOT__src_a))
            ? (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT__q)
            : ((1U == (IData)(vlSelfRef.sim_top__DOT__tb__DOT__src_a))
                ? (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b1__DOT__q)
                : ((2U == (IData)(vlSelfRef.sim_top__DOT__tb__DOT__src_a))
                    ? (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b2__DOT__q)
                    : (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b3__DOT__q))));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT__din 
        = ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__force_en)
            ? (IData)(vlSelfRef.sim_top__DOT__tb__DOT__force_in)
            : ((0U == (IData)(vlSelfRef.sim_top__DOT__tb__DOT__op))
                ? (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__compuerta_and_4b__DOT__result)
                : ((1U == (IData)(vlSelfRef.sim_top__DOT__tb__DOT__op))
                    ? ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT__q) 
                       | (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT__q))
                    : ((((2U == (IData)(vlSelfRef.sim_top__DOT__tb__DOT__op))
                          ? ((4U & (((((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__compuerta_and_4b__DOT__result) 
                                       >> 2U) | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__sumador_4b__DOT__fa2__DOT__s1__DOT__b) 
                                                 & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                    >> 2U))) 
                                     ^ ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                        >> 3U)) << 2U)) 
                             | ((2U & (((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__sumador_4b__DOT__fa2__DOT__s1__DOT__b) 
                                        << 1U) ^ (0x7ffffffeU 
                                                  & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                     >> 1U)))) 
                                | (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__compuerta_and_4b__DOT__result) 
                                         ^ ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                            >> 1U)))))
                          : ((4U & (((((~ ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                           >> 2U)) 
                                       & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__restador_4b__DOT__fs2__DOT__r1__DOT__b)) 
                                      | ((~ (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT____Vcellout__b2__q)) 
                                         & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT____Vcellout__b2__q))) 
                                     ^ ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                        >> 3U)) << 2U)) 
                             | ((2U & (((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__restador_4b__DOT__fs2__DOT__r1__DOT__b) 
                                        << 1U) ^ (0x7ffffffeU 
                                                  & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                     >> 1U)))) 
                                | (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__restador_4b__DOT__fs1__DOT__r1__DOT__b) 
                                         ^ ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                            >> 1U)))))) 
                        << 1U) | (1U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))))));
    if (vlSelfRef.sim_top__DOT__tb__DOT__load_op_b) {
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT__b3__DOT__u_ff__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT__din) 
                     >> 3U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT__b2__DOT__u_ff__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT__din) 
                     >> 2U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT__b1__DOT__u_ff__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT__din) 
                     >> 1U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT__b0__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT__din));
    } else {
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT__b3__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT____Vcellout__b3__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT__b2__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT____Vcellout__b2__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT__b1__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT____Vcellout__b1__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT__b0__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT____Vcellout__b0__q));
    }
    if (vlSelfRef.sim_top__DOT__tb__DOT__load_op_a) {
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT__b3__DOT__u_ff__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT__din) 
                     >> 3U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT__b2__DOT__u_ff__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT__din) 
                     >> 2U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT__b1__DOT__u_ff__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT__din) 
                     >> 1U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT__b0__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT__din));
    } else {
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT__b3__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT____Vcellout__b3__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT__b2__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT____Vcellout__b2__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT__b1__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT____Vcellout__b1__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT__b0__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT____Vcellout__b0__q));
    }
    if (vlSelfRef.sim_top__DOT__tb__DOT__we3) {
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b3__DOT__b3__DOT__u_ff__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT__din) 
                     >> 3U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b3__DOT__b2__DOT__u_ff__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT__din) 
                     >> 2U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b3__DOT__b1__DOT__u_ff__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT__din) 
                     >> 1U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b3__DOT__b0__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT__din));
    } else {
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b3__DOT__b3__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b3__DOT____Vcellout__b3__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b3__DOT__b2__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b3__DOT____Vcellout__b2__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b3__DOT__b1__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b3__DOT____Vcellout__b1__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b3__DOT__b0__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b3__DOT____Vcellout__b0__q));
    }
    if (vlSelfRef.sim_top__DOT__tb__DOT__we2) {
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b2__DOT__b3__DOT__u_ff__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT__din) 
                     >> 3U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b2__DOT__b2__DOT__u_ff__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT__din) 
                     >> 2U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b2__DOT__b1__DOT__u_ff__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT__din) 
                     >> 1U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b2__DOT__b0__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT__din));
    } else {
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b2__DOT__b3__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b2__DOT____Vcellout__b3__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b2__DOT__b2__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b2__DOT____Vcellout__b2__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b2__DOT__b1__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b2__DOT____Vcellout__b1__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b2__DOT__b0__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b2__DOT____Vcellout__b0__q));
    }
    if (vlSelfRef.sim_top__DOT__tb__DOT__we1) {
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b1__DOT__b3__DOT__u_ff__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT__din) 
                     >> 3U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b1__DOT__b2__DOT__u_ff__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT__din) 
                     >> 2U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b1__DOT__b1__DOT__u_ff__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT__din) 
                     >> 1U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b1__DOT__b0__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT__din));
    } else {
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b1__DOT__b3__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b1__DOT____Vcellout__b3__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b1__DOT__b2__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b1__DOT____Vcellout__b2__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b1__DOT__b1__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b1__DOT____Vcellout__b1__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b1__DOT__b0__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b1__DOT____Vcellout__b0__q));
    }
    if (vlSelfRef.sim_top__DOT__tb__DOT__we0) {
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT__b3__DOT__u_ff__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT__din) 
                     >> 3U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT__b2__DOT__u_ff__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT__din) 
                     >> 2U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT__b1__DOT__u_ff__DOT__d 
            = (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT__din) 
                     >> 1U));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT__b0__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT__din));
    } else {
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT__b3__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT____Vcellout__b3__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT__b2__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT____Vcellout__b2__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT__b1__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT____Vcellout__b1__q));
        vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT__b0__DOT__u_ff__DOT__d 
            = (1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT____Vcellout__b0__q));
    }
}

void Vsim_top___024root___nba_sequent__TOP__0(Vsim_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___nba_sequent__TOP__0\n"); );
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b3__DOT____Vcellout__b3__q 
        = ((~ (IData)(vlSelfRef.sim_top__DOT__rst)) 
           & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b3__DOT__b3__DOT__u_ff__DOT__d));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b3__DOT____Vcellout__b2__q 
        = ((~ (IData)(vlSelfRef.sim_top__DOT__rst)) 
           & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b3__DOT__b2__DOT__u_ff__DOT__d));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b3__DOT____Vcellout__b1__q 
        = ((~ (IData)(vlSelfRef.sim_top__DOT__rst)) 
           & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b3__DOT__b1__DOT__u_ff__DOT__d));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b3__DOT____Vcellout__b0__q 
        = ((~ (IData)(vlSelfRef.sim_top__DOT__rst)) 
           & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b3__DOT__b0__DOT__u_ff__DOT__d));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b2__DOT____Vcellout__b3__q 
        = ((~ (IData)(vlSelfRef.sim_top__DOT__rst)) 
           & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b2__DOT__b3__DOT__u_ff__DOT__d));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b2__DOT____Vcellout__b2__q 
        = ((~ (IData)(vlSelfRef.sim_top__DOT__rst)) 
           & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b2__DOT__b2__DOT__u_ff__DOT__d));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b2__DOT____Vcellout__b1__q 
        = ((~ (IData)(vlSelfRef.sim_top__DOT__rst)) 
           & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b2__DOT__b1__DOT__u_ff__DOT__d));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b2__DOT____Vcellout__b0__q 
        = ((~ (IData)(vlSelfRef.sim_top__DOT__rst)) 
           & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b2__DOT__b0__DOT__u_ff__DOT__d));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b1__DOT____Vcellout__b3__q 
        = ((~ (IData)(vlSelfRef.sim_top__DOT__rst)) 
           & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b1__DOT__b3__DOT__u_ff__DOT__d));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b1__DOT____Vcellout__b2__q 
        = ((~ (IData)(vlSelfRef.sim_top__DOT__rst)) 
           & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b1__DOT__b2__DOT__u_ff__DOT__d));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b1__DOT____Vcellout__b1__q 
        = ((~ (IData)(vlSelfRef.sim_top__DOT__rst)) 
           & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b1__DOT__b1__DOT__u_ff__DOT__d));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b1__DOT____Vcellout__b0__q 
        = ((~ (IData)(vlSelfRef.sim_top__DOT__rst)) 
           & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b1__DOT__b0__DOT__u_ff__DOT__d));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT____Vcellout__b3__q 
        = ((~ (IData)(vlSelfRef.sim_top__DOT__rst)) 
           & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT__b3__DOT__u_ff__DOT__d));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT____Vcellout__b2__q 
        = ((~ (IData)(vlSelfRef.sim_top__DOT__rst)) 
           & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT__b2__DOT__u_ff__DOT__d));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT____Vcellout__b1__q 
        = ((~ (IData)(vlSelfRef.sim_top__DOT__rst)) 
           & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT__b1__DOT__u_ff__DOT__d));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT____Vcellout__b0__q 
        = ((~ (IData)(vlSelfRef.sim_top__DOT__rst)) 
           & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT__b0__DOT__u_ff__DOT__d));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT____Vcellout__b3__q 
        = ((~ (IData)(vlSelfRef.sim_top__DOT__rst)) 
           & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT__b3__DOT__u_ff__DOT__d));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT____Vcellout__b3__q 
        = ((~ (IData)(vlSelfRef.sim_top__DOT__rst)) 
           & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT__b3__DOT__u_ff__DOT__d));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT____Vcellout__b2__q 
        = ((~ (IData)(vlSelfRef.sim_top__DOT__rst)) 
           & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT__b2__DOT__u_ff__DOT__d));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT____Vcellout__b2__q 
        = ((~ (IData)(vlSelfRef.sim_top__DOT__rst)) 
           & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT__b2__DOT__u_ff__DOT__d));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT____Vcellout__b1__q 
        = ((~ (IData)(vlSelfRef.sim_top__DOT__rst)) 
           & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT__b1__DOT__u_ff__DOT__d));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT____Vcellout__b1__q 
        = ((~ (IData)(vlSelfRef.sim_top__DOT__rst)) 
           & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT__b1__DOT__u_ff__DOT__d));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT____Vcellout__b0__q 
        = ((~ (IData)(vlSelfRef.sim_top__DOT__rst)) 
           & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT__b0__DOT__u_ff__DOT__d));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT____Vcellout__b0__q 
        = ((~ (IData)(vlSelfRef.sim_top__DOT__rst)) 
           & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT__b0__DOT__u_ff__DOT__d));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b3__DOT__q 
        = ((((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b3__DOT____Vcellout__b3__q) 
             << 3U) | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b3__DOT____Vcellout__b2__q) 
                       << 2U)) | (((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b3__DOT____Vcellout__b1__q) 
                                   << 1U) | (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b3__DOT____Vcellout__b0__q)));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b2__DOT__q 
        = ((((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b2__DOT____Vcellout__b3__q) 
             << 3U) | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b2__DOT____Vcellout__b2__q) 
                       << 2U)) | (((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b2__DOT____Vcellout__b1__q) 
                                   << 1U) | (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b2__DOT____Vcellout__b0__q)));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b1__DOT__q 
        = ((((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b1__DOT____Vcellout__b3__q) 
             << 3U) | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b1__DOT____Vcellout__b2__q) 
                       << 2U)) | (((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b1__DOT____Vcellout__b1__q) 
                                   << 1U) | (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b1__DOT____Vcellout__b0__q)));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT__q 
        = ((((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT____Vcellout__b3__q) 
             << 3U) | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT____Vcellout__b2__q) 
                       << 2U)) | (((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT____Vcellout__b1__q) 
                                   << 1U) | (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT____Vcellout__b0__q)));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT__q 
        = ((((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT____Vcellout__b3__q) 
             << 3U) | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT____Vcellout__b2__q) 
                       << 2U)) | (((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT____Vcellout__b1__q) 
                                   << 1U) | (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT____Vcellout__b0__q)));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__restador_4b__DOT__fs1__DOT__r1__DOT__b 
        = ((~ (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT____Vcellout__b0__q)) 
           & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT____Vcellout__b0__q));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT__q 
        = ((((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT____Vcellout__b3__q) 
             << 3U) | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT____Vcellout__b2__q) 
                       << 2U)) | (((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT____Vcellout__b1__q) 
                                   << 1U) | (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT____Vcellout__b0__q)));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__compuerta_and_4b__DOT__result 
        = ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT__q) 
           & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT__q));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT__q) 
                                                ^ (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT__q));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__sumador_4b__DOT__fa2__DOT__s1__DOT__b 
        = (1U & (((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__compuerta_and_4b__DOT__result) 
                  >> 1U) | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__compuerta_and_4b__DOT__result) 
                            & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                               >> 1U))));
    vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__restador_4b__DOT__fs2__DOT__r1__DOT__b 
        = (((~ ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                >> 1U)) & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__restador_4b__DOT__fs1__DOT__r1__DOT__b)) 
           | ((~ (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT____Vcellout__b1__q)) 
              & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT____Vcellout__b1__q)));
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
            if ((0x000000000000001dULL & vlSelfRef.__VactTriggered[0U])) {
                Vsim_top___024root___act_comb__TOP__0(vlSelf);
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
        VL_FATAL_MT("/workspaces/Sistemas-Digitales-2c2026/talleres/taller_3/ejercicios/lib/sim_top.sv", 4, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
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
                vlSelfRef.__Vm_traceActivity[4U] = 1U;
            }
            if ((0x000000000000001dULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vsim_top___024root___act_comb__TOP__0(vlSelf);
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
            VL_FATAL_MT("/workspaces/Sistemas-Digitales-2c2026/talleres/taller_3/ejercicios/lib/sim_top.sv", 4, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("/workspaces/Sistemas-Digitales-2c2026/talleres/taller_3/ejercicios/lib/sim_top.sv", 4, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vsim_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("/workspaces/Sistemas-Digitales-2c2026/talleres/taller_3/ejercicios/lib/sim_top.sv", 4, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
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
