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
    CData/*3:0*/ sim_top__DOT__tb__DOT__force_in;
    CData/*0:0*/ sim_top__DOT__tb__DOT__force_en;
    CData/*1:0*/ sim_top__DOT__tb__DOT__src;
    CData/*0:0*/ sim_top__DOT__tb__DOT__we0;
    CData/*0:0*/ sim_top__DOT__tb__DOT__we1;
    CData/*0:0*/ sim_top__DOT__tb__DOT__we2;
    CData/*0:0*/ sim_top__DOT__tb__DOT__we3;
    CData/*0:0*/ sim_top__DOT__tb__DOT__rst_extra;
    CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__regis4b3__DOT____Vcellout__regis0__q;
    CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__regis4b3__DOT____Vcellout__regis1__q;
    CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__regis4b3__DOT____Vcellout__regis2__q;
    CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__regis4b3__DOT____Vcellout__regis3__q;
    CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__regis4b3__DOT__regis3__DOT__nuevo_ff_d__DOT__d;
    CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__regis4b3__DOT__regis2__DOT__nuevo_ff_d__DOT__d;
    CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__regis4b3__DOT__regis1__DOT__nuevo_ff_d__DOT__d;
    CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__regis4b3__DOT__regis0__DOT__nuevo_ff_d__DOT__d;
    CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__regis4b2__DOT____Vcellout__regis0__q;
    CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__regis4b2__DOT____Vcellout__regis1__q;
    CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__regis4b2__DOT____Vcellout__regis2__q;
    CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__regis4b2__DOT____Vcellout__regis3__q;
    CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__regis4b2__DOT__regis3__DOT__nuevo_ff_d__DOT__d;
    CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__regis4b2__DOT__regis2__DOT__nuevo_ff_d__DOT__d;
    CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__regis4b2__DOT__regis1__DOT__nuevo_ff_d__DOT__d;
    CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__regis4b2__DOT__regis0__DOT__nuevo_ff_d__DOT__d;
    CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__regis4b1__DOT____Vcellout__regis0__q;
    CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__regis4b1__DOT____Vcellout__regis1__q;
    CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__regis4b1__DOT____Vcellout__regis2__q;
    CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__regis4b1__DOT____Vcellout__regis3__q;
    CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__regis4b1__DOT__regis3__DOT__nuevo_ff_d__DOT__d;
    CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__regis4b1__DOT__regis2__DOT__nuevo_ff_d__DOT__d;
    CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__regis4b1__DOT__regis1__DOT__nuevo_ff_d__DOT__d;
    CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__regis4b1__DOT__regis0__DOT__nuevo_ff_d__DOT__d;
    CData/*3:0*/ sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT__din;
    CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT____Vcellout__regis0__q;
    CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT____Vcellout__regis1__q;
    CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT____Vcellout__regis2__q;
    CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT____Vcellout__regis3__q;
    CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT__regis3__DOT__nuevo_ff_d__DOT__d;
    CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT__regis2__DOT__nuevo_ff_d__DOT__d;
    CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT__regis1__DOT__nuevo_ff_d__DOT__d;
    CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT__regis0__DOT__nuevo_ff_d__DOT__rst;
    CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__regis4b0__DOT__regis0__DOT__nuevo_ff_d__DOT__d;
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
    VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    std::string __Vtask_sim_top__DOT__tb__DOT__expect_eq__2__tag;
    std::string __Vtask_sim_top__DOT__tb__DOT__expect_eq__3__tag;
    std::string __Vtask_sim_top__DOT__tb__DOT__expect_eq__4__tag;
    std::string __Vtask_sim_top__DOT__tb__DOT__expect_eq__5__tag;
    std::string __Vtask_sim_top__DOT__tb__DOT__expect_eq__10__tag;
    std::string __Vtask_sim_top__DOT__tb__DOT__expect_eq__15__tag;
    std::string __Vtask_sim_top__DOT__tb__DOT__expect_eq__16__tag;
    std::string __Vtask_sim_top__DOT__tb__DOT__expect_eq__21__tag;
    std::string __Vtask_sim_top__DOT__tb__DOT__expect_eq__26__tag;
    std::string __Vtask_sim_top__DOT__tb__DOT__expect_eq__31__tag;
    std::string __Vtask_sim_top__DOT__tb__DOT__expect_eq__32__tag;
    std::string __Vtask_sim_top__DOT__tb__DOT__expect_eq__33__tag;
    std::string __Vtask_sim_top__DOT__tb__DOT__expect_eq__36__tag;
    std::string __Vtask_sim_top__DOT__tb__DOT__expect_eq__37__tag;
    std::string __Vtask_sim_top__DOT__tb__DOT__expect_eq__38__tag;
    std::string __Vtask_sim_top__DOT__tb__DOT__expect_eq__39__tag;
    std::string __Vtask_sim_top__DOT__tb__DOT__expect_eq__44__tag;
    std::string __Vtask_sim_top__DOT__tb__DOT__expect_eq__45__tag;
    std::string __Vtask_sim_top__DOT__tb__DOT__expect_eq__50__tag;
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
