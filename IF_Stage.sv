module IF_Stage #(
    parameter width = 32
    )(
    input wire clk,
    input wire stall,
    input wire flush,
    input wire [width-1:0] flushAddr,

    output reg [width-1:0] instructionOut,
    output reg [width-1:0] PCOut
    );

    

    reg [width-1:0] PC;
    wire [width-1:0] rom_IR;

    initial begin
        PC = 0;
        instructionOut = 32'h13;
    end

    // hook up rom
    PrgRom rom(.address(PC[23:0]), .instruction(rom_IR));
    
    always_ff @(posedge clk) begin
        PCOut <= PC;
        if (flush) begin
            PC <= flushAddr;
            instructionOut <= 32'h13;
        end else if (!stall && !flush) begin
            PC <= PC + 4;
            instructionOut <= rom_IR;
        end
    end

endmodule

module PrgRom #(// @suppress "File contains multiple design units"
    parameter addressWidth = 24,
    parameter width = 32
    )( 
    input wire  [addressWidth-1:0] address,
    
    output wire [width-1:0] instruction
    );
    

    reg [8-1:0] memoryCell[2**addressWidth];

    initial begin
        $readmemh("prg.txt", memoryCell);
    end

    assign instruction = {memoryCell[address+3],memoryCell[address+2],memoryCell[address+1],memoryCell[address]};
endmodule 