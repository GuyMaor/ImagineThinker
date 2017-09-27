`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   05:22:34 09/26/2017
// Design Name:   PC_MOD
// Module Name:   C:/Users/Guy/Documents/ReTReO/ImagineThinker/TEST_PC_MOD.v
// Project Name:  ImagineThinker
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: PC_MOD
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TEST_PC_MOD;

	// Inputs
	reg shouldJump;
	reg [15:0] BranchAmmount;
	reg clk;
   reg stall;
	// Outputs
	wire [15:0] PC;

	// Instantiate the Unit Under Test (UUT)
	PC_MOD uut (
		.shouldJump(shouldJump), 
		.BranchAmmount(BranchAmmount), 
		.clk(clk), 
		.PC(PC),
		.stall(stall)
	);

	initial begin
		// Initialize Inputs
		shouldJump = 0;
		BranchAmmount = 16'd128;
		clk = 0;
		
		stall = 1;
		#100;
		clk = 1;
		#100;
		clk = 0;	
		#100;
		clk = 1;
		#100;
		clk = 0;
 		#100;
		clk = 1;
		#100;
		clk = 0; 
		shouldJump = 1;
		#100;
		clk = 1;
		#100;
		clk = 0;
		shouldJump = 0;		
		#100;
		clk = 1;
		#100;
		clk = 0;
		#100;
		clk = 1;
		#100;
		clk = 0;
		stall = 0;
		#100;
		clk = 1;
		#100;
		clk = 0;	
		#100;
		clk = 1;
		#100;
		clk = 0;
 		#100;
		clk = 1;
		#100;
		clk = 0; 
		shouldJump = 1;
		#100;
		clk = 1;
		#100;
		clk = 0;
		shouldJump = 0;		
		#100;
		clk = 1;
		#100;
		clk = 0;
		#100;
		clk = 1;
		#100;
		clk = 0;			
	end
      
endmodule

