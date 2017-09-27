`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:22:27 09/24/2017 
// Design Name: 
// Module Name:    Division_Mod 
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
module Division_Mod(A1,A2,B1,B2,Out1,Out2,Stall,Op,clk);
//module Division_Mod(A1,A2,B1,B2,Out1,Out2,Stall,Op,clk,OutAbs1,SubReg1,ShiftReg,IncReg,D1,D2);
	 //output OutAbs1,SubReg1,ShiftReg,IncReg,D1,D2;
	 parameter DATA_SIZE  = 8;
	 parameter OP_SIZE = 4;
	 parameter [OP_SIZE-1:0] DIV_OP = 4'b0011;
    input clk;
	 //Interface Inputs
	 input [DATA_SIZE-1:0] A1;
	 input [DATA_SIZE-1:0] A2;
    input [DATA_SIZE-1:0] B1;
    input [DATA_SIZE-1:0] B2;
	 //Numerator Values
	 wire [DATA_SIZE*2:0] C1;
	 assign C1 = $signed(A1)*$signed(B1)+$signed(A2)*$signed(B2);
	 wire [DATA_SIZE*2:0] C2;
	 assign C2 = $signed(A2)*$signed(B1)-$signed(A1)*$signed(B2);
	 //Denominator
	 wire [DATA_SIZE*2:0] div;
	 assign div = $signed(B1)*$signed(B1)+$signed(B2)*$signed(B2);
	 //Check to see if Numerator and denominator are neg.
	 wire neg1;
	 assign neg1 = C1[DATA_SIZE*2];
	 wire neg2;
	 assign neg2 = C2[DATA_SIZE*2];
	 wire negDiv;
	 assign negDiv = div[DATA_SIZE*2];
	 //Make Numerator and Denominator positive.
	 reg [DATA_SIZE*2:0] D1;
	 always @(C1,neg1)
	 begin
		if(neg1)
			D1 = -C1;
		else
			D1 = C1;
	 end
	 reg [DATA_SIZE*2:0] D2;
	 always @(C2,neg2)
	 begin
		if(neg2)
			D2 = -C2;
		else
			D2 = C2;
	 end
	 reg [DATA_SIZE*2:0] divAbs;
	 always @ (div,negDiv)
	 begin
		if(negDiv)
			divAbs = -div;
		else
			divAbs = div;
	 end
	 //Determine if should negative the outputs
	 wire negOut1;
	 assign negOut1 = neg1 ^ negDiv;
	 wire negOut2;
	 assign negOut2 = neg2 ^ negDiv;
	 //Important values: NegOut1/2 , D1/2, divAbs
    output [DATA_SIZE-1:0] Out1;
    output [DATA_SIZE-1:0] Out2;	 
	 
    output Stall;
    input [3:0] Op;
	 reg [3:0] State;
	 wire Stall;
	 assign Stall = (State>0)&&(Op==DIV_OP);
	 
	 //Parameters
	 parameter NUMBER_OF_ZEROS = DATA_SIZE-2;
	 parameter NUMBER_OF_COMPARISIONS = NUMBER_OF_ZEROS + 1;
	 parameter HIGHEST_STATE = NUMBER_OF_ZEROS + 2;
	 parameter SIZE_OF_D1 = DATA_SIZE*2+1;
	 
	 //States
	 always @ (posedge clk)
	 begin
	 if(Op==DIV_OP)
		begin	
			if(State>0)
				State = State-1;
			else
				State = HIGHEST_STATE;
		end
	 end
	 //Registers for Calculating output
	 reg [DATA_SIZE-1:0] OutAbs1;
	 reg [DATA_SIZE-1:0] OutAbs2;
	 reg [SIZE_OF_D1+NUMBER_OF_ZEROS:0] SubReg1;
	 reg [SIZE_OF_D1+NUMBER_OF_ZEROS:0] SubReg2;
	 reg [SIZE_OF_D1+NUMBER_OF_ZEROS:0] ShiftReg; 
	 reg [DATA_SIZE-1:0] IncReg;
	 
	 //Where the Shifting Happens
	 always @ (posedge clk)
	 begin
		if(State>=HIGHEST_STATE)
		begin
			OutAbs1 = 17'd0;
			OutAbs2 = 17'd0;
			SubReg1 = {16'd0,D1};
			SubReg2 = {16'd0,D2};
			ShiftReg = {divAbs,6'd0};
			IncReg = 8'b01000000;
		end
		else if(State>0)
		begin
			if(ShiftReg<=SubReg1)
			begin
				SubReg1 = SubReg1-ShiftReg;
				OutAbs1 = OutAbs1+IncReg;
			end
			if(ShiftReg<=SubReg2)
			begin
				SubReg2 = SubReg2-ShiftReg;
				OutAbs2 = OutAbs2+IncReg;
			end
			IncReg = IncReg>>1;
			ShiftReg = ShiftReg>>1;
		end
	 end
	 
	 reg [DATA_SIZE-1:0] Out1;
	 always @ (negOut1,OutAbs1)
	 begin
			if(negOut1)
				Out1 = -OutAbs1;
			else
				Out1 = OutAbs1;
	 end
	 reg [DATA_SIZE-1:0] Out2;
	 always @ (negOut2,OutAbs2)
	 begin
			if(negOut2)
				Out2 = -OutAbs2;
			else
				Out2 = OutAbs2;
	 end
endmodule
