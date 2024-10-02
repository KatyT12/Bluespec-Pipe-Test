/*
 * Generated by Bluespec Compiler, version 2024.01 (build ae2a2fc6)
 * 
 * On Wed Oct  2 16:45:43 BST 2024
 * 
 */
#include "bluesim_primitives.h"
#include "mkTestbench.h"
#include "imported_BDPI_functions.h"


/* String declarations */
static std::string const __str_literal_1("Error: \"../testfsm.bsv\", line 16, column 19: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_testfsm_action_l16c19] and\n  [RL_testfsm_action_l17c9, RL_testfsm_action_l19c9, RL_testfsm_action_l21c7]\n  ) fired in the same clock cycle.\n",
					 242u);
static std::string const __str_literal_2("Error: \"../testfsm.bsv\", line 17, column 9: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_testfsm_action_l17c9] and\n  [RL_testfsm_action_l19c9, RL_testfsm_action_l21c7] ) fired in the same clock\n  cycle.\n",
					 215u);
static std::string const __str_literal_3("Error: \"../testfsm.bsv\", line 19, column 9: (R0001)\n  Mutually exclusive rules (from the ME sets [RL_testfsm_action_l19c9] and\n  [RL_testfsm_action_l21c7] ) fired in the same clock cycle.\n",
					 188u);


/* Constructor */
MOD_mkTestbench::MOD_mkTestbench(tSimStateHdl simHdl, char const *name, Module *parent)
  : Module(simHdl, name, parent),
    __clk_handle_0(BAD_CLOCK_HANDLE),
    INST_p(simHdl, "p", this, 8u, (tUInt8)0u, (tUInt8)0u),
    INST_testfsm_abort(simHdl, "testfsm_abort", this, 1u, (tUInt8)0u),
    INST_testfsm_start_reg(simHdl, "testfsm_start_reg", this, 1u, (tUInt8)0u, (tUInt8)0u),
    INST_testfsm_start_reg_1(simHdl, "testfsm_start_reg_1", this, 1u, (tUInt8)0u, (tUInt8)0u),
    INST_testfsm_start_reg_2(simHdl, "testfsm_start_reg_2", this, 1u, (tUInt8)0u),
    INST_testfsm_start_wire(simHdl, "testfsm_start_wire", this, 1u, (tUInt8)0u),
    INST_testfsm_state_can_overlap(simHdl,
				   "testfsm_state_can_overlap",
				   this,
				   1u,
				   (tUInt8)1u,
				   (tUInt8)0u),
    INST_testfsm_state_fired(simHdl, "testfsm_state_fired", this, 1u, (tUInt8)0u, (tUInt8)0u),
    INST_testfsm_state_fired_1(simHdl, "testfsm_state_fired_1", this, 1u, (tUInt8)0u),
    INST_testfsm_state_mkFSMstate(simHdl, "testfsm_state_mkFSMstate", this, 3u, (tUInt8)0u, (tUInt8)0u),
    INST_testfsm_state_overlap_pw(simHdl, "testfsm_state_overlap_pw", this, 0u),
    INST_testfsm_state_set_pw(simHdl, "testfsm_state_set_pw", this, 0u),
    PORT_RST_N((tUInt8)1u),
    DEF_v__h9133((tUInt8)170u)
{
  symbol_count = 57u;
  symbols = new tSym[symbol_count];
  init_symbols_0();
}


/* Symbol init fns */

