
import "BDPI" function Bit#(8) my_and (Bit#(8) x, Bit#(8) y);

import "BDPI" function Bit#(8) my_C_or (Bit#(8) x, Bit#(8) y);


import "BDPI" function ActionValue#(Bit#(8)) get_input;



(* synthesize *)
module mkTestbench();
  Reg#(Bit#(8)) r1 <- mkReg(0);
   rule r;
      let v1 = my_and(1,2);
      let v2 = my_C_or(1,3);
      my_display(v1);
      my_display(v2);
      let a <- get_input;
      r1 <= a;
      //my_display();
      $finish(0);
   endrule
endmodule
