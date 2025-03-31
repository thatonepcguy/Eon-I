// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmain__Syms.h"


VL_ATTR_COLD void Vmain___024root__trace_init_sub__TOP__0(Vmain___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+68,"clk", false,-1);
    tracep->pushNamePrefix("main ");
    tracep->declBit(c+68,"clk", false,-1);
    tracep->declBus(c+69,"width", false,-1, 31,0);
    tracep->declBus(c+70,"rsWidth", false,-1, 31,0);
    tracep->declBus(c+71,"opcodeWidth", false,-1, 31,0);
    tracep->declBus(c+72,"adrWidth", false,-1, 31,0);
    tracep->declBit(c+1,"IFStall_DCStall", false,-1);
    tracep->declBit(c+2,"IFFlush_DCFlush", false,-1);
    tracep->declBus(c+3,"IFFlushAddr_DCFlushAddr", false,-1, 31,0);
    tracep->declBus(c+4,"IFInstruction_DCInstruction", false,-1, 31,0);
    tracep->declBus(c+5,"IFPC_DCPC", false,-1, 31,0);
    tracep->declBit(c+1,"DCStall_EXStall", false,-1);
    tracep->declBit(c+2,"DCFlush_EXFlush", false,-1);
    tracep->declBus(c+3,"DCFlushAddr_EXFlushAddr", false,-1, 31,0);
    tracep->declBus(c+6,"DCopcodeOut_EXopcode", false,-1, 6,0);
    tracep->declBus(c+7,"DCrdOut_EXrd", false,-1, 4,0);
    tracep->declBus(c+8,"DCfunc3Out_EXfunc3", false,-1, 2,0);
    tracep->declBus(c+9,"DCfunc7Out_EXfunc7", false,-1, 6,0);
    tracep->declBus(c+10,"DCimmediateOut_EXimmediate", false,-1, 31,0);
    tracep->declBus(c+11,"DCPCOut_EXPC", false,-1, 31,0);
    tracep->declBit(c+73,"MMstallOut_EXstall", false,-1);
    tracep->declBit(c+12,"EXreadOut_MMread", false,-1);
    tracep->declBit(c+13,"EXwriteOut_MMwrite", false,-1);
    tracep->declBus(c+14,"EXvalueOut_MMdata", false,-1, 31,0);
    tracep->declBus(c+15,"EXaddressOut_MMaddress", false,-1, 31,0);
    tracep->declBus(c+16,"EXaddressModeOut_MMaddressMode", false,-1, 2,0);
    tracep->declBus(c+17,"EXrdOut_MMrd", false,-1, 4,0);
    tracep->declBit(c+18,"EXnoMEMOut_MMnoMEM", false,-1);
    tracep->declBus(c+19,"MMrdOut_RFrd", false,-1, 4,0);
    tracep->declBus(c+20,"MMdataOut_RFdataIn", false,-1, 31,0);
    tracep->declBit(c+21,"MMWEOut_RFWE", false,-1);
    tracep->declBus(c+22,"DCrs1Out_RFrs1", false,-1, 4,0);
    tracep->declBus(c+23,"DCrs2Out_RFrs2", false,-1, 4,0);
    tracep->declBus(c+24,"RFr1Out_EXreg1Value", false,-1, 31,0);
    tracep->declBus(c+25,"RFr2Out_EXreg2Value", false,-1, 31,0);
    tracep->declBus(c+22,"DCrs1Out_HDUEXrs1", false,-1, 4,0);
    tracep->declBus(c+23,"DCrs2Out_HDUEXrs2", false,-1, 4,0);
    tracep->declBus(c+17,"EXrdOut_HDUMMrd", false,-1, 4,0);
    tracep->declBus(c+19,"MMrdOut_HDUWBrd", false,-1, 4,0);
    tracep->declBit(c+1,"EXStall", false,-1);
    tracep->declBit(c+73,"MMStall", false,-1);
    tracep->pushNamePrefix("DC_Stage_instance ");
    tracep->declBus(c+69,"width", false,-1, 31,0);
    tracep->declBus(c+70,"rsWidth", false,-1, 31,0);
    tracep->declBus(c+71,"opcodeWidth", false,-1, 31,0);
    tracep->declBit(c+68,"clk", false,-1);
    tracep->declBit(c+1,"stall", false,-1);
    tracep->declBit(c+2,"flush", false,-1);
    tracep->declBus(c+3,"flushAddr", false,-1, 31,0);
    tracep->declBus(c+4,"instruction", false,-1, 31,0);
    tracep->declBus(c+5,"PC", false,-1, 31,0);
    tracep->declBus(c+6,"opcodeOut", false,-1, 6,0);
    tracep->declBus(c+22,"rs1Out", false,-1, 4,0);
    tracep->declBus(c+23,"rs2Out", false,-1, 4,0);
    tracep->declBus(c+7,"rdOut", false,-1, 4,0);
    tracep->declBus(c+8,"func3Out", false,-1, 2,0);
    tracep->declBus(c+9,"func7Out", false,-1, 6,0);
    tracep->declBus(c+10,"immediateOut", false,-1, 31,0);
    tracep->declBus(c+11,"PCOut", false,-1, 31,0);
    tracep->declBit(c+1,"stallOut", false,-1);
    tracep->declBit(c+2,"flushOut", false,-1);
    tracep->declBus(c+3,"flushAddrOut", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EX_Stage_instance ");
    tracep->declBus(c+69,"width", false,-1, 31,0);
    tracep->declBus(c+70,"rsWidth", false,-1, 31,0);
    tracep->declBus(c+71,"opcodeWidth", false,-1, 31,0);
    tracep->declBit(c+68,"clk", false,-1);
    tracep->declBit(c+73,"stall", false,-1);
    tracep->declBit(c+1,"stallStart", false,-1);
    tracep->declBus(c+6,"opcode", false,-1, 6,0);
    tracep->declBus(c+24,"reg1Value", false,-1, 31,0);
    tracep->declBus(c+25,"reg2Value", false,-1, 31,0);
    tracep->declBus(c+7,"rd", false,-1, 4,0);
    tracep->declBus(c+8,"func3", false,-1, 2,0);
    tracep->declBus(c+9,"func7", false,-1, 6,0);
    tracep->declBus(c+10,"immediate", false,-1, 31,0);
    tracep->declBus(c+11,"PC", false,-1, 31,0);
    tracep->declBit(c+12,"readOut", false,-1);
    tracep->declBit(c+13,"writeOut", false,-1);
    tracep->declBit(c+18,"noMEMOut", false,-1);
    tracep->declBus(c+14,"valueOut", false,-1, 31,0);
    tracep->declBus(c+15,"addressOut", false,-1, 31,0);
    tracep->declBus(c+16,"addressModeOut", false,-1, 2,0);
    tracep->declBus(c+17,"rdOut", false,-1, 4,0);
    tracep->declBit(c+1,"stallOut", false,-1);
    tracep->declBit(c+2,"flushOut", false,-1);
    tracep->declBus(c+3,"flushAddrOut", false,-1, 31,0);
    tracep->declBus(c+26,"valueOutWire", false,-1, 31,0);
    tracep->declBus(c+27,"ALUinput1", false,-1, 31,0);
    tracep->declBus(c+28,"ALUinput2", false,-1, 31,0);
    tracep->declBus(c+29,"ALUoperation", false,-1, 1,0);
    tracep->declBus(c+30,"ALUOut", false,-1, 31,0);
    tracep->pushNamePrefix("ALU_instance ");
    tracep->declBus(c+69,"width", false,-1, 31,0);
    tracep->declBus(c+27,"input1", false,-1, 31,0);
    tracep->declBus(c+28,"input2", false,-1, 31,0);
    tracep->declBus(c+8,"func3", false,-1, 2,0);
    tracep->declBus(c+9,"func7", false,-1, 6,0);
    tracep->declBus(c+29,"operation", false,-1, 1,0);
    tracep->declBus(c+30,"output1", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("HDU_instance ");
    tracep->declBus(c+22,"EXrs1", false,-1, 4,0);
    tracep->declBus(c+23,"EXrs2", false,-1, 4,0);
    tracep->declBus(c+17,"MMrd", false,-1, 4,0);
    tracep->declBus(c+19,"WBrd", false,-1, 4,0);
    tracep->declBit(c+73,"MMStall", false,-1);
    tracep->declBit(c+1,"EXStall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IF_Stage_instance ");
    tracep->declBus(c+69,"width", false,-1, 31,0);
    tracep->declBit(c+68,"clk", false,-1);
    tracep->declBit(c+1,"stall", false,-1);
    tracep->declBit(c+2,"flush", false,-1);
    tracep->declBus(c+3,"flushAddr", false,-1, 31,0);
    tracep->declBus(c+4,"instructionOut", false,-1, 31,0);
    tracep->declBus(c+5,"PCOut", false,-1, 31,0);
    tracep->declBus(c+31,"PC", false,-1, 31,0);
    tracep->declBus(c+32,"rom_IR", false,-1, 31,0);
    tracep->pushNamePrefix("rom ");
    tracep->declBus(c+72,"addressWidth", false,-1, 31,0);
    tracep->declBus(c+69,"width", false,-1, 31,0);
    tracep->declBus(c+33,"address", false,-1, 23,0);
    tracep->declBus(c+32,"instruction", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("MM_Stage_instance ");
    tracep->declBus(c+69,"width", false,-1, 31,0);
    tracep->declBus(c+72,"adrWidth", false,-1, 31,0);
    tracep->declBus(c+70,"rsWidth", false,-1, 31,0);
    tracep->declBit(c+68,"clk", false,-1);
    tracep->declBit(c+73,"stallStart", false,-1);
    tracep->declBit(c+12,"read", false,-1);
    tracep->declBit(c+13,"write", false,-1);
    tracep->declBit(c+18,"noMEM", false,-1);
    tracep->declBus(c+14,"data", false,-1, 31,0);
    tracep->declBus(c+15,"address", false,-1, 31,0);
    tracep->declBus(c+16,"addressMode", false,-1, 2,0);
    tracep->declBus(c+17,"rd", false,-1, 4,0);
    tracep->declBus(c+19,"rdOut", false,-1, 4,0);
    tracep->declBus(c+20,"dataOut", false,-1, 31,0);
    tracep->declBit(c+21,"WEOut", false,-1);
    tracep->declBit(c+73,"stallOut", false,-1);
    tracep->declBus(c+34,"dataOutWire", false,-1, 31,0);
    tracep->pushNamePrefix("LSU_instance ");
    tracep->declBus(c+69,"width", false,-1, 31,0);
    tracep->declBus(c+72,"adrWidth", false,-1, 31,0);
    tracep->declBus(c+35,"address", false,-1, 23,0);
    tracep->declBus(c+14,"data", false,-1, 31,0);
    tracep->declBus(c+16,"addressMode", false,-1, 2,0);
    tracep->declBit(c+13,"WE", false,-1);
    tracep->declBit(c+68,"clk", false,-1);
    tracep->declBus(c+34,"dataOut", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("regFile_instance ");
    tracep->declBit(c+68,"clk", false,-1);
    tracep->declBus(c+22,"rs1", false,-1, 4,0);
    tracep->declBus(c+23,"rs2", false,-1, 4,0);
    tracep->declBus(c+19,"rd", false,-1, 4,0);
    tracep->declBit(c+21,"WE", false,-1);
    tracep->declBus(c+20,"dataIn", false,-1, 31,0);
    tracep->declBus(c+24,"r1Out", false,-1, 31,0);
    tracep->declBus(c+25,"r2Out", false,-1, 31,0);
    tracep->declBus(c+69,"width", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+36+i*1,"file", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vmain___024root__trace_init_top(Vmain___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root__trace_init_top\n"); );
    // Body
    Vmain___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vmain___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmain___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmain___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vmain___024root__trace_register(Vmain___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vmain___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vmain___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vmain___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vmain___024root__trace_full_sub_0(Vmain___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vmain___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root__trace_full_top_0\n"); );
    // Init
    Vmain___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmain___024root*>(voidSelf);
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vmain___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vmain___024root__trace_full_sub_0(Vmain___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->main__DOT__EXStall));
    bufp->fullBit(oldp+2,(vlSelf->main__DOT__DCFlush_EXFlush));
    bufp->fullIData(oldp+3,(vlSelf->main__DOT__DCFlushAddr_EXFlushAddr),32);
    bufp->fullIData(oldp+4,(vlSelf->main__DOT__IFInstruction_DCInstruction),32);
    bufp->fullIData(oldp+5,(vlSelf->main__DOT__IFPC_DCPC),32);
    bufp->fullCData(oldp+6,(vlSelf->main__DOT__DCopcodeOut_EXopcode),7);
    bufp->fullCData(oldp+7,(vlSelf->main__DOT__DCrdOut_EXrd),5);
    bufp->fullCData(oldp+8,(vlSelf->main__DOT__DCfunc3Out_EXfunc3),3);
    bufp->fullCData(oldp+9,(vlSelf->main__DOT__DCfunc7Out_EXfunc7),7);
    bufp->fullIData(oldp+10,(vlSelf->main__DOT__DCimmediateOut_EXimmediate),32);
    bufp->fullIData(oldp+11,(vlSelf->main__DOT__DCPCOut_EXPC),32);
    bufp->fullBit(oldp+12,(vlSelf->main__DOT__EXreadOut_MMread));
    bufp->fullBit(oldp+13,(vlSelf->main__DOT__EXwriteOut_MMwrite));
    bufp->fullIData(oldp+14,(vlSelf->main__DOT__EXvalueOut_MMdata),32);
    bufp->fullIData(oldp+15,(vlSelf->main__DOT__EXaddressOut_MMaddress),32);
    bufp->fullCData(oldp+16,(vlSelf->main__DOT__EXaddressModeOut_MMaddressMode),3);
    bufp->fullCData(oldp+17,(vlSelf->main__DOT__EXrdOut_MMrd),5);
    bufp->fullBit(oldp+18,(vlSelf->main__DOT__EXnoMEMOut_MMnoMEM));
    bufp->fullCData(oldp+19,(vlSelf->main__DOT__MMrdOut_RFrd),5);
    bufp->fullIData(oldp+20,(vlSelf->main__DOT__MMdataOut_RFdataIn),32);
    bufp->fullBit(oldp+21,(vlSelf->main__DOT__MMWEOut_RFWE));
    bufp->fullCData(oldp+22,(vlSelf->main__DOT__DCrs1Out_RFrs1),5);
    bufp->fullCData(oldp+23,(vlSelf->main__DOT__DCrs2Out_RFrs2),5);
    bufp->fullIData(oldp+24,(vlSelf->main__DOT__RFr1Out_EXreg1Value),32);
    bufp->fullIData(oldp+25,(vlSelf->main__DOT__RFr2Out_EXreg2Value),32);
    bufp->fullIData(oldp+26,(vlSelf->main__DOT__EX_Stage_instance__DOT__valueOutWire),32);
    bufp->fullIData(oldp+27,(vlSelf->main__DOT__EX_Stage_instance__DOT__ALUinput1),32);
    bufp->fullIData(oldp+28,(vlSelf->main__DOT__EX_Stage_instance__DOT__ALUinput2),32);
    bufp->fullCData(oldp+29,(vlSelf->main__DOT__EX_Stage_instance__DOT__ALUoperation),2);
    bufp->fullIData(oldp+30,(vlSelf->main__DOT__EX_Stage_instance__DOT__ALUOut),32);
    bufp->fullIData(oldp+31,(vlSelf->main__DOT__IF_Stage_instance__DOT__PC),32);
    bufp->fullIData(oldp+32,(((vlSelf->main__DOT__IF_Stage_instance__DOT__rom__DOT__memoryCell
                               [(0xffffffU & ((IData)(3U) 
                                              + vlSelf->main__DOT__IF_Stage_instance__DOT__PC))] 
                               << 0x18U) | ((vlSelf->main__DOT__IF_Stage_instance__DOT__rom__DOT__memoryCell
                                             [(0xffffffU 
                                               & ((IData)(2U) 
                                                  + vlSelf->main__DOT__IF_Stage_instance__DOT__PC))] 
                                             << 0x10U) 
                                            | ((vlSelf->main__DOT__IF_Stage_instance__DOT__rom__DOT__memoryCell
                                                [(0xffffffU 
                                                  & ((IData)(1U) 
                                                     + vlSelf->main__DOT__IF_Stage_instance__DOT__PC))] 
                                                << 8U) 
                                               | vlSelf->main__DOT__IF_Stage_instance__DOT__rom__DOT__memoryCell
                                               [(0xffffffU 
                                                 & vlSelf->main__DOT__IF_Stage_instance__DOT__PC)])))),32);
    bufp->fullIData(oldp+33,((0xffffffU & vlSelf->main__DOT__IF_Stage_instance__DOT__PC)),24);
    bufp->fullIData(oldp+34,(vlSelf->main__DOT__MM_Stage_instance__DOT__dataOutWire),32);
    bufp->fullIData(oldp+35,((0xffffffU & vlSelf->main__DOT__EXaddressOut_MMaddress)),24);
    bufp->fullIData(oldp+36,(vlSelf->main__DOT__regFile_instance__DOT__file[0]),32);
    bufp->fullIData(oldp+37,(vlSelf->main__DOT__regFile_instance__DOT__file[1]),32);
    bufp->fullIData(oldp+38,(vlSelf->main__DOT__regFile_instance__DOT__file[2]),32);
    bufp->fullIData(oldp+39,(vlSelf->main__DOT__regFile_instance__DOT__file[3]),32);
    bufp->fullIData(oldp+40,(vlSelf->main__DOT__regFile_instance__DOT__file[4]),32);
    bufp->fullIData(oldp+41,(vlSelf->main__DOT__regFile_instance__DOT__file[5]),32);
    bufp->fullIData(oldp+42,(vlSelf->main__DOT__regFile_instance__DOT__file[6]),32);
    bufp->fullIData(oldp+43,(vlSelf->main__DOT__regFile_instance__DOT__file[7]),32);
    bufp->fullIData(oldp+44,(vlSelf->main__DOT__regFile_instance__DOT__file[8]),32);
    bufp->fullIData(oldp+45,(vlSelf->main__DOT__regFile_instance__DOT__file[9]),32);
    bufp->fullIData(oldp+46,(vlSelf->main__DOT__regFile_instance__DOT__file[10]),32);
    bufp->fullIData(oldp+47,(vlSelf->main__DOT__regFile_instance__DOT__file[11]),32);
    bufp->fullIData(oldp+48,(vlSelf->main__DOT__regFile_instance__DOT__file[12]),32);
    bufp->fullIData(oldp+49,(vlSelf->main__DOT__regFile_instance__DOT__file[13]),32);
    bufp->fullIData(oldp+50,(vlSelf->main__DOT__regFile_instance__DOT__file[14]),32);
    bufp->fullIData(oldp+51,(vlSelf->main__DOT__regFile_instance__DOT__file[15]),32);
    bufp->fullIData(oldp+52,(vlSelf->main__DOT__regFile_instance__DOT__file[16]),32);
    bufp->fullIData(oldp+53,(vlSelf->main__DOT__regFile_instance__DOT__file[17]),32);
    bufp->fullIData(oldp+54,(vlSelf->main__DOT__regFile_instance__DOT__file[18]),32);
    bufp->fullIData(oldp+55,(vlSelf->main__DOT__regFile_instance__DOT__file[19]),32);
    bufp->fullIData(oldp+56,(vlSelf->main__DOT__regFile_instance__DOT__file[20]),32);
    bufp->fullIData(oldp+57,(vlSelf->main__DOT__regFile_instance__DOT__file[21]),32);
    bufp->fullIData(oldp+58,(vlSelf->main__DOT__regFile_instance__DOT__file[22]),32);
    bufp->fullIData(oldp+59,(vlSelf->main__DOT__regFile_instance__DOT__file[23]),32);
    bufp->fullIData(oldp+60,(vlSelf->main__DOT__regFile_instance__DOT__file[24]),32);
    bufp->fullIData(oldp+61,(vlSelf->main__DOT__regFile_instance__DOT__file[25]),32);
    bufp->fullIData(oldp+62,(vlSelf->main__DOT__regFile_instance__DOT__file[26]),32);
    bufp->fullIData(oldp+63,(vlSelf->main__DOT__regFile_instance__DOT__file[27]),32);
    bufp->fullIData(oldp+64,(vlSelf->main__DOT__regFile_instance__DOT__file[28]),32);
    bufp->fullIData(oldp+65,(vlSelf->main__DOT__regFile_instance__DOT__file[29]),32);
    bufp->fullIData(oldp+66,(vlSelf->main__DOT__regFile_instance__DOT__file[30]),32);
    bufp->fullIData(oldp+67,(vlSelf->main__DOT__regFile_instance__DOT__file[31]),32);
    bufp->fullBit(oldp+68,(vlSelf->clk));
    bufp->fullIData(oldp+69,(0x20U),32);
    bufp->fullIData(oldp+70,(5U),32);
    bufp->fullIData(oldp+71,(7U),32);
    bufp->fullIData(oldp+72,(0x18U),32);
    bufp->fullBit(oldp+73,(0U));
}
