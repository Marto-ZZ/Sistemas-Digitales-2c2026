// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim_top.h for the primary calling header

#ifndef VERILATED_VSIM_TOP___024ROOT_H_
#define VERILATED_VSIM_TOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsim_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsim_top___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ sim_top__DOT__clk;
    CData/*0:0*/ sim_top__DOT__rst;
    CData/*0:0*/ sim_top__DOT__done;
    CData/*0:0*/ sim_top__DOT__pass_all;
    CData/*0:0*/ sim_top__DOT__tb__DOT__we;
    CData/*3:0*/ sim_top__DOT__tb__DOT__din;
    CData/*0:0*/ sim_top__DOT__tb__DOT__rst_extra;
    CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT____Vcellout__regis0__q;
    CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT____Vcellout__regis1__q;
    CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT____Vcellout__regis2__q;
    CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT____Vcellout__regis3__q;
    CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__regis3__DOT__nuevo_ff_d__DOT__d;
    CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__regis2__DOT__nuevo_ff_d__DOT__d;
    CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__regis1__DOT__nuevo_ff_d__DOT__d;
    CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__regis0__DOT__nuevo_ff_d__DOT__rst;
    CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__regis0__DOT__nuevo_ff_d__DOT__d;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__sim_top__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__sim_top__DOT__done__0;
    CData/*0:0*/ __Vtrigprevexpr_h5b83a2b0__1;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ sim_top__DOT__tb__DOT__nfail;
    IData/*31:0*/ sim_top__DOT__tb__DOT__npass;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    std::string __Vtask_sim_top__DOT__tb__DOT__expect_eq__1__tag;
    std::string __Vtask_sim_top__DOT__tb__DOT__expect_eq__3__tag;
    std::string __Vtask_sim_top__DOT__tb__DOT__expect_eq__5__tag;
    std::string __Vtask_sim_top__DOT__tb__DOT__expect_eq__7__tag;
    std::string __Vtask_sim_top__DOT__tb__DOT__expect_eq__9__tag;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hffd278f5__0;
    VlTriggerScheduler __VtrigSched_hde298250__0;
    VlTriggerScheduler __VtrigSched_hcb33f8c5__0;
    VlTriggerScheduler __VtrigSched_hffd279b4__0;

    // INTERNAL VARIABLES
    Vsim_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vsim_top___024root(Vsim_top__Syms* symsp, const char* namep);
    ~Vsim_top___024root();
    VL_UNCOPYABLE(Vsim_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
