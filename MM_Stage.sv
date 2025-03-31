module MM_Stage (
    input wire clk,
    input wire stallStart,

    input wire read,
    input wire write,
    input wire noMEM,
    input wire [width-1:0] data,
    input wire [width-1:0] address,
    input wire [2:0] addressMode,
    input wire [rsWidth-1:0] rd,


    output reg [rsWidth-1:0] rdOut,
    output reg [width-1:0] dataOut,
    output reg WEOut, 

    output wire stallOut
    );

    parameter width = 32;
    parameter adrWidth = 24;
    parameter rsWidth = 5;

    wire [width-1:0] dataOutWire;

    LSU #(
        .width(width),
        .adrWidth(adrWidth)
    ) LSU_instance (
        .address(address[23:0]),
        .data(data),
        .addressMode(addressMode),
        .WE(write),
        .clk(clk),
        .dataOut(dataOutWire)
    );

    always_ff @(posedge clk) begin
        if (!stallStart) begin
            if (read == 1 && write == 0) begin
                rdOut <= rd;
                dataOut <= dataOutWire;
                WEOut <= 1;
            end else if (write == 1) begin
                rdOut <= 5'b0;
                dataOut <= 32'b0;
                WEOut <= 0;
            end else if (noMEM == 1)begin
                rdOut <= rd;
                dataOut <= data;
                WEOut <= 1;
            end else begin
                rdOut <= rd;
                dataOut <= data;
                WEOut <= 0;
            end
        end else if (stallStart)begin
            rdOut <= 5'b0;
            dataOut <= 32'b0;
            WEOut <= 1;
        end
    end

    assign stallOut = stallStart;
endmodule

module LSU ( // @suppress "File contains multiple design units"
    input wire [adrWidth-1:0] address,
    input wire [width-1:0] data,
    input wire [2:0] addressMode,
    input wire WE,
    input wire clk,

    output logic [width-1:0] dataOut
    );

    parameter width = 32;
    parameter adrWidth = 24;


    reg [7:0] Ram[2**adrWidth];

    always_comb begin
        dataOut = 32'b0;
        case (addressMode)
            3'h0 : dataOut = {{24{Ram[address][7]}}, Ram[address]};
            3'h1 : dataOut = {{16{Ram[{address[23:1], 1'b1}][7]}}, Ram[{address[23:1], 1'b1}], Ram[{address[23:1], 1'b0}]};
            3'h2 : dataOut = {Ram[{address[23:2], 2'b11}], Ram[{address[23:2], 2'b10}], Ram[{address[23:2], 2'b01}], Ram[{address[23:2], 2'b00}]};
            3'h4 : dataOut = {24'h0, Ram[address]};
            3'h5 : dataOut = {16'h0, Ram[{address[23:1], 1'b1}], Ram[{address[23:1], 1'b0}]};
            default : /* do nothing */;
        endcase
    end

    always_ff @(posedge clk) begin
        if (WE == 1) begin
            case (addressMode)
                3'h0 : Ram[address] = data[7:0];
                3'h1 : begin                      
                    Ram[{address[23:1], 1'b0}] = data[7:0]; 
                    Ram[{address[23:1], 1'b1}] = data[15:8];
                end
                3'h2: begin                      
                    Ram[{address[23:2], 2'b00}] = data[7:0]; 
                    Ram[{address[23:2], 2'b01}] = data[15:8];
                    Ram[{address[23:2], 2'b10}] = data[23:16]; 
                    Ram[{address[23:2], 2'b11}] = data[31:24];
                end
                default : /* do nothing */;
            endcase
        end
    end
endmodule