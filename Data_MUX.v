`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    06:39:50 09/26/2017 
// Design Name: 
// Module Name:    Data_MUX 
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
module Data_MUX(S_1,S_0,sel,Out);
    input [15:0] S_0;
    input [15:0] S_1;
    input sel;
    output [15:0] Out;
	 reg [15:0] Out;
    
	 always @ (S_0,S_1,sel)
	 begin
		case(sel)
			0: Out = S_0;
			1: Out = S_1;
		endcase
	 end

endmodule
