import StmtFSM::*;

import "BDPI" function ActionValue#(Bit#(64)) branch_pred_req;
import "BDPI" function Action branch_pred_resp(Bit#(8) taken);
import "BDPI" function ActionValue#(BranchUpdateInfo) branch_update_req();
import "BDPI" function Action set_file_descriptors;
import "BDPI" function Action debug;

typedef struct {
    Bit#(64) ip;
    Bit#(64) target;
    Bit#(8) taken;
    Bit#(8) branch_type;
} BranchUpdateInfo deriving(Bits, Eq, FShow);


(* synthesize *)
module mkTestbench();

    function Bit#(8) predict(Bit#(64) ip);
      return 8'd1;
    endfunction

    Reg#(Bit#(64)) branch <- mkReg(0);
    Reg#(Bit#(8)) prediction <- mkReg(0);
    Reg#(BranchUpdateInfo) update <- mkReg(?);
    Stmt stmt = seq 
        set_file_descriptors;
        par
            while(True) seq
              action let a <- branch_pred_req; branch <= a; endaction
              action prediction <= predict(branch); endaction
              branch_pred_resp(prediction);
            endseq

            while(True) seq
              action let a <- branch_update_req; update <= a; endaction  
            endseq
        endpar
        //my_display(b);
    endseq;

FSM testfsm <- mkFSM(stmt);

rule init;
   testfsm.start;
endrule

endmodule
