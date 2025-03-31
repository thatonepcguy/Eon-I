// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmain.h for the primary calling header

#ifndef VERILATED_VMAIN___024ROOT_H_
#define VERILATED_VMAIN___024ROOT_H_  // guard

#include "verilated.h"

class Vmain__Syms;

class Vmain___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    CData/*0:0*/ main__DOT__DCFlush_EXFlush;
    CData/*6:0*/ main__DOT__DCopcodeOut_EXopcode;
    CData/*4:0*/ main__DOT__DCrdOut_EXrd;
    CData/*2:0*/ main__DOT__DCfunc3Out_EXfunc3;
    CData/*6:0*/ main__DOT__DCfunc7Out_EXfunc7;
    CData/*0:0*/ main__DOT__EXreadOut_MMread;
    CData/*0:0*/ main__DOT__EXwriteOut_MMwrite;
    CData/*2:0*/ main__DOT__EXaddressModeOut_MMaddressMode;
    CData/*4:0*/ main__DOT__EXrdOut_MMrd;
    CData/*0:0*/ main__DOT__EXnoMEMOut_MMnoMEM;
    CData/*4:0*/ main__DOT__MMrdOut_RFrd;
    CData/*0:0*/ main__DOT__MMWEOut_RFWE;
    CData/*4:0*/ main__DOT__DCrs1Out_RFrs1;
    CData/*4:0*/ main__DOT__DCrs2Out_RFrs2;
    CData/*0:0*/ main__DOT__EXStall;
    CData/*1:0*/ main__DOT__EX_Stage_instance__DOT__ALUoperation;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ main__DOT__IFInstruction_DCInstruction;
    IData/*31:0*/ main__DOT__IFPC_DCPC;
    IData/*31:0*/ main__DOT__DCFlushAddr_EXFlushAddr;
    IData/*31:0*/ main__DOT__DCimmediateOut_EXimmediate;
    IData/*31:0*/ main__DOT__DCPCOut_EXPC;
    IData/*31:0*/ main__DOT__EXvalueOut_MMdata;
    IData/*31:0*/ main__DOT__EXaddressOut_MMaddress;
    IData/*31:0*/ main__DOT__MMdataOut_RFdataIn;
    IData/*31:0*/ main__DOT__RFr1Out_EXreg1Value;
    IData/*31:0*/ main__DOT__RFr2Out_EXreg2Value;
    IData/*31:0*/ main__DOT__IF_Stage_instance__DOT__PC;
    IData/*31:0*/ main__DOT__EX_Stage_instance__DOT__valueOutWire;
    IData/*31:0*/ main__DOT__EX_Stage_instance__DOT__ALUinput1;
    IData/*31:0*/ main__DOT__EX_Stage_instance__DOT__ALUinput2;
    IData/*31:0*/ main__DOT__EX_Stage_instance__DOT__ALUOut;
    IData/*31:0*/ main__DOT__MM_Stage_instance__DOT__dataOutWire;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 16777216> main__DOT__IF_Stage_instance__DOT__rom__DOT__memoryCell;
    VlUnpacked<CData/*7:0*/, 16777216> main__DOT__MM_Stage_instance__DOT__LSU_instance__DOT__Ram;
    VlUnpacked<IData/*31:0*/, 32> main__DOT__regFile_instance__DOT__file;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vmain__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmain___024root(Vmain__Syms* symsp, const char* v__name);
    ~Vmain___024root();
    VL_UNCOPYABLE(Vmain___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