void MOD_mkTestbench::init_symbols_0()
{
  init_symbol(&symbols[0u], "__me_check_5", SYM_RULE);
  init_symbol(&symbols[1u], "__me_check_6", SYM_RULE);
  init_symbol(&symbols[2u], "__me_check_7", SYM_RULE);
  init_symbol(&symbols[3u], "CAN_FIRE___me_check_5", SYM_DEF, &DEF_CAN_FIRE___me_check_5, 1u);
  init_symbol(&symbols[4u], "CAN_FIRE___me_check_6", SYM_DEF, &DEF_CAN_FIRE___me_check_6, 1u);
  init_symbol(&symbols[5u], "CAN_FIRE___me_check_7", SYM_DEF, &DEF_CAN_FIRE___me_check_7, 1u);
  init_symbol(&symbols[6u], "CAN_FIRE_RL_init", SYM_DEF, &DEF_CAN_FIRE_RL_init, 1u);
  init_symbol(&symbols[7u],
	      "CAN_FIRE_RL_testfsm_action_l16c19",
	      SYM_DEF,
	      &DEF_CAN_FIRE_RL_testfsm_action_l16c19,
	      1u);
  init_symbol(&symbols[8u],
	      "CAN_FIRE_RL_testfsm_action_l17c9",
	      SYM_DEF,
	      &DEF_CAN_FIRE_RL_testfsm_action_l17c9,
	      1u);
  init_symbol(&symbols[9u],
	      "CAN_FIRE_RL_testfsm_action_l19c9",
	      SYM_DEF,
	      &DEF_CAN_FIRE_RL_testfsm_action_l19c9,
	      1u);
  init_symbol(&symbols[10u],
	      "CAN_FIRE_RL_testfsm_action_l21c7",
	      SYM_DEF,
	      &DEF_CAN_FIRE_RL_testfsm_action_l21c7,
	      1u);
  init_symbol(&symbols[11u],
	      "CAN_FIRE_RL_testfsm_fsm_start",
	      SYM_DEF,
	      &DEF_CAN_FIRE_RL_testfsm_fsm_start,
	      1u);
  init_symbol(&symbols[12u],
	      "CAN_FIRE_RL_testfsm_idle_l15c17",
	      SYM_DEF,
	      &DEF_CAN_FIRE_RL_testfsm_idle_l15c17,
	      1u);
  init_symbol(&symbols[13u],
	      "CAN_FIRE_RL_testfsm_restart",
	      SYM_DEF,
	      &DEF_CAN_FIRE_RL_testfsm_restart,
	      1u);
  init_symbol(&symbols[14u],
	      "CAN_FIRE_RL_testfsm_start_reg__dreg_update",
	      SYM_DEF,
	      &DEF_CAN_FIRE_RL_testfsm_start_reg__dreg_update,
	      1u);
  init_symbol(&symbols[15u],
	      "CAN_FIRE_RL_testfsm_state_every",
	      SYM_DEF,
	      &DEF_CAN_FIRE_RL_testfsm_state_every,
	      1u);
  init_symbol(&symbols[16u],
	      "CAN_FIRE_RL_testfsm_state_fired__dreg_update",
	      SYM_DEF,
	      &DEF_CAN_FIRE_RL_testfsm_state_fired__dreg_update,
	      1u);
  init_symbol(&symbols[17u],
	      "CAN_FIRE_RL_testfsm_state_handle_abort",
	      SYM_DEF,
	      &DEF_CAN_FIRE_RL_testfsm_state_handle_abort,
	      1u);
  init_symbol(&symbols[18u], "p", SYM_MODULE, &INST_p);
  init_symbol(&symbols[19u], "RL_init", SYM_RULE);
  init_symbol(&symbols[20u], "RL_testfsm_action_l16c19", SYM_RULE);
  init_symbol(&symbols[21u], "RL_testfsm_action_l17c9", SYM_RULE);
  init_symbol(&symbols[22u], "RL_testfsm_action_l19c9", SYM_RULE);
  init_symbol(&symbols[23u], "RL_testfsm_action_l21c7", SYM_RULE);
  init_symbol(&symbols[24u], "RL_testfsm_fsm_start", SYM_RULE);
  init_symbol(&symbols[25u], "RL_testfsm_idle_l15c17", SYM_RULE);
  init_symbol(&symbols[26u], "RL_testfsm_restart", SYM_RULE);
  init_symbol(&symbols[27u], "RL_testfsm_start_reg__dreg_update", SYM_RULE);
  init_symbol(&symbols[28u], "RL_testfsm_state_every", SYM_RULE);
  init_symbol(&symbols[29u], "RL_testfsm_state_fired__dreg_update", SYM_RULE);
  init_symbol(&symbols[30u], "RL_testfsm_state_handle_abort", SYM_RULE);
  init_symbol(&symbols[31u], "testfsm_abort", SYM_MODULE, &INST_testfsm_abort);
  init_symbol(&symbols[32u], "testfsm_start_reg", SYM_MODULE, &INST_testfsm_start_reg);
  init_symbol(&symbols[33u], "testfsm_start_reg_1", SYM_MODULE, &INST_testfsm_start_reg_1);
  init_symbol(&symbols[34u], "testfsm_start_reg_2", SYM_MODULE, &INST_testfsm_start_reg_2);
  init_symbol(&symbols[35u], "testfsm_start_wire", SYM_MODULE, &INST_testfsm_start_wire);
  init_symbol(&symbols[36u],
	      "testfsm_state_can_overlap",
	      SYM_MODULE,
	      &INST_testfsm_state_can_overlap);
  init_symbol(&symbols[37u], "testfsm_state_fired", SYM_MODULE, &INST_testfsm_state_fired);
  init_symbol(&symbols[38u], "testfsm_state_fired_1", SYM_MODULE, &INST_testfsm_state_fired_1);
  init_symbol(&symbols[39u], "testfsm_state_mkFSMstate", SYM_MODULE, &INST_testfsm_state_mkFSMstate);
  init_symbol(&symbols[40u], "testfsm_state_overlap_pw", SYM_MODULE, &INST_testfsm_state_overlap_pw);
  init_symbol(&symbols[41u], "testfsm_state_set_pw", SYM_MODULE, &INST_testfsm_state_set_pw);
  init_symbol(&symbols[42u], "WILL_FIRE___me_check_5", SYM_DEF, &DEF_WILL_FIRE___me_check_5, 1u);
  init_symbol(&symbols[43u], "WILL_FIRE___me_check_6", SYM_DEF, &DEF_WILL_FIRE___me_check_6, 1u);
  init_symbol(&symbols[44u], "WILL_FIRE___me_check_7", SYM_DEF, &DEF_WILL_FIRE___me_check_7, 1u);
  init_symbol(&symbols[45u], "WILL_FIRE_RL_init", SYM_DEF, &DEF_WILL_FIRE_RL_init, 1u);
  init_symbol(&symbols[46u],
	      "WILL_FIRE_RL_testfsm_action_l16c19",
	      SYM_DEF,
	      &DEF_WILL_FIRE_RL_testfsm_action_l16c19,
	      1u);
  init_symbol(&symbols[47u],
	      "WILL_FIRE_RL_testfsm_action_l17c9",
	      SYM_DEF,
	      &DEF_WILL_FIRE_RL_testfsm_action_l17c9,
	      1u);
  init_symbol(&symbols[48u],
	      "WILL_FIRE_RL_testfsm_action_l19c9",
	      SYM_DEF,
	      &DEF_WILL_FIRE_RL_testfsm_action_l19c9,
	      1u);
  init_symbol(&symbols[49u],
	      "WILL_FIRE_RL_testfsm_action_l21c7",
	      SYM_DEF,
	      &DEF_WILL_FIRE_RL_testfsm_action_l21c7,
	      1u);
  init_symbol(&symbols[50u],
	      "WILL_FIRE_RL_testfsm_fsm_start",
	      SYM_DEF,
	      &DEF_WILL_FIRE_RL_testfsm_fsm_start,
	      1u);
  init_symbol(&symbols[51u],
	      "WILL_FIRE_RL_testfsm_idle_l15c17",
	      SYM_DEF,
	      &DEF_WILL_FIRE_RL_testfsm_idle_l15c17,
	      1u);
  init_symbol(&symbols[52u],
	      "WILL_FIRE_RL_testfsm_restart",
	      SYM_DEF,
	      &DEF_WILL_FIRE_RL_testfsm_restart,
	      1u);
  init_symbol(&symbols[53u],
	      "WILL_FIRE_RL_testfsm_start_reg__dreg_update",
	      SYM_DEF,
	      &DEF_WILL_FIRE_RL_testfsm_start_reg__dreg_update,
	      1u);
  init_symbol(&symbols[54u],
	      "WILL_FIRE_RL_testfsm_state_every",
	      SYM_DEF,
	      &DEF_WILL_FIRE_RL_testfsm_state_every,
	      1u);
  init_symbol(&symbols[55u],
	      "WILL_FIRE_RL_testfsm_state_fired__dreg_update",
	      SYM_DEF,
	      &DEF_WILL_FIRE_RL_testfsm_state_fired__dreg_update,
	      1u);
  init_symbol(&symbols[56u],
	      "WILL_FIRE_RL_testfsm_state_handle_abort",
	      SYM_DEF,
	      &DEF_WILL_FIRE_RL_testfsm_state_handle_abort,
	      1u);
}


