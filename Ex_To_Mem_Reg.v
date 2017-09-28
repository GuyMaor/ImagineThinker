`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:57:43 09/26/2017 
// Design Name: 
// Module Name:    Ex_To_Mem_Reg 
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
module Ex_To_Mem_Reg(MWEi,MWEo,Muxi,Muxo,RWEi,RWEo,Resi,Reso,DATA_Bi,DATA_Bo,C_Regi,C_Rego,clk,stall);
    input MWEi;
    output MWEo;
	 reg MWEo;
    input Muxi;
    output Muxo;
	 reg Muxo;
    input RWEi;
    output RWEo;
	 reg RWEo;
    input [15:0] Resi;
    output [15:0] Reso;
	 reg [15:0] Reso;
    input [15:0] DATA_Bi;
    output [15:0] DATA_Bo;
	 reg [15:0] DATA_Bo;
    input [7:0] C_Regi;
    output [7:0] C_Rego;
	 reg [7:0] C_Rego;
    input clk;
    input stall;       

	 initial
	 begin
			MWEo = 0;
			Muxo = 0;
			RWEo = 0;
			Reso = 16'd0;
			DATA_Bo = 16'd0;
			C_Rego = 8'd0;	 
	 end

	 always @ (posedge clk)
	 begin
	 if(~stall)
		begin
			MWEo = MWEi;
			Muxo = Muxi;
			RWEo = RWEi;
			Reso = Resi;
			DATA_Bo = DATA_Bi;
			C_Rego = C_Regi;
		end
	 end
endmodule
