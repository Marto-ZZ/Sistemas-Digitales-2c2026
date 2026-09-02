// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vsim_top__Syms.h"


void Vsim_top___024root__trace_chg_0_sub_0(Vsim_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vsim_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root__trace_chg_0\n"); );
    // Body
    Vsim_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsim_top___024root*>(voidSelf);
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vsim_top___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vsim_top___024root__trace_chg_0_sub_0(Vsim_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root__trace_chg_0_sub_0\n"); );
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.sim_top__DOT__done));
        bufp->chgBit(oldp+1,(vlSelfRef.sim_top__DOT__pass_all));
        bufp->chgCData(oldp+2,(vlSelfRef.sim_top__DOT__tb__DOT__force_in),4);
        bufp->chgBit(oldp+3,(vlSelfRef.sim_top__DOT__tb__DOT__we_a));
        bufp->chgBit(oldp+4,(vlSelfRef.sim_top__DOT__tb__DOT__we_b));
        bufp->chgBit(oldp+5,(vlSelfRef.sim_top__DOT__tb__DOT__we_s));
        bufp->chgBit(oldp+6,(vlSelfRef.sim_top__DOT__tb__DOT__rst_extra));
        bufp->chgIData(oldp+7,(vlSelfRef.sim_top__DOT__tb__DOT__nfail),32);
        bufp->chgIData(oldp+8,(vlSelfRef.sim_top__DOT__tb__DOT__npass),32);
        bufp->chgBit(oldp+9,((1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__force_in))));
        bufp->chgBit(oldp+10,((1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__force_in) 
                                     >> 1U))));
        bufp->chgBit(oldp+11,((1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__force_in) 
                                     >> 2U))));
        bufp->chgBit(oldp+12,((1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__force_in) 
                                     >> 3U))));
    }
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity[1U] 
                       | vlSelfRef.__Vm_traceActivity[2U]) 
                      | vlSelfRef.__Vm_traceActivity[3U])))) {
        bufp->chgBit(oldp+13,((1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__we_a)
                                      ? (IData)(vlSelfRef.sim_top__DOT__tb__DOT__force_in)
                                      : (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b1__DOT____Vcellout__regis0__q)))));
        bufp->chgBit(oldp+14,((1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__we_a)
                                      ? ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__force_in) 
                                         >> 1U) : (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b1__DOT____Vcellout__regis1__q)))));
        bufp->chgBit(oldp+15,((1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__we_a)
                                      ? ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__force_in) 
                                         >> 2U) : (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b1__DOT____Vcellout__regis2__q)))));
        bufp->chgBit(oldp+16,((1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__we_a)
                                      ? ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__force_in) 
                                         >> 3U) : (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b1__DOT____Vcellout__regis3__q)))));
        bufp->chgBit(oldp+17,((1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__we_b)
                                      ? (IData)(vlSelfRef.sim_top__DOT__tb__DOT__force_in)
                                      : (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b2__DOT____Vcellout__regis0__q)))));
        bufp->chgBit(oldp+18,((1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__we_b)
                                      ? ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__force_in) 
                                         >> 1U) : (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b2__DOT____Vcellout__regis1__q)))));
        bufp->chgBit(oldp+19,((1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__we_b)
                                      ? ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__force_in) 
                                         >> 2U) : (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b2__DOT____Vcellout__regis2__q)))));
        bufp->chgBit(oldp+20,((1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__we_b)
                                      ? ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__force_in) 
                                         >> 3U) : (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b2__DOT____Vcellout__regis3__q)))));
        bufp->chgBit(oldp+21,((1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__we_s)
                                      ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)
                                      : (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regisuma__DOT____Vcellout__regis0__q)))));
        bufp->chgBit(oldp+22,(((IData)(vlSelfRef.sim_top__DOT__tb__DOT__we_s)
                                ? (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regisuma__DOT__regis1__DOT__din)
                                : (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regisuma__DOT____Vcellout__regis1__q))));
        bufp->chgBit(oldp+23,(((IData)(vlSelfRef.sim_top__DOT__tb__DOT__we_s)
                                ? (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regisuma__DOT__regis2__DOT__din)
                                : (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regisuma__DOT____Vcellout__regis2__q))));
        bufp->chgBit(oldp+24,(((IData)(vlSelfRef.sim_top__DOT__tb__DOT__we_s)
                                ? (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regisuma__DOT__regis3__DOT__din)
                                : (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regisuma__DOT____Vcellout__regis3__q))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgCData(oldp+25,(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b1__DOT__q),4);
        bufp->chgCData(oldp+26,(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b2__DOT__q),4);
        bufp->chgCData(oldp+27,(((((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regisuma__DOT____Vcellout__regis3__q) 
                                   << 3U) | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regisuma__DOT____Vcellout__regis2__q) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regisuma__DOT____Vcellout__regis1__q) 
                                     << 1U) | (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regisuma__DOT____Vcellout__regis0__q)))),4);
        bufp->chgBit(oldp+28,((1U & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                      >> 3U) | ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                  >> 2U) 
                                                 | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__sumador__DOT__fa2__DOT__ha1__DOT__b) 
                                                    & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                                       >> 2U))) 
                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                                   >> 3U))))));
        bufp->chgCData(oldp+29,(((((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regisuma__DOT__regis3__DOT__din) 
                                   << 3U) | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regisuma__DOT__regis2__DOT__din) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regisuma__DOT__regis1__DOT__din) 
                                     << 1U) | (1U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1))))),4);
        bufp->chgBit(oldp+30,(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b1__DOT____Vcellout__regis0__q));
        bufp->chgBit(oldp+31,(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b1__DOT____Vcellout__regis1__q));
        bufp->chgBit(oldp+32,(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b1__DOT____Vcellout__regis2__q));
        bufp->chgBit(oldp+33,(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b1__DOT____Vcellout__regis3__q));
        bufp->chgBit(oldp+34,(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b2__DOT____Vcellout__regis0__q));
        bufp->chgBit(oldp+35,(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b2__DOT____Vcellout__regis1__q));
        bufp->chgBit(oldp+36,(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b2__DOT____Vcellout__regis2__q));
        bufp->chgBit(oldp+37,(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b2__DOT____Vcellout__regis3__q));
        bufp->chgBit(oldp+38,((1U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1))));
        bufp->chgBit(oldp+39,(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regisuma__DOT____Vcellout__regis0__q));
        bufp->chgBit(oldp+40,(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regisuma__DOT__regis1__DOT__din));
        bufp->chgBit(oldp+41,(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regisuma__DOT____Vcellout__regis1__q));
        bufp->chgBit(oldp+42,(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regisuma__DOT__regis2__DOT__din));
        bufp->chgBit(oldp+43,(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regisuma__DOT____Vcellout__regis2__q));
        bufp->chgBit(oldp+44,(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regisuma__DOT__regis3__DOT__din));
        bufp->chgBit(oldp+45,(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regisuma__DOT____Vcellout__regis3__q));
        bufp->chgBit(oldp+46,((1U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))));
        bufp->chgBit(oldp+47,(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__sumador__DOT__fa2__DOT__ha1__DOT__b));
        bufp->chgBit(oldp+48,((1U & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                      >> 2U) | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__sumador__DOT__fa2__DOT__ha1__DOT__b) 
                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                                   >> 2U))))));
        bufp->chgBit(oldp+49,((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                     >> 1U))));
        bufp->chgBit(oldp+50,((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                     >> 1U))));
        bufp->chgBit(oldp+51,((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                     & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                        >> 1U)))));
        bufp->chgBit(oldp+52,((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                     >> 2U))));
        bufp->chgBit(oldp+53,((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                     >> 2U))));
        bufp->chgBit(oldp+54,(((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__sumador__DOT__fa2__DOT__ha1__DOT__b) 
                               & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                  >> 2U))));
        bufp->chgBit(oldp+55,((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                     >> 3U))));
        bufp->chgBit(oldp+56,((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                     >> 3U))));
        bufp->chgBit(oldp+57,((IData)((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                        >> 3U) & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                   >> 2U) 
                                                  | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__sumador__DOT__fa2__DOT__ha1__DOT__b) 
                                                     & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                                        >> 2U)))))));
    }
    bufp->chgBit(oldp+58,(vlSelfRef.sim_top__DOT__clk));
    bufp->chgBit(oldp+59,(vlSelfRef.sim_top__DOT__rst));
    bufp->chgBit(oldp+60,(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__regis4b1__DOT__regis0__DOT__nuevo_ff_d__DOT__rst));
}

void Vsim_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root__trace_cleanup\n"); );
    // Body
    Vsim_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsim_top___024root*>(voidSelf);
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
