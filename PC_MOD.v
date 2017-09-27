`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    04:09:41 09/26/2017 
// Design Name: 
// Module Name:    PC_MOD 
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
//module PC_MOD(J,B,Comp,BranchAddr,clk,PC);
module PC_MOD(shouldJump,BranchAmmount,clk,PC,stall);
	 parameter DELAY_SUB = 8;//How much ADDR to subtract due to pipeline delay,
    input shouldJump;
	 //input J;
    //input B;
    //input Comp;
    input [15:0] BranchAmmount;
    input clk;
    output [15:0] PC;
    reg [15:0] PC;
	 reg [15:0] newPC;
	 input stall;
	 initial
		PC = 16'd0;
	 
	 
	 //wire shouldJump;
	 //assign shouldJump = J | (B & Comp);
	 
	 always @ (shouldJump, BranchAmmount, PC)
	 begin
		if(shouldJump)
			newPC = PC+BranchAmmount - DELAY_SUB;
		else
			newPC = PC + 4;
	 end

	 always @ (posedge clk)
	 begin
	 if(~stall)
		PC = newPC;
	 end

endmodule
