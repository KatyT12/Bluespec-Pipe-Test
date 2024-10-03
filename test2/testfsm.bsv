import StmtFSM::*;

import "BDPI" function ActionValue#(UInt#(64)) branch_pred_req;
import "BDPI" function Action branch_pred_resp(Bit#(8) taken);
import "BDPI" function ActionValue#(Bit#(160)) branch_update_req();
import "BDPI" function Action set_file_descriptors;
import "BDPI" function Action debug;

typedef struct {
    UInt#(64) ip;
    UInt#(64) target;
    UInt#(8) taken;
    UInt#(8) branch_type;
} BranchUpdateInfo deriving(Bits, Eq, FShow);


(* synthesize *)
module mkTestbench();

    function Bit#(8) predict(UInt#(64) ip);
      return 8'd1;
    endfunction

    function BranchUpdateInfo convertUpdate(Bit#(160) b);
      UInt#(64) ip = unpack(b[63:0]);
      UInt#(64) target = unpack(b[127:64]);
      UInt#(8) taken = unpack(b[135:128]);
      UInt#(8) branch_type = unpack(b[143:136]);
      return BranchUpdateInfo{ip: ip, target: target, taken: taken, branch_type: branch_type};
    endfunction

    function Action debugUpdate(BranchUpdateInfo b);
      $display("IP: %d, target : %d, taken: %d, Type %d:", b.ip, b.target, b.taken, b.branch_type);
    endfunction

    function Action debugPredictionReq(UInt#(64) ip);
      $display("IP: %d", ip);
    endfunction

    Reg#(UInt#(64)) branch <- mkReg(0);
    Reg#(Bit#(8)) prediction <- mkReg(0);
    Reg#(Bit#(160)) update <- mkReg(0);
    Stmt stmt = seq 
        set_file_descriptors;
        par
            while(True) seq
              action let a <- branch_pred_req; branch <= a; endaction
              action prediction <= predict(branch); endaction
              branch_pred_resp(prediction);
            endseq

            /*while(True) seq
              action let a <- branch_update_req; update <= a; endaction  
              debugUpdate(convertUpdate(update));
            endseq*/
        endpar
        //my_display(b);
    endseq;

FSM testfsm <- mkFSM(stmt);

rule init;
   testfsm.start;
endrule

endmodule
