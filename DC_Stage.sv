module DC_Stage (
    input wire clk,
    input wire stall,
    input wire flush,
    input wire [width-1:0] flushAddr,

    input wire [width-1:0] instruction,
    input wire [width-1:0] PC,

    output reg [opcodeWidth-1:0] opcodeOut,
    output reg [rsWidth-1:0] rs1Out,
    output reg [rsWidth-1:0] rs2Out,
    output reg [rsWidth-1:0] rdOut,
    output reg [2:0] func3Out,
    output reg [6:0] func7Out,
    output reg [width-1:0] immediateOut,
    output reg [width-1:0] PCOut,
    output wire stallOut, 
    output wire flushOut,
    output wire [width-1:0] flushAddrOut
    );

    parameter width = 32;
    parameter rsWidth = 5;
    parameter opcodeWidth = 7;

    always_ff @(posedge clk) begin
        
        PCOut <= PC;
        if (flush) begin
            opcodeOut <= 0'b0110011;
            rs1Out <= 5'b0;
            rs2Out <= 5'b0;
            rdOut <= 5'b0;
            func3Out <= 3'b0;
            func7Out <= 7'b0;
            immediateOut <= 32'h00;

        end else if (!stall && !flush) begin
            opcodeOut <= instruction[6:0];
            // R-Type
            if (instruction[6:0] == 7'b0110011) begin
                rs1Out <= instruction[19:15];
                rs2Out <= instruction[24:20];
                rdOut <= instruction[11:7];
                func3Out <= instruction[14:12];
                func7Out <= instruction[31:25];
                immediateOut <= 32'h00;

            // I-Type
            end else if (instruction[6:0] == 7'b0010011 || instruction[6:0] == 7'b0000011 || instruction[6:0] == 7'b1100111) begin
                rs1Out <= instruction[19:15];
                rs2Out <= 5'b0;
                rdOut <= instruction[11:7];
                func3Out <= instruction[14:12];
                func7Out <= 7'b0;
                immediateOut <= {20'b0, instruction[31:20]};
                
            // S_Type
            end else if (instruction[6:0] == 7'b0100011) begin
                rs1Out <= instruction[19:15];
                rs2Out <= instruction[24:20];
                rdOut <= 5'b0;
                func3Out <= instruction[14:12];
                func7Out <= 7'b0;
                immediateOut <= {20'b0, instruction[31:25], instruction[11:7]};
            
            // B-Type
            end else if (instruction[6:0] == 7'b1100011) begin
                rs1Out <= instruction[19:15];
                rs2Out <= instruction[24:20];
                rdOut <= 5'b0;
                func3Out <= instruction[14:12];
                func7Out <= 7'b0;
                immediateOut <= {19'b0, instruction[31], instruction[7], instruction[30:25], instruction[11:8], 1'b0};
            
            // U-Type
            end else if (instruction[6:0] == 7'b0110111 || instruction[6:0] == 7'b0010111) begin
                rs1Out <= 5'b0;
                rs2Out <= 5'b0;
                rdOut <= instruction[11:7];
                func3Out <= 3'b0;
                func7Out <= 7'b0;
                immediateOut <= {12'b0, instruction[31:12]};
                
            // J-Type
            end else if (instruction[6:0] == 7'b1101111) begin
                rs1Out <= 5'b0;
                rs2Out <= 5'b0;
                rdOut <= instruction[11:7];
                func3Out <= 3'b0;
                func7Out <= 7'b0;
                immediateOut <= {11'b0, instruction[31], instruction[19:12],instruction[20], instruction[30:21], 1'b0};
            end
        end
        
    end

    assign stallOut = stall;
    assign flushOut = flush;
    assign flushAddrOut = flushAddr;
endmodule