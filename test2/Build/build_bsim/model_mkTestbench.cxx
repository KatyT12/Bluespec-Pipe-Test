/*
 * Generated by Bluespec Compiler, version 2024.01 (build ae2a2fc6)
 * 
 * On Wed Oct  2 16:58:33 BST 2024
 * 
 */
#include "bluesim_primitives.h"
#include "model_mkTestbench.h"

#include <cstdlib>
#include <time.h>
#include "bluesim_kernel_api.h"
#include "bs_vcd.h"
#include "bs_reset.h"


/* Constructor */
MODEL_mkTestbench::MODEL_mkTestbench()
{
  mkTestbench_instance = NULL;
}

/* Function for creating a new model */
void * new_MODEL_mkTestbench()
{
  MODEL_mkTestbench *model = new MODEL_mkTestbench();
  return (void *)(model);
}

/* Schedule functions */

static void schedule_posedge_CLK(tSimStateHdl simHdl, void *instance_ptr)
       {
	 MOD_mkTestbench &INST_top = *((MOD_mkTestbench *)(instance_ptr));
	 tUInt8 DEF_INST_top_DEF_testfsm_abort_whas_AND_testfsm_abort_wget_OR_t_ETC___d49;
	 tUInt8 DEF_INST_top_DEF_testfsm_abort_whas_AND_testfsm_abort_wget___d6;
	 tUInt8 DEF_INST_top_DEF_NOT_testfsm_start_wire_whas_OR_NOT_testfsm_sta_ETC___d11;
	 tUInt8 DEF_INST_top_DEF_NOT_testfsm_abort_whas_6_OR_NOT_testfsm_abort__ETC___d28;
	 tUInt8 DEF_INST_top_DEF_testfsm_abort_whas_AND_testfsm_abort_wget_OR_t_ETC___d35;
	 tUInt8 DEF_INST_top_DEF_testfsm_state_mkFSMstate_read__1_EQ_4___d34;
	 tUInt8 DEF_INST_top_DEF_testfsm_start_reg__h9718;
	 tUInt8 DEF_INST_top_DEF_testfsm_start_wire_wget____d9;
	 tUInt8 DEF_INST_top_DEF_testfsm_start_wire_whas____d7;
	 tUInt8 DEF_INST_top_DEF_testfsm_start_reg_1__h8467;
	 tUInt8 DEF_INST_top_DEF_testfsm_abort_wget____d5;
	 tUInt8 DEF_INST_top_DEF_testfsm_abort_whas____d4;
	 tUInt8 DEF_INST_top_DEF_testfsm_state_fired__h8469;
	 tUInt8 DEF_INST_top_DEF_testfsm_state_mkFSMstate_read____d31;
	 DEF_INST_top_DEF_testfsm_state_mkFSMstate_read____d31 = INST_top.INST_testfsm_state_mkFSMstate.METH_read();
	 DEF_INST_top_DEF_testfsm_state_fired__h8469 = INST_top.INST_testfsm_state_fired.METH_read();
	 DEF_INST_top_DEF_testfsm_abort_whas____d4 = INST_top.INST_testfsm_abort.METH_whas();
	 DEF_INST_top_DEF_testfsm_abort_wget____d5 = INST_top.INST_testfsm_abort.METH_wget();
	 DEF_INST_top_DEF_testfsm_start_reg_1__h8467 = INST_top.INST_testfsm_start_reg_1.METH_read();
	 DEF_INST_top_DEF_testfsm_start_reg__h9718 = INST_top.INST_testfsm_start_reg.METH_read();
	 DEF_INST_top_DEF_testfsm_state_mkFSMstate_read__1_EQ_4___d34 = DEF_INST_top_DEF_testfsm_state_mkFSMstate_read____d31 == (tUInt8)4u;
	 DEF_INST_top_DEF_testfsm_abort_whas_AND_testfsm_abort_wget___d6 = DEF_INST_top_DEF_testfsm_abort_whas____d4 && DEF_INST_top_DEF_testfsm_abort_wget____d5;
	 DEF_INST_top_DEF_testfsm_abort_whas_AND_testfsm_abort_wget_OR_t_ETC___d35 = (DEF_INST_top_DEF_testfsm_abort_whas_AND_testfsm_abort_wget___d6 || DEF_INST_top_DEF_testfsm_state_mkFSMstate_read____d31 == (tUInt8)0u) || DEF_INST_top_DEF_testfsm_state_mkFSMstate_read__1_EQ_4___d34;
	 DEF_INST_top_DEF_testfsm_abort_whas_AND_testfsm_abort_wget_OR_t_ETC___d49 = DEF_INST_top_DEF_testfsm_abort_whas_AND_testfsm_abort_wget_OR_t_ETC___d35 && (!DEF_INST_top_DEF_testfsm_start_reg_1__h8467 || DEF_INST_top_DEF_testfsm_state_fired__h8469);
	 INST_top.DEF_CAN_FIRE_RL_init = DEF_INST_top_DEF_testfsm_abort_whas_AND_testfsm_abort_wget_OR_t_ETC___d49 && !DEF_INST_top_DEF_testfsm_start_reg__h9718;
	 INST_top.DEF_WILL_FIRE_RL_init = INST_top.DEF_CAN_FIRE_RL_init;
	 DEF_INST_top_DEF_NOT_testfsm_abort_whas_6_OR_NOT_testfsm_abort__ETC___d28 = !DEF_INST_top_DEF_testfsm_abort_whas____d4 || !DEF_INST_top_DEF_testfsm_abort_wget____d5;
	 INST_top.DEF_CAN_FIRE_RL_testfsm_action_l17c9 = DEF_INST_top_DEF_NOT_testfsm_abort_whas_6_OR_NOT_testfsm_abort__ETC___d28 && DEF_INST_top_DEF_testfsm_state_mkFSMstate_read____d31 == (tUInt8)1u;
	 INST_top.DEF_WILL_FIRE_RL_testfsm_action_l17c9 = INST_top.DEF_CAN_FIRE_RL_testfsm_action_l17c9;
	 INST_top.DEF_CAN_FIRE_RL_testfsm_action_l19c9 = DEF_INST_top_DEF_NOT_testfsm_abort_whas_6_OR_NOT_testfsm_abort__ETC___d28 && DEF_INST_top_DEF_testfsm_state_mkFSMstate_read____d31 == (tUInt8)2u;
	 INST_top.DEF_WILL_FIRE_RL_testfsm_action_l19c9 = INST_top.DEF_CAN_FIRE_RL_testfsm_action_l19c9;
	 INST_top.DEF_CAN_FIRE_RL_testfsm_action_l21c7 = DEF_INST_top_DEF_NOT_testfsm_abort_whas_6_OR_NOT_testfsm_abort__ETC___d28 && DEF_INST_top_DEF_testfsm_state_mkFSMstate_read____d31 == (tUInt8)3u;
	 INST_top.DEF_WILL_FIRE_RL_testfsm_action_l21c7 = INST_top.DEF_CAN_FIRE_RL_testfsm_action_l21c7;
	 INST_top.DEF_CAN_FIRE_RL_testfsm_restart = (DEF_INST_top_DEF_testfsm_start_reg_1__h8467 && !DEF_INST_top_DEF_testfsm_state_fired__h8469) && DEF_INST_top_DEF_NOT_testfsm_abort_whas_6_OR_NOT_testfsm_abort__ETC___d28;
	 INST_top.DEF_WILL_FIRE_RL_testfsm_restart = INST_top.DEF_CAN_FIRE_RL_testfsm_restart;
	 INST_top.DEF_CAN_FIRE_RL_testfsm_fsm_start = DEF_INST_top_DEF_testfsm_abort_whas_AND_testfsm_abort_wget_OR_t_ETC___d49 && DEF_INST_top_DEF_testfsm_start_reg__h9718;
	 INST_top.DEF_WILL_FIRE_RL_testfsm_fsm_start = INST_top.DEF_CAN_FIRE_RL_testfsm_fsm_start;
	 INST_top.DEF_CAN_FIRE_RL_testfsm_start_reg__dreg_update = (tUInt8)1u;
	 INST_top.DEF_WILL_FIRE_RL_testfsm_start_reg__dreg_update = INST_top.DEF_CAN_FIRE_RL_testfsm_start_reg__dreg_update;
	 INST_top.DEF_CAN_FIRE_RL_testfsm_state_every = (tUInt8)1u;
	 INST_top.DEF_WILL_FIRE_RL_testfsm_state_every = INST_top.DEF_CAN_FIRE_RL_testfsm_state_every;
	 INST_top.DEF_CAN_FIRE___me_check_5 = (tUInt8)1u;
	 INST_top.DEF_WILL_FIRE___me_check_5 = INST_top.DEF_CAN_FIRE___me_check_5;
	 INST_top.DEF_CAN_FIRE_RL_testfsm_state_fired__dreg_update = (tUInt8)1u;
	 INST_top.DEF_WILL_FIRE_RL_testfsm_state_fired__dreg_update = INST_top.DEF_CAN_FIRE_RL_testfsm_state_fired__dreg_update;
	 INST_top.DEF_CAN_FIRE___me_check_6 = (tUInt8)1u;
	 INST_top.DEF_WILL_FIRE___me_check_6 = INST_top.DEF_CAN_FIRE___me_check_6;
	 INST_top.DEF_CAN_FIRE___me_check_7 = (tUInt8)1u;
	 INST_top.DEF_WILL_FIRE___me_check_7 = INST_top.DEF_CAN_FIRE___me_check_7;
	 if (INST_top.DEF_WILL_FIRE_RL_init)
	   INST_top.RL_init();
	 if (INST_top.DEF_WILL_FIRE_RL_testfsm_action_l17c9)
	   INST_top.RL_testfsm_action_l17c9();
	 if (INST_top.DEF_WILL_FIRE_RL_testfsm_action_l19c9)
	   INST_top.RL_testfsm_action_l19c9();
	 if (INST_top.DEF_WILL_FIRE_RL_testfsm_action_l21c7)
	   INST_top.RL_testfsm_action_l21c7();
	 if (INST_top.DEF_WILL_FIRE_RL_testfsm_restart)
	   INST_top.RL_testfsm_restart();
	 if (INST_top.DEF_WILL_FIRE___me_check_6)
	   INST_top.__me_check_6();
	 if (INST_top.DEF_WILL_FIRE___me_check_7)
	   INST_top.__me_check_7();
	 if (INST_top.DEF_WILL_FIRE_RL_testfsm_fsm_start)
	   INST_top.RL_testfsm_fsm_start();
	 DEF_INST_top_DEF_testfsm_start_wire_whas____d7 = INST_top.INST_testfsm_start_wire.METH_whas();
	 DEF_INST_top_DEF_testfsm_start_wire_wget____d9 = INST_top.INST_testfsm_start_wire.METH_wget();
	 INST_top.DEF_CAN_FIRE_RL_testfsm_action_l16c19 = ((DEF_INST_top_DEF_testfsm_start_wire_whas____d7 && DEF_INST_top_DEF_testfsm_start_wire_wget____d9) && DEF_INST_top_DEF_testfsm_abort_whas_AND_testfsm_abort_wget_OR_t_ETC___d35) && !((INST_top.DEF_CAN_FIRE_RL_testfsm_action_l21c7 || INST_top.DEF_CAN_FIRE_RL_testfsm_action_l19c9) || INST_top.DEF_CAN_FIRE_RL_testfsm_action_l17c9);
	 INST_top.DEF_WILL_FIRE_RL_testfsm_action_l16c19 = INST_top.DEF_CAN_FIRE_RL_testfsm_action_l16c19;
	 DEF_INST_top_DEF_NOT_testfsm_start_wire_whas_OR_NOT_testfsm_sta_ETC___d11 = !DEF_INST_top_DEF_testfsm_start_wire_whas____d7 || !DEF_INST_top_DEF_testfsm_start_wire_wget____d9;
	 INST_top.DEF_CAN_FIRE_RL_testfsm_idle_l15c17 = (DEF_INST_top_DEF_NOT_testfsm_start_wire_whas_OR_NOT_testfsm_sta_ETC___d11 && (DEF_INST_top_DEF_NOT_testfsm_abort_whas_6_OR_NOT_testfsm_abort__ETC___d28 && DEF_INST_top_DEF_testfsm_state_mkFSMstate_read__1_EQ_4___d34)) && !((INST_top.DEF_CAN_FIRE_RL_testfsm_action_l21c7 || INST_top.DEF_CAN_FIRE_RL_testfsm_action_l19c9) || INST_top.DEF_CAN_FIRE_RL_testfsm_action_l17c9);
	 INST_top.DEF_WILL_FIRE_RL_testfsm_idle_l15c17 = INST_top.DEF_CAN_FIRE_RL_testfsm_idle_l15c17;
	 INST_top.DEF_CAN_FIRE_RL_testfsm_state_handle_abort = (DEF_INST_top_DEF_testfsm_abort_whas_AND_testfsm_abort_wget___d6 && DEF_INST_top_DEF_NOT_testfsm_start_wire_whas_OR_NOT_testfsm_sta_ETC___d11) && !((INST_top.DEF_CAN_FIRE_RL_testfsm_action_l21c7 || INST_top.DEF_CAN_FIRE_RL_testfsm_action_l19c9) || (INST_top.DEF_CAN_FIRE_RL_testfsm_action_l17c9 || INST_top.DEF_CAN_FIRE_RL_testfsm_restart));
	 INST_top.DEF_WILL_FIRE_RL_testfsm_state_handle_abort = INST_top.DEF_CAN_FIRE_RL_testfsm_state_handle_abort;
	 if (INST_top.DEF_WILL_FIRE_RL_testfsm_action_l16c19)
	   INST_top.RL_testfsm_action_l16c19();
	 if (INST_top.DEF_WILL_FIRE_RL_testfsm_start_reg__dreg_update)
	   INST_top.RL_testfsm_start_reg__dreg_update();
	 if (INST_top.DEF_WILL_FIRE_RL_testfsm_state_handle_abort)
	   INST_top.RL_testfsm_state_handle_abort();
	 if (INST_top.DEF_WILL_FIRE___me_check_5)
	   INST_top.__me_check_5();
	 if (INST_top.DEF_WILL_FIRE_RL_testfsm_idle_l15c17)
	   INST_top.RL_testfsm_idle_l15c17();
	 if (INST_top.DEF_WILL_FIRE_RL_testfsm_state_every)
	   INST_top.RL_testfsm_state_every();
	 if (INST_top.DEF_WILL_FIRE_RL_testfsm_state_fired__dreg_update)
	   INST_top.RL_testfsm_state_fired__dreg_update();
	 INST_top.INST_testfsm_state_fired_1.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_testfsm_state_overlap_pw.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_testfsm_state_set_pw.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_testfsm_abort.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_testfsm_start_reg_2.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_testfsm_start_wire.clk((tUInt8)1u, (tUInt8)1u);
	 if (do_reset_ticks(simHdl))
	 {
	   INST_top.INST_p.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_testfsm_start_reg.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_testfsm_start_reg_1.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_testfsm_state_mkFSMstate.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_testfsm_state_fired.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_testfsm_state_can_overlap.rst_tick__clk__1((tUInt8)1u);
	 }
       };

