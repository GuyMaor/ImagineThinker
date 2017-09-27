`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   03:52:19 09/26/2017
// Design Name:   RAM
// Module Name:   C:/Users/Guy/Documents/ReTReO/ImagineThinker/TEST_RAM.v
// Project Name:  ImagineThinker
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: RAM
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TEST_RAM;

	// Inputs
	reg clk;
	reg [15:0] dataAddr;
	reg [15:0] instAddr;
	reg [15:0] inData;
	reg write_en;

	// Outputs
	wire [15:0] dataOut;
	wire [31:0] instOut;

	// Instantiate the Unit Under Test (UUT)
	RAM uut (
		.clk(clk), 
		.dataAddr(dataAddr), 
		.instAddr(instAddr), 
		.dataOut(dataOut), 
		.instOut(instOut), 
		.inData(inData), 
		.write_en(write_en)
	);

	initial begin
		// Initialize Inputs


		instAddr = 0;

		dataAddr = 16'd10;
		inData = 16'd3;
		write_en = 1;
		#100;
 		clk = 1;
		#100
		clk = 0;
		dataAddr = 16'd12;
		inData = 16'd4;
		write_en = 1;		
		#100;
 		clk = 1;
		#100
		clk = 0;
		dataAddr = 16'd14;
		inData = 16'd5;
		write_en = 1;	
		#100;
 		clk = 1;
		#100
		clk = 0;
		dataAddr = 16'd16;
		inData = 16'd6;
		write_en = 1;
		#100;
 		clk = 1;
		#100
		clk = 0;
		dataAddr = 16'd10;
		inData = 16'd6;
		write_en = 0;
		instAddr = 16'd10;
		#100;
 		clk = 1;
		#100
		clk = 0;
		dataAddr = 16'd14;
		inData = 16'd6;
		write_en = 0;
		instAddr = 16'd10;
		#100;
 		clk = 1;
		#100
		clk = 0;		
	end
      
endmodule

