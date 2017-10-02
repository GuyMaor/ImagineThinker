
`timescale 1ns / 1ps


module ALU(A1,A2,B1,B2,Op,Out1,Out2,CompReg,clk);
	 parameter NUMBER_SIZE = 8;
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
	 parameter [OP_SIZE-1:0] MEM_ACCESS = 4'b1111;
	 //Move
	 parameter [OP_SIZE-1:0] MOVE = 4'b0111;
	 //TRUE/FALSE constants
	 parameter [NUMBER_SIZE-1:0] TRUE = 8'b11111111;
	 parameter [NUMBER_SIZE-1:0] FALSE = 8'b00000000;
	 //Actual Data
    input [NUMBER_SIZE-1:0] A1;
	 input [NUMBER_SIZE-1:0] A2;
    input [NUMBER_SIZE-1:0] B1;
    input [NUMBER_SIZE-1:0] B2;	 	 
    input [OP_SIZE-1:0] Op;
	 input clk;
    output [NUMBER_SIZE-1:0] Out1;
	 output [NUMBER_SIZE-1:0] Out2;
    output CompReg;
    reg [NUMBER_SIZE-1:0] Out1;
    reg [NUMBER_SIZE-1:0] Out2;
    reg CompReg;
	 wire [NUMBER_SIZE*2-1:0] MemSum;
	 assign MemSum = $signed({A1,A2})+$signed({B1,B2});

	 initial
		CompReg = 0;
	 
always @ (A1,A2,B1,B2,Op)
begin
	case(Op)
		ADD_OP : 
		begin
			Out1 = A1+B1;
			Out2 = A2+B2;
		end
		SUB_OP :
		begin
			Out1 = A1-B1;
			Out2 = A2-B2;
		end
		MUL_OP :
		begin
			Out1 = $signed(A1*B1) - $signed(A2*B2);
			Out2 = $signed(A1*B2) + $signed(A2*B1);
		end
		REAL_OP:
		begin
			Out1 = A1;
			Out2 = 8'd0;
		end
		IMAGINE_OP:
		begin
			Out1 = A2;
			Out2 = 8'd0;
		end
		CONJ_OP:
		begin
			Out1 = A1;
			Out2 = -A2;
		end
		LESS_COMP:
		begin
			if(A1<B1)
			begin
				Out1 = TRUE;
				Out2 = TRUE;
			end
			else
			begin
				Out1 = FALSE;
				Out2 = FALSE;
			end
		end 
		EQUAL_COMP:
		begin
			if((A1==B1)&&(A2==B2))
			begin
				Out1 = TRUE;
				Out2 = TRUE;
			end
			else
			begin
				Out1 = FALSE;
				Out2 = FALSE;
			end
		end 
		LORE_COMP:
		begin
			if(A1<=B1)
			begin
				Out1 = TRUE;
				Out2 = TRUE;
			end
			else
			begin
				Out1 = FALSE;
				Out2 = FALSE;
			end
		end 
		GREAT_COMP:
		begin
			if(A1>B1)
			begin
				Out1 = TRUE;
				Out2 = TRUE;
			end
			else
			begin
				Out1 = FALSE;
				Out2 = FALSE;
			end
		end 
		NEQUAL_COMP:
		begin
			if((A1!=B1)||(A2!=B2))
			begin
				Out1 = TRUE;
				Out2 = TRUE;
			end
			else
			begin
				Out1 = FALSE;
				Out2 = FALSE;
			end
		end 
		GORE_COMP:
		begin
			if(A1>=B1)
			begin
				Out1 = TRUE;
				Out2 = TRUE;
			end
			else
			begin
				Out1 = FALSE;
				Out2 = FALSE;
			end
		end
		MEM_ACCESS:
		begin
			Out1 = MemSum[NUMBER_SIZE*2-1:NUMBER_SIZE];
			Out2 = MemSum[NUMBER_SIZE-1:0];
		end
		MOVE:
		begin
			Out1 = A1;
			Out2 = A2;
		end
		default: 
		begin
			Out1 = FALSE;
			Out2 = FALSE;
		end
	endcase
end

always @ (posedge clk)
begin
	case(Op)
		LESS_COMP : CompReg = A1<B1;
		EQUAL_COMP : CompReg = (A1==B1)&&(A2==B2);
		LORE_COMP : CompReg = A1<=B1;
		GREAT_COMP : CompReg = A1>B1;
		NEQUAL_COMP : CompReg = (A1!=B1)||(A2!=B2);
		GORE_COMP : CompReg = A1>=B1;
		default : CompReg = CompReg;
	endcase
end
	 
endmodule