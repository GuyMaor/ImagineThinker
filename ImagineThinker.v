`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:12:58 09/27/2017 
// Design Name: 
// Module Name:    ImagineThinker 
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
//module ImagineThinker(clk,PeripheralBuffer);
module ImagineThinker(clk,PeripheralBuffer,PC,nextInst);//DEMO
	 output PC,nextInst;//DEMO
//module ImagineThinker(clk,PeripheralBuffer,PC,nextInst,J,Jo2,Co,Co2,Bo,B_Rego2,BranchAmmount,shouldJump,Data_In,DATA_Bo2,DATA_Ao2,ALU_Resulto3,Storeo2,Divo2,Imo2,Memo2,Opo,WE,inData);//DEBUG
//	 output PC,nextInst,J,Jo2,Co,Co2,Bo,B_Rego2,BranchAmmount,shouldJump,Data_In,DATA_Bo2,DATA_Ao2,ALU_Resulto3,Storeo2,Divo2,Imo2,Memo2,Opo,WE,inData;//DEBUG
    input clk;
	 wire stall;//ALL STAGE
	 wire [15:0] BranchAmmount;//EX Stage
	 wire shouldJump;//EX Stage
	 wire [15:0] dataAddr;//MemStage
	 wire [15:0] dataOut;//Mem Stage
	 wire [15:0] inData;//Mem Stage
	 wire memWE; //Mem Stage
	 wire [15:0] Data_In;//WB Stage
	 wire [7:0] Addr_In;//WB Stage
	 wire WE;//WB Stage
	 output [15:0] PeripheralBuffer;
	 wire [15:0] PeripheralBuffer;
	 
	 wire [15:0] PC;
	 PC_MOD pc(shouldJump,BranchAmmount,clk,PC,stall);
	 wire [31:0] nextInst;
	 RAM ram(clk, dataAddr, PC, dataOut, nextInst, inData,memWE,PeripheralBuffer);
	 wire [7:0] Opo;
	 wire [7:0] Ao;
	 wire [7:0] Bo;
	 wire [7:0] Co;
	 Inst_Reg instReg(nextInst[31:24],nextInst[23:16],nextInst[15:8],nextInst[7:0],Opo,Ao,Bo,Co,stall,clk);
	 wire J,B,Mem,Store,Div,Im,MWE,Mux,RWE;
	 Decoder dec(Opo,J,B,Mem,Store,Div,Im,MWE,Mux,RWE);
	 wire [15:0] DATA_A;
	 wire [15:0] DATA_B;
    Reg_Block regBlock(Ao,Bo,Addr_In,Data_In,WE,DATA_A,DATA_B,clk);
	 wire Jo2,Bo2,Memo2,Storeo2,Divo2,Imo2,MWEo2,Muxo2,RWEo2;
	 wire [15:0] DATA_Ao2;
	 wire [15:0] DATA_Bo2;
	 wire [7:0]Ao2;
	 wire [7:0]B_Rego2;
	 wire [7:0]Co2;
	 wire [3:0]Opo2;
	 Dec_To_Ex_Reg DTE_Reg(J,Jo2,B,Bo2,Mem,Memo2,Store,Storeo2,Div,Divo2,Im,Imo2,MWE,MWEo2,
							Mux,Muxo2,RWE,RWEo2,DATA_A,DATA_Ao2,DATA_B,DATA_Bo2,Ao,Ao2,
							Bo,B_Rego2,Co,Co2,stall,clk,Opo[3:0],Opo2);
	 wire MWEo3,Muxo3,RWEo3;
	 wire [15:0] ALU_Resulto3;
	 wire [15:0] DATA_Bo3;
	 wire [7:0] C_Rego3;
	 EX_Stage ExStage(Jo2,Bo2,Memo2,Storeo2,Divo2,Imo2,Opo2,MWEo2,Muxo2,RWEo2,DATA_Ao2,DATA_Bo2,Ao2,B_Rego2,Co2,clk,
						//shouldJump,stall,MWE_Out,Mux_Out,RWE_Out,ALU_Result,Data_B_Out,C_Reg_Out,BranchAmmount);
						shouldJump,stall,MWEo3,Muxo3,RWEo3,ALU_Resulto3,DATA_Bo3,C_Rego3,BranchAmmount);
	 wire Muxo4,RWEo4;
	 wire [7:0] C_Rego4;
	 Ex_To_Mem_Reg ETM_Reg(MWEo3,memWE,Muxo3,Muxo4,RWEo3,RWEo4,ALU_Resulto3,dataAddr,DATA_Bo3,inData,C_Rego3,C_Rego4,clk,stall);
	 wire [15:0] finalStore;
	 Data_MUX DMux(dataOut,dataAddr,Muxo4,finalStore);
	 Mem_To_WB_Reg MTW_Reg(RWEo4,WE,finalStore,Data_In,C_Rego4,Addr_In,clk,stall);
endmodule