/* Model creation/destruction functions */

void MODEL_mkTestbench::create_model(tSimStateHdl simHdl, bool master)
{
  sim_hdl = simHdl;
  init_reset_request_counters(sim_hdl);
  mkTestbench_instance = new MOD_mkTestbench(sim_hdl, "top", NULL);
  bk_get_or_define_clock(sim_hdl, "CLK");
  if (master)
  {
    bk_alter_clock(sim_hdl, bk_get_clock_by_name(sim_hdl, "CLK"), CLK_LOW, false, 0llu, 5llu, 5llu);
    bk_use_default_reset(sim_hdl);
  }
  bk_set_clock_event_fn(sim_hdl,
			bk_get_clock_by_name(sim_hdl, "CLK"),
			schedule_posedge_CLK,
			NULL,
			(tEdgeDirection)(POSEDGE));
  (mkTestbench_instance->INST_testfsm_start_wire.set_clk_0)("CLK");
  (mkTestbench_instance->INST_testfsm_start_reg_2.set_clk_0)("CLK");
  (mkTestbench_instance->INST_testfsm_abort.set_clk_0)("CLK");
  (mkTestbench_instance->INST_testfsm_state_set_pw.set_clk_0)("CLK");
  (mkTestbench_instance->INST_testfsm_state_overlap_pw.set_clk_0)("CLK");
  (mkTestbench_instance->INST_testfsm_state_fired_1.set_clk_0)("CLK");
  (mkTestbench_instance->set_clk_0)("CLK");
}
void MODEL_mkTestbench::destroy_model()
{
  delete mkTestbench_instance;
  mkTestbench_instance = NULL;
}
void MODEL_mkTestbench::reset_model(bool asserted)
{
  (mkTestbench_instance->reset_RST_N)(asserted ? (tUInt8)0u : (tUInt8)1u);
}
void * MODEL_mkTestbench::get_instance()
{
  return mkTestbench_instance;
}