/* Rule actions */

void MOD_mkTestbench::RL_testfsm_start_reg__dreg_update()
{
  tUInt8 DEF_testfsm_start_reg_2_whas_AND_testfsm_start_reg_ETC___d3;
  DEF_testfsm_start_reg_2_whas_AND_testfsm_start_reg_ETC___d3 = INST_testfsm_start_reg_2.METH_whas() && INST_testfsm_start_reg_2.METH_wget();
  INST_testfsm_start_reg_1.METH_write(DEF_testfsm_start_reg_2_whas_AND_testfsm_start_reg_ETC___d3);
}

void MOD_mkTestbench::RL_testfsm_state_handle_abort()
{
  INST_testfsm_state_mkFSMstate.METH_write((tUInt8)0u);
}

void MOD_mkTestbench::RL_testfsm_state_fired__dreg_update()
{
  tUInt8 DEF_testfsm_state_fired_1_whas__3_AND_testfsm_stat_ETC___d15;
  DEF_testfsm_state_fired_1_whas__3_AND_testfsm_stat_ETC___d15 = INST_testfsm_state_fired_1.METH_whas() && INST_testfsm_state_fired_1.METH_wget();
  INST_testfsm_state_fired.METH_write(DEF_testfsm_state_fired_1_whas__3_AND_testfsm_stat_ETC___d15);
}

void MOD_mkTestbench::RL_testfsm_state_every()
{
  tUInt8 DEF_testfsm_state_set_pw_whas__6_OR_NOT_testfsm_st_ETC___d21;
  tUInt8 DEF_testfsm_state_can_overlap__h1653;
  DEF_testfsm_state_can_overlap__h1653 = INST_testfsm_state_can_overlap.METH_read();
  DEF_testfsm_state_set_pw_whas__6_OR_NOT_testfsm_st_ETC___d21 = INST_testfsm_state_set_pw.METH_whas() || (!INST_testfsm_state_overlap_pw.METH_whas() && DEF_testfsm_state_can_overlap__h1653);
  INST_testfsm_state_can_overlap.METH_write(DEF_testfsm_state_set_pw_whas__6_OR_NOT_testfsm_st_ETC___d21);
}

void MOD_mkTestbench::RL_testfsm_restart()
{
  INST_testfsm_start_wire.METH_wset((tUInt8)1u);
  INST_testfsm_start_reg_2.METH_wset((tUInt8)1u);
}

void MOD_mkTestbench::RL_testfsm_action_l16c19()
{
  INST_testfsm_state_mkFSMstate.METH_write((tUInt8)1u);
  INST_testfsm_state_fired_1.METH_wset((tUInt8)1u);
  INST_testfsm_state_set_pw.METH_wset();
  if (!(PORT_RST_N == (tUInt8)0u))
    my_display((tUInt8)1u);
}

void MOD_mkTestbench::RL_testfsm_action_l17c9()
{
  INST_testfsm_state_mkFSMstate.METH_write((tUInt8)2u);
  INST_testfsm_state_fired_1.METH_wset((tUInt8)1u);
  INST_testfsm_state_set_pw.METH_wset();
  if (!(PORT_RST_N == (tUInt8)0u))
    DEF_v__h9133 = get_input();
  INST_p.METH_write(DEF_v__h9133);
}

void MOD_mkTestbench::RL_testfsm_action_l19c9()
{
  tUInt8 DEF_p___d42;
  DEF_p___d42 = INST_p.METH_read();
  INST_testfsm_state_mkFSMstate.METH_write((tUInt8)3u);
  INST_testfsm_state_fired_1.METH_wset((tUInt8)1u);
  INST_testfsm_state_set_pw.METH_wset();
  if (!(PORT_RST_N == (tUInt8)0u))
    my_display(DEF_p___d42);
}

void MOD_mkTestbench::RL_testfsm_action_l21c7()
{
  INST_testfsm_state_mkFSMstate.METH_write((tUInt8)4u);
  INST_testfsm_state_fired_1.METH_wset((tUInt8)1u);
  INST_testfsm_state_set_pw.METH_wset();
  if (!(PORT_RST_N == (tUInt8)0u))
    dollar_finish(sim_hdl, "32", 1u);
}

void MOD_mkTestbench::RL_testfsm_idle_l15c17()
{
  INST_testfsm_state_mkFSMstate.METH_write((tUInt8)0u);
  INST_testfsm_state_fired_1.METH_wset((tUInt8)1u);
  INST_testfsm_state_set_pw.METH_wset();
}

void MOD_mkTestbench::RL_testfsm_fsm_start()
{
  INST_testfsm_start_wire.METH_wset((tUInt8)1u);
  INST_testfsm_start_reg_2.METH_wset((tUInt8)1u);
  INST_testfsm_start_reg.METH_write((tUInt8)0u);
}

