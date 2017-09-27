`timescale 1ns / 1ps

module Decoder(In_Code,J,B,Mem,Store,Div,Im,MWE,Mux,RWE);
    input [7:0] In_Code;
    output J;
    output B;
    output Mem;
    output Store;
    output Div;
    output Im;
    output MWE;
    output Mux;
    output RWE;
    reg J;
    reg B;
    reg Mem;
    reg Store;
    reg Div;
    reg Im;
    reg MWE;
    reg Mux;
    reg RWE;
	 
	 parameter OP_SIZE  = 8;
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
	 always @ (In_Code)
	 begin
	 case(In_Code)
	 ADD_OP:
	 begin
		J = 0;
		B = 0;
		Mem = 0;
     	Store = 0;
		Div = 0;
		Im = 0;
		MWE = 0;
		Mux = 0;
		RWE = 1;
	 end
	 SUB_OP:
	 begin
		J = 0;
		B = 0;
		Mem = 0;
     	Store = 0;
		Div = 0;
		Im = 0;
		MWE = 0;
		Mux = 0;
		RWE = 1;
	 end
	 MUL_OP:
	 begin
		J = 0;
		B = 0;
		Mem = 0;
     	Store = 0;
		Div = 0;
		Im = 0;
		MWE = 0;
		Mux = 0;
		RWE = 1;
	 end
	 DIV_OP:
	 begin
		J = 0;
		B = 0;
		Mem = 0;
     	Store = 0;
		Div = 1;
		Im = 0;
		MWE = 0;
		Mux = 0;
		RWE = 1;
	 end
	 REAL_OP:
	 begin
		J = 0;
		B = 0;
		Mem = 0;
     	Store = 0;
		Div = 0;
		Im = 0;
		MWE = 0;
		Mux = 0;
		RWE = 1;
	 end
	 IMAGINE_OP:
	 begin
		J = 0;
		B = 0;
		Mem = 0;
     	Store = 0;
		Div = 0;
		Im = 0;
		MWE = 0;
		Mux = 0;
		RWE = 1;
	 end
	 CONJ_OP:
	 begin
		J = 0;
		B = 0;
		Mem = 0;
     	Store = 0;
		Div = 0;
		Im = 0;
		MWE = 0;
		Mux = 0;
		RWE = 1;
	 end
	 IMED_LD:
	 begin
		J = 0;
		B = 0;
		Mem = 0;
     	Store = 0;
		Div = 0;
		Im = 1;
		MWE = 0;
		Mux = 0;
		RWE = 1;
	 end
	 LESS_COMP:
	 begin
		J = 0;
		B = 0;
		Mem = 0;
     	Store = 0;
		Div = 0;
		Im = 0;
		MWE = 0;
		Mux = 0;
		RWE = 0;
	 end
	 EQUAL_COMP:
	 begin
		J = 0;
		B = 0;
		Mem = 0;
     	Store = 0;
		Div = 0;
		Im = 0;
		MWE = 0;
		Mux = 0;
		RWE = 0;
	 end
	 LORE_COMP:
	 begin
		J = 0;
		B = 0;
		Mem = 0;
     	Store = 0;
		Div = 0;
		Im = 0;
		MWE = 0;
		Mux = 0;
		RWE = 0;
	 end
	 GREAT_COMP:
	 begin
		J = 0;
		B = 0;
		Mem = 0;
     	Store = 0;
		Div = 0;
		Im = 0;
		MWE = 0;
		Mux = 0;
		RWE = 0;
	 end
	 NEQUAL_COMP:
	 begin
		J = 0;
		B = 0;
		Mem = 0;
     	Store = 0;
		Div = 0;
		Im = 0;
		MWE = 0;
		Mux = 0;
		RWE = 0;
	 end
	 GORE_COMP:
	 begin
		J = 0;
		B = 0;
		Mem = 0;
     	Store = 0;
		Div = 0;
		Im = 0;
		MWE = 0;
		Mux = 0;
		RWE = 0;
	 end
	 STORE:
	 begin
		J = 0;
		B = 0;
		Mem = 1;
     	Store = 1;
		Div = 0;
		Im = 0;
		MWE = 1;
		Mux = 0;
		RWE = 0;
	 end
	 LOAD:
	 begin
		J = 0;
		B = 0;
		Mem = 1;
     	Store = 0;
		Div = 0;
		Im = 0;
		MWE = 0;
		Mux = 1;
		RWE = 1;
	 end
	 BRANCH:
	 begin
		J = 0;
		B = 1;
		Mem = 0;
     	Store = 0;
		Div = 0;
		Im = 0;
		MWE = 0;
		Mux = 0;
		RWE = 0;
	 end
	 JUMP:
	 begin
		J = 1;
		B = 0;
		Mem = 0;
     	Store = 0;
		Div = 0;
		Im = 0;
		MWE = 0;
		Mux = 0;
		RWE = 0;
	 end
	 default:
	 begin
		J = 0;
		B = 0;
		Mem = 0;
     	Store = 0;
		Div = 0;
		Im = 0;
		MWE = 0;
		Mux = 0;
		RWE = 0;
	 end
	 endcase
	 end

endmodule
