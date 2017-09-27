`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    05:45:31 09/26/2017 
// Design Name: 
// Module Name:    Reg_Block 
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
module Reg_Block(Addr_Out_A,Addr_Out_B,Addr_In,Data_In,WE,Data_Out_A,Data_Out_B,clk);
	 parameter ADDR_WIDTH = 5;
	 parameter DATA_WIDTH = 16;
	 parameter RAM_DEPTH = 1 << ADDR_WIDTH;
    input [7:0] Addr_Out_A; 
    input [7:0] Addr_Out_B;
    input [7:0] Addr_In;
    input [15:0] Data_In;
    input WE;
    output [15:0] Data_Out_A;
	 reg [15:0] Data_Out_A;
    output [15:0] Data_Out_B;
	 reg [15:0] Data_Out_B;
	 input clk;

	 reg [DATA_WIDTH-1:0] regBlock [RAM_DEPTH-1:0];
	 
	always @ (negedge clk) 
	begin
		if(WE)
		begin
			regBlock[Addr_In] <= Data_In;
		end
	end

	 always @ (Addr_Out_A,Addr_Out_B)
	 begin
		Data_Out_A = regBlock[Addr_Out_A];
		Data_Out_B = regBlock[Addr_Out_B];
	 end
	 
endmodule
