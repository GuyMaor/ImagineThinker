`timescale 1ns / 1ps
module division(A,B,Res);
	parameter DATA_SIZE = 8;
	input [DATA_SIZE-1:0] A;
	input [DATA_SIZE-1:0] B;
	output [DATA_SIZE-1:0] Res;
	wire [DATA_SIZE:0] Res;
	assign Res = ($signed(A)/$signed(B));
endmodule	