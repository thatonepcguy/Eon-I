`include "IF_Stage.sv"
`include "DC_Stage.sv"
`include "EX_Stage.sv"
`include "MM_Stage.sv"

module main(
    input wire clk
    );

    initial begin
        $dumpvars;
    end

    parameter width = 32;
    parameter rsWidth = 5;
    parameter opcodeWidth = 7;
    parameter adrWidth  = 24;

    // IF-DC
    wire IFStall_DCStall;
    wire IFFlush_DCFlush;
    wire [width-1:0] IFFlushAddr_DCFlushAddr;
    wire [width-1:0] IFInstruction_DCInstruction;
    wire [width-1:0] IFPC_DCPC;

    // DC-EX
    wire DCStall_EXStall;
    wire DCFlush_EXFlush;
    wire [width-1:0] DCFlushAddr_EXFlushAddr;
    wire [opcodeWidth-1:0] DCopcodeOut_EXopcode;
    wire [rsWidth-1:0] DCrdOut_EXrd;
    wire [2:0] DCfunc3Out_EXfunc3;
    wire [6:0] DCfunc7Out_EXfunc7;
    wire [width-1:0] DCimmediateOut_EXimmediate;
    wire [width-1:0] DCPCOut_EXPC;

    // EX-MM
    wire MMstallOut_EXstall;
    wire EXreadOut_MMread;
    wire EXwriteOut_MMwrite;
    wire [width-1:0] EXvalueOut_MMdata;
    wire [width-1:0] EXaddressOut_MMaddress;
    wire [2:0] EXaddressModeOut_MMaddressMode;
    wire [rsWidth-1:0] EXrdOut_MMrd;
    wire EXnoMEMOut_MMnoMEM;

    //MM-RF
    wire [rsWidth-1:0] MMrdOut_RFrd;
    wire [width-1:0] MMdataOut_RFdataIn;
    wire MMWEOut_RFWE;

    // DC-RF
    wire [rsWidth-1:0] DCrs1Out_RFrs1;
    wire [rsWidth-1:0] DCrs2Out_RFrs2;

    // RF-EX
    wire [width-1:0] RFr1Out_EXreg1Value;
    wire [width-1:0] RFr2Out_EXreg2Value;

    // HDU Wire
    logic [4:0] DCrs1Out_HDUEXrs1;
    logic [4:0] DCrs2Out_HDUEXrs2;
    logic [4:0] EXrdOut_HDUMMrd;
    logic [4:0] MMrdOut_HDUWBrd;
    wire EXStall;
    wire MMStall;

    always_comb begin
        DCrs1Out_HDUEXrs1 = DCrs1Out_RFrs1;
        DCrs2Out_HDUEXrs2 = DCrs2Out_RFrs2;
        EXrdOut_HDUMMrd = EXrdOut_MMrd;
        MMrdOut_HDUWBrd = MMrdOut_RFrd;
    end


    HDU HDU_instance (
        .EXrs1(DCrs1Out_HDUEXrs1),
        .EXrs2(DCrs2Out_HDUEXrs2),
        .MMrd(EXrdOut_HDUMMrd),
        .WBrd(MMrdOut_HDUWBrd),
        .MMStall(MMStall),
        .EXStall(EXStall)
    );

    IF_Stage #(
        .width(width)
    ) IF_Stage_instance (
        .clk(clk),
        .stall(IFStall_DCStall),
        .flush(IFFlush_DCFlush),
        .flushAddr(IFFlushAddr_DCFlushAddr),
        .instructionOut(IFInstruction_DCInstruction),
        .PCOut(IFPC_DCPC)
    );

    DC_Stage #(
        .width(width),
        .rsWidth(5),
        .opcodeWidth(7)
    ) DC_Stage_instance (
        .clk(clk),
        .stall(DCStall_EXStall),
        .flush(DCFlush_EXFlush),
        .flushAddr(DCFlushAddr_EXFlushAddr),
        .instruction(IFInstruction_DCInstruction),
        .PC(IFPC_DCPC),
        .opcodeOut(DCopcodeOut_EXopcode),
        .rs1Out(DCrs1Out_RFrs1),
        .rs2Out(DCrs2Out_RFrs2),
        .rdOut(DCrdOut_EXrd),
        .func3Out(DCfunc3Out_EXfunc3),
        .func7Out(DCfunc7Out_EXfunc7),
        .immediateOut(DCimmediateOut_EXimmediate),
        .PCOut(DCPCOut_EXPC),
        .stallOut(IFStall_DCStall),
        .flushOut(IFFlush_DCFlush),
        .flushAddrOut(IFFlushAddr_DCFlushAddr)
    );

    EX_Stage #(
        .width(width),
        .rsWidth(rsWidth),
        .opcodeWidth(opcodeWidth)
    ) EX_Stage_instance (
        .clk(clk),
        .stall(MMstallOut_EXstall),
        .stallStart(EXStall),
        .opcode(DCopcodeOut_EXopcode),
        .reg1Value(RFr1Out_EXreg1Value),
        .reg2Value(RFr2Out_EXreg2Value),
        .rd(DCrdOut_EXrd),
        .func3(DCfunc3Out_EXfunc3),
        .func7(DCfunc7Out_EXfunc7),
        .immediate(DCimmediateOut_EXimmediate),
        .PC(DCPCOut_EXPC),
        .readOut(EXreadOut_MMread),
        .writeOut(EXwriteOut_MMwrite),
        .noMEMOut(EXnoMEMOut_MMnoMEM),
        .valueOut(EXvalueOut_MMdata),
        .addressOut(EXaddressOut_MMaddress),
        .addressModeOut(EXaddressModeOut_MMaddressMode),
        .rdOut(EXrdOut_MMrd),
        .stallOut(DCStall_EXStall),
        .flushOut(DCFlush_EXFlush),
        .flushAddrOut(DCFlushAddr_EXFlushAddr)
    );

    MM_Stage #(
        .width(width),
        .adrWidth(adrWidth),
        .rsWidth(rsWidth)
    ) MM_Stage_instance (
        .clk(clk),
        .stallStart(MMStall),
        .read(EXreadOut_MMread),
        .write(EXwriteOut_MMwrite),
        .noMEM(EXnoMEMOut_MMnoMEM),
        .data(EXvalueOut_MMdata),
        .address(EXaddressOut_MMaddress),
        .addressMode(EXaddressModeOut_MMaddressMode),
        .rd(EXrdOut_MMrd),
        .rdOut(MMrdOut_RFrd),
        .dataOut(MMdataOut_RFdataIn),
        .WEOut(MMWEOut_RFWE),
        .stallOut(MMstallOut_EXstall)
    );

    regFile #(
        .width(width)
    ) regFile_instance (
        .clk(clk),
        .rs1(DCrs1Out_RFrs1),
        .rs2(DCrs2Out_RFrs2),
        .rd(MMrdOut_RFrd),
        .WE(MMWEOut_RFWE),
        .dataIn(MMdataOut_RFdataIn),
        .r1Out(RFr1Out_EXreg1Value),
        .r2Out(RFr2Out_EXreg2Value)
    );

