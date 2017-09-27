`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:37:41 09/25/2017
// Design Name:   Division_Mod
// Module Name:   C:/Users/Guy/Documents/ReTReO/ImagineThinker/TEST_Division_Mod.v
// Project Name:  ImagineThinker
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Division_Mod
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TEST_Division_Mod;

	// Inputs
	reg [7:0] A1;
	reg [7:0] A2;
	reg [7:0] B1;
	reg [7:0] B2;
	reg [3:0] Op;
	reg clk;

	// Outputs
	wire [7:0] Out1;
	wire [7:0] Out2;
	wire Stall;

	// Instantiate the Unit Under Test (UUT)
	Division_Mod uut (
		.A1(A1), 
		.A2(A2), 
		.B1(B1), 
		.B2(B2), 
		.Out1(Out1), 
		.Out2(Out2), 
		.Stall(Stall), 
		.Op(Op), 
		.clk(clk)
	);

	initial begin
		// Initialize Inputs
		A1 = 83;
		A2 = 2;
		B1 = 5;
		B2 = 6;
		Op = 4'b0011;
	

		clk = 0;
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
		#100;
 		clk = 1;
		#100;
		clk = 0;


	end
      
endmodule