void MOD_mkTestbench::RL_init()
{
  INST_testfsm_start_reg.METH_write((tUInt8)1u);
}

void MOD_mkTestbench::__me_check_5()
{
  if (!(PORT_RST_N == (tUInt8)0u))
    if (DEF_WILL_FIRE_RL_testfsm_action_l16c19 && ((DEF_WILL_FIRE_RL_testfsm_action_l17c9 || DEF_WILL_FIRE_RL_testfsm_action_l19c9) || DEF_WILL_FIRE_RL_testfsm_action_l21c7))
      dollar_error(sim_hdl, this, "s", &__str_literal_1);
}

void MOD_mkTestbench::__me_check_6()
{
  if (!(PORT_RST_N == (tUInt8)0u))
    if (DEF_WILL_FIRE_RL_testfsm_action_l17c9 && (DEF_WILL_FIRE_RL_testfsm_action_l19c9 || DEF_WILL_FIRE_RL_testfsm_action_l21c7))
      dollar_error(sim_hdl, this, "s", &__str_literal_2);
}

void MOD_mkTestbench::__me_check_7()
{
  if (!(PORT_RST_N == (tUInt8)0u))
    if (DEF_WILL_FIRE_RL_testfsm_action_l19c9 && DEF_WILL_FIRE_RL_testfsm_action_l21c7)
      dollar_error(sim_hdl, this, "s", &__str_literal_3);
}


/* Methods */


/* Reset routines */

void MOD_mkTestbench::reset_RST_N(tUInt8 ARG_rst_in)
{
  PORT_RST_N = ARG_rst_in;
  INST_testfsm_state_mkFSMstate.reset_RST(ARG_rst_in);
  INST_testfsm_state_fired.reset_RST(ARG_rst_in);
  INST_testfsm_state_can_overlap.reset_RST(ARG_rst_in);
  INST_testfsm_start_reg_1.reset_RST(ARG_rst_in);
  INST_testfsm_start_reg.reset_RST(ARG_rst_in);
  INST_p.reset_RST(ARG_rst_in);
}


/* Static handles to reset routines */


/* Functions for the parent module to register its reset fns */


/* Functions to set the elaborated clock id */

void MOD_mkTestbench::set_clk_0(char const *s)
{
  __clk_handle_0 = bk_get_or_define_clock(sim_hdl, s);
}


/* State dumping routine */
void MOD_mkTestbench::dump_state(unsigned int indent)
{
  printf("%*s%s:\n", indent, "", inst_name);
  INST_p.dump_state(indent + 2u);
  INST_testfsm_abort.dump_state(indent + 2u);
  INST_testfsm_start_reg.dump_state(indent + 2u);
  INST_testfsm_start_reg_1.dump_state(indent + 2u);
  INST_testfsm_start_reg_2.dump_state(indent + 2u);
  INST_testfsm_start_wire.dump_state(indent + 2u);
  INST_testfsm_state_can_overlap.dump_state(indent + 2u);
  INST_testfsm_state_fired.dump_state(indent + 2u);
  INST_testfsm_state_fired_1.dump_state(indent + 2u);
  INST_testfsm_state_mkFSMstate.dump_state(indent + 2u);
  INST_testfsm_state_overlap_pw.dump_state(indent + 2u);
  INST_testfsm_state_set_pw.dump_state(indent + 2u);
}


/* VCD dumping routines */

