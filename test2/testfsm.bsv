
import "BDPI" function Bit#(8) my_and (Bit#(8) x, Bit#(8) y);

import "BDPI" function Bit#(8) my_C_or (Bit#(8) x, Bit#(8) y);

import "BDPI" function Action my_display (Bit#(8) x);

import "BDPI" function ActionValue#(Bit#(8)) get_input;

import StmtFSM::*;

(* synthesize *)
module mkTestbench();
    Reg#(Bit#(8)) p <- mkReg(0);
    Stmt stmt = seq
        my_display(1); 
        action let a <- get_input; p <= a; endaction
        //action let b = $IN; endaction
        action my_display(p); endaction
        //my_display(b);
      $finish();
    endseq;

FSM testfsm <- mkFSM(stmt);

rule init;
   testfsm.start;
endrule


endmodule
