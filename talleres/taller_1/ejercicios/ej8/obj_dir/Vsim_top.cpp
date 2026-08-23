// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsim_top__pch.h"

//============================================================
// Constructors

Vsim_top::Vsim_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vsim_top__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vsim_top::Vsim_top(const char* _vcname__)
    : Vsim_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vsim_top::~Vsim_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vsim_top___024root___eval_debug_assertions(Vsim_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vsim_top___024root___eval_static(Vsim_top___024root* vlSelf);
void Vsim_top___024root___eval_initial(Vsim_top___024root* vlSelf);
void Vsim_top___024root___eval_settle(Vsim_top___024root* vlSelf);
void Vsim_top___024root___eval(Vsim_top___024root* vlSelf);

void Vsim_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsim_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsim_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vsim_top___024root___eval_static(&(vlSymsp->TOP));
        Vsim_top___024root___eval_initial(&(vlSymsp->TOP));
        Vsim_top___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vsim_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vsim_top::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vsim_top::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vsim_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vsim_top___024root___eval_final(Vsim_top___024root* vlSelf);

VL_ATTR_COLD void Vsim_top::final() {
    contextp()->executingFinal(true);
    Vsim_top___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vsim_top::hierName() const { return vlSymsp->name(); }
const char* Vsim_top::modelName() const { return "Vsim_top"; }
unsigned Vsim_top::threads() const { return 1; }
void Vsim_top::prepareClone() const { contextp()->prepareClone(); }
void Vsim_top::atClone() const {
    contextp()->threadPoolpOnClone();
}
