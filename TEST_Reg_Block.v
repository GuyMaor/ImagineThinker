`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   05:53:05 09/26/2017
// Design Name:   Reg_Block
// Module Name:   C:/Users/Guy/Documents/ReTReO/ImagineThinker/TEST_Reg_Block.v
// Project Name:  ImagineThinker
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Reg_Block
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TEST_Reg_Block;

	// Inputs
	reg [7:0] Addr_Out_A;
	reg [7:0] Addr_Out_B;
	reg [7:0] Addr_In;
	reg [15:0] Data_In;
	reg WE;
	reg clk;

	// Outputs
	wire [15:0] Data_Out_A;
	wire [15:0] Data_Out_B;

	// Instantiate the Unit Under Test (UUT)
	Reg_Block uut (
		.Addr_Out_A(Addr_Out_A), 
		.Addr_Out_B(Addr_Out_B), 
		.Addr_In(Addr_In), 
		.Data_In(Data_In), 
		.WE(WE), 
		.Data_Out_A(Data_Out_A), 
		.Data_Out_B(Data_Out_B), 
		.clk(clk)
	);

	initial begin
		// Initialize Inputs
		Addr_Out_A = 0;
		Addr_Out_B = 0;
		Addr_In = 0;
		Data_In = 0;
		WE = 0;
		clk = 0;
		

		Data_In = 16'd4;
		Addr_In = 16'd10;
		WE = 1;
		#100;
      clk = 0; 
		#100;
		clk = 1;
		
		Data_In = 16'd5;
		Addr_In = 16'd11;
		WE = 1;
		#100;
      clk = 0; 
		#100;
		clk = 1;
		
		Data_In = 16'd6;
		Addr_In = 16'd12;
		WE = 0;
		#100;
      clk = 0; 
		#100;
		clk = 1;
		
		Data_In = 16'd7;
		Addr_In = 16'd13;
		WE = 0;
		#100;
      clk = 0; 
		#100;
		clk = 1;
		
		Data_In = 16'd8;
		Addr_In = 16'd14;
		WE = 1;
		#100;
      clk = 0; 
		#100;
		clk = 1;
		
		Data_In = 16'd9;
		Addr_In = 16'd15;
		WE = 1;
		#100;
      clk = 0; 
		#100;
		clk = 1;
		WE = 0;
		
		Addr_Out_A = 16'd10;
		Addr_Out_B = 16'd11;
		#100;
      clk = 0; 
		#100;
		clk = 1;
		Addr_Out_A = 16'd12;
		Addr_Out_B = 16'd13;
		#100;
      clk = 0; 
		#100;
		clk = 1;
		Addr_Out_A = 16'd14;
		Addr_Out_B = 16'd15;
		#100;
      clk = 0; 
		#100;
		clk = 1;	
	end
      
endmodule

