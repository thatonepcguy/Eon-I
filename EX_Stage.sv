module EX_Stage (
    input wire clk,
    input wire stall,
    input wire stallStart,

    input wire [opcodeWidth-1:0] opcode,
    input wire [width-1:0] reg1Value,
    input wire [width-1:0] reg2Value,
    input wire [rsWidth-1:0] rd,
    input wire [2:0] func3,
    input wire [6:0] func7,
    input wire [width-1:0] immediate,
    input wire [width-1:0] PC,

    output reg readOut,
    output reg writeOut,
    output reg noMEMOut,
    output reg [width-1:0] valueOut,
    output reg [width-1:0] addressOut,
    output reg [2:0] addressModeOut,
    output reg [rsWidth-1:0] rdOut,


    output wire stallOut, 
    output wire flushOut,
    output wire [width-1:0] flushAddrOut
    );

    parameter width = 32;
    parameter rsWidth = 5;
    parameter opcodeWidth = 7;

    logic [width-1:0] valueOutWire;

    logic [width-1:0] ALUinput1;
    logic [width-1:0] ALUinput2;
    logic [1:0] ALUoperation;
    logic [width-1:0] ALUOut;
    /* verilator lint_off LATCH */
    always_comb begin
        flushAddrOut = PC;
        if (opcode == 7'b0110011) begin
            ALUinput1 = reg1Value;
            ALUinput2 = reg2Value;
            ALUoperation = 2'b0;
        end else if (opcode == 7'b0010011 && (func3 == 3'h5 || func3 == 3'h1)) begin
            ALUinput1 = reg1Value;
            ALUinput2 = {27'b0, immediate[10:6]};
            ALUoperation = 2'b0;
        end else if (opcode == 7'b0010011 && !(func3 == 3'h5 || func3 == 3'h1))begin
            ALUinput1 = reg1Value;
            ALUinput2 = immediate;
            ALUoperation = 2'b0;
        end else if (opcode == 7'b0000011 || opcode == 7'b0100011) begin
            ALUinput1 = reg1Value;
            ALUinput2 = immediate;
            ALUoperation = 2'b1;
        end else if (opcode == 7'b0110111) begin
            ALUinput1 = immediate;
            ALUoperation = 2'b10;
        end else if (opcode == 7'b0010111) begin
            ALUinput1 = immediate;
            ALUinput2 = PC;
            ALUoperation = 2'b10;
        end else if (opcode == 7'b1101111) begin        // JAL
            flushAddrOut = PC + immediate;
            valueOutWire = PC + 32'h4;
        end else if (opcode == 7'b1100111) begin        // JALR
            flushAddrOut = reg1Value + immediate;
            valueOutWire = PC + 32'h4;
        end else if (opcode == 7'b1100011) begin           // BRANCH
            case (func3)
                3'h0 : flushAddrOut += (reg1Value == reg2Value) ? immediate : 0;
                3'h1 : flushAddrOut += (reg1Value != reg2Value) ? immediate : 0;
                3'h4 : flushAddrOut += ($signed(reg1Value) < $signed(reg2Value)) ? immediate : 0;
                3'h5 : flushAddrOut += ($signed(reg1Value) >= $signed(reg2Value)) ? immediate : 0;
                3'h6 : flushAddrOut += ($unsigned(reg1Value) < $unsigned(reg2Value)) ? immediate : 0;
                3'h7 : flushAddrOut += ($unsigned(reg1Value) >= $unsigned(reg2Value)) ? immediate : 0;
                default : flushAddrOut = PC;
            endcase   
        end else begin
            ALUinput1 = 32'h0;
            ALUinput2 = 32'h0;
            ALUoperation = 2'b0;
            flushAddrOut = PC;
            valueOutWire = 32'h0;
            flushOut = 0;
        end

        if (PC != flushAddrOut) begin
            flushOut = 1;
        end else begin
            flushOut = 0;
        end
    end
    /* verilator lint_on LATCH */

    ALU #(
        .width(32)
    ) ALU_instance (
        .input1(ALUinput1),
        .input2(ALUinput2),
        .func3(func3),
        .func7(func7),
        .operation(ALUoperation),
        .output1(ALUOut)
    );

    always_ff @(posedge clk) begin
        if (!stallStart) begin
            rdOut <= rd;
            addressModeOut <= func3;
            addressOut <= ALUOut;
            if (opcode == 7'b0000011) begin
                readOut <= 1;
                writeOut <=0;
                noMEMOut <= 0;
            end else if (opcode == 7'b0100011) begin
                readOut <= 0;
                writeOut <=1;
                noMEMOut <= 0;
            end 
            
            if (opcode == 7'b1101111 || opcode == 7'b1100111) begin
                valueOut <= valueOutWire;
                noMEMOut <= 1;
            end else begin
                valueOut <= ALUOut;
                noMEMOut <= 1;
            end
        end else if (stallStart)begin
            rdOut <= 5'b0;
            addressModeOut <= 3'b0;
            addressOut <= 32'b0;
            readOut <= 1'b0;
            writeOut <= 1'b0;
            valueOut <= 32'b0;
            noMEMOut <= 1'b1;
        end
    end
    
    assign stallOut = stallStart;
endmodule

module ALU ( // @suppress "File contains multiple design units"
    input logic [width-1:0] input1,
    input logic [width-1:0] input2,
    input logic [2:0] func3,
    input logic [6:0] func7,
    input logic [1:0] operation,

    output logic [width-1:0] output1
    );

    parameter width = 32;

    always_comb begin
        if (operation == 2'b0) begin                                                    // BASIC ARITHMETIC
            case (func3)
                3'h0 : output1 = (func7 == 7'h0) ? input1 + input2 : input1 - input2;   // ADD-SUB
                3'h1 : output1 = input1 << input2[4:0];                                      // SLL
                3'h2 : output1 = ($signed(input1) < $signed(input2)) ? 1:0;             // SLT
                3'h3 : output1 = ($unsigned(input1) < $unsigned(input2)) ? 1:0;         // SLTU
                3'h4 : output1 = input1 ^ input2;                                       // XOR
                3'h5 : output1 = (func7 == 7'h0) ? input1 >> input2[4:0] : input1 >>> input2[4:0];// SRL-SRA
                3'h6 : output1 = input1 | input2;                                       // OR
                3'h7 : output1 = input1 & input2;                                       // AND
                default : output1 = 32'h0;
            endcase
        end else if (operation == 2'b01) begin                                          // MEM ADDRESS
            output1 = input1+input2;
        end else if (operation == 2'b10) begin                                          // LUI
            output1 = input1 << 12;
        end else begin                                                                  // AUIPC
            output1 = input2 + (input1 << 12);
        end
    end
endmodule