unsigned int MOD_mkTestbench::dump_VCD_defs(unsigned int levels)
{
  vcd_write_scope_start(sim_hdl, inst_name);
  vcd_num = vcd_reserve_ids(sim_hdl, 44u);
  unsigned int num = vcd_num;
  for (unsigned int clk = 0u; clk < bk_num_clocks(sim_hdl); ++clk)
    vcd_add_clock_def(sim_hdl, this, bk_clock_name(sim_hdl, clk), bk_clock_vcd_num(sim_hdl, clk));
  vcd_write_def(sim_hdl, bk_clock_vcd_num(sim_hdl, __clk_handle_0), "CLK", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "CAN_FIRE_RL_init", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "CAN_FIRE_RL_testfsm_action_l16c19", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "CAN_FIRE_RL_testfsm_action_l17c9", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "CAN_FIRE_RL_testfsm_action_l19c9", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "CAN_FIRE_RL_testfsm_action_l21c7", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "CAN_FIRE_RL_testfsm_fsm_start", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "CAN_FIRE_RL_testfsm_idle_l15c17", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "CAN_FIRE_RL_testfsm_restart", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "CAN_FIRE_RL_testfsm_start_reg__dreg_update", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "CAN_FIRE_RL_testfsm_state_every", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "CAN_FIRE_RL_testfsm_state_fired__dreg_update", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "CAN_FIRE_RL_testfsm_state_handle_abort", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "CAN_FIRE___me_check_5", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "CAN_FIRE___me_check_6", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "CAN_FIRE___me_check_7", 1u);
  vcd_write_def(sim_hdl, num++, "RST_N", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE_RL_init", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE_RL_testfsm_action_l16c19", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE_RL_testfsm_action_l17c9", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE_RL_testfsm_action_l19c9", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE_RL_testfsm_action_l21c7", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE_RL_testfsm_fsm_start", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE_RL_testfsm_idle_l15c17", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE_RL_testfsm_restart", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE_RL_testfsm_start_reg__dreg_update", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE_RL_testfsm_state_every", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE_RL_testfsm_state_fired__dreg_update", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE_RL_testfsm_state_handle_abort", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE___me_check_5", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE___me_check_6", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE___me_check_7", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "v__h9133", 8u);
  num = INST_p.dump_VCD_defs(num);
  num = INST_testfsm_abort.dump_VCD_defs(num);
  num = INST_testfsm_start_reg.dump_VCD_defs(num);
  num = INST_testfsm_start_reg_1.dump_VCD_defs(num);
  num = INST_testfsm_start_reg_2.dump_VCD_defs(num);
  num = INST_testfsm_start_wire.dump_VCD_defs(num);
  num = INST_testfsm_state_can_overlap.dump_VCD_defs(num);
  num = INST_testfsm_state_fired.dump_VCD_defs(num);
  num = INST_testfsm_state_fired_1.dump_VCD_defs(num);
  num = INST_testfsm_state_mkFSMstate.dump_VCD_defs(num);
  num = INST_testfsm_state_overlap_pw.dump_VCD_defs(num);
  num = INST_testfsm_state_set_pw.dump_VCD_defs(num);
  vcd_write_scope_end(sim_hdl);
  return num;
}

void MOD_mkTestbench::dump_VCD(tVCDDumpType dt, unsigned int levels, MOD_mkTestbench &backing)
{
  vcd_defs(dt, backing);
  vcd_prims(dt, backing);
}

void MOD_mkTestbench::vcd_defs(tVCDDumpType dt, MOD_mkTestbench &backing)
{
  unsigned int num = vcd_num;
  if (dt == VCD_DUMP_XS)
  {
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 8u);
  }
  else
    if (dt == VCD_DUMP_CHANGES)
    {
      if ((backing.DEF_CAN_FIRE_RL_init) != DEF_CAN_FIRE_RL_init)
      {
	vcd_write_val(sim_hdl, num, DEF_CAN_FIRE_RL_init, 1u);
	backing.DEF_CAN_FIRE_RL_init = DEF_CAN_FIRE_RL_init;
      }
      ++num;
      if ((backing.DEF_CAN_FIRE_RL_testfsm_action_l16c19) != DEF_CAN_FIRE_RL_testfsm_action_l16c19)
      {
	vcd_write_val(sim_hdl, num, DEF_CAN_FIRE_RL_testfsm_action_l16c19, 1u);
	backing.DEF_CAN_FIRE_RL_testfsm_action_l16c19 = DEF_CAN_FIRE_RL_testfsm_action_l16c19;
      }
      ++num;
      if ((backing.DEF_CAN_FIRE_RL_testfsm_action_l17c9) != DEF_CAN_FIRE_RL_testfsm_action_l17c9)
      {
	vcd_write_val(sim_hdl, num, DEF_CAN_FIRE_RL_testfsm_action_l17c9, 1u);
	backing.DEF_CAN_FIRE_RL_testfsm_action_l17c9 = DEF_CAN_FIRE_RL_testfsm_action_l17c9;
      }
      ++num;
      if ((backing.DEF_CAN_FIRE_RL_testfsm_action_l19c9) != DEF_CAN_FIRE_RL_testfsm_action_l19c9)
      {
	vcd_write_val(sim_hdl, num, DEF_CAN_FIRE_RL_testfsm_action_l19c9, 1u);
	backing.DEF_CAN_FIRE_RL_testfsm_action_l19c9 = DEF_CAN_FIRE_RL_testfsm_action_l19c9;
      }
      ++num;
      if ((backing.DEF_CAN_FIRE_RL_testfsm_action_l21c7) != DEF_CAN_FIRE_RL_testfsm_action_l21c7)
      {
	vcd_write_val(sim_hdl, num, DEF_CAN_FIRE_RL_testfsm_action_l21c7, 1u);
	backing.DEF_CAN_FIRE_RL_testfsm_action_l21c7 = DEF_CAN_FIRE_RL_testfsm_action_l21c7;
      }
      ++num;
      if ((backing.DEF_CAN_FIRE_RL_testfsm_fsm_start) != DEF_CAN_FIRE_RL_testfsm_fsm_start)
      {
	vcd_write_val(sim_hdl, num, DEF_CAN_FIRE_RL_testfsm_fsm_start, 1u);
	backing.DEF_CAN_FIRE_RL_testfsm_fsm_start = DEF_CAN_FIRE_RL_testfsm_fsm_start;
      }
      ++num;
      if ((backing.DEF_CAN_FIRE_RL_testfsm_idle_l15c17) != DEF_CAN_FIRE_RL_testfsm_idle_l15c17)
      {
	vcd_write_val(sim_hdl, num, DEF_CAN_FIRE_RL_testfsm_idle_l15c17, 1u);
	backing.DEF_CAN_FIRE_RL_testfsm_idle_l15c17 = DEF_CAN_FIRE_RL_testfsm_idle_l15c17;
      }
      ++num;
      if ((backing.DEF_CAN_FIRE_RL_testfsm_restart) != DEF_CAN_FIRE_RL_testfsm_restart)
      {
	vcd_write_val(sim_hdl, num, DEF_CAN_FIRE_RL_testfsm_restart, 1u);
	backing.DEF_CAN_FIRE_RL_testfsm_restart = DEF_CAN_FIRE_RL_testfsm_restart;
      }
      ++num;
      if ((backing.DEF_CAN_FIRE_RL_testfsm_start_reg__dreg_update) != DEF_CAN_FIRE_RL_testfsm_start_reg__dreg_update)
      {
	vcd_write_val(sim_hdl, num, DEF_CAN_FIRE_RL_testfsm_start_reg__dreg_update, 1u);
	backing.DEF_CAN_FIRE_RL_testfsm_start_reg__dreg_update = DEF_CAN_FIRE_RL_testfsm_start_reg__dreg_update;
      }
      ++num;
      if ((backing.DEF_CAN_FIRE_RL_testfsm_state_every) != DEF_CAN_FIRE_RL_testfsm_state_every)
      {
	vcd_write_val(sim_hdl, num, DEF_CAN_FIRE_RL_testfsm_state_every, 1u);
	backing.DEF_CAN_FIRE_RL_testfsm_state_every = DEF_CAN_FIRE_RL_testfsm_state_every;
      }
      ++num;
      if ((backing.DEF_CAN_FIRE_RL_testfsm_state_fired__dreg_update) != DEF_CAN_FIRE_RL_testfsm_state_fired__dreg_update)
      {
	vcd_write_val(sim_hdl, num, DEF_CAN_FIRE_RL_testfsm_state_fired__dreg_update, 1u);
	backing.DEF_CAN_FIRE_RL_testfsm_state_fired__dreg_update = DEF_CAN_FIRE_RL_testfsm_state_fired__dreg_update;
      }
      ++num;
      if ((backing.DEF_CAN_FIRE_RL_testfsm_state_handle_abort) != DEF_CAN_FIRE_RL_testfsm_state_handle_abort)
      {
	vcd_write_val(sim_hdl, num, DEF_CAN_FIRE_RL_testfsm_state_handle_abort, 1u);
	backing.DEF_CAN_FIRE_RL_testfsm_state_handle_abort = DEF_CAN_FIRE_RL_testfsm_state_handle_abort;
      }
      ++num;
      if ((backing.DEF_CAN_FIRE___me_check_5) != DEF_CAN_FIRE___me_check_5)
      {
	vcd_write_val(sim_hdl, num, DEF_CAN_FIRE___me_check_5, 1u);
	backing.DEF_CAN_FIRE___me_check_5 = DEF_CAN_FIRE___me_check_5;
      }
      ++num;
      if ((backing.DEF_CAN_FIRE___me_check_6) != DEF_CAN_FIRE___me_check_6)
      {
	vcd_write_val(sim_hdl, num, DEF_CAN_FIRE___me_check_6, 1u);
	backing.DEF_CAN_FIRE___me_check_6 = DEF_CAN_FIRE___me_check_6;
      }
      ++num;
      if ((backing.DEF_CAN_FIRE___me_check_7) != DEF_CAN_FIRE___me_check_7)
      {
	vcd_write_val(sim_hdl, num, DEF_CAN_FIRE___me_check_7, 1u);
	backing.DEF_CAN_FIRE___me_check_7 = DEF_CAN_FIRE___me_check_7;
      }
      ++num;
      if ((backing.PORT_RST_N) != PORT_RST_N)
      {
	vcd_write_val(sim_hdl, num, PORT_RST_N, 1u);
	backing.PORT_RST_N = PORT_RST_N;
      }
      ++num;
      if ((backing.DEF_WILL_FIRE_RL_init) != DEF_WILL_FIRE_RL_init)
      {
	vcd_write_val(sim_hdl, num, DEF_WILL_FIRE_RL_init, 1u);
	backing.DEF_WILL_FIRE_RL_init = DEF_WILL_FIRE_RL_init;
      }
      ++num;
      if ((backing.DEF_WILL_FIRE_RL_testfsm_action_l16c19) != DEF_WILL_FIRE_RL_testfsm_action_l16c19)
      {
	vcd_write_val(sim_hdl, num, DEF_WILL_FIRE_RL_testfsm_action_l16c19, 1u);
	backing.DEF_WILL_FIRE_RL_testfsm_action_l16c19 = DEF_WILL_FIRE_RL_testfsm_action_l16c19;
      }
      ++num;
      if ((backing.DEF_WILL_FIRE_RL_testfsm_action_l17c9) != DEF_WILL_FIRE_RL_testfsm_action_l17c9)
      {
	vcd_write_val(sim_hdl, num, DEF_WILL_FIRE_RL_testfsm_action_l17c9, 1u);
	backing.DEF_WILL_FIRE_RL_testfsm_action_l17c9 = DEF_WILL_FIRE_RL_testfsm_action_l17c9;
      }
      ++num;
      if ((backing.DEF_WILL_FIRE_RL_testfsm_action_l19c9) != DEF_WILL_FIRE_RL_testfsm_action_l19c9)
      {
	vcd_write_val(sim_hdl, num, DEF_WILL_FIRE_RL_testfsm_action_l19c9, 1u);
	backing.DEF_WILL_FIRE_RL_testfsm_action_l19c9 = DEF_WILL_FIRE_RL_testfsm_action_l19c9;
      }
      ++num;
      if ((backing.DEF_WILL_FIRE_RL_testfsm_action_l21c7) != DEF_WILL_FIRE_RL_testfsm_action_l21c7)
      {
	vcd_write_val(sim_hdl, num, DEF_WILL_FIRE_RL_testfsm_action_l21c7, 1u);
	backing.DEF_WILL_FIRE_RL_testfsm_action_l21c7 = DEF_WILL_FIRE_RL_testfsm_action_l21c7;
      }
      ++num;
      if ((backing.DEF_WILL_FIRE_RL_testfsm_fsm_start) != DEF_WILL_FIRE_RL_testfsm_fsm_start)
      {
	vcd_write_val(sim_hdl, num, DEF_WILL_FIRE_RL_testfsm_fsm_start, 1u);
	backing.DEF_WILL_FIRE_RL_testfsm_fsm_start = DEF_WILL_FIRE_RL_testfsm_fsm_start;
      }
      ++num;
      if ((backing.DEF_WILL_FIRE_RL_testfsm_idle_l15c17) != DEF_WILL_FIRE_RL_testfsm_idle_l15c17)
      {
	vcd_write_val(sim_hdl, num, DEF_WILL_FIRE_RL_testfsm_idle_l15c17, 1u);
	backing.DEF_WILL_FIRE_RL_testfsm_idle_l15c17 = DEF_WILL_FIRE_RL_testfsm_idle_l15c17;
      }
      ++num;
      if ((backing.DEF_WILL_FIRE_RL_testfsm_restart) != DEF_WILL_FIRE_RL_testfsm_restart)
      {
	vcd_write_val(sim_hdl, num, DEF_WILL_FIRE_RL_testfsm_restart, 1u);
	backing.DEF_WILL_FIRE_RL_testfsm_restart = DEF_WILL_FIRE_RL_testfsm_restart;
      }
      ++num;
      if ((backing.DEF_WILL_FIRE_RL_testfsm_start_reg__dreg_update) != DEF_WILL_FIRE_RL_testfsm_start_reg__dreg_update)
      {
	vcd_write_val(sim_hdl, num, DEF_WILL_FIRE_RL_testfsm_start_reg__dreg_update, 1u);
	backing.DEF_WILL_FIRE_RL_testfsm_start_reg__dreg_update = DEF_WILL_FIRE_RL_testfsm_start_reg__dreg_update;
      }
      ++num;
      if ((backing.DEF_WILL_FIRE_RL_testfsm_state_every) != DEF_WILL_FIRE_RL_testfsm_state_every)
      {
	vcd_write_val(sim_hdl, num, DEF_WILL_FIRE_RL_testfsm_state_every, 1u);
	backing.DEF_WILL_FIRE_RL_testfsm_state_every = DEF_WILL_FIRE_RL_testfsm_state_every;
      }
      ++num;
      if ((backing.DEF_WILL_FIRE_RL_testfsm_state_fired__dreg_update) != DEF_WILL_FIRE_RL_testfsm_state_fired__dreg_update)
      {
	vcd_write_val(sim_hdl, num, DEF_WILL_FIRE_RL_testfsm_state_fired__dreg_update, 1u);
	backing.DEF_WILL_FIRE_RL_testfsm_state_fired__dreg_update = DEF_WILL_FIRE_RL_testfsm_state_fired__dreg_update;
      }
      ++num;
      if ((backing.DEF_WILL_FIRE_RL_testfsm_state_handle_abort) != DEF_WILL_FIRE_RL_testfsm_state_handle_abort)
      {
	vcd_write_val(sim_hdl, num, DEF_WILL_FIRE_RL_testfsm_state_handle_abort, 1u);
	backing.DEF_WILL_FIRE_RL_testfsm_state_handle_abort = DEF_WILL_FIRE_RL_testfsm_state_handle_abort;
      }
      ++num;
      if ((backing.DEF_WILL_FIRE___me_check_5) != DEF_WILL_FIRE___me_check_5)
      {
	vcd_write_val(sim_hdl, num, DEF_WILL_FIRE___me_check_5, 1u);
	backing.DEF_WILL_FIRE___me_check_5 = DEF_WILL_FIRE___me_check_5;
      }
      ++num;
      if ((backing.DEF_WILL_FIRE___me_check_6) != DEF_WILL_FIRE___me_check_6)
      {
	vcd_write_val(sim_hdl, num, DEF_WILL_FIRE___me_check_6, 1u);
	backing.DEF_WILL_FIRE___me_check_6 = DEF_WILL_FIRE___me_check_6;
      }
      ++num;
      if ((backing.DEF_WILL_FIRE___me_check_7) != DEF_WILL_FIRE___me_check_7)
      {
	vcd_write_val(sim_hdl, num, DEF_WILL_FIRE___me_check_7, 1u);
	backing.DEF_WILL_FIRE___me_check_7 = DEF_WILL_FIRE___me_check_7;
      }
      ++num;
      if ((backing.DEF_v__h9133) != DEF_v__h9133)
      {
	vcd_write_val(sim_hdl, num, DEF_v__h9133, 8u);
	backing.DEF_v__h9133 = DEF_v__h9133;
      }
      ++num;
    }
    else
    {
      vcd_write_val(sim_hdl, num++, DEF_CAN_FIRE_RL_init, 1u);
      backing.DEF_CAN_FIRE_RL_init = DEF_CAN_FIRE_RL_init;
      vcd_write_val(sim_hdl, num++, DEF_CAN_FIRE_RL_testfsm_action_l16c19, 1u);
      backing.DEF_CAN_FIRE_RL_testfsm_action_l16c19 = DEF_CAN_FIRE_RL_testfsm_action_l16c19;
      vcd_write_val(sim_hdl, num++, DEF_CAN_FIRE_RL_testfsm_action_l17c9, 1u);
      backing.DEF_CAN_FIRE_RL_testfsm_action_l17c9 = DEF_CAN_FIRE_RL_testfsm_action_l17c9;
      vcd_write_val(sim_hdl, num++, DEF_CAN_FIRE_RL_testfsm_action_l19c9, 1u);
      backing.DEF_CAN_FIRE_RL_testfsm_action_l19c9 = DEF_CAN_FIRE_RL_testfsm_action_l19c9;
      vcd_write_val(sim_hdl, num++, DEF_CAN_FIRE_RL_testfsm_action_l21c7, 1u);
      backing.DEF_CAN_FIRE_RL_testfsm_action_l21c7 = DEF_CAN_FIRE_RL_testfsm_action_l21c7;
      vcd_write_val(sim_hdl, num++, DEF_CAN_FIRE_RL_testfsm_fsm_start, 1u);
      backing.DEF_CAN_FIRE_RL_testfsm_fsm_start = DEF_CAN_FIRE_RL_testfsm_fsm_start;
      vcd_write_val(sim_hdl, num++, DEF_CAN_FIRE_RL_testfsm_idle_l15c17, 1u);
      backing.DEF_CAN_FIRE_RL_testfsm_idle_l15c17 = DEF_CAN_FIRE_RL_testfsm_idle_l15c17;
      vcd_write_val(sim_hdl, num++, DEF_CAN_FIRE_RL_testfsm_restart, 1u);
      backing.DEF_CAN_FIRE_RL_testfsm_restart = DEF_CAN_FIRE_RL_testfsm_restart;
      vcd_write_val(sim_hdl, num++, DEF_CAN_FIRE_RL_testfsm_start_reg__dreg_update, 1u);
      backing.DEF_CAN_FIRE_RL_testfsm_start_reg__dreg_update = DEF_CAN_FIRE_RL_testfsm_start_reg__dreg_update;
      vcd_write_val(sim_hdl, num++, DEF_CAN_FIRE_RL_testfsm_state_every, 1u);
      backing.DEF_CAN_FIRE_RL_testfsm_state_every = DEF_CAN_FIRE_RL_testfsm_state_every;
      vcd_write_val(sim_hdl, num++, DEF_CAN_FIRE_RL_testfsm_state_fired__dreg_update, 1u);
      backing.DEF_CAN_FIRE_RL_testfsm_state_fired__dreg_update = DEF_CAN_FIRE_RL_testfsm_state_fired__dreg_update;
      vcd_write_val(sim_hdl, num++, DEF_CAN_FIRE_RL_testfsm_state_handle_abort, 1u);
      backing.DEF_CAN_FIRE_RL_testfsm_state_handle_abort = DEF_CAN_FIRE_RL_testfsm_state_handle_abort;
      vcd_write_val(sim_hdl, num++, DEF_CAN_FIRE___me_check_5, 1u);
      backing.DEF_CAN_FIRE___me_check_5 = DEF_CAN_FIRE___me_check_5;
      vcd_write_val(sim_hdl, num++, DEF_CAN_FIRE___me_check_6, 1u);
      backing.DEF_CAN_FIRE___me_check_6 = DEF_CAN_FIRE___me_check_6;
      vcd_write_val(sim_hdl, num++, DEF_CAN_FIRE___me_check_7, 1u);
      backing.DEF_CAN_FIRE___me_check_7 = DEF_CAN_FIRE___me_check_7;
      vcd_write_val(sim_hdl, num++, PORT_RST_N, 1u);
      backing.PORT_RST_N = PORT_RST_N;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE_RL_init, 1u);
      backing.DEF_WILL_FIRE_RL_init = DEF_WILL_FIRE_RL_init;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE_RL_testfsm_action_l16c19, 1u);
      backing.DEF_WILL_FIRE_RL_testfsm_action_l16c19 = DEF_WILL_FIRE_RL_testfsm_action_l16c19;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE_RL_testfsm_action_l17c9, 1u);
      backing.DEF_WILL_FIRE_RL_testfsm_action_l17c9 = DEF_WILL_FIRE_RL_testfsm_action_l17c9;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE_RL_testfsm_action_l19c9, 1u);
      backing.DEF_WILL_FIRE_RL_testfsm_action_l19c9 = DEF_WILL_FIRE_RL_testfsm_action_l19c9;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE_RL_testfsm_action_l21c7, 1u);
      backing.DEF_WILL_FIRE_RL_testfsm_action_l21c7 = DEF_WILL_FIRE_RL_testfsm_action_l21c7;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE_RL_testfsm_fsm_start, 1u);
      backing.DEF_WILL_FIRE_RL_testfsm_fsm_start = DEF_WILL_FIRE_RL_testfsm_fsm_start;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE_RL_testfsm_idle_l15c17, 1u);
      backing.DEF_WILL_FIRE_RL_testfsm_idle_l15c17 = DEF_WILL_FIRE_RL_testfsm_idle_l15c17;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE_RL_testfsm_restart, 1u);
      backing.DEF_WILL_FIRE_RL_testfsm_restart = DEF_WILL_FIRE_RL_testfsm_restart;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE_RL_testfsm_start_reg__dreg_update, 1u);
      backing.DEF_WILL_FIRE_RL_testfsm_start_reg__dreg_update = DEF_WILL_FIRE_RL_testfsm_start_reg__dreg_update;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE_RL_testfsm_state_every, 1u);
      backing.DEF_WILL_FIRE_RL_testfsm_state_every = DEF_WILL_FIRE_RL_testfsm_state_every;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE_RL_testfsm_state_fired__dreg_update, 1u);
      backing.DEF_WILL_FIRE_RL_testfsm_state_fired__dreg_update = DEF_WILL_FIRE_RL_testfsm_state_fired__dreg_update;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE_RL_testfsm_state_handle_abort, 1u);
      backing.DEF_WILL_FIRE_RL_testfsm_state_handle_abort = DEF_WILL_FIRE_RL_testfsm_state_handle_abort;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE___me_check_5, 1u);
      backing.DEF_WILL_FIRE___me_check_5 = DEF_WILL_FIRE___me_check_5;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE___me_check_6, 1u);
      backing.DEF_WILL_FIRE___me_check_6 = DEF_WILL_FIRE___me_check_6;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE___me_check_7, 1u);
      backing.DEF_WILL_FIRE___me_check_7 = DEF_WILL_FIRE___me_check_7;
      vcd_write_val(sim_hdl, num++, DEF_v__h9133, 8u);
      backing.DEF_v__h9133 = DEF_v__h9133;
    }
}

void MOD_mkTestbench::vcd_prims(tVCDDumpType dt, MOD_mkTestbench &backing)
{
  INST_p.dump_VCD(dt, backing.INST_p);
  INST_testfsm_abort.dump_VCD(dt, backing.INST_testfsm_abort);
  INST_testfsm_start_reg.dump_VCD(dt, backing.INST_testfsm_start_reg);
  INST_testfsm_start_reg_1.dump_VCD(dt, backing.INST_testfsm_start_reg_1);
  INST_testfsm_start_reg_2.dump_VCD(dt, backing.INST_testfsm_start_reg_2);
  INST_testfsm_start_wire.dump_VCD(dt, backing.INST_testfsm_start_wire);
  INST_testfsm_state_can_overlap.dump_VCD(dt, backing.INST_testfsm_state_can_overlap);
  INST_testfsm_state_fired.dump_VCD(dt, backing.INST_testfsm_state_fired);
  INST_testfsm_state_fired_1.dump_VCD(dt, backing.INST_testfsm_state_fired_1);
  INST_testfsm_state_mkFSMstate.dump_VCD(dt, backing.INST_testfsm_state_mkFSMstate);
  INST_testfsm_state_overlap_pw.dump_VCD(dt, backing.INST_testfsm_state_overlap_pw);
  INST_testfsm_state_set_pw.dump_VCD(dt, backing.INST_testfsm_state_set_pw);
}
