/*
 * Generated by Bluespec Compiler, version 2024.01 (build ae2a2fc6)
 * 
 * On Thu Oct  3 15:48:36 BST 2024
 * 
 */

/* Generation options: keep-fires */
#ifndef __mkTestbench_h__
#define __mkTestbench_h__

#include "bluesim_types.h"
#include "bs_module.h"
#include "bluesim_primitives.h"
#include "bs_vcd.h"


/* Class declaration for the mkTestbench module */
class MOD_mkTestbench : public Module {
 
 /* Clock handles */
 private:
  tClock __clk_handle_0;
 
 /* Clock gate handles */
 public:
  tUInt8 *clk_gate[0];
 
 /* Instantiation parameters */
 public:
 
 /* Module state */
 public:
  MOD_Reg<tUInt64> INST_branch;
  MOD_Reg<tUInt8> INST_prediction;
  MOD_Wire<tUInt8> INST_testfsm_abort;
  MOD_Reg<tUInt8> INST_testfsm_start_reg;
  MOD_Reg<tUInt8> INST_testfsm_start_reg_1;
  MOD_Wire<tUInt8> INST_testfsm_start_reg_2;
  MOD_Wire<tUInt8> INST_testfsm_start_wire;
  MOD_Reg<tUInt8> INST_testfsm_state_can_overlap;
  MOD_Reg<tUInt8> INST_testfsm_state_fired;
  MOD_Wire<tUInt8> INST_testfsm_state_fired_1;
  MOD_ConfigReg<tUInt8> INST_testfsm_state_mkFSMstate;
  MOD_Wire<tUInt8> INST_testfsm_state_overlap_pw;
  MOD_Wire<tUInt8> INST_testfsm_state_set_pw;
  MOD_Reg<tUWide> INST_update;
 
 /* Constructor */
 public:
  MOD_mkTestbench(tSimStateHdl simHdl, char const *name, Module *parent);
 
 /* Symbol init methods */
 private:
  void init_symbols_0();
 
 /* Reset signal definitions */
 private:
  tUInt8 PORT_RST_N;
 
 /* Port definitions */
 public:
 
 /* Publicly accessible definitions */
 public:
  tUInt8 DEF_WILL_FIRE___me_check_8;
  tUInt8 DEF_CAN_FIRE___me_check_8;
  tUInt8 DEF_WILL_FIRE___me_check_7;
  tUInt8 DEF_CAN_FIRE___me_check_7;
  tUInt8 DEF_WILL_FIRE___me_check_6;
  tUInt8 DEF_CAN_FIRE___me_check_6;
  tUInt8 DEF_WILL_FIRE___me_check_5;
  tUInt8 DEF_CAN_FIRE___me_check_5;
  tUInt8 DEF_WILL_FIRE_RL_init;
  tUInt8 DEF_CAN_FIRE_RL_init;
  tUInt8 DEF_WILL_FIRE_RL_testfsm_fsm_start;
  tUInt8 DEF_CAN_FIRE_RL_testfsm_fsm_start;
  tUInt8 DEF_WILL_FIRE_RL_testfsm_action_l50c31;
  tUInt8 DEF_CAN_FIRE_RL_testfsm_action_l50c31;
  tUInt8 DEF_WILL_FIRE_RL_testfsm_action_l49c15;
  tUInt8 DEF_CAN_FIRE_RL_testfsm_action_l49c15;
  tUInt8 DEF_WILL_FIRE_RL_testfsm_action_l48c15;
  tUInt8 DEF_CAN_FIRE_RL_testfsm_action_l48c15;
  tUInt8 DEF_WILL_FIRE_RL_testfsm_action_l47c33;
  tUInt8 DEF_CAN_FIRE_RL_testfsm_action_l47c33;
  tUInt8 DEF_WILL_FIRE_RL_testfsm_action_l44c29;
  tUInt8 DEF_CAN_FIRE_RL_testfsm_action_l44c29;
  tUInt8 DEF_WILL_FIRE_RL_testfsm_restart;
  tUInt8 DEF_CAN_FIRE_RL_testfsm_restart;
  tUInt8 DEF_WILL_FIRE_RL_testfsm_state_every;
  tUInt8 DEF_CAN_FIRE_RL_testfsm_state_every;
  tUInt8 DEF_WILL_FIRE_RL_testfsm_state_fired__dreg_update;
  tUInt8 DEF_CAN_FIRE_RL_testfsm_state_fired__dreg_update;
  tUInt8 DEF_WILL_FIRE_RL_testfsm_state_handle_abort;
  tUInt8 DEF_CAN_FIRE_RL_testfsm_state_handle_abort;
  tUInt8 DEF_WILL_FIRE_RL_testfsm_start_reg__dreg_update;
  tUInt8 DEF_CAN_FIRE_RL_testfsm_start_reg__dreg_update;
 
 /* Local definitions */
 private:
  tUInt64 DEF_b__h13412;
 
 /* Rules */
 public:
  void RL_testfsm_start_reg__dreg_update();
  void RL_testfsm_state_handle_abort();
  void RL_testfsm_state_fired__dreg_update();
  void RL_testfsm_state_every();
  void RL_testfsm_restart();
  void RL_testfsm_action_l44c29();
  void RL_testfsm_action_l47c33();
  void RL_testfsm_action_l48c15();
  void RL_testfsm_action_l49c15();
  void RL_testfsm_action_l50c31();
  void RL_testfsm_fsm_start();
  void RL_init();
  void __me_check_5();
  void __me_check_6();
  void __me_check_7();
  void __me_check_8();
 
 /* Methods */
 public:
 
 /* Reset routines */
 public:
  void reset_RST_N(tUInt8 ARG_rst_in);
 
 /* Static handles to reset routines */
 public:
 
 /* Pointers to reset fns in parent module for asserting output resets */
 private:
 
 /* Functions for the parent module to register its reset fns */
 public:
 
 /* Functions to set the elaborated clock id */
 public:
  void set_clk_0(char const *s);
 
 /* State dumping routine */
 public:
  void dump_state(unsigned int indent);
 
 /* VCD dumping routines */
 public:
  unsigned int dump_VCD_defs(unsigned int levels);
  void dump_VCD(tVCDDumpType dt, unsigned int levels, MOD_mkTestbench &backing);
  void vcd_defs(tVCDDumpType dt, MOD_mkTestbench &backing);
  void vcd_prims(tVCDDumpType dt, MOD_mkTestbench &backing);
};

#endif /* ifndef __mkTestbench_h__ */