endmodule

module regFile ( // @suppress "File contains multiple design units"
    input wire clk,

    input wire [4:0] rs1,
    input wire [4:0] rs2,
    input wire [4:0] rd,
    input wire WE,
    input wire [width-1:0] dataIn,

    output wire [width-1:0] r1Out,
    output wire [width-1:0] r2Out
    );
    parameter width = 32;

    reg [width-1:0] file[32];

    always_ff @(posedge clk) begin
        if (WE && rd != 5'b0) begin
            file[rd] <= dataIn;
        end
    end

    assign r1Out = (rs1 != 0) ? file[rs1] : 32'b0;
    assign r2Out = (rs2 != 0) ? file[rs2] : 32'b0;

endmodule

module HDU (
    input wire [4:0] EXrs1,
    input wire [4:0] EXrs2,
    input wire [4:0] MMrd, 
    input wire [4:0] WBrd,

    output logic MMStall,
    output logic EXStall
);

    always_comb begin
        EXStall = 0;
        MMStall = 0;

        if ((EXrs1 != 5'b0 || EXrs2 != 5'b0) && (EXrs1 == MMrd || EXrs2 == MMrd) && (MMrd != 5'b0) && (EXrs1 == WBrd || EXrs2 == WBrd) && (WBrd != 5'b0)) begin
            EXStall = 1;
        end
    end

endmodule
