`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   02:10:38 09/27/2017
// Design Name:   ImagineThinker
// Module Name:   C:/Users/Guy/Documents/Verilog Projects/ImagineThinker/TEST_ImagineThinker.v
// Project Name:  ImagineThinker
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ImagineThinker
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TEST_ImagineThinker;

	// Inputs
	reg clk;

	// Outputs
	wire [15:0] PeripheralBuffer;
	wire [15:0] PC;
	wire [31:0] nextInst;
	wire J;
	wire Jo2;
	wire [7:0] Co;
	wire [7:0] Co2;
	wire [7:0] Bo;
	wire [7:0] B_Rego2;
	wire [15:0] BranchAmmount;
	wire shouldJump;
   wire [15:0] Data_In;
	wire [15:0] DATA_Bo2;
	wire [15:0] DATA_Ao2;
	wire [15:0] ALU_Resulto3;
	wire Storeo2;
	wire Divo2;
	wire Imo2;
	wire Memo2;
	wire [7:0] Opo;
	wire WE;
	wire [15:0] inData;
	// Instantiate the Unit Under Test (UUT)
	ImagineThinker uut (
		.clk(clk), 
		.PeripheralBuffer(PeripheralBuffer), 
		.PC(PC), 
		.nextInst(nextInst), 
		.J(J), 
		.Jo2(Jo2), 
		.Co(Co), 
		.Co2(Co2), 
		.Bo(Bo), 
		.B_Rego2(B_Rego2), 
		.BranchAmmount(BranchAmmount), 
		.shouldJump(shouldJump),
		.Data_In(Data_In),
		.DATA_Bo2(DATA_Bo2),
		.DATA_Ao2(DATA_Ao2),
		.ALU_Resulto3(ALU_Resulto3),
		.Storeo2(Storeo2),
		.Divo2(Divo2),
		.Imo2(Imo2),
		.Opo(Opo),
		.Memo2(Memo2),
		.WE,
		.inData(inData)
	);

	initial begin
		clk = 0;

		#100;
		clk = 1;
		#100
		clk = 0;        
		#100;
		clk = 1;
		#100
		clk = 0;   
		#100;
		clk = 1;
		#100
		clk = 0;
		#100;
		clk = 1;
		#100
		clk = 0;        
		#100;
		clk = 1;
		#100
		clk = 0;   
		#100;
		clk = 1;
		#100
		clk = 0;
		#100;
		clk = 1;
		#100
		clk = 0;        
		#100;
		clk = 1;
		#100
		clk = 0;   
		#100;
		clk = 1;
		#100
		clk = 0;
		#100;
		clk = 1;
		#100
		clk = 0;        
		#100;
		clk = 1;
		#100
		clk = 0;   
		#100;
		clk = 1;
		#100
		clk = 0;
	#100;
		clk = 1;
		#100
		clk = 0;
		#100;
		clk = 1;
		#100
		clk = 0;        
		#100;
		clk = 1;
		#100
		clk = 0;   
		#100;
		clk = 1;
		#100
		clk = 0;
		#100;
		clk = 1;
		#100
		clk = 0;        
		#100;
		clk = 1;
		#100
		clk = 0;   
		#100;
		clk = 1;
		#100
		clk = 0;
		#100;
		clk = 1;
		#100
		clk = 0;        
		#100;
		clk = 1;
		#100
		clk = 0;   
		#100;
		clk = 1;
		#100
		clk = 0;				
	end
      
endmodule

