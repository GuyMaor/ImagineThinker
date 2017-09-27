`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:44:59 07/23/2017 
// Design Name: 
// Module Name:    RAM 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module RAM(clk, dataAddr, instAddr, dataOut, instOut, inData,write_en);
	 parameter ADDR_WIDTH = 16;
	 parameter DATA_WIDTH = 8;
	 parameter RAM_DEPTH = 1 << ADDR_WIDTH;
	 input clk ;
    input [ADDR_WIDTH-1:0] dataAddr ;
    input [ADDR_WIDTH-1:0] instAddr ;
    output [DATA_WIDTH*2-1:0] dataOut ;
    output [DATA_WIDTH*4-1:0] instOut ;

    input [DATA_WIDTH*2-1:0] inData ; 
	 input write_en;
	 reg [DATA_WIDTH-1:0] mem [RAM_DEPTH-1:0];

	//Test ALU
	/*initial
	begin
		mem[0] = 16'b0001001010100011; //in reg to reg A
		mem[1] = 16'b1000001110100010; //4 to reg B
		mem[2] = 16'b1000000010100111;
		mem[3] = 16'b0001010000100110; //store alu out in out reg
		mem[4] = 16'b0000000000100001;
	end*/


	


	
	always @ (posedge clk) 
	begin
		if(write_en)
		begin
			mem[dataAddr] <= inData[DATA_WIDTH-1:0];
			mem[dataAddr+1] <= inData[DATA_WIDTH*2:DATA_WIDTH];
		end
	end


	assign dataOut = {mem[dataAddr+1],mem[dataAddr]};
	assign instOut = {mem[instAddr+3],mem[instAddr+2],mem[instAddr+1],mem[instAddr]};

endmodule
