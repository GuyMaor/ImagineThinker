`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   07:44:11 09/26/2017
// Design Name:   Data_MUX
// Module Name:   C:/Users/Guy/Documents/ReTReO/ImagineThinker/TEST_Data_MUX.v
// Project Name:  ImagineThinker
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Data_MUX
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TEST_Data_MUX;

	// Inputs
	reg [15:0] S_1;
	reg [15:0] S_0;
	reg sel;

	// Outputs
	wire [15:0] Out;

	// Instantiate the Unit Under Test (UUT)
	Data_MUX uut (
		.S_1(S_1), 
		.S_0(S_0), 
		.sel(sel), 
		.Out(Out)
	);

	initial begin
		// Initialize Inputs
		S_1 = 16'd0;
		S_0 = 16'd255;
		sel = 1; //0 first

		#100;
		sel = 0;

	end
      
endmodule

