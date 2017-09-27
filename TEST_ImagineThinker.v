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
	wire B_Rego2;
	wire [15:0] BranchAmmount;
	wire shouldJump;

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
		.shouldJump(shouldJump)
	);

	initial begin


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

