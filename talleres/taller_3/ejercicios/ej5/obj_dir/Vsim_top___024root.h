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
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ sim_top__DOT__clk;
        CData/*0:0*/ sim_top__DOT__rst;
        CData/*0:0*/ sim_top__DOT__done;
        CData/*0:0*/ sim_top__DOT__pass_all;
        CData/*3:0*/ sim_top__DOT__tb__DOT__force_in;
        CData/*0:0*/ sim_top__DOT__tb__DOT__force_en;
        CData/*0:0*/ sim_top__DOT__tb__DOT__we0;
        CData/*0:0*/ sim_top__DOT__tb__DOT__we1;
        CData/*0:0*/ sim_top__DOT__tb__DOT__we2;
        CData/*0:0*/ sim_top__DOT__tb__DOT__we3;
        CData/*0:0*/ sim_top__DOT__tb__DOT__load_op_a;
        CData/*0:0*/ sim_top__DOT__tb__DOT__load_op_b;
        CData/*1:0*/ sim_top__DOT__tb__DOT__src_a;
        CData/*1:0*/ sim_top__DOT__tb__DOT__src_b;
        CData/*1:0*/ sim_top__DOT__tb__DOT__op;
        CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__restador_4b__DOT__fs2__DOT__r1__DOT__b;
        CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__restador_4b__DOT__fs1__DOT__r1__DOT__b;
        CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__sumador_4b__DOT__fa2__DOT__s1__DOT__b;
        CData/*3:0*/ sim_top__DOT__tb__DOT__dut__DOT__registro_4b3__DOT__q;
        CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__registro_4b3__DOT____Vcellout__b0__q;
        CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__registro_4b3__DOT____Vcellout__b1__q;
        CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__registro_4b3__DOT____Vcellout__b2__q;
        CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__registro_4b3__DOT____Vcellout__b3__q;
        CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__registro_4b3__DOT__b3__DOT__u_ff__DOT__d;
        CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__registro_4b3__DOT__b2__DOT__u_ff__DOT__d;
        CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__registro_4b3__DOT__b1__DOT__u_ff__DOT__d;
        CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__registro_4b3__DOT__b0__DOT__u_ff__DOT__d;
        CData/*3:0*/ sim_top__DOT__tb__DOT__dut__DOT__registro_4b2__DOT__q;
        CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__registro_4b2__DOT____Vcellout__b0__q;
        CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__registro_4b2__DOT____Vcellout__b1__q;
        CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__registro_4b2__DOT____Vcellout__b2__q;
        CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__registro_4b2__DOT____Vcellout__b3__q;
        CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__registro_4b2__DOT__b3__DOT__u_ff__DOT__d;
        CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__registro_4b2__DOT__b2__DOT__u_ff__DOT__d;
        CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__registro_4b2__DOT__b1__DOT__u_ff__DOT__d;
        CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__registro_4b2__DOT__b0__DOT__u_ff__DOT__d;
        CData/*3:0*/ sim_top__DOT__tb__DOT__dut__DOT__registro_4b1__DOT__q;
        CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__registro_4b1__DOT____Vcellout__b0__q;
        CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__registro_4b1__DOT____Vcellout__b1__q;
        CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__registro_4b1__DOT____Vcellout__b2__q;
        CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__registro_4b1__DOT____Vcellout__b3__q;
        CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__registro_4b1__DOT__b3__DOT__u_ff__DOT__d;
        CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__registro_4b1__DOT__b2__DOT__u_ff__DOT__d;
        CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__registro_4b1__DOT__b1__DOT__u_ff__DOT__d;
        CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__registro_4b1__DOT__b0__DOT__u_ff__DOT__d;
        CData/*3:0*/ sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT__din;
        CData/*3:0*/ sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT__q;
        CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT____Vcellout__b0__q;
        CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT____Vcellout__b1__q;
        CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT____Vcellout__b2__q;
        CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT____Vcellout__b3__q;
        CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT__b3__DOT__u_ff__DOT__d;
        CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT__b2__DOT__u_ff__DOT__d;
        CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT__b1__DOT__u_ff__DOT__d;
        CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT__b0__DOT__u_ff__DOT__d;
        CData/*3:0*/ sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT__din;
        CData/*3:0*/ sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT__q;
        CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT____Vcellout__b0__q;
        CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT____Vcellout__b1__q;
        CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT____Vcellout__b2__q;
        CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT____Vcellout__b3__q;
        CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT__b3__DOT__u_ff__DOT__d;
        CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT__b2__DOT__u_ff__DOT__d;
        CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT__b1__DOT__u_ff__DOT__d;
    };
    struct {
        CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT__b0__DOT__u_ff__DOT__d;
        CData/*3:0*/ sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT__din;
        CData/*3:0*/ sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT__q;
        CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT____Vcellout__b0__q;
        CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT____Vcellout__b1__q;
        CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT____Vcellout__b2__q;
        CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT____Vcellout__b3__q;
        CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT__b3__DOT__u_ff__DOT__d;
        CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT__b2__DOT__u_ff__DOT__d;
        CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT__b1__DOT__u_ff__DOT__d;
        CData/*0:0*/ sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT__b0__DOT__u_ff__DOT__d;
        CData/*3:0*/ sim_top__DOT__tb__DOT__dut__DOT__compuerta_and_4b__DOT__result;
        CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_0;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__sim_top__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__sim_top__DOT__done__0;
        CData/*0:0*/ __Vtrigprevexpr_h5b83a2b0__1;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VinactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        IData/*31:0*/ sim_top__DOT__tb__DOT__nfail;
        IData/*31:0*/ __VactIterCount;
        IData/*31:0*/ __VinactIterCount;
        IData/*31:0*/ __Vi;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
        VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    };
    std::string __Vtask_sim_top__DOT__tb__DOT__expect_eq__1__tag;
    std::string __Vtask_sim_top__DOT__tb__DOT__expect_eq__2__tag;
    std::string __Vtask_sim_top__DOT__tb__DOT__expect_eq__3__tag;
    std::string __Vtask_sim_top__DOT__tb__DOT__expect_eq__4__tag;
    std::string __Vtask_sim_top__DOT__tb__DOT__expect_eq__15__tag;
    std::string __Vtask_sim_top__DOT__tb__DOT__expect_eq__16__tag;
    std::string __Vtask_sim_top__DOT__tb__DOT__expect_eq__17__tag;
    std::string __Vtask_sim_top__DOT__tb__DOT__expect_eq__18__tag;
    std::string __Vtask_sim_top__DOT__tb__DOT__expect_eq__24__tag;
    std::string __Vtask_sim_top__DOT__tb__DOT__expect_eq__25__tag;
    std::string __Vtask_sim_top__DOT__tb__DOT__expect_eq__35__tag;
    std::string __Vtask_sim_top__DOT__tb__DOT__expect_eq__36__tag;
    std::string __Vtask_sim_top__DOT__tb__DOT__expect_eq__42__tag;
    std::string __Vtask_sim_top__DOT__tb__DOT__expect_eq__52__tag;
    std::string __Vtask_sim_top__DOT__tb__DOT__expect_eq__57__tag;
    std::string __Vtask_sim_top__DOT__tb__DOT__expect_eq__58__tag;
    std::string __Vtask_sim_top__DOT__tb__DOT__expect_eq__64__tag;
    std::string __Vtask_sim_top__DOT__tb__DOT__expect_eq__74__tag;
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
