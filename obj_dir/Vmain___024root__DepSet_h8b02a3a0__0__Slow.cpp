// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmain.h for the primary calling header

#include "verilated.h"

#include "Vmain__Syms.h"
#include "Vmain___024root.h"

VL_ATTR_COLD void Vmain___024root___eval_initial__TOP(Vmain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_initial__TOP\n"); );
    // Body
    vlSymsp->_traceDumpOpen();
    vlSelf->main__DOT__IF_Stage_instance__DOT__PC = 0U;
    vlSelf->main__DOT__IFInstruction_DCInstruction = 0x13U;
    VL_READMEM_N(true, 8, 16777216, 0, std::string{"prg.txt"}
                 ,  &(vlSelf->main__DOT__IF_Stage_instance__DOT__rom__DOT__memoryCell)
                 , 0, ~0ULL);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmain___024root___dump_triggers__stl(Vmain___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmain___024root___eval_triggers__stl(Vmain___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmain___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
