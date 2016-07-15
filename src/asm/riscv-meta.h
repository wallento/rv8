//
//  riscv-meta.h
//
//  DANGER - This is machine generated code
//

#ifndef riscv_meta_h
#define riscv_meta_h

#ifdef __cplusplus
extern "C" {
#endif

enum riscv_type
{
	riscv_type_none = 0,
	riscv_type_arg = 1,
	riscv_type_creg = 2,
	riscv_type_ireg = 3,
	riscv_type_freg = 4,
	riscv_type_offset = 5,
	riscv_type_simm = 6,
	riscv_type_uimm = 7,
};

enum riscv_rm
{
	riscv_rm_rne = 0,
	riscv_rm_rtz = 1,
	riscv_rm_rdn = 2,
	riscv_rm_rup = 3,
	riscv_rm_rmm = 4,
};

enum riscv_aqrl
{
	riscv_aqrl_relaxed = 0,
	riscv_aqrl_acquire = 2,
	riscv_aqrl_release = 1,
	riscv_aqrl_acq_rel = 3,
};

enum riscv_fcsr
{
	riscv_fcsr_NV = 1,
	riscv_fcsr_DZ = 2,
	riscv_fcsr_OF = 4,
	riscv_fcsr_UF = 8,
	riscv_fcsr_NX = 16,
};

enum riscv_cause
{
	riscv_cause_misaligned_fetch = 0,
	riscv_cause_fault_fetch = 1,
	riscv_cause_illegal_instruction = 2,
	riscv_cause_breakpoint = 3,
	riscv_cause_misaligned_load = 4,
	riscv_cause_fault_load = 5,
	riscv_cause_misaligned_store = 6,
	riscv_cause_fault_store = 7,
	riscv_cause_user_ecall = 8,
	riscv_cause_supervisor_ecall = 9,
	riscv_cause_hypervisor_ecall = 10,
	riscv_cause_machine_ecall = 11,
};

enum riscv_intr
{
	riscv_intr_u_software = 0,
	riscv_intr_s_software = 1,
	riscv_intr_h_software = 2,
	riscv_intr_m_software = 3,
	riscv_intr_u_timer = 4,
	riscv_intr_s_timer = 5,
	riscv_intr_h_timer = 6,
	riscv_intr_m_timer = 7,
	riscv_intr_u_external = 8,
	riscv_intr_s_external = 9,
	riscv_intr_h_external = 10,
	riscv_intr_m_external = 11,
};

enum rvc_constraint
{
	rvc_end,
	rvc_simm_6,
	rvc_imm_6,
	rvc_imm_7,
	rvc_imm_8,
	rvc_imm_9,
	rvc_imm_10,
	rvc_imm_12,
	rvc_imm_18,
	rvc_imm_nz,
	rvc_imm_x2,
	rvc_imm_x4,
	rvc_imm_x8,
	rvc_rd_b3,
	rvc_rs1_b3,
	rvc_rs2_b3,
	rvc_rd_eq_rs1,
	rvc_rd_eq_ra,
	rvc_rd_eq_sp,
	rvc_rd_eq_x0,
	rvc_rs1_eq_sp,
	rvc_rs1_eq_x0,
	rvc_rs2_eq_x0,
	rvc_rd_ne_x0_x2,
	rvc_rd_ne_x0,
	rvc_rs1_ne_x0,
	rvc_rs2_ne_x0,
};

enum riscv_csr
{
	riscv_csr_ustatus = 0x000,
	riscv_csr_uie = 0x004,
	riscv_csr_utvec = 0x005,
	riscv_csr_uscratch = 0x040,
	riscv_csr_uepc = 0x041,
	riscv_csr_ucause = 0x042,
	riscv_csr_ubadaddr = 0x043,
	riscv_csr_uip = 0x044,
	riscv_csr_fflags = 0x001,
	riscv_csr_frm = 0x002,
	riscv_csr_fcsr = 0x003,
	riscv_csr_cycle = 0xC00,
	riscv_csr_time = 0xC01,
	riscv_csr_instret = 0xC02,
	riscv_csr_cycleh = 0xC80,
	riscv_csr_timeh = 0xC81,
	riscv_csr_instreth = 0xC82,
	riscv_csr_sstatus = 0x100,
	riscv_csr_sedeleg = 0x102,
	riscv_csr_sideleg = 0x103,
	riscv_csr_sie = 0x104,
	riscv_csr_stvec = 0x105,
	riscv_csr_sscratch = 0x140,
	riscv_csr_sepc = 0x141,
	riscv_csr_scause = 0x142,
	riscv_csr_sbadaddr = 0x143,
	riscv_csr_sip = 0x144,
	riscv_csr_sptbr = 0x180,
	riscv_csr_scycle = 0xD00,
	riscv_csr_stime = 0XD01,
	riscv_csr_sinstret = 0xD02,
	riscv_csr_scycleh = 0xD80,
	riscv_csr_stimeh = 0xD81,
	riscv_csr_sinstreth = 0xD82,
	riscv_csr_hstatus = 0x200,
	riscv_csr_hedeleg = 0x202,
	riscv_csr_hideleg = 0x203,
	riscv_csr_hie = 0x204,
	riscv_csr_htvec = 0x205,
	riscv_csr_hscratch = 0x240,
	riscv_csr_hepc = 0x241,
	riscv_csr_hcause = 0x242,
	riscv_csr_hbadaddr = 0x243,
	riscv_csr_hip = 0x244,
	riscv_csr_hcycle = 0xE00,
	riscv_csr_htime = 0XE01,
	riscv_csr_hinstret = 0xE02,
	riscv_csr_hcycleh = 0xE80,
	riscv_csr_htimeh = 0xE81,
	riscv_csr_hinstreth = 0xE82,
	riscv_csr_misa = 0xF10,
	riscv_csr_mvendorid = 0xF11,
	riscv_csr_marchid = 0xF12,
	riscv_csr_mimpid = 0XF13,
	riscv_csr_mhartid = 0xF14,
	riscv_csr_mstatus = 0x300,
	riscv_csr_medeleg = 0x302,
	riscv_csr_mideleg = 0x303,
	riscv_csr_mie = 0x304,
	riscv_csr_mtvec = 0x305,
	riscv_csr_mscratch = 0x340,
	riscv_csr_mepc = 0x341,
	riscv_csr_mcause = 0x342,
	riscv_csr_mbadaddr = 0x343,
	riscv_csr_mip = 0x344,
	riscv_csr_mbase = 0x380,
	riscv_csr_mbound = 0x381,
	riscv_csr_mibase = 0x382,
	riscv_csr_mibound = 0x383,
	riscv_csr_mdbase = 0x384,
	riscv_csr_mdbound = 0x385,
	riscv_csr_mcycle = 0xF00,
	riscv_csr_mtime = 0XF01,
	riscv_csr_minstret = 0xF02,
	riscv_csr_mcycleh = 0xF80,
	riscv_csr_mtimeh = 0xF81,
	riscv_csr_minstreth = 0xF82,
	riscv_csr_mucounteren = 0x310,
	riscv_csr_mscounteren = 0x311,
	riscv_csr_mhcounteren = 0x312,
	riscv_csr_mucycle_delta = 0x700,
	riscv_csr_mutime_delta = 0x701,
	riscv_csr_muinstret_delta = 0x702,
	riscv_csr_mscycle_delta = 0x704,
	riscv_csr_mstime_delta = 0x705,
	riscv_csr_msinstret_delta = 0x706,
	riscv_csr_mhcycle_delta = 0x708,
	riscv_csr_mhtime_delta = 0x709,
	riscv_csr_mhinstret_delta = 0x70A,
	riscv_csr_mucycle_deltah = 0x780,
	riscv_csr_mutime_deltah = 0x781,
	riscv_csr_muinstret_deltah = 0x782,
	riscv_csr_mscycle_deltah = 0x784,
	riscv_csr_mstime_deltah = 0x785,
	riscv_csr_msinstret_deltah = 0x786,
	riscv_csr_mhcycle_deltah = 0x788,
	riscv_csr_mhtime_deltah = 0x789,
	riscv_csr_mhinstret_deltah = 0x78A,
};

enum riscv_ireg_num
{
	riscv_ireg_x0,
	riscv_ireg_x1,
	riscv_ireg_x2,
	riscv_ireg_x3,
	riscv_ireg_x4,
	riscv_ireg_x5,
	riscv_ireg_x6,
	riscv_ireg_x7,
	riscv_ireg_x8,
	riscv_ireg_x9,
	riscv_ireg_x10,
	riscv_ireg_x11,
	riscv_ireg_x12,
	riscv_ireg_x13,
	riscv_ireg_x14,
	riscv_ireg_x15,
	riscv_ireg_x16,
	riscv_ireg_x17,
	riscv_ireg_x18,
	riscv_ireg_x19,
	riscv_ireg_x20,
	riscv_ireg_x21,
	riscv_ireg_x22,
	riscv_ireg_x23,
	riscv_ireg_x24,
	riscv_ireg_x25,
	riscv_ireg_x26,
	riscv_ireg_x27,
	riscv_ireg_x28,
	riscv_ireg_x29,
	riscv_ireg_x30,
	riscv_ireg_x31,
};

enum riscv_ireg_name
{
	riscv_ireg_zero,
	riscv_ireg_ra,
	riscv_ireg_sp,
	riscv_ireg_gp,
	riscv_ireg_tp,
	riscv_ireg_t0,
	riscv_ireg_t1,
	riscv_ireg_t2,
	riscv_ireg_s0,
	riscv_ireg_s1,
	riscv_ireg_a0,
	riscv_ireg_a1,
	riscv_ireg_a2,
	riscv_ireg_a3,
	riscv_ireg_a4,
	riscv_ireg_a5,
	riscv_ireg_a6,
	riscv_ireg_a7,
	riscv_ireg_s2,
	riscv_ireg_s3,
	riscv_ireg_s4,
	riscv_ireg_s5,
	riscv_ireg_s6,
	riscv_ireg_s7,
	riscv_ireg_s8,
	riscv_ireg_s9,
	riscv_ireg_s10,
	riscv_ireg_s11,
	riscv_ireg_t3,
	riscv_ireg_t4,
	riscv_ireg_t5,
	riscv_ireg_t6,
};

enum riscv_freg_num
{
	riscv_freg_f0,
	riscv_freg_f1,
	riscv_freg_f2,
	riscv_freg_f3,
	riscv_freg_f4,
	riscv_freg_f5,
	riscv_freg_f6,
	riscv_freg_f7,
	riscv_freg_f8,
	riscv_freg_f9,
	riscv_freg_f10,
	riscv_freg_f11,
	riscv_freg_f12,
	riscv_freg_f13,
	riscv_freg_f14,
	riscv_freg_f15,
	riscv_freg_f16,
	riscv_freg_f17,
	riscv_freg_f18,
	riscv_freg_f19,
	riscv_freg_f20,
	riscv_freg_f21,
	riscv_freg_f22,
	riscv_freg_f23,
	riscv_freg_f24,
	riscv_freg_f25,
	riscv_freg_f26,
	riscv_freg_f27,
	riscv_freg_f28,
	riscv_freg_f29,
	riscv_freg_f30,
	riscv_freg_f31,
};

enum riscv_freg_name
{
	riscv_freg_ft0,
	riscv_freg_ft1,
	riscv_freg_ft2,
	riscv_freg_ft3,
	riscv_freg_ft4,
	riscv_freg_ft5,
	riscv_freg_ft6,
	riscv_freg_ft7,
	riscv_freg_fs0,
	riscv_freg_fs1,
	riscv_freg_fa0,
	riscv_freg_fa1,
	riscv_freg_fa2,
	riscv_freg_fa3,
	riscv_freg_fa4,
	riscv_freg_fa5,
	riscv_freg_fa6,
	riscv_freg_fa7,
	riscv_freg_fs2,
	riscv_freg_fs3,
	riscv_freg_fs4,
	riscv_freg_fs5,
	riscv_freg_fs6,
	riscv_freg_fs7,
	riscv_freg_fs8,
	riscv_freg_fs9,
	riscv_freg_fs10,
	riscv_freg_fs11,
	riscv_freg_ft8,
	riscv_freg_ft9,
	riscv_freg_ft10,
	riscv_freg_ft11,
};

enum riscv_codec
{
	riscv_codec_unknown,
	riscv_codec_none,
	riscv_codec_u,
	riscv_codec_uj,
	riscv_codec_i,
	riscv_codec_i_sh5,
	riscv_codec_i_sh6,
	riscv_codec_s,
	riscv_codec_sb,
	riscv_codec_r,
	riscv_codec_r_m,
	riscv_codec_r4_m,
	riscv_codec_r_a,
	riscv_codec_r_l,
	riscv_codec_cb,
	riscv_codec_cb_imm,
	riscv_codec_cb_sh5,
	riscv_codec_cb_sh6,
	riscv_codec_ci,
	riscv_codec_ci_sh5,
	riscv_codec_ci_sh6,
	riscv_codec_ci_16sp,
	riscv_codec_ci_lwsp,
	riscv_codec_ci_ldsp,
	riscv_codec_ci_li,
	riscv_codec_ci_lui,
	riscv_codec_ci_none,
	riscv_codec_ciw_4spn,
	riscv_codec_cj,
	riscv_codec_cl_lw,
	riscv_codec_cl_ld,
	riscv_codec_cr,
	riscv_codec_cr_mv,
	riscv_codec_cr_jalr,
	riscv_codec_cr_jr,
	riscv_codec_cs,
	riscv_codec_cs_sw,
	riscv_codec_cs_sd,
	riscv_codec_css_swsp,
	riscv_codec_css_sdsp,
};

enum riscv_arg_name
{
	riscv_arg_name_none,
	riscv_arg_name_rd,
	riscv_arg_name_rs1,
	riscv_arg_name_rs2,
	riscv_arg_name_rs3,
	riscv_arg_name_frd,
	riscv_arg_name_frs1,
	riscv_arg_name_frs2,
	riscv_arg_name_frs3,
	riscv_arg_name_aq,
	riscv_arg_name_rl,
	riscv_arg_name_pred,
	riscv_arg_name_succ,
	riscv_arg_name_rm,
	riscv_arg_name_imm20,
	riscv_arg_name_oimm20,
	riscv_arg_name_jimm20,
	riscv_arg_name_imm12,
	riscv_arg_name_oimm12,
	riscv_arg_name_csr12,
	riscv_arg_name_simm12,
	riscv_arg_name_sbimm12,
	riscv_arg_name_zimm,
	riscv_arg_name_shamt5,
	riscv_arg_name_shamt6,
	riscv_arg_name_crd0,
	riscv_arg_name_crdq,
	riscv_arg_name_crs1q,
	riscv_arg_name_crs1rdq,
	riscv_arg_name_crs2q,
	riscv_arg_name_crd,
	riscv_arg_name_crs1,
	riscv_arg_name_crs1rd,
	riscv_arg_name_crs2,
	riscv_arg_name_cfrdq,
	riscv_arg_name_cfrs2q,
	riscv_arg_name_cfrs2,
	riscv_arg_name_cfrd,
	riscv_arg_name_cimmsh5,
	riscv_arg_name_cimmsh6,
	riscv_arg_name_cimmi,
	riscv_arg_name_cnzimmi,
	riscv_arg_name_cimmui,
	riscv_arg_name_cimmlwsp,
	riscv_arg_name_cimmldsp,
	riscv_arg_name_cimm16sp,
	riscv_arg_name_cimmj,
	riscv_arg_name_cimmb,
	riscv_arg_name_cimmswsp,
	riscv_arg_name_cimmsdsp,
	riscv_arg_name_cimmsqsp,
	riscv_arg_name_cimm4spn,
	riscv_arg_name_cimmw,
	riscv_arg_name_cimmd,
	riscv_arg_name_cimmq,
};

enum riscv_arg_type
{
	riscv_arg_type_none,
	riscv_arg_type_ireg5,
	riscv_arg_type_freg5,
	riscv_arg_type_arg1,
	riscv_arg_type_arg4,
	riscv_arg_type_arg3,
	riscv_arg_type_simm32,
	riscv_arg_type_offset32,
	riscv_arg_type_offset21,
	riscv_arg_type_simm12,
	riscv_arg_type_offset12,
	riscv_arg_type_uimm12,
	riscv_arg_type_offset13,
	riscv_arg_type_uimm5,
	riscv_arg_type_uimm6,
	riscv_arg_type_creg1,
	riscv_arg_type_creg3,
	riscv_arg_type_simm6,
	riscv_arg_type_simm18,
	riscv_arg_type_simm8,
	riscv_arg_type_simm9,
	riscv_arg_type_simm10,
	riscv_arg_type_simm7,
};

enum riscv_op
{
	riscv_op_unknown = 0,
	riscv_op_lui = 1,
	riscv_op_auipc = 2,
	riscv_op_jal = 3,
	riscv_op_jalr = 4,
	riscv_op_beq = 5,
	riscv_op_bne = 6,
	riscv_op_blt = 7,
	riscv_op_bge = 8,
	riscv_op_bltu = 9,
	riscv_op_bgeu = 10,
	riscv_op_lb = 11,
	riscv_op_lh = 12,
	riscv_op_lw = 13,
	riscv_op_lbu = 14,
	riscv_op_lhu = 15,
	riscv_op_sb = 16,
	riscv_op_sh = 17,
	riscv_op_sw = 18,
	riscv_op_addi = 19,
	riscv_op_slti = 20,
	riscv_op_sltiu = 21,
	riscv_op_xori = 22,
	riscv_op_ori = 23,
	riscv_op_andi = 24,
	riscv_op_slli_rv32i = 25,
	riscv_op_srli_rv32i = 26,
	riscv_op_srai_rv32i = 27,
	riscv_op_add = 28,
	riscv_op_sub = 29,
	riscv_op_sll = 30,
	riscv_op_slt = 31,
	riscv_op_sltu = 32,
	riscv_op_xor = 33,
	riscv_op_srl = 34,
	riscv_op_sra = 35,
	riscv_op_or = 36,
	riscv_op_and = 37,
	riscv_op_fence = 38,
	riscv_op_fence_i = 39,
	riscv_op_lwu = 40,
	riscv_op_ld = 41,
	riscv_op_sd = 42,
	riscv_op_slli_rv64i = 43,
	riscv_op_srli_rv64i = 44,
	riscv_op_srai_rv64i = 45,
	riscv_op_addiw = 46,
	riscv_op_slliw = 47,
	riscv_op_srliw = 48,
	riscv_op_sraiw = 49,
	riscv_op_addw = 50,
	riscv_op_subw = 51,
	riscv_op_sllw = 52,
	riscv_op_srlw = 53,
	riscv_op_sraw = 54,
	riscv_op_mul = 55,
	riscv_op_mulh = 56,
	riscv_op_mulhsu = 57,
	riscv_op_mulhu = 58,
	riscv_op_div = 59,
	riscv_op_divu = 60,
	riscv_op_rem = 61,
	riscv_op_remu = 62,
	riscv_op_mulw = 63,
	riscv_op_divw = 64,
	riscv_op_divuw = 65,
	riscv_op_remw = 66,
	riscv_op_remuw = 67,
	riscv_op_lr_w = 68,
	riscv_op_sc_w = 69,
	riscv_op_amoswap_w = 70,
	riscv_op_amoadd_w = 71,
	riscv_op_amoxor_w = 72,
	riscv_op_amoor_w = 73,
	riscv_op_amoand_w = 74,
	riscv_op_amomin_w = 75,
	riscv_op_amomax_w = 76,
	riscv_op_amominu_w = 77,
	riscv_op_amomaxu_w = 78,
	riscv_op_lr_d = 79,
	riscv_op_sc_d = 80,
	riscv_op_amoswap_d = 81,
	riscv_op_amoadd_d = 82,
	riscv_op_amoxor_d = 83,
	riscv_op_amoor_d = 84,
	riscv_op_amoand_d = 85,
	riscv_op_amomin_d = 86,
	riscv_op_amomax_d = 87,
	riscv_op_amominu_d = 88,
	riscv_op_amomaxu_d = 89,
	riscv_op_ecall = 90,
	riscv_op_ebreak = 91,
	riscv_op_uret = 92,
	riscv_op_sret = 93,
	riscv_op_hret = 94,
	riscv_op_mret = 95,
	riscv_op_dret = 96,
	riscv_op_sfence_vm = 97,
	riscv_op_wfi = 98,
	riscv_op_csrrw = 99,
	riscv_op_csrrs = 100,
	riscv_op_csrrc = 101,
	riscv_op_csrrwi = 102,
	riscv_op_csrrsi = 103,
	riscv_op_csrrci = 104,
	riscv_op_flw = 105,
	riscv_op_fsw = 106,
	riscv_op_fmadd_s = 107,
	riscv_op_fmsub_s = 108,
	riscv_op_fnmsub_s = 109,
	riscv_op_fnmadd_s = 110,
	riscv_op_fadd_s = 111,
	riscv_op_fsub_s = 112,
	riscv_op_fmul_s = 113,
	riscv_op_fdiv_s = 114,
	riscv_op_fsgnj_s = 115,
	riscv_op_fsgnjn_s = 116,
	riscv_op_fsgnjx_s = 117,
	riscv_op_fmin_s = 118,
	riscv_op_fmax_s = 119,
	riscv_op_fsqrt_s = 120,
	riscv_op_fle_s = 121,
	riscv_op_flt_s = 122,
	riscv_op_feq_s = 123,
	riscv_op_fcvt_w_s = 124,
	riscv_op_fcvt_wu_s = 125,
	riscv_op_fcvt_s_w = 126,
	riscv_op_fcvt_s_wu = 127,
	riscv_op_fmv_x_s = 128,
	riscv_op_fclass_s = 129,
	riscv_op_fmv_s_x = 130,
	riscv_op_fcvt_l_s = 131,
	riscv_op_fcvt_lu_s = 132,
	riscv_op_fcvt_s_l = 133,
	riscv_op_fcvt_s_lu = 134,
	riscv_op_fld = 135,
	riscv_op_fsd = 136,
	riscv_op_fmadd_d = 137,
	riscv_op_fmsub_d = 138,
	riscv_op_fnmsub_d = 139,
	riscv_op_fnmadd_d = 140,
	riscv_op_fadd_d = 141,
	riscv_op_fsub_d = 142,
	riscv_op_fmul_d = 143,
	riscv_op_fdiv_d = 144,
	riscv_op_fsgnj_d = 145,
	riscv_op_fsgnjn_d = 146,
	riscv_op_fsgnjx_d = 147,
	riscv_op_fmin_d = 148,
	riscv_op_fmax_d = 149,
	riscv_op_fcvt_s_d = 150,
	riscv_op_fcvt_d_s = 151,
	riscv_op_fsqrt_d = 152,
	riscv_op_fle_d = 153,
	riscv_op_flt_d = 154,
	riscv_op_feq_d = 155,
	riscv_op_fcvt_w_d = 156,
	riscv_op_fcvt_wu_d = 157,
	riscv_op_fcvt_d_w = 158,
	riscv_op_fcvt_d_wu = 159,
	riscv_op_fclass_d = 160,
	riscv_op_fcvt_l_d = 161,
	riscv_op_fcvt_lu_d = 162,
	riscv_op_fmv_x_d = 163,
	riscv_op_fcvt_d_l = 164,
	riscv_op_fcvt_d_lu = 165,
	riscv_op_fmv_d_x = 166,
	riscv_op_frcsr = 167,
	riscv_op_frrm = 168,
	riscv_op_frflags = 169,
	riscv_op_fscsr = 170,
	riscv_op_fsrm = 171,
	riscv_op_fsflags = 172,
	riscv_op_fsrmi = 173,
	riscv_op_fsflagsi = 174,
	riscv_op_c_addi4spn = 175,
	riscv_op_c_fld = 176,
	riscv_op_c_lw = 177,
	riscv_op_c_flw = 178,
	riscv_op_c_fsd = 179,
	riscv_op_c_sw = 180,
	riscv_op_c_fsw = 181,
	riscv_op_c_nop = 182,
	riscv_op_c_addi = 183,
	riscv_op_c_jal = 184,
	riscv_op_c_li = 185,
	riscv_op_c_addi16sp = 186,
	riscv_op_c_lui = 187,
	riscv_op_c_srli_rv32c = 188,
	riscv_op_c_srai_rv32c = 189,
	riscv_op_c_andi = 190,
	riscv_op_c_sub = 191,
	riscv_op_c_xor = 192,
	riscv_op_c_or = 193,
	riscv_op_c_and = 194,
	riscv_op_c_subw = 195,
	riscv_op_c_addw = 196,
	riscv_op_c_j = 197,
	riscv_op_c_beqz = 198,
	riscv_op_c_bnez = 199,
	riscv_op_c_slli_rv32c = 200,
	riscv_op_c_fldsp = 201,
	riscv_op_c_lwsp = 202,
	riscv_op_c_flwsp = 203,
	riscv_op_c_jr = 204,
	riscv_op_c_mv = 205,
	riscv_op_c_ebreak = 206,
	riscv_op_c_jalr = 207,
	riscv_op_c_add = 208,
	riscv_op_c_fsdsp = 209,
	riscv_op_c_swsp = 210,
	riscv_op_c_fswsp = 211,
	riscv_op_c_ld = 212,
	riscv_op_c_sd = 213,
	riscv_op_c_addiw = 214,
	riscv_op_c_srli_rv64c = 215,
	riscv_op_c_srai_rv64c = 216,
	riscv_op_c_slli_rv64c = 217,
	riscv_op_c_ldsp = 218,
	riscv_op_c_sdsp = 219,
};

struct riscv_comp_data
{
	const int op;
	const rvc_constraint* constraints;
};

struct riscv_arg_data
{
	const riscv_arg_name arg_name;
	const riscv_arg_type arg_type;
	const riscv_type type;
	const unsigned int width;
};

extern const riscv_codec riscv_inst_codec[];
extern const char* riscv_inst_format[];
extern const riscv_arg_data* riscv_inst_arg_data[];
extern const uint64_t riscv_inst_match[];
extern const uint64_t riscv_inst_mask[];
extern const riscv_comp_data* riscv_inst_comp_rv32[];
extern const riscv_comp_data* riscv_inst_comp_rv64[];
extern const int riscv_inst_decomp_rv32[];
extern const int riscv_inst_decomp_rv64[];

#ifdef __cplusplus
}
#endif

#endif