/* Fill in version numbers */
void MODEL_mkTestbench::get_version(char const **name, char const **build)
{
  *name = "2024.01";
  *build = "ae2a2fc6";
}

/* Get the model creation time */
time_t MODEL_mkTestbench::get_creation_time()
{
  
  /* Wed Oct  2 15:58:33 UTC 2024 */
  return 1727884713llu;
}

/* State dumping function */
void MODEL_mkTestbench::dump_state()
{
  (mkTestbench_instance->dump_state)(0u);
}

/* VCD dumping functions */
MOD_mkTestbench & mkTestbench_backing(tSimStateHdl simHdl)
{
  static MOD_mkTestbench *instance = NULL;
  if (instance == NULL)
  {
    vcd_set_backing_instance(simHdl, true);
    instance = new MOD_mkTestbench(simHdl, "top", NULL);
    vcd_set_backing_instance(simHdl, false);
  }
  return *instance;
}
void MODEL_mkTestbench::dump_VCD_defs()
{
  (mkTestbench_instance->dump_VCD_defs)(vcd_depth(sim_hdl));
}
void MODEL_mkTestbench::dump_VCD(tVCDDumpType dt)
{
  (mkTestbench_instance->dump_VCD)(dt, vcd_depth(sim_hdl), mkTestbench_backing(sim_hdl));
}
