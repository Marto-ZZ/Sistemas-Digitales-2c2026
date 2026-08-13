// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_fst_c.h"
#include "Vcircuito_ej2_tb__Syms.h"


VL_ATTR_COLD void Vcircuito_ej2_tb___024root__trace_init_sub__TOP__0(Vcircuito_ej2_tb___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcircuito_ej2_tb___024root__trace_init_sub__TOP__0\n"); );
    Vcircuito_ej2_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("circuito_ej2_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+12,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+2,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"exp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"pass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+2,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("oracle", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+15,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+16,0,"FAST_FAIL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+12,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"pass",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"value",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+9,0,"dv",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"tests_passing",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"first",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vcircuito_ej2_tb___024root__trace_init_top(Vcircuito_ej2_tb___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcircuito_ej2_tb___024root__trace_init_top\n"); );
    Vcircuito_ej2_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcircuito_ej2_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcircuito_ej2_tb___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vcircuito_ej2_tb___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vcircuito_ej2_tb___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vcircuito_ej2_tb___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vcircuito_ej2_tb___024root__trace_register(Vcircuito_ej2_tb___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcircuito_ej2_tb___024root__trace_register\n"); );
    Vcircuito_ej2_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vcircuito_ej2_tb___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vcircuito_ej2_tb___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vcircuito_ej2_tb___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vcircuito_ej2_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcircuito_ej2_tb___024root__trace_const_0_sub_0(Vcircuito_ej2_tb___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vcircuito_ej2_tb___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcircuito_ej2_tb___024root__trace_const_0\n"); );
    // Body
    Vcircuito_ej2_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcircuito_ej2_tb___024root*>(voidSelf);
    Vcircuito_ej2_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vcircuito_ej2_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcircuito_ej2_tb___024root__trace_const_0_sub_0(Vcircuito_ej2_tb___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcircuito_ej2_tb___024root__trace_const_0_sub_0\n"); );
    Vcircuito_ej2_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+14,(1U));
    bufp->fullIData(oldp+15,(3U),32);
    bufp->fullBit(oldp+16,(0U));
}

VL_ATTR_COLD void Vcircuito_ej2_tb___024root__trace_full_0_sub_0(Vcircuito_ej2_tb___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vcircuito_ej2_tb___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcircuito_ej2_tb___024root__trace_full_0\n"); );
    // Body
    Vcircuito_ej2_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcircuito_ej2_tb___024root*>(voidSelf);
    Vcircuito_ej2_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vcircuito_ej2_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcircuito_ej2_tb___024root__trace_full_0_sub_0(Vcircuito_ej2_tb___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcircuito_ej2_tb___024root__trace_full_0_sub_0\n"); );
    Vcircuito_ej2_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullCData(oldp+1,(vlSelfRef.circuito_ej2_tb__DOT__value),3);
    bufp->fullBit(oldp+2,((1U & ((IData)(vlSelfRef.circuito_ej2_tb__DOT__value) 
                                 >> 2U))));
    bufp->fullBit(oldp+3,((1U & ((IData)(vlSelfRef.circuito_ej2_tb__DOT__value) 
                                 >> 1U))));
    bufp->fullBit(oldp+4,((1U & (IData)(vlSelfRef.circuito_ej2_tb__DOT__value))));
    bufp->fullBit(oldp+5,((1U & ((IData)((6U == (6U 
                                                 & (IData)(vlSelfRef.circuito_ej2_tb__DOT__value)))) 
                                 | (IData)((1U == (5U 
                                                   & (IData)(vlSelfRef.circuito_ej2_tb__DOT__value))))))));
    bufp->fullBit(oldp+6,(vlSelfRef.circuito_ej2_tb__DOT__done));
    bufp->fullBit(oldp+7,((IData)((6U == (6U & (IData)(vlSelfRef.circuito_ej2_tb__DOT__value))))));
    bufp->fullBit(oldp+8,((IData)((1U == (5U & (IData)(vlSelfRef.circuito_ej2_tb__DOT__value))))));
    bufp->fullBit(oldp+9,(vlSelfRef.circuito_ej2_tb__DOT__oracle__DOT__dv));
    bufp->fullBit(oldp+10,(vlSelfRef.circuito_ej2_tb__DOT__oracle__DOT__tests_passing));
    bufp->fullBit(oldp+11,(vlSelfRef.circuito_ej2_tb__DOT__oracle__DOT__first));
    bufp->fullBit(oldp+12,(vlSelfRef.circuito_ej2_tb__DOT__clk));
    bufp->fullBit(oldp+13,(vlSelfRef.circuito_ej2_tb__DOT__rst));
}
