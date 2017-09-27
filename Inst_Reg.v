`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:34:50 09/26/2017 
// Design Name: 
// Module Name:    Inst_Reg 
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
module Inst_Reg(Opi,Ai,Bi,Ci,Opo,Ao,Bo,Co,stall,clk);
    input [7:0] Opi;
    input [7:0] Ai;
    input [7:0] Bi;
    input [7:0] Ci;
    output [7:0] Opo;
	 reg [7:0] Opo;
    output [7:0] Ao;
	 reg [7:0] Ao;
    output [7:0] Bo;
	 reg [7:0] Bo;
    output [7:0] Co;
	 reg [7:0] Co;
    input stall;
    input clk;
	 
	 always @ (posedge clk)
	 begin
	 if(~stall)
	 begin
		Opo = Opi;
		Ao = Ai;
		Bo = Bi;
		Co = Ci;
	 end
	 end

endmodule
