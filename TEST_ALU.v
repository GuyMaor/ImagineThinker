`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   07:32:35 09/25/2017
// Design Name:   ALU
// Module Name:   C:/Users/Guy/Documents/ReTReO/ImagineThinker/TEST_ALU.v
// Project Name:  ImagineThinker
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ALU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TEST_ALU;

	// Inputs
	reg [7:0] A1;
	reg [7:0] A2;
	reg [7:0] B1;
	reg [7:0] B2;
	reg [7:0] Op;
	reg clk;

	// Outputs
	wire [7:0] Out1;
	wire [7:0] Out2;
	wire CompReg;	 

	parameter OP_SIZE  = 4;
//Math
	 parameter [OP_SIZE-1:0] ADD_OP = 4'b0000;
	 parameter [OP_SIZE-1:0] SUB_OP = 4'b0001;
	 parameter [OP_SIZE-1:0] MUL_OP = 4'b0010;
	 //Divide has a different module.
	 //parameter [OP_SIZE-1:0] DIV_OP = 4'b0011;
//Single Operand Inst
	 parameter [OP_SIZE-1:0] REAL_OP = 4'b0100;
	 parameter [OP_SIZE-1:0] IMAGINE_OP = 4'b0101;
	 parameter [OP_SIZE-1:0] CONJ_OP = 4'b0110;
//Branch Compare
	 parameter [OP_SIZE-1:0] LESS_COMP = 4'b1001;
	 parameter [OP_SIZE-1:0] EQUAL_COMP = 4'b1010;
	 parameter [OP_SIZE-1:0] LORE_COMP = 4'b1011;
	 parameter [OP_SIZE-1:0] GREAT_COMP = 4'b1100;
	 parameter [OP_SIZE-1:0] NEQUAL_COMP = 4'b1101;
	 parameter [OP_SIZE-1:0] GORE_COMP = 4'b1110;
//For Memory Access
	 parameter [OP_SIZE-1:0] MEM_ACCESS = 4'b1111;	// Instantiate the Unit Under Test (UUT)
	ALU uut (
		.A1(A1), 
		.A2(A2), 
		.B1(B1), 
		.B2(B2), 
		.Op(Op), 
		.Out1(Out1), 
		.Out2(Out2), 
		.CompReg(CompReg), 
		.clk(clk)
	);

	initial begin
		// Initialize Inputs
		A1 = 5;
		A2 = 6;
		B1 = 7;
		B2 = 8;
		Op = 0;
		clk = 0;


		// Wait 100 ns for global reset to finish
		// Initialize Inputs
		A1 = 5;
		A2 = 6;
		B1 = 7;
		B2 = 8;
		Op = ADD_OP;
		clk = 0;
		#100;
 		clk = 1;
		#100;
		Op = SUB_OP;		
		clk = 0;
		#100;
 		clk = 1;
		#100;
		A1 = 1;
		A2 = 1;
		B1 = 1;
		B2 = 1;
 		Op = MUL_OP;
		clk = 0;
		#100;
 		clk = 1;
		#100;
		A1 = 5;
		A2 = 6;
		B1 = 7;
		B2 = 8;
		Op = REAL_OP;
		clk = 0;
		#100;
 		clk = 1;
		#100;
		Op = IMAGINE_OP;
		clk = 0;
		#100;
 		clk = 1;
		#100;
		Op = CONJ_OP;
		clk = 0;
		#100;
 		clk = 1;
		#100;
		Op = LESS_COMP;
		clk = 0;
		#100;
 		clk = 1;
		#100;
		Op = EQUAL_COMP;
		clk = 0;
		#100;
 		clk = 1;
		#100;
		Op = LORE_COMP;
		clk = 0;
		#100;
 		clk = 1;
		#100;
		A1 = 0;
		A2 = 255;
		B1 = 0;
		B2 = 10;
		Op =  MEM_ACCESS;		
	   clk = 0;
		#100;
 		clk = 1;
	end
      
endmodule

