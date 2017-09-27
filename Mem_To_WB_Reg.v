`timescale 1ns / 1ps

module Mem_To_WB_Reg(RWEi,RWEo,Resi,Reso,C_Regi,C_Rego,clk,stall);
    input RWEi;
    output RWEo;
	 reg RWEo;
    input [15:0] Resi;
    output [15:0] Reso;
	 reg [15:0] Reso;
    input [7:0] C_Regi;
    output [7:0] C_Rego;
	 reg [7:0] C_Rego;
    input clk;
    input stall;

	 always @ (posedge clk)
	 begin
		if(~stall)
		begin
			RWEo = RWEi;
			Reso = Resi;
			C_Rego = C_Regi;
		end
	 end

endmodule
