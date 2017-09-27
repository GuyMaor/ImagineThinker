`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    06:55:46 09/26/2017 
// Design Name: 
// Module Name:    EX_Stage 
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
module EX_Stage(J,B,Mem,Store,Div,Im,OpCode,MWE,Mux,RWE,Data_A,Data_B,A_Reg,B_Reg,C_Reg,clk,
						shouldJump,stall,MWE_Out,Mux_Out,RWE_Out,ALU_Result,Data_B_Out,C_Reg_Out,BranchAmmount);
//module EX_Stage(J,B,Mem,Store,Div,Im,OpCode,MWE,Mux,RWE,Data_A,Data_B,A_Reg,B_Reg,C_Reg,clk,
//						shouldJump,stall,MWE_Out,Mux_Out,RWE_Out,ALU_Result,Data_B_Out,C_Reg_Out,data_or_mem,B_or_C,alu_out,div_res,BranchAmmount);
	 //output [15:0] data_or_mem,B_or_C,alu_out,div_res;//DEBUG
	 output [15:0] BranchAmmount;
	 wire [15:0] BranchAmmount;
    input J;
    input B;
    input Mem;
    input Store;
    input Div;
    input Im;
    input [3:0] OpCode;
    input MWE;
    input Mux;
    input RWE;
    input [15:0] Data_A;
    input [15:0] Data_B;
    input [7:0] A_Reg;
    input [7:0] B_Reg;
    input [7:0] C_Reg;
	 input clk;
    output shouldJump;
    output stall;
    output MWE_Out;
    output Mux_Out;
    output RWE_Out;
	 output [15:0] ALU_Result;
	 output [15:0] Data_B_Out;
    output [7:0] C_Reg_Out;
	 wire shouldJump;
    wire stall;
    wire MWE_Out;
    wire Mux_Out;
    wire RWE_Out;
	 wire [15:0] ALU_Result;
	 wire [15:0] Data_B_Out;
    wire [7:0] C_Reg_Out;
	 assign BranchAmmount = {A_Reg,B_Reg};
	 //Mux 1 and 2
	 wire [15:0] B_or_C;
	 Data_MUX B_or_C_MUX({8'b00000000,C_Reg},{8'b00000000,B_Reg},Store,B_or_C);
	 wire [15:0] data_or_mem;
	 Data_MUX data_or_mem_MUX(B_or_C,Data_B,Mem,data_or_mem);
	 //Division Mod
	 wire [15:0] div_res;
	 Division_Mod d_mod(Data_A[15:8],Data_A[7:0],data_or_mem[15:8],data_or_mem[7:0],div_res[15:8],div_res[7:0],stall,OpCode,clk);
	 //ALU Mod
	 wire [15:0] alu_out;
	 wire compRes;
	 ALU alu(Data_A[15:8],Data_A[7:0],data_or_mem[15:8],data_or_mem[7:0],OpCode,alu_out[15:8],alu_out[7:0],compRes,clk);
	 //Should Jump
	 assign shouldJump = J | (B & compRes);
	 //Mux 3
	 wire [15:0] div_or_not;
	 Data_MUX div_or_not_MUX(div_res,alu_out,Div,div_or_not);
	 //Last Mux
	 Data_MUX alu_out_MUX({A_Reg,B_Reg},div_or_not,Im,ALU_Result);
	 assign Data_B_Out = Data_B;
	 assign C_Reg_Out = C_Reg;
	 assign MWE_Out = MWE;
	 assign Mux_Out = Mux;
	 assign RWE_Out = RWE;
endmodule
