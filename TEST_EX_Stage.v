`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   07:30:48 09/26/2017
// Design Name:   EX_Stage
// Module Name:   C:/Users/Guy/Documents/ReTReO/ImagineThinker/TEST_EX_Stage.v
// Project Name:  ImagineThinker
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: EX_Stage
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TEST_EX_Stage;
	 parameter OP_SIZE  = 4;
	 //Math
	 parameter [OP_SIZE-1:0] ADD_OP = 4'b0000;
	 parameter [OP_SIZE-1:0] SUB_OP = 4'b0001;
	 parameter [OP_SIZE-1:0] MUL_OP = 4'b0010;
	 //Divide has a different module.
	 parameter [OP_SIZE-1:0] DIV_OP = 4'b0011;
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
	 parameter [OP_SIZE-1:0] MEM_ACCESS = 4'b1111;
	 
	 
	// Inputs
	reg J;
	reg B;
	reg Mem;
	reg Store;
	reg Div;
	reg Im;
	reg [3:0] OpCode;
	reg MWE;
	reg Mux;
	reg RWE;
	reg [15:0] Data_B;
	reg [15:0] Data_A;
	reg [7:0] A_Reg;
	reg [7:0] B_Reg;
	reg [7:0] C_Reg;
	reg clk;

	// Outputs
	wire shouldJump;
	wire stall;
	wire MWE_Out;
	wire Mux_Out;
	wire RWE_Out;
	wire [15:0] ALU_Result;
	wire [15:0] Data_B_Out;
	wire [7:0] C_Reg_Out;

	// DEBUT
	wire [15:0] data_or_mem;
	wire [15:0] B_or_C;
	wire [15:0] alu_out;
	wire [15:0] div_res;
	// Instantiate the Unit Under Test (UUT)d
	EX_Stage uut (
		.J(J), 
		.B(B), 
		.Mem(Mem), 
		.Store(Store), 
		.Div(Div), 
		.Im(Im), 
		.OpCode(OpCode), 
		.MWE(MWE), 
		.Mux(Mux), 
		.RWE(RWE), 
		.Data_A(Data_A), 
		.Data_B(Data_B), 
		.A_Reg(A_Reg), 
		.B_Reg(B_Reg), 
		.C_Reg(C_Reg), 
		.clk(clk), 
		.shouldJump(shouldJump), 
		.stall(stall), 
		.MWE_Out(MWE_Out), 
		.Mux_Out(Mux_Out), 
		.RWE_Out(RWE_Out), 
		.ALU_Result(ALU_Result), 
		.Data_B_Out(Data_B_Out),
		//.data_or_mem(data_or_mem),
		//.B_or_C(B_or_C),
		//.alu_out(alu_out),
		//.div_res(div_res),
		.C_Reg_Out(C_Reg_Out)
	);

	initial begin
		// Initialize Inputs
J = 0;
B = 0;
Mem = 0;
Store = 0;
Div = 0;
Im = 0;
OpCode = 0;
MWE = 0;
Mux = 0;
RWE = 0;
//Data_A = 0;
//Data_B = 0;
A_Reg = 16'h03;
B_Reg = 16'h04;
C_Reg = 16'h05;
clk = 0;

//TEST ADD
Data_A = 16'h0405;
Data_B = 16'h0607;
OpCode = 4'b0000;
RWE = 1;
#100;
clk = 1;
#100;
clk = 0;
//TEST MUL
Data_A = 16'h0202;
Data_B = 16'h0202;       
OpCode = 4'b0010;
#100;
clk = 1;
#100;
clk = 0;
//TEST DIVIDE
Data_A = 16'h0f0f;
Data_B = 16'h0101;       
OpCode = 4'b0011;
Div = 1;
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
 //TEST RealOP
Data_A = 16'h7855;
Data_B = 16'h0202;       
OpCode = 4'b0100;
Div = 0;
#100;
clk = 1;
#100;
clk = 0; 
OpCode = 4'b0101;
#100;
clk = 1;
#100;
clk = 0;
//LESS Comp
Data_A = 16'h0708;
Data_B = 16'h0908;
OpCode = LESS_COMP;
B = 1;
#100;
clk = 1;
#100;
clk = 0;
//GREATER COMP
Data_A = 16'h0708;
Data_B = 16'h0908;
OpCode = GREAT_COMP;
B = 1;
#100;
clk = 1;
#100;
clk = 0;
//JUMP
B = 0;
J = 1;
#100;
clk = 1;
#100;
clk = 0;
//STORE Result = a
Data_A = 16'h0005;
C_Reg = 8'h05;
B_Reg = 8'h50;
OpCode = MEM_ACCESS;
Store = 1;
Mem = 1;
#100;
clk = 1;
#100;
clk = 0;
//LOAD
Store = 0;
#100;
clk = 1;
#100;
clk = 0;
A_Reg = 8'h70;
B_Reg = 8'h07;
Im = 1;
#100;
clk = 1;
#100;
clk = 0;
Im = 0;     
	end
      
endmodule

