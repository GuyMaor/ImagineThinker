`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:40:28 09/26/2017 
// Design Name: 
// Module Name:    Dec_To_Ex_Reg 
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
module Dec_To_Ex_Reg(Ji,Jo,Bi,Bo,Memi,Memo,Storei,Storeo,Divi,Divo,Imi,Imo,MWEi,MWEo,
							Muxi,Muxo,RWEi,RWEo,DATA_Ai,DATA_Ao,DATA_Bi,DATA_Bo,A_Regi,A_Rego,
							B_Regi,B_Rego,C_Regi,C_Rego,stall,clk,Opi,Opo);
    input Ji;
    output Jo;
	 reg Jo;
    input Bi;
    output Bo;
	 reg Bo;
    input Memi;
    output Memo;
	 reg Memo;
    input Storei;
    output Storeo;
	 reg Storeo;
    input Divi;
    output Divo;
	 reg Divo;
    input Imi;
    output Imo;
	 reg Imo;
	 input [3:0] Opi;
    output [3:0] Opo;
	 reg [3:0] Opo;
    input MWEi;
    output MWEo;
	 reg MWEo;
    input Muxi;
    output Muxo;
	 reg Muxo;
    input RWEi;
    output RWEo;
	 reg RWEo;
    input [15:0] DATA_Ai;
    output [15:0] DATA_Ao;
	 reg [15:0] DATA_Ao;
    input [15:0] DATA_Bi;
    output [15:0] DATA_Bo;
	 reg [15:0] DATA_Bo;
    input [7:0] A_Regi;
    output [7:0] A_Rego;
	 reg [7:0] A_Rego;
    input [7:0] B_Regi;
    output [7:0] B_Rego;
	 reg [7:0] B_Rego;
    input [7:0] C_Regi;
    output [7:0] C_Rego;
	 reg [7:0] C_Rego;
    input stall;
    input clk;

	 always @ (posedge clk)
	 begin
	 if(~stall)
		begin
			Jo=Ji;
			Bo=Bi;
			Memo=Memi;
			Storeo=Storei;
			Divo=Divi;
			Imo=Imi;
			Opo=Opi;
			MWEo=MWEi;
			Muxo=Muxi;
			RWEo=RWEi;
			DATA_Ao=DATA_Ai;
			DATA_Bo=DATA_Bi;
    		A_Rego=A_Regi;
			B_Rego=B_Regi;
			C_Rego=C_Regi;
		
		end
	 end

endmodule
