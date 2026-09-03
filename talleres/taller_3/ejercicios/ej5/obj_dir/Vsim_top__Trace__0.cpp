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
        bufp->chgBit(oldp+3,(vlSelfRef.sim_top__DOT__tb__DOT__force_en));
        bufp->chgBit(oldp+4,(vlSelfRef.sim_top__DOT__tb__DOT__we0));
        bufp->chgBit(oldp+5,(vlSelfRef.sim_top__DOT__tb__DOT__we1));
        bufp->chgBit(oldp+6,(vlSelfRef.sim_top__DOT__tb__DOT__we2));
        bufp->chgBit(oldp+7,(vlSelfRef.sim_top__DOT__tb__DOT__we3));
        bufp->chgBit(oldp+8,(vlSelfRef.sim_top__DOT__tb__DOT__load_op_a));
        bufp->chgBit(oldp+9,(vlSelfRef.sim_top__DOT__tb__DOT__load_op_b));
        bufp->chgCData(oldp+10,(vlSelfRef.sim_top__DOT__tb__DOT__src_a),2);
        bufp->chgCData(oldp+11,(vlSelfRef.sim_top__DOT__tb__DOT__src_b),2);
        bufp->chgCData(oldp+12,(vlSelfRef.sim_top__DOT__tb__DOT__op),2);
        bufp->chgIData(oldp+13,(vlSelfRef.sim_top__DOT__tb__DOT__nfail),32);
    }
    if (VL_UNLIKELY((((((vlSelfRef.__Vm_traceActivity[1U] 
                         | vlSelfRef.__Vm_traceActivity[2U]) 
                        | vlSelfRef.__Vm_traceActivity[3U]) 
                       | vlSelfRef.__Vm_traceActivity[4U]) 
                      | vlSelfRef.__Vm_traceActivity[5U])))) {
        bufp->chgBit(oldp+14,((1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__we0)
                                      ? (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT__din)
                                      : (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT____Vcellout__b0__q)))));
        bufp->chgBit(oldp+15,((1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__we0)
                                      ? ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT__din) 
                                         >> 1U) : (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT____Vcellout__b1__q)))));
        bufp->chgBit(oldp+16,((1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__we0)
                                      ? ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT__din) 
                                         >> 2U) : (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT____Vcellout__b2__q)))));
        bufp->chgBit(oldp+17,((1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__we0)
                                      ? ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT__din) 
                                         >> 3U) : (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT____Vcellout__b3__q)))));
        bufp->chgBit(oldp+18,((1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__we1)
                                      ? (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT__din)
                                      : (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b1__DOT____Vcellout__b0__q)))));
        bufp->chgBit(oldp+19,((1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__we1)
                                      ? ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT__din) 
                                         >> 1U) : (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b1__DOT____Vcellout__b1__q)))));
        bufp->chgBit(oldp+20,((1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__we1)
                                      ? ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT__din) 
                                         >> 2U) : (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b1__DOT____Vcellout__b2__q)))));
        bufp->chgBit(oldp+21,((1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__we1)
                                      ? ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT__din) 
                                         >> 3U) : (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b1__DOT____Vcellout__b3__q)))));
        bufp->chgBit(oldp+22,((1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__we2)
                                      ? (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT__din)
                                      : (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b2__DOT____Vcellout__b0__q)))));
        bufp->chgBit(oldp+23,((1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__we2)
                                      ? ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT__din) 
                                         >> 1U) : (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b2__DOT____Vcellout__b1__q)))));
        bufp->chgBit(oldp+24,((1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__we2)
                                      ? ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT__din) 
                                         >> 2U) : (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b2__DOT____Vcellout__b2__q)))));
        bufp->chgBit(oldp+25,((1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__we2)
                                      ? ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT__din) 
                                         >> 3U) : (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b2__DOT____Vcellout__b3__q)))));
        bufp->chgBit(oldp+26,((1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__we3)
                                      ? (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT__din)
                                      : (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b3__DOT____Vcellout__b0__q)))));
        bufp->chgBit(oldp+27,((1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__we3)
                                      ? ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT__din) 
                                         >> 1U) : (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b3__DOT____Vcellout__b1__q)))));
        bufp->chgBit(oldp+28,((1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__we3)
                                      ? ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT__din) 
                                         >> 2U) : (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b3__DOT____Vcellout__b2__q)))));
        bufp->chgBit(oldp+29,((1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__we3)
                                      ? ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT__din) 
                                         >> 3U) : (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b3__DOT____Vcellout__b3__q)))));
        bufp->chgBit(oldp+30,((1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__load_op_a)
                                      ? (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT__din)
                                      : (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT____Vcellout__b0__q)))));
        bufp->chgBit(oldp+31,((1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__load_op_a)
                                      ? ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT__din) 
                                         >> 1U) : (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT____Vcellout__b1__q)))));
        bufp->chgBit(oldp+32,((1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__load_op_a)
                                      ? ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT__din) 
                                         >> 2U) : (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT____Vcellout__b2__q)))));
        bufp->chgBit(oldp+33,((1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__load_op_a)
                                      ? ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT__din) 
                                         >> 3U) : (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT____Vcellout__b3__q)))));
        bufp->chgBit(oldp+34,((1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__load_op_b)
                                      ? (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT__din)
                                      : (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT____Vcellout__b0__q)))));
        bufp->chgBit(oldp+35,((1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__load_op_b)
                                      ? ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT__din) 
                                         >> 1U) : (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT____Vcellout__b1__q)))));
        bufp->chgBit(oldp+36,((1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__load_op_b)
                                      ? ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT__din) 
                                         >> 2U) : (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT____Vcellout__b2__q)))));
        bufp->chgBit(oldp+37,((1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__load_op_b)
                                      ? ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT__din) 
                                         >> 3U) : (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT____Vcellout__b3__q)))));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity[5U])))) {
        bufp->chgCData(oldp+38,(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT__din),4);
        bufp->chgCData(oldp+39,(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT__din),4);
        bufp->chgCData(oldp+40,(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT__din),4);
        bufp->chgBit(oldp+41,((1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT__din))));
        bufp->chgBit(oldp+42,((1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT__din) 
                                     >> 1U))));
        bufp->chgBit(oldp+43,((1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT__din) 
                                     >> 2U))));
        bufp->chgBit(oldp+44,((1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT__din) 
                                     >> 3U))));
        bufp->chgBit(oldp+45,((1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT__din))));
        bufp->chgBit(oldp+46,((1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT__din) 
                                     >> 1U))));
        bufp->chgBit(oldp+47,((1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT__din) 
                                     >> 2U))));
        bufp->chgBit(oldp+48,((1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT__din) 
                                     >> 3U))));
        bufp->chgBit(oldp+49,((1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT__din))));
        bufp->chgBit(oldp+50,((1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT__din) 
                                     >> 1U))));
        bufp->chgBit(oldp+51,((1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT__din) 
                                     >> 2U))));
        bufp->chgBit(oldp+52,((1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT__din) 
                                     >> 3U))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgCData(oldp+53,(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT__q),4);
        bufp->chgCData(oldp+54,(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b1__DOT__q),4);
        bufp->chgCData(oldp+55,(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b2__DOT__q),4);
        bufp->chgCData(oldp+56,(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b3__DOT__q),4);
        bufp->chgCData(oldp+57,(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT__q),4);
        bufp->chgCData(oldp+58,(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT__q),4);
        bufp->chgCData(oldp+59,(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__compuerta_and_4b__DOT__result),4);
        bufp->chgCData(oldp+60,(((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT__q) 
                                 | (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT__q))),4);
        bufp->chgCData(oldp+61,(((((2U & (((((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__compuerta_and_4b__DOT__result) 
                                             >> 2U) 
                                            | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__sumador_4b__DOT__fa2__DOT__s1__DOT__b) 
                                               & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                  >> 2U))) 
                                           ^ ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                              >> 3U)) 
                                          << 1U)) | 
                                   (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__sumador_4b__DOT__fa2__DOT__s1__DOT__b) 
                                          ^ ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                             >> 2U)))) 
                                  << 2U) | ((2U & (
                                                   ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__compuerta_and_4b__DOT__result) 
                                                    << 1U) 
                                                   ^ 
                                                   (0xfffffffeU 
                                                    & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)))) 
                                            | (1U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))))),4);
        bufp->chgCData(oldp+62,(((((2U & (((((~ ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                 >> 2U)) 
                                             & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__restador_4b__DOT__fs2__DOT__r1__DOT__b)) 
                                            | ((~ (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT____Vcellout__b2__q)) 
                                               & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT____Vcellout__b2__q))) 
                                           ^ ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                              >> 3U)) 
                                          << 1U)) | 
                                   (1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__restador_4b__DOT__fs2__DOT__r1__DOT__b) 
                                          ^ ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                             >> 2U)))) 
                                  << 2U) | ((2U & (
                                                   ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__restador_4b__DOT__fs1__DOT__r1__DOT__b) 
                                                    << 1U) 
                                                   ^ 
                                                   (0xfffffffeU 
                                                    & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)))) 
                                            | (1U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))))),4);
        bufp->chgBit(oldp+63,(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT____Vcellout__b0__q));
        bufp->chgBit(oldp+64,(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT____Vcellout__b1__q));
        bufp->chgBit(oldp+65,(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT____Vcellout__b2__q));
        bufp->chgBit(oldp+66,(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b0__DOT____Vcellout__b3__q));
        bufp->chgBit(oldp+67,(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b1__DOT____Vcellout__b0__q));
        bufp->chgBit(oldp+68,(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b1__DOT____Vcellout__b1__q));
        bufp->chgBit(oldp+69,(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b1__DOT____Vcellout__b2__q));
        bufp->chgBit(oldp+70,(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b1__DOT____Vcellout__b3__q));
        bufp->chgBit(oldp+71,(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b2__DOT____Vcellout__b0__q));
        bufp->chgBit(oldp+72,(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b2__DOT____Vcellout__b1__q));
        bufp->chgBit(oldp+73,(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b2__DOT____Vcellout__b2__q));
        bufp->chgBit(oldp+74,(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b2__DOT____Vcellout__b3__q));
        bufp->chgBit(oldp+75,(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b3__DOT____Vcellout__b0__q));
        bufp->chgBit(oldp+76,(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b3__DOT____Vcellout__b1__q));
        bufp->chgBit(oldp+77,(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b3__DOT____Vcellout__b2__q));
        bufp->chgBit(oldp+78,(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4b3__DOT____Vcellout__b3__q));
        bufp->chgBit(oldp+79,(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT____Vcellout__b0__q));
        bufp->chgBit(oldp+80,(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT____Vcellout__b1__q));
        bufp->chgBit(oldp+81,(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT____Vcellout__b2__q));
        bufp->chgBit(oldp+82,(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT____Vcellout__b3__q));
        bufp->chgBit(oldp+83,(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT____Vcellout__b0__q));
        bufp->chgBit(oldp+84,(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT____Vcellout__b1__q));
        bufp->chgBit(oldp+85,(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT____Vcellout__b2__q));
        bufp->chgBit(oldp+86,(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT____Vcellout__b3__q));
        bufp->chgBit(oldp+87,((((~ ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                    >> 3U)) & (((~ 
                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                  >> 2U)) 
                                                & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__restador_4b__DOT__fs2__DOT__r1__DOT__b)) 
                                               | ((~ (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT____Vcellout__b2__q)) 
                                                  & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT____Vcellout__b2__q)))) 
                               | ((~ (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT____Vcellout__b3__q)) 
                                  & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT____Vcellout__b3__q)))));
        bufp->chgBit(oldp+88,(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__restador_4b__DOT__fs1__DOT__r1__DOT__b));
        bufp->chgBit(oldp+89,(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__restador_4b__DOT__fs2__DOT__r1__DOT__b));
        bufp->chgBit(oldp+90,((((~ ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                    >> 2U)) & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__restador_4b__DOT__fs2__DOT__r1__DOT__b)) 
                               | ((~ (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT____Vcellout__b2__q)) 
                                  & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT____Vcellout__b2__q)))));
        bufp->chgBit(oldp+91,((1U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))));
        bufp->chgBit(oldp+92,((1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__restador_4b__DOT__fs1__DOT__r1__DOT__b) 
                                     ^ ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                        >> 1U)))));
        bufp->chgBit(oldp+93,((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                     >> 1U))));
        bufp->chgBit(oldp+94,(((~ (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT____Vcellout__b1__q)) 
                               & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT____Vcellout__b1__q))));
        bufp->chgBit(oldp+95,(((~ ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                   >> 1U)) & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__restador_4b__DOT__fs1__DOT__r1__DOT__b))));
        bufp->chgBit(oldp+96,((1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__restador_4b__DOT__fs2__DOT__r1__DOT__b) 
                                     ^ ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                        >> 2U)))));
        bufp->chgBit(oldp+97,((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                     >> 2U))));
        bufp->chgBit(oldp+98,(((~ (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT____Vcellout__b2__q)) 
                               & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT____Vcellout__b2__q))));
        bufp->chgBit(oldp+99,(((~ ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                   >> 2U)) & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__restador_4b__DOT__fs2__DOT__r1__DOT__b))));
        bufp->chgBit(oldp+100,((1U & ((((~ ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                            >> 2U)) 
                                        & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__restador_4b__DOT__fs2__DOT__r1__DOT__b)) 
                                       | ((~ (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT____Vcellout__b2__q)) 
                                          & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT____Vcellout__b2__q))) 
                                      ^ ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                         >> 3U)))));
        bufp->chgBit(oldp+101,((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                      >> 3U))));
        bufp->chgBit(oldp+102,(((~ (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT____Vcellout__b3__q)) 
                                & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT____Vcellout__b3__q))));
        bufp->chgBit(oldp+103,(((~ ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                    >> 3U)) & (((~ 
                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                  >> 2U)) 
                                                & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__restador_4b__DOT__fs2__DOT__r1__DOT__b)) 
                                               | ((~ (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT____Vcellout__b2__q)) 
                                                  & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT____Vcellout__b2__q))))));
        bufp->chgBit(oldp+104,((1U & (((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__compuerta_and_4b__DOT__result) 
                                       >> 3U) | ((((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__compuerta_and_4b__DOT__result) 
                                                   >> 2U) 
                                                  | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__sumador_4b__DOT__fa2__DOT__s1__DOT__b) 
                                                     & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                        >> 2U))) 
                                                 & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                    >> 3U))))));
        bufp->chgBit(oldp+105,((1U & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__compuerta_and_4b__DOT__result))));
        bufp->chgBit(oldp+106,(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__sumador_4b__DOT__fa2__DOT__s1__DOT__b));
        bufp->chgBit(oldp+107,((1U & (((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__compuerta_and_4b__DOT__result) 
                                       >> 2U) | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__sumador_4b__DOT__fa2__DOT__s1__DOT__b) 
                                                 & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                    >> 2U))))));
        bufp->chgBit(oldp+108,((1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__compuerta_and_4b__DOT__result) 
                                      ^ ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                         >> 1U)))));
        bufp->chgBit(oldp+109,((1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__compuerta_and_4b__DOT__result) 
                                      >> 1U))));
        bufp->chgBit(oldp+110,((1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__compuerta_and_4b__DOT__result) 
                                      & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                         >> 1U)))));
        bufp->chgBit(oldp+111,((1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__sumador_4b__DOT__fa2__DOT__s1__DOT__b) 
                                      ^ ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                         >> 2U)))));
        bufp->chgBit(oldp+112,((1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__compuerta_and_4b__DOT__result) 
                                      >> 2U))));
        bufp->chgBit(oldp+113,(((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__sumador_4b__DOT__fa2__DOT__s1__DOT__b) 
                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                   >> 2U))));
        bufp->chgBit(oldp+114,((1U & ((((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__compuerta_and_4b__DOT__result) 
                                        >> 2U) | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__sumador_4b__DOT__fa2__DOT__s1__DOT__b) 
                                                  & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                     >> 2U))) 
                                      ^ ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                         >> 3U)))));
        bufp->chgBit(oldp+115,((1U & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__compuerta_and_4b__DOT__result) 
                                      >> 3U))));
        bufp->chgBit(oldp+116,((IData)((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                         >> 3U) & (
                                                   ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__compuerta_and_4b__DOT__result) 
                                                    >> 2U) 
                                                   | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__sumador_4b__DOT__fa2__DOT__s1__DOT__b) 
                                                      & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                         >> 2U)))))));
    }
    bufp->chgBit(oldp+117,(vlSelfRef.sim_top__DOT__clk));
    bufp->chgBit(oldp+118,(vlSelfRef.sim_top__DOT__rst));
    bufp->chgCData(oldp+119,(((0U == (IData)(vlSelfRef.sim_top__DOT__tb__DOT__op))
                               ? (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__compuerta_and_4b__DOT__result)
                               : ((1U == (IData)(vlSelfRef.sim_top__DOT__tb__DOT__op))
                                   ? ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT__q) 
                                      | (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT__q))
                                   : ((((2U == (IData)(vlSelfRef.sim_top__DOT__tb__DOT__op))
                                         ? ((4U & (
                                                   ((((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__compuerta_and_4b__DOT__result) 
                                                      >> 2U) 
                                                     | ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__sumador_4b__DOT__fa2__DOT__s1__DOT__b) 
                                                        & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                           >> 2U))) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                     >> 3U)) 
                                                   << 2U)) 
                                            | ((2U 
                                                & (((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__sumador_4b__DOT__fa2__DOT__s1__DOT__b) 
                                                    << 1U) 
                                                   ^ 
                                                   (0x7ffffffeU 
                                                    & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                       >> 1U)))) 
                                               | (1U 
                                                  & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__compuerta_and_4b__DOT__result) 
                                                     ^ 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                      >> 1U)))))
                                         : ((4U & (
                                                   ((((~ 
                                                       ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                        >> 2U)) 
                                                      & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__restador_4b__DOT__fs2__DOT__r1__DOT__b)) 
                                                     | ((~ (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4ba__DOT____Vcellout__b2__q)) 
                                                        & (IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__registro_4bb__DOT____Vcellout__b2__q))) 
                                                    ^ 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                     >> 3U)) 
                                                   << 2U)) 
                                            | ((2U 
                                                & (((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__restador_4b__DOT__fs2__DOT__r1__DOT__b) 
                                                    << 1U) 
                                                   ^ 
                                                   (0x7ffffffeU 
                                                    & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                       >> 1U)))) 
                                               | (1U 
                                                  & ((IData)(vlSelfRef.sim_top__DOT__tb__DOT__dut__DOT__restador_4b__DOT__fs1__DOT__r1__DOT__b) 
                                                     ^ 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                                      >> 1U)))))) 
                                       << 1U) | (1U 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)))))),4);
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
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
