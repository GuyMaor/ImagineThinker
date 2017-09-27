`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:44:59 07/23/2017 
// Design Name: 
// Module Name:    RAM 
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
module RAM(clk, dataAddr, instAddr, dataOut, instOut, inData,write_en,PeripheralBuffer);
	 parameter ADDR_WIDTH = 16;
	 parameter DATA_WIDTH = 8;
	 output [DATA_WIDTH*2-1:0] PeripheralBuffer;
	 wire [DATA_WIDTH*2-1:0] PeripheralBuffer;
	 parameter RAM_DEPTH = 1 << ADDR_WIDTH;
	 input clk ;
    input [ADDR_WIDTH-1:0] dataAddr ;
    input [ADDR_WIDTH-1:0] instAddr ;
    output [DATA_WIDTH*2-1:0] dataOut ;
    output [DATA_WIDTH*4-1:0] instOut ;

    input [DATA_WIDTH*2-1:0] inData ; 
	 input write_en;
	 reg [DATA_WIDTH-1:0] mem [RAM_DEPTH-1:0];

	
	
	 parameter OP_SIZE = 2'd4;
	 parameter [OP_SIZE-1:0] ADD_OP = 8'b10000000;
	 parameter [OP_SIZE-1:0] SUB_OP = 8'b10000001;
	 parameter [OP_SIZE-1:0] MUL_OP = 8'b10000010;
	 parameter [OP_SIZE-1:0] DIV_OP = 8'b10000011;
	 parameter [OP_SIZE-1:0] REAL_OP = 8'b10000100;
	 parameter [OP_SIZE-1:0] IMAGINE_OP = 8'b10000101;
	 parameter [OP_SIZE-1:0] CONJ_OP = 8'b10000110;
	 //parameter [OP_SIZE-1:0] IMED_LD = 8'b10000111;
	 parameter [OP_SIZE-1:0] LESS_COMP = 8'b10001001;
	 parameter [OP_SIZE-1:0] EQUAL_COMP = 8'b10001010;
	 parameter [OP_SIZE-1:0] LORE_COMP = 8'b10001011;
	 parameter [OP_SIZE-1:0] GREAT_COMP = 8'b10001100;
	 parameter [OP_SIZE-1:0] NEQUAL_COMP = 8'b10001101;
	 parameter [OP_SIZE-1:0] GORE_COMP = 8'b10001110;
	 parameter [OP_SIZE-1:0] STORE = 8'b10001111;
	 parameter [OP_SIZE-1:0] LOAD = 8'b10011111;
	 parameter [OP_SIZE-1:0] BRANCH =  8'b10010000;
	 parameter [OP_SIZE-1:0] JUMP =  8'b10110000;
	 parameter [OP_SIZE-1:0] IMED_LD = 8'b10100000;
	//00010000
	//11101111
	//11110000
	 initial
	 begin
		{mem[3],mem[2],mem[1],mem[0]} = 32'h00000000; 
		{mem[7],mem[6],mem[5],mem[4]} = 32'h00000000;
		{mem[11],mem[10],mem[9],mem[8]} = 32'h00000000;
		{mem[15],mem[14],mem[13],mem[12]} = 32'h00000000;
		{mem[19],mem[18],mem[17],mem[16]} = {32'hb0fff000};  
		{mem[23],mem[22],mem[21],mem[20]} = 32'h00000000; 
		{mem[27],mem[26],mem[25],mem[24]} = 32'h00000000;
		{mem[31],mem[30],mem[29],mem[28]} = 32'h00000000;		
	 end


	


	
	always @ (posedge clk) 
	begin
		if(write_en)
		begin
			mem[dataAddr] <= inData[DATA_WIDTH-1:0];
			mem[dataAddr+1] <= inData[DATA_WIDTH*2:DATA_WIDTH];
		end
	end


	assign dataOut = {mem[dataAddr+1],mem[dataAddr]};
	assign instOut = {mem[instAddr+3],mem[instAddr+2],mem[instAddr+1],mem[instAddr]};
	assign PeripheralBuffer = {mem[16'hffff],mem[16'hfffe]};

endmodule
