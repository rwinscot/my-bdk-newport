#ifndef __BDK_CSRS_CPT_H__
#define __BDK_CSRS_CPT_H__
/* This file is auto-generated. Do not edit */

/***********************license start***********************************
* Copyright (C) 2019 Marvell International Ltd.
* SPDX-License-Identifier: BSD-3-Clause
* https://spdx.org/licenses
***********************license end**************************************/


/**
 * @file
 *
 * Configuration and status register (CSR) address and type definitions for
 * OcteonTX CPT.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration cpt_af_int_vec_e
 *
 * CPT AF MSI-X Vector Enumeration
 * Enumerates the MSI-X interrupt vectors.
 */
#define BDK_CPT_AF_INT_VEC_E_FLTX(a) (0 + (a))
#define BDK_CPT_AF_INT_VEC_E_RAS (3)
#define BDK_CPT_AF_INT_VEC_E_RVU (2)

/**
 * Enumeration cpt_bar_e
 *
 * CPT Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define BDK_CPT_BAR_E_CPTX_PF_BAR0(a) (0x872000000000ll + 0x1000000000ll * (a))
#define BDK_CPT_BAR_E_CPTX_PF_BAR0_SIZE 0x10000000ull
#define BDK_CPT_BAR_E_CPTX_PF_BAR4(a) (0x872010000000ll + 0x1000000000ll * (a))
#define BDK_CPT_BAR_E_CPTX_PF_BAR4_SIZE 0x100000ull
#define BDK_CPT_BAR_E_CPTX_VFX_BAR0(a,b) (0x872020000000ll + 0x1000000000ll * (a) + 0x100000ll * (b))
#define BDK_CPT_BAR_E_CPTX_VFX_BAR0_SIZE 0x100000ull
#define BDK_CPT_BAR_E_CPTX_VFX_BAR4(a,b) (0x872030000000ll + 0x1000000000ll * (a) + 0x100000ll * (b))
#define BDK_CPT_BAR_E_CPTX_VFX_BAR4_SIZE 0x100000ull

/**
 * Enumeration cpt_comp_e
 *
 * CPT Completion Enumeration
 * Enumerates the values of CPT_RES_S[COMPCODE].
 */
#define BDK_CPT_COMP_E_FAULT (2)
#define BDK_CPT_COMP_E_GOOD (1)
#define BDK_CPT_COMP_E_HWERR (4)
#define BDK_CPT_COMP_E_INSTERR (5)
#define BDK_CPT_COMP_E_NOTDONE (0)
#define BDK_CPT_COMP_E_SWERR (3)

/**
 * Enumeration cpt_engine_err_type_e
 *
 * CPT Engine Error Code Enumeration
 * Enumerates the values of CPT_AF_EXE_ERR_INFO[ERRCODE].
 */
#define BDK_CPT_ENGINE_ERR_TYPE_E_BUS (0x20)
#define BDK_CPT_ENGINE_ERR_TYPE_E_GE (8)
#define BDK_CPT_ENGINE_ERR_TYPE_E_NOERR (0)
#define BDK_CPT_ENGINE_ERR_TYPE_E_RF (1)
#define BDK_CPT_ENGINE_ERR_TYPE_E_UC (2)
#define BDK_CPT_ENGINE_ERR_TYPE_E_WD (4)

/**
 * Enumeration cpt_eop_e
 *
 * CPT EOP (EPCI Opcodes) Enumeration
 * This enumerates opcodes on the EPCI bus between the CPT controller and engines.
 */
#define BDK_CPT_EOP_E_ATM_FAA64 (0x3b)
#define BDK_CPT_EOP_E_DMA_RD_LDD (8)
#define BDK_CPT_EOP_E_DMA_RD_LDE (0xb)
#define BDK_CPT_EOP_E_DMA_RD_LDI (2)
#define BDK_CPT_EOP_E_DMA_RD_LDT (1)
#define BDK_CPT_EOP_E_DMA_RD_LDWB (0xd)
#define BDK_CPT_EOP_E_DMA_RD_LDY (6)
#define BDK_CPT_EOP_E_DMA_WR_STP (0x12)
#define BDK_CPT_EOP_E_DMA_WR_STT (0x11)
#define BDK_CPT_EOP_E_DMA_WR_STY (0xe)
#define BDK_CPT_EOP_E_ERR_REQUEST (0xfb)
#define BDK_CPT_EOP_E_MEMB (0xfd)
#define BDK_CPT_EOP_E_NEW_WORK_REQ (0xff)
#define BDK_CPT_EOP_E_RANDOM1_REQ (0x61)
#define BDK_CPT_EOP_E_RANDOMP_REQ (0x62)
#define BDK_CPT_EOP_E_RANDOM_REQ (0x60)
#define BDK_CPT_EOP_E_UCODE_REQ (0xfc)

/**
 * Enumeration cpt_lf_int_vec_e
 *
 * CPT LF MSI-X Vector Enumeration
 * Enumerates the MSI-X interrupt vectors.
 */
#define BDK_CPT_LF_INT_VEC_E_DONE (1)
#define BDK_CPT_LF_INT_VEC_E_MISC (0)

/**
 * Enumeration cpt_pf_int_vec_e
 *
 * CPT PF MSI-X Vector Enumeration
 * Enumerates the MSI-X interrupt vectors.
 */
#define BDK_CPT_PF_INT_VEC_E_ECC0 (0)
#define BDK_CPT_PF_INT_VEC_E_EXEC (1)
#define BDK_CPT_PF_INT_VEC_E_MBOXX_CN81XX(a) (2 + (a))
#define BDK_CPT_PF_INT_VEC_E_MBOXX_CN83XX(a) (3 + (a))
#define BDK_CPT_PF_INT_VEC_E_UCERR (2)

/**
 * Enumeration cpt_psb_acc_e
 *
 * CPT Power Serial Bus Accumulator Enumeration
 * Enumerates the CPT accumulators for CPT PSB slaves, which correspond to index {b} of
 * PSBS_SYS()_ACCUM().
 */
#define BDK_CPT_PSB_ACC_E_RSVD3 (3)
#define BDK_CPT_PSB_ACC_E_STARTED_AE (2)
#define BDK_CPT_PSB_ACC_E_STARTED_IE (1)
#define BDK_CPT_PSB_ACC_E_STARTED_SE (0)

/**
 * Enumeration cpt_psb_event_e
 *
 * CPT Power Serial Bus Event Enumeration
 * Enumerates the event numbers for CPT PSB slaves, which correspond to index {b} of
 * PSBS_SYS()_EVENT()_CFG.
 */
#define BDK_CPT_PSB_EVENT_E_BUSY_AE_BITX(a) (0x10 + (a))
#define BDK_CPT_PSB_EVENT_E_BUSY_IE_BITX(a) (8 + (a))
#define BDK_CPT_PSB_EVENT_E_BUSY_SE_BITX(a) (0 + (a))
#define BDK_CPT_PSB_EVENT_E_STARTED_AE (0x22)
#define BDK_CPT_PSB_EVENT_E_STARTED_IE (0x21)
#define BDK_CPT_PSB_EVENT_E_STARTED_SE (0x20)

/**
 * Enumeration cpt_rams_e
 *
 * CPT RAM Field Enumeration
 * Enumerates the relative bit positions within CPT()_PF_ECC0_CTL[CDIS].
 */
#define BDK_CPT_RAMS_E_CDEI_FIFO0 (0x1a)
#define BDK_CPT_RAMS_E_CDEI_FIFO1 (0x1b)
#define BDK_CPT_RAMS_E_CDEI_UCODE (0x12)
#define BDK_CPT_RAMS_E_COMP_ARRAY0 (0x13)
#define BDK_CPT_RAMS_E_COMP_ARRAY1 (0x14)
#define BDK_CPT_RAMS_E_COMP_FIFO (0xf)
#define BDK_CPT_RAMS_E_CQM_BPTR (3)
#define BDK_CPT_RAMS_E_CQM_CTLMEM (2)
#define BDK_CPT_RAMS_E_CQM_DONE_CNT (0xd)
#define BDK_CPT_RAMS_E_CQM_DONE_TIMER (0xe)
#define BDK_CPT_RAMS_E_CQM_GMID (4)
#define BDK_CPT_RAMS_E_CQM_INSTFIF0 (5)
#define BDK_CPT_RAMS_E_CQM_INSTFIF1 (6)
#define BDK_CPT_RAMS_E_CQM_INSTFIF2 (7)
#define BDK_CPT_RAMS_E_CQM_INSTFIF3 (8)
#define BDK_CPT_RAMS_E_CQM_INSTFIF4 (9)
#define BDK_CPT_RAMS_E_CQM_INSTFIF5 (0xa)
#define BDK_CPT_RAMS_E_CQM_INSTFIF6 (0xb)
#define BDK_CPT_RAMS_E_CQM_INSTFIF7 (0xc)
#define BDK_CPT_RAMS_E_CSR_VMEM (0x15)
#define BDK_CPT_RAMS_E_EPCO_FIFO0 (0x1c)
#define BDK_CPT_RAMS_E_EPCO_FIFO1 (0x1d)
#define BDK_CPT_RAMS_E_FPA_MEM (0x11)
#define BDK_CPT_RAMS_E_MBOX_MEM (0x10)
#define BDK_CPT_RAMS_E_NCBI_DATFIF (0)
#define BDK_CPT_RAMS_E_NCBO_MEM0 (1)
#define BDK_CPT_RAMS_E_RSP_INST (0x17)
#define BDK_CPT_RAMS_E_RSP_MAP (0x16)
#define BDK_CPT_RAMS_E_RSP_NCBO (0x18)
#define BDK_CPT_RAMS_E_RSP_RNM (0x19)

/**
 * Enumeration cpt_vf_int_vec_e
 *
 * CPT VF MSI-X Vector Enumeration
 * Enumerates the MSI-X interrupt vectors.
 */
#define BDK_CPT_VF_INT_VEC_E_DONE (1)
#define BDK_CPT_VF_INT_VEC_E_MISC (0)

/**
 * Structure cpt_fc_write_s
 *
 * CPT Flow Control Write Structure
 * The structure CPT writes to memory when queue flow control is enabled. CPT writes the
 * CPT_FC_WRITE_S for a queue to this LF IOVA: CPT_LF_Q_BASE[ADDR] \<\< 7.
 *
 * CPT stores the two 64-bit words of this structure in memory in little-endian format
 * unless CPT_AF_LF()_PTR_CTL[INST_BE] is set. If CPT_AF_LF()_PTR_CTL[INST_BE] is set,
 * CPT swaps the bytes within each 64-bit word.
 */
union bdk_cpt_fc_write_s
{
    uint64_t u[2];
    struct bdk_cpt_fc_write_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t qsize                 : 32; /**< [ 31:  0] The memory queue size value. See also CPT_LF_CTL[FC_HYST_BITS,FC_UP_CROSSING,FC_ENA]
                                                                 and CPT_AF_CTL[FC_STYPE]. When enabled, CPT periodically stores a CPT_FC_WRITE_S
                                                                 for the queue to memory. CPT_LF_CTL[FC_HYST_BITS] controls how frequently CPT
                                                                 writes the CPT_FC_WRITE_S for the queue.

                                                                 [QSIZE] is the number of CPT_INST_S's in the queue in memory at the time
                                                                 of the last CPT_FC_WRITE_S write:
                                                                  (CPT_LF_Q_INST_PTR[XQ_XOR] * CPT_LF_Q_SIZE[SIZE_DIV40] * 40) +
                                                                  CPT_LF_Q_INST_PTR[NQ_PTR] - CPT_LF_Q_INST_PTR[DQ_PTR]. */
#else /* Word 0 - Little Endian */
        uint64_t qsize                 : 32; /**< [ 31:  0] The memory queue size value. See also CPT_LF_CTL[FC_HYST_BITS,FC_UP_CROSSING,FC_ENA]
                                                                 and CPT_AF_CTL[FC_STYPE]. When enabled, CPT periodically stores a CPT_FC_WRITE_S
                                                                 for the queue to memory. CPT_LF_CTL[FC_HYST_BITS] controls how frequently CPT
                                                                 writes the CPT_FC_WRITE_S for the queue.

                                                                 [QSIZE] is the number of CPT_INST_S's in the queue in memory at the time
                                                                 of the last CPT_FC_WRITE_S write:
                                                                  (CPT_LF_Q_INST_PTR[XQ_XOR] * CPT_LF_Q_SIZE[SIZE_DIV40] * 40) +
                                                                  CPT_LF_Q_INST_PTR[NQ_PTR] - CPT_LF_Q_INST_PTR[DQ_PTR]. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t reserved_64_127       : 64;
#else /* Word 1 - Little Endian */
        uint64_t reserved_64_127       : 64;
#endif /* Word 1 - End */
    } s;
    /* struct bdk_cpt_fc_write_s_s cn; */
};

/**
 * Structure cpt_inst_s
 *
 * CPT Instruction Structure
 * This structure specifies the CPT instruction layout.
 * _ CPT_INST_S's sent to CPT_LF_NQ() in CPT (via an LMTST in the usual case where
 * an AP initiates them) must always be in little-endian format, same as all other
 * CSR-like accesses.
 * _ CPT_INST_S's buffered by CPT (offset of CPT_LF_Q_BASE[ADDR]) are in an
 * implementation-defined format.
 */
union bdk_cpt_inst_s
{
    uint64_t u[8];
    struct bdk_cpt_inst_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_3_63         : 61;
        uint64_t nixtxl                : 3;  /**< [  2:  0] When [NIXTXL]!=0x0, [NIXTXL]+1 is the length in 128-bit words of the LMTST
                                                                 portion of the NIX TX descriptor (pointed at by [NIXTX_ADDR]) that CPT may
                                                                 submit (via an effective LMTST) to NIX TX after executing the CPT_INST_S.
                                                                 The length of the LMTST portion of the NIX TX descriptor is a multiple of
                                                                 16 bytes between 32 and 128 bytes.

                                                                 CPT will NOT submit a descriptor to NIX TX for a CPT_INST_S in any of these
                                                                 conditions:
                                                                 * [NIXTXL]=0x0.
                                                                 * CPT_AF_LF()_CTL[NIXTX_EN] is clear (see below).
                                                                 * An SMMU fault occurs on the CPT_RES_S write to [RES_ADDR]. (CPT sets
                                                                 CPT_LF_MISC_INT[NWRP] in this case).
                                                                 * The final CPT_RES_S[COMPCODE]!=CPT_COMP_E::GOOD (i.e. CPT hardware detects
                                                                 an error for the CPT_INST_S).
                                                                 * The final CPT_RES_S[UC_COMPCODE]!=0x0 (i.e. CPT engine microcode detects an
                                                                 error for the CPT_INST_S).

                                                                 Otherwise, whenever [NIXTXL]!=0x0, CPT submits the LMTST portion of the
                                                                 descriptor from [NIXTX_ADDR] to NIX TX.

                                                                 Whenever CPT submits the LMTST portion of a descriptor to NIX TX for
                                                                 the CPT_INST_S:
                                                                 * CPT will NOT increment CPT_LF_DONE[DONE] for the CPT_INST_S,
                                                                   regardless of the [DONEINT] value, and.
                                                                 * CPT will NOT submit a WQE for the CPT_INST_S, regardless of the
                                                                   [WQE_PTR] value. (Note that NIX TX will submit a WQE after sending
                                                                   the packet if the NIX TX descriptor contains a NIX_SEND_WORK_S.).
                                                                 * [RES_ADDR] behavior is unmodified, i.e. CPT will write a CPT_RES_S
                                                                   when it sends NIX TX a descriptor. The CPT_RES_S write will complete
                                                                   before NIX TX receives the descriptor.

                                                                 If [NIXTXL]!=0x0, but CPT does not submit a descriptor to NIX TX,
                                                                 CPT [DONEINT] and [WQE_PTR] behavior is unchanged by [NIXTXL]: CPT may
                                                                 increment CPT_LF_DONE[DONE], and may submit a WQE to SSO.

                                                                 CPT initiates the final NIX descriptor submit after the CPT_RES_S write
                                                                 (see [RES_ADDR]).

                                                                 CPT_AF_LF()_CTL[NIXTX_EN] must be set when [NIXTXL]!=0x0. (NIX sets
                                                                 CPT_LF_MISC_INT[NQERR] and signals CPT_COMP_E::INSTERR when the
                                                                 instruction violates this rule.) See also CPT_AF_LF()_CTL[NIX_SEL] and
                                                                 CPT_AF_LF()_CTL2[NIX_PF_FUNC], which select the NIX and NIX function
                                                                 that the descriptor will be enqueued to.

                                                                 [QORD] must be set when [NIXTXL]!=0x0. (NIX sets CPT_LF_MISC_INT[NQERR]
                                                                 and signals CPT_COMP_E::INSTERR when the instruction violates this
                                                                 rule.) If two CPT_INST_S's in the same CPT LF/queue are destined
                                                                 for the same NIX TX send queue, then their transmit order will
                                                                 match their CPT enqueue order. NIX_SEND_HDR_S[SQ] in the NIX TX descriptor
                                                                 selects the NIX TX send queue. */
#else /* Word 0 - Little Endian */
        uint64_t nixtxl                : 3;  /**< [  2:  0] When [NIXTXL]!=0x0, [NIXTXL]+1 is the length in 128-bit words of the LMTST
                                                                 portion of the NIX TX descriptor (pointed at by [NIXTX_ADDR]) that CPT may
                                                                 submit (via an effective LMTST) to NIX TX after executing the CPT_INST_S.
                                                                 The length of the LMTST portion of the NIX TX descriptor is a multiple of
                                                                 16 bytes between 32 and 128 bytes.

                                                                 CPT will NOT submit a descriptor to NIX TX for a CPT_INST_S in any of these
                                                                 conditions:
                                                                 * [NIXTXL]=0x0.
                                                                 * CPT_AF_LF()_CTL[NIXTX_EN] is clear (see below).
                                                                 * An SMMU fault occurs on the CPT_RES_S write to [RES_ADDR]. (CPT sets
                                                                 CPT_LF_MISC_INT[NWRP] in this case).
                                                                 * The final CPT_RES_S[COMPCODE]!=CPT_COMP_E::GOOD (i.e. CPT hardware detects
                                                                 an error for the CPT_INST_S).
                                                                 * The final CPT_RES_S[UC_COMPCODE]!=0x0 (i.e. CPT engine microcode detects an
                                                                 error for the CPT_INST_S).

                                                                 Otherwise, whenever [NIXTXL]!=0x0, CPT submits the LMTST portion of the
                                                                 descriptor from [NIXTX_ADDR] to NIX TX.

                                                                 Whenever CPT submits the LMTST portion of a descriptor to NIX TX for
                                                                 the CPT_INST_S:
                                                                 * CPT will NOT increment CPT_LF_DONE[DONE] for the CPT_INST_S,
                                                                   regardless of the [DONEINT] value, and.
                                                                 * CPT will NOT submit a WQE for the CPT_INST_S, regardless of the
                                                                   [WQE_PTR] value. (Note that NIX TX will submit a WQE after sending
                                                                   the packet if the NIX TX descriptor contains a NIX_SEND_WORK_S.).
                                                                 * [RES_ADDR] behavior is unmodified, i.e. CPT will write a CPT_RES_S
                                                                   when it sends NIX TX a descriptor. The CPT_RES_S write will complete
                                                                   before NIX TX receives the descriptor.

                                                                 If [NIXTXL]!=0x0, but CPT does not submit a descriptor to NIX TX,
                                                                 CPT [DONEINT] and [WQE_PTR] behavior is unchanged by [NIXTXL]: CPT may
                                                                 increment CPT_LF_DONE[DONE], and may submit a WQE to SSO.

                                                                 CPT initiates the final NIX descriptor submit after the CPT_RES_S write
                                                                 (see [RES_ADDR]).

                                                                 CPT_AF_LF()_CTL[NIXTX_EN] must be set when [NIXTXL]!=0x0. (NIX sets
                                                                 CPT_LF_MISC_INT[NQERR] and signals CPT_COMP_E::INSTERR when the
                                                                 instruction violates this rule.) See also CPT_AF_LF()_CTL[NIX_SEL] and
                                                                 CPT_AF_LF()_CTL2[NIX_PF_FUNC], which select the NIX and NIX function
                                                                 that the descriptor will be enqueued to.

                                                                 [QORD] must be set when [NIXTXL]!=0x0. (NIX sets CPT_LF_MISC_INT[NQERR]
                                                                 and signals CPT_COMP_E::INSTERR when the instruction violates this
                                                                 rule.) If two CPT_INST_S's in the same CPT LF/queue are destined
                                                                 for the same NIX TX send queue, then their transmit order will
                                                                 match their CPT enqueue order. NIX_SEND_HDR_S[SQ] in the NIX TX descriptor
                                                                 selects the NIX TX send queue. */
        uint64_t reserved_3_63         : 61;
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t res_addr              : 64; /**< [127: 64] Result IOVA.
                                                                 If nonzero, specifies where to write CPT_RES_S.
                                                                 If zero, no result structure will be written.
                                                                 Address must be 16-byte aligned.

                                                                 Bits \<63:49\> are ignored by hardware; software should use a sign-extended bit
                                                                 \<48\> for forward compatibility. */
#else /* Word 1 - Little Endian */
        uint64_t res_addr              : 64; /**< [127: 64] Result IOVA.
                                                                 If nonzero, specifies where to write CPT_RES_S.
                                                                 If zero, no result structure will be written.
                                                                 Address must be 16-byte aligned.

                                                                 Bits \<63:49\> are ignored by hardware; software should use a sign-extended bit
                                                                 \<48\> for forward compatibility. */
#endif /* Word 1 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 2 - Big Endian */
        uint64_t rvu_pf_func           : 16; /**< [191:176] Must be zero in the normal case when CPT_AF_LF()_CTL[PF_FUNC_INST]=0.

                                                                 RVU_PF_FUNC_S describes the format of [RVU_PF_FUNC].

                                                                 See also CPT_AF_LF()_CTL[PF_FUNC_INST] and [SSO_PF_FUNC/NIXTX_ADDR\<59:44\>]. When
                                                                 CPT_AF_LF()_CTL[PF_FUNC_INST]=1, CPT executes the CPT_INST_S within
                                                                 the function [RVU_PF_FUNC]. NIX RX inline IPSEC logic fills [RVU_PF_FUNC] with
                                                                 NIX_PRIV_LF()_CFG[PF_FUNC] in this case. When CPT_AF_LF()_CTL[PF_FUNC_INST]=0, as
                                                                 normal, CPT executes the CPT_INST_S within CPT_PRIV_LF()_CFG[PF_FUNC], the function
                                                                 the queue/LF belongs to.

                                                                 See also CPT_AF_LF()_CTL2[NIX_PF_FUNC,SSO_PF_FUNC] and
                                                                 [SSO_PF_FUNC/NIXTX_ADDR\<59:44\>]. */
        uint64_t reserved_172_175      : 4;
        uint64_t grp                   : 10; /**< [171:162] If [WQ_PTR] is nonzero, the SSO guest-group to use when CPT submits work to
                                                                 SSO.
                                                                 For the SSO to not discard the add-work request, FPA_PF_MAP() must map
                                                                 [GRP] and CPT()_PF_Q()_GMCTL[GMID] as valid. */
        uint64_t tt                    : 2;  /**< [161:160] If [WQ_PTR] is nonzero, the SSO tag type to use when CPT submits work to SSO. */
        uint64_t tag                   : 32; /**< [159:128] If [WQ_PTR] is nonzero, the SSO tag to use when CPT submits work to SSO. */
#else /* Word 2 - Little Endian */
        uint64_t tag                   : 32; /**< [159:128] If [WQ_PTR] is nonzero, the SSO tag to use when CPT submits work to SSO. */
        uint64_t tt                    : 2;  /**< [161:160] If [WQ_PTR] is nonzero, the SSO tag type to use when CPT submits work to SSO. */
        uint64_t grp                   : 10; /**< [171:162] If [WQ_PTR] is nonzero, the SSO guest-group to use when CPT submits work to
                                                                 SSO.
                                                                 For the SSO to not discard the add-work request, FPA_PF_MAP() must map
                                                                 [GRP] and CPT()_PF_Q()_GMCTL[GMID] as valid. */
        uint64_t reserved_172_175      : 4;
        uint64_t rvu_pf_func           : 16; /**< [191:176] Must be zero in the normal case when CPT_AF_LF()_CTL[PF_FUNC_INST]=0.

                                                                 RVU_PF_FUNC_S describes the format of [RVU_PF_FUNC].

                                                                 See also CPT_AF_LF()_CTL[PF_FUNC_INST] and [SSO_PF_FUNC/NIXTX_ADDR\<59:44\>]. When
                                                                 CPT_AF_LF()_CTL[PF_FUNC_INST]=1, CPT executes the CPT_INST_S within
                                                                 the function [RVU_PF_FUNC]. NIX RX inline IPSEC logic fills [RVU_PF_FUNC] with
                                                                 NIX_PRIV_LF()_CFG[PF_FUNC] in this case. When CPT_AF_LF()_CTL[PF_FUNC_INST]=0, as
                                                                 normal, CPT executes the CPT_INST_S within CPT_PRIV_LF()_CFG[PF_FUNC], the function
                                                                 the queue/LF belongs to.

                                                                 See also CPT_AF_LF()_CTL2[NIX_PF_FUNC,SSO_PF_FUNC] and
                                                                 [SSO_PF_FUNC/NIXTX_ADDR\<59:44\>]. */
#endif /* Word 2 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 3 - Big Endian */
        uint64_t reserved_192_255      : 64;
#else /* Word 3 - Little Endian */
        uint64_t reserved_192_255      : 64;
#endif /* Word 3 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 4 - Big Endian */
        uint64_t reserved_256_319      : 64;
#else /* Word 4 - Little Endian */
        uint64_t reserved_256_319      : 64;
#endif /* Word 4 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 5 - Big Endian */
        uint64_t reserved_320_383      : 64;
#else /* Word 5 - Little Endian */
        uint64_t reserved_320_383      : 64;
#endif /* Word 5 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 6 - Big Endian */
        uint64_t reserved_384_447      : 64;
#else /* Word 6 - Little Endian */
        uint64_t reserved_384_447      : 64;
#endif /* Word 6 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 7 - Big Endian */
        uint64_t reserved_448_511      : 64;
#else /* Word 7 - Little Endian */
        uint64_t reserved_448_511      : 64;
#endif /* Word 7 - End */
    } s;
    struct bdk_cpt_inst_s_cn8
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_17_63        : 47;
        uint64_t doneint               : 1;  /**< [ 16: 16] Done interrupt.
                                                                 0 = No interrupts related to this instruction.
                                                                 1 = When the instruction completes, CPT()_VQ()_DONE[DONE] will be incremented,
                                                                 and based on the rules described there an interrupt may occur. */
        uint64_t reserved_8_15         : 8;
        uint64_t reserved_0_7          : 8;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_7          : 8;
        uint64_t reserved_8_15         : 8;
        uint64_t doneint               : 1;  /**< [ 16: 16] Done interrupt.
                                                                 0 = No interrupts related to this instruction.
                                                                 1 = When the instruction completes, CPT()_VQ()_DONE[DONE] will be incremented,
                                                                 and based on the rules described there an interrupt may occur. */
        uint64_t reserved_17_63        : 47;
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t res_addr              : 64; /**< [127: 64] Result IOVA.
                                                                 If nonzero, specifies where to write CPT_RES_S.
                                                                 If zero, no result structure will be written.
                                                                 Address must be 16-byte aligned.

                                                                 Bits \<63:49\> are ignored by hardware; software should use a sign-extended bit
                                                                 \<48\> for forward compatibility. */
#else /* Word 1 - Little Endian */
        uint64_t res_addr              : 64; /**< [127: 64] Result IOVA.
                                                                 If nonzero, specifies where to write CPT_RES_S.
                                                                 If zero, no result structure will be written.
                                                                 Address must be 16-byte aligned.

                                                                 Bits \<63:49\> are ignored by hardware; software should use a sign-extended bit
                                                                 \<48\> for forward compatibility. */
#endif /* Word 1 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 2 - Big Endian */
        uint64_t reserved_172_191      : 20;
        uint64_t grp                   : 10; /**< [171:162] If [WQ_PTR] is nonzero, the SSO guest-group to use when CPT submits work to
                                                                 SSO.
                                                                 For the SSO to not discard the add-work request, FPA_PF_MAP() must map
                                                                 [GRP] and CPT()_PF_Q()_GMCTL[GMID] as valid. */
        uint64_t tt                    : 2;  /**< [161:160] If [WQ_PTR] is nonzero, the SSO tag type to use when CPT submits work to SSO. */
        uint64_t tag                   : 32; /**< [159:128] If [WQ_PTR] is nonzero, the SSO tag to use when CPT submits work to SSO. */
#else /* Word 2 - Little Endian */
        uint64_t tag                   : 32; /**< [159:128] If [WQ_PTR] is nonzero, the SSO tag to use when CPT submits work to SSO. */
        uint64_t tt                    : 2;  /**< [161:160] If [WQ_PTR] is nonzero, the SSO tag type to use when CPT submits work to SSO. */
        uint64_t grp                   : 10; /**< [171:162] If [WQ_PTR] is nonzero, the SSO guest-group to use when CPT submits work to
                                                                 SSO.
                                                                 For the SSO to not discard the add-work request, FPA_PF_MAP() must map
                                                                 [GRP] and CPT()_PF_Q()_GMCTL[GMID] as valid. */
        uint64_t reserved_172_191      : 20;
#endif /* Word 2 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 3 - Big Endian */
        uint64_t wq_ptr                : 64; /**< [255:192] If [WQ_PTR] is nonzero, it is a pointer to a work-queue entry that CPT submits
                                                                 work to SSO after all context, output data, and result write operations are
                                                                 visible to other CNXXXX units and the cores.

                                                                 Bits \<2:0\> must be zero.  Bits \<63:49\> are ignored by hardware; software should
                                                                 use a sign-extended bit \<48\> for forward compatibility.

                                                                 Internal:
                                                                 Bits \<63:49\>, \<2:0\> are ignored by hardware, treated as always 0x0. */
#else /* Word 3 - Little Endian */
        uint64_t wq_ptr                : 64; /**< [255:192] If [WQ_PTR] is nonzero, it is a pointer to a work-queue entry that CPT submits
                                                                 work to SSO after all context, output data, and result write operations are
                                                                 visible to other CNXXXX units and the cores.

                                                                 Bits \<2:0\> must be zero.  Bits \<63:49\> are ignored by hardware; software should
                                                                 use a sign-extended bit \<48\> for forward compatibility.

                                                                 Internal:
                                                                 Bits \<63:49\>, \<2:0\> are ignored by hardware, treated as always 0x0. */
#endif /* Word 3 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 4 - Big Endian */
        uint64_t ei0                   : 64; /**< [319:256] Engine instruction word 0. Passed to the AE/SE. */
#else /* Word 4 - Little Endian */
        uint64_t ei0                   : 64; /**< [319:256] Engine instruction word 0. Passed to the AE/SE. */
#endif /* Word 4 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 5 - Big Endian */
        uint64_t ei1                   : 64; /**< [383:320] Engine instruction word 1. Passed to the AE/SE. */
#else /* Word 5 - Little Endian */
        uint64_t ei1                   : 64; /**< [383:320] Engine instruction word 1. Passed to the AE/SE. */
#endif /* Word 5 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 6 - Big Endian */
        uint64_t ei2                   : 64; /**< [447:384] Engine instruction word 2. Passed to the AE/SE. */
#else /* Word 6 - Little Endian */
        uint64_t ei2                   : 64; /**< [447:384] Engine instruction word 2. Passed to the AE/SE. */
#endif /* Word 6 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 7 - Big Endian */
        uint64_t ei3                   : 64; /**< [511:448] Engine instruction word 3. Passed to the AE/SE. */
#else /* Word 7 - Little Endian */
        uint64_t ei3                   : 64; /**< [511:448] Engine instruction word 3. Passed to the AE/SE. */
#endif /* Word 7 - End */
    } cn8;
    struct bdk_cpt_inst_s_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t nixtx_addr            : 60; /**< [ 63:  4] When [NIXTXL]!=0x0, [NIXTX_ADDR] points to a NIX TX descriptor:

                                                                 * [NIXTX_ADDR] must be nonzero, and must point to the
                                                                 LMTST portion of the descriptor that CPT may submit to NIX TX after
                                                                 completing the CPT_INST_S.

                                                                 * [NIXTX_ADDR] is a 128-bit word address (i.e. \<3:0\> is missing from a byte
                                                                 address equivalent). The start of the LMTST portion of the NIX TX descriptor
                                                                 must be aligned to a 128-bit / 16 byte boundary.

                                                                 * CPT doesn't modify the descriptor bytes that it passes to NIXTX. NIXTX
                                                                 will receive the bytes in the same format as they are in memory, including
                                                                 endianness. CPT always passes the descriptor bytes to the NIX function
                                                                 CPT_AF_LF()_CTL2[NIX_PF_FUNC] in the NIXTX selected by
                                                                 CPT_AF_LF()_CTL[NIX_SEL].

                                                                 * Upon an SMMU fault reading the descriptor from [NIXTX_ADDR], CPT sets
                                                                 CPT_LF_MISC_INT[FAULT], causes CPT_COMP_E::FAULT, and if
                                                                 CPT_AF_LF()_CTL[CONT_ERR]=0, also clears CPT_LF_CTL[ENA], necessitating
                                                                 an LF/queue reset.  If CPT_AF_CTL[RD_PSN_IGN]=0, CPT also does these
                                                                 things when it encounters poison on the descriptor read.

                                                                 When [NIXTXL]=0x0, [NIXTX_ADDR] is normally reserved and must be zero.

                                                                 The only exception to this rule when [NIXTXL]=0x0 is for CPT instructions
                                                                 created by NIX RX (i.e. when CPT_AF_LF()_CTL[PF_FUNC_INST]=1):

                                                                 * NIXTX_ADDR\<59:44\> (i.e. the most-significant 16 bits of the aligned
                                                                 64-bit word) is [SSO_PF_FUNC/NIXTX_ADDR\<59:44\>]. NIX RX inline IPSEC
                                                                 logic fills [SSO_PF_FUNC/NIXTX_ADDR\<59:44\>] with NIX_AF_LF()_CFG[SSO_PF_FUNC]
                                                                 for this case. RVU_PF_FUNC_S describes the format of
                                                                 [SSO_PF_FUNC/NIXTX_ADDR\<59:44\>].

                                                                 * If CPT_AF_ECO[SSO_PF_FUNC_OVRD]=0, [SSO_PF_FUNC/NIXTX_ADDR\<59:44\>] is
                                                                 the function CPT uses for the SSO add work for this instruction.
                                                                 [SSO_PF_FUNC/NIXTX_ADDR\<59:44\>] affects only the add work to SSO.
                                                                 [SSO_PF_FUNC/NIXTX_ADDR\<59:44\>] does not affect any other CPT_INST_S execution.
                                                                 See also [RVU_PF_FUNC] and [WQE_PTR].

                                                                 * If CPT_AF_ECO[SSO_PF_FUNC_OVRD]=1, [SSO_PF_FUNC/NIXTX_ADDR\<59:44\>] is
                                                                 not used by CPT. See CPT_AF_LF()_CTL2[SSO_PF_FUNC].

                                                                 Internal:
                                                                 Bits \<63:53\> are ignored by hardware, treated as always 0x0.

                                                                 The above description is inaccurate for CN93XX pass 1.
                                                                 In CN93XX pass 1, [SSO_PF_FUNC/NIXTX_ADDR\<59:44\>] doesn't exist, NIX RX always
                                                                 fills NIXTX_ADDR with zeroes, and CPT instead uses [RVU_PF_FUNC] when
                                                                 CPT_AF_ECO[SSO_PF_FUNC_OVRD]=0. */
        uint64_t doneint               : 1;  /**< [  3:  3] Done interrupt.
                                                                 0 = No interrupts related to this instruction.
                                                                 1 = When the instruction completes, CPT_LF_DONE[DONE] will be incremented,
                                                                 and may cause an interrupt. (Except sometimes when [NIXTXL]!=0x0.)

                                                                 CPT increments CPT_LF_DONE[DONE] after it writes the CPT_RES_S (see
                                                                 [RES_ADDR]), but the increment is unordered relative any SSO submit (see
                                                                 [WQE_PTR]). CPT does not increment CPT_LF_DONE[DONE] when it sends a
                                                                 descriptor to NIX TX (see [NIXTXL]). [QORD] has no direct affect on when
                                                                 any CPT_LF_DONE[DONE] increment occurs.

                                                                 See also CPT_RES_S[DONEINT].

                                                                 Internal:
                                                                 CPT_LF_DONE[DONE] increment conceptually occurs after the CPT_RES_S write.
                                                                 We say [QORD] doesn't affect this increment order because it doesn't
                                                                 affect the CPT_RES_S write order. See the [RES_ADDR] internal comment. */
        uint64_t nixtxl                : 3;  /**< [  2:  0] When [NIXTXL]!=0x0, [NIXTXL]+1 is the length in 128-bit words of the LMTST
                                                                 portion of the NIX TX descriptor (pointed at by [NIXTX_ADDR]) that CPT may
                                                                 submit (via an effective LMTST) to NIX TX after executing the CPT_INST_S.
                                                                 The length of the LMTST portion of the NIX TX descriptor is a multiple of
                                                                 16 bytes between 32 and 128 bytes.

                                                                 CPT will NOT submit a descriptor to NIX TX for a CPT_INST_S in any of these
                                                                 conditions:
                                                                 * [NIXTXL]=0x0.
                                                                 * CPT_AF_LF()_CTL[NIXTX_EN] is clear (see below).
                                                                 * An SMMU fault occurs on the CPT_RES_S write to [RES_ADDR]. (CPT sets
                                                                 CPT_LF_MISC_INT[NWRP] in this case).
                                                                 * The final CPT_RES_S[COMPCODE]!=CPT_COMP_E::GOOD (i.e. CPT hardware detects
                                                                 an error for the CPT_INST_S).
                                                                 * The final CPT_RES_S[UC_COMPCODE]!=0x0 (i.e. CPT engine microcode detects an
                                                                 error for the CPT_INST_S).

                                                                 Otherwise, whenever [NIXTXL]!=0x0, CPT submits the LMTST portion of the
                                                                 descriptor from [NIXTX_ADDR] to NIX TX.

                                                                 Whenever CPT submits the LMTST portion of a descriptor to NIX TX for
                                                                 the CPT_INST_S:
                                                                 * CPT will NOT increment CPT_LF_DONE[DONE] for the CPT_INST_S,
                                                                   regardless of the [DONEINT] value, and.
                                                                 * CPT will NOT submit a WQE for the CPT_INST_S, regardless of the
                                                                   [WQE_PTR] value. (Note that NIX TX will submit a WQE after sending
                                                                   the packet if the NIX TX descriptor contains a NIX_SEND_WORK_S.).
                                                                 * [RES_ADDR] behavior is unmodified, i.e. CPT will write a CPT_RES_S
                                                                   when it sends NIX TX a descriptor. The CPT_RES_S write will complete
                                                                   before NIX TX receives the descriptor.

                                                                 If [NIXTXL]!=0x0, but CPT does not submit a descriptor to NIX TX,
                                                                 CPT [DONEINT] and [WQE_PTR] behavior is unchanged by [NIXTXL]: CPT may
                                                                 increment CPT_LF_DONE[DONE], and may submit a WQE to SSO.

                                                                 CPT initiates the final NIX descriptor submit after the CPT_RES_S write
                                                                 (see [RES_ADDR]).

                                                                 CPT_AF_LF()_CTL[NIXTX_EN] must be set when [NIXTXL]!=0x0. (NIX sets
                                                                 CPT_LF_MISC_INT[NQERR] and signals CPT_COMP_E::INSTERR when the
                                                                 instruction violates this rule.) See also CPT_AF_LF()_CTL[NIX_SEL] and
                                                                 CPT_AF_LF()_CTL2[NIX_PF_FUNC], which select the NIX and NIX function
                                                                 that the descriptor will be enqueued to.

                                                                 [QORD] must be set when [NIXTXL]!=0x0. (NIX sets CPT_LF_MISC_INT[NQERR]
                                                                 and signals CPT_COMP_E::INSTERR when the instruction violates this
                                                                 rule.) If two CPT_INST_S's in the same CPT LF/queue are destined
                                                                 for the same NIX TX send queue, then their transmit order will
                                                                 match their CPT enqueue order. NIX_SEND_HDR_S[SQ] in the NIX TX descriptor
                                                                 selects the NIX TX send queue. */
#else /* Word 0 - Little Endian */
        uint64_t nixtxl                : 3;  /**< [  2:  0] When [NIXTXL]!=0x0, [NIXTXL]+1 is the length in 128-bit words of the LMTST
                                                                 portion of the NIX TX descriptor (pointed at by [NIXTX_ADDR]) that CPT may
                                                                 submit (via an effective LMTST) to NIX TX after executing the CPT_INST_S.
                                                                 The length of the LMTST portion of the NIX TX descriptor is a multiple of
                                                                 16 bytes between 32 and 128 bytes.

                                                                 CPT will NOT submit a descriptor to NIX TX for a CPT_INST_S in any of these
                                                                 conditions:
                                                                 * [NIXTXL]=0x0.
                                                                 * CPT_AF_LF()_CTL[NIXTX_EN] is clear (see below).
                                                                 * An SMMU fault occurs on the CPT_RES_S write to [RES_ADDR]. (CPT sets
                                                                 CPT_LF_MISC_INT[NWRP] in this case).
                                                                 * The final CPT_RES_S[COMPCODE]!=CPT_COMP_E::GOOD (i.e. CPT hardware detects
                                                                 an error for the CPT_INST_S).
                                                                 * The final CPT_RES_S[UC_COMPCODE]!=0x0 (i.e. CPT engine microcode detects an
                                                                 error for the CPT_INST_S).

                                                                 Otherwise, whenever [NIXTXL]!=0x0, CPT submits the LMTST portion of the
                                                                 descriptor from [NIXTX_ADDR] to NIX TX.

                                                                 Whenever CPT submits the LMTST portion of a descriptor to NIX TX for
                                                                 the CPT_INST_S:
                                                                 * CPT will NOT increment CPT_LF_DONE[DONE] for the CPT_INST_S,
                                                                   regardless of the [DONEINT] value, and.
                                                                 * CPT will NOT submit a WQE for the CPT_INST_S, regardless of the
                                                                   [WQE_PTR] value. (Note that NIX TX will submit a WQE after sending
                                                                   the packet if the NIX TX descriptor contains a NIX_SEND_WORK_S.).
                                                                 * [RES_ADDR] behavior is unmodified, i.e. CPT will write a CPT_RES_S
                                                                   when it sends NIX TX a descriptor. The CPT_RES_S write will complete
                                                                   before NIX TX receives the descriptor.

                                                                 If [NIXTXL]!=0x0, but CPT does not submit a descriptor to NIX TX,
                                                                 CPT [DONEINT] and [WQE_PTR] behavior is unchanged by [NIXTXL]: CPT may
                                                                 increment CPT_LF_DONE[DONE], and may submit a WQE to SSO.

                                                                 CPT initiates the final NIX descriptor submit after the CPT_RES_S write
                                                                 (see [RES_ADDR]).

                                                                 CPT_AF_LF()_CTL[NIXTX_EN] must be set when [NIXTXL]!=0x0. (NIX sets
                                                                 CPT_LF_MISC_INT[NQERR] and signals CPT_COMP_E::INSTERR when the
                                                                 instruction violates this rule.) See also CPT_AF_LF()_CTL[NIX_SEL] and
                                                                 CPT_AF_LF()_CTL2[NIX_PF_FUNC], which select the NIX and NIX function
                                                                 that the descriptor will be enqueued to.

                                                                 [QORD] must be set when [NIXTXL]!=0x0. (NIX sets CPT_LF_MISC_INT[NQERR]
                                                                 and signals CPT_COMP_E::INSTERR when the instruction violates this
                                                                 rule.) If two CPT_INST_S's in the same CPT LF/queue are destined
                                                                 for the same NIX TX send queue, then their transmit order will
                                                                 match their CPT enqueue order. NIX_SEND_HDR_S[SQ] in the NIX TX descriptor
                                                                 selects the NIX TX send queue. */
        uint64_t doneint               : 1;  /**< [  3:  3] Done interrupt.
                                                                 0 = No interrupts related to this instruction.
                                                                 1 = When the instruction completes, CPT_LF_DONE[DONE] will be incremented,
                                                                 and may cause an interrupt. (Except sometimes when [NIXTXL]!=0x0.)

                                                                 CPT increments CPT_LF_DONE[DONE] after it writes the CPT_RES_S (see
                                                                 [RES_ADDR]), but the increment is unordered relative any SSO submit (see
                                                                 [WQE_PTR]). CPT does not increment CPT_LF_DONE[DONE] when it sends a
                                                                 descriptor to NIX TX (see [NIXTXL]). [QORD] has no direct affect on when
                                                                 any CPT_LF_DONE[DONE] increment occurs.

                                                                 See also CPT_RES_S[DONEINT].

                                                                 Internal:
                                                                 CPT_LF_DONE[DONE] increment conceptually occurs after the CPT_RES_S write.
                                                                 We say [QORD] doesn't affect this increment order because it doesn't
                                                                 affect the CPT_RES_S write order. See the [RES_ADDR] internal comment. */
        uint64_t nixtx_addr            : 60; /**< [ 63:  4] When [NIXTXL]!=0x0, [NIXTX_ADDR] points to a NIX TX descriptor:

                                                                 * [NIXTX_ADDR] must be nonzero, and must point to the
                                                                 LMTST portion of the descriptor that CPT may submit to NIX TX after
                                                                 completing the CPT_INST_S.

                                                                 * [NIXTX_ADDR] is a 128-bit word address (i.e. \<3:0\> is missing from a byte
                                                                 address equivalent). The start of the LMTST portion of the NIX TX descriptor
                                                                 must be aligned to a 128-bit / 16 byte boundary.

                                                                 * CPT doesn't modify the descriptor bytes that it passes to NIXTX. NIXTX
                                                                 will receive the bytes in the same format as they are in memory, including
                                                                 endianness. CPT always passes the descriptor bytes to the NIX function
                                                                 CPT_AF_LF()_CTL2[NIX_PF_FUNC] in the NIXTX selected by
                                                                 CPT_AF_LF()_CTL[NIX_SEL].

                                                                 * Upon an SMMU fault reading the descriptor from [NIXTX_ADDR], CPT sets
                                                                 CPT_LF_MISC_INT[FAULT], causes CPT_COMP_E::FAULT, and if
                                                                 CPT_AF_LF()_CTL[CONT_ERR]=0, also clears CPT_LF_CTL[ENA], necessitating
                                                                 an LF/queue reset.  If CPT_AF_CTL[RD_PSN_IGN]=0, CPT also does these
                                                                 things when it encounters poison on the descriptor read.

                                                                 When [NIXTXL]=0x0, [NIXTX_ADDR] is normally reserved and must be zero.

                                                                 The only exception to this rule when [NIXTXL]=0x0 is for CPT instructions
                                                                 created by NIX RX (i.e. when CPT_AF_LF()_CTL[PF_FUNC_INST]=1):

                                                                 * NIXTX_ADDR\<59:44\> (i.e. the most-significant 16 bits of the aligned
                                                                 64-bit word) is [SSO_PF_FUNC/NIXTX_ADDR\<59:44\>]. NIX RX inline IPSEC
                                                                 logic fills [SSO_PF_FUNC/NIXTX_ADDR\<59:44\>] with NIX_AF_LF()_CFG[SSO_PF_FUNC]
                                                                 for this case. RVU_PF_FUNC_S describes the format of
                                                                 [SSO_PF_FUNC/NIXTX_ADDR\<59:44\>].

                                                                 * If CPT_AF_ECO[SSO_PF_FUNC_OVRD]=0, [SSO_PF_FUNC/NIXTX_ADDR\<59:44\>] is
                                                                 the function CPT uses for the SSO add work for this instruction.
                                                                 [SSO_PF_FUNC/NIXTX_ADDR\<59:44\>] affects only the add work to SSO.
                                                                 [SSO_PF_FUNC/NIXTX_ADDR\<59:44\>] does not affect any other CPT_INST_S execution.
                                                                 See also [RVU_PF_FUNC] and [WQE_PTR].

                                                                 * If CPT_AF_ECO[SSO_PF_FUNC_OVRD]=1, [SSO_PF_FUNC/NIXTX_ADDR\<59:44\>] is
                                                                 not used by CPT. See CPT_AF_LF()_CTL2[SSO_PF_FUNC].

                                                                 Internal:
                                                                 Bits \<63:53\> are ignored by hardware, treated as always 0x0.

                                                                 The above description is inaccurate for CN93XX pass 1.
                                                                 In CN93XX pass 1, [SSO_PF_FUNC/NIXTX_ADDR\<59:44\>] doesn't exist, NIX RX always
                                                                 fills NIXTX_ADDR with zeroes, and CPT instead uses [RVU_PF_FUNC] when
                                                                 CPT_AF_ECO[SSO_PF_FUNC_OVRD]=0. */
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t res_addr              : 64; /**< [127: 64] Result IOVA. CPT always writes a CPT_RES_S to this location after it
                                                                 finishes executing the instruction. [RES_ADDR] must not be zero.

                                                                 CPT writes the CPT_RES_S for a CPT_INST_S before performing any of these actions
                                                                 for the CPT_INST_S: a submit to SSO (see [WQE_PTR]), a final NIX TX descriptor
                                                                 submit (see [NIXTXL]), or a CPT_LF_DONE[DONE] increment ((see [DONEINT]).

                                                                 CPT cannot write the CPT_RES_S until after it completes all LLC/DRAM writes
                                                                 related to executing the corresponding CPT_INST_S and clearing all possible
                                                                 SMMU faults, including faults from any required NIX TX descriptor reads. Otherwise,
                                                                 CPT may write the CPT_RES_S's in any order, but will typically write each soon
                                                                 after the engine completes execution of the corresponding CPT_INST_S.

                                                                 [QORD] has no direct affect on the relative ordering of two CPT_RES_S writes of
                                                                 two different CPT_INST_S's. [NIXTXL] can delay CPT_RES_S writes due to potential
                                                                 SMMU faults on NIX TX descriptor reads, but otherwise may not affect CPT_RES_S
                                                                 write order.

                                                                 The CPT_RES_S must reside in a naturally-aligned 128-bit / 16-byte word.
                                                                 [RES_ADDR]\<3:0\> must always be zero.

                                                                 CPT_AF_LF()_PTR_CTL[INST_BE] determines the endianness of the write to
                                                                 [RES_ADDR].

                                                                 Upon an SMMU fault on the [RES_ADDR] write, CPT sets CPT_LF_MISC_INT[NWRP],
                                                                 prevents a NIX TX descriptor from being sent (see [NIXTXL]), and if
                                                                 CPT_AF_LF()_CTL[CONT_ERR]=0, also clears CPT_LF_CTL[ENA], necessitating
                                                                 an LF/queue reset.

                                                                 Internal:
                                                                 Bits \<63:53\> are ignored by hardware, treated as always 0x0.

                                                                 In CNXXXX, CPT sends CPT_RES_S's to NCB in queue order when [QORD]=1. Despite
                                                                 this, it would be incorrect for this spec to say that CPT orders the
                                                                 CPT_RES_S's when [QORD]=1. This is because for AP software
                                                                 to see the stores in order, CPT would both need to send the CPT_RES_S's
                                                                 in order and wait for the commit of the prior one before sending the next
                                                                 CPT_RES_S. CNXXXX CPT does not do this, so effectively the CPT_RES_S's are
                                                                 unordered despite the CNXXXX CPT behavior, and hence the comment that [QORD]
                                                                 has no direct effect on CPT_RES_S order. */
#else /* Word 1 - Little Endian */
        uint64_t res_addr              : 64; /**< [127: 64] Result IOVA. CPT always writes a CPT_RES_S to this location after it
                                                                 finishes executing the instruction. [RES_ADDR] must not be zero.

                                                                 CPT writes the CPT_RES_S for a CPT_INST_S before performing any of these actions
                                                                 for the CPT_INST_S: a submit to SSO (see [WQE_PTR]), a final NIX TX descriptor
                                                                 submit (see [NIXTXL]), or a CPT_LF_DONE[DONE] increment ((see [DONEINT]).

                                                                 CPT cannot write the CPT_RES_S until after it completes all LLC/DRAM writes
                                                                 related to executing the corresponding CPT_INST_S and clearing all possible
                                                                 SMMU faults, including faults from any required NIX TX descriptor reads. Otherwise,
                                                                 CPT may write the CPT_RES_S's in any order, but will typically write each soon
                                                                 after the engine completes execution of the corresponding CPT_INST_S.

                                                                 [QORD] has no direct affect on the relative ordering of two CPT_RES_S writes of
                                                                 two different CPT_INST_S's. [NIXTXL] can delay CPT_RES_S writes due to potential
                                                                 SMMU faults on NIX TX descriptor reads, but otherwise may not affect CPT_RES_S
                                                                 write order.

                                                                 The CPT_RES_S must reside in a naturally-aligned 128-bit / 16-byte word.
                                                                 [RES_ADDR]\<3:0\> must always be zero.

                                                                 CPT_AF_LF()_PTR_CTL[INST_BE] determines the endianness of the write to
                                                                 [RES_ADDR].

                                                                 Upon an SMMU fault on the [RES_ADDR] write, CPT sets CPT_LF_MISC_INT[NWRP],
                                                                 prevents a NIX TX descriptor from being sent (see [NIXTXL]), and if
                                                                 CPT_AF_LF()_CTL[CONT_ERR]=0, also clears CPT_LF_CTL[ENA], necessitating
                                                                 an LF/queue reset.

                                                                 Internal:
                                                                 Bits \<63:53\> are ignored by hardware, treated as always 0x0.

                                                                 In CNXXXX, CPT sends CPT_RES_S's to NCB in queue order when [QORD]=1. Despite
                                                                 this, it would be incorrect for this spec to say that CPT orders the
                                                                 CPT_RES_S's when [QORD]=1. This is because for AP software
                                                                 to see the stores in order, CPT would both need to send the CPT_RES_S's
                                                                 in order and wait for the commit of the prior one before sending the next
                                                                 CPT_RES_S. CNXXXX CPT does not do this, so effectively the CPT_RES_S's are
                                                                 unordered despite the CNXXXX CPT behavior, and hence the comment that [QORD]
                                                                 has no direct effect on CPT_RES_S order. */
#endif /* Word 1 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 2 - Big Endian */
        uint64_t rvu_pf_func           : 16; /**< [191:176] Must be zero in the normal case when CPT_AF_LF()_CTL[PF_FUNC_INST]=0.

                                                                 RVU_PF_FUNC_S describes the format of [RVU_PF_FUNC].

                                                                 See also CPT_AF_LF()_CTL[PF_FUNC_INST] and [SSO_PF_FUNC/NIXTX_ADDR\<59:44\>]. When
                                                                 CPT_AF_LF()_CTL[PF_FUNC_INST]=1, CPT executes the CPT_INST_S within
                                                                 the function [RVU_PF_FUNC]. NIX RX inline IPSEC logic fills [RVU_PF_FUNC] with
                                                                 NIX_PRIV_LF()_CFG[PF_FUNC] in this case. When CPT_AF_LF()_CTL[PF_FUNC_INST]=0, as
                                                                 normal, CPT executes the CPT_INST_S within CPT_PRIV_LF()_CFG[PF_FUNC], the function
                                                                 the queue/LF belongs to.

                                                                 See also CPT_AF_LF()_CTL2[NIX_PF_FUNC,SSO_PF_FUNC] and
                                                                 [SSO_PF_FUNC/NIXTX_ADDR\<59:44\>]. */
        uint64_t reserved_172_175      : 4;
        uint64_t grp                   : 10; /**< [171:162] If [WQE_PTR] is nonzero, the SSO guest-group to use when CPT submits work to
                                                                 SSO.

                                                                 For the SSO to not discard the add-work request, this group must be valid
                                                                 within the SSO's LF.

                                                                 [GRP] must be zero when [WQE_PTR]=0x0. */
        uint64_t tt                    : 2;  /**< [161:160] If [WQE_PTR] is nonzero, the SSO tag type to use when CPT submits work to SSO. */
        uint64_t tag                   : 32; /**< [159:128] If [WQE_PTR] is nonzero, the SSO tag to use when CPT submits work to SSO. */
#else /* Word 2 - Little Endian */
        uint64_t tag                   : 32; /**< [159:128] If [WQE_PTR] is nonzero, the SSO tag to use when CPT submits work to SSO. */
        uint64_t tt                    : 2;  /**< [161:160] If [WQE_PTR] is nonzero, the SSO tag type to use when CPT submits work to SSO. */
        uint64_t grp                   : 10; /**< [171:162] If [WQE_PTR] is nonzero, the SSO guest-group to use when CPT submits work to
                                                                 SSO.

                                                                 For the SSO to not discard the add-work request, this group must be valid
                                                                 within the SSO's LF.

                                                                 [GRP] must be zero when [WQE_PTR]=0x0. */
        uint64_t reserved_172_175      : 4;
        uint64_t rvu_pf_func           : 16; /**< [191:176] Must be zero in the normal case when CPT_AF_LF()_CTL[PF_FUNC_INST]=0.

                                                                 RVU_PF_FUNC_S describes the format of [RVU_PF_FUNC].

                                                                 See also CPT_AF_LF()_CTL[PF_FUNC_INST] and [SSO_PF_FUNC/NIXTX_ADDR\<59:44\>]. When
                                                                 CPT_AF_LF()_CTL[PF_FUNC_INST]=1, CPT executes the CPT_INST_S within
                                                                 the function [RVU_PF_FUNC]. NIX RX inline IPSEC logic fills [RVU_PF_FUNC] with
                                                                 NIX_PRIV_LF()_CFG[PF_FUNC] in this case. When CPT_AF_LF()_CTL[PF_FUNC_INST]=0, as
                                                                 normal, CPT executes the CPT_INST_S within CPT_PRIV_LF()_CFG[PF_FUNC], the function
                                                                 the queue/LF belongs to.

                                                                 See also CPT_AF_LF()_CTL2[NIX_PF_FUNC,SSO_PF_FUNC] and
                                                                 [SSO_PF_FUNC/NIXTX_ADDR\<59:44\>]. */
#endif /* Word 2 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 3 - Big Endian */
        uint64_t wqe_ptr               : 61; /**< [255:195] If [WQE_PTR] is nonzero, it is a pointer to a work-queue entry that CPT submits
                                                                 work to SSO (except sometimes when [NIXTXL]!=0x0) after all context, output data,
                                                                 and result write operations are visible to other CNXXXX units and the cores.

                                                                 [WQE_PTR] is a 64-bit word address (i.e. \<2:0\> is missing from a byte
                                                                 address equivalent). The start of the WQE must be aligned to a 64-bit / 8 byte
                                                                 boundary.

                                                                 CPT always adds the work to SSO after writing the CPT_RES_S for this CPT_INST_S
                                                                 (see [RES_ADDR]), but unordered relative to any CPT_LF_DONE[DONE] increment
                                                                 (see [DONEINT]). Also, if [QORD]=1 for this CPT_INST_S, CPT adds SSO work
                                                                 for this CPT_INST_S after it writes the CPT_RES_S's of all prior CPT_INST_S's
                                                                 within the same LF/queue that have their CPT_INST_S[QORD]=1. CPT will not
                                                                 order the CPT_RES_S writes of prior CPT_INST_S's that are either not in the
                                                                 same LF/queue or have their CPT_INST_S[QORD]=0.

                                                                 CPT does not add work to SSO when it sends a descriptor to NIX TX (see [NIXTXL]).

                                                                 CPT adds SSO work from CPT_INST_S's in the same LF/queue that have their
                                                                 CPT_INST_S[QORD]=1 in queue order. CPT may add to SSO in any order in all
                                                                 other situations, even amongst instructions in the same queue.

                                                                 CPT normally adds work to the function CPT_AF_LF()_CTL2[SSO_PF_FUNC]. But if
                                                                 CPT_AF_LF()_CTL[PF_FUNC_INST]=1 and CPT_AF_ECO[SSO_PF_FUNC_OVRD]=0, CPT
                                                                 instead adds work to the SSO function in this instruction
                                                                 ([SSO_PF_FUNC/NIXTX_ADDR\<59:44\>]).

                                                                 [WQE_PTR] is opaque to CPT - CPT neither reads nor writes this address.

                                                                 Internal:
                                                                 Bits \<63:53\> are ignored by hardware, treated as always 0x0. */
        uint64_t reserved_193_194      : 2;
        uint64_t qord                  : 1;  /**< [192:192] Queue ordering. When set, CPT adds the SSO WQE (see [WQE_PTR], [TAG], [TT],
                                                                 [GRP]) and submits to NIX TX (see [NIXTXL] and [NIXTX_ADDR]) in queue
                                                                 order. [QORD]=1 can also force CPT_RES_S write completion.

                                                                 [QORD] must be set when [NIXTXL]!=0x0. CPT sets CPT_LF_MISC_INT[NQERR]
                                                                 and signals CPT_COMP_E::INSTERR when this rule is violated. CPT sends NIX
                                                                 TX descriptors in CPT LF/queue order.

                                                                 When [QORD]=1 and [WQE_PTR]!=0 for two CPT_INST_S's in the same queue, CPT
                                                                 executes the two SSO add works in order. If [QORD]=0 or if the instructions
                                                                 are in different queues, CPT may reorder the add works.

                                                                 [QORD] may commonly be used to force NIX TX or SSO order amongst
                                                                 instructions within a LF/queue. But [QORD]=1 additionally forces CPT_RES_S
                                                                 write completion prior to a subsequent [QORD]=1 SSO add within the LF/queue.
                                                                 See [WQE_PTR].

                                                                 [QORD] has no direct affect on the relative ordering of two CPT_RES_S writes of
                                                                 two different CPT_INST_S's. See [RES_ADDR].

                                                                 Internal:
                                                                 See the [RES_ADDR] internal description for details why the statement "QORD
                                                                 has no direct affect on when CPT writes the CPT_RES_S" is appropriate.

                                                                 This next text was originally present (and implemented in T93 A0 and B0(A1)),
                                                                 but removed later to improve VPP capabilities. See mcbuggin 36656:

                                                                 When [QORD]=1, at least one of [WQE_PTR]!=0x0 or [NIXTXL]!=0x0 must be true.
                                                                 CPT sets CPT_LF_MISC_INT[NQERR] and signals CPT_COMP_E::INSTERR when this
                                                                 rule is violated. */
#else /* Word 3 - Little Endian */
        uint64_t qord                  : 1;  /**< [192:192] Queue ordering. When set, CPT adds the SSO WQE (see [WQE_PTR], [TAG], [TT],
                                                                 [GRP]) and submits to NIX TX (see [NIXTXL] and [NIXTX_ADDR]) in queue
                                                                 order. [QORD]=1 can also force CPT_RES_S write completion.

                                                                 [QORD] must be set when [NIXTXL]!=0x0. CPT sets CPT_LF_MISC_INT[NQERR]
                                                                 and signals CPT_COMP_E::INSTERR when this rule is violated. CPT sends NIX
                                                                 TX descriptors in CPT LF/queue order.

                                                                 When [QORD]=1 and [WQE_PTR]!=0 for two CPT_INST_S's in the same queue, CPT
                                                                 executes the two SSO add works in order. If [QORD]=0 or if the instructions
                                                                 are in different queues, CPT may reorder the add works.

                                                                 [QORD] may commonly be used to force NIX TX or SSO order amongst
                                                                 instructions within a LF/queue. But [QORD]=1 additionally forces CPT_RES_S
                                                                 write completion prior to a subsequent [QORD]=1 SSO add within the LF/queue.
                                                                 See [WQE_PTR].

                                                                 [QORD] has no direct affect on the relative ordering of two CPT_RES_S writes of
                                                                 two different CPT_INST_S's. See [RES_ADDR].

                                                                 Internal:
                                                                 See the [RES_ADDR] internal description for details why the statement "QORD
                                                                 has no direct affect on when CPT writes the CPT_RES_S" is appropriate.

                                                                 This next text was originally present (and implemented in T93 A0 and B0(A1)),
                                                                 but removed later to improve VPP capabilities. See mcbuggin 36656:

                                                                 When [QORD]=1, at least one of [WQE_PTR]!=0x0 or [NIXTXL]!=0x0 must be true.
                                                                 CPT sets CPT_LF_MISC_INT[NQERR] and signals CPT_COMP_E::INSTERR when this
                                                                 rule is violated. */
        uint64_t reserved_193_194      : 2;
        uint64_t wqe_ptr               : 61; /**< [255:195] If [WQE_PTR] is nonzero, it is a pointer to a work-queue entry that CPT submits
                                                                 work to SSO (except sometimes when [NIXTXL]!=0x0) after all context, output data,
                                                                 and result write operations are visible to other CNXXXX units and the cores.

                                                                 [WQE_PTR] is a 64-bit word address (i.e. \<2:0\> is missing from a byte
                                                                 address equivalent). The start of the WQE must be aligned to a 64-bit / 8 byte
                                                                 boundary.

                                                                 CPT always adds the work to SSO after writing the CPT_RES_S for this CPT_INST_S
                                                                 (see [RES_ADDR]), but unordered relative to any CPT_LF_DONE[DONE] increment
                                                                 (see [DONEINT]). Also, if [QORD]=1 for this CPT_INST_S, CPT adds SSO work
                                                                 for this CPT_INST_S after it writes the CPT_RES_S's of all prior CPT_INST_S's
                                                                 within the same LF/queue that have their CPT_INST_S[QORD]=1. CPT will not
                                                                 order the CPT_RES_S writes of prior CPT_INST_S's that are either not in the
                                                                 same LF/queue or have their CPT_INST_S[QORD]=0.

                                                                 CPT does not add work to SSO when it sends a descriptor to NIX TX (see [NIXTXL]).

                                                                 CPT adds SSO work from CPT_INST_S's in the same LF/queue that have their
                                                                 CPT_INST_S[QORD]=1 in queue order. CPT may add to SSO in any order in all
                                                                 other situations, even amongst instructions in the same queue.

                                                                 CPT normally adds work to the function CPT_AF_LF()_CTL2[SSO_PF_FUNC]. But if
                                                                 CPT_AF_LF()_CTL[PF_FUNC_INST]=1 and CPT_AF_ECO[SSO_PF_FUNC_OVRD]=0, CPT
                                                                 instead adds work to the SSO function in this instruction
                                                                 ([SSO_PF_FUNC/NIXTX_ADDR\<59:44\>]).

                                                                 [WQE_PTR] is opaque to CPT - CPT neither reads nor writes this address.

                                                                 Internal:
                                                                 Bits \<63:53\> are ignored by hardware, treated as always 0x0. */
#endif /* Word 3 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 4 - Big Endian */
        uint64_t opcode                : 16; /**< [319:304] Commonly interpreted by the engine microcode as an opcode describing the
                                                                 operation the engine will perform. The most-significant byte commonly the
                                                                 major opcode, and the least-significant byte commonly the minor opcode.
                                                                 See the microcode specifications. */
        uint64_t param1                : 16; /**< [303:288] Commonly interpreted by the engine microcode as containing parameters
                                                                 describing the operation in more detail. See the microcode specifications. */
        uint64_t param2                : 16; /**< [287:272] Commonly interpreted by the engine microcode as containing parameters
                                                                 describing the operation in more detail. See the microcode specifications. */
        uint64_t dlen                  : 16; /**< [271:256] Commonly interpreted by the engine microcode as the length of the data
                                                                 that [DPTR] points at. See the microcode specifications. */
#else /* Word 4 - Little Endian */
        uint64_t dlen                  : 16; /**< [271:256] Commonly interpreted by the engine microcode as the length of the data
                                                                 that [DPTR] points at. See the microcode specifications. */
        uint64_t param2                : 16; /**< [287:272] Commonly interpreted by the engine microcode as containing parameters
                                                                 describing the operation in more detail. See the microcode specifications. */
        uint64_t param1                : 16; /**< [303:288] Commonly interpreted by the engine microcode as containing parameters
                                                                 describing the operation in more detail. See the microcode specifications. */
        uint64_t opcode                : 16; /**< [319:304] Commonly interpreted by the engine microcode as an opcode describing the
                                                                 operation the engine will perform. The most-significant byte commonly the
                                                                 major opcode, and the least-significant byte commonly the minor opcode.
                                                                 See the microcode specifications. */
#endif /* Word 4 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 5 - Big Endian */
        uint64_t dptr                  : 64; /**< [383:320] Commonly interpreted by the engine microcode as a pointer to input data
                                                                 for the operation. See the microcode specifications.

                                                                 CPT_AF_LF()_CTL2[EXE_NO_SWAP] determines the endianness when accessing
                                                                 addresses derived from [DPTR,RPTR,CPTR].

                                                                 Upon an SMMU fault accessing addresses derived from [DPTR,RPTR,CPTR],
                                                                 CPT sets CPT_LF_MISC_INT[FAULT], causes CPT_COMP_E::FAULT, and if
                                                                 CPT_AF_LF()_CTL[CONT_ERR]=0, also clears CPT_LF_CTL[ENA], necessitating
                                                                 an LF/queue reset.  If CPT_AF_CTL[RD_PSN_IGN]=0, CPT also does these
                                                                 things when it encounters poison on a read. */
#else /* Word 5 - Little Endian */
        uint64_t dptr                  : 64; /**< [383:320] Commonly interpreted by the engine microcode as a pointer to input data
                                                                 for the operation. See the microcode specifications.

                                                                 CPT_AF_LF()_CTL2[EXE_NO_SWAP] determines the endianness when accessing
                                                                 addresses derived from [DPTR,RPTR,CPTR].

                                                                 Upon an SMMU fault accessing addresses derived from [DPTR,RPTR,CPTR],
                                                                 CPT sets CPT_LF_MISC_INT[FAULT], causes CPT_COMP_E::FAULT, and if
                                                                 CPT_AF_LF()_CTL[CONT_ERR]=0, also clears CPT_LF_CTL[ENA], necessitating
                                                                 an LF/queue reset.  If CPT_AF_CTL[RD_PSN_IGN]=0, CPT also does these
                                                                 things when it encounters poison on a read. */
#endif /* Word 5 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 6 - Big Endian */
        uint64_t rptr                  : 64; /**< [447:384] Commonly interpreted by the engine microcode as a result pointer. See the
                                                                 microcode specifications.

                                                                 CPT_AF_LF()_CTL2[EXE_NO_SWAP] determines the endianness when accessing
                                                                 addresses derived from [DPTR,RPTR,CPTR].

                                                                 Upon an SMMU fault accessing addresses derived from [DPTR,RPTR,CPTR],
                                                                 CPT sets CPT_LF_MISC_INT[FAULT], causes CPT_COMP_E::FAULT, and if
                                                                 CPT_AF_LF()_CTL[CONT_ERR]=0, also clears CPT_LF_CTL[ENA], necessitating
                                                                 an LF/queue reset.  If CPT_AF_CTL[RD_PSN_IGN]=0, CPT also does these
                                                                 things when it encounters poison on a read. */
#else /* Word 6 - Little Endian */
        uint64_t rptr                  : 64; /**< [447:384] Commonly interpreted by the engine microcode as a result pointer. See the
                                                                 microcode specifications.

                                                                 CPT_AF_LF()_CTL2[EXE_NO_SWAP] determines the endianness when accessing
                                                                 addresses derived from [DPTR,RPTR,CPTR].

                                                                 Upon an SMMU fault accessing addresses derived from [DPTR,RPTR,CPTR],
                                                                 CPT sets CPT_LF_MISC_INT[FAULT], causes CPT_COMP_E::FAULT, and if
                                                                 CPT_AF_LF()_CTL[CONT_ERR]=0, also clears CPT_LF_CTL[ENA], necessitating
                                                                 an LF/queue reset.  If CPT_AF_CTL[RD_PSN_IGN]=0, CPT also does these
                                                                 things when it encounters poison on a read. */
#endif /* Word 6 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 7 - Big Endian */
        uint64_t egrp                  : 3;  /**< [511:509] Engine group. Selects the CPT engine(s) allowed to process the CPT_INST_S.

                                                                 See CPT_AF_LF()_CTL[GRP]. CPT_AF_LF()_CTL[GRP\<x\>] must be set for the
                                                                 LF for the instruction to successfully execute, where x = [EGRP].

                                                                 See CPT_AF_EXE()_CTL2[GRP_EN]. CPT_AF_EXE(i)_CTL2[GRP_EN]\<x\> must be set
                                                                 for engine i to execute the instruction, where x = [EGRP].

                                                                 See CPT_AF_GRP()_THR[ENA]. CPT_AF_GRP(x)_THR[ENA] must be set to execute
                                                                 the instruction, where x = [EGRP].

                                                                 Internal:
                                                                 In T8x, CPT_AF_LF()_CTL[GRP] picks the engine-group, and there is no way
                                                                 for the CPT_INST_S to select it. We may want to support that at least as
                                                                 an option for backward compatibility. Ideally, we will also support
                                                                 (optionally on a queue-by-queue basis) CPT_INST_S[EGRP]. */
        uint64_t cptr                  : 61; /**< [508:448] Commonly interpreted by the engine microcode as a context pointer for
                                                                 the operation to be performed. See the microcode specifications.

                                                                 CPT_AF_LF()_CTL2[EXE_NO_SWAP] determines the endianness when accessing
                                                                 addresses derived from [DPTR,RPTR,CPTR].

                                                                 Upon an SMMU fault accessing addresses derived from [DPTR,RPTR,CPTR],
                                                                 CPT sets CPT_LF_MISC_INT[FAULT], causes CPT_COMP_E::FAULT, and if
                                                                 CPT_AF_LF()_CTL[CONT_ERR]=0, also clears CPT_LF_CTL[ENA], necessitating
                                                                 an LF/queue reset.  If CPT_AF_CTL[RD_PSN_IGN]=0, CPT also does these
                                                                 things when it encounters poison on a read. */
#else /* Word 7 - Little Endian */
        uint64_t cptr                  : 61; /**< [508:448] Commonly interpreted by the engine microcode as a context pointer for
                                                                 the operation to be performed. See the microcode specifications.

                                                                 CPT_AF_LF()_CTL2[EXE_NO_SWAP] determines the endianness when accessing
                                                                 addresses derived from [DPTR,RPTR,CPTR].

                                                                 Upon an SMMU fault accessing addresses derived from [DPTR,RPTR,CPTR],
                                                                 CPT sets CPT_LF_MISC_INT[FAULT], causes CPT_COMP_E::FAULT, and if
                                                                 CPT_AF_LF()_CTL[CONT_ERR]=0, also clears CPT_LF_CTL[ENA], necessitating
                                                                 an LF/queue reset.  If CPT_AF_CTL[RD_PSN_IGN]=0, CPT also does these
                                                                 things when it encounters poison on a read. */
        uint64_t egrp                  : 3;  /**< [511:509] Engine group. Selects the CPT engine(s) allowed to process the CPT_INST_S.

                                                                 See CPT_AF_LF()_CTL[GRP]. CPT_AF_LF()_CTL[GRP\<x\>] must be set for the
                                                                 LF for the instruction to successfully execute, where x = [EGRP].

                                                                 See CPT_AF_EXE()_CTL2[GRP_EN]. CPT_AF_EXE(i)_CTL2[GRP_EN]\<x\> must be set
                                                                 for engine i to execute the instruction, where x = [EGRP].

                                                                 See CPT_AF_GRP()_THR[ENA]. CPT_AF_GRP(x)_THR[ENA] must be set to execute
                                                                 the instruction, where x = [EGRP].

                                                                 Internal:
                                                                 In T8x, CPT_AF_LF()_CTL[GRP] picks the engine-group, and there is no way
                                                                 for the CPT_INST_S to select it. We may want to support that at least as
                                                                 an option for backward compatibility. Ideally, we will also support
                                                                 (optionally on a queue-by-queue basis) CPT_INST_S[EGRP]. */
#endif /* Word 7 - End */
    } cn9;
};

/**
 * Structure cpt_res_s
 *
 * CPT Result Structure
 * The CPT coprocessor writes the result structure after it completes a CPT_INST_S
 * instruction. The result structure is exactly 16 bytes, and each instruction
 * completion produces exactly one result structure.
 *
 * CPT stores the two 64-bit words of this structure in memory in little-endian format
 * unless CPT_AF_LF()_PTR_CTL[INST_BE] is set. If CPT_AF_LF()_PTR_CTL[INST_BE] is set,
 * CPT swaps the bytes within each 64-bit word.
 */
union bdk_cpt_res_s
{
    uint64_t u[2];
    struct bdk_cpt_res_s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_17_63        : 47;
        uint64_t doneint               : 1;  /**< [ 16: 16] Done interrupt. This bit is copied from the corresponding instruction's
                                                                 CPT_INST_S[DONEINT]. */
        uint64_t uc_compcode           : 8;  /**< [ 15:  8] The completion code generated by the microcode that executed the CPT_INST_S
                                                                 on the engine. See also [COMPCODE].

                                                                 When CPT_INST_S[NIXTXL]=0x0, engine microcode entirely defines the [UC_COMPCODE]
                                                                 value.

                                                                 When CPT_INST_S[NIXTXL]!=0x0, i.e. when CPT should submit a NIX TX descriptor,
                                                                 then CPT considers [UC_COMPCODE]!=0 an error indication, and will not
                                                                 submit the NIX TX descriptor.

                                                                 [UC_COMPCODE] is unpredictable when [COMPCODE] is anything other than
                                                                 CPT_COMP_E::GOOD. */
        uint64_t compcode              : 8;  /**< [  7:  0] Indicates completion/error status of the CPT coprocessor for the
                                                                 associated instruction, as enumerated by CPT_COMP_E. Core
                                                                 software may write the memory location containing [COMPCODE] to 0x0
                                                                 before ringing the doorbell, and then poll for completion by
                                                                 checking for a nonzero value.

                                                                 Once the core observes a nonzero [COMPCODE] value in this case, the CPT
                                                                 coprocessor will have also completed L2/DRAM write operations. */
#else /* Word 0 - Little Endian */
        uint64_t compcode              : 8;  /**< [  7:  0] Indicates completion/error status of the CPT coprocessor for the
                                                                 associated instruction, as enumerated by CPT_COMP_E. Core
                                                                 software may write the memory location containing [COMPCODE] to 0x0
                                                                 before ringing the doorbell, and then poll for completion by
                                                                 checking for a nonzero value.

                                                                 Once the core observes a nonzero [COMPCODE] value in this case, the CPT
                                                                 coprocessor will have also completed L2/DRAM write operations. */
        uint64_t uc_compcode           : 8;  /**< [ 15:  8] The completion code generated by the microcode that executed the CPT_INST_S
                                                                 on the engine. See also [COMPCODE].

                                                                 When CPT_INST_S[NIXTXL]=0x0, engine microcode entirely defines the [UC_COMPCODE]
                                                                 value.

                                                                 When CPT_INST_S[NIXTXL]!=0x0, i.e. when CPT should submit a NIX TX descriptor,
                                                                 then CPT considers [UC_COMPCODE]!=0 an error indication, and will not
                                                                 submit the NIX TX descriptor.

                                                                 [UC_COMPCODE] is unpredictable when [COMPCODE] is anything other than
                                                                 CPT_COMP_E::GOOD. */
        uint64_t doneint               : 1;  /**< [ 16: 16] Done interrupt. This bit is copied from the corresponding instruction's
                                                                 CPT_INST_S[DONEINT]. */
        uint64_t reserved_17_63        : 47;
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t reserved_64_127       : 64;
#else /* Word 1 - Little Endian */
        uint64_t reserved_64_127       : 64;
#endif /* Word 1 - End */
    } s;
    struct bdk_cpt_res_s_cn8
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_17_63        : 47;
        uint64_t doneint               : 1;  /**< [ 16: 16] Done interrupt. This bit is copied from the corresponding instruction's
                                                                 CPT_INST_S[DONEINT]. */
        uint64_t reserved_8_15         : 8;
        uint64_t compcode              : 8;  /**< [  7:  0] Indicates completion/error status of the CPT coprocessor for the
                                                                 associated instruction, as enumerated by CPT_COMP_E. Core
                                                                 software may write the memory location containing [COMPCODE] to 0x0
                                                                 before ringing the doorbell, and then poll for completion by
                                                                 checking for a nonzero value.

                                                                 Once the core observes a nonzero [COMPCODE] value in this case, the CPT
                                                                 coprocessor will have also completed L2/DRAM write operations. */
#else /* Word 0 - Little Endian */
        uint64_t compcode              : 8;  /**< [  7:  0] Indicates completion/error status of the CPT coprocessor for the
                                                                 associated instruction, as enumerated by CPT_COMP_E. Core
                                                                 software may write the memory location containing [COMPCODE] to 0x0
                                                                 before ringing the doorbell, and then poll for completion by
                                                                 checking for a nonzero value.

                                                                 Once the core observes a nonzero [COMPCODE] value in this case, the CPT
                                                                 coprocessor will have also completed L2/DRAM write operations. */
        uint64_t reserved_8_15         : 8;
        uint64_t doneint               : 1;  /**< [ 16: 16] Done interrupt. This bit is copied from the corresponding instruction's
                                                                 CPT_INST_S[DONEINT]. */
        uint64_t reserved_17_63        : 47;
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t reserved_64_127       : 64;
#else /* Word 1 - Little Endian */
        uint64_t reserved_64_127       : 64;
#endif /* Word 1 - End */
    } cn8;
    struct bdk_cpt_res_s_cn9
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_17_63        : 47;
        uint64_t doneint               : 1;  /**< [ 16: 16] Done interrupt. When set, CPT incremented CPT_LF_DONE[DONE] upon completing
                                                                 the CPT_INST_S, possibly causing an interrupt.

                                                                 See also CPT_INST_S[DONEINT]. [DONEINT] may differ from CPT_INST_S[DONEINT]. */
        uint64_t uc_compcode           : 8;  /**< [ 15:  8] The completion code generated by the microcode that executed the CPT_INST_S
                                                                 on the engine. See also [COMPCODE].

                                                                 When CPT_INST_S[NIXTXL]=0x0, engine microcode entirely defines the [UC_COMPCODE]
                                                                 value.

                                                                 When CPT_INST_S[NIXTXL]!=0x0, i.e. when CPT should submit a NIX TX descriptor,
                                                                 then CPT considers [UC_COMPCODE]!=0 an error indication, and will not
                                                                 submit the NIX TX descriptor.

                                                                 [UC_COMPCODE] is unpredictable when [COMPCODE] is anything other than
                                                                 CPT_COMP_E::GOOD. */
        uint64_t compcode              : 8;  /**< [  7:  0] Indicates hardware-detected completion/error status of CPT for
                                                                 the CPT_INST_S. Enumerated by CPT_COMP_E. See also [UC_COMPCODE].
                                                                 Software should determine success or failure of the instruction
                                                                 using both [COMPCODE] (hardware-detection) and [UC_COMPCODE]
                                                                 (software-detection).

                                                                 Core software may poll for completion of the CPT_INST_S by clearing
                                                                 the memory location that will eventually contain [COMPCODE] to zero
                                                                 before submitting the instruction to CPT. Once the core observes a
                                                                 nonzero [COMPCODE] value (i.e. something other than CPT_COMP_E::NOTDONE),
                                                                 CPT will have completed all LLC/DRAM write operations for the CPT_INST_S. */
#else /* Word 0 - Little Endian */
        uint64_t compcode              : 8;  /**< [  7:  0] Indicates hardware-detected completion/error status of CPT for
                                                                 the CPT_INST_S. Enumerated by CPT_COMP_E. See also [UC_COMPCODE].
                                                                 Software should determine success or failure of the instruction
                                                                 using both [COMPCODE] (hardware-detection) and [UC_COMPCODE]
                                                                 (software-detection).

                                                                 Core software may poll for completion of the CPT_INST_S by clearing
                                                                 the memory location that will eventually contain [COMPCODE] to zero
                                                                 before submitting the instruction to CPT. Once the core observes a
                                                                 nonzero [COMPCODE] value (i.e. something other than CPT_COMP_E::NOTDONE),
                                                                 CPT will have completed all LLC/DRAM write operations for the CPT_INST_S. */
        uint64_t uc_compcode           : 8;  /**< [ 15:  8] The completion code generated by the microcode that executed the CPT_INST_S
                                                                 on the engine. See also [COMPCODE].

                                                                 When CPT_INST_S[NIXTXL]=0x0, engine microcode entirely defines the [UC_COMPCODE]
                                                                 value.

                                                                 When CPT_INST_S[NIXTXL]!=0x0, i.e. when CPT should submit a NIX TX descriptor,
                                                                 then CPT considers [UC_COMPCODE]!=0 an error indication, and will not
                                                                 submit the NIX TX descriptor.

                                                                 [UC_COMPCODE] is unpredictable when [COMPCODE] is anything other than
                                                                 CPT_COMP_E::GOOD. */
        uint64_t doneint               : 1;  /**< [ 16: 16] Done interrupt. When set, CPT incremented CPT_LF_DONE[DONE] upon completing
                                                                 the CPT_INST_S, possibly causing an interrupt.

                                                                 See also CPT_INST_S[DONEINT]. [DONEINT] may differ from CPT_INST_S[DONEINT]. */
        uint64_t reserved_17_63        : 47;
#endif /* Word 0 - End */
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 1 - Big Endian */
        uint64_t reserved_64_127       : 64;
#else /* Word 1 - Little Endian */
        uint64_t reserved_64_127       : 64;
#endif /* Word 1 - End */
    } cn9;
};

/**
 * Register (RVU_PF_BAR0) cpt#_af_active_cycles_pc
 *
 * CPT AF Active Cycles Register
 */
union bdk_cptx_af_active_cycles_pc
{
    uint64_t u;
    struct bdk_cptx_af_active_cycles_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t act_cyc               : 64; /**< [ 63:  0](R/W/H) Counts every coprocessor-clock cycle that the conditional clocks are active.
                                                                 Internal:
                                                                 Includes CPT internal or any engine clock being enabled. */
#else /* Word 0 - Little Endian */
        uint64_t act_cyc               : 64; /**< [ 63:  0](R/W/H) Counts every coprocessor-clock cycle that the conditional clocks are active.
                                                                 Internal:
                                                                 Includes CPT internal or any engine clock being enabled. */
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_af_active_cycles_pc_s cn; */
};
typedef union bdk_cptx_af_active_cycles_pc bdk_cptx_af_active_cycles_pc_t;

static inline uint64_t BDK_CPTX_AF_ACTIVE_CYCLES_PC(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_AF_ACTIVE_CYCLES_PC(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && (a==0))
        return 0x8400a001c000ll + 0x10000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && (a<=1))
        return 0x8400a001c000ll + 0x10000000ll * ((a) & 0x1);
    if (bdk_is_model(OCTEONTX_CN98XX) && (a<=1))
        return 0x8400a001c000ll + 0x10000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_AF_ACTIVE_CYCLES_PC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_AF_ACTIVE_CYCLES_PC(a) bdk_cptx_af_active_cycles_pc_t
#define bustype_BDK_CPTX_AF_ACTIVE_CYCLES_PC(a) BDK_CSR_TYPE_RVU_PF_BAR0
#define basename_BDK_CPTX_AF_ACTIVE_CYCLES_PC(a) "CPTX_AF_ACTIVE_CYCLES_PC"
#define device_bar_BDK_CPTX_AF_ACTIVE_CYCLES_PC(a) 0x0 /* RVU_BAR0 */
#define busnum_BDK_CPTX_AF_ACTIVE_CYCLES_PC(a) (a)
#define arguments_BDK_CPTX_AF_ACTIVE_CYCLES_PC(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_bar2_alias#
 *
 * CPT Admin Function  BAR2 Alias Registers
 * These registers alias to the CPT BAR2 registers for the PF and function
 * selected by CPT_AF_BAR2_SEL[PF_FUNC].
 *
 * Internal:
 * Not implemented. Placeholder for bug33464.
 */
union bdk_cptx_af_bar2_aliasx
{
    uint64_t u;
    struct bdk_cptx_af_bar2_aliasx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W/H) Aliased register data. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W/H) Aliased register data. */
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_af_bar2_aliasx_s cn; */
};
typedef union bdk_cptx_af_bar2_aliasx bdk_cptx_af_bar2_aliasx_t;

static inline uint64_t BDK_CPTX_AF_BAR2_ALIASX(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_AF_BAR2_ALIASX(unsigned long a, unsigned long b)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && ((a==0) && (b<=131071)))
        return 0x8400a9100000ll + 0x10000000ll * ((a) & 0x0) + 8ll * ((b) & 0x1ffff);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && ((a<=1) && (b<=131071)))
        return 0x8400a9100000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x1ffff);
    if (bdk_is_model(OCTEONTX_CN98XX) && ((a<=1) && (b<=131071)))
        return 0x8400a9100000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x1ffff);
    __bdk_csr_fatal("CPTX_AF_BAR2_ALIASX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_AF_BAR2_ALIASX(a,b) bdk_cptx_af_bar2_aliasx_t
#define bustype_BDK_CPTX_AF_BAR2_ALIASX(a,b) BDK_CSR_TYPE_RVU_PF_BAR0
#define basename_BDK_CPTX_AF_BAR2_ALIASX(a,b) "CPTX_AF_BAR2_ALIASX"
#define device_bar_BDK_CPTX_AF_BAR2_ALIASX(a,b) 0x0 /* RVU_BAR0 */
#define busnum_BDK_CPTX_AF_BAR2_ALIASX(a,b) (a)
#define arguments_BDK_CPTX_AF_BAR2_ALIASX(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_bar2_sel
 *
 * CPT Admin Function BAR2 Select Register
 * This register configures BAR2 accesses from the CPT_AF_BAR2_ALIAS() registers in BAR0.
 * Internal:
 * Not implemented. Placeholder for bug33464.
 */
union bdk_cptx_af_bar2_sel
{
    uint64_t u;
    struct bdk_cptx_af_bar2_sel_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_17_63        : 47;
        uint64_t alias_ena             : 1;  /**< [ 16: 16](R/W) Enable BAR2 register accesses from the AF BAR2 alias registers in BAR0. */
        uint64_t alias_pf_func         : 16; /**< [ 15:  0](R/W) PF and function whose BAR2 registers may be accessed from the AF BAR2 alias
                                                                 registers. Format specified by RVU_PF_FUNC_S. */
#else /* Word 0 - Little Endian */
        uint64_t alias_pf_func         : 16; /**< [ 15:  0](R/W) PF and function whose BAR2 registers may be accessed from the AF BAR2 alias
                                                                 registers. Format specified by RVU_PF_FUNC_S. */
        uint64_t alias_ena             : 1;  /**< [ 16: 16](R/W) Enable BAR2 register accesses from the AF BAR2 alias registers in BAR0. */
        uint64_t reserved_17_63        : 47;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_af_bar2_sel_s cn; */
};
typedef union bdk_cptx_af_bar2_sel bdk_cptx_af_bar2_sel_t;

static inline uint64_t BDK_CPTX_AF_BAR2_SEL(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_AF_BAR2_SEL(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && (a==0))
        return 0x8400a9000000ll + 0x10000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && (a<=1))
        return 0x8400a9000000ll + 0x10000000ll * ((a) & 0x1);
    if (bdk_is_model(OCTEONTX_CN98XX) && (a<=1))
        return 0x8400a9000000ll + 0x10000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_AF_BAR2_SEL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_AF_BAR2_SEL(a) bdk_cptx_af_bar2_sel_t
#define bustype_BDK_CPTX_AF_BAR2_SEL(a) BDK_CSR_TYPE_RVU_PF_BAR0
#define basename_BDK_CPTX_AF_BAR2_SEL(a) "CPTX_AF_BAR2_SEL"
#define device_bar_BDK_CPTX_AF_BAR2_SEL(a) 0x0 /* RVU_BAR0 */
#define busnum_BDK_CPTX_AF_BAR2_SEL(a) (a)
#define arguments_BDK_CPTX_AF_BAR2_SEL(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_blk_rst
 *
 * CPT AF Block Reset Registers
 * Writing a 1 to CPT_AF_BLK_RST[RST] resets the CPT. After receiving a store to this CSR, the CPT
 * must not be sent any other operations for 2500 coprocessor-clock cycles.
 */
union bdk_cptx_af_blk_rst
{
    uint64_t u;
    struct bdk_cptx_af_blk_rst_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t busy                  : 1;  /**< [ 63: 63](RO/H) When one, the block is busy completing reset. No access except the reading of
                                                                 this bit should occur to the block until this is clear. */
        uint64_t reserved_1_62         : 62;
        uint64_t rst                   : 1;  /**< [  0:  0](WO/H) Write one to reset the block, except for privileged AF registers in PF BAR0
                                                                 (block_PRIV_*). Software must ensure that all block activity is quiesced before
                                                                 writing 1. */
#else /* Word 0 - Little Endian */
        uint64_t rst                   : 1;  /**< [  0:  0](WO/H) Write one to reset the block, except for privileged AF registers in PF BAR0
                                                                 (block_PRIV_*). Software must ensure that all block activity is quiesced before
                                                                 writing 1. */
        uint64_t reserved_1_62         : 62;
        uint64_t busy                  : 1;  /**< [ 63: 63](RO/H) When one, the block is busy completing reset. No access except the reading of
                                                                 this bit should occur to the block until this is clear. */
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_af_blk_rst_s cn; */
};
typedef union bdk_cptx_af_blk_rst bdk_cptx_af_blk_rst_t;

static inline uint64_t BDK_CPTX_AF_BLK_RST(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_AF_BLK_RST(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && (a==0))
        return 0x8400a0046000ll + 0x10000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && (a<=1))
        return 0x8400a0046000ll + 0x10000000ll * ((a) & 0x1);
    if (bdk_is_model(OCTEONTX_CN98XX) && (a<=1))
        return 0x8400a0046000ll + 0x10000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_AF_BLK_RST", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_AF_BLK_RST(a) bdk_cptx_af_blk_rst_t
#define bustype_BDK_CPTX_AF_BLK_RST(a) BDK_CSR_TYPE_RVU_PF_BAR0
#define basename_BDK_CPTX_AF_BLK_RST(a) "CPTX_AF_BLK_RST"
#define device_bar_BDK_CPTX_AF_BLK_RST(a) 0x0 /* RVU_BAR0 */
#define busnum_BDK_CPTX_AF_BLK_RST(a) (a)
#define arguments_BDK_CPTX_AF_BLK_RST(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_bp#_test
 *
 * INTERNAL: CPT AF Backpressure Test Register
 */
union bdk_cptx_af_bpx_test
{
    uint64_t u;
    struct bdk_cptx_af_bpx_test_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t enable                : 16; /**< [ 63: 48](R/W) Enable test mode. For diagnostic use only.
                                                                 Internal:
                                                                 Once a bit is set, random backpressure is generated
                                                                 at the corresponding point to allow for more frequent backpressure.

                                                                 \<page\>
                                                                 CPT_AF_BP(0)_TEST:
                                                                 \<63\> = Reserved. Weight in [BP_CFG]\<15\>.
                                                                 \<62\> = Reserved. Weight in [BP_CFG]\<14\>.
                                                                 \<61\> = credit backpressure in iom. Weight in [BP_CFG]\<13\>.
                                                                 \<60\> = credit backpressure in qpk. Weight in [BP_CFG]\<12\>.
                                                                 \<59\> = req epci3 data fifo backpressure. Weight in [BP_CFG]\<11\>.
                                                                 \<58\> = req epci2 data fifo backpressure. Weight in [BP_CFG]\<10\>.
                                                                 \<57\> = req epci1 data fifo backpressure. Weight in [BP_CFG]\<9\>.
                                                                 \<56\> = req epci0 data fifo backpressure. Weight in [BP_CFG]\<8\>.
                                                                 \<55\> = ifm to qpk backpressure. Weight in [BP_CFG]\<7\>.
                                                                 \<54\> = dne to icb backpressure. Weight in [BP_CFG]\<6\>.
                                                                 \<53\> = ifm to icb backpressure. Weight in [BP_CFG]\<5\>.
                                                                 \<52\> = iwb to nbr backpressure. Weight in [BP_CFG]\<4\>.
                                                                 \<51\> = rsp 4k fifo backpressure for epci3. Weight in [BP_CFG]\<3\>.
                                                                 \<50\> = rsp 4k fifo backpressure for epci2. Weight in [BP_CFG]\<2\>.
                                                                 \<49\> = rsp 4k fifo backpressure for epci1. Weight in [BP_CFG]\<1\>.
                                                                 \<48\> = rsp 4k fifo backpressure for epci0. Weight in [BP_CFG]\<0\>.

                                                                 \<page\>
                                                                 CPT_AF_BP(1)_TEST:
                                                                 \<63\> = Reserved. Weight in [BP_CFG]\<15\>.
                                                                 \<62\> = Reserved. Weight in [BP_CFG]\<14\>.
                                                                 \<61\> = Reserved. Weight in [BP_CFG]\<13\>.
                                                                 \<60\> = Reserved. Weight in [BP_CFG]\<12\>.
                                                                 \<59\> = Reserved. Weight in [BP_CFG]\<11\>.
                                                                 \<58\> = Reserved. Weight in [BP_CFG]\<10\>.
                                                                 \<57\> = Reserved. Weight in [BP_CFG]\<9\>.
                                                                 \<56\> = Reserved. Weight in [BP_CFG]\<8\>.
                                                                 \<55\> = Reserved. Weight in [BP_CFG]\<7\>.
                                                                 \<54\> = Reserved. Weight in [BP_CFG]\<6\>.
                                                                 \<53\> = Reserved. Weight in [BP_CFG]\<5\>.
                                                                 \<52\> = Reserved. Weight in [BP_CFG]\<4\>.
                                                                 \<51\> = Reserved. Weight in [BP_CFG]\<3\>.
                                                                 \<50\> = Reserved. Weight in [BP_CFG]\<2\>.
                                                                 \<49\> = Reserved. Weight in [BP_CFG]\<1\>.
                                                                 \<48\> = ndb internal read req fifo. Weight in [BP_CFG]\<0\>. */
        uint64_t bp_cfg                : 32; /**< [ 47: 16](R/W) Backpressure weight. For diagnostic use only.
                                                                 Internal:
                                                                 There are 2 backpressure configuration bits per enable, with the two bits
                                                                 defined as 0x0=100% of the time, 0x1=75% of the time, 0x2=50% of the time,
                                                                 0x3=25% of the time.
                                                                   \<47:46\> = Config 15.
                                                                   \<45:44\> = Config 14.
                                                                   \<43:42\> = Config 13.
                                                                   \<41:40\> = Config 12.
                                                                   \<39:38\> = Config 11.
                                                                   \<37:36\> = Config 10.
                                                                   \<35:34\> = Config 9.
                                                                   \<33:32\> = Config 8.
                                                                   \<31:30\> = Config 7.
                                                                   \<29:28\> = Config 6.
                                                                   \<27:26\> = Config 5.
                                                                   \<25:24\> = Config 4.
                                                                   \<23:22\> = Config 3.
                                                                   \<21:20\> = Config 2.
                                                                   \<19:18\> = Config 1.
                                                                   \<17:16\> = Config 0. */
        uint64_t reserved_12_15        : 4;
        uint64_t lfsr_freq             : 12; /**< [ 11:  0](R/W) Test LFSR update frequency in coprocessor-clocks minus one. */
#else /* Word 0 - Little Endian */
        uint64_t lfsr_freq             : 12; /**< [ 11:  0](R/W) Test LFSR update frequency in coprocessor-clocks minus one. */
        uint64_t reserved_12_15        : 4;
        uint64_t bp_cfg                : 32; /**< [ 47: 16](R/W) Backpressure weight. For diagnostic use only.
                                                                 Internal:
                                                                 There are 2 backpressure configuration bits per enable, with the two bits
                                                                 defined as 0x0=100% of the time, 0x1=75% of the time, 0x2=50% of the time,
                                                                 0x3=25% of the time.
                                                                   \<47:46\> = Config 15.
                                                                   \<45:44\> = Config 14.
                                                                   \<43:42\> = Config 13.
                                                                   \<41:40\> = Config 12.
                                                                   \<39:38\> = Config 11.
                                                                   \<37:36\> = Config 10.
                                                                   \<35:34\> = Config 9.
                                                                   \<33:32\> = Config 8.
                                                                   \<31:30\> = Config 7.
                                                                   \<29:28\> = Config 6.
                                                                   \<27:26\> = Config 5.
                                                                   \<25:24\> = Config 4.
                                                                   \<23:22\> = Config 3.
                                                                   \<21:20\> = Config 2.
                                                                   \<19:18\> = Config 1.
                                                                   \<17:16\> = Config 0. */
        uint64_t enable                : 16; /**< [ 63: 48](R/W) Enable test mode. For diagnostic use only.
                                                                 Internal:
                                                                 Once a bit is set, random backpressure is generated
                                                                 at the corresponding point to allow for more frequent backpressure.

                                                                 \<page\>
                                                                 CPT_AF_BP(0)_TEST:
                                                                 \<63\> = Reserved. Weight in [BP_CFG]\<15\>.
                                                                 \<62\> = Reserved. Weight in [BP_CFG]\<14\>.
                                                                 \<61\> = credit backpressure in iom. Weight in [BP_CFG]\<13\>.
                                                                 \<60\> = credit backpressure in qpk. Weight in [BP_CFG]\<12\>.
                                                                 \<59\> = req epci3 data fifo backpressure. Weight in [BP_CFG]\<11\>.
                                                                 \<58\> = req epci2 data fifo backpressure. Weight in [BP_CFG]\<10\>.
                                                                 \<57\> = req epci1 data fifo backpressure. Weight in [BP_CFG]\<9\>.
                                                                 \<56\> = req epci0 data fifo backpressure. Weight in [BP_CFG]\<8\>.
                                                                 \<55\> = ifm to qpk backpressure. Weight in [BP_CFG]\<7\>.
                                                                 \<54\> = dne to icb backpressure. Weight in [BP_CFG]\<6\>.
                                                                 \<53\> = ifm to icb backpressure. Weight in [BP_CFG]\<5\>.
                                                                 \<52\> = iwb to nbr backpressure. Weight in [BP_CFG]\<4\>.
                                                                 \<51\> = rsp 4k fifo backpressure for epci3. Weight in [BP_CFG]\<3\>.
                                                                 \<50\> = rsp 4k fifo backpressure for epci2. Weight in [BP_CFG]\<2\>.
                                                                 \<49\> = rsp 4k fifo backpressure for epci1. Weight in [BP_CFG]\<1\>.
                                                                 \<48\> = rsp 4k fifo backpressure for epci0. Weight in [BP_CFG]\<0\>.

                                                                 \<page\>
                                                                 CPT_AF_BP(1)_TEST:
                                                                 \<63\> = Reserved. Weight in [BP_CFG]\<15\>.
                                                                 \<62\> = Reserved. Weight in [BP_CFG]\<14\>.
                                                                 \<61\> = Reserved. Weight in [BP_CFG]\<13\>.
                                                                 \<60\> = Reserved. Weight in [BP_CFG]\<12\>.
                                                                 \<59\> = Reserved. Weight in [BP_CFG]\<11\>.
                                                                 \<58\> = Reserved. Weight in [BP_CFG]\<10\>.
                                                                 \<57\> = Reserved. Weight in [BP_CFG]\<9\>.
                                                                 \<56\> = Reserved. Weight in [BP_CFG]\<8\>.
                                                                 \<55\> = Reserved. Weight in [BP_CFG]\<7\>.
                                                                 \<54\> = Reserved. Weight in [BP_CFG]\<6\>.
                                                                 \<53\> = Reserved. Weight in [BP_CFG]\<5\>.
                                                                 \<52\> = Reserved. Weight in [BP_CFG]\<4\>.
                                                                 \<51\> = Reserved. Weight in [BP_CFG]\<3\>.
                                                                 \<50\> = Reserved. Weight in [BP_CFG]\<2\>.
                                                                 \<49\> = Reserved. Weight in [BP_CFG]\<1\>.
                                                                 \<48\> = ndb internal read req fifo. Weight in [BP_CFG]\<0\>. */
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_af_bpx_test_s cn; */
};
typedef union bdk_cptx_af_bpx_test bdk_cptx_af_bpx_test_t;

static inline uint64_t BDK_CPTX_AF_BPX_TEST(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_AF_BPX_TEST(unsigned long a, unsigned long b)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && ((a==0) && (b<=1)))
        return 0x8400a0005000ll + 0x10000000ll * ((a) & 0x0) + 8ll * ((b) & 0x1);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && ((a<=1) && (b<=1)))
        return 0x8400a0005000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    if (bdk_is_model(OCTEONTX_CN98XX) && ((a<=1) && (b<=1)))
        return 0x8400a0005000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    __bdk_csr_fatal("CPTX_AF_BPX_TEST", 2, a, b, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_AF_BPX_TEST(a,b) bdk_cptx_af_bpx_test_t
#define bustype_BDK_CPTX_AF_BPX_TEST(a,b) BDK_CSR_TYPE_RVU_PF_BAR0
#define basename_BDK_CPTX_AF_BPX_TEST(a,b) "CPTX_AF_BPX_TEST"
#define device_bar_BDK_CPTX_AF_BPX_TEST(a,b) 0x0 /* RVU_BAR0 */
#define busnum_BDK_CPTX_AF_BPX_TEST(a,b) (a)
#define arguments_BDK_CPTX_AF_BPX_TEST(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_constants0
 *
 * CPT AF Constants Register
 * This register contains implementation-related parameters of CPT.
 */
union bdk_cptx_af_constants0
{
    uint64_t u;
    struct bdk_cptx_af_constants0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_40_63        : 24;
        uint64_t epcis                 : 8;  /**< [ 39: 32](RO) Number of EPCI buses. */
        uint64_t reserved_24_31        : 8;
        uint64_t grps                  : 8;  /**< [ 23: 16](RO) Number of engine groups implemented. */
        uint64_t reserved_8_15         : 8;
        uint64_t lf                    : 8;  /**< [  7:  0](RO) Number of LFs. */
#else /* Word 0 - Little Endian */
        uint64_t lf                    : 8;  /**< [  7:  0](RO) Number of LFs. */
        uint64_t reserved_8_15         : 8;
        uint64_t grps                  : 8;  /**< [ 23: 16](RO) Number of engine groups implemented. */
        uint64_t reserved_24_31        : 8;
        uint64_t epcis                 : 8;  /**< [ 39: 32](RO) Number of EPCI buses. */
        uint64_t reserved_40_63        : 24;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_af_constants0_s cn; */
};
typedef union bdk_cptx_af_constants0 bdk_cptx_af_constants0_t;

static inline uint64_t BDK_CPTX_AF_CONSTANTS0(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_AF_CONSTANTS0(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && (a==0))
        return 0x8400a0000000ll + 0x10000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && (a<=1))
        return 0x8400a0000000ll + 0x10000000ll * ((a) & 0x1);
    if (bdk_is_model(OCTEONTX_CN98XX) && (a<=1))
        return 0x8400a0000000ll + 0x10000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_AF_CONSTANTS0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_AF_CONSTANTS0(a) bdk_cptx_af_constants0_t
#define bustype_BDK_CPTX_AF_CONSTANTS0(a) BDK_CSR_TYPE_RVU_PF_BAR0
#define basename_BDK_CPTX_AF_CONSTANTS0(a) "CPTX_AF_CONSTANTS0"
#define device_bar_BDK_CPTX_AF_CONSTANTS0(a) 0x0 /* RVU_BAR0 */
#define busnum_BDK_CPTX_AF_CONSTANTS0(a) (a)
#define arguments_BDK_CPTX_AF_CONSTANTS0(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_constants1
 *
 * CPT AF Constants Register
 * This register contains implementation-related parameters of CPT.
 */
union bdk_cptx_af_constants1
{
    uint64_t u;
    struct bdk_cptx_af_constants1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t ae                    : 16; /**< [ 47: 32](RO/H) Number of AEs. In CNXXXX, for CPT returns 0x20, or less if there are fuse-disables. */
        uint64_t ie                    : 16; /**< [ 31: 16](RO/H) Number of IEs. In CNXXXX, for CPT returns 0x20, or less if there are fuse-disables. */
        uint64_t se                    : 16; /**< [ 15:  0](RO/H) "Number of SEs. In CNXXXX, for CPT returns 0x40, or less if there are fuse-disables.

                                                                 _ #SE along with #IE and #AE specifies the supported engine indices for SE, IE and AE.

                                                                 Only the following bit indices are supported:
                                                                   _    0    .. #SE-1         = the SEs.
                                                                   _   #SE   .. #SE+#IE-1     = the IEs.
                                                                   _ #SE+#IE .. #SE+#IE+#AE-1 = the AEs." */
#else /* Word 0 - Little Endian */
        uint64_t se                    : 16; /**< [ 15:  0](RO/H) "Number of SEs. In CNXXXX, for CPT returns 0x40, or less if there are fuse-disables.

                                                                 _ #SE along with #IE and #AE specifies the supported engine indices for SE, IE and AE.

                                                                 Only the following bit indices are supported:
                                                                   _    0    .. #SE-1         = the SEs.
                                                                   _   #SE   .. #SE+#IE-1     = the IEs.
                                                                   _ #SE+#IE .. #SE+#IE+#AE-1 = the AEs." */
        uint64_t ie                    : 16; /**< [ 31: 16](RO/H) Number of IEs. In CNXXXX, for CPT returns 0x20, or less if there are fuse-disables. */
        uint64_t ae                    : 16; /**< [ 47: 32](RO/H) Number of AEs. In CNXXXX, for CPT returns 0x20, or less if there are fuse-disables. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_af_constants1_s cn; */
};
typedef union bdk_cptx_af_constants1 bdk_cptx_af_constants1_t;

static inline uint64_t BDK_CPTX_AF_CONSTANTS1(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_AF_CONSTANTS1(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && (a==0))
        return 0x8400a0001000ll + 0x10000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && (a<=1))
        return 0x8400a0001000ll + 0x10000000ll * ((a) & 0x1);
    if (bdk_is_model(OCTEONTX_CN98XX) && (a<=1))
        return 0x8400a0001000ll + 0x10000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_AF_CONSTANTS1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_AF_CONSTANTS1(a) bdk_cptx_af_constants1_t
#define bustype_BDK_CPTX_AF_CONSTANTS1(a) BDK_CSR_TYPE_RVU_PF_BAR0
#define basename_BDK_CPTX_AF_CONSTANTS1(a) "CPTX_AF_CONSTANTS1"
#define device_bar_BDK_CPTX_AF_CONSTANTS1(a) 0x0 /* RVU_BAR0 */
#define busnum_BDK_CPTX_AF_CONSTANTS1(a) (a)
#define arguments_BDK_CPTX_AF_CONSTANTS1(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_cptclk_cnt
 *
 * CPT AF CPTCLK Counter Register
 */
union bdk_cptx_af_cptclk_cnt
{
    uint64_t u;
    struct bdk_cptx_af_cptclk_cnt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) This counter is incremented every CPTCLK. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) This counter is incremented every CPTCLK. */
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_af_cptclk_cnt_s cn; */
};
typedef union bdk_cptx_af_cptclk_cnt bdk_cptx_af_cptclk_cnt_t;

static inline uint64_t BDK_CPTX_AF_CPTCLK_CNT(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_AF_CPTCLK_CNT(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && (a==0))
        return 0x8400a002a000ll + 0x10000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && (a<=1))
        return 0x8400a002a000ll + 0x10000000ll * ((a) & 0x1);
    if (bdk_is_model(OCTEONTX_CN98XX) && (a<=1))
        return 0x8400a002a000ll + 0x10000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_AF_CPTCLK_CNT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_AF_CPTCLK_CNT(a) bdk_cptx_af_cptclk_cnt_t
#define bustype_BDK_CPTX_AF_CPTCLK_CNT(a) BDK_CSR_TYPE_RVU_PF_BAR0
#define basename_BDK_CPTX_AF_CPTCLK_CNT(a) "CPTX_AF_CPTCLK_CNT"
#define device_bar_BDK_CPTX_AF_CPTCLK_CNT(a) 0x0 /* RVU_BAR0 */
#define busnum_BDK_CPTX_AF_CPTCLK_CNT(a) (a)
#define arguments_BDK_CPTX_AF_CPTCLK_CNT(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_ctl
 *
 * RVU Admin Function General Control Register
 */
union bdk_cptx_af_ctl
{
    uint64_t u;
    struct bdk_cptx_af_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_3_63         : 61;
        uint64_t fc_stype              : 2;  /**< [  2:  1](R/W) Type of store to write the memory queue size in LLC/DRAM:
                                                                 0x0 = Store full cache line, allocate cache (STF).
                                                                 0x1 = Store full cache line, no allocate (STT).
                                                                 0x2 = Store partial cache line, allocate cache (STP).
                                                                 0x3 = Reserved.

                                                                 See CPT_LF_CTL[FC_ENA,FC_HYST_BITS,FC_UP_CROSSING] and CPT_FC_WRITE_S.

                                                                 When [FC_STYPE] is 0x0 or 0x1. software must reserve the entire
                                                                 cache block at address (CPT_LF_Q_BASE[ADDR] \<\< 7) for the memory size
                                                                 writes. */
        uint64_t rd_psn_ign            : 1;  /**< [  0:  0](R/W) Read poison ignore.

                                                                 0 = CPT treats received poison as if the transaction faulted.

                                                                 1 = CPT ignores received poison (i.e. acts as if there were no error).

                                                                 CPT always sets one of CPT_AF_RAS_INT[LD_CMD_PSN,LD_DAT_PSN] and one
                                                                 of CPT_AF_PSN()_LF[LF]/CPT_AF_PSN()_EXE[EXE] when it receives poison
                                                                 in a read response, irrespective of the [RD_PSN_IGN] value.

                                                                 Internal:
                                                                 CPT always ignores poison received with a CSR/LMTST read/write (i.e.
                                                                 treats the CSR/LMTST read/write as when there is no error). (IOB handles
                                                                 most of these errors, and we didn't want this complexity distributed
                                                                 amongst the block.)

                                                                 So use the ncb_ct_t::CT_WRPOIS from all read responses to set
                                                                 CPT_AF_RAS_INT[LD_CMD_PSN,LD_DAT_PSN] and
                                                                 CPT_AF_PSN()_LF[LF]/CPT_AF_PSN()_EXE[EXE], and conceptually convert
                                                                 ncb_ct_t::CT_WRPOIS to ncb_ct_t::RSPFLT for read responses when
                                                                 [RD_PSN_IGN]=0. Otherwise, treat ncb_ct_t::CT_WRPOIS cycle as
                                                                 normal NCB cycles. */
#else /* Word 0 - Little Endian */
        uint64_t rd_psn_ign            : 1;  /**< [  0:  0](R/W) Read poison ignore.

                                                                 0 = CPT treats received poison as if the transaction faulted.

                                                                 1 = CPT ignores received poison (i.e. acts as if there were no error).

                                                                 CPT always sets one of CPT_AF_RAS_INT[LD_CMD_PSN,LD_DAT_PSN] and one
                                                                 of CPT_AF_PSN()_LF[LF]/CPT_AF_PSN()_EXE[EXE] when it receives poison
                                                                 in a read response, irrespective of the [RD_PSN_IGN] value.

                                                                 Internal:
                                                                 CPT always ignores poison received with a CSR/LMTST read/write (i.e.
                                                                 treats the CSR/LMTST read/write as when there is no error). (IOB handles
                                                                 most of these errors, and we didn't want this complexity distributed
                                                                 amongst the block.)

                                                                 So use the ncb_ct_t::CT_WRPOIS from all read responses to set
                                                                 CPT_AF_RAS_INT[LD_CMD_PSN,LD_DAT_PSN] and
                                                                 CPT_AF_PSN()_LF[LF]/CPT_AF_PSN()_EXE[EXE], and conceptually convert
                                                                 ncb_ct_t::CT_WRPOIS to ncb_ct_t::RSPFLT for read responses when
                                                                 [RD_PSN_IGN]=0. Otherwise, treat ncb_ct_t::CT_WRPOIS cycle as
                                                                 normal NCB cycles. */
        uint64_t fc_stype              : 2;  /**< [  2:  1](R/W) Type of store to write the memory queue size in LLC/DRAM:
                                                                 0x0 = Store full cache line, allocate cache (STF).
                                                                 0x1 = Store full cache line, no allocate (STT).
                                                                 0x2 = Store partial cache line, allocate cache (STP).
                                                                 0x3 = Reserved.

                                                                 See CPT_LF_CTL[FC_ENA,FC_HYST_BITS,FC_UP_CROSSING] and CPT_FC_WRITE_S.

                                                                 When [FC_STYPE] is 0x0 or 0x1. software must reserve the entire
                                                                 cache block at address (CPT_LF_Q_BASE[ADDR] \<\< 7) for the memory size
                                                                 writes. */
        uint64_t reserved_3_63         : 61;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_af_ctl_s cn; */
};
typedef union bdk_cptx_af_ctl bdk_cptx_af_ctl_t;

static inline uint64_t BDK_CPTX_AF_CTL(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_AF_CTL(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && (a==0))
        return 0x8400a002e000ll + 0x10000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && (a<=1))
        return 0x8400a002e000ll + 0x10000000ll * ((a) & 0x1);
    if (bdk_is_model(OCTEONTX_CN98XX) && (a<=1))
        return 0x8400a002e000ll + 0x10000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_AF_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_AF_CTL(a) bdk_cptx_af_ctl_t
#define bustype_BDK_CPTX_AF_CTL(a) BDK_CSR_TYPE_RVU_PF_BAR0
#define basename_BDK_CPTX_AF_CTL(a) "CPTX_AF_CTL"
#define device_bar_BDK_CPTX_AF_CTL(a) 0x0 /* RVU_BAR0 */
#define busnum_BDK_CPTX_AF_CTL(a) (a)
#define arguments_BDK_CPTX_AF_CTL(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_diag
 *
 * CPT AF Diagnostic Control Register
 */
union bdk_cptx_af_diag
{
    uint64_t u;
    struct bdk_cptx_af_diag_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_25_63        : 39;
        uint64_t flt_dis               : 1;  /**< [ 24: 24](R/W) When one, disable DMA black hole on an engine DMA fault. For diagnostic use only. */
        uint64_t inst_infl             : 8;  /**< [ 23: 16](R/W) When [INST_INFL]!=0, this sets the maximum number of in-flight CPT
                                                                 instructions. When [INST_INFL]=0x0, the limit is 256. For diagnostic use only. */
        uint64_t reserved_13_15        : 3;
        uint64_t ncb_clken             : 1;  /**< [ 12: 12](R/W) When one, force the NCB interface conditional clocking
                                                                 and NCBI bus clock to be always on.

                                                                 For diagnostic use only. */
        uint64_t reserved_10_11        : 2;
        uint64_t force_cptclk          : 1;  /**< [  9:  9](RAZ) When this bit is set to one, it forces the CPTCLK clock tree to always be on.

                                                                 For diagnostic use only. */
        uint64_t forceclk              : 1;  /**< [  8:  8](R/W) When this bit is set to one, it forces CPT clocks on. For diagnostic use only. */
        uint64_t ld_infl               : 8;  /**< [  7:  0](R/W) Maximum number of in-flight data fetch transactions on the NCB. Larger values
                                                                 may improve CPT performance but may starve other devices on the same NCB. Values
                                                                 \> 128 are treated as 128. */
#else /* Word 0 - Little Endian */
        uint64_t ld_infl               : 8;  /**< [  7:  0](R/W) Maximum number of in-flight data fetch transactions on the NCB. Larger values
                                                                 may improve CPT performance but may starve other devices on the same NCB. Values
                                                                 \> 128 are treated as 128. */
        uint64_t forceclk              : 1;  /**< [  8:  8](R/W) When this bit is set to one, it forces CPT clocks on. For diagnostic use only. */
        uint64_t force_cptclk          : 1;  /**< [  9:  9](RAZ) When this bit is set to one, it forces the CPTCLK clock tree to always be on.

                                                                 For diagnostic use only. */
        uint64_t reserved_10_11        : 2;
        uint64_t ncb_clken             : 1;  /**< [ 12: 12](R/W) When one, force the NCB interface conditional clocking
                                                                 and NCBI bus clock to be always on.

                                                                 For diagnostic use only. */
        uint64_t reserved_13_15        : 3;
        uint64_t inst_infl             : 8;  /**< [ 23: 16](R/W) When [INST_INFL]!=0, this sets the maximum number of in-flight CPT
                                                                 instructions. When [INST_INFL]=0x0, the limit is 256. For diagnostic use only. */
        uint64_t flt_dis               : 1;  /**< [ 24: 24](R/W) When one, disable DMA black hole on an engine DMA fault. For diagnostic use only. */
        uint64_t reserved_25_63        : 39;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_af_diag_s cn9; */
    struct bdk_cptx_af_diag_cn96xxp1
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_25_63        : 39;
        uint64_t flt_dis               : 1;  /**< [ 24: 24](R/W) When one, disable DMA black hole on an engine DMA fault. For diagnostic use only. */
        uint64_t inst_infl             : 8;  /**< [ 23: 16](R/W) When [INST_INFL]!=0, this sets the maximum number of in-flight CPT
                                                                 instructions. When [INST_INFL]=0x0, the limit is 256. For diagnostic use only. */
        uint64_t reserved_13_15        : 3;
        uint64_t ncb_clken             : 1;  /**< [ 12: 12](R/W) When one, force the NCB interface conditional clocking
                                                                 and NCBI bus clock to be always on.

                                                                 For diagnostic use only. */
        uint64_t reserved_9_11         : 3;
        uint64_t forceclk              : 1;  /**< [  8:  8](R/W) When this bit is set to one, it forces CPT clocks on. For diagnostic use only. */
        uint64_t ld_infl               : 8;  /**< [  7:  0](R/W) Maximum number of in-flight data fetch transactions on the NCB. Larger values
                                                                 may improve CPT performance but may starve other devices on the same NCB. Values
                                                                 \> 128 are treated as 128. */
#else /* Word 0 - Little Endian */
        uint64_t ld_infl               : 8;  /**< [  7:  0](R/W) Maximum number of in-flight data fetch transactions on the NCB. Larger values
                                                                 may improve CPT performance but may starve other devices on the same NCB. Values
                                                                 \> 128 are treated as 128. */
        uint64_t forceclk              : 1;  /**< [  8:  8](R/W) When this bit is set to one, it forces CPT clocks on. For diagnostic use only. */
        uint64_t reserved_9_11         : 3;
        uint64_t ncb_clken             : 1;  /**< [ 12: 12](R/W) When one, force the NCB interface conditional clocking
                                                                 and NCBI bus clock to be always on.

                                                                 For diagnostic use only. */
        uint64_t reserved_13_15        : 3;
        uint64_t inst_infl             : 8;  /**< [ 23: 16](R/W) When [INST_INFL]!=0, this sets the maximum number of in-flight CPT
                                                                 instructions. When [INST_INFL]=0x0, the limit is 256. For diagnostic use only. */
        uint64_t flt_dis               : 1;  /**< [ 24: 24](R/W) When one, disable DMA black hole on an engine DMA fault. For diagnostic use only. */
        uint64_t reserved_25_63        : 39;
#endif /* Word 0 - End */
    } cn96xxp1;
    /* struct bdk_cptx_af_diag_s cn96xxp3; */
    /* struct bdk_cptx_af_diag_s cn98xx; */
};
typedef union bdk_cptx_af_diag bdk_cptx_af_diag_t;

static inline uint64_t BDK_CPTX_AF_DIAG(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_AF_DIAG(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && (a==0))
        return 0x8400a0003000ll + 0x10000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && (a<=1))
        return 0x8400a0003000ll + 0x10000000ll * ((a) & 0x1);
    if (bdk_is_model(OCTEONTX_CN98XX) && (a<=1))
        return 0x8400a0003000ll + 0x10000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_AF_DIAG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_AF_DIAG(a) bdk_cptx_af_diag_t
#define bustype_BDK_CPTX_AF_DIAG(a) BDK_CSR_TYPE_RVU_PF_BAR0
#define basename_BDK_CPTX_AF_DIAG(a) "CPTX_AF_DIAG"
#define device_bar_BDK_CPTX_AF_DIAG(a) 0x0 /* RVU_BAR0 */
#define busnum_BDK_CPTX_AF_DIAG(a) (a)
#define arguments_BDK_CPTX_AF_DIAG(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_eco
 *
 * CPT AF Control Register 2
 */
union bdk_cptx_af_eco
{
    uint64_t u;
    struct bdk_cptx_af_eco_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t eco_rw                : 31; /**< [ 31:  1](R/W) Reserved.
                                                                 Internal:
                                                                 Reserved for ECO usage. */
        uint64_t sso_pf_func_ovrd      : 1;  /**< [  0:  0](R/W) SSO PF_FUNC override.
                                                                 0 = For an Inline IPSEC LF (i.e. an LF with CPT_AF_LF()_CTL[PF_FUNC_INST]=1),
                                                                 CPT submits SSO work to PF_FUNC CPT_INST_S[SSO_PF_FUNC/NIXTX_ADDR\<59:44\>].
                                                                 1 = For an inline IPSEC LF (i.e. an LF with CPT_AF_LF()_CTL[PF_FUNC_INST]=1),
                                                                 CPT submits SSO work to the queue's CPT_AF_LF()_CTL2[SSO_PF_FUNC].

                                                                 Internal:
                                                                 The above description is inaccurate for CN93XX pass 1. In CN93XX pass 1,
                                                                 CPT_INST_S[SSO_PF_FUNC/NIXTX_ADDR\<59:44\>] does not exist and CPT really
                                                                 uses CPT_INST_S[RVU_PF_FUNC] when [SSO_PF_FUNC_OVRD]=0. */
#else /* Word 0 - Little Endian */
        uint64_t sso_pf_func_ovrd      : 1;  /**< [  0:  0](R/W) SSO PF_FUNC override.
                                                                 0 = For an Inline IPSEC LF (i.e. an LF with CPT_AF_LF()_CTL[PF_FUNC_INST]=1),
                                                                 CPT submits SSO work to PF_FUNC CPT_INST_S[SSO_PF_FUNC/NIXTX_ADDR\<59:44\>].
                                                                 1 = For an inline IPSEC LF (i.e. an LF with CPT_AF_LF()_CTL[PF_FUNC_INST]=1),
                                                                 CPT submits SSO work to the queue's CPT_AF_LF()_CTL2[SSO_PF_FUNC].

                                                                 Internal:
                                                                 The above description is inaccurate for CN93XX pass 1. In CN93XX pass 1,
                                                                 CPT_INST_S[SSO_PF_FUNC/NIXTX_ADDR\<59:44\>] does not exist and CPT really
                                                                 uses CPT_INST_S[RVU_PF_FUNC] when [SSO_PF_FUNC_OVRD]=0. */
        uint64_t eco_rw                : 31; /**< [ 31:  1](R/W) Reserved.
                                                                 Internal:
                                                                 Reserved for ECO usage. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_af_eco_s cn; */
};
typedef union bdk_cptx_af_eco bdk_cptx_af_eco_t;

static inline uint64_t BDK_CPTX_AF_ECO(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_AF_ECO(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && (a==0))
        return 0x8400a0004000ll + 0x10000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && (a<=1))
        return 0x8400a0004000ll + 0x10000000ll * ((a) & 0x1);
    if (bdk_is_model(OCTEONTX_CN98XX) && (a<=1))
        return 0x8400a0004000ll + 0x10000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_AF_ECO", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_AF_ECO(a) bdk_cptx_af_eco_t
#define bustype_BDK_CPTX_AF_ECO(a) BDK_CSR_TYPE_RVU_PF_BAR0
#define basename_BDK_CPTX_AF_ECO(a) "CPTX_AF_ECO"
#define device_bar_BDK_CPTX_AF_ECO(a) 0x0 /* RVU_BAR0 */
#define busnum_BDK_CPTX_AF_ECO(a) (a)
#define arguments_BDK_CPTX_AF_ECO(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_exe#_active
 *
 * CPT AF Exec Active Register
 * "This register will be nonzero if the engine is allocated to a LF. In the
 * event of a HWERR, this register can be consulted to determine whether any
 * action is required for the LF.
 *
 * Only the following register indices are supported:
 * _    0    .. #SE-1         = the SEs.
 * _   #SE   .. #SE+#IE-1     = the IEs.
 * _ #SE+#IE .. #SE+#IE+#AE-1 = the AEs.
 * _ where #SE,#IE,#AE = CPT_AF_CONSTANTS1[SE,IE,AE]. Software must not access
 * unsupported registers."
 */
union bdk_cptx_af_exex_active
{
    uint64_t u;
    struct bdk_cptx_af_exex_active_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_34_63        : 30;
        uint64_t icb_ptr               : 9;  /**< [ 33: 25](RO/H) Indicates the ICB pointer of the instruction an engine is working on. */
        uint64_t que                   : 6;  /**< [ 24: 19](RO/H) Indicates the queue of the instruction an engine is working on. */
        uint64_t qord                  : 1;  /**< [ 18: 18](RO/H) If this bit is set, the instruction an engine is working on must handle
                                                                 its completion operations (NIX TX descriptor, SSO WQE, and/or result
                                                                 store) in queue order. If this bit is clear, the completion operations
                                                                 are unordered. */
        uint64_t sso_val               : 1;  /**< [ 17: 17](RO/H) If this bit is set, CPT may submit an SSO WQE for the engine's instruction. */
        uint64_t nix_val               : 1;  /**< [ 16: 16](RO/H) If this bit is set, CPT may submit a portion of the NIX TX descriptor
                                                                 for the engine's instruction via LMTST. */
        uint64_t pf_func               : 16; /**< [ 15:  0](RO/H) PF/FUNC associated with the instruction an engine is working on.

                                                                 RVU_PF_FUNC_S describes the format of [PF_FUNC]. */
#else /* Word 0 - Little Endian */
        uint64_t pf_func               : 16; /**< [ 15:  0](RO/H) PF/FUNC associated with the instruction an engine is working on.

                                                                 RVU_PF_FUNC_S describes the format of [PF_FUNC]. */
        uint64_t nix_val               : 1;  /**< [ 16: 16](RO/H) If this bit is set, CPT may submit a portion of the NIX TX descriptor
                                                                 for the engine's instruction via LMTST. */
        uint64_t sso_val               : 1;  /**< [ 17: 17](RO/H) If this bit is set, CPT may submit an SSO WQE for the engine's instruction. */
        uint64_t qord                  : 1;  /**< [ 18: 18](RO/H) If this bit is set, the instruction an engine is working on must handle
                                                                 its completion operations (NIX TX descriptor, SSO WQE, and/or result
                                                                 store) in queue order. If this bit is clear, the completion operations
                                                                 are unordered. */
        uint64_t que                   : 6;  /**< [ 24: 19](RO/H) Indicates the queue of the instruction an engine is working on. */
        uint64_t icb_ptr               : 9;  /**< [ 33: 25](RO/H) Indicates the ICB pointer of the instruction an engine is working on. */
        uint64_t reserved_34_63        : 30;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_af_exex_active_s cn; */
};
typedef union bdk_cptx_af_exex_active bdk_cptx_af_exex_active_t;

static inline uint64_t BDK_CPTX_AF_EXEX_ACTIVE(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_AF_EXEX_ACTIVE(unsigned long a, unsigned long b)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && ((a==0) && (b<=127)))
        return 0x8400a0016000ll + 0x10000000ll * ((a) & 0x0) + 8ll * ((b) & 0x7f);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && ((a<=1) && (b<=127)))
        return 0x8400a0016000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x7f);
    if (bdk_is_model(OCTEONTX_CN98XX) && ((a<=1) && (b<=127)))
        return 0x8400a0016000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x7f);
    __bdk_csr_fatal("CPTX_AF_EXEX_ACTIVE", 2, a, b, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_AF_EXEX_ACTIVE(a,b) bdk_cptx_af_exex_active_t
#define bustype_BDK_CPTX_AF_EXEX_ACTIVE(a,b) BDK_CSR_TYPE_RVU_PF_BAR0
#define basename_BDK_CPTX_AF_EXEX_ACTIVE(a,b) "CPTX_AF_EXEX_ACTIVE"
#define device_bar_BDK_CPTX_AF_EXEX_ACTIVE(a,b) 0x0 /* RVU_BAR0 */
#define busnum_BDK_CPTX_AF_EXEX_ACTIVE(a,b) (a)
#define arguments_BDK_CPTX_AF_EXEX_ACTIVE(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_exe#_ctl
 *
 * CPT AF Engine Control Registers
 * "This register contains control and status bits for the corresponding engines.
 *
 * Only the following register indices are supported:
 * _    0    .. #SE-1         = the SEs.
 * _   #SE   .. #SE+#IE-1     = the IEs.
 * _ #SE+#IE .. #SE+#IE+#AE-1 = the AEs.
 * _ where #SE,#IE,#AE = CPT_AF_CONSTANTS1[SE,IE,AE]. Software must not access
 * unsupported registers."
 */
union bdk_cptx_af_exex_ctl
{
    uint64_t u;
    struct bdk_cptx_af_exex_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t forceclk              : 1;  /**< [  1:  1](R/W) Clock override. When set, force clocks to always run. When clear, allow
                                                                 automatic powerdown for idle engines. For diagnostic use only. */
        uint64_t enable                : 1;  /**< [  0:  0](R/W/H) When set, the engine is enabled and either running or waiting for new work.

                                                                 To enable the engine, set [ENABLE] after setting CPT_AF_EXE()_UCODE_BASE[ADDR]
                                                                 to point to appropriate microcode. Configure CPT_AF_EXE()_CTL2[GRP_EN].

                                                                 To disable the engine:
                                                                 * Clear corresponding CPT_AF_EXE()_CTL2[GRP_EN].
                                                                 * Wait for corresponding CPT_AF_EXE()_STS[BUSY] to clear.
                                                                 * Clear [ENABLE]. */
#else /* Word 0 - Little Endian */
        uint64_t enable                : 1;  /**< [  0:  0](R/W/H) When set, the engine is enabled and either running or waiting for new work.

                                                                 To enable the engine, set [ENABLE] after setting CPT_AF_EXE()_UCODE_BASE[ADDR]
                                                                 to point to appropriate microcode. Configure CPT_AF_EXE()_CTL2[GRP_EN].

                                                                 To disable the engine:
                                                                 * Clear corresponding CPT_AF_EXE()_CTL2[GRP_EN].
                                                                 * Wait for corresponding CPT_AF_EXE()_STS[BUSY] to clear.
                                                                 * Clear [ENABLE]. */
        uint64_t forceclk              : 1;  /**< [  1:  1](R/W) Clock override. When set, force clocks to always run. When clear, allow
                                                                 automatic powerdown for idle engines. For diagnostic use only. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    struct bdk_cptx_af_exex_ctl_cn
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t reserved_2_31         : 30;
        uint64_t forceclk              : 1;  /**< [  1:  1](R/W) Clock override. When set, force clocks to always run. When clear, allow
                                                                 automatic powerdown for idle engines. For diagnostic use only. */
        uint64_t enable                : 1;  /**< [  0:  0](R/W/H) When set, the engine is enabled and either running or waiting for new work.

                                                                 To enable the engine, set [ENABLE] after setting CPT_AF_EXE()_UCODE_BASE[ADDR]
                                                                 to point to appropriate microcode. Configure CPT_AF_EXE()_CTL2[GRP_EN].

                                                                 To disable the engine:
                                                                 * Clear corresponding CPT_AF_EXE()_CTL2[GRP_EN].
                                                                 * Wait for corresponding CPT_AF_EXE()_STS[BUSY] to clear.
                                                                 * Clear [ENABLE]. */
#else /* Word 0 - Little Endian */
        uint64_t enable                : 1;  /**< [  0:  0](R/W/H) When set, the engine is enabled and either running or waiting for new work.

                                                                 To enable the engine, set [ENABLE] after setting CPT_AF_EXE()_UCODE_BASE[ADDR]
                                                                 to point to appropriate microcode. Configure CPT_AF_EXE()_CTL2[GRP_EN].

                                                                 To disable the engine:
                                                                 * Clear corresponding CPT_AF_EXE()_CTL2[GRP_EN].
                                                                 * Wait for corresponding CPT_AF_EXE()_STS[BUSY] to clear.
                                                                 * Clear [ENABLE]. */
        uint64_t forceclk              : 1;  /**< [  1:  1](R/W) Clock override. When set, force clocks to always run. When clear, allow
                                                                 automatic powerdown for idle engines. For diagnostic use only. */
        uint64_t reserved_2_31         : 30;
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } cn;
};
typedef union bdk_cptx_af_exex_ctl bdk_cptx_af_exex_ctl_t;

static inline uint64_t BDK_CPTX_AF_EXEX_CTL(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_AF_EXEX_CTL(unsigned long a, unsigned long b)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && ((a==0) && (b<=127)))
        return 0x8400a0020000ll + 0x10000000ll * ((a) & 0x0) + 8ll * ((b) & 0x7f);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && ((a<=1) && (b<=127)))
        return 0x8400a0020000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x7f);
    if (bdk_is_model(OCTEONTX_CN98XX) && ((a<=1) && (b<=127)))
        return 0x8400a0020000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x7f);
    __bdk_csr_fatal("CPTX_AF_EXEX_CTL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_AF_EXEX_CTL(a,b) bdk_cptx_af_exex_ctl_t
#define bustype_BDK_CPTX_AF_EXEX_CTL(a,b) BDK_CSR_TYPE_RVU_PF_BAR0
#define basename_BDK_CPTX_AF_EXEX_CTL(a,b) "CPTX_AF_EXEX_CTL"
#define device_bar_BDK_CPTX_AF_EXEX_CTL(a,b) 0x0 /* RVU_BAR0 */
#define busnum_BDK_CPTX_AF_EXEX_CTL(a,b) (a)
#define arguments_BDK_CPTX_AF_EXEX_CTL(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_exe#_ctl2
 *
 * CPT AF Exec Control Register
 * "Only the following register indices are supported:
 * _    0    .. #SE-1         = the SEs.
 * _   #SE   .. #SE+#IE-1     = the IEs.
 * _ #SE+#IE .. #SE+#IE+#AE-1 = the AEs.
 * _ where #SE,#IE,#AE = CPT_AF_CONSTANTS1[SE,IE,AE]. Software must not access
 * unsupported registers."
 */
union bdk_cptx_af_exex_ctl2
{
    uint64_t u;
    struct bdk_cptx_af_exex_ctl2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t grp_en                : 8;  /**< [  7:  0](R/W) Engine group enable. One bit corresponds to each group, with the bit set to
                                                                 indicate this engine can service this group.

                                                                 See also CPT_INST_S[EGRP], CPT_AF_LF()_CTL[GRP], and CPT_AF_EXE()_CTL[ENABLE].

                                                                 Before disabling an engine, the corresponding bit in each group must be cleared.
                                                                 CPT_AF_EXE()_STS[BUSY] can then be polled to determine when the engine becomes
                                                                 idle.  At the point, the engine can be disabled. */
#else /* Word 0 - Little Endian */
        uint64_t grp_en                : 8;  /**< [  7:  0](R/W) Engine group enable. One bit corresponds to each group, with the bit set to
                                                                 indicate this engine can service this group.

                                                                 See also CPT_INST_S[EGRP], CPT_AF_LF()_CTL[GRP], and CPT_AF_EXE()_CTL[ENABLE].

                                                                 Before disabling an engine, the corresponding bit in each group must be cleared.
                                                                 CPT_AF_EXE()_STS[BUSY] can then be polled to determine when the engine becomes
                                                                 idle.  At the point, the engine can be disabled. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_af_exex_ctl2_s cn; */
};
typedef union bdk_cptx_af_exex_ctl2 bdk_cptx_af_exex_ctl2_t;

static inline uint64_t BDK_CPTX_AF_EXEX_CTL2(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_AF_EXEX_CTL2(unsigned long a, unsigned long b)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && ((a==0) && (b<=127)))
        return 0x8400a0012000ll + 0x10000000ll * ((a) & 0x0) + 8ll * ((b) & 0x7f);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && ((a<=1) && (b<=127)))
        return 0x8400a0012000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x7f);
    if (bdk_is_model(OCTEONTX_CN98XX) && ((a<=1) && (b<=127)))
        return 0x8400a0012000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x7f);
    __bdk_csr_fatal("CPTX_AF_EXEX_CTL2", 2, a, b, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_AF_EXEX_CTL2(a,b) bdk_cptx_af_exex_ctl2_t
#define bustype_BDK_CPTX_AF_EXEX_CTL2(a,b) BDK_CSR_TYPE_RVU_PF_BAR0
#define basename_BDK_CPTX_AF_EXEX_CTL2(a,b) "CPTX_AF_EXEX_CTL2"
#define device_bar_BDK_CPTX_AF_EXEX_CTL2(a,b) 0x0 /* RVU_BAR0 */
#define busnum_BDK_CPTX_AF_EXEX_CTL2(a,b) (a)
#define arguments_BDK_CPTX_AF_EXEX_CTL2(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_exe#_sts
 *
 * CPT AF Exec Available Register
 * "Only the following register indices are supported:
 * _    0    .. #SE-1         = the SEs.
 * _   #SE   .. #SE+#IE-1     = the IEs.
 * _ #SE+#IE .. #SE+#IE+#AE-1 = the AEs.
 * _ where #SE,#IE,#AE = CPT_AF_CONSTANTS1[SE,IE,AE]. Software must not access
 * unsupported registers."
 */
union bdk_cptx_af_exex_sts
{
    uint64_t u;
    struct bdk_cptx_af_exex_sts_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t free                  : 1;  /**< [  1:  1](RO/H) Engine available. Indicates the engine is available to be picked to execute a
                                                                 new instruction. For diagnostic use only.

                                                                 Internal:
                                                                 The (FREE,BUSY) combo's:
                                                                   [FREE]=0 [BUSY]=0: IDLE; Hasn't been assigned an instruction yet or has been halted.
                                                                   [FREE]=0 [BUSY]=1: FREE; Between instructions.
                                                                   [FREE]=1 [BUSY]=0: INST; Executing an instruction.
                                                                   [FREE]=1 [BUSY]=1: HOLD; Waiting for one of the two commit counters for this engine to free up. */
        uint64_t busy                  : 1;  /**< [  0:  0](RO/H) Current state of the engine. Before disabling an engine via
                                                                 CPT_AF_EXE()_CTL[ENABLE], this bit must be clear. */
#else /* Word 0 - Little Endian */
        uint64_t busy                  : 1;  /**< [  0:  0](RO/H) Current state of the engine. Before disabling an engine via
                                                                 CPT_AF_EXE()_CTL[ENABLE], this bit must be clear. */
        uint64_t free                  : 1;  /**< [  1:  1](RO/H) Engine available. Indicates the engine is available to be picked to execute a
                                                                 new instruction. For diagnostic use only.

                                                                 Internal:
                                                                 The (FREE,BUSY) combo's:
                                                                   [FREE]=0 [BUSY]=0: IDLE; Hasn't been assigned an instruction yet or has been halted.
                                                                   [FREE]=0 [BUSY]=1: FREE; Between instructions.
                                                                   [FREE]=1 [BUSY]=0: INST; Executing an instruction.
                                                                   [FREE]=1 [BUSY]=1: HOLD; Waiting for one of the two commit counters for this engine to free up. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_af_exex_sts_s cn; */
};
typedef union bdk_cptx_af_exex_sts bdk_cptx_af_exex_sts_t;

static inline uint64_t BDK_CPTX_AF_EXEX_STS(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_AF_EXEX_STS(unsigned long a, unsigned long b)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && ((a==0) && (b<=127)))
        return 0x8400a0013000ll + 0x10000000ll * ((a) & 0x0) + 8ll * ((b) & 0x7f);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && ((a<=1) && (b<=127)))
        return 0x8400a0013000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x7f);
    if (bdk_is_model(OCTEONTX_CN98XX) && ((a<=1) && (b<=127)))
        return 0x8400a0013000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x7f);
    __bdk_csr_fatal("CPTX_AF_EXEX_STS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_AF_EXEX_STS(a,b) bdk_cptx_af_exex_sts_t
#define bustype_BDK_CPTX_AF_EXEX_STS(a,b) BDK_CSR_TYPE_RVU_PF_BAR0
#define basename_BDK_CPTX_AF_EXEX_STS(a,b) "CPTX_AF_EXEX_STS"
#define device_bar_BDK_CPTX_AF_EXEX_STS(a,b) 0x0 /* RVU_BAR0 */
#define busnum_BDK_CPTX_AF_EXEX_STS(a,b) (a)
#define arguments_BDK_CPTX_AF_EXEX_STS(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_exe#_ucode_base
 *
 * CPT AF Execution Unit Microcode Base Address Register
 * "This register configures engine microcode fetches.
 *
 * Only the following register indices are supported:
 * _    0    .. #SE-1         = the SEs.
 * _   #SE   .. #SE+#IE-1     = the IEs.
 * _ #SE+#IE .. #SE+#IE+#AE-1 = the AEs.
 * _ where #SE,#IE,#AE = CPT_AF_CONSTANTS1[SE,IE,AE]. Software must not access
 * unsupported registers."
 */
union bdk_cptx_af_exex_ucode_base
{
    uint64_t u;
    struct bdk_cptx_af_exex_ucode_base_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t addr                  : 46; /**< [ 52:  7](R/W) Base IOVA for this engine's microcode image. */
        uint64_t reserved_0_6          : 7;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_6          : 7;
        uint64_t addr                  : 46; /**< [ 52:  7](R/W) Base IOVA for this engine's microcode image. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_af_exex_ucode_base_s cn; */
};
typedef union bdk_cptx_af_exex_ucode_base bdk_cptx_af_exex_ucode_base_t;

static inline uint64_t BDK_CPTX_AF_EXEX_UCODE_BASE(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_AF_EXEX_UCODE_BASE(unsigned long a, unsigned long b)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && ((a==0) && (b<=127)))
        return 0x8400a0026000ll + 0x10000000ll * ((a) & 0x0) + 8ll * ((b) & 0x7f);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && ((a<=1) && (b<=127)))
        return 0x8400a0026000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x7f);
    if (bdk_is_model(OCTEONTX_CN98XX) && ((a<=1) && (b<=127)))
        return 0x8400a0026000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x7f);
    __bdk_csr_fatal("CPTX_AF_EXEX_UCODE_BASE", 2, a, b, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_AF_EXEX_UCODE_BASE(a,b) bdk_cptx_af_exex_ucode_base_t
#define bustype_BDK_CPTX_AF_EXEX_UCODE_BASE(a,b) BDK_CSR_TYPE_RVU_PF_BAR0
#define basename_BDK_CPTX_AF_EXEX_UCODE_BASE(a,b) "CPTX_AF_EXEX_UCODE_BASE"
#define device_bar_BDK_CPTX_AF_EXEX_UCODE_BASE(a,b) 0x0 /* RVU_BAR0 */
#define busnum_BDK_CPTX_AF_EXEX_UCODE_BASE(a,b) (a)
#define arguments_BDK_CPTX_AF_EXEX_UCODE_BASE(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_exe_dbg_cnt#
 *
 * CPT AF Debug Bus Counter Register
 */
union bdk_cptx_af_exe_dbg_cntx
{
    uint64_t u;
    struct bdk_cptx_af_exe_dbg_cntx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t counter               : 48; /**< [ 47:  0](R/W1C/H) Counts events on the debug bus. */
#else /* Word 0 - Little Endian */
        uint64_t counter               : 48; /**< [ 47:  0](R/W1C/H) Counts events on the debug bus. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_af_exe_dbg_cntx_s cn; */
};
typedef union bdk_cptx_af_exe_dbg_cntx bdk_cptx_af_exe_dbg_cntx_t;

static inline uint64_t BDK_CPTX_AF_EXE_DBG_CNTX(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_AF_EXE_DBG_CNTX(unsigned long a, unsigned long b)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && ((a==0) && (b<=15)))
        return 0x8400a0022000ll + 0x10000000ll * ((a) & 0x0) + 8ll * ((b) & 0xf);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && ((a<=1) && (b<=15)))
        return 0x8400a0022000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0xf);
    if (bdk_is_model(OCTEONTX_CN98XX) && ((a<=1) && (b<=15)))
        return 0x8400a0022000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0xf);
    __bdk_csr_fatal("CPTX_AF_EXE_DBG_CNTX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_AF_EXE_DBG_CNTX(a,b) bdk_cptx_af_exe_dbg_cntx_t
#define bustype_BDK_CPTX_AF_EXE_DBG_CNTX(a,b) BDK_CSR_TYPE_RVU_PF_BAR0
#define basename_BDK_CPTX_AF_EXE_DBG_CNTX(a,b) "CPTX_AF_EXE_DBG_CNTX"
#define device_bar_BDK_CPTX_AF_EXE_DBG_CNTX(a,b) 0x0 /* RVU_BAR0 */
#define busnum_BDK_CPTX_AF_EXE_DBG_CNTX(a,b) (a)
#define arguments_BDK_CPTX_AF_EXE_DBG_CNTX(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_exe_dbg_ctl
 *
 * CPT AF Engine Debug Control Register
 * This register controls engine diagnostic features.
 */
union bdk_cptx_af_exe_dbg_ctl
{
    uint64_t u;
    struct bdk_cptx_af_exe_dbg_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t eng_sel               : 8;  /**< [ 23: 16](R/W) "Engine select.

                                                                 Only the following [ENG_SEL] values are supported:
                                                                 _    0    .. #SE-1         = the SEs.
                                                                 _   #SE   .. #SE+#IE-1     = the IEs.
                                                                 _ #SE+#IE .. #SE+#IE+#AE-1 = the AEs.
                                                                 _ where #SE,#IE,#AE = CPT_AF_CONSTANTS1[SE,IE,AE]. Software must not use
                                                                 unsupported values." */
        uint64_t reserved_9_15         : 7;
        uint64_t reg_sel               : 9;  /**< [  8:  0](R/W) Debug register select. Setting to all ones returns 0x0 on the debug bus. */
#else /* Word 0 - Little Endian */
        uint64_t reg_sel               : 9;  /**< [  8:  0](R/W) Debug register select. Setting to all ones returns 0x0 on the debug bus. */
        uint64_t reserved_9_15         : 7;
        uint64_t eng_sel               : 8;  /**< [ 23: 16](R/W) "Engine select.

                                                                 Only the following [ENG_SEL] values are supported:
                                                                 _    0    .. #SE-1         = the SEs.
                                                                 _   #SE   .. #SE+#IE-1     = the IEs.
                                                                 _ #SE+#IE .. #SE+#IE+#AE-1 = the AEs.
                                                                 _ where #SE,#IE,#AE = CPT_AF_CONSTANTS1[SE,IE,AE]. Software must not use
                                                                 unsupported values." */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_af_exe_dbg_ctl_s cn; */
};
typedef union bdk_cptx_af_exe_dbg_ctl bdk_cptx_af_exe_dbg_ctl_t;

static inline uint64_t BDK_CPTX_AF_EXE_DBG_CTL(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_AF_EXE_DBG_CTL(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && (a==0))
        return 0x8400a001d000ll + 0x10000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && (a<=1))
        return 0x8400a001d000ll + 0x10000000ll * ((a) & 0x1);
    if (bdk_is_model(OCTEONTX_CN98XX) && (a<=1))
        return 0x8400a001d000ll + 0x10000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_AF_EXE_DBG_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_AF_EXE_DBG_CTL(a) bdk_cptx_af_exe_dbg_ctl_t
#define bustype_BDK_CPTX_AF_EXE_DBG_CTL(a) BDK_CSR_TYPE_RVU_PF_BAR0
#define basename_BDK_CPTX_AF_EXE_DBG_CTL(a) "CPTX_AF_EXE_DBG_CTL"
#define device_bar_BDK_CPTX_AF_EXE_DBG_CTL(a) 0x0 /* RVU_BAR0 */
#define busnum_BDK_CPTX_AF_EXE_DBG_CTL(a) (a)
#define arguments_BDK_CPTX_AF_EXE_DBG_CTL(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_exe_dbg_data
 *
 * CPT AF Engine Debug Data Register
 * This register returns engine debug data as selected by CPT_AF_EXE_DBG_CTL.
 */
union bdk_cptx_af_exe_dbg_data
{
    uint64_t u;
    struct bdk_cptx_af_exe_dbg_data_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t data                  : 16; /**< [ 15:  0](RO/H) Debug data. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 16; /**< [ 15:  0](RO/H) Debug data. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_af_exe_dbg_data_s cn; */
};
typedef union bdk_cptx_af_exe_dbg_data bdk_cptx_af_exe_dbg_data_t;

static inline uint64_t BDK_CPTX_AF_EXE_DBG_DATA(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_AF_EXE_DBG_DATA(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && (a==0))
        return 0x8400a001e000ll + 0x10000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && (a<=1))
        return 0x8400a001e000ll + 0x10000000ll * ((a) & 0x1);
    if (bdk_is_model(OCTEONTX_CN98XX) && (a<=1))
        return 0x8400a001e000ll + 0x10000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_AF_EXE_DBG_DATA", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_AF_EXE_DBG_DATA(a) bdk_cptx_af_exe_dbg_data_t
#define bustype_BDK_CPTX_AF_EXE_DBG_DATA(a) BDK_CSR_TYPE_RVU_PF_BAR0
#define basename_BDK_CPTX_AF_EXE_DBG_DATA(a) "CPTX_AF_EXE_DBG_DATA"
#define device_bar_BDK_CPTX_AF_EXE_DBG_DATA(a) 0x0 /* RVU_BAR0 */
#define busnum_BDK_CPTX_AF_EXE_DBG_DATA(a) (a)
#define arguments_BDK_CPTX_AF_EXE_DBG_DATA(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_exe_epci_inb#_cnt
 *
 * CPT AF EPCI Inbound Counter Register
 */
union bdk_cptx_af_exe_epci_inbx_cnt
{
    uint64_t u;
    struct bdk_cptx_af_exe_epci_inbx_cnt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t counter               : 48; /**< [ 47:  0](R/W1C/H) Counts the number of valid inbound cycles in EPCI bus. */
#else /* Word 0 - Little Endian */
        uint64_t counter               : 48; /**< [ 47:  0](R/W1C/H) Counts the number of valid inbound cycles in EPCI bus. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_af_exe_epci_inbx_cnt_s cn; */
};
typedef union bdk_cptx_af_exe_epci_inbx_cnt bdk_cptx_af_exe_epci_inbx_cnt_t;

static inline uint64_t BDK_CPTX_AF_EXE_EPCI_INBX_CNT(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_AF_EXE_EPCI_INBX_CNT(unsigned long a, unsigned long b)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && ((a==0) && (b<=3)))
        return 0x8400a0024000ll + 0x10000000ll * ((a) & 0x0) + 8ll * ((b) & 0x3);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && ((a<=1) && (b<=3)))
        return 0x8400a0024000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x3);
    if (bdk_is_model(OCTEONTX_CN98XX) && ((a<=1) && (b<=3)))
        return 0x8400a0024000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x3);
    __bdk_csr_fatal("CPTX_AF_EXE_EPCI_INBX_CNT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_AF_EXE_EPCI_INBX_CNT(a,b) bdk_cptx_af_exe_epci_inbx_cnt_t
#define bustype_BDK_CPTX_AF_EXE_EPCI_INBX_CNT(a,b) BDK_CSR_TYPE_RVU_PF_BAR0
#define basename_BDK_CPTX_AF_EXE_EPCI_INBX_CNT(a,b) "CPTX_AF_EXE_EPCI_INBX_CNT"
#define device_bar_BDK_CPTX_AF_EXE_EPCI_INBX_CNT(a,b) 0x0 /* RVU_BAR0 */
#define busnum_BDK_CPTX_AF_EXE_EPCI_INBX_CNT(a,b) (a)
#define arguments_BDK_CPTX_AF_EXE_EPCI_INBX_CNT(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_exe_epci_outb#_cnt
 *
 * CPT AF EPCI Outbound Counter Register
 */
union bdk_cptx_af_exe_epci_outbx_cnt
{
    uint64_t u;
    struct bdk_cptx_af_exe_epci_outbx_cnt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t counter               : 48; /**< [ 47:  0](R/W1C/H) Counts the number of valid outbound cycles in EPCI bus. */
#else /* Word 0 - Little Endian */
        uint64_t counter               : 48; /**< [ 47:  0](R/W1C/H) Counts the number of valid outbound cycles in EPCI bus. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_af_exe_epci_outbx_cnt_s cn; */
};
typedef union bdk_cptx_af_exe_epci_outbx_cnt bdk_cptx_af_exe_epci_outbx_cnt_t;

static inline uint64_t BDK_CPTX_AF_EXE_EPCI_OUTBX_CNT(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_AF_EXE_EPCI_OUTBX_CNT(unsigned long a, unsigned long b)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && ((a==0) && (b<=3)))
        return 0x8400a0025000ll + 0x10000000ll * ((a) & 0x0) + 8ll * ((b) & 0x3);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && ((a<=1) && (b<=3)))
        return 0x8400a0025000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x3);
    if (bdk_is_model(OCTEONTX_CN98XX) && ((a<=1) && (b<=3)))
        return 0x8400a0025000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x3);
    __bdk_csr_fatal("CPTX_AF_EXE_EPCI_OUTBX_CNT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_AF_EXE_EPCI_OUTBX_CNT(a,b) bdk_cptx_af_exe_epci_outbx_cnt_t
#define bustype_BDK_CPTX_AF_EXE_EPCI_OUTBX_CNT(a,b) BDK_CSR_TYPE_RVU_PF_BAR0
#define basename_BDK_CPTX_AF_EXE_EPCI_OUTBX_CNT(a,b) "CPTX_AF_EXE_EPCI_OUTBX_CNT"
#define device_bar_BDK_CPTX_AF_EXE_EPCI_OUTBX_CNT(a,b) 0x0 /* RVU_BAR0 */
#define busnum_BDK_CPTX_AF_EXE_EPCI_OUTBX_CNT(a,b) (a)
#define arguments_BDK_CPTX_AF_EXE_EPCI_OUTBX_CNT(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_exe_err_info
 *
 * CPT Engine Info Register
 * This contains the error code and PC for the most recent engine's CPT_EOP_E::ERR_REQUEST.
 */
union bdk_cptx_af_exe_err_info
{
    uint64_t u;
    struct bdk_cptx_af_exe_err_info_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t errcode               : 8;  /**< [ 31: 24](R/W/H) Error type.  Defined by the CPT_ENGINE_ERR_TYPE_E enum. */
        uint64_t reserved_23           : 1;
        uint64_t errpc                 : 15; /**< [ 22:  8](R/W/H) MicroPC of the instruction that caused the error. */
        uint64_t eid                   : 8;  /**< [  7:  0](R/W/H) Engine number of the most recent engine to issue an CPT_EOP_E::ERR_REQUEST. */
#else /* Word 0 - Little Endian */
        uint64_t eid                   : 8;  /**< [  7:  0](R/W/H) Engine number of the most recent engine to issue an CPT_EOP_E::ERR_REQUEST. */
        uint64_t errpc                 : 15; /**< [ 22:  8](R/W/H) MicroPC of the instruction that caused the error. */
        uint64_t reserved_23           : 1;
        uint64_t errcode               : 8;  /**< [ 31: 24](R/W/H) Error type.  Defined by the CPT_ENGINE_ERR_TYPE_E enum. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_af_exe_err_info_s cn; */
};
typedef union bdk_cptx_af_exe_err_info bdk_cptx_af_exe_err_info_t;

static inline uint64_t BDK_CPTX_AF_EXE_ERR_INFO(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_AF_EXE_ERR_INFO(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && (a==0))
        return 0x8400a0014000ll + 0x10000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && (a<=1))
        return 0x8400a0014000ll + 0x10000000ll * ((a) & 0x1);
    if (bdk_is_model(OCTEONTX_CN98XX) && (a<=1))
        return 0x8400a0014000ll + 0x10000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_AF_EXE_ERR_INFO", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_AF_EXE_ERR_INFO(a) bdk_cptx_af_exe_err_info_t
#define bustype_BDK_CPTX_AF_EXE_ERR_INFO(a) BDK_CSR_TYPE_RVU_PF_BAR0
#define basename_BDK_CPTX_AF_EXE_ERR_INFO(a) "CPTX_AF_EXE_ERR_INFO"
#define device_bar_BDK_CPTX_AF_EXE_ERR_INFO(a) 0x0 /* RVU_BAR0 */
#define busnum_BDK_CPTX_AF_EXE_ERR_INFO(a) (a)
#define arguments_BDK_CPTX_AF_EXE_ERR_INFO(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_exe_perf_ctl
 *
 * CPT AF Engine Performance Control Register
 * This register controls engine performance counters.
 */
union bdk_cptx_af_exe_perf_ctl
{
    uint64_t u;
    struct bdk_cptx_af_exe_perf_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_52_63        : 12;
        uint64_t epci_inb_cnt_en       : 4;  /**< [ 51: 48](R/W) Enable EPCI inbound counters. */
        uint64_t reserved_36_47        : 12;
        uint64_t epci_outb_cnt_en      : 4;  /**< [ 35: 32](R/W) Enable EPCI outbound counters. */
        uint64_t reserved_17_31        : 15;
        uint64_t event_cnt_en          : 1;  /**< [ 16: 16](R/W) Enable single event counter. */
        uint64_t dbg_cnt_en            : 16; /**< [ 15:  0](R/W) Enable counters on debug bus. */
#else /* Word 0 - Little Endian */
        uint64_t dbg_cnt_en            : 16; /**< [ 15:  0](R/W) Enable counters on debug bus. */
        uint64_t event_cnt_en          : 1;  /**< [ 16: 16](R/W) Enable single event counter. */
        uint64_t reserved_17_31        : 15;
        uint64_t epci_outb_cnt_en      : 4;  /**< [ 35: 32](R/W) Enable EPCI outbound counters. */
        uint64_t reserved_36_47        : 12;
        uint64_t epci_inb_cnt_en       : 4;  /**< [ 51: 48](R/W) Enable EPCI inbound counters. */
        uint64_t reserved_52_63        : 12;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_af_exe_perf_ctl_s cn; */
};
typedef union bdk_cptx_af_exe_perf_ctl bdk_cptx_af_exe_perf_ctl_t;

static inline uint64_t BDK_CPTX_AF_EXE_PERF_CTL(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_AF_EXE_PERF_CTL(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && (a==0))
        return 0x8400a0021000ll + 0x10000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && (a<=1))
        return 0x8400a0021000ll + 0x10000000ll * ((a) & 0x1);
    if (bdk_is_model(OCTEONTX_CN98XX) && (a<=1))
        return 0x8400a0021000ll + 0x10000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_AF_EXE_PERF_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_AF_EXE_PERF_CTL(a) bdk_cptx_af_exe_perf_ctl_t
#define bustype_BDK_CPTX_AF_EXE_PERF_CTL(a) BDK_CSR_TYPE_RVU_PF_BAR0
#define basename_BDK_CPTX_AF_EXE_PERF_CTL(a) "CPTX_AF_EXE_PERF_CTL"
#define device_bar_BDK_CPTX_AF_EXE_PERF_CTL(a) 0x0 /* RVU_BAR0 */
#define busnum_BDK_CPTX_AF_EXE_PERF_CTL(a) (a)
#define arguments_BDK_CPTX_AF_EXE_PERF_CTL(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_exe_perf_event_cnt
 *
 * CPT AF Engine Performance Event Counter Register
 */
union bdk_cptx_af_exe_perf_event_cnt
{
    uint64_t u;
    struct bdk_cptx_af_exe_perf_event_cnt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t counter               : 48; /**< [ 47:  0](R/W1C/H) Counts the performance events in an engine. The event is selected by setting
                                                                 the lower three bits of CPT_AF_EXE_DBG_CTL[REG_SEL].
                                                                 0x0 = Undefined.
                                                                 0x1 = The number of cycles the exec is waiting for the exec is waiting for
                                                                 inbound bus data.
                                                                 0x2 = The number of cycles the execution queue is busy.
                                                                 0x3 = The number of cycles the execution queue cannot issue instructions because
                                                                 of a datapath stall. */
#else /* Word 0 - Little Endian */
        uint64_t counter               : 48; /**< [ 47:  0](R/W1C/H) Counts the performance events in an engine. The event is selected by setting
                                                                 the lower three bits of CPT_AF_EXE_DBG_CTL[REG_SEL].
                                                                 0x0 = Undefined.
                                                                 0x1 = The number of cycles the exec is waiting for the exec is waiting for
                                                                 inbound bus data.
                                                                 0x2 = The number of cycles the execution queue is busy.
                                                                 0x3 = The number of cycles the execution queue cannot issue instructions because
                                                                 of a datapath stall. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_af_exe_perf_event_cnt_s cn; */
};
typedef union bdk_cptx_af_exe_perf_event_cnt bdk_cptx_af_exe_perf_event_cnt_t;

static inline uint64_t BDK_CPTX_AF_EXE_PERF_EVENT_CNT(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_AF_EXE_PERF_EVENT_CNT(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && (a==0))
        return 0x8400a0023000ll + 0x10000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && (a<=1))
        return 0x8400a0023000ll + 0x10000000ll * ((a) & 0x1);
    if (bdk_is_model(OCTEONTX_CN98XX) && (a<=1))
        return 0x8400a0023000ll + 0x10000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_AF_EXE_PERF_EVENT_CNT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_AF_EXE_PERF_EVENT_CNT(a) bdk_cptx_af_exe_perf_event_cnt_t
#define bustype_BDK_CPTX_AF_EXE_PERF_EVENT_CNT(a) BDK_CSR_TYPE_RVU_PF_BAR0
#define basename_BDK_CPTX_AF_EXE_PERF_EVENT_CNT(a) "CPTX_AF_EXE_PERF_EVENT_CNT"
#define device_bar_BDK_CPTX_AF_EXE_PERF_EVENT_CNT(a) 0x0 /* RVU_BAR0 */
#define busnum_BDK_CPTX_AF_EXE_PERF_EVENT_CNT(a) (a)
#define arguments_BDK_CPTX_AF_EXE_PERF_EVENT_CNT(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_exe_req_timer
 *
 * CPT AF Engine Arbiter Control Register
 */
union bdk_cptx_af_exe_req_timer
{
    uint64_t u;
    struct bdk_cptx_af_exe_req_timer_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t cnt                   : 8;  /**< [  7:  0](R/W) Interval to promote starving low priority requests to high priority. After
                                                                 between one and two times this interval a pending low priority request will be
                                                                 elevated to high priority status.
                                                                 0x0 = Disabled.
                                                                 0x1 = 1 microsecond.
                                                                 0x2 = 2 microseconds.
                                                                 _ etc. */
#else /* Word 0 - Little Endian */
        uint64_t cnt                   : 8;  /**< [  7:  0](R/W) Interval to promote starving low priority requests to high priority. After
                                                                 between one and two times this interval a pending low priority request will be
                                                                 elevated to high priority status.
                                                                 0x0 = Disabled.
                                                                 0x1 = 1 microsecond.
                                                                 0x2 = 2 microseconds.
                                                                 _ etc. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_af_exe_req_timer_s cn; */
};
typedef union bdk_cptx_af_exe_req_timer bdk_cptx_af_exe_req_timer_t;

static inline uint64_t BDK_CPTX_AF_EXE_REQ_TIMER(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_AF_EXE_REQ_TIMER(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && (a==0))
        return 0x8400a001f000ll + 0x10000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && (a<=1))
        return 0x8400a001f000ll + 0x10000000ll * ((a) & 0x1);
    if (bdk_is_model(OCTEONTX_CN98XX) && (a<=1))
        return 0x8400a001f000ll + 0x10000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_AF_EXE_REQ_TIMER", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_AF_EXE_REQ_TIMER(a) bdk_cptx_af_exe_req_timer_t
#define bustype_BDK_CPTX_AF_EXE_REQ_TIMER(a) BDK_CSR_TYPE_RVU_PF_BAR0
#define basename_BDK_CPTX_AF_EXE_REQ_TIMER(a) "CPTX_AF_EXE_REQ_TIMER"
#define device_bar_BDK_CPTX_AF_EXE_REQ_TIMER(a) 0x0 /* RVU_BAR0 */
#define busnum_BDK_CPTX_AF_EXE_REQ_TIMER(a) (a)
#define arguments_BDK_CPTX_AF_EXE_REQ_TIMER(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_flt#_int
 *
 * CPT Execution Unit Interrupt Registers
 */
union bdk_cptx_af_fltx_int
{
    uint64_t u;
    struct bdk_cptx_af_fltx_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t exe                   : 64; /**< [ 63:  0](R/W1C/H) "One interrupt bit per engine. CPT sets the bit when the engine has an
                                                                 uncorrectable error, including microcode memory fetch errors, double-bit error,
                                                                 or watchdog. The engine has been halted and must be disabled and re-enabled.
                                                                 See CPT_AF_EXE()_CTL[ENABLE]. (CPT_AF_EXE()_STS[FREE,BUSY]=0,0 for the engine
                                                                 while it is halted.)

                                                                 Engine microcode memory fetch errors may normally be due to SMMU faults, but when
                                                                 CPT_AF_CTL[RD_PSN_IGN]=0, they can also be due to poison.

                                                                 _ CPT_AF_FLT(0)_INT[EXE] - engine(63..0).
                                                                 _ CPT_AF_FLT(1)_INT[EXE] - engine(127..64).

                                                                 Only the following bit indices are supported:
                                                                 _    0    .. #SE-1         = the SEs.
                                                                 _   #SE   .. #SE+#IE-1     = the IEs.
                                                                 _ #SE+#IE .. #SE+#IE+#AE-1 = the AEs.
                                                                 _ where #SE,#IE,#AE = CPT_AF_CONSTANTS1[SE,IE,AE]. Software must zero nonsupported
                                                                 bit indices.

                                                                 If corresponding CPT_AF_EXE()_STS[BUSY] is set, CPT_AF_EXE()_ACTIVE[PF_FUNC]
                                                                 indicates the function/LF/queue that the engine was working on.

                                                                 When CPT sets an [EXE] bit, it will also simultaneously set CPT_LF_MISC_INT[HWERR] of
                                                                 the LF the engine was working for. If CPT_AF_LF()_CTL[CONT_ERR]=0, CPT also clears
                                                                 CPT_LF_CTL[ENA], and the LF/queue must be reset. See also CPT_COMP_E::HWERR.

                                                                 When CPT sets an [EXE] bit due to poison (CPT_AF_CTL[RD_PSN_IGN] must be zero),
                                                                 it also sets the corresponding CPT_AF_PSN()_LF[LF] bit, and will
                                                                 have previously set the corresponding CPT_AF_PSN()_EXE[EXE] bit."

                                                                 Internal:
                                                                 Includes all things that cause CPT_LF_MISC_INT[HWERR] / CPT_COMP_E::HWERR:
                                                                 EXE_WDOG, EXE_RF_DBE, and EXE_UC_ERR. EXE_UC_ERR is fault/poison on
                                                                 microcode fetches.

                                                                 FIXME: Looking above: is CPT_AF_EXE()_ACTIVE[PF_FUNC] really only useful
                                                                 when CPT_AF_EXE()_STS[BUSY] is set. */
#else /* Word 0 - Little Endian */
        uint64_t exe                   : 64; /**< [ 63:  0](R/W1C/H) "One interrupt bit per engine. CPT sets the bit when the engine has an
                                                                 uncorrectable error, including microcode memory fetch errors, double-bit error,
                                                                 or watchdog. The engine has been halted and must be disabled and re-enabled.
                                                                 See CPT_AF_EXE()_CTL[ENABLE]. (CPT_AF_EXE()_STS[FREE,BUSY]=0,0 for the engine
                                                                 while it is halted.)

                                                                 Engine microcode memory fetch errors may normally be due to SMMU faults, but when
                                                                 CPT_AF_CTL[RD_PSN_IGN]=0, they can also be due to poison.

                                                                 _ CPT_AF_FLT(0)_INT[EXE] - engine(63..0).
                                                                 _ CPT_AF_FLT(1)_INT[EXE] - engine(127..64).

                                                                 Only the following bit indices are supported:
                                                                 _    0    .. #SE-1         = the SEs.
                                                                 _   #SE   .. #SE+#IE-1     = the IEs.
                                                                 _ #SE+#IE .. #SE+#IE+#AE-1 = the AEs.
                                                                 _ where #SE,#IE,#AE = CPT_AF_CONSTANTS1[SE,IE,AE]. Software must zero nonsupported
                                                                 bit indices.

                                                                 If corresponding CPT_AF_EXE()_STS[BUSY] is set, CPT_AF_EXE()_ACTIVE[PF_FUNC]
                                                                 indicates the function/LF/queue that the engine was working on.

                                                                 When CPT sets an [EXE] bit, it will also simultaneously set CPT_LF_MISC_INT[HWERR] of
                                                                 the LF the engine was working for. If CPT_AF_LF()_CTL[CONT_ERR]=0, CPT also clears
                                                                 CPT_LF_CTL[ENA], and the LF/queue must be reset. See also CPT_COMP_E::HWERR.

                                                                 When CPT sets an [EXE] bit due to poison (CPT_AF_CTL[RD_PSN_IGN] must be zero),
                                                                 it also sets the corresponding CPT_AF_PSN()_LF[LF] bit, and will
                                                                 have previously set the corresponding CPT_AF_PSN()_EXE[EXE] bit."

                                                                 Internal:
                                                                 Includes all things that cause CPT_LF_MISC_INT[HWERR] / CPT_COMP_E::HWERR:
                                                                 EXE_WDOG, EXE_RF_DBE, and EXE_UC_ERR. EXE_UC_ERR is fault/poison on
                                                                 microcode fetches.

                                                                 FIXME: Looking above: is CPT_AF_EXE()_ACTIVE[PF_FUNC] really only useful
                                                                 when CPT_AF_EXE()_STS[BUSY] is set. */
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_af_fltx_int_s cn; */
};
typedef union bdk_cptx_af_fltx_int bdk_cptx_af_fltx_int_t;

static inline uint64_t BDK_CPTX_AF_FLTX_INT(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_AF_FLTX_INT(unsigned long a, unsigned long b)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && ((a==0) && (b<=1)))
        return 0x8400a000a000ll + 0x10000000ll * ((a) & 0x0) + 8ll * ((b) & 0x1);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && ((a<=1) && (b<=1)))
        return 0x8400a000a000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    if (bdk_is_model(OCTEONTX_CN98XX) && ((a<=1) && (b<=1)))
        return 0x8400a000a000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    __bdk_csr_fatal("CPTX_AF_FLTX_INT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_AF_FLTX_INT(a,b) bdk_cptx_af_fltx_int_t
#define bustype_BDK_CPTX_AF_FLTX_INT(a,b) BDK_CSR_TYPE_RVU_PF_BAR0
#define basename_BDK_CPTX_AF_FLTX_INT(a,b) "CPTX_AF_FLTX_INT"
#define device_bar_BDK_CPTX_AF_FLTX_INT(a,b) 0x0 /* RVU_BAR0 */
#define busnum_BDK_CPTX_AF_FLTX_INT(a,b) (a)
#define arguments_BDK_CPTX_AF_FLTX_INT(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_flt#_int_ena_w1c
 *
 * CPT AF Execution Unit Interrupt Enable Clear Registers
 * This register clears interrupt enable bits.
 */
union bdk_cptx_af_fltx_int_ena_w1c
{
    uint64_t u;
    struct bdk_cptx_af_fltx_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t exe                   : 64; /**< [ 63:  0](R/W1C/H) Reads or clears enable for CPT_AF_FLT(0..1)_INT[EXE].
                                                                 Internal:
                                                                 Includes all things that cause CPT_LF_MISC_INT[HWERR] / CPT_COMP_E::HWERR:
                                                                 EXE_WDOG, EXE_RF_DBE, and EXE_UC_ERR. EXE_UC_ERR is fault/poison on
                                                                 microcode fetches.

                                                                 FIXME: Looking above: is CPT_AF_EXE()_ACTIVE[PF_FUNC] really only useful
                                                                 when CPT_AF_EXE()_STS[BUSY] is set. */
#else /* Word 0 - Little Endian */
        uint64_t exe                   : 64; /**< [ 63:  0](R/W1C/H) Reads or clears enable for CPT_AF_FLT(0..1)_INT[EXE].
                                                                 Internal:
                                                                 Includes all things that cause CPT_LF_MISC_INT[HWERR] / CPT_COMP_E::HWERR:
                                                                 EXE_WDOG, EXE_RF_DBE, and EXE_UC_ERR. EXE_UC_ERR is fault/poison on
                                                                 microcode fetches.

                                                                 FIXME: Looking above: is CPT_AF_EXE()_ACTIVE[PF_FUNC] really only useful
                                                                 when CPT_AF_EXE()_STS[BUSY] is set. */
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_af_fltx_int_ena_w1c_s cn; */
};
typedef union bdk_cptx_af_fltx_int_ena_w1c bdk_cptx_af_fltx_int_ena_w1c_t;

static inline uint64_t BDK_CPTX_AF_FLTX_INT_ENA_W1C(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_AF_FLTX_INT_ENA_W1C(unsigned long a, unsigned long b)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && ((a==0) && (b<=1)))
        return 0x8400a000c000ll + 0x10000000ll * ((a) & 0x0) + 8ll * ((b) & 0x1);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && ((a<=1) && (b<=1)))
        return 0x8400a000c000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    if (bdk_is_model(OCTEONTX_CN98XX) && ((a<=1) && (b<=1)))
        return 0x8400a000c000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    __bdk_csr_fatal("CPTX_AF_FLTX_INT_ENA_W1C", 2, a, b, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_AF_FLTX_INT_ENA_W1C(a,b) bdk_cptx_af_fltx_int_ena_w1c_t
#define bustype_BDK_CPTX_AF_FLTX_INT_ENA_W1C(a,b) BDK_CSR_TYPE_RVU_PF_BAR0
#define basename_BDK_CPTX_AF_FLTX_INT_ENA_W1C(a,b) "CPTX_AF_FLTX_INT_ENA_W1C"
#define device_bar_BDK_CPTX_AF_FLTX_INT_ENA_W1C(a,b) 0x0 /* RVU_BAR0 */
#define busnum_BDK_CPTX_AF_FLTX_INT_ENA_W1C(a,b) (a)
#define arguments_BDK_CPTX_AF_FLTX_INT_ENA_W1C(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_flt#_int_ena_w1s
 *
 * CPT AF Execution Unit Interrupt Enable Set Registers
 * This register sets interrupt enable bits.
 */
union bdk_cptx_af_fltx_int_ena_w1s
{
    uint64_t u;
    struct bdk_cptx_af_fltx_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t exe                   : 64; /**< [ 63:  0](R/W1S/H) Reads or sets enable for CPT_AF_FLT(0..1)_INT[EXE].
                                                                 Internal:
                                                                 Includes all things that cause CPT_LF_MISC_INT[HWERR] / CPT_COMP_E::HWERR:
                                                                 EXE_WDOG, EXE_RF_DBE, and EXE_UC_ERR. EXE_UC_ERR is fault/poison on
                                                                 microcode fetches.

                                                                 FIXME: Looking above: is CPT_AF_EXE()_ACTIVE[PF_FUNC] really only useful
                                                                 when CPT_AF_EXE()_STS[BUSY] is set. */
#else /* Word 0 - Little Endian */
        uint64_t exe                   : 64; /**< [ 63:  0](R/W1S/H) Reads or sets enable for CPT_AF_FLT(0..1)_INT[EXE].
                                                                 Internal:
                                                                 Includes all things that cause CPT_LF_MISC_INT[HWERR] / CPT_COMP_E::HWERR:
                                                                 EXE_WDOG, EXE_RF_DBE, and EXE_UC_ERR. EXE_UC_ERR is fault/poison on
                                                                 microcode fetches.

                                                                 FIXME: Looking above: is CPT_AF_EXE()_ACTIVE[PF_FUNC] really only useful
                                                                 when CPT_AF_EXE()_STS[BUSY] is set. */
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_af_fltx_int_ena_w1s_s cn; */
};
typedef union bdk_cptx_af_fltx_int_ena_w1s bdk_cptx_af_fltx_int_ena_w1s_t;

static inline uint64_t BDK_CPTX_AF_FLTX_INT_ENA_W1S(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_AF_FLTX_INT_ENA_W1S(unsigned long a, unsigned long b)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && ((a==0) && (b<=1)))
        return 0x8400a000d000ll + 0x10000000ll * ((a) & 0x0) + 8ll * ((b) & 0x1);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && ((a<=1) && (b<=1)))
        return 0x8400a000d000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    if (bdk_is_model(OCTEONTX_CN98XX) && ((a<=1) && (b<=1)))
        return 0x8400a000d000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    __bdk_csr_fatal("CPTX_AF_FLTX_INT_ENA_W1S", 2, a, b, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_AF_FLTX_INT_ENA_W1S(a,b) bdk_cptx_af_fltx_int_ena_w1s_t
#define bustype_BDK_CPTX_AF_FLTX_INT_ENA_W1S(a,b) BDK_CSR_TYPE_RVU_PF_BAR0
#define basename_BDK_CPTX_AF_FLTX_INT_ENA_W1S(a,b) "CPTX_AF_FLTX_INT_ENA_W1S"
#define device_bar_BDK_CPTX_AF_FLTX_INT_ENA_W1S(a,b) 0x0 /* RVU_BAR0 */
#define busnum_BDK_CPTX_AF_FLTX_INT_ENA_W1S(a,b) (a)
#define arguments_BDK_CPTX_AF_FLTX_INT_ENA_W1S(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_flt#_int_w1s
 *
 * CPT AF Execution Unit Interrupt Set Registers
 * This register sets interrupt bits.
 */
union bdk_cptx_af_fltx_int_w1s
{
    uint64_t u;
    struct bdk_cptx_af_fltx_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t exe                   : 64; /**< [ 63:  0](R/W1S/H) Reads or sets CPT_AF_FLT(0..1)_INT[EXE].
                                                                 Internal:
                                                                 Includes all things that cause CPT_LF_MISC_INT[HWERR] / CPT_COMP_E::HWERR:
                                                                 EXE_WDOG, EXE_RF_DBE, and EXE_UC_ERR. EXE_UC_ERR is fault/poison on
                                                                 microcode fetches.

                                                                 FIXME: Looking above: is CPT_AF_EXE()_ACTIVE[PF_FUNC] really only useful
                                                                 when CPT_AF_EXE()_STS[BUSY] is set. */
#else /* Word 0 - Little Endian */
        uint64_t exe                   : 64; /**< [ 63:  0](R/W1S/H) Reads or sets CPT_AF_FLT(0..1)_INT[EXE].
                                                                 Internal:
                                                                 Includes all things that cause CPT_LF_MISC_INT[HWERR] / CPT_COMP_E::HWERR:
                                                                 EXE_WDOG, EXE_RF_DBE, and EXE_UC_ERR. EXE_UC_ERR is fault/poison on
                                                                 microcode fetches.

                                                                 FIXME: Looking above: is CPT_AF_EXE()_ACTIVE[PF_FUNC] really only useful
                                                                 when CPT_AF_EXE()_STS[BUSY] is set. */
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_af_fltx_int_w1s_s cn; */
};
typedef union bdk_cptx_af_fltx_int_w1s bdk_cptx_af_fltx_int_w1s_t;

static inline uint64_t BDK_CPTX_AF_FLTX_INT_W1S(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_AF_FLTX_INT_W1S(unsigned long a, unsigned long b)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && ((a==0) && (b<=1)))
        return 0x8400a000b000ll + 0x10000000ll * ((a) & 0x0) + 8ll * ((b) & 0x1);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && ((a<=1) && (b<=1)))
        return 0x8400a000b000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    if (bdk_is_model(OCTEONTX_CN98XX) && ((a<=1) && (b<=1)))
        return 0x8400a000b000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    __bdk_csr_fatal("CPTX_AF_FLTX_INT_W1S", 2, a, b, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_AF_FLTX_INT_W1S(a,b) bdk_cptx_af_fltx_int_w1s_t
#define bustype_BDK_CPTX_AF_FLTX_INT_W1S(a,b) BDK_CSR_TYPE_RVU_PF_BAR0
#define basename_BDK_CPTX_AF_FLTX_INT_W1S(a,b) "CPTX_AF_FLTX_INT_W1S"
#define device_bar_BDK_CPTX_AF_FLTX_INT_W1S(a,b) 0x0 /* RVU_BAR0 */
#define busnum_BDK_CPTX_AF_FLTX_INT_W1S(a,b) (a)
#define arguments_BDK_CPTX_AF_FLTX_INT_W1S(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_grp#_thr
 *
 * RVU Admin Function Group Throttle Register
 * See also CPT_INST_S[EGRP], CPT_AF_LF()_CTL[GRP], and CPT_AF_EXE()_CTL2[GRP_EN].
 */
union bdk_cptx_af_grpx_thr
{
    uint64_t u;
    struct bdk_cptx_af_grpx_thr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_33_63        : 31;
        uint64_t ena                   : 1;  /**< [ 32: 32](R/W) Group enable bit.
                                                                 0 = Prevents instructions from this group from being picked and sent to an
                                                                 engine.
                                                                 1 = Enables instruction picks for the group. */
        uint64_t reserved_20_31        : 12;
        uint64_t cnt                   : 4;  /**< [ 19: 16](RO/H) The current number of instruction read buffer (IRB) entries allowed to be
                                                                 consumed by this group for unassigned CPT instructions. */
        uint64_t reserved_4_15         : 12;
        uint64_t thr                   : 4;  /**< [  3:  0](R/W/H) The maximum number of instruction read buffer (IRB) entries
                                                                 consumed by this group for unassigned CPT instructions. Before writing this field,
                                                                 [ENA] must be written to zero and the value of
                                                                 [THR] must equal the value of CPT_AF_GRP()_THR[CNT]. */
#else /* Word 0 - Little Endian */
        uint64_t thr                   : 4;  /**< [  3:  0](R/W/H) The maximum number of instruction read buffer (IRB) entries
                                                                 consumed by this group for unassigned CPT instructions. Before writing this field,
                                                                 [ENA] must be written to zero and the value of
                                                                 [THR] must equal the value of CPT_AF_GRP()_THR[CNT]. */
        uint64_t reserved_4_15         : 12;
        uint64_t cnt                   : 4;  /**< [ 19: 16](RO/H) The current number of instruction read buffer (IRB) entries allowed to be
                                                                 consumed by this group for unassigned CPT instructions. */
        uint64_t reserved_20_31        : 12;
        uint64_t ena                   : 1;  /**< [ 32: 32](R/W) Group enable bit.
                                                                 0 = Prevents instructions from this group from being picked and sent to an
                                                                 engine.
                                                                 1 = Enables instruction picks for the group. */
        uint64_t reserved_33_63        : 31;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_af_grpx_thr_s cn; */
};
typedef union bdk_cptx_af_grpx_thr bdk_cptx_af_grpx_thr_t;

static inline uint64_t BDK_CPTX_AF_GRPX_THR(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_AF_GRPX_THR(unsigned long a, unsigned long b)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && ((a==0) && (b<=7)))
        return 0x8400a002d000ll + 0x10000000ll * ((a) & 0x0) + 8ll * ((b) & 0x7);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && ((a<=1) && (b<=7)))
        return 0x8400a002d000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x7);
    if (bdk_is_model(OCTEONTX_CN98XX) && ((a<=1) && (b<=7)))
        return 0x8400a002d000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x7);
    __bdk_csr_fatal("CPTX_AF_GRPX_THR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_AF_GRPX_THR(a,b) bdk_cptx_af_grpx_thr_t
#define bustype_BDK_CPTX_AF_GRPX_THR(a,b) BDK_CSR_TYPE_RVU_PF_BAR0
#define basename_BDK_CPTX_AF_GRPX_THR(a,b) "CPTX_AF_GRPX_THR"
#define device_bar_BDK_CPTX_AF_GRPX_THR(a,b) 0x0 /* RVU_BAR0 */
#define busnum_BDK_CPTX_AF_GRPX_THR(a,b) (a)
#define arguments_BDK_CPTX_AF_GRPX_THR(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_inst_latency_pc
 *
 * CPT AF Instruction Latency Counter Register
 */
union bdk_cptx_af_inst_latency_pc
{
    uint64_t u;
    struct bdk_cptx_af_inst_latency_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Number of cycles waiting for an instruction to complete (have the store of
                                                                 CPT_RES_S reach the commit point). Incremented every coprocessor-clock by the
                                                                 number of instructions active in that cycle. This may be divided by
                                                                 CPT_AF_RD_REQ_PC to determine the average hardware instruction latency. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Number of cycles waiting for an instruction to complete (have the store of
                                                                 CPT_RES_S reach the commit point). Incremented every coprocessor-clock by the
                                                                 number of instructions active in that cycle. This may be divided by
                                                                 CPT_AF_RD_REQ_PC to determine the average hardware instruction latency. */
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_af_inst_latency_pc_s cn; */
};
typedef union bdk_cptx_af_inst_latency_pc bdk_cptx_af_inst_latency_pc_t;

static inline uint64_t BDK_CPTX_AF_INST_LATENCY_PC(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_AF_INST_LATENCY_PC(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && (a==0))
        return 0x8400a0018000ll + 0x10000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && (a<=1))
        return 0x8400a0018000ll + 0x10000000ll * ((a) & 0x1);
    if (bdk_is_model(OCTEONTX_CN98XX) && (a<=1))
        return 0x8400a0018000ll + 0x10000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_AF_INST_LATENCY_PC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_AF_INST_LATENCY_PC(a) bdk_cptx_af_inst_latency_pc_t
#define bustype_BDK_CPTX_AF_INST_LATENCY_PC(a) BDK_CSR_TYPE_RVU_PF_BAR0
#define basename_BDK_CPTX_AF_INST_LATENCY_PC(a) "CPTX_AF_INST_LATENCY_PC"
#define device_bar_BDK_CPTX_AF_INST_LATENCY_PC(a) 0x0 /* RVU_BAR0 */
#define busnum_BDK_CPTX_AF_INST_LATENCY_PC(a) (a)
#define arguments_BDK_CPTX_AF_INST_LATENCY_PC(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_inst_req_pc
 *
 * CPT AF Instruction Request Performance Counter Register
 */
union bdk_cptx_af_inst_req_pc
{
    uint64_t u;
    struct bdk_cptx_af_inst_req_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Number of instructions that have started processing. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Number of instructions that have started processing. */
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_af_inst_req_pc_s cn; */
};
typedef union bdk_cptx_af_inst_req_pc bdk_cptx_af_inst_req_pc_t;

static inline uint64_t BDK_CPTX_AF_INST_REQ_PC(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_AF_INST_REQ_PC(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && (a==0))
        return 0x8400a0017000ll + 0x10000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && (a<=1))
        return 0x8400a0017000ll + 0x10000000ll * ((a) & 0x1);
    if (bdk_is_model(OCTEONTX_CN98XX) && (a<=1))
        return 0x8400a0017000ll + 0x10000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_AF_INST_REQ_PC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_AF_INST_REQ_PC(a) bdk_cptx_af_inst_req_pc_t
#define bustype_BDK_CPTX_AF_INST_REQ_PC(a) BDK_CSR_TYPE_RVU_PF_BAR0
#define basename_BDK_CPTX_AF_INST_REQ_PC(a) "CPTX_AF_INST_REQ_PC"
#define device_bar_BDK_CPTX_AF_INST_REQ_PC(a) 0x0 /* RVU_BAR0 */
#define busnum_BDK_CPTX_AF_INST_REQ_PC(a) (a)
#define arguments_BDK_CPTX_AF_INST_REQ_PC(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_lf#_ctl
 *
 * CPT AF Queue Control Register
 * This register configures queues. This register should be written only when the
 * queue is execution-quiescent (see CPT_LF_INPROG[INFLIGHT]).
 */
union bdk_cptx_af_lfx_ctl
{
    uint64_t u;
    struct bdk_cptx_af_lfx_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_56_63        : 8;
        uint64_t grp                   : 8;  /**< [ 55: 48](R/W) Engine group mask. Each bit represents an engine group.

                                                                 If [GRP\<x\>]=0, CPT will discard all instructions with x=CPT_INST_S[EGRP].
                                                                 CPT sets CPT_LF_MISC_INT[NQERR] when this happens, and if CPT_AF_LF()_CTL[CONT_ERR]=0,
                                                                 also clears CPT_LF_CTL[ENA], necessitating an LF/queue reset.

                                                                 If [GRP\<x\>]=1, CPT can execute instructions with x=CPT_INST_S[EGRP].

                                                                 See also CPT_INST_S[EGRP] and CPT_AF_EXE()_CTL2[GRP_EN]. */
        uint64_t reserved_17_47        : 31;
        uint64_t nixtx_en              : 1;  /**< [ 16: 16](R/W) Enable CPT to pass the descriptor to NIX TX. Software must only set this when
                                                                 the function is allowed to enqueue descriptors via LMTSTs.

                                                                 0 = When CPT receives an instruction for the LF/queue with CPT_INST_S[NIXTXL]!=0x0, it
                                                                 sets CPT_LF_MISC_INT[NQERR], signals CPT_COMP_E::INSTERR, and will not pass a descriptor
                                                                 to NIX TX for the instruction.

                                                                 1 = When CPT receives an instruction for the LF/queue with CPT_INST_S[NIXTXL]!=0x0, it
                                                                 can execute the instruction, which may involve passing its descriptor to NIX TX.
                                                                 [NIX_SEL] selects the destination NIX, and CPT_AF_LF()_CTL2[NIX_PF_FUNC] selects
                                                                 the NIX function.

                                                                 [NIXTX_EN] must not be set simultaneously with [PF_FUNC_INST]. */
        uint64_t reserved_11_15        : 5;
        uint64_t cont_err              : 1;  /**< [ 10: 10](R/W) Continue on error.

                                                                 0 = When hardware or a CPT_LF_MISC_INT_W1S write sets any CPT_LF_MISC_INT
                                                                 bit, CPT clears CPT_LF_CTL[ENA].  Due to pipelining,
                                                                 additional instructions may have been processed between the instruction
                                                                 causing the error and the next instruction in the disabled queue (the
                                                                 instruction at CPT_LF_Q_INST_PTR). Note that clearing CPT_LF_CTL[ENA]
                                                                 will indirectly cause CPT_LF_MISC_INT[NQERR] to be set if instructions
                                                                 are still being enqueued.

                                                                 1 = Ignore errors and continue processing instructions. The exception to
                                                                 this rule is that CPT always clears CPT_LF_CTL[ENA] on a queue overflow
                                                                 error. CPT_LF_MISC_INT[NQERR] and CPT_LF_Q_SIZE[SIZE_DIV40] describe a
                                                                 queue overflow error. For diagnostic use only. */
        uint64_t pf_func_inst          : 1;  /**< [  9:  9](R/W) PFVF change allowed on instructions.

                                                                 0 = CPT executes all CPT_INST_S's in the queue within the function
                                                                 that owns the queue/LF (i.e. CPT_PRIV_LF()_CFG[PF_FUNC]). (But see SSO
                                                                 and NIX exceptions below).

                                                                 1 = CPT executes each CPT_INST_S in the queue within the function
                                                                 CPT_INST_S[RVU_PF_FUNC] selected by the instruction. This is
                                                                 used by the CPT queue that is performing NIX receive IPsec offload.

                                                                 See also CPT_AF_LF()_CTL2[SSO_PF_FUNC]. When [PF_FUNC_INST]=0 or
                                                                 CPT_AF_ECO[SSO_PF_FUNC_OVRD]=1, CPT uses CPT_AF_LF()_CTL2[SSO_PF_FUNC]
                                                                 to add work to SSO. When [PF_FUNC_INST]=1 and CPT_AF_ECO[SSO_PF_FUNC_OVRD]=0,
                                                                 CPT instead adds SSO work to the function CPT_INST_S[SSO_PF_FUNC/NIXTX_ADDR\<59:44\>]
                                                                 selected by the instruction.

                                                                 See also CPT_AF_LF()_CTL2[NIX_PF_FUNC]. [PF_FUNC_INST] has no effect on NIX
                                                                 TX descriptor transfer, as instructions can't transfer to NIX TX when
                                                                 [PF_FUNC_INST]=1.

                                                                 [PF_FUNC_INST] has no effect on the memory reads and writes needed to
                                                                 enqueue/dequeue the CPT_INST_S's themselves. CPT always uses the
                                                                 queue-owning function, i.e. CPT_PRIV_LF()_CFG[PF_FUNC], to enqueue/dequeue
                                                                 instructions.

                                                                 [PF_FUNC_INST] has no effect on microcode fetches. CPT always uses
                                                                 CPT_AF_PF_FUNC[PF_FUNC] to fetch microcode.

                                                                 [PF_FUNC_INST] must not be set simultaneously with [NIXTX_EN].

                                                                 [PF_FUNC_INST] must only be set for a CPT queue that receives CPT_INST_S's
                                                                 from a NIX RX - NIX RX fills CPT_INST_S[RVU_PF_FUNC,SSO_PF_FUNC/NIXTX_ADDR\<59:44\>]
                                                                 appropriately in the instructions it submits.  AP's must not add CPT_INST_S's to
                                                                 a queue with [PF_FUNC_INST]=1. See also [NIX_SEL] - when [PF_FUNC_INST]=1,
                                                                 [NIX_SEL] selects the NIX that CPT receives instructions from.
                                                                 No two queues can have [PF_FUNC_INST]=1 and the same [NIX_SEL] value. */
        uint64_t nix_sel               : 1;  /**< [  8:  8](R/W) When [PF_FUNC_INST]=0, as is normal, [NIX_SEL] selects the destination NIX
                                                                 for all outgoing NIX TX descriptor transfers from the queue/lf. See also
                                                                 [NIXTX_EN], which must be set for successful NIX descriptor transfers,
                                                                 and CPT_AF_LF()_CTL2[NIX_PF_FUNC], which selects the NIX function.

                                                                 When [PF_FUNC_INST]=1, [NIX_SEL] selects the source NIX for all instructions
                                                                 received at the queue/lf.

                                                                 For successful instruction reception from a NIX to this queue/lf, [PF_FUNC_INST]
                                                                 must be set, and NIX_AF_RX_CPT()_INST_QSEL[SLOT] and [NIX_SEL] configuration
                                                                 must be consistent. If the NIX_AF_RX_CPT()_INST_QSEL[SLOT] in NIX A
                                                                 corresponding to this CPT selects this queue/lf, then [NIX_SEL] must be A
                                                                 for successful instruction reception from NIX A to this CPT. At most two
                                                                 queues/lfs in this CPT can have [PF_FUNC_INST]=1: at most one with [NIX_SEL]=0,
                                                                 plus at most one with [NIX_SEL]=1.

                                                                 For CNXXXX, [NIX_SEL] must always be set to zero. */
        uint64_t reserved_1_7          : 7;
        uint64_t pri                   : 1;  /**< [  0:  0](R/W) Queue priority.
                                                                 1 = This queue has higher priority. Round-robin between higher priority queues.
                                                                 0 = This queue has lower priority. Round-robin between lower priority queues.

                                                                 See also CPT_AF_EXE_REQ_TIMER[CNT]. */
#else /* Word 0 - Little Endian */
        uint64_t pri                   : 1;  /**< [  0:  0](R/W) Queue priority.
                                                                 1 = This queue has higher priority. Round-robin between higher priority queues.
                                                                 0 = This queue has lower priority. Round-robin between lower priority queues.

                                                                 See also CPT_AF_EXE_REQ_TIMER[CNT]. */
        uint64_t reserved_1_7          : 7;
        uint64_t nix_sel               : 1;  /**< [  8:  8](R/W) When [PF_FUNC_INST]=0, as is normal, [NIX_SEL] selects the destination NIX
                                                                 for all outgoing NIX TX descriptor transfers from the queue/lf. See also
                                                                 [NIXTX_EN], which must be set for successful NIX descriptor transfers,
                                                                 and CPT_AF_LF()_CTL2[NIX_PF_FUNC], which selects the NIX function.

                                                                 When [PF_FUNC_INST]=1, [NIX_SEL] selects the source NIX for all instructions
                                                                 received at the queue/lf.

                                                                 For successful instruction reception from a NIX to this queue/lf, [PF_FUNC_INST]
                                                                 must be set, and NIX_AF_RX_CPT()_INST_QSEL[SLOT] and [NIX_SEL] configuration
                                                                 must be consistent. If the NIX_AF_RX_CPT()_INST_QSEL[SLOT] in NIX A
                                                                 corresponding to this CPT selects this queue/lf, then [NIX_SEL] must be A
                                                                 for successful instruction reception from NIX A to this CPT. At most two
                                                                 queues/lfs in this CPT can have [PF_FUNC_INST]=1: at most one with [NIX_SEL]=0,
                                                                 plus at most one with [NIX_SEL]=1.

                                                                 For CNXXXX, [NIX_SEL] must always be set to zero. */
        uint64_t pf_func_inst          : 1;  /**< [  9:  9](R/W) PFVF change allowed on instructions.

                                                                 0 = CPT executes all CPT_INST_S's in the queue within the function
                                                                 that owns the queue/LF (i.e. CPT_PRIV_LF()_CFG[PF_FUNC]). (But see SSO
                                                                 and NIX exceptions below).

                                                                 1 = CPT executes each CPT_INST_S in the queue within the function
                                                                 CPT_INST_S[RVU_PF_FUNC] selected by the instruction. This is
                                                                 used by the CPT queue that is performing NIX receive IPsec offload.

                                                                 See also CPT_AF_LF()_CTL2[SSO_PF_FUNC]. When [PF_FUNC_INST]=0 or
                                                                 CPT_AF_ECO[SSO_PF_FUNC_OVRD]=1, CPT uses CPT_AF_LF()_CTL2[SSO_PF_FUNC]
                                                                 to add work to SSO. When [PF_FUNC_INST]=1 and CPT_AF_ECO[SSO_PF_FUNC_OVRD]=0,
                                                                 CPT instead adds SSO work to the function CPT_INST_S[SSO_PF_FUNC/NIXTX_ADDR\<59:44\>]
                                                                 selected by the instruction.

                                                                 See also CPT_AF_LF()_CTL2[NIX_PF_FUNC]. [PF_FUNC_INST] has no effect on NIX
                                                                 TX descriptor transfer, as instructions can't transfer to NIX TX when
                                                                 [PF_FUNC_INST]=1.

                                                                 [PF_FUNC_INST] has no effect on the memory reads and writes needed to
                                                                 enqueue/dequeue the CPT_INST_S's themselves. CPT always uses the
                                                                 queue-owning function, i.e. CPT_PRIV_LF()_CFG[PF_FUNC], to enqueue/dequeue
                                                                 instructions.

                                                                 [PF_FUNC_INST] has no effect on microcode fetches. CPT always uses
                                                                 CPT_AF_PF_FUNC[PF_FUNC] to fetch microcode.

                                                                 [PF_FUNC_INST] must not be set simultaneously with [NIXTX_EN].

                                                                 [PF_FUNC_INST] must only be set for a CPT queue that receives CPT_INST_S's
                                                                 from a NIX RX - NIX RX fills CPT_INST_S[RVU_PF_FUNC,SSO_PF_FUNC/NIXTX_ADDR\<59:44\>]
                                                                 appropriately in the instructions it submits.  AP's must not add CPT_INST_S's to
                                                                 a queue with [PF_FUNC_INST]=1. See also [NIX_SEL] - when [PF_FUNC_INST]=1,
                                                                 [NIX_SEL] selects the NIX that CPT receives instructions from.
                                                                 No two queues can have [PF_FUNC_INST]=1 and the same [NIX_SEL] value. */
        uint64_t cont_err              : 1;  /**< [ 10: 10](R/W) Continue on error.

                                                                 0 = When hardware or a CPT_LF_MISC_INT_W1S write sets any CPT_LF_MISC_INT
                                                                 bit, CPT clears CPT_LF_CTL[ENA].  Due to pipelining,
                                                                 additional instructions may have been processed between the instruction
                                                                 causing the error and the next instruction in the disabled queue (the
                                                                 instruction at CPT_LF_Q_INST_PTR). Note that clearing CPT_LF_CTL[ENA]
                                                                 will indirectly cause CPT_LF_MISC_INT[NQERR] to be set if instructions
                                                                 are still being enqueued.

                                                                 1 = Ignore errors and continue processing instructions. The exception to
                                                                 this rule is that CPT always clears CPT_LF_CTL[ENA] on a queue overflow
                                                                 error. CPT_LF_MISC_INT[NQERR] and CPT_LF_Q_SIZE[SIZE_DIV40] describe a
                                                                 queue overflow error. For diagnostic use only. */
        uint64_t reserved_11_15        : 5;
        uint64_t nixtx_en              : 1;  /**< [ 16: 16](R/W) Enable CPT to pass the descriptor to NIX TX. Software must only set this when
                                                                 the function is allowed to enqueue descriptors via LMTSTs.

                                                                 0 = When CPT receives an instruction for the LF/queue with CPT_INST_S[NIXTXL]!=0x0, it
                                                                 sets CPT_LF_MISC_INT[NQERR], signals CPT_COMP_E::INSTERR, and will not pass a descriptor
                                                                 to NIX TX for the instruction.

                                                                 1 = When CPT receives an instruction for the LF/queue with CPT_INST_S[NIXTXL]!=0x0, it
                                                                 can execute the instruction, which may involve passing its descriptor to NIX TX.
                                                                 [NIX_SEL] selects the destination NIX, and CPT_AF_LF()_CTL2[NIX_PF_FUNC] selects
                                                                 the NIX function.

                                                                 [NIXTX_EN] must not be set simultaneously with [PF_FUNC_INST]. */
        uint64_t reserved_17_47        : 31;
        uint64_t grp                   : 8;  /**< [ 55: 48](R/W) Engine group mask. Each bit represents an engine group.

                                                                 If [GRP\<x\>]=0, CPT will discard all instructions with x=CPT_INST_S[EGRP].
                                                                 CPT sets CPT_LF_MISC_INT[NQERR] when this happens, and if CPT_AF_LF()_CTL[CONT_ERR]=0,
                                                                 also clears CPT_LF_CTL[ENA], necessitating an LF/queue reset.

                                                                 If [GRP\<x\>]=1, CPT can execute instructions with x=CPT_INST_S[EGRP].

                                                                 See also CPT_INST_S[EGRP] and CPT_AF_EXE()_CTL2[GRP_EN]. */
        uint64_t reserved_56_63        : 8;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_af_lfx_ctl_s cn9; */
    struct bdk_cptx_af_lfx_ctl_cn96xxp1
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_56_63        : 8;
        uint64_t grp                   : 8;  /**< [ 55: 48](R/W) Engine group mask. Each bit represents an engine group.

                                                                 If [GRP\<x\>]=0, CPT will discard all instructions with x=CPT_INST_S[EGRP].
                                                                 CPT sets CPT_LF_MISC_INT[NQERR] when this happens, and if CPT_AF_LF()_CTL[CONT_ERR]=0,
                                                                 also clears CPT_LF_CTL[ENA], necessitating an LF/queue reset.

                                                                 If [GRP\<x\>]=1, CPT can execute instructions with x=CPT_INST_S[EGRP].

                                                                 See also CPT_INST_S[EGRP] and CPT_AF_EXE()_CTL2[GRP_EN]. */
        uint64_t reserved_17_47        : 31;
        uint64_t nixtx_en              : 1;  /**< [ 16: 16](R/W) Enable CPT to pass the descriptor to NIX TX. Software must only set this when
                                                                 the function is allowed to enqueue descriptors via LMTSTs.

                                                                 0 = When CPT receives an instruction for the LF/queue with CPT_INST_S[NIXTXL]!=0x0, it
                                                                 sets CPT_LF_MISC_INT[NQERR], signals CPT_COMP_E::INSTERR, and will not pass a descriptor
                                                                 to NIX TX for the instruction.

                                                                 1 = When CPT receives an instruction for the LF/queue with CPT_INST_S[NIXTXL]!=0x0, it
                                                                 can execute the instruction, which may involve passing its descriptor to NIX TX.
                                                                 [NIX_SEL] selects the destination NIX, and CPT_AF_LF()_CTL2[NIX_PF_FUNC] selects
                                                                 the NIX function.

                                                                 [NIXTX_EN] must not be set simultaneously with [PF_FUNC_INST]. */
        uint64_t reserved_11_15        : 5;
        uint64_t cont_err              : 1;  /**< [ 10: 10](R/W) Continue on error.

                                                                 0 = When hardware or a CPT_LF_MISC_INT_W1S write sets any CPT_LF_MISC_INT
                                                                 bit, CPT clears CPT_LF_CTL[ENA].  Due to pipelining,
                                                                 additional instructions may have been processed between the instruction
                                                                 causing the error and the next instruction in the disabled queue (the
                                                                 instruction at CPT_LF_Q_INST_PTR). Note that clearing CPT_LF_CTL[ENA]
                                                                 will indirectly cause CPT_LF_MISC_INT[NQERR] to be set if instructions
                                                                 are still being enqueued.

                                                                 1 = Ignore errors and continue processing instructions. The exception to
                                                                 this rule is that CPT always clears CPT_LF_CTL[ENA] on a queue overflow
                                                                 error. CPT_LF_MISC_INT[NQERR] and CPT_LF_Q_SIZE[SIZE_DIV40] describe a
                                                                 queue overflow error. For diagnostic use only. */
        uint64_t pf_func_inst          : 1;  /**< [  9:  9](R/W) PFVF change allowed on instructions.

                                                                 0 = CPT executes all CPT_INST_S's in the queue within the function
                                                                 that owns the queue/LF (i.e. CPT_PRIV_LF()_CFG[PF_FUNC]). (But see SSO
                                                                 and NIX exceptions below).

                                                                 1 = CPT executes each CPT_INST_S in the queue within the function
                                                                 CPT_INST_S[RVU_PF_FUNC] selected by the instruction. This is
                                                                 used by the CPT queue that is performing NIX receive IPsec offload.

                                                                 See also CPT_AF_LF()_CTL2[SSO_PF_FUNC]. When [PF_FUNC_INST]=0 or
                                                                 CPT_AF_ECO[SSO_PF_FUNC_OVRD]=1, CPT uses CPT_AF_LF()_CTL2[SSO_PF_FUNC]
                                                                 to add work to SSO. When [PF_FUNC_INST]=1 and CPT_AF_ECO[SSO_PF_FUNC_OVRD]=0,
                                                                 CPT instead adds SSO work to the function CPT_INST_S[SSO_PF_FUNC/NIXTX_ADDR\<59:44\>]
                                                                 selected by the instruction.

                                                                 See also CPT_AF_LF()_CTL2[NIX_PF_FUNC]. [PF_FUNC_INST] has no effect on NIX
                                                                 TX descriptor transfer, as instructions can't transfer to NIX TX when
                                                                 [PF_FUNC_INST]=1.

                                                                 [PF_FUNC_INST] has no effect on the memory reads and writes needed to
                                                                 enqueue/dequeue the CPT_INST_S's themselves. CPT always uses the
                                                                 queue-owning function, i.e. CPT_PRIV_LF()_CFG[PF_FUNC], to enqueue/dequeue
                                                                 instructions.

                                                                 [PF_FUNC_INST] has no effect on microcode fetches. CPT always uses
                                                                 CPT_AF_PF_FUNC[PF_FUNC] to fetch microcode.

                                                                 [PF_FUNC_INST] must not be set simultaneously with [NIXTX_EN].

                                                                 [PF_FUNC_INST] must only be set for a CPT queue that receives CPT_INST_S's
                                                                 from a NIX RX - NIX RX fills CPT_INST_S[RVU_PF_FUNC,SSO_PF_FUNC/NIXTX_ADDR\<59:44\>]
                                                                 appropriately in the instructions it submits.  AP's must not add CPT_INST_S's to
                                                                 a queue with [PF_FUNC_INST]=1. See also [NIX_SEL] - when [PF_FUNC_INST]=1,
                                                                 [NIX_SEL] selects the NIX that CPT receives instructions from.
                                                                 No two queues can have [PF_FUNC_INST]=1 and the same [NIX_SEL] value. */
        uint64_t reserved_1_8          : 8;
        uint64_t pri                   : 1;  /**< [  0:  0](R/W) Queue priority.
                                                                 1 = This queue has higher priority. Round-robin between higher priority queues.
                                                                 0 = This queue has lower priority. Round-robin between lower priority queues.

                                                                 See also CPT_AF_EXE_REQ_TIMER[CNT]. */
#else /* Word 0 - Little Endian */
        uint64_t pri                   : 1;  /**< [  0:  0](R/W) Queue priority.
                                                                 1 = This queue has higher priority. Round-robin between higher priority queues.
                                                                 0 = This queue has lower priority. Round-robin between lower priority queues.

                                                                 See also CPT_AF_EXE_REQ_TIMER[CNT]. */
        uint64_t reserved_1_8          : 8;
        uint64_t pf_func_inst          : 1;  /**< [  9:  9](R/W) PFVF change allowed on instructions.

                                                                 0 = CPT executes all CPT_INST_S's in the queue within the function
                                                                 that owns the queue/LF (i.e. CPT_PRIV_LF()_CFG[PF_FUNC]). (But see SSO
                                                                 and NIX exceptions below).

                                                                 1 = CPT executes each CPT_INST_S in the queue within the function
                                                                 CPT_INST_S[RVU_PF_FUNC] selected by the instruction. This is
                                                                 used by the CPT queue that is performing NIX receive IPsec offload.

                                                                 See also CPT_AF_LF()_CTL2[SSO_PF_FUNC]. When [PF_FUNC_INST]=0 or
                                                                 CPT_AF_ECO[SSO_PF_FUNC_OVRD]=1, CPT uses CPT_AF_LF()_CTL2[SSO_PF_FUNC]
                                                                 to add work to SSO. When [PF_FUNC_INST]=1 and CPT_AF_ECO[SSO_PF_FUNC_OVRD]=0,
                                                                 CPT instead adds SSO work to the function CPT_INST_S[SSO_PF_FUNC/NIXTX_ADDR\<59:44\>]
                                                                 selected by the instruction.

                                                                 See also CPT_AF_LF()_CTL2[NIX_PF_FUNC]. [PF_FUNC_INST] has no effect on NIX
                                                                 TX descriptor transfer, as instructions can't transfer to NIX TX when
                                                                 [PF_FUNC_INST]=1.

                                                                 [PF_FUNC_INST] has no effect on the memory reads and writes needed to
                                                                 enqueue/dequeue the CPT_INST_S's themselves. CPT always uses the
                                                                 queue-owning function, i.e. CPT_PRIV_LF()_CFG[PF_FUNC], to enqueue/dequeue
                                                                 instructions.

                                                                 [PF_FUNC_INST] has no effect on microcode fetches. CPT always uses
                                                                 CPT_AF_PF_FUNC[PF_FUNC] to fetch microcode.

                                                                 [PF_FUNC_INST] must not be set simultaneously with [NIXTX_EN].

                                                                 [PF_FUNC_INST] must only be set for a CPT queue that receives CPT_INST_S's
                                                                 from a NIX RX - NIX RX fills CPT_INST_S[RVU_PF_FUNC,SSO_PF_FUNC/NIXTX_ADDR\<59:44\>]
                                                                 appropriately in the instructions it submits.  AP's must not add CPT_INST_S's to
                                                                 a queue with [PF_FUNC_INST]=1. See also [NIX_SEL] - when [PF_FUNC_INST]=1,
                                                                 [NIX_SEL] selects the NIX that CPT receives instructions from.
                                                                 No two queues can have [PF_FUNC_INST]=1 and the same [NIX_SEL] value. */
        uint64_t cont_err              : 1;  /**< [ 10: 10](R/W) Continue on error.

                                                                 0 = When hardware or a CPT_LF_MISC_INT_W1S write sets any CPT_LF_MISC_INT
                                                                 bit, CPT clears CPT_LF_CTL[ENA].  Due to pipelining,
                                                                 additional instructions may have been processed between the instruction
                                                                 causing the error and the next instruction in the disabled queue (the
                                                                 instruction at CPT_LF_Q_INST_PTR). Note that clearing CPT_LF_CTL[ENA]
                                                                 will indirectly cause CPT_LF_MISC_INT[NQERR] to be set if instructions
                                                                 are still being enqueued.

                                                                 1 = Ignore errors and continue processing instructions. The exception to
                                                                 this rule is that CPT always clears CPT_LF_CTL[ENA] on a queue overflow
                                                                 error. CPT_LF_MISC_INT[NQERR] and CPT_LF_Q_SIZE[SIZE_DIV40] describe a
                                                                 queue overflow error. For diagnostic use only. */
        uint64_t reserved_11_15        : 5;
        uint64_t nixtx_en              : 1;  /**< [ 16: 16](R/W) Enable CPT to pass the descriptor to NIX TX. Software must only set this when
                                                                 the function is allowed to enqueue descriptors via LMTSTs.

                                                                 0 = When CPT receives an instruction for the LF/queue with CPT_INST_S[NIXTXL]!=0x0, it
                                                                 sets CPT_LF_MISC_INT[NQERR], signals CPT_COMP_E::INSTERR, and will not pass a descriptor
                                                                 to NIX TX for the instruction.

                                                                 1 = When CPT receives an instruction for the LF/queue with CPT_INST_S[NIXTXL]!=0x0, it
                                                                 can execute the instruction, which may involve passing its descriptor to NIX TX.
                                                                 [NIX_SEL] selects the destination NIX, and CPT_AF_LF()_CTL2[NIX_PF_FUNC] selects
                                                                 the NIX function.

                                                                 [NIXTX_EN] must not be set simultaneously with [PF_FUNC_INST]. */
        uint64_t reserved_17_47        : 31;
        uint64_t grp                   : 8;  /**< [ 55: 48](R/W) Engine group mask. Each bit represents an engine group.

                                                                 If [GRP\<x\>]=0, CPT will discard all instructions with x=CPT_INST_S[EGRP].
                                                                 CPT sets CPT_LF_MISC_INT[NQERR] when this happens, and if CPT_AF_LF()_CTL[CONT_ERR]=0,
                                                                 also clears CPT_LF_CTL[ENA], necessitating an LF/queue reset.

                                                                 If [GRP\<x\>]=1, CPT can execute instructions with x=CPT_INST_S[EGRP].

                                                                 See also CPT_INST_S[EGRP] and CPT_AF_EXE()_CTL2[GRP_EN]. */
        uint64_t reserved_56_63        : 8;
#endif /* Word 0 - End */
    } cn96xxp1;
    /* struct bdk_cptx_af_lfx_ctl_s cn96xxp3; */
    /* struct bdk_cptx_af_lfx_ctl_s cn98xx; */
};
typedef union bdk_cptx_af_lfx_ctl bdk_cptx_af_lfx_ctl_t;

static inline uint64_t BDK_CPTX_AF_LFX_CTL(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_AF_LFX_CTL(unsigned long a, unsigned long b)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && ((a==0) && (b<=63)))
        return 0x8400a0027000ll + 0x10000000ll * ((a) & 0x0) + 8ll * ((b) & 0x3f);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && ((a<=1) && (b<=63)))
        return 0x8400a0027000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x3f);
    if (bdk_is_model(OCTEONTX_CN98XX) && ((a<=1) && (b<=63)))
        return 0x8400a0027000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x3f);
    __bdk_csr_fatal("CPTX_AF_LFX_CTL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_AF_LFX_CTL(a,b) bdk_cptx_af_lfx_ctl_t
#define bustype_BDK_CPTX_AF_LFX_CTL(a,b) BDK_CSR_TYPE_RVU_PF_BAR0
#define basename_BDK_CPTX_AF_LFX_CTL(a,b) "CPTX_AF_LFX_CTL"
#define device_bar_BDK_CPTX_AF_LFX_CTL(a,b) 0x0 /* RVU_BAR0 */
#define busnum_BDK_CPTX_AF_LFX_CTL(a,b) (a)
#define arguments_BDK_CPTX_AF_LFX_CTL(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_lf#_ctl2
 *
 * CPT Queue Control 2 Register
 * This register configures queues. This register should be written only when the
 * queue is execution-quiescent (see CPT_LF_INPROG[INFLIGHT]).
 */
union bdk_cptx_af_lfx_ctl2
{
    uint64_t u;
    struct bdk_cptx_af_lfx_ctl2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t nix_pf_func           : 16; /**< [ 63: 48](R/W) CPT transfers the NIX TX descriptor identified by CPT_INST_S[NIXTXL],
                                                                 CPT_INST_S[NIXTX_ADDR] to function [NIX_PF_FUNC] in NIX TX. [NIX_PF_FUNC]
                                                                 affects only the descriptor enqueue in NIX TX. CPT's reads of
                                                                 the descriptor from memory before transferring it to NIX TX are not subject to
                                                                 [NIX_PF_FUNC], same as all other CPT_INST_S execution.

                                                                 RVU_PF_FUNC_S describes the format of [NIX_PF_FUNC].

                                                                 See also CPT_AF_LF()_CTL[NIXTX_EN,NIX_SEL]. */
        uint64_t sso_pf_func           : 16; /**< [ 47: 32](R/W) CPT adds any work identified by CPT_INST_S[TAG,TT,GRP,WQE_PTR] to function
                                                                 [SSO_PF_FUNC] in SSO during normal operation. See CPT_AF_LF()_CTL[PF_FUNC_INST].
                                                                 The exception is that when CPT_AF_LF()_CTL[PF_FUNC_INST]=1 and
                                                                 CPT_AF_ECO[SSO_PF_FUNC_OVRD]=0, CPT instead adds the work to
                                                                 function CPT_INST_S[SSO_PF_FUNC/NIXTX_ADDR\<59:44\>].

                                                                 [SSO_PF_FUNC] affects only the add work to SSO. [SSO_PF_FUNC] does not affect
                                                                 any other CPT_INST_S execution.

                                                                 RVU_PF_FUNC_S describes the format of [SSO_PF_FUNC]. */
        uint64_t reserved_2_31         : 30;
        uint64_t exe_ldwb              : 1;  /**< [  1:  1](R/W) Execution engine load-don't-write-back.

                                                                 0 = An execution engine request to LDWB will be converted to NCB transient
                                                                 loads (LDT) towards the cache, which if the line hits and is dirty will cause
                                                                 the line to be written back before being replaced.

                                                                 1 = An execution engine may request a NCB LDWB read-and-invalidate command
                                                                 towards the cache; as a result the line will not be written back when replaced.
                                                                 This improves performance, but software must not read the instructions after
                                                                 they are posted to the hardware. */
        uint64_t exe_no_swap           : 1;  /**< [  0:  0](R/W) Execution units no byte swap. See the HRM endian section.
                                                                 0 = Execution unit read/writes have a byte-swap applied when accessing NCB.
                                                                 1 = Execution unit read/writes do not byte-swap. */
#else /* Word 0 - Little Endian */
        uint64_t exe_no_swap           : 1;  /**< [  0:  0](R/W) Execution units no byte swap. See the HRM endian section.
                                                                 0 = Execution unit read/writes have a byte-swap applied when accessing NCB.
                                                                 1 = Execution unit read/writes do not byte-swap. */
        uint64_t exe_ldwb              : 1;  /**< [  1:  1](R/W) Execution engine load-don't-write-back.

                                                                 0 = An execution engine request to LDWB will be converted to NCB transient
                                                                 loads (LDT) towards the cache, which if the line hits and is dirty will cause
                                                                 the line to be written back before being replaced.

                                                                 1 = An execution engine may request a NCB LDWB read-and-invalidate command
                                                                 towards the cache; as a result the line will not be written back when replaced.
                                                                 This improves performance, but software must not read the instructions after
                                                                 they are posted to the hardware. */
        uint64_t reserved_2_31         : 30;
        uint64_t sso_pf_func           : 16; /**< [ 47: 32](R/W) CPT adds any work identified by CPT_INST_S[TAG,TT,GRP,WQE_PTR] to function
                                                                 [SSO_PF_FUNC] in SSO during normal operation. See CPT_AF_LF()_CTL[PF_FUNC_INST].
                                                                 The exception is that when CPT_AF_LF()_CTL[PF_FUNC_INST]=1 and
                                                                 CPT_AF_ECO[SSO_PF_FUNC_OVRD]=0, CPT instead adds the work to
                                                                 function CPT_INST_S[SSO_PF_FUNC/NIXTX_ADDR\<59:44\>].

                                                                 [SSO_PF_FUNC] affects only the add work to SSO. [SSO_PF_FUNC] does not affect
                                                                 any other CPT_INST_S execution.

                                                                 RVU_PF_FUNC_S describes the format of [SSO_PF_FUNC]. */
        uint64_t nix_pf_func           : 16; /**< [ 63: 48](R/W) CPT transfers the NIX TX descriptor identified by CPT_INST_S[NIXTXL],
                                                                 CPT_INST_S[NIXTX_ADDR] to function [NIX_PF_FUNC] in NIX TX. [NIX_PF_FUNC]
                                                                 affects only the descriptor enqueue in NIX TX. CPT's reads of
                                                                 the descriptor from memory before transferring it to NIX TX are not subject to
                                                                 [NIX_PF_FUNC], same as all other CPT_INST_S execution.

                                                                 RVU_PF_FUNC_S describes the format of [NIX_PF_FUNC].

                                                                 See also CPT_AF_LF()_CTL[NIXTX_EN,NIX_SEL]. */
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_af_lfx_ctl2_s cn; */
};
typedef union bdk_cptx_af_lfx_ctl2 bdk_cptx_af_lfx_ctl2_t;

static inline uint64_t BDK_CPTX_AF_LFX_CTL2(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_AF_LFX_CTL2(unsigned long a, unsigned long b)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && ((a==0) && (b<=63)))
        return 0x8400a0029000ll + 0x10000000ll * ((a) & 0x0) + 8ll * ((b) & 0x3f);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && ((a<=1) && (b<=63)))
        return 0x8400a0029000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x3f);
    if (bdk_is_model(OCTEONTX_CN98XX) && ((a<=1) && (b<=63)))
        return 0x8400a0029000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x3f);
    __bdk_csr_fatal("CPTX_AF_LFX_CTL2", 2, a, b, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_AF_LFX_CTL2(a,b) bdk_cptx_af_lfx_ctl2_t
#define bustype_BDK_CPTX_AF_LFX_CTL2(a,b) BDK_CSR_TYPE_RVU_PF_BAR0
#define basename_BDK_CPTX_AF_LFX_CTL2(a,b) "CPTX_AF_LFX_CTL2"
#define device_bar_BDK_CPTX_AF_LFX_CTL2(a,b) 0x0 /* RVU_BAR0 */
#define busnum_BDK_CPTX_AF_LFX_CTL2(a,b) (a)
#define arguments_BDK_CPTX_AF_LFX_CTL2(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_lf#_ptr_ctl
 *
 * RVU Admin Function Pointer Control Register
 */
union bdk_cptx_af_lfx_ptr_ctl
{
    uint64_t u;
    struct bdk_cptx_af_lfx_ptr_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t inst_be               : 1;  /**< [  1:  1](R/W) 0 = CPT stores CPT_RES_S's and CPT_FC_WRITE_S's to memory in little-endian format.
                                                                 1 = CPT stores CPT_RES_S's and CPT_FC_WRITE_S's to memory in big-endian format.

                                                                 CPT treats CPT_RES_S's and CPT_FC_WRITE_S's as two separate 64-bit words, swapping
                                                                 only within each of the two 64-bit words when needed. */
        uint64_t iqb_ldwb              : 1;  /**< [  0:  0](R/W) Instruction load don't write back.

                                                                 0 = The hardware issues NCB transient load (LDT) towards the cache, which if the
                                                                 line hits and is dirty will cause the line to be written back before being
                                                                 replaced.

                                                                 1 = The hardware issues NCB LDWB read-and-invalidate command towards the cache
                                                                 when fetching the last word of instructions; as a result the line will not be
                                                                 written back when replaced.  This improves performance, but software must not
                                                                 read the instructions after they are posted to the hardware.

                                                                 Reads that do not consume the last word of a cache line always use LDI. */
#else /* Word 0 - Little Endian */
        uint64_t iqb_ldwb              : 1;  /**< [  0:  0](R/W) Instruction load don't write back.

                                                                 0 = The hardware issues NCB transient load (LDT) towards the cache, which if the
                                                                 line hits and is dirty will cause the line to be written back before being
                                                                 replaced.

                                                                 1 = The hardware issues NCB LDWB read-and-invalidate command towards the cache
                                                                 when fetching the last word of instructions; as a result the line will not be
                                                                 written back when replaced.  This improves performance, but software must not
                                                                 read the instructions after they are posted to the hardware.

                                                                 Reads that do not consume the last word of a cache line always use LDI. */
        uint64_t inst_be               : 1;  /**< [  1:  1](R/W) 0 = CPT stores CPT_RES_S's and CPT_FC_WRITE_S's to memory in little-endian format.
                                                                 1 = CPT stores CPT_RES_S's and CPT_FC_WRITE_S's to memory in big-endian format.

                                                                 CPT treats CPT_RES_S's and CPT_FC_WRITE_S's as two separate 64-bit words, swapping
                                                                 only within each of the two 64-bit words when needed. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_af_lfx_ptr_ctl_s cn; */
};
typedef union bdk_cptx_af_lfx_ptr_ctl bdk_cptx_af_lfx_ptr_ctl_t;

static inline uint64_t BDK_CPTX_AF_LFX_PTR_CTL(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_AF_LFX_PTR_CTL(unsigned long a, unsigned long b)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && ((a==0) && (b<=63)))
        return 0x8400a002c000ll + 0x10000000ll * ((a) & 0x0) + 8ll * ((b) & 0x3f);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && ((a<=1) && (b<=63)))
        return 0x8400a002c000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x3f);
    if (bdk_is_model(OCTEONTX_CN98XX) && ((a<=1) && (b<=63)))
        return 0x8400a002c000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x3f);
    __bdk_csr_fatal("CPTX_AF_LFX_PTR_CTL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_AF_LFX_PTR_CTL(a,b) bdk_cptx_af_lfx_ptr_ctl_t
#define bustype_BDK_CPTX_AF_LFX_PTR_CTL(a,b) BDK_CSR_TYPE_RVU_PF_BAR0
#define basename_BDK_CPTX_AF_LFX_PTR_CTL(a,b) "CPTX_AF_LFX_PTR_CTL"
#define device_bar_BDK_CPTX_AF_LFX_PTR_CTL(a,b) 0x0 /* RVU_BAR0 */
#define busnum_BDK_CPTX_AF_LFX_PTR_CTL(a,b) (a)
#define arguments_BDK_CPTX_AF_LFX_PTR_CTL(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_lf_rst
 *
 * CPT AF LF Reset Register
 */
union bdk_cptx_af_lf_rst
{
    uint64_t u;
    struct bdk_cptx_af_lf_rst_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_13_63        : 51;
        uint64_t exec                  : 1;  /**< [ 12: 12](R/W1S/H) Execute LF software-initiated reset. When software writes a one to set this bit, hardware
                                                                 resets the local function selected by [LF]. Hardware clears this bit when
                                                                 done.

                                                                 Internal:
                                                                 This comment applies to all blocks that refer to this register:

                                                                 This should preferrably reset all registers/state associated with the LF, including
                                                                 any BLK_LF_* and BLK_AF_LF()_* registers. It would also be nice to reset any per-LF
                                                                 bits in other registers but its OK to have exceptions as long as the AF software has
                                                                 another way to reset them, e.g. by writing to the bits. Such additional steps
                                                                 expected from software should be documented in the HRM, e.g. in section 19.11.5
                                                                 "VF Function Level Reset". */
        uint64_t reserved_8_11         : 4;
        uint64_t lf                    : 8;  /**< [  7:  0](R/W) Local function that is reset when [EXEC] is set. */
#else /* Word 0 - Little Endian */
        uint64_t lf                    : 8;  /**< [  7:  0](R/W) Local function that is reset when [EXEC] is set. */
        uint64_t reserved_8_11         : 4;
        uint64_t exec                  : 1;  /**< [ 12: 12](R/W1S/H) Execute LF software-initiated reset. When software writes a one to set this bit, hardware
                                                                 resets the local function selected by [LF]. Hardware clears this bit when
                                                                 done.

                                                                 Internal:
                                                                 This comment applies to all blocks that refer to this register:

                                                                 This should preferrably reset all registers/state associated with the LF, including
                                                                 any BLK_LF_* and BLK_AF_LF()_* registers. It would also be nice to reset any per-LF
                                                                 bits in other registers but its OK to have exceptions as long as the AF software has
                                                                 another way to reset them, e.g. by writing to the bits. Such additional steps
                                                                 expected from software should be documented in the HRM, e.g. in section 19.11.5
                                                                 "VF Function Level Reset". */
        uint64_t reserved_13_63        : 51;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_af_lf_rst_s cn; */
};
typedef union bdk_cptx_af_lf_rst bdk_cptx_af_lf_rst_t;

static inline uint64_t BDK_CPTX_AF_LF_RST(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_AF_LF_RST(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && (a==0))
        return 0x8400a0044000ll + 0x10000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && (a<=1))
        return 0x8400a0044000ll + 0x10000000ll * ((a) & 0x1);
    if (bdk_is_model(OCTEONTX_CN98XX) && (a<=1))
        return 0x8400a0044000ll + 0x10000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_AF_LF_RST", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_AF_LF_RST(a) bdk_cptx_af_lf_rst_t
#define bustype_BDK_CPTX_AF_LF_RST(a) BDK_CSR_TYPE_RVU_PF_BAR0
#define basename_BDK_CPTX_AF_LF_RST(a) "CPTX_AF_LF_RST"
#define device_bar_BDK_CPTX_AF_LF_RST(a) 0x0 /* RVU_BAR0 */
#define busnum_BDK_CPTX_AF_LF_RST(a) (a)
#define arguments_BDK_CPTX_AF_LF_RST(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_pf_func
 *
 * RVU Admin Function PF FUNC Register
 */
union bdk_cptx_af_pf_func
{
    uint64_t u;
    struct bdk_cptx_af_pf_func_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t pf_func               : 16; /**< [ 15:  0](R/W) PF FUNC used for microcode fetches.

                                                                 RVU_PF_FUNC_S describes the format of [PF_FUNC]. */
#else /* Word 0 - Little Endian */
        uint64_t pf_func               : 16; /**< [ 15:  0](R/W) PF FUNC used for microcode fetches.

                                                                 RVU_PF_FUNC_S describes the format of [PF_FUNC]. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_af_pf_func_s cn; */
};
typedef union bdk_cptx_af_pf_func bdk_cptx_af_pf_func_t;

static inline uint64_t BDK_CPTX_AF_PF_FUNC(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_AF_PF_FUNC(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && (a==0))
        return 0x8400a002b000ll + 0x10000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && (a<=1))
        return 0x8400a002b000ll + 0x10000000ll * ((a) & 0x1);
    if (bdk_is_model(OCTEONTX_CN98XX) && (a<=1))
        return 0x8400a002b000ll + 0x10000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_AF_PF_FUNC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_AF_PF_FUNC(a) bdk_cptx_af_pf_func_t
#define bustype_BDK_CPTX_AF_PF_FUNC(a) BDK_CSR_TYPE_RVU_PF_BAR0
#define basename_BDK_CPTX_AF_PF_FUNC(a) "CPTX_AF_PF_FUNC"
#define device_bar_BDK_CPTX_AF_PF_FUNC(a) 0x0 /* RVU_BAR0 */
#define busnum_BDK_CPTX_AF_PF_FUNC(a) (a)
#define arguments_BDK_CPTX_AF_PF_FUNC(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_psn#_exe
 *
 * CPT AF EXE Poison Registers
 */
union bdk_cptx_af_psnx_exe
{
    uint64_t u;
    struct bdk_cptx_af_psnx_exe_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t exe                   : 64; /**< [ 63:  0](R/W1C/H) "One bit per engine. CPT sets the bit when the
                                                                 when the corresponding engine receives poisoned data
                                                                 during a read. The read may be for either microcode
                                                                 or any CPT_INST_S[DPTR,RPTR,CPTR]-based reads.

                                                                 _ CPT_AF_PSN(0)_EXE[EXE] - engine(63..0).
                                                                 _ CPT_AF_PSN(1)_EXE[EXE] - engine(127..64).

                                                                 Only the following bit indices are supported:
                                                                 _    0    .. #SE-1         = the SEs.
                                                                 _   #SE   .. #SE+#IE-1     = the IEs.
                                                                 _ #SE+#IE .. #SE+#IE+#AE-1 = the AEs.
                                                                 _ where #SE,#IE,#AE = CPT_AF_CONSTANTS1[SE,IE,AE]. Software must zero
                                                                 nonsupported bit indices.

                                                                 CPT sets [EXE] bits regardless of the CPT_AF_CTL[RD_PSN_IGN] value.

                                                                 When CPT sets an [EXE] bit, it also sets the CPT_AF_RAS_INT[LD_DAT_PSN]
                                                                 bit, which can cause an interrupt. When CPT sets an [EXE] bit, it will
                                                                 also set the CPT_AF_PSN()_LF[LF] bit for the LF the engine was working for
                                                                 after the engine finishes the instruction.

                                                                 When CPT sets an [EXE] bit due to a microcode fetch and CPT_AF_CTL[RD_PSN_IGN]=0,
                                                                 it also later sets the CPT_AF_FLT()_INT[EXE] and CPT_LF_MISC_INT[HWERR] bits for
                                                                 the LF the engine was working for, and if CPT_AF_LF()_CTL[CONT_ERR]=0,
                                                                 also clears CPT_LF_CTL[ENA], necessitating an LF/queue reset.

                                                                 When CPT sets an [EXE] bit and CPT_AF_CTL[RD_PSN_IGN]=1, the engine microcode
                                                                 may (or may not) be corrupted, and the [EXE] bit may be the only way to
                                                                 determine which engine is potentially corrupted. Therefore it may be
                                                                 appropriate for software to disable and reset the corresponding engine based
                                                                 solely on an [EXE] bit when CPT_AF_CTL[RD_PSN_IGN]=1. When CPT_AF_CTL[RD_PSN_IGN]=0,
                                                                 the engine need only be reset when the corresponding CPT_AF_FLT()_INT[EXE]
                                                                 bit is set." */
#else /* Word 0 - Little Endian */
        uint64_t exe                   : 64; /**< [ 63:  0](R/W1C/H) "One bit per engine. CPT sets the bit when the
                                                                 when the corresponding engine receives poisoned data
                                                                 during a read. The read may be for either microcode
                                                                 or any CPT_INST_S[DPTR,RPTR,CPTR]-based reads.

                                                                 _ CPT_AF_PSN(0)_EXE[EXE] - engine(63..0).
                                                                 _ CPT_AF_PSN(1)_EXE[EXE] - engine(127..64).

                                                                 Only the following bit indices are supported:
                                                                 _    0    .. #SE-1         = the SEs.
                                                                 _   #SE   .. #SE+#IE-1     = the IEs.
                                                                 _ #SE+#IE .. #SE+#IE+#AE-1 = the AEs.
                                                                 _ where #SE,#IE,#AE = CPT_AF_CONSTANTS1[SE,IE,AE]. Software must zero
                                                                 nonsupported bit indices.

                                                                 CPT sets [EXE] bits regardless of the CPT_AF_CTL[RD_PSN_IGN] value.

                                                                 When CPT sets an [EXE] bit, it also sets the CPT_AF_RAS_INT[LD_DAT_PSN]
                                                                 bit, which can cause an interrupt. When CPT sets an [EXE] bit, it will
                                                                 also set the CPT_AF_PSN()_LF[LF] bit for the LF the engine was working for
                                                                 after the engine finishes the instruction.

                                                                 When CPT sets an [EXE] bit due to a microcode fetch and CPT_AF_CTL[RD_PSN_IGN]=0,
                                                                 it also later sets the CPT_AF_FLT()_INT[EXE] and CPT_LF_MISC_INT[HWERR] bits for
                                                                 the LF the engine was working for, and if CPT_AF_LF()_CTL[CONT_ERR]=0,
                                                                 also clears CPT_LF_CTL[ENA], necessitating an LF/queue reset.

                                                                 When CPT sets an [EXE] bit and CPT_AF_CTL[RD_PSN_IGN]=1, the engine microcode
                                                                 may (or may not) be corrupted, and the [EXE] bit may be the only way to
                                                                 determine which engine is potentially corrupted. Therefore it may be
                                                                 appropriate for software to disable and reset the corresponding engine based
                                                                 solely on an [EXE] bit when CPT_AF_CTL[RD_PSN_IGN]=1. When CPT_AF_CTL[RD_PSN_IGN]=0,
                                                                 the engine need only be reset when the corresponding CPT_AF_FLT()_INT[EXE]
                                                                 bit is set." */
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_af_psnx_exe_s cn; */
};
typedef union bdk_cptx_af_psnx_exe bdk_cptx_af_psnx_exe_t;

static inline uint64_t BDK_CPTX_AF_PSNX_EXE(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_AF_PSNX_EXE(unsigned long a, unsigned long b)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && ((a==0) && (b<=1)))
        return 0x8400a000e000ll + 0x10000000ll * ((a) & 0x0) + 8ll * ((b) & 0x1);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && ((a<=1) && (b<=1)))
        return 0x8400a000e000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    if (bdk_is_model(OCTEONTX_CN98XX) && ((a<=1) && (b<=1)))
        return 0x8400a000e000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    __bdk_csr_fatal("CPTX_AF_PSNX_EXE", 2, a, b, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_AF_PSNX_EXE(a,b) bdk_cptx_af_psnx_exe_t
#define bustype_BDK_CPTX_AF_PSNX_EXE(a,b) BDK_CSR_TYPE_RVU_PF_BAR0
#define basename_BDK_CPTX_AF_PSNX_EXE(a,b) "CPTX_AF_PSNX_EXE"
#define device_bar_BDK_CPTX_AF_PSNX_EXE(a,b) 0x0 /* RVU_BAR0 */
#define busnum_BDK_CPTX_AF_PSNX_EXE(a,b) (a)
#define arguments_BDK_CPTX_AF_PSNX_EXE(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_psn#_exe_w1s
 *
 * CPT AF EXE Poison Set Registers
 * This register reads or sets bits.
 */
union bdk_cptx_af_psnx_exe_w1s
{
    uint64_t u;
    struct bdk_cptx_af_psnx_exe_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t exe                   : 64; /**< [ 63:  0](R/W1S/H) Reads or sets CPT_AF_PSN(0..1)_EXE[EXE]. */
#else /* Word 0 - Little Endian */
        uint64_t exe                   : 64; /**< [ 63:  0](R/W1S/H) Reads or sets CPT_AF_PSN(0..1)_EXE[EXE]. */
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_af_psnx_exe_w1s_s cn; */
};
typedef union bdk_cptx_af_psnx_exe_w1s bdk_cptx_af_psnx_exe_w1s_t;

static inline uint64_t BDK_CPTX_AF_PSNX_EXE_W1S(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_AF_PSNX_EXE_W1S(unsigned long a, unsigned long b)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && ((a==0) && (b<=1)))
        return 0x8400a000f000ll + 0x10000000ll * ((a) & 0x0) + 8ll * ((b) & 0x1);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && ((a<=1) && (b<=1)))
        return 0x8400a000f000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    if (bdk_is_model(OCTEONTX_CN98XX) && ((a<=1) && (b<=1)))
        return 0x8400a000f000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    __bdk_csr_fatal("CPTX_AF_PSNX_EXE_W1S", 2, a, b, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_AF_PSNX_EXE_W1S(a,b) bdk_cptx_af_psnx_exe_w1s_t
#define bustype_BDK_CPTX_AF_PSNX_EXE_W1S(a,b) BDK_CSR_TYPE_RVU_PF_BAR0
#define basename_BDK_CPTX_AF_PSNX_EXE_W1S(a,b) "CPTX_AF_PSNX_EXE_W1S"
#define device_bar_BDK_CPTX_AF_PSNX_EXE_W1S(a,b) 0x0 /* RVU_BAR0 */
#define busnum_BDK_CPTX_AF_PSNX_EXE_W1S(a,b) (a)
#define arguments_BDK_CPTX_AF_PSNX_EXE_W1S(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_psn#_lf
 *
 * CPT AF LF Poison Registers
 */
union bdk_cptx_af_psnx_lf
{
    uint64_t u;
    struct bdk_cptx_af_psnx_lf_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t lf                    : 64; /**< [ 63:  0](R/W1C/H) One bit per LF. CPT sets the bit when it receives poisoned data while
                                                                 fetching something for the LF. This fetch could be an engine microcode read,
                                                                 CPT_INST_S[DPTR,RPTR,CPTR]-based data for the engine, or a CPT_INST_S/CPT_INST_S[EGRP]
                                                                 memory queue read.

                                                                 CPT sets [LF] bits regardless of the CPT_AF_CTL[RD_PSN_IGN] value.

                                                                 When CPT sets an [LF] bit, it also sets one of the CPT_AF_RAS_INT[LD_DAT_PSN,LD_CMD_PSN]
                                                                 bits, which can cause an interrupt. If an engine fetch caused CPT to set the [LF] bit,
                                                                 CPT will also have previously set the CPT_AF_PSN()_EXE[EXE] bit for the engine.

                                                                 When CPT sets an [LF] bit and CPT_AF_CTL[RD_PSN_IGN]=0, it also
                                                                 sets at least one of the corresponding CPT_LF_MISC_INT[FAULT,HWERR,IRDE] bits, and
                                                                 if CPT_AF_LF()_CTL[CONT_ERR]=0, also clears CPT_LF_CTL[ENA],
                                                                 necessitating an LF/queue reset. */
#else /* Word 0 - Little Endian */
        uint64_t lf                    : 64; /**< [ 63:  0](R/W1C/H) One bit per LF. CPT sets the bit when it receives poisoned data while
                                                                 fetching something for the LF. This fetch could be an engine microcode read,
                                                                 CPT_INST_S[DPTR,RPTR,CPTR]-based data for the engine, or a CPT_INST_S/CPT_INST_S[EGRP]
                                                                 memory queue read.

                                                                 CPT sets [LF] bits regardless of the CPT_AF_CTL[RD_PSN_IGN] value.

                                                                 When CPT sets an [LF] bit, it also sets one of the CPT_AF_RAS_INT[LD_DAT_PSN,LD_CMD_PSN]
                                                                 bits, which can cause an interrupt. If an engine fetch caused CPT to set the [LF] bit,
                                                                 CPT will also have previously set the CPT_AF_PSN()_EXE[EXE] bit for the engine.

                                                                 When CPT sets an [LF] bit and CPT_AF_CTL[RD_PSN_IGN]=0, it also
                                                                 sets at least one of the corresponding CPT_LF_MISC_INT[FAULT,HWERR,IRDE] bits, and
                                                                 if CPT_AF_LF()_CTL[CONT_ERR]=0, also clears CPT_LF_CTL[ENA],
                                                                 necessitating an LF/queue reset. */
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_af_psnx_lf_s cn; */
};
typedef union bdk_cptx_af_psnx_lf bdk_cptx_af_psnx_lf_t;

static inline uint64_t BDK_CPTX_AF_PSNX_LF(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_AF_PSNX_LF(unsigned long a, unsigned long b)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && ((a==0) && (b==0)))
        return 0x8400a0010000ll + 0x10000000ll * ((a) & 0x0) + 8ll * ((b) & 0x0);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && ((a<=1) && (b==0)))
        return 0x8400a0010000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x0);
    if (bdk_is_model(OCTEONTX_CN98XX) && ((a<=1) && (b==0)))
        return 0x8400a0010000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x0);
    __bdk_csr_fatal("CPTX_AF_PSNX_LF", 2, a, b, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_AF_PSNX_LF(a,b) bdk_cptx_af_psnx_lf_t
#define bustype_BDK_CPTX_AF_PSNX_LF(a,b) BDK_CSR_TYPE_RVU_PF_BAR0
#define basename_BDK_CPTX_AF_PSNX_LF(a,b) "CPTX_AF_PSNX_LF"
#define device_bar_BDK_CPTX_AF_PSNX_LF(a,b) 0x0 /* RVU_BAR0 */
#define busnum_BDK_CPTX_AF_PSNX_LF(a,b) (a)
#define arguments_BDK_CPTX_AF_PSNX_LF(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_psn#_lf_w1s
 *
 * CPT AF LF Poison Set Registers
 * This register reads or sets bits.
 */
union bdk_cptx_af_psnx_lf_w1s
{
    uint64_t u;
    struct bdk_cptx_af_psnx_lf_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t lf                    : 64; /**< [ 63:  0](R/W1S/H) Reads or sets CPT_AF_PSN(0)_LF[LF]. */
#else /* Word 0 - Little Endian */
        uint64_t lf                    : 64; /**< [ 63:  0](R/W1S/H) Reads or sets CPT_AF_PSN(0)_LF[LF]. */
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_af_psnx_lf_w1s_s cn; */
};
typedef union bdk_cptx_af_psnx_lf_w1s bdk_cptx_af_psnx_lf_w1s_t;

static inline uint64_t BDK_CPTX_AF_PSNX_LF_W1S(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_AF_PSNX_LF_W1S(unsigned long a, unsigned long b)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && ((a==0) && (b==0)))
        return 0x8400a0011000ll + 0x10000000ll * ((a) & 0x0) + 8ll * ((b) & 0x0);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && ((a<=1) && (b==0)))
        return 0x8400a0011000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x0);
    if (bdk_is_model(OCTEONTX_CN98XX) && ((a<=1) && (b==0)))
        return 0x8400a0011000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x0);
    __bdk_csr_fatal("CPTX_AF_PSNX_LF_W1S", 2, a, b, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_AF_PSNX_LF_W1S(a,b) bdk_cptx_af_psnx_lf_w1s_t
#define bustype_BDK_CPTX_AF_PSNX_LF_W1S(a,b) BDK_CSR_TYPE_RVU_PF_BAR0
#define basename_BDK_CPTX_AF_PSNX_LF_W1S(a,b) "CPTX_AF_PSNX_LF_W1S"
#define device_bar_BDK_CPTX_AF_PSNX_LF_W1S(a,b) 0x0 /* RVU_BAR0 */
#define busnum_BDK_CPTX_AF_PSNX_LF_W1S(a,b) (a)
#define arguments_BDK_CPTX_AF_PSNX_LF_W1S(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_ras_int
 *
 * CPT AF RAS Interrupt Register
 * This register contains RAS interrupt bits.
 */
union bdk_cptx_af_ras_int
{
    uint64_t u;
    struct bdk_cptx_af_ras_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t ld_dat_psn            : 1;  /**< [  1:  1](R/W1C/H) Set when CPT receives poisoned data in a read response initiated by an engine.
                                                                 CPT will have set a CPT_AF_PSN()_EXE bit. When the engine completes the
                                                                 CPT_INST_S, CPT will also set a corresponding CPT_AF_PSN()_LF[LF] bit.

                                                                 CPT sets [LD_DAT_PSN] regardless of the CPT_AF_CTL[RD_PSN_IGN] setting. */
        uint64_t ld_cmd_psn            : 1;  /**< [  0:  0](R/W1C/H) Set when CPT receives poisoned data reading a CPT_INST_S/CPT_INST_S[EGRP]
                                                                 memory queue or a NIX TX descriptor. CPT will have also set a CPT_AF_PSN()_LF[LF]
                                                                 bit.

                                                                 CPT sets [LD_CMD_PSN] regardless of the CPT_AF_CTL[RD_PSN_IGN] setting. */
#else /* Word 0 - Little Endian */
        uint64_t ld_cmd_psn            : 1;  /**< [  0:  0](R/W1C/H) Set when CPT receives poisoned data reading a CPT_INST_S/CPT_INST_S[EGRP]
                                                                 memory queue or a NIX TX descriptor. CPT will have also set a CPT_AF_PSN()_LF[LF]
                                                                 bit.

                                                                 CPT sets [LD_CMD_PSN] regardless of the CPT_AF_CTL[RD_PSN_IGN] setting. */
        uint64_t ld_dat_psn            : 1;  /**< [  1:  1](R/W1C/H) Set when CPT receives poisoned data in a read response initiated by an engine.
                                                                 CPT will have set a CPT_AF_PSN()_EXE bit. When the engine completes the
                                                                 CPT_INST_S, CPT will also set a corresponding CPT_AF_PSN()_LF[LF] bit.

                                                                 CPT sets [LD_DAT_PSN] regardless of the CPT_AF_CTL[RD_PSN_IGN] setting. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_af_ras_int_s cn; */
};
typedef union bdk_cptx_af_ras_int bdk_cptx_af_ras_int_t;

static inline uint64_t BDK_CPTX_AF_RAS_INT(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_AF_RAS_INT(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && (a==0))
        return 0x8400a0047020ll + 0x10000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && (a<=1))
        return 0x8400a0047020ll + 0x10000000ll * ((a) & 0x1);
    if (bdk_is_model(OCTEONTX_CN98XX) && (a<=1))
        return 0x8400a0047020ll + 0x10000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_AF_RAS_INT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_AF_RAS_INT(a) bdk_cptx_af_ras_int_t
#define bustype_BDK_CPTX_AF_RAS_INT(a) BDK_CSR_TYPE_RVU_PF_BAR0
#define basename_BDK_CPTX_AF_RAS_INT(a) "CPTX_AF_RAS_INT"
#define device_bar_BDK_CPTX_AF_RAS_INT(a) 0x0 /* RVU_BAR0 */
#define busnum_BDK_CPTX_AF_RAS_INT(a) (a)
#define arguments_BDK_CPTX_AF_RAS_INT(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_ras_int_ena_w1c
 *
 * CPT AF RAS Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union bdk_cptx_af_ras_int_ena_w1c
{
    uint64_t u;
    struct bdk_cptx_af_ras_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t ld_dat_psn            : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for CPT_AF_RAS_INT[LD_DAT_PSN]. */
        uint64_t ld_cmd_psn            : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for CPT_AF_RAS_INT[LD_CMD_PSN]. */
#else /* Word 0 - Little Endian */
        uint64_t ld_cmd_psn            : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for CPT_AF_RAS_INT[LD_CMD_PSN]. */
        uint64_t ld_dat_psn            : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for CPT_AF_RAS_INT[LD_DAT_PSN]. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_af_ras_int_ena_w1c_s cn; */
};
typedef union bdk_cptx_af_ras_int_ena_w1c bdk_cptx_af_ras_int_ena_w1c_t;

static inline uint64_t BDK_CPTX_AF_RAS_INT_ENA_W1C(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_AF_RAS_INT_ENA_W1C(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && (a==0))
        return 0x8400a0047038ll + 0x10000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && (a<=1))
        return 0x8400a0047038ll + 0x10000000ll * ((a) & 0x1);
    if (bdk_is_model(OCTEONTX_CN98XX) && (a<=1))
        return 0x8400a0047038ll + 0x10000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_AF_RAS_INT_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_AF_RAS_INT_ENA_W1C(a) bdk_cptx_af_ras_int_ena_w1c_t
#define bustype_BDK_CPTX_AF_RAS_INT_ENA_W1C(a) BDK_CSR_TYPE_RVU_PF_BAR0
#define basename_BDK_CPTX_AF_RAS_INT_ENA_W1C(a) "CPTX_AF_RAS_INT_ENA_W1C"
#define device_bar_BDK_CPTX_AF_RAS_INT_ENA_W1C(a) 0x0 /* RVU_BAR0 */
#define busnum_BDK_CPTX_AF_RAS_INT_ENA_W1C(a) (a)
#define arguments_BDK_CPTX_AF_RAS_INT_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_ras_int_ena_w1s
 *
 * CPT AF RAS Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union bdk_cptx_af_ras_int_ena_w1s
{
    uint64_t u;
    struct bdk_cptx_af_ras_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t ld_dat_psn            : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for CPT_AF_RAS_INT[LD_DAT_PSN]. */
        uint64_t ld_cmd_psn            : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for CPT_AF_RAS_INT[LD_CMD_PSN]. */
#else /* Word 0 - Little Endian */
        uint64_t ld_cmd_psn            : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for CPT_AF_RAS_INT[LD_CMD_PSN]. */
        uint64_t ld_dat_psn            : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for CPT_AF_RAS_INT[LD_DAT_PSN]. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_af_ras_int_ena_w1s_s cn; */
};
typedef union bdk_cptx_af_ras_int_ena_w1s bdk_cptx_af_ras_int_ena_w1s_t;

static inline uint64_t BDK_CPTX_AF_RAS_INT_ENA_W1S(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_AF_RAS_INT_ENA_W1S(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && (a==0))
        return 0x8400a0047030ll + 0x10000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && (a<=1))
        return 0x8400a0047030ll + 0x10000000ll * ((a) & 0x1);
    if (bdk_is_model(OCTEONTX_CN98XX) && (a<=1))
        return 0x8400a0047030ll + 0x10000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_AF_RAS_INT_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_AF_RAS_INT_ENA_W1S(a) bdk_cptx_af_ras_int_ena_w1s_t
#define bustype_BDK_CPTX_AF_RAS_INT_ENA_W1S(a) BDK_CSR_TYPE_RVU_PF_BAR0
#define basename_BDK_CPTX_AF_RAS_INT_ENA_W1S(a) "CPTX_AF_RAS_INT_ENA_W1S"
#define device_bar_BDK_CPTX_AF_RAS_INT_ENA_W1S(a) 0x0 /* RVU_BAR0 */
#define busnum_BDK_CPTX_AF_RAS_INT_ENA_W1S(a) (a)
#define arguments_BDK_CPTX_AF_RAS_INT_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_ras_int_w1s
 *
 * CPT AF RAS Interrupt Set Register
 * This register sets interrupt bits.
 */
union bdk_cptx_af_ras_int_w1s
{
    uint64_t u;
    struct bdk_cptx_af_ras_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t ld_dat_psn            : 1;  /**< [  1:  1](R/W1S/H) Reads or sets CPT_AF_RAS_INT[LD_DAT_PSN]. */
        uint64_t ld_cmd_psn            : 1;  /**< [  0:  0](R/W1S/H) Reads or sets CPT_AF_RAS_INT[LD_CMD_PSN]. */
#else /* Word 0 - Little Endian */
        uint64_t ld_cmd_psn            : 1;  /**< [  0:  0](R/W1S/H) Reads or sets CPT_AF_RAS_INT[LD_CMD_PSN]. */
        uint64_t ld_dat_psn            : 1;  /**< [  1:  1](R/W1S/H) Reads or sets CPT_AF_RAS_INT[LD_DAT_PSN]. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_af_ras_int_w1s_s cn; */
};
typedef union bdk_cptx_af_ras_int_w1s bdk_cptx_af_ras_int_w1s_t;

static inline uint64_t BDK_CPTX_AF_RAS_INT_W1S(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_AF_RAS_INT_W1S(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && (a==0))
        return 0x8400a0047028ll + 0x10000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && (a<=1))
        return 0x8400a0047028ll + 0x10000000ll * ((a) & 0x1);
    if (bdk_is_model(OCTEONTX_CN98XX) && (a<=1))
        return 0x8400a0047028ll + 0x10000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_AF_RAS_INT_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_AF_RAS_INT_W1S(a) bdk_cptx_af_ras_int_w1s_t
#define bustype_BDK_CPTX_AF_RAS_INT_W1S(a) BDK_CSR_TYPE_RVU_PF_BAR0
#define basename_BDK_CPTX_AF_RAS_INT_W1S(a) "CPTX_AF_RAS_INT_W1S"
#define device_bar_BDK_CPTX_AF_RAS_INT_W1S(a) 0x0 /* RVU_BAR0 */
#define busnum_BDK_CPTX_AF_RAS_INT_W1S(a) (a)
#define arguments_BDK_CPTX_AF_RAS_INT_W1S(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_rd_latency_pc
 *
 * CPT AF Read Latency Counter Register
 */
union bdk_cptx_af_rd_latency_pc
{
    uint64_t u;
    struct bdk_cptx_af_rd_latency_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Number of cycles waiting for NCB read returns. Incremented every
                                                                 coprocessor-clock by the number of transactions outstanding in that cycle. This
                                                                 may be divided by CPT_AF_RD_REQ_PC to determine the average read latency. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Number of cycles waiting for NCB read returns. Incremented every
                                                                 coprocessor-clock by the number of transactions outstanding in that cycle. This
                                                                 may be divided by CPT_AF_RD_REQ_PC to determine the average read latency. */
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_af_rd_latency_pc_s cn; */
};
typedef union bdk_cptx_af_rd_latency_pc bdk_cptx_af_rd_latency_pc_t;

static inline uint64_t BDK_CPTX_AF_RD_LATENCY_PC(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_AF_RD_LATENCY_PC(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && (a==0))
        return 0x8400a001a000ll + 0x10000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && (a<=1))
        return 0x8400a001a000ll + 0x10000000ll * ((a) & 0x1);
    if (bdk_is_model(OCTEONTX_CN98XX) && (a<=1))
        return 0x8400a001a000ll + 0x10000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_AF_RD_LATENCY_PC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_AF_RD_LATENCY_PC(a) bdk_cptx_af_rd_latency_pc_t
#define bustype_BDK_CPTX_AF_RD_LATENCY_PC(a) BDK_CSR_TYPE_RVU_PF_BAR0
#define basename_BDK_CPTX_AF_RD_LATENCY_PC(a) "CPTX_AF_RD_LATENCY_PC"
#define device_bar_BDK_CPTX_AF_RD_LATENCY_PC(a) 0x0 /* RVU_BAR0 */
#define busnum_BDK_CPTX_AF_RD_LATENCY_PC(a) (a)
#define arguments_BDK_CPTX_AF_RD_LATENCY_PC(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_rd_req_pc
 *
 * CPT AF Read Request Performance Counter Register
 */
union bdk_cptx_af_rd_req_pc
{
    uint64_t u;
    struct bdk_cptx_af_rd_req_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Number of NCB read requests. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Number of NCB read requests. */
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_af_rd_req_pc_s cn; */
};
typedef union bdk_cptx_af_rd_req_pc bdk_cptx_af_rd_req_pc_t;

static inline uint64_t BDK_CPTX_AF_RD_REQ_PC(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_AF_RD_REQ_PC(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && (a==0))
        return 0x8400a0019000ll + 0x10000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && (a<=1))
        return 0x8400a0019000ll + 0x10000000ll * ((a) & 0x1);
    if (bdk_is_model(OCTEONTX_CN98XX) && (a<=1))
        return 0x8400a0019000ll + 0x10000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_AF_RD_REQ_PC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_AF_RD_REQ_PC(a) bdk_cptx_af_rd_req_pc_t
#define bustype_BDK_CPTX_AF_RD_REQ_PC(a) BDK_CSR_TYPE_RVU_PF_BAR0
#define basename_BDK_CPTX_AF_RD_REQ_PC(a) "CPTX_AF_RD_REQ_PC"
#define device_bar_BDK_CPTX_AF_RD_REQ_PC(a) 0x0 /* RVU_BAR0 */
#define busnum_BDK_CPTX_AF_RD_REQ_PC(a) (a)
#define arguments_BDK_CPTX_AF_RD_REQ_PC(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_rd_uc_pc
 *
 * CPT AF Read Microcode Performance Counter Register
 */
union bdk_cptx_af_rd_uc_pc
{
    uint64_t u;
    struct bdk_cptx_af_rd_uc_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Number of NCB read requests caused by are microcode fills. Microcode fills also
                                                                 increment CPT_AF_RD_REQ_PC and CPT_AF_RD_LATENCY_PC. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Number of NCB read requests caused by are microcode fills. Microcode fills also
                                                                 increment CPT_AF_RD_REQ_PC and CPT_AF_RD_LATENCY_PC. */
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_af_rd_uc_pc_s cn; */
};
typedef union bdk_cptx_af_rd_uc_pc bdk_cptx_af_rd_uc_pc_t;

static inline uint64_t BDK_CPTX_AF_RD_UC_PC(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_AF_RD_UC_PC(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && (a==0))
        return 0x8400a001b000ll + 0x10000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && (a<=1))
        return 0x8400a001b000ll + 0x10000000ll * ((a) & 0x1);
    if (bdk_is_model(OCTEONTX_CN98XX) && (a<=1))
        return 0x8400a001b000ll + 0x10000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_AF_RD_UC_PC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_AF_RD_UC_PC(a) bdk_cptx_af_rd_uc_pc_t
#define bustype_BDK_CPTX_AF_RD_UC_PC(a) BDK_CSR_TYPE_RVU_PF_BAR0
#define basename_BDK_CPTX_AF_RD_UC_PC(a) "CPTX_AF_RD_UC_PC"
#define device_bar_BDK_CPTX_AF_RD_UC_PC(a) 0x0 /* RVU_BAR0 */
#define busnum_BDK_CPTX_AF_RD_UC_PC(a) (a)
#define arguments_BDK_CPTX_AF_RD_UC_PC(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_rvu_int
 *
 * CPT AF RVU Interrupt Register
 * This register contains RVU error interrupt summary bits.
 */
union bdk_cptx_af_rvu_int
{
    uint64_t u;
    struct bdk_cptx_af_rvu_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t unmapped_slot         : 1;  /**< [  0:  0](R/W1C/H) Unmapped slot. Received an I/O request to a VF/PF slot in BAR2 that is not
                                                                 reverse mapped to an LF. See CPT_PRIV_LF()_CFG.

                                                                 Internal:
                                                                 A reverse lookup using CPT_AF_RVU_LF_CFG_DEBUG will never set this bit. */
#else /* Word 0 - Little Endian */
        uint64_t unmapped_slot         : 1;  /**< [  0:  0](R/W1C/H) Unmapped slot. Received an I/O request to a VF/PF slot in BAR2 that is not
                                                                 reverse mapped to an LF. See CPT_PRIV_LF()_CFG.

                                                                 Internal:
                                                                 A reverse lookup using CPT_AF_RVU_LF_CFG_DEBUG will never set this bit. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_af_rvu_int_s cn; */
};
typedef union bdk_cptx_af_rvu_int bdk_cptx_af_rvu_int_t;

static inline uint64_t BDK_CPTX_AF_RVU_INT(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_AF_RVU_INT(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && (a==0))
        return 0x8400a0047000ll + 0x10000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && (a<=1))
        return 0x8400a0047000ll + 0x10000000ll * ((a) & 0x1);
    if (bdk_is_model(OCTEONTX_CN98XX) && (a<=1))
        return 0x8400a0047000ll + 0x10000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_AF_RVU_INT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_AF_RVU_INT(a) bdk_cptx_af_rvu_int_t
#define bustype_BDK_CPTX_AF_RVU_INT(a) BDK_CSR_TYPE_RVU_PF_BAR0
#define basename_BDK_CPTX_AF_RVU_INT(a) "CPTX_AF_RVU_INT"
#define device_bar_BDK_CPTX_AF_RVU_INT(a) 0x0 /* RVU_BAR0 */
#define busnum_BDK_CPTX_AF_RVU_INT(a) (a)
#define arguments_BDK_CPTX_AF_RVU_INT(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_rvu_int_ena_w1c
 *
 * CPT AF RVU Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union bdk_cptx_af_rvu_int_ena_w1c
{
    uint64_t u;
    struct bdk_cptx_af_rvu_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t unmapped_slot         : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for CPT_AF_RVU_INT[UNMAPPED_SLOT].
                                                                 Internal:
                                                                 A reverse lookup using CPT_AF_RVU_LF_CFG_DEBUG will never set this bit. */
#else /* Word 0 - Little Endian */
        uint64_t unmapped_slot         : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for CPT_AF_RVU_INT[UNMAPPED_SLOT].
                                                                 Internal:
                                                                 A reverse lookup using CPT_AF_RVU_LF_CFG_DEBUG will never set this bit. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_af_rvu_int_ena_w1c_s cn; */
};
typedef union bdk_cptx_af_rvu_int_ena_w1c bdk_cptx_af_rvu_int_ena_w1c_t;

static inline uint64_t BDK_CPTX_AF_RVU_INT_ENA_W1C(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_AF_RVU_INT_ENA_W1C(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && (a==0))
        return 0x8400a0047018ll + 0x10000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && (a<=1))
        return 0x8400a0047018ll + 0x10000000ll * ((a) & 0x1);
    if (bdk_is_model(OCTEONTX_CN98XX) && (a<=1))
        return 0x8400a0047018ll + 0x10000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_AF_RVU_INT_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_AF_RVU_INT_ENA_W1C(a) bdk_cptx_af_rvu_int_ena_w1c_t
#define bustype_BDK_CPTX_AF_RVU_INT_ENA_W1C(a) BDK_CSR_TYPE_RVU_PF_BAR0
#define basename_BDK_CPTX_AF_RVU_INT_ENA_W1C(a) "CPTX_AF_RVU_INT_ENA_W1C"
#define device_bar_BDK_CPTX_AF_RVU_INT_ENA_W1C(a) 0x0 /* RVU_BAR0 */
#define busnum_BDK_CPTX_AF_RVU_INT_ENA_W1C(a) (a)
#define arguments_BDK_CPTX_AF_RVU_INT_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_rvu_int_ena_w1s
 *
 * CPT AF RVU Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union bdk_cptx_af_rvu_int_ena_w1s
{
    uint64_t u;
    struct bdk_cptx_af_rvu_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t unmapped_slot         : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for CPT_AF_RVU_INT[UNMAPPED_SLOT].
                                                                 Internal:
                                                                 A reverse lookup using CPT_AF_RVU_LF_CFG_DEBUG will never set this bit. */
#else /* Word 0 - Little Endian */
        uint64_t unmapped_slot         : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for CPT_AF_RVU_INT[UNMAPPED_SLOT].
                                                                 Internal:
                                                                 A reverse lookup using CPT_AF_RVU_LF_CFG_DEBUG will never set this bit. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_af_rvu_int_ena_w1s_s cn; */
};
typedef union bdk_cptx_af_rvu_int_ena_w1s bdk_cptx_af_rvu_int_ena_w1s_t;

static inline uint64_t BDK_CPTX_AF_RVU_INT_ENA_W1S(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_AF_RVU_INT_ENA_W1S(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && (a==0))
        return 0x8400a0047010ll + 0x10000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && (a<=1))
        return 0x8400a0047010ll + 0x10000000ll * ((a) & 0x1);
    if (bdk_is_model(OCTEONTX_CN98XX) && (a<=1))
        return 0x8400a0047010ll + 0x10000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_AF_RVU_INT_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_AF_RVU_INT_ENA_W1S(a) bdk_cptx_af_rvu_int_ena_w1s_t
#define bustype_BDK_CPTX_AF_RVU_INT_ENA_W1S(a) BDK_CSR_TYPE_RVU_PF_BAR0
#define basename_BDK_CPTX_AF_RVU_INT_ENA_W1S(a) "CPTX_AF_RVU_INT_ENA_W1S"
#define device_bar_BDK_CPTX_AF_RVU_INT_ENA_W1S(a) 0x0 /* RVU_BAR0 */
#define busnum_BDK_CPTX_AF_RVU_INT_ENA_W1S(a) (a)
#define arguments_BDK_CPTX_AF_RVU_INT_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_rvu_int_w1s
 *
 * CPT AF RVU Interrupt Set Register
 * This register sets interrupt bits.
 */
union bdk_cptx_af_rvu_int_w1s
{
    uint64_t u;
    struct bdk_cptx_af_rvu_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t unmapped_slot         : 1;  /**< [  0:  0](R/W1S/H) Reads or sets CPT_AF_RVU_INT[UNMAPPED_SLOT].
                                                                 Internal:
                                                                 A reverse lookup using CPT_AF_RVU_LF_CFG_DEBUG will never set this bit. */
#else /* Word 0 - Little Endian */
        uint64_t unmapped_slot         : 1;  /**< [  0:  0](R/W1S/H) Reads or sets CPT_AF_RVU_INT[UNMAPPED_SLOT].
                                                                 Internal:
                                                                 A reverse lookup using CPT_AF_RVU_LF_CFG_DEBUG will never set this bit. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_af_rvu_int_w1s_s cn; */
};
typedef union bdk_cptx_af_rvu_int_w1s bdk_cptx_af_rvu_int_w1s_t;

static inline uint64_t BDK_CPTX_AF_RVU_INT_W1S(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_AF_RVU_INT_W1S(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && (a==0))
        return 0x8400a0047008ll + 0x10000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && (a<=1))
        return 0x8400a0047008ll + 0x10000000ll * ((a) & 0x1);
    if (bdk_is_model(OCTEONTX_CN98XX) && (a<=1))
        return 0x8400a0047008ll + 0x10000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_AF_RVU_INT_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_AF_RVU_INT_W1S(a) bdk_cptx_af_rvu_int_w1s_t
#define bustype_BDK_CPTX_AF_RVU_INT_W1S(a) BDK_CSR_TYPE_RVU_PF_BAR0
#define basename_BDK_CPTX_AF_RVU_INT_W1S(a) "CPTX_AF_RVU_INT_W1S"
#define device_bar_BDK_CPTX_AF_RVU_INT_W1S(a) 0x0 /* RVU_BAR0 */
#define busnum_BDK_CPTX_AF_RVU_INT_W1S(a) (a)
#define arguments_BDK_CPTX_AF_RVU_INT_W1S(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_rvu_lf_cfg_debug
 *
 * CPT Privileged LF Configuration Debug Registers
 * This debug register allows software to look up the reverse mapping from VF/PF
 * slot to LF. The forward mapping is programmed with CPT_PRIV_LF()_CFG.
 */
union bdk_cptx_af_rvu_lf_cfg_debug
{
    uint64_t u;
    struct bdk_cptx_af_rvu_lf_cfg_debug_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_40_63        : 24;
        uint64_t pf_func               : 16; /**< [ 39: 24](R/W) RVU VF/PF for reverse lookup. Format defined by RVU_PF_FUNC_S. */
        uint64_t slot                  : 8;  /**< [ 23: 16](R/W) Slot within the VF/PF selected by [PF_FUNC] for reverse lookup. Must be
                                                                 zero for NIX and NPA. */
        uint64_t reserved_14_15        : 2;
        uint64_t exec                  : 1;  /**< [ 13: 13](R/W1S/H) Execute lookup. Writing a one to this bit initiates the reverse lookup
                                                                 from {[PF_FUNC], [SLOT]}. Hardware writes the lookup result to {[LF_VALID],
                                                                 [LF]} and clears this bit when done. */
        uint64_t lf_valid              : 1;  /**< [ 12: 12](RO/H) When set, indicates local function [LF] is provisioned to the VF/PF slot
                                                                 indexed by this register. When clear, a local function is not provisioned
                                                                 to the VF/PF slot. */
        uint64_t lf                    : 12; /**< [ 11:  0](RO/H) When [LF_VALID] is set, local function provisioned to the VF/PF slot. */
#else /* Word 0 - Little Endian */
        uint64_t lf                    : 12; /**< [ 11:  0](RO/H) When [LF_VALID] is set, local function provisioned to the VF/PF slot. */
        uint64_t lf_valid              : 1;  /**< [ 12: 12](RO/H) When set, indicates local function [LF] is provisioned to the VF/PF slot
                                                                 indexed by this register. When clear, a local function is not provisioned
                                                                 to the VF/PF slot. */
        uint64_t exec                  : 1;  /**< [ 13: 13](R/W1S/H) Execute lookup. Writing a one to this bit initiates the reverse lookup
                                                                 from {[PF_FUNC], [SLOT]}. Hardware writes the lookup result to {[LF_VALID],
                                                                 [LF]} and clears this bit when done. */
        uint64_t reserved_14_15        : 2;
        uint64_t slot                  : 8;  /**< [ 23: 16](R/W) Slot within the VF/PF selected by [PF_FUNC] for reverse lookup. Must be
                                                                 zero for NIX and NPA. */
        uint64_t pf_func               : 16; /**< [ 39: 24](R/W) RVU VF/PF for reverse lookup. Format defined by RVU_PF_FUNC_S. */
        uint64_t reserved_40_63        : 24;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_af_rvu_lf_cfg_debug_s cn; */
};
typedef union bdk_cptx_af_rvu_lf_cfg_debug bdk_cptx_af_rvu_lf_cfg_debug_t;

static inline uint64_t BDK_CPTX_AF_RVU_LF_CFG_DEBUG(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_AF_RVU_LF_CFG_DEBUG(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && (a==0))
        return 0x8400a0045000ll + 0x10000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && (a<=1))
        return 0x8400a0045000ll + 0x10000000ll * ((a) & 0x1);
    if (bdk_is_model(OCTEONTX_CN98XX) && (a<=1))
        return 0x8400a0045000ll + 0x10000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_AF_RVU_LF_CFG_DEBUG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_AF_RVU_LF_CFG_DEBUG(a) bdk_cptx_af_rvu_lf_cfg_debug_t
#define bustype_BDK_CPTX_AF_RVU_LF_CFG_DEBUG(a) BDK_CSR_TYPE_RVU_PF_BAR0
#define basename_BDK_CPTX_AF_RVU_LF_CFG_DEBUG(a) "CPTX_AF_RVU_LF_CFG_DEBUG"
#define device_bar_BDK_CPTX_AF_RVU_LF_CFG_DEBUG(a) 0x0 /* RVU_BAR0 */
#define busnum_BDK_CPTX_AF_RVU_LF_CFG_DEBUG(a) (a)
#define arguments_BDK_CPTX_AF_RVU_LF_CFG_DEBUG(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_af_xe#_thr
 *
 * RVU Admin Function XE Throttle Register
 * This register controls the number of 100 MHz clock cycles that must pass between
 * issuing of instructions to this engine type. CPT_AF_XE(0)_THR controls SE throttling,
 * CPT_AF_XE(1)_THR controls IE throttling, and CPT_AF_XE(2)_THR controls AE
 * throttling. Setting a value to 0x0 to a register disables throttling for that engine
 * type.
 *
 * This register is for use by the SCP in power throttling only. OS drivers should not
 * access this register.
 */
union bdk_cptx_af_xex_thr
{
    uint64_t u;
    struct bdk_cptx_af_xex_thr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t thr                   : 32; /**< [ 31:  0](R/W) The number of 100 MHz clock cycles that must pass being issuing
                                                                 of instructions to this engine type. 0x0 disable disables throttling. */
#else /* Word 0 - Little Endian */
        uint64_t thr                   : 32; /**< [ 31:  0](R/W) The number of 100 MHz clock cycles that must pass being issuing
                                                                 of instructions to this engine type. 0x0 disable disables throttling. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_af_xex_thr_s cn; */
};
typedef union bdk_cptx_af_xex_thr bdk_cptx_af_xex_thr_t;

static inline uint64_t BDK_CPTX_AF_XEX_THR(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_AF_XEX_THR(unsigned long a, unsigned long b)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && ((a==0) && (b<=2)))
        return 0x8400a002f000ll + 0x10000000ll * ((a) & 0x0) + 8ll * ((b) & 0x3);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && ((a<=1) && (b<=2)))
        return 0x8400a002f000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x3);
    if (bdk_is_model(OCTEONTX_CN98XX) && ((a<=1) && (b<=2)))
        return 0x8400a002f000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x3);
    __bdk_csr_fatal("CPTX_AF_XEX_THR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_AF_XEX_THR(a,b) bdk_cptx_af_xex_thr_t
#define bustype_BDK_CPTX_AF_XEX_THR(a,b) BDK_CSR_TYPE_RVU_PF_BAR0
#define basename_BDK_CPTX_AF_XEX_THR(a,b) "CPTX_AF_XEX_THR"
#define device_bar_BDK_CPTX_AF_XEX_THR(a,b) 0x0 /* RVU_BAR0 */
#define busnum_BDK_CPTX_AF_XEX_THR(a,b) (a)
#define arguments_BDK_CPTX_AF_XEX_THR(a,b) (a),(b),-1,-1

/**
 * Register (NCB) cpt#_bridge_bp_test
 *
 * INTERNAL: CPT PF Backpressure Test Register
 */
union bdk_cptx_bridge_bp_test
{
    uint64_t u;
    struct bdk_cptx_bridge_bp_test_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t enable                : 5;  /**< [ 63: 59](R/W) Enable test mode. For diagnostic use only.
                                                                 Internal:
                                                                 Once a bit is set, random backpressure is generated
                                                                 at the corresponding point to allow for more frequent backpressure.
                                                                 \<63\> = EPCO fifo.
                                                                 \<62\> = CDEI fifo
                                                                 \<61\> = EPCI outbound arb.
                                                                 \<60\> = Instruction request.
                                                                 \<59\> = Completion arb. */
        uint64_t reserved_24_58        : 35;
        uint64_t bp_cfg                : 10; /**< [ 23: 14](R/W) Backpressure weight. For diagnostic use only.
                                                                 Internal:
                                                                 There are 2 backpressure configuration bits per enable, with the two bits
                                                                 defined as 0x0=100% of the time, 0x1=75% of the time, 0x2=50% of the time,
                                                                 0x3=25% of the time.
                                                                   \<23:22\> = EPCO_CFG.
                                                                   \<21:20\> = CDEI_CFG.
                                                                   \<19:18\> = EPCI_CFG.
                                                                   \<17:16\> = INST_CFG.
                                                                   \<15:14\> = COMP_CFG. */
        uint64_t reserved_12_13        : 2;
        uint64_t lfsr_freq             : 12; /**< [ 11:  0](R/W) Test LFSR update frequency in coprocessor-clocks minus one. */
#else /* Word 0 - Little Endian */
        uint64_t lfsr_freq             : 12; /**< [ 11:  0](R/W) Test LFSR update frequency in coprocessor-clocks minus one. */
        uint64_t reserved_12_13        : 2;
        uint64_t bp_cfg                : 10; /**< [ 23: 14](R/W) Backpressure weight. For diagnostic use only.
                                                                 Internal:
                                                                 There are 2 backpressure configuration bits per enable, with the two bits
                                                                 defined as 0x0=100% of the time, 0x1=75% of the time, 0x2=50% of the time,
                                                                 0x3=25% of the time.
                                                                   \<23:22\> = EPCO_CFG.
                                                                   \<21:20\> = CDEI_CFG.
                                                                   \<19:18\> = EPCI_CFG.
                                                                   \<17:16\> = INST_CFG.
                                                                   \<15:14\> = COMP_CFG. */
        uint64_t reserved_24_58        : 35;
        uint64_t enable                : 5;  /**< [ 63: 59](R/W) Enable test mode. For diagnostic use only.
                                                                 Internal:
                                                                 Once a bit is set, random backpressure is generated
                                                                 at the corresponding point to allow for more frequent backpressure.
                                                                 \<63\> = EPCO fifo.
                                                                 \<62\> = CDEI fifo
                                                                 \<61\> = EPCI outbound arb.
                                                                 \<60\> = Instruction request.
                                                                 \<59\> = Completion arb. */
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_bridge_bp_test_s cn; */
};
typedef union bdk_cptx_bridge_bp_test bdk_cptx_bridge_bp_test_t;

static inline uint64_t BDK_CPTX_BRIDGE_BP_TEST(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_BRIDGE_BP_TEST(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && (a==0))
        return 0x8720000001c0ll + 0x1000000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN83XX) && (a<=1))
        return 0x8720000001c0ll + 0x1000000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_BRIDGE_BP_TEST", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_BRIDGE_BP_TEST(a) bdk_cptx_bridge_bp_test_t
#define bustype_BDK_CPTX_BRIDGE_BP_TEST(a) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_BRIDGE_BP_TEST(a) "CPTX_BRIDGE_BP_TEST"
#define device_bar_BDK_CPTX_BRIDGE_BP_TEST(a) 0x0 /* PF_BAR0 */
#define busnum_BDK_CPTX_BRIDGE_BP_TEST(a) (a)
#define arguments_BDK_CPTX_BRIDGE_BP_TEST(a) (a),-1,-1,-1

/**
 * Register (NCB) cpt#_cqm_core_obs0
 *
 * INTERNAL: CPT CQM Core Observability Debug Register
 */
union bdk_cptx_cqm_core_obs0
{
    uint64_t u;
    struct bdk_cptx_cqm_core_obs0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t instfif7_cnt          : 8;  /**< [ 63: 56](RO/H) Number of instruction words prefetched for group 7. */
        uint64_t instfif6_cnt          : 8;  /**< [ 55: 48](RO/H) Number of instruction words prefetched for group 6. */
        uint64_t instfif5_cnt          : 8;  /**< [ 47: 40](RO/H) Number of instruction words prefetched for group 5. */
        uint64_t instfif4_cnt          : 8;  /**< [ 39: 32](RO/H) Number of instruction words prefetched for group 4. */
        uint64_t instfif3_cnt          : 8;  /**< [ 31: 24](RO/H) Number of instruction words prefetched for group 3. */
        uint64_t instfif2_cnt          : 8;  /**< [ 23: 16](RO/H) Number of instruction words prefetched for group 2. */
        uint64_t instfif1_cnt          : 8;  /**< [ 15:  8](RO/H) Number of instruction words prefetched for group 1. */
        uint64_t instfif0_cnt          : 8;  /**< [  7:  0](RO/H) Number of instruction words prefetched for group 0. */
#else /* Word 0 - Little Endian */
        uint64_t instfif0_cnt          : 8;  /**< [  7:  0](RO/H) Number of instruction words prefetched for group 0. */
        uint64_t instfif1_cnt          : 8;  /**< [ 15:  8](RO/H) Number of instruction words prefetched for group 1. */
        uint64_t instfif2_cnt          : 8;  /**< [ 23: 16](RO/H) Number of instruction words prefetched for group 2. */
        uint64_t instfif3_cnt          : 8;  /**< [ 31: 24](RO/H) Number of instruction words prefetched for group 3. */
        uint64_t instfif4_cnt          : 8;  /**< [ 39: 32](RO/H) Number of instruction words prefetched for group 4. */
        uint64_t instfif5_cnt          : 8;  /**< [ 47: 40](RO/H) Number of instruction words prefetched for group 5. */
        uint64_t instfif6_cnt          : 8;  /**< [ 55: 48](RO/H) Number of instruction words prefetched for group 6. */
        uint64_t instfif7_cnt          : 8;  /**< [ 63: 56](RO/H) Number of instruction words prefetched for group 7. */
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_cqm_core_obs0_s cn; */
};
typedef union bdk_cptx_cqm_core_obs0 bdk_cptx_cqm_core_obs0_t;

static inline uint64_t BDK_CPTX_CQM_CORE_OBS0(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_CQM_CORE_OBS0(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && (a==0))
        return 0x8720000001a0ll + 0x1000000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN83XX) && (a<=1))
        return 0x8720000001a0ll + 0x1000000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_CQM_CORE_OBS0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_CQM_CORE_OBS0(a) bdk_cptx_cqm_core_obs0_t
#define bustype_BDK_CPTX_CQM_CORE_OBS0(a) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_CQM_CORE_OBS0(a) "CPTX_CQM_CORE_OBS0"
#define device_bar_BDK_CPTX_CQM_CORE_OBS0(a) 0x0 /* PF_BAR0 */
#define busnum_BDK_CPTX_CQM_CORE_OBS0(a) (a)
#define arguments_BDK_CPTX_CQM_CORE_OBS0(a) (a),-1,-1,-1

/**
 * Register (NCB) cpt#_cqm_core_obs1
 *
 * INTERNAL: CPT CQM Core Observability Debug Register
 */
union bdk_cptx_cqm_core_obs1
{
    uint64_t u;
    struct bdk_cptx_cqm_core_obs1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_50_63        : 14;
        uint64_t ncbi_ptr_req          : 1;  /**< [ 49: 49](RO/H) CQM_CORE is waiting to issue an NCBI Request for instruction pointer fetch */
        uint64_t ncbi_req_rdy          : 1;  /**< [ 48: 48](RO/H) CQM_CORE is waiting to issue an NCBI Request for instruction fetch */
        uint64_t grp_rdy_hi_pri        : 8;  /**< [ 47: 40](RO/H) If set the corresponding group has high priority queues waiting to fetch
                                                                 instructions. */
        uint64_t grp_rdy_lo_pri        : 8;  /**< [ 39: 32](RO/H) If set the corresponding group has low priority queues waiting to fetch */
        uint64_t vqfif7_cnt            : 4;  /**< [ 31: 28](RO/H) Number of instructions getting prefetched for group 7. */
        uint64_t vqfif6_cnt            : 4;  /**< [ 27: 24](RO/H) Number of instructions getting prefetched for group 6. */
        uint64_t vqfif5_cnt            : 4;  /**< [ 23: 20](RO/H) Number of instructions getting prefetched for group 5. */
        uint64_t vqfif4_cnt            : 4;  /**< [ 19: 16](RO/H) Number of instructions getting prefetched for group 4. */
        uint64_t vqfif3_cnt            : 4;  /**< [ 15: 12](RO/H) Number of instructions getting prefetched for group 3. */
        uint64_t vqfif2_cnt            : 4;  /**< [ 11:  8](RO/H) Number of instructions getting prefetched for group 2. */
        uint64_t vqfif1_cnt            : 4;  /**< [  7:  4](RO/H) Number of instructions getting prefetched for group 1. */
        uint64_t vqfif0_cnt            : 4;  /**< [  3:  0](RO/H) Number of instructions getting prefetched for group 0. */
#else /* Word 0 - Little Endian */
        uint64_t vqfif0_cnt            : 4;  /**< [  3:  0](RO/H) Number of instructions getting prefetched for group 0. */
        uint64_t vqfif1_cnt            : 4;  /**< [  7:  4](RO/H) Number of instructions getting prefetched for group 1. */
        uint64_t vqfif2_cnt            : 4;  /**< [ 11:  8](RO/H) Number of instructions getting prefetched for group 2. */
        uint64_t vqfif3_cnt            : 4;  /**< [ 15: 12](RO/H) Number of instructions getting prefetched for group 3. */
        uint64_t vqfif4_cnt            : 4;  /**< [ 19: 16](RO/H) Number of instructions getting prefetched for group 4. */
        uint64_t vqfif5_cnt            : 4;  /**< [ 23: 20](RO/H) Number of instructions getting prefetched for group 5. */
        uint64_t vqfif6_cnt            : 4;  /**< [ 27: 24](RO/H) Number of instructions getting prefetched for group 6. */
        uint64_t vqfif7_cnt            : 4;  /**< [ 31: 28](RO/H) Number of instructions getting prefetched for group 7. */
        uint64_t grp_rdy_lo_pri        : 8;  /**< [ 39: 32](RO/H) If set the corresponding group has low priority queues waiting to fetch */
        uint64_t grp_rdy_hi_pri        : 8;  /**< [ 47: 40](RO/H) If set the corresponding group has high priority queues waiting to fetch
                                                                 instructions. */
        uint64_t ncbi_req_rdy          : 1;  /**< [ 48: 48](RO/H) CQM_CORE is waiting to issue an NCBI Request for instruction fetch */
        uint64_t ncbi_ptr_req          : 1;  /**< [ 49: 49](RO/H) CQM_CORE is waiting to issue an NCBI Request for instruction pointer fetch */
        uint64_t reserved_50_63        : 14;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_cqm_core_obs1_s cn; */
};
typedef union bdk_cptx_cqm_core_obs1 bdk_cptx_cqm_core_obs1_t;

static inline uint64_t BDK_CPTX_CQM_CORE_OBS1(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_CQM_CORE_OBS1(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && (a==0))
        return 0x8720000001a8ll + 0x1000000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN83XX) && (a<=1))
        return 0x8720000001a8ll + 0x1000000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_CQM_CORE_OBS1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_CQM_CORE_OBS1(a) bdk_cptx_cqm_core_obs1_t
#define bustype_BDK_CPTX_CQM_CORE_OBS1(a) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_CQM_CORE_OBS1(a) "CPTX_CQM_CORE_OBS1"
#define device_bar_BDK_CPTX_CQM_CORE_OBS1(a) 0x0 /* PF_BAR0 */
#define busnum_BDK_CPTX_CQM_CORE_OBS1(a) (a)
#define arguments_BDK_CPTX_CQM_CORE_OBS1(a) (a),-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) cpt#_lf_ctl
 *
 * CPT VF Queue Control Registers
 * This register configures the queue.
 *
 * When the queue is not execution-quiescent (see CPT_LF_INPROG[EENA,INFLIGHT]),
 * software must only write this register with [ENA]=0.
 */
union bdk_cptx_lf_ctl
{
    uint64_t u;
    struct bdk_cptx_lf_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t fc_hyst_bits          : 4;  /**< [  7:  4](R/W) Flow control hysteresis bits. See also [FC_ENA,FC_UP_CROSSING] and CPT_FC_WRITE_S.

                                                                 When both [ENA,FC_ENA] are set and [FC_HYST_BITS]=0, CPT does not implement
                                                                 hysteresis and stores the CPT_FC_WRITE_S to LLC/DRAM whenever CPT_FC_WRITE_S[QSIZE]
                                                                 would change value. When both [ENA,FC_ENA] are set and [FC_HYST_BITS]!=0,
                                                                 CPT implements hysteresis and may store a CPT_FC_WRITE_S to LLC/DRAM only
                                                                 near in time to when either of these situations occur:

                                                                 * Bits \<[FC_HYST_BITS]-1:0\> of the memory queue size transitions from all ones to all
                                                                 zeros when [FC_UP_CROSSING]=1.

                                                                 * Or, bits \<[FC_HYST_BITS]-1:0\> of the memory queue size transitions from all zeros to all
                                                                 ones when [FC_UP_CROSSING]=0.

                                                                 When CPT writes a CPT_FC_WRITE_S to memory, CPT_FC_WRITE_S[QSIZE] contains
                                                                 the latest memory queue size for the queue/LF. See the CPT_FC_WRITE_S[QSIZE]
                                                                 description. CPT may write the CPT_FC_WRITE_S only near in time to one of the
                                                                 aforementioned transitions, and may not write CPT_FC_WRITE_S[QSIZE] with the
                                                                 memory queue size at the exact instant of the transition.

                                                                 [FC_HYST_BITS]=1 is not supported.

                                                                 [FC_HYST_BITS] must only change value when the queue is execution-quiescent
                                                                 (see CPT_LF_INPROG[EENA,INFLIGHT]). */
        uint64_t reserved_3            : 1;
        uint64_t fc_up_crossing        : 1;  /**< [  2:  2](R/W/H) The last flow control crossing. See also [FC_ENA,FC_HYST_BITS] and CPT_FC_WRITE_S.
                                                                 Unpredictable and not used when any of [ENA,FC_ENA,FC_HYST_BITS]=0. Otherwise,
                                                                 CPT sets [FC_UP_CROSSING] whenever memory queue size bits \<[FC_HYST_BITS]-1:0\>
                                                                 transition from all ones to all zeros, and clears [FC_UP_CROSSING] whenever memory
                                                                 queue size bits \<[FC_HYST_BITS]-1:0\> transition from all zeros to all ones.

                                                                 Software must only change the [FC_UP_CROSSING] value when the queue is
                                                                 execution-quiescent (see CPT_LF_INPROG[EENA,INFLIGHT]). */
        uint64_t fc_ena                : 1;  /**< [  1:  1](R/W) Flow control enable. See also [FC_HYST_BITS,FC_UP_CROSSING], CPT_FC_WRITE_S, and
                                                                 CPT_AF_CTL[FC_STYPE]. CPT ignores [FC_ENA] when [ENA] is clear.
                                                                 Both [ENA,FC_ENA] must be set for flow control to be enabled.

                                                                 When both [ENA,FC_ENA] are set, CPT periodically stores the memory queue size
                                                                 as a CPT_FC_WRITE_S to an LF IOVA. [FC_HYST_BITS,FC_UP_CROSSING]
                                                                 can limit the frequency of the stores.

                                                                 CPT_FC_WRITE_S[QSIZE] defines the memory queue size value that is monitored
                                                                 and written to memory by CPT. CPT_AF_LF()_PTR_CTL[INST_BE] determines the
                                                                 endianness of the CPT_FC_WRITE_S write.

                                                                 CPT writes the CPT_FC_WRITE_S to LF IOVA (CPT_LF_Q_BASE[ADDR] \<\< 7). CPT sets
                                                                 CPT_LF_MISC_INT[IRDE] when an SMMU fault occurs on the FC store.

                                                                 [FC_ENA] must only change value when the queue is execution-quiescent
                                                                 (see CPT_LF_INPROG[EENA,INFLIGHT]). */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W/H) Enqueueing enable. See also CPT_LF_INPROG[EENA].

                                                                 0 = When CPT receives a CPT_INST_S for the LF, it discards it and sets
                                                                 CPT_LF_MISC_INT[NQERR].

                                                                 1 = When CPT receives a CPT_INST_S for the LF (at CPT_LF_NQ()), it enqueues it.

                                                                 CPT clears [ENA] when any CPT_LF_MISC_INT bit gets set when CPT_AF_LF()_CTL[CONT_ERR]=0.
                                                                 CPT always clears [ENA] on a queue overflow, irrespective of CPT_AF_LF()_CTL[CONT_ERR].
                                                                 CPT_LF_MISC_INT[NQERR] and CPT_LF_Q_SIZE[SIZE_DIV40] describe queue overflow.

                                                                 Software must only transition [ENA] 0-\>1 when the queue is execution-quiescent
                                                                 (see CPT_LF_INPROG[EENA,INFLIGHT]).

                                                                 Software must only transition [ENA] 0-\>1 when the queue is empty and the following
                                                                 are true:
                                                                 _ CPT_LF_Q_INST_PTR[XQ_XOR]=0.
                                                                 _ CPT_LF_Q_INST_PTR[NQ_PTR]=2.
                                                                 _ CPT_LF_Q_INST_PTR[DQ_PTR]=2.
                                                                 _ CPT_LF_Q_GRP_PTR[XQ_XOR]=0.
                                                                 _ CPT_LF_Q_GRP_PTR[NQ_PTR]=1.
                                                                 _ CPT_LF_Q_GRP_PTR[DQ_PTR]=1. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W/H) Enqueueing enable. See also CPT_LF_INPROG[EENA].

                                                                 0 = When CPT receives a CPT_INST_S for the LF, it discards it and sets
                                                                 CPT_LF_MISC_INT[NQERR].

                                                                 1 = When CPT receives a CPT_INST_S for the LF (at CPT_LF_NQ()), it enqueues it.

                                                                 CPT clears [ENA] when any CPT_LF_MISC_INT bit gets set when CPT_AF_LF()_CTL[CONT_ERR]=0.
                                                                 CPT always clears [ENA] on a queue overflow, irrespective of CPT_AF_LF()_CTL[CONT_ERR].
                                                                 CPT_LF_MISC_INT[NQERR] and CPT_LF_Q_SIZE[SIZE_DIV40] describe queue overflow.

                                                                 Software must only transition [ENA] 0-\>1 when the queue is execution-quiescent
                                                                 (see CPT_LF_INPROG[EENA,INFLIGHT]).

                                                                 Software must only transition [ENA] 0-\>1 when the queue is empty and the following
                                                                 are true:
                                                                 _ CPT_LF_Q_INST_PTR[XQ_XOR]=0.
                                                                 _ CPT_LF_Q_INST_PTR[NQ_PTR]=2.
                                                                 _ CPT_LF_Q_INST_PTR[DQ_PTR]=2.
                                                                 _ CPT_LF_Q_GRP_PTR[XQ_XOR]=0.
                                                                 _ CPT_LF_Q_GRP_PTR[NQ_PTR]=1.
                                                                 _ CPT_LF_Q_GRP_PTR[DQ_PTR]=1. */
        uint64_t fc_ena                : 1;  /**< [  1:  1](R/W) Flow control enable. See also [FC_HYST_BITS,FC_UP_CROSSING], CPT_FC_WRITE_S, and
                                                                 CPT_AF_CTL[FC_STYPE]. CPT ignores [FC_ENA] when [ENA] is clear.
                                                                 Both [ENA,FC_ENA] must be set for flow control to be enabled.

                                                                 When both [ENA,FC_ENA] are set, CPT periodically stores the memory queue size
                                                                 as a CPT_FC_WRITE_S to an LF IOVA. [FC_HYST_BITS,FC_UP_CROSSING]
                                                                 can limit the frequency of the stores.

                                                                 CPT_FC_WRITE_S[QSIZE] defines the memory queue size value that is monitored
                                                                 and written to memory by CPT. CPT_AF_LF()_PTR_CTL[INST_BE] determines the
                                                                 endianness of the CPT_FC_WRITE_S write.

                                                                 CPT writes the CPT_FC_WRITE_S to LF IOVA (CPT_LF_Q_BASE[ADDR] \<\< 7). CPT sets
                                                                 CPT_LF_MISC_INT[IRDE] when an SMMU fault occurs on the FC store.

                                                                 [FC_ENA] must only change value when the queue is execution-quiescent
                                                                 (see CPT_LF_INPROG[EENA,INFLIGHT]). */
        uint64_t fc_up_crossing        : 1;  /**< [  2:  2](R/W/H) The last flow control crossing. See also [FC_ENA,FC_HYST_BITS] and CPT_FC_WRITE_S.
                                                                 Unpredictable and not used when any of [ENA,FC_ENA,FC_HYST_BITS]=0. Otherwise,
                                                                 CPT sets [FC_UP_CROSSING] whenever memory queue size bits \<[FC_HYST_BITS]-1:0\>
                                                                 transition from all ones to all zeros, and clears [FC_UP_CROSSING] whenever memory
                                                                 queue size bits \<[FC_HYST_BITS]-1:0\> transition from all zeros to all ones.

                                                                 Software must only change the [FC_UP_CROSSING] value when the queue is
                                                                 execution-quiescent (see CPT_LF_INPROG[EENA,INFLIGHT]). */
        uint64_t reserved_3            : 1;
        uint64_t fc_hyst_bits          : 4;  /**< [  7:  4](R/W) Flow control hysteresis bits. See also [FC_ENA,FC_UP_CROSSING] and CPT_FC_WRITE_S.

                                                                 When both [ENA,FC_ENA] are set and [FC_HYST_BITS]=0, CPT does not implement
                                                                 hysteresis and stores the CPT_FC_WRITE_S to LLC/DRAM whenever CPT_FC_WRITE_S[QSIZE]
                                                                 would change value. When both [ENA,FC_ENA] are set and [FC_HYST_BITS]!=0,
                                                                 CPT implements hysteresis and may store a CPT_FC_WRITE_S to LLC/DRAM only
                                                                 near in time to when either of these situations occur:

                                                                 * Bits \<[FC_HYST_BITS]-1:0\> of the memory queue size transitions from all ones to all
                                                                 zeros when [FC_UP_CROSSING]=1.

                                                                 * Or, bits \<[FC_HYST_BITS]-1:0\> of the memory queue size transitions from all zeros to all
                                                                 ones when [FC_UP_CROSSING]=0.

                                                                 When CPT writes a CPT_FC_WRITE_S to memory, CPT_FC_WRITE_S[QSIZE] contains
                                                                 the latest memory queue size for the queue/LF. See the CPT_FC_WRITE_S[QSIZE]
                                                                 description. CPT may write the CPT_FC_WRITE_S only near in time to one of the
                                                                 aforementioned transitions, and may not write CPT_FC_WRITE_S[QSIZE] with the
                                                                 memory queue size at the exact instant of the transition.

                                                                 [FC_HYST_BITS]=1 is not supported.

                                                                 [FC_HYST_BITS] must only change value when the queue is execution-quiescent
                                                                 (see CPT_LF_INPROG[EENA,INFLIGHT]). */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_lf_ctl_s cn; */
};
typedef union bdk_cptx_lf_ctl bdk_cptx_lf_ctl_t;

static inline uint64_t BDK_CPTX_LF_CTL(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_LF_CTL(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && (a==0))
        return 0x840200a00010ll + 0x100000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && (a<=1))
        return 0x840200a00010ll + 0x100000ll * ((a) & 0x1);
    if (bdk_is_model(OCTEONTX_CN98XX) && (a<=1))
        return 0x840200a00010ll + 0x100000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_LF_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_LF_CTL(a) bdk_cptx_lf_ctl_t
#define bustype_BDK_CPTX_LF_CTL(a) BDK_CSR_TYPE_RVU_PFVF_BAR2
#define basename_BDK_CPTX_LF_CTL(a) "CPTX_LF_CTL"
#define device_bar_BDK_CPTX_LF_CTL(a) 0x2 /* RVU_BAR2 */
#define busnum_BDK_CPTX_LF_CTL(a) (a)
#define arguments_BDK_CPTX_LF_CTL(a) (a),-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) cpt#_lf_done
 *
 * CPT Queue Done Count Registers
 * These registers contain the per-queue instruction done count.
 */
union bdk_cptx_lf_done
{
    uint64_t u;
    struct bdk_cptx_lf_done_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_20_63        : 44;
        uint64_t done                  : 20; /**< [ 19:  0](R/W/H) Done count. When CPT_INST_S[DONEINT] set and that instruction completes,
                                                                 CPT increments [DONE] when the instruction finishes. Software should
                                                                 later write to CPT_LF_DONE_ACK to decrement [DONE]. Writes to [DONE]
                                                                 are for diagnostic use only.

                                                                 * CPT throws an interrupt (CPT_LF_INT_VEC_E::DONE) for the LF whenever
                                                                 it asserts its conceptual interrupt bit for the LF while corresponding
                                                                 CPT_LF_DONE_INT_ENA_W1S[DONE] is set.

                                                                 * Whenever [DONE]=0, CPT holds the corresponding conceptual
                                                                 interrupt bit for the LF clear, and holds the corresponding time
                                                                 coalescing counter for the LF at zero.

                                                                 * Otherwise, CPT's conceptual interrupt bit is clear unless corresponding
                                                                 [DONE] \>= CPT_LF_DONE_WAIT[NUM_WAIT], or CPT_LF_DONE_WAIT[TIME_WAIT]!=0
                                                                 (i.e. interrupt time coalescing is enabled) and the interrupt
                                                                 time coalescing counter \>= CPT_LF_DONE_WAIT[TIME_WAIT] microseconds.

                                                                 * CPT clears the interrupt time coalescing counter for the LF on any
                                                                 write to the LF's CPT_LF_DONE_ACK.

                                                                 * Otherwise, CPT adds time to the interrupt time coalescing counter
                                                                 on any cycle when corresponding [DONE]!=0 and
                                                                 CPT_LF_DONE_WAIT[TIME_WAIT]!=0.

                                                                 * If CPT_LF_DONE_ENA_W1S[DONE] is set, CPT also throws an interrupt
                                                                 when corresponding CPT_LF_DONE[DONE] remains \>= CPT_LF_DONE_WAIT[NUM_WAIT]
                                                                 after a CPT_LF_DONE_ACK write (i.e. if the conceptual interrupt bit
                                                                 remains asserted after a CPT_LF_DONE_ACK write). (This covers the
                                                                 race case between software acknowledging an interrupt and a result
                                                                 returning.)

                                                                 The [DONE] increment occurs after the CPT_RES_S write, but otherwise
                                                                 can occur out-of-order. Software may need to scan CPT_RES_S's to
                                                                 determine which caused the interrupt. Even if a later command is
                                                                 acknowledged first a completion will not be missed.

                                                                 Software must ensure [DONE] does not overflow; for example by
                                                                 insuring there are not more than 2^20-1 instructions in flight.

                                                                 Internal:
                                                                 Desirable for CPT_LF_DONE[DONE] writes to also be able to test interrupts
                                                                 (in addition to CPT_LF_DONE_ACK writes). A write to CPT_LF_DONE should also
                                                                 clear the timer.

                                                                 The "conceptual interrupt bit" is CPT_LF_DONE_INT[DONE]. But we hide
                                                                 the bit from the HRM, and its implemention is not required. */
#else /* Word 0 - Little Endian */
        uint64_t done                  : 20; /**< [ 19:  0](R/W/H) Done count. When CPT_INST_S[DONEINT] set and that instruction completes,
                                                                 CPT increments [DONE] when the instruction finishes. Software should
                                                                 later write to CPT_LF_DONE_ACK to decrement [DONE]. Writes to [DONE]
                                                                 are for diagnostic use only.

                                                                 * CPT throws an interrupt (CPT_LF_INT_VEC_E::DONE) for the LF whenever
                                                                 it asserts its conceptual interrupt bit for the LF while corresponding
                                                                 CPT_LF_DONE_INT_ENA_W1S[DONE] is set.

                                                                 * Whenever [DONE]=0, CPT holds the corresponding conceptual
                                                                 interrupt bit for the LF clear, and holds the corresponding time
                                                                 coalescing counter for the LF at zero.

                                                                 * Otherwise, CPT's conceptual interrupt bit is clear unless corresponding
                                                                 [DONE] \>= CPT_LF_DONE_WAIT[NUM_WAIT], or CPT_LF_DONE_WAIT[TIME_WAIT]!=0
                                                                 (i.e. interrupt time coalescing is enabled) and the interrupt
                                                                 time coalescing counter \>= CPT_LF_DONE_WAIT[TIME_WAIT] microseconds.

                                                                 * CPT clears the interrupt time coalescing counter for the LF on any
                                                                 write to the LF's CPT_LF_DONE_ACK.

                                                                 * Otherwise, CPT adds time to the interrupt time coalescing counter
                                                                 on any cycle when corresponding [DONE]!=0 and
                                                                 CPT_LF_DONE_WAIT[TIME_WAIT]!=0.

                                                                 * If CPT_LF_DONE_ENA_W1S[DONE] is set, CPT also throws an interrupt
                                                                 when corresponding CPT_LF_DONE[DONE] remains \>= CPT_LF_DONE_WAIT[NUM_WAIT]
                                                                 after a CPT_LF_DONE_ACK write (i.e. if the conceptual interrupt bit
                                                                 remains asserted after a CPT_LF_DONE_ACK write). (This covers the
                                                                 race case between software acknowledging an interrupt and a result
                                                                 returning.)

                                                                 The [DONE] increment occurs after the CPT_RES_S write, but otherwise
                                                                 can occur out-of-order. Software may need to scan CPT_RES_S's to
                                                                 determine which caused the interrupt. Even if a later command is
                                                                 acknowledged first a completion will not be missed.

                                                                 Software must ensure [DONE] does not overflow; for example by
                                                                 insuring there are not more than 2^20-1 instructions in flight.

                                                                 Internal:
                                                                 Desirable for CPT_LF_DONE[DONE] writes to also be able to test interrupts
                                                                 (in addition to CPT_LF_DONE_ACK writes). A write to CPT_LF_DONE should also
                                                                 clear the timer.

                                                                 The "conceptual interrupt bit" is CPT_LF_DONE_INT[DONE]. But we hide
                                                                 the bit from the HRM, and its implemention is not required. */
        uint64_t reserved_20_63        : 44;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_lf_done_s cn; */
};
typedef union bdk_cptx_lf_done bdk_cptx_lf_done_t;

static inline uint64_t BDK_CPTX_LF_DONE(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_LF_DONE(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && (a==0))
        return 0x840200a00050ll + 0x100000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && (a<=1))
        return 0x840200a00050ll + 0x100000ll * ((a) & 0x1);
    if (bdk_is_model(OCTEONTX_CN98XX) && (a<=1))
        return 0x840200a00050ll + 0x100000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_LF_DONE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_LF_DONE(a) bdk_cptx_lf_done_t
#define bustype_BDK_CPTX_LF_DONE(a) BDK_CSR_TYPE_RVU_PFVF_BAR2
#define basename_BDK_CPTX_LF_DONE(a) "CPTX_LF_DONE"
#define device_bar_BDK_CPTX_LF_DONE(a) 0x2 /* RVU_BAR2 */
#define busnum_BDK_CPTX_LF_DONE(a) (a)
#define arguments_BDK_CPTX_LF_DONE(a) (a),-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) cpt#_lf_done_ack
 *
 * CPT Queue Done Count Ack Registers
 * This register is written by software to acknowledge interrupts.
 */
union bdk_cptx_lf_done_ack
{
    uint64_t u;
    struct bdk_cptx_lf_done_ack_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_20_63        : 44;
        uint64_t done_ack              : 20; /**< [ 19:  0](R/W/H) Number of decrements to CPT_LF_DONE[DONE]. Reads CPT_LF_DONE[DONE].

                                                                 Written by software to acknowledge interrupts. If CPT_LF_DONE[DONE] is still
                                                                 nonzero the interrupt will be resent if the conditions described in
                                                                 CPT_LF_DONE[DONE] are satisfied.

                                                                 Writes to CPT_LF_DONE_ACK[DONE_ACK] can write any value into CPT_LF_DONE[DONE]
                                                                 and create an interrupt. */
#else /* Word 0 - Little Endian */
        uint64_t done_ack              : 20; /**< [ 19:  0](R/W/H) Number of decrements to CPT_LF_DONE[DONE]. Reads CPT_LF_DONE[DONE].

                                                                 Written by software to acknowledge interrupts. If CPT_LF_DONE[DONE] is still
                                                                 nonzero the interrupt will be resent if the conditions described in
                                                                 CPT_LF_DONE[DONE] are satisfied.

                                                                 Writes to CPT_LF_DONE_ACK[DONE_ACK] can write any value into CPT_LF_DONE[DONE]
                                                                 and create an interrupt. */
        uint64_t reserved_20_63        : 44;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_lf_done_ack_s cn; */
};
typedef union bdk_cptx_lf_done_ack bdk_cptx_lf_done_ack_t;

static inline uint64_t BDK_CPTX_LF_DONE_ACK(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_LF_DONE_ACK(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && (a==0))
        return 0x840200a00060ll + 0x100000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && (a<=1))
        return 0x840200a00060ll + 0x100000ll * ((a) & 0x1);
    if (bdk_is_model(OCTEONTX_CN98XX) && (a<=1))
        return 0x840200a00060ll + 0x100000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_LF_DONE_ACK", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_LF_DONE_ACK(a) bdk_cptx_lf_done_ack_t
#define bustype_BDK_CPTX_LF_DONE_ACK(a) BDK_CSR_TYPE_RVU_PFVF_BAR2
#define basename_BDK_CPTX_LF_DONE_ACK(a) "CPTX_LF_DONE_ACK"
#define device_bar_BDK_CPTX_LF_DONE_ACK(a) 0x2 /* RVU_BAR2 */
#define busnum_BDK_CPTX_LF_DONE_ACK(a) (a)
#define arguments_BDK_CPTX_LF_DONE_ACK(a) (a),-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) cpt#_lf_done_int
 *
 * INTERNAL: CPT Queue Done Interrupt Clear Registers
 *
 * Internal:
 * This CSR description is only here to keep the scripts happy.
 */
union bdk_cptx_lf_done_int
{
    uint64_t u;
    struct bdk_cptx_lf_done_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t done                  : 1;  /**< [  0:  0](RO/H) Done interrupt. See CPT_LF_DONE[DONE].  Note this bit is read-only - acknowledge
                                                                 interrupts using CPT_LF_DONE_ACK.

                                                                 To test interrupts, write CPT_LF_DONE_ACK to make CPT_LF_DONE[DONE] nonzero.

                                                                 Internal:
                                                                 This is called the conceptual interrupt bit in the CPT_LF_DONE[DONE] documentation.
                                                                 This bit does not need to be implemented, and this CSR could be removed (except
                                                                 that the scripts will blow up). */
#else /* Word 0 - Little Endian */
        uint64_t done                  : 1;  /**< [  0:  0](RO/H) Done interrupt. See CPT_LF_DONE[DONE].  Note this bit is read-only - acknowledge
                                                                 interrupts using CPT_LF_DONE_ACK.

                                                                 To test interrupts, write CPT_LF_DONE_ACK to make CPT_LF_DONE[DONE] nonzero.

                                                                 Internal:
                                                                 This is called the conceptual interrupt bit in the CPT_LF_DONE[DONE] documentation.
                                                                 This bit does not need to be implemented, and this CSR could be removed (except
                                                                 that the scripts will blow up). */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_lf_done_int_s cn; */
};
typedef union bdk_cptx_lf_done_int bdk_cptx_lf_done_int_t;

static inline uint64_t BDK_CPTX_LF_DONE_INT(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_LF_DONE_INT(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && (a==0))
        return 0x840200a00070ll + 0x100000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && (a<=1))
        return 0x840200a00070ll + 0x100000ll * ((a) & 0x1);
    if (bdk_is_model(OCTEONTX_CN98XX) && (a<=1))
        return 0x840200a00070ll + 0x100000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_LF_DONE_INT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_LF_DONE_INT(a) bdk_cptx_lf_done_int_t
#define bustype_BDK_CPTX_LF_DONE_INT(a) BDK_CSR_TYPE_RVU_PFVF_BAR2
#define basename_BDK_CPTX_LF_DONE_INT(a) "CPTX_LF_DONE_INT"
#define device_bar_BDK_CPTX_LF_DONE_INT(a) 0x2 /* RVU_BAR2 */
#define busnum_BDK_CPTX_LF_DONE_INT(a) (a)
#define arguments_BDK_CPTX_LF_DONE_INT(a) (a),-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) cpt#_lf_done_int_ena_w1c
 *
 * CPT Queue Done Interrupt Enable Clear Registers
 */
union bdk_cptx_lf_done_int_ena_w1c
{
    uint64_t u;
    struct bdk_cptx_lf_done_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t done                  : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for CPT LF DONE interrupts. See also CPT_LF_DONE_ACK. */
#else /* Word 0 - Little Endian */
        uint64_t done                  : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for CPT LF DONE interrupts. See also CPT_LF_DONE_ACK. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_lf_done_int_ena_w1c_s cn; */
};
typedef union bdk_cptx_lf_done_int_ena_w1c bdk_cptx_lf_done_int_ena_w1c_t;

static inline uint64_t BDK_CPTX_LF_DONE_INT_ENA_W1C(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_LF_DONE_INT_ENA_W1C(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && (a==0))
        return 0x840200a000a0ll + 0x100000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && (a<=1))
        return 0x840200a000a0ll + 0x100000ll * ((a) & 0x1);
    if (bdk_is_model(OCTEONTX_CN98XX) && (a<=1))
        return 0x840200a000a0ll + 0x100000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_LF_DONE_INT_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_LF_DONE_INT_ENA_W1C(a) bdk_cptx_lf_done_int_ena_w1c_t
#define bustype_BDK_CPTX_LF_DONE_INT_ENA_W1C(a) BDK_CSR_TYPE_RVU_PFVF_BAR2
#define basename_BDK_CPTX_LF_DONE_INT_ENA_W1C(a) "CPTX_LF_DONE_INT_ENA_W1C"
#define device_bar_BDK_CPTX_LF_DONE_INT_ENA_W1C(a) 0x2 /* RVU_BAR2 */
#define busnum_BDK_CPTX_LF_DONE_INT_ENA_W1C(a) (a)
#define arguments_BDK_CPTX_LF_DONE_INT_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) cpt#_lf_done_int_ena_w1s
 *
 * CPT Queue Done Interrupt Enable Set Registers
 * Internal:
 * Write 1 to these registers will enable the DONEINT interrupt for the queue.
 */
union bdk_cptx_lf_done_int_ena_w1s
{
    uint64_t u;
    struct bdk_cptx_lf_done_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t done                  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for CPT LF DONE interrupts. See also CPT_LF_DONE_ACK. */
#else /* Word 0 - Little Endian */
        uint64_t done                  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for CPT LF DONE interrupts. See also CPT_LF_DONE_ACK. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_lf_done_int_ena_w1s_s cn; */
};
typedef union bdk_cptx_lf_done_int_ena_w1s bdk_cptx_lf_done_int_ena_w1s_t;

static inline uint64_t BDK_CPTX_LF_DONE_INT_ENA_W1S(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_LF_DONE_INT_ENA_W1S(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && (a==0))
        return 0x840200a00090ll + 0x100000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && (a<=1))
        return 0x840200a00090ll + 0x100000ll * ((a) & 0x1);
    if (bdk_is_model(OCTEONTX_CN98XX) && (a<=1))
        return 0x840200a00090ll + 0x100000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_LF_DONE_INT_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_LF_DONE_INT_ENA_W1S(a) bdk_cptx_lf_done_int_ena_w1s_t
#define bustype_BDK_CPTX_LF_DONE_INT_ENA_W1S(a) BDK_CSR_TYPE_RVU_PFVF_BAR2
#define basename_BDK_CPTX_LF_DONE_INT_ENA_W1S(a) "CPTX_LF_DONE_INT_ENA_W1S"
#define device_bar_BDK_CPTX_LF_DONE_INT_ENA_W1S(a) 0x2 /* RVU_BAR2 */
#define busnum_BDK_CPTX_LF_DONE_INT_ENA_W1S(a) (a)
#define arguments_BDK_CPTX_LF_DONE_INT_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) cpt#_lf_done_int_w1s
 *
 * INTERNAL: CPT Queue Done Interrupt Set Registers
 *
 * Internal:
 * This CSR description is only here to keep the scripts happy.
 */
union bdk_cptx_lf_done_int_w1s
{
    uint64_t u;
    struct bdk_cptx_lf_done_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t done                  : 1;  /**< [  0:  0](RO/H) Done interrupt. See CPT_LF_DONE[DONE].  Note this bit is read-only - acknowledge
                                                                 interrupts using CPT_LF_DONE_ACK.

                                                                 To test interrupts, write CPT_LF_DONE_ACK to make CPT_LF_DONE[DONE] nonzero.

                                                                 Internal:
                                                                 This is called the conceptual interrupt bit in the CPT_LF_DONE[DONE] documentation.
                                                                 This bit does not need to be implemented, and this CSR could be removed (except
                                                                 that the scripts will blow up). */
#else /* Word 0 - Little Endian */
        uint64_t done                  : 1;  /**< [  0:  0](RO/H) Done interrupt. See CPT_LF_DONE[DONE].  Note this bit is read-only - acknowledge
                                                                 interrupts using CPT_LF_DONE_ACK.

                                                                 To test interrupts, write CPT_LF_DONE_ACK to make CPT_LF_DONE[DONE] nonzero.

                                                                 Internal:
                                                                 This is called the conceptual interrupt bit in the CPT_LF_DONE[DONE] documentation.
                                                                 This bit does not need to be implemented, and this CSR could be removed (except
                                                                 that the scripts will blow up). */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_lf_done_int_w1s_s cn; */
};
typedef union bdk_cptx_lf_done_int_w1s bdk_cptx_lf_done_int_w1s_t;

static inline uint64_t BDK_CPTX_LF_DONE_INT_W1S(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_LF_DONE_INT_W1S(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && (a==0))
        return 0x840200a00080ll + 0x100000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && (a<=1))
        return 0x840200a00080ll + 0x100000ll * ((a) & 0x1);
    if (bdk_is_model(OCTEONTX_CN98XX) && (a<=1))
        return 0x840200a00080ll + 0x100000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_LF_DONE_INT_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_LF_DONE_INT_W1S(a) bdk_cptx_lf_done_int_w1s_t
#define bustype_BDK_CPTX_LF_DONE_INT_W1S(a) BDK_CSR_TYPE_RVU_PFVF_BAR2
#define basename_BDK_CPTX_LF_DONE_INT_W1S(a) "CPTX_LF_DONE_INT_W1S"
#define device_bar_BDK_CPTX_LF_DONE_INT_W1S(a) 0x2 /* RVU_BAR2 */
#define busnum_BDK_CPTX_LF_DONE_INT_W1S(a) (a)
#define arguments_BDK_CPTX_LF_DONE_INT_W1S(a) (a),-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) cpt#_lf_done_wait
 *
 * CPT Queue Done Interrupt Coalescing Wait Registers
 * Specifies the per-queue interrupt coalescing settings.
 */
union bdk_cptx_lf_done_wait
{
    uint64_t u;
    struct bdk_cptx_lf_done_wait_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t time_wait             : 16; /**< [ 47: 32](R/W) Time hold-off in microseconds. When CPT_LF_DONE[DONE] = 0, or
                                                                 CPT_LF_DONE_ACK is written a timer is cleared. When the timer reaches
                                                                 [TIME_WAIT] microseconds then interrupt coalescing ends; see
                                                                 CPT_LF_DONE[DONE]. If 0x0, time coalescing is disabled. */
        uint64_t reserved_20_31        : 12;
        uint64_t num_wait              : 20; /**< [ 19:  0](R/W) Number of messages hold-off. When CPT_LF_DONE[DONE] \>= [NUM_WAIT] then
                                                                 interrupt coalescing ends; see CPT_LF_DONE[DONE]. If 0x0, same behavior as
                                                                 0x1. */
#else /* Word 0 - Little Endian */
        uint64_t num_wait              : 20; /**< [ 19:  0](R/W) Number of messages hold-off. When CPT_LF_DONE[DONE] \>= [NUM_WAIT] then
                                                                 interrupt coalescing ends; see CPT_LF_DONE[DONE]. If 0x0, same behavior as
                                                                 0x1. */
        uint64_t reserved_20_31        : 12;
        uint64_t time_wait             : 16; /**< [ 47: 32](R/W) Time hold-off in microseconds. When CPT_LF_DONE[DONE] = 0, or
                                                                 CPT_LF_DONE_ACK is written a timer is cleared. When the timer reaches
                                                                 [TIME_WAIT] microseconds then interrupt coalescing ends; see
                                                                 CPT_LF_DONE[DONE]. If 0x0, time coalescing is disabled. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_lf_done_wait_s cn; */
};
typedef union bdk_cptx_lf_done_wait bdk_cptx_lf_done_wait_t;

static inline uint64_t BDK_CPTX_LF_DONE_WAIT(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_LF_DONE_WAIT(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && (a==0))
        return 0x840200a00030ll + 0x100000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && (a<=1))
        return 0x840200a00030ll + 0x100000ll * ((a) & 0x1);
    if (bdk_is_model(OCTEONTX_CN98XX) && (a<=1))
        return 0x840200a00030ll + 0x100000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_LF_DONE_WAIT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_LF_DONE_WAIT(a) bdk_cptx_lf_done_wait_t
#define bustype_BDK_CPTX_LF_DONE_WAIT(a) BDK_CSR_TYPE_RVU_PFVF_BAR2
#define basename_BDK_CPTX_LF_DONE_WAIT(a) "CPTX_LF_DONE_WAIT"
#define device_bar_BDK_CPTX_LF_DONE_WAIT(a) 0x2 /* RVU_BAR2 */
#define busnum_BDK_CPTX_LF_DONE_WAIT(a) (a)
#define arguments_BDK_CPTX_LF_DONE_WAIT(a) (a),-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) cpt#_lf_inprog
 *
 * CPT Queue In Progress Count Registers
 * These registers contain the per-queue instruction in flight registers.
 */
union bdk_cptx_lf_inprog
{
    uint64_t u;
    struct bdk_cptx_lf_inprog_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t gwb_cnt               : 8;  /**< [ 47: 40](RO/H) Number of group write buffer entries currently in use. */
        uint64_t grb_cnt               : 8;  /**< [ 39: 32](RO/H) Number of group read buffer entries currently in use. */
        uint64_t grb_partial           : 1;  /**< [ 31: 31](RO/H) The group read buffer contains a partial entries; Any newly enqueued CPT
                                                                 instruction will be executed. */
        uint64_t reserved_18_30        : 13;
        uint64_t grp_drp               : 1;  /**< [ 17: 17](R/W1S) Group drop. Set to one during LF FLR/migration sequence to help clear out
                                                                 hardware. Set by software, and only cleared by reset (e.g. CPT_AF_LF_RST). */
        uint64_t eena                  : 1;  /**< [ 16: 16](R/W) Execution enable.
                                                                 0 = CPT will not execute instructions in the queue.
                                                                 1 = CPT will execute instructions that are present in the queue.

                                                                 Software may change the [EENA] value at any time. */
        uint64_t reserved_9_15         : 7;
        uint64_t inflight              : 9;  /**< [  8:  0](RO/H) Inflight count. Counts the number of instructions for the LF for which CPT is
                                                                 fetching, executing or responding to instructions. However the following
                                                                 may still occur after the CPT_INST_S is no longer inflight:
                                                                 * an SSO work add.
                                                                 * a final NIX TX descriptor enqueue.
                                                                 * any CPT_LF_DONE[DONE] increment or associated interrupt.

                                                                 A LF/queue is execution-quiescent when [INFLIGHT]=0. Clear [EENA] to force
                                                                 execution-quiescence - [INFLIGHT] will eventually clear. Once
                                                                 [EENA,INFLIGHT]=0,0, the LF/queue will remain execution-quiescent until
                                                                 [EENA] is set. */
#else /* Word 0 - Little Endian */
        uint64_t inflight              : 9;  /**< [  8:  0](RO/H) Inflight count. Counts the number of instructions for the LF for which CPT is
                                                                 fetching, executing or responding to instructions. However the following
                                                                 may still occur after the CPT_INST_S is no longer inflight:
                                                                 * an SSO work add.
                                                                 * a final NIX TX descriptor enqueue.
                                                                 * any CPT_LF_DONE[DONE] increment or associated interrupt.

                                                                 A LF/queue is execution-quiescent when [INFLIGHT]=0. Clear [EENA] to force
                                                                 execution-quiescence - [INFLIGHT] will eventually clear. Once
                                                                 [EENA,INFLIGHT]=0,0, the LF/queue will remain execution-quiescent until
                                                                 [EENA] is set. */
        uint64_t reserved_9_15         : 7;
        uint64_t eena                  : 1;  /**< [ 16: 16](R/W) Execution enable.
                                                                 0 = CPT will not execute instructions in the queue.
                                                                 1 = CPT will execute instructions that are present in the queue.

                                                                 Software may change the [EENA] value at any time. */
        uint64_t grp_drp               : 1;  /**< [ 17: 17](R/W1S) Group drop. Set to one during LF FLR/migration sequence to help clear out
                                                                 hardware. Set by software, and only cleared by reset (e.g. CPT_AF_LF_RST). */
        uint64_t reserved_18_30        : 13;
        uint64_t grb_partial           : 1;  /**< [ 31: 31](RO/H) The group read buffer contains a partial entries; Any newly enqueued CPT
                                                                 instruction will be executed. */
        uint64_t grb_cnt               : 8;  /**< [ 39: 32](RO/H) Number of group read buffer entries currently in use. */
        uint64_t gwb_cnt               : 8;  /**< [ 47: 40](RO/H) Number of group write buffer entries currently in use. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_lf_inprog_s cn; */
};
typedef union bdk_cptx_lf_inprog bdk_cptx_lf_inprog_t;

static inline uint64_t BDK_CPTX_LF_INPROG(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_LF_INPROG(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && (a==0))
        return 0x840200a00040ll + 0x100000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && (a<=1))
        return 0x840200a00040ll + 0x100000ll * ((a) & 0x1);
    if (bdk_is_model(OCTEONTX_CN98XX) && (a<=1))
        return 0x840200a00040ll + 0x100000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_LF_INPROG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_LF_INPROG(a) bdk_cptx_lf_inprog_t
#define bustype_BDK_CPTX_LF_INPROG(a) BDK_CSR_TYPE_RVU_PFVF_BAR2
#define basename_BDK_CPTX_LF_INPROG(a) "CPTX_LF_INPROG"
#define device_bar_BDK_CPTX_LF_INPROG(a) 0x2 /* RVU_BAR2 */
#define busnum_BDK_CPTX_LF_INPROG(a) (a)
#define arguments_BDK_CPTX_LF_INPROG(a) (a),-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) cpt#_lf_misc_int
 *
 * CPT Queue Misc Interrupt Register
 * These registers contain the per-queue miscellaneous interrupts.
 */
union bdk_cptx_lf_misc_int
{
    uint64_t u;
    struct bdk_cptx_lf_misc_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t fault                 : 1;  /**< [  6:  6](R/W1C/H) Memory error detected while executing a CPT_INST_S in the LF. See also
                                                                 CPT_COMP_E::FAULT. CPT sets [FAULT] for memory errors occurring due to
                                                                 engine accesses of CPT_INST_S[DPTR,RPTR,CPTR,NIXTX_ADDR] addresses.

                                                                 CPT does not set [FAULT] on memory errors encountered on the CPT_RES_S
                                                                 write (see [NWRP] and CPT_INST_S[RES_ADDR]). CPT also does not set [FAULT]
                                                                 on errors encountered receiving/enqueueing the CPT_INST_S itself, but
                                                                 CPT_COMP_E::FAULT can occur due to these errors (see [IRDE] and
                                                                 CPT_LF_Q_BASE[FAULT]).

                                                                 CPT typically sets [FAULT] on an SMMU translation fault, but if
                                                                 CPT_AF_CTL[RD_PSN_IGN]=0, it will also set [FAULT] when the LF receives
                                                                 poison.

                                                                 Internal:
                                                                 This is EXE_LD_FAULT and EXE_ST_FAULT on an engine executing a CPT_INST_S
                                                                 for the LF, and NIX_LD_FAULT generated for the LF. */
        uint64_t hwerr                 : 1;  /**< [  5:  5](R/W1C/H) Uncorrectable hardware error from an engine executing a CPT_INST_S for the
                                                                 LF. The uncorrectable errors include microcode memory fetch errors, double-bit
                                                                 error, and watchdog. See also CPT_COMP_E::HWERR and CPT_AF_FLT()_INT.

                                                                 CPT can set [HWERR] when the engine has an error while fetching microcode (from
                                                                 CPT_AF_EXE()_UCODE_BASE). This may typically be due SMMU translation fault, but
                                                                 if CPT_AF_CTL[RD_PSN_IGN]=0, it can also be due to receiving poison.

                                                                 Internal:
                                                                 This is EXE_WDOG, EXE_RF_DBE, and EXE_UC_ERR on an engine executing a
                                                                 CPT_INST_S for the LF. EXE_UC_ERR is fault/poison on microcode fetch. */
        uint64_t reserved_4            : 1;
        uint64_t nwrp                  : 1;  /**< [  3:  3](R/W1C/H) CPT received an SMMU fault while writing a CPT_RES_S to CPT_INST_S[RES_ADDR]
                                                                 for the LF. */
        uint64_t irde                  : 1;  /**< [  2:  2](R/W1C/H) CPT encountered a memory error when accessing the instruction
                                                                 memory queue near CPT_LF_Q_BASE[ADDR].

                                                                 The instruction memory queue includes the CPT_INST_S memory queue
                                                                 (see CPT_LF_Q_INST_PTR), the corresponding CPT_INST_S[EGRP] memory
                                                                 queue (see CPT_LF_Q_GRP_PTR), and the flow control location (see
                                                                 CPT_LF_CTL[FC_ENA]).

                                                                 CPT sets [IRDE] upon an SMMU fault accessing the memory location.
                                                                 If CPT_AF_CTL[RD_PSN_IGN]=0, CPT also sets [IRDE] when it encounters
                                                                 poison on an instruction memory queue read. CPT also sets [IRDE]
                                                                 whenever it stops the queue - see CPT_LF_Q_BASE[STOPPED].

                                                                 CPT sets CPT_LF_Q_BASE[FAULT] whenever it would set [IRDE],
                                                                 ensuring that instructions executed in the queue fail. See also
                                                                 CPT_COMP_E::FAULT.

                                                                 Internal:
                                                                 Occurs due to these: QUE_ST_FAULT (GRP/INST/FC MEM_Q), QUE_LD_FAULT
                                                                 (GRP/INST MEM_Q). */
        uint64_t nqerr                 : 1;  /**< [  1:  1](R/W1C/H) CPT encountered an error enqueuing an instruction (received at CPT_LF_NQ()).

                                                                 CPT sets [NQERR] in the following situations:

                                                                 * CPT discarded a received CPT_INST_S because CPT_LF_CTL[ENA]=0.

                                                                 * CPT discarded a received CPT_INST_S because CPT_AF_LF()_CTL[GRP\<x\>]=0,
                                                                 where x = CPT_INST_S[EGRP].

                                                                 * CPT discarded a received CPT_INST_S due to queue overflow.
                                                                 CPT_LF_Q_SIZE[SIZE_DIV40] describes the effective queue size to software.
                                                                 CPT always clears CPT_LF_CTL[ENA] when this queue overflow error occurs
                                                                 (regardless of CPT_AF_LF()_CTL[CONT_ERR] settings).

                                                                 * CPT received a partial CPT_INST_S. CPT always sets [NQERR] in this case, but
                                                                 it is implementation-dependent what CPT does with the partial instruction. CPT
                                                                 may simply discard the CPT_INST_S. CPT may partially or fully execute the
                                                                 CPT_INST_S, including possibly signaling CPT_COMP_E::INSTERR. If CPT partially
                                                                 executes the instruction, unpredictable errors can result. See also
                                                                 CPT_COMP_E::INSTERR.

                                                                 * CPT encountered a CPT_INST_S with CPT_INST_S[NIXTXL]!=0x0 when
                                                                 CPT_AF_LF()_CTL[NIXTX_EN]=0. See CPT_COMP_E::INSTERR.

                                                                 * CPT encountered a CPT_INST_S with CPT_INST_S[NIXTXL]!=0x0 and
                                                                 CPT_INST_S[QORD]=0. See CPT_COMP_E::INSTERR.

                                                                 Note that when CPT_AF_LF()_CTL[CONT_ERR]=0, CPT clears CPT_LF_CTL[ENA]
                                                                 when any bit in this register gets set. This will indirectly
                                                                 cause [NQERR] to be set if instructions are simultaneously being
                                                                 enqueued.

                                                                 Internal:
                                                                 This error was too difficult to implement:

                                                                 * CPT received an instruction from an AP when CPT_AF_LF()_CTL[PF_FUNC_INST]=1.

                                                                 This was originally included as an error above (and present in T93 A0 and B0(A1)
                                                                 hardware), but removed to improve VPP capabilities. See mcbuggin 36656:

                                                                 * CPT encountered a CPT_INST_S with CPT_INST_S[QORD]=1 and neither
                                                                 CPT_INST_S[NIXTXL]!=0x0 nor CPT_INST_S[WQE_PTR]!=0x0. See
                                                                 CPT_COMP_E::INSTERR.

                                                                 In the overflow case, the current CPT implementation writes the CPT_INST_S's to
                                                                 memory, but effectively drops them because it doesn't advance
                                                                 CPT_LF_Q_INST_PTR[NQ_PTR].

                                                                 In the partial CPT_INST_S case, the current CPT implementation pads the
                                                                 CPT_INST_S with zeros and executes the instruction "as normal".

                                                                 The internal comment for CPT_COMP_E::INSTERR describes how CPT executes
                                                                 most of these errors. */
        uint64_t reserved_0            : 1;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0            : 1;
        uint64_t nqerr                 : 1;  /**< [  1:  1](R/W1C/H) CPT encountered an error enqueuing an instruction (received at CPT_LF_NQ()).

                                                                 CPT sets [NQERR] in the following situations:

                                                                 * CPT discarded a received CPT_INST_S because CPT_LF_CTL[ENA]=0.

                                                                 * CPT discarded a received CPT_INST_S because CPT_AF_LF()_CTL[GRP\<x\>]=0,
                                                                 where x = CPT_INST_S[EGRP].

                                                                 * CPT discarded a received CPT_INST_S due to queue overflow.
                                                                 CPT_LF_Q_SIZE[SIZE_DIV40] describes the effective queue size to software.
                                                                 CPT always clears CPT_LF_CTL[ENA] when this queue overflow error occurs
                                                                 (regardless of CPT_AF_LF()_CTL[CONT_ERR] settings).

                                                                 * CPT received a partial CPT_INST_S. CPT always sets [NQERR] in this case, but
                                                                 it is implementation-dependent what CPT does with the partial instruction. CPT
                                                                 may simply discard the CPT_INST_S. CPT may partially or fully execute the
                                                                 CPT_INST_S, including possibly signaling CPT_COMP_E::INSTERR. If CPT partially
                                                                 executes the instruction, unpredictable errors can result. See also
                                                                 CPT_COMP_E::INSTERR.

                                                                 * CPT encountered a CPT_INST_S with CPT_INST_S[NIXTXL]!=0x0 when
                                                                 CPT_AF_LF()_CTL[NIXTX_EN]=0. See CPT_COMP_E::INSTERR.

                                                                 * CPT encountered a CPT_INST_S with CPT_INST_S[NIXTXL]!=0x0 and
                                                                 CPT_INST_S[QORD]=0. See CPT_COMP_E::INSTERR.

                                                                 Note that when CPT_AF_LF()_CTL[CONT_ERR]=0, CPT clears CPT_LF_CTL[ENA]
                                                                 when any bit in this register gets set. This will indirectly
                                                                 cause [NQERR] to be set if instructions are simultaneously being
                                                                 enqueued.

                                                                 Internal:
                                                                 This error was too difficult to implement:

                                                                 * CPT received an instruction from an AP when CPT_AF_LF()_CTL[PF_FUNC_INST]=1.

                                                                 This was originally included as an error above (and present in T93 A0 and B0(A1)
                                                                 hardware), but removed to improve VPP capabilities. See mcbuggin 36656:

                                                                 * CPT encountered a CPT_INST_S with CPT_INST_S[QORD]=1 and neither
                                                                 CPT_INST_S[NIXTXL]!=0x0 nor CPT_INST_S[WQE_PTR]!=0x0. See
                                                                 CPT_COMP_E::INSTERR.

                                                                 In the overflow case, the current CPT implementation writes the CPT_INST_S's to
                                                                 memory, but effectively drops them because it doesn't advance
                                                                 CPT_LF_Q_INST_PTR[NQ_PTR].

                                                                 In the partial CPT_INST_S case, the current CPT implementation pads the
                                                                 CPT_INST_S with zeros and executes the instruction "as normal".

                                                                 The internal comment for CPT_COMP_E::INSTERR describes how CPT executes
                                                                 most of these errors. */
        uint64_t irde                  : 1;  /**< [  2:  2](R/W1C/H) CPT encountered a memory error when accessing the instruction
                                                                 memory queue near CPT_LF_Q_BASE[ADDR].

                                                                 The instruction memory queue includes the CPT_INST_S memory queue
                                                                 (see CPT_LF_Q_INST_PTR), the corresponding CPT_INST_S[EGRP] memory
                                                                 queue (see CPT_LF_Q_GRP_PTR), and the flow control location (see
                                                                 CPT_LF_CTL[FC_ENA]).

                                                                 CPT sets [IRDE] upon an SMMU fault accessing the memory location.
                                                                 If CPT_AF_CTL[RD_PSN_IGN]=0, CPT also sets [IRDE] when it encounters
                                                                 poison on an instruction memory queue read. CPT also sets [IRDE]
                                                                 whenever it stops the queue - see CPT_LF_Q_BASE[STOPPED].

                                                                 CPT sets CPT_LF_Q_BASE[FAULT] whenever it would set [IRDE],
                                                                 ensuring that instructions executed in the queue fail. See also
                                                                 CPT_COMP_E::FAULT.

                                                                 Internal:
                                                                 Occurs due to these: QUE_ST_FAULT (GRP/INST/FC MEM_Q), QUE_LD_FAULT
                                                                 (GRP/INST MEM_Q). */
        uint64_t nwrp                  : 1;  /**< [  3:  3](R/W1C/H) CPT received an SMMU fault while writing a CPT_RES_S to CPT_INST_S[RES_ADDR]
                                                                 for the LF. */
        uint64_t reserved_4            : 1;
        uint64_t hwerr                 : 1;  /**< [  5:  5](R/W1C/H) Uncorrectable hardware error from an engine executing a CPT_INST_S for the
                                                                 LF. The uncorrectable errors include microcode memory fetch errors, double-bit
                                                                 error, and watchdog. See also CPT_COMP_E::HWERR and CPT_AF_FLT()_INT.

                                                                 CPT can set [HWERR] when the engine has an error while fetching microcode (from
                                                                 CPT_AF_EXE()_UCODE_BASE). This may typically be due SMMU translation fault, but
                                                                 if CPT_AF_CTL[RD_PSN_IGN]=0, it can also be due to receiving poison.

                                                                 Internal:
                                                                 This is EXE_WDOG, EXE_RF_DBE, and EXE_UC_ERR on an engine executing a
                                                                 CPT_INST_S for the LF. EXE_UC_ERR is fault/poison on microcode fetch. */
        uint64_t fault                 : 1;  /**< [  6:  6](R/W1C/H) Memory error detected while executing a CPT_INST_S in the LF. See also
                                                                 CPT_COMP_E::FAULT. CPT sets [FAULT] for memory errors occurring due to
                                                                 engine accesses of CPT_INST_S[DPTR,RPTR,CPTR,NIXTX_ADDR] addresses.

                                                                 CPT does not set [FAULT] on memory errors encountered on the CPT_RES_S
                                                                 write (see [NWRP] and CPT_INST_S[RES_ADDR]). CPT also does not set [FAULT]
                                                                 on errors encountered receiving/enqueueing the CPT_INST_S itself, but
                                                                 CPT_COMP_E::FAULT can occur due to these errors (see [IRDE] and
                                                                 CPT_LF_Q_BASE[FAULT]).

                                                                 CPT typically sets [FAULT] on an SMMU translation fault, but if
                                                                 CPT_AF_CTL[RD_PSN_IGN]=0, it will also set [FAULT] when the LF receives
                                                                 poison.

                                                                 Internal:
                                                                 This is EXE_LD_FAULT and EXE_ST_FAULT on an engine executing a CPT_INST_S
                                                                 for the LF, and NIX_LD_FAULT generated for the LF. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_lf_misc_int_s cn; */
};
typedef union bdk_cptx_lf_misc_int bdk_cptx_lf_misc_int_t;

static inline uint64_t BDK_CPTX_LF_MISC_INT(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_LF_MISC_INT(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && (a==0))
        return 0x840200a000b0ll + 0x100000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && (a<=1))
        return 0x840200a000b0ll + 0x100000ll * ((a) & 0x1);
    if (bdk_is_model(OCTEONTX_CN98XX) && (a<=1))
        return 0x840200a000b0ll + 0x100000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_LF_MISC_INT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_LF_MISC_INT(a) bdk_cptx_lf_misc_int_t
#define bustype_BDK_CPTX_LF_MISC_INT(a) BDK_CSR_TYPE_RVU_PFVF_BAR2
#define basename_BDK_CPTX_LF_MISC_INT(a) "CPTX_LF_MISC_INT"
#define device_bar_BDK_CPTX_LF_MISC_INT(a) 0x2 /* RVU_BAR2 */
#define busnum_BDK_CPTX_LF_MISC_INT(a) (a)
#define arguments_BDK_CPTX_LF_MISC_INT(a) (a),-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) cpt#_lf_misc_int_ena_w1c
 *
 * CPT Queue Misc Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union bdk_cptx_lf_misc_int_ena_w1c
{
    uint64_t u;
    struct bdk_cptx_lf_misc_int_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t fault                 : 1;  /**< [  6:  6](R/W1C/H) Reads or clears enable for CPT_LF_MISC_INT[FAULT].
                                                                 Internal:
                                                                 This is EXE_LD_FAULT and EXE_ST_FAULT on an engine executing a CPT_INST_S
                                                                 for the LF, and NIX_LD_FAULT generated for the LF. */
        uint64_t hwerr                 : 1;  /**< [  5:  5](R/W1C/H) Reads or clears enable for CPT_LF_MISC_INT[HWERR].
                                                                 Internal:
                                                                 This is EXE_WDOG, EXE_RF_DBE, and EXE_UC_ERR on an engine executing a
                                                                 CPT_INST_S for the LF. EXE_UC_ERR is fault/poison on microcode fetch. */
        uint64_t reserved_4            : 1;
        uint64_t nwrp                  : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for CPT_LF_MISC_INT[NWRP]. */
        uint64_t irde                  : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for CPT_LF_MISC_INT[IRDE].
                                                                 Internal:
                                                                 Occurs due to these: QUE_ST_FAULT (GRP/INST/FC MEM_Q), QUE_LD_FAULT
                                                                 (GRP/INST MEM_Q). */
        uint64_t nqerr                 : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for CPT_LF_MISC_INT[NQERR].
                                                                 Internal:
                                                                 This error was too difficult to implement:

                                                                 * CPT received an instruction from an AP when CPT_AF_LF()_CTL[PF_FUNC_INST]=1.

                                                                 This was originally included as an error above (and present in T93 A0 and B0(A1)
                                                                 hardware), but removed to improve VPP capabilities. See mcbuggin 36656:

                                                                 * CPT encountered a CPT_INST_S with CPT_INST_S[QORD]=1 and neither
                                                                 CPT_INST_S[NIXTXL]!=0x0 nor CPT_INST_S[WQE_PTR]!=0x0. See
                                                                 CPT_COMP_E::INSTERR.

                                                                 In the overflow case, the current CPT implementation writes the CPT_INST_S's to
                                                                 memory, but effectively drops them because it doesn't advance
                                                                 CPT_LF_Q_INST_PTR[NQ_PTR].

                                                                 In the partial CPT_INST_S case, the current CPT implementation pads the
                                                                 CPT_INST_S with zeros and executes the instruction "as normal".

                                                                 The internal comment for CPT_COMP_E::INSTERR describes how CPT executes
                                                                 most of these errors. */
        uint64_t reserved_0            : 1;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0            : 1;
        uint64_t nqerr                 : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for CPT_LF_MISC_INT[NQERR].
                                                                 Internal:
                                                                 This error was too difficult to implement:

                                                                 * CPT received an instruction from an AP when CPT_AF_LF()_CTL[PF_FUNC_INST]=1.

                                                                 This was originally included as an error above (and present in T93 A0 and B0(A1)
                                                                 hardware), but removed to improve VPP capabilities. See mcbuggin 36656:

                                                                 * CPT encountered a CPT_INST_S with CPT_INST_S[QORD]=1 and neither
                                                                 CPT_INST_S[NIXTXL]!=0x0 nor CPT_INST_S[WQE_PTR]!=0x0. See
                                                                 CPT_COMP_E::INSTERR.

                                                                 In the overflow case, the current CPT implementation writes the CPT_INST_S's to
                                                                 memory, but effectively drops them because it doesn't advance
                                                                 CPT_LF_Q_INST_PTR[NQ_PTR].

                                                                 In the partial CPT_INST_S case, the current CPT implementation pads the
                                                                 CPT_INST_S with zeros and executes the instruction "as normal".

                                                                 The internal comment for CPT_COMP_E::INSTERR describes how CPT executes
                                                                 most of these errors. */
        uint64_t irde                  : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for CPT_LF_MISC_INT[IRDE].
                                                                 Internal:
                                                                 Occurs due to these: QUE_ST_FAULT (GRP/INST/FC MEM_Q), QUE_LD_FAULT
                                                                 (GRP/INST MEM_Q). */
        uint64_t nwrp                  : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for CPT_LF_MISC_INT[NWRP]. */
        uint64_t reserved_4            : 1;
        uint64_t hwerr                 : 1;  /**< [  5:  5](R/W1C/H) Reads or clears enable for CPT_LF_MISC_INT[HWERR].
                                                                 Internal:
                                                                 This is EXE_WDOG, EXE_RF_DBE, and EXE_UC_ERR on an engine executing a
                                                                 CPT_INST_S for the LF. EXE_UC_ERR is fault/poison on microcode fetch. */
        uint64_t fault                 : 1;  /**< [  6:  6](R/W1C/H) Reads or clears enable for CPT_LF_MISC_INT[FAULT].
                                                                 Internal:
                                                                 This is EXE_LD_FAULT and EXE_ST_FAULT on an engine executing a CPT_INST_S
                                                                 for the LF, and NIX_LD_FAULT generated for the LF. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_lf_misc_int_ena_w1c_s cn; */
};
typedef union bdk_cptx_lf_misc_int_ena_w1c bdk_cptx_lf_misc_int_ena_w1c_t;

static inline uint64_t BDK_CPTX_LF_MISC_INT_ENA_W1C(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_LF_MISC_INT_ENA_W1C(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && (a==0))
        return 0x840200a000e0ll + 0x100000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && (a<=1))
        return 0x840200a000e0ll + 0x100000ll * ((a) & 0x1);
    if (bdk_is_model(OCTEONTX_CN98XX) && (a<=1))
        return 0x840200a000e0ll + 0x100000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_LF_MISC_INT_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_LF_MISC_INT_ENA_W1C(a) bdk_cptx_lf_misc_int_ena_w1c_t
#define bustype_BDK_CPTX_LF_MISC_INT_ENA_W1C(a) BDK_CSR_TYPE_RVU_PFVF_BAR2
#define basename_BDK_CPTX_LF_MISC_INT_ENA_W1C(a) "CPTX_LF_MISC_INT_ENA_W1C"
#define device_bar_BDK_CPTX_LF_MISC_INT_ENA_W1C(a) 0x2 /* RVU_BAR2 */
#define busnum_BDK_CPTX_LF_MISC_INT_ENA_W1C(a) (a)
#define arguments_BDK_CPTX_LF_MISC_INT_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) cpt#_lf_misc_int_ena_w1s
 *
 * CPT Queue Misc Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union bdk_cptx_lf_misc_int_ena_w1s
{
    uint64_t u;
    struct bdk_cptx_lf_misc_int_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t fault                 : 1;  /**< [  6:  6](R/W1S/H) Reads or sets enable for CPT_LF_MISC_INT[FAULT].
                                                                 Internal:
                                                                 This is EXE_LD_FAULT and EXE_ST_FAULT on an engine executing a CPT_INST_S
                                                                 for the LF, and NIX_LD_FAULT generated for the LF. */
        uint64_t hwerr                 : 1;  /**< [  5:  5](R/W1S/H) Reads or sets enable for CPT_LF_MISC_INT[HWERR].
                                                                 Internal:
                                                                 This is EXE_WDOG, EXE_RF_DBE, and EXE_UC_ERR on an engine executing a
                                                                 CPT_INST_S for the LF. EXE_UC_ERR is fault/poison on microcode fetch. */
        uint64_t reserved_4            : 1;
        uint64_t nwrp                  : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for CPT_LF_MISC_INT[NWRP]. */
        uint64_t irde                  : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for CPT_LF_MISC_INT[IRDE].
                                                                 Internal:
                                                                 Occurs due to these: QUE_ST_FAULT (GRP/INST/FC MEM_Q), QUE_LD_FAULT
                                                                 (GRP/INST MEM_Q). */
        uint64_t nqerr                 : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for CPT_LF_MISC_INT[NQERR].
                                                                 Internal:
                                                                 This error was too difficult to implement:

                                                                 * CPT received an instruction from an AP when CPT_AF_LF()_CTL[PF_FUNC_INST]=1.

                                                                 This was originally included as an error above (and present in T93 A0 and B0(A1)
                                                                 hardware), but removed to improve VPP capabilities. See mcbuggin 36656:

                                                                 * CPT encountered a CPT_INST_S with CPT_INST_S[QORD]=1 and neither
                                                                 CPT_INST_S[NIXTXL]!=0x0 nor CPT_INST_S[WQE_PTR]!=0x0. See
                                                                 CPT_COMP_E::INSTERR.

                                                                 In the overflow case, the current CPT implementation writes the CPT_INST_S's to
                                                                 memory, but effectively drops them because it doesn't advance
                                                                 CPT_LF_Q_INST_PTR[NQ_PTR].

                                                                 In the partial CPT_INST_S case, the current CPT implementation pads the
                                                                 CPT_INST_S with zeros and executes the instruction "as normal".

                                                                 The internal comment for CPT_COMP_E::INSTERR describes how CPT executes
                                                                 most of these errors. */
        uint64_t reserved_0            : 1;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0            : 1;
        uint64_t nqerr                 : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for CPT_LF_MISC_INT[NQERR].
                                                                 Internal:
                                                                 This error was too difficult to implement:

                                                                 * CPT received an instruction from an AP when CPT_AF_LF()_CTL[PF_FUNC_INST]=1.

                                                                 This was originally included as an error above (and present in T93 A0 and B0(A1)
                                                                 hardware), but removed to improve VPP capabilities. See mcbuggin 36656:

                                                                 * CPT encountered a CPT_INST_S with CPT_INST_S[QORD]=1 and neither
                                                                 CPT_INST_S[NIXTXL]!=0x0 nor CPT_INST_S[WQE_PTR]!=0x0. See
                                                                 CPT_COMP_E::INSTERR.

                                                                 In the overflow case, the current CPT implementation writes the CPT_INST_S's to
                                                                 memory, but effectively drops them because it doesn't advance
                                                                 CPT_LF_Q_INST_PTR[NQ_PTR].

                                                                 In the partial CPT_INST_S case, the current CPT implementation pads the
                                                                 CPT_INST_S with zeros and executes the instruction "as normal".

                                                                 The internal comment for CPT_COMP_E::INSTERR describes how CPT executes
                                                                 most of these errors. */
        uint64_t irde                  : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for CPT_LF_MISC_INT[IRDE].
                                                                 Internal:
                                                                 Occurs due to these: QUE_ST_FAULT (GRP/INST/FC MEM_Q), QUE_LD_FAULT
                                                                 (GRP/INST MEM_Q). */
        uint64_t nwrp                  : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for CPT_LF_MISC_INT[NWRP]. */
        uint64_t reserved_4            : 1;
        uint64_t hwerr                 : 1;  /**< [  5:  5](R/W1S/H) Reads or sets enable for CPT_LF_MISC_INT[HWERR].
                                                                 Internal:
                                                                 This is EXE_WDOG, EXE_RF_DBE, and EXE_UC_ERR on an engine executing a
                                                                 CPT_INST_S for the LF. EXE_UC_ERR is fault/poison on microcode fetch. */
        uint64_t fault                 : 1;  /**< [  6:  6](R/W1S/H) Reads or sets enable for CPT_LF_MISC_INT[FAULT].
                                                                 Internal:
                                                                 This is EXE_LD_FAULT and EXE_ST_FAULT on an engine executing a CPT_INST_S
                                                                 for the LF, and NIX_LD_FAULT generated for the LF. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_lf_misc_int_ena_w1s_s cn; */
};
typedef union bdk_cptx_lf_misc_int_ena_w1s bdk_cptx_lf_misc_int_ena_w1s_t;

static inline uint64_t BDK_CPTX_LF_MISC_INT_ENA_W1S(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_LF_MISC_INT_ENA_W1S(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && (a==0))
        return 0x840200a000d0ll + 0x100000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && (a<=1))
        return 0x840200a000d0ll + 0x100000ll * ((a) & 0x1);
    if (bdk_is_model(OCTEONTX_CN98XX) && (a<=1))
        return 0x840200a000d0ll + 0x100000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_LF_MISC_INT_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_LF_MISC_INT_ENA_W1S(a) bdk_cptx_lf_misc_int_ena_w1s_t
#define bustype_BDK_CPTX_LF_MISC_INT_ENA_W1S(a) BDK_CSR_TYPE_RVU_PFVF_BAR2
#define basename_BDK_CPTX_LF_MISC_INT_ENA_W1S(a) "CPTX_LF_MISC_INT_ENA_W1S"
#define device_bar_BDK_CPTX_LF_MISC_INT_ENA_W1S(a) 0x2 /* RVU_BAR2 */
#define busnum_BDK_CPTX_LF_MISC_INT_ENA_W1S(a) (a)
#define arguments_BDK_CPTX_LF_MISC_INT_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) cpt#_lf_misc_int_w1s
 *
 * CPT Queue Misc Interrupt Set Register
 * This register sets interrupt bits.
 */
union bdk_cptx_lf_misc_int_w1s
{
    uint64_t u;
    struct bdk_cptx_lf_misc_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t fault                 : 1;  /**< [  6:  6](R/W1S/H) Reads or sets CPT_LF_MISC_INT[FAULT].
                                                                 Internal:
                                                                 This is EXE_LD_FAULT and EXE_ST_FAULT on an engine executing a CPT_INST_S
                                                                 for the LF, and NIX_LD_FAULT generated for the LF. */
        uint64_t hwerr                 : 1;  /**< [  5:  5](R/W1S/H) Reads or sets CPT_LF_MISC_INT[HWERR].
                                                                 Internal:
                                                                 This is EXE_WDOG, EXE_RF_DBE, and EXE_UC_ERR on an engine executing a
                                                                 CPT_INST_S for the LF. EXE_UC_ERR is fault/poison on microcode fetch. */
        uint64_t reserved_4            : 1;
        uint64_t nwrp                  : 1;  /**< [  3:  3](R/W1S/H) Reads or sets CPT_LF_MISC_INT[NWRP]. */
        uint64_t irde                  : 1;  /**< [  2:  2](R/W1S/H) Reads or sets CPT_LF_MISC_INT[IRDE].
                                                                 Internal:
                                                                 Occurs due to these: QUE_ST_FAULT (GRP/INST/FC MEM_Q), QUE_LD_FAULT
                                                                 (GRP/INST MEM_Q). */
        uint64_t nqerr                 : 1;  /**< [  1:  1](R/W1S/H) Reads or sets CPT_LF_MISC_INT[NQERR].
                                                                 Internal:
                                                                 This error was too difficult to implement:

                                                                 * CPT received an instruction from an AP when CPT_AF_LF()_CTL[PF_FUNC_INST]=1.

                                                                 This was originally included as an error above (and present in T93 A0 and B0(A1)
                                                                 hardware), but removed to improve VPP capabilities. See mcbuggin 36656:

                                                                 * CPT encountered a CPT_INST_S with CPT_INST_S[QORD]=1 and neither
                                                                 CPT_INST_S[NIXTXL]!=0x0 nor CPT_INST_S[WQE_PTR]!=0x0. See
                                                                 CPT_COMP_E::INSTERR.

                                                                 In the overflow case, the current CPT implementation writes the CPT_INST_S's to
                                                                 memory, but effectively drops them because it doesn't advance
                                                                 CPT_LF_Q_INST_PTR[NQ_PTR].

                                                                 In the partial CPT_INST_S case, the current CPT implementation pads the
                                                                 CPT_INST_S with zeros and executes the instruction "as normal".

                                                                 The internal comment for CPT_COMP_E::INSTERR describes how CPT executes
                                                                 most of these errors. */
        uint64_t reserved_0            : 1;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0            : 1;
        uint64_t nqerr                 : 1;  /**< [  1:  1](R/W1S/H) Reads or sets CPT_LF_MISC_INT[NQERR].
                                                                 Internal:
                                                                 This error was too difficult to implement:

                                                                 * CPT received an instruction from an AP when CPT_AF_LF()_CTL[PF_FUNC_INST]=1.

                                                                 This was originally included as an error above (and present in T93 A0 and B0(A1)
                                                                 hardware), but removed to improve VPP capabilities. See mcbuggin 36656:

                                                                 * CPT encountered a CPT_INST_S with CPT_INST_S[QORD]=1 and neither
                                                                 CPT_INST_S[NIXTXL]!=0x0 nor CPT_INST_S[WQE_PTR]!=0x0. See
                                                                 CPT_COMP_E::INSTERR.

                                                                 In the overflow case, the current CPT implementation writes the CPT_INST_S's to
                                                                 memory, but effectively drops them because it doesn't advance
                                                                 CPT_LF_Q_INST_PTR[NQ_PTR].

                                                                 In the partial CPT_INST_S case, the current CPT implementation pads the
                                                                 CPT_INST_S with zeros and executes the instruction "as normal".

                                                                 The internal comment for CPT_COMP_E::INSTERR describes how CPT executes
                                                                 most of these errors. */
        uint64_t irde                  : 1;  /**< [  2:  2](R/W1S/H) Reads or sets CPT_LF_MISC_INT[IRDE].
                                                                 Internal:
                                                                 Occurs due to these: QUE_ST_FAULT (GRP/INST/FC MEM_Q), QUE_LD_FAULT
                                                                 (GRP/INST MEM_Q). */
        uint64_t nwrp                  : 1;  /**< [  3:  3](R/W1S/H) Reads or sets CPT_LF_MISC_INT[NWRP]. */
        uint64_t reserved_4            : 1;
        uint64_t hwerr                 : 1;  /**< [  5:  5](R/W1S/H) Reads or sets CPT_LF_MISC_INT[HWERR].
                                                                 Internal:
                                                                 This is EXE_WDOG, EXE_RF_DBE, and EXE_UC_ERR on an engine executing a
                                                                 CPT_INST_S for the LF. EXE_UC_ERR is fault/poison on microcode fetch. */
        uint64_t fault                 : 1;  /**< [  6:  6](R/W1S/H) Reads or sets CPT_LF_MISC_INT[FAULT].
                                                                 Internal:
                                                                 This is EXE_LD_FAULT and EXE_ST_FAULT on an engine executing a CPT_INST_S
                                                                 for the LF, and NIX_LD_FAULT generated for the LF. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_lf_misc_int_w1s_s cn; */
};
typedef union bdk_cptx_lf_misc_int_w1s bdk_cptx_lf_misc_int_w1s_t;

static inline uint64_t BDK_CPTX_LF_MISC_INT_W1S(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_LF_MISC_INT_W1S(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && (a==0))
        return 0x840200a000c0ll + 0x100000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && (a<=1))
        return 0x840200a000c0ll + 0x100000ll * ((a) & 0x1);
    if (bdk_is_model(OCTEONTX_CN98XX) && (a<=1))
        return 0x840200a000c0ll + 0x100000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_LF_MISC_INT_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_LF_MISC_INT_W1S(a) bdk_cptx_lf_misc_int_w1s_t
#define bustype_BDK_CPTX_LF_MISC_INT_W1S(a) BDK_CSR_TYPE_RVU_PFVF_BAR2
#define basename_BDK_CPTX_LF_MISC_INT_W1S(a) "CPTX_LF_MISC_INT_W1S"
#define device_bar_BDK_CPTX_LF_MISC_INT_W1S(a) 0x2 /* RVU_BAR2 */
#define busnum_BDK_CPTX_LF_MISC_INT_W1S(a) (a)
#define arguments_BDK_CPTX_LF_MISC_INT_W1S(a) (a),-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) cpt#_lf_nq#
 *
 * CPT Instruction Enqueue Registers
 */
union bdk_cptx_lf_nqx
{
    uint64_t u;
    struct bdk_cptx_lf_nqx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](WO) A 64-byte LMTST to this address (that starts writing at index 0) enqueues one CPT
                                                                 instruction. A 128-byte LMTST to this address (that starts writing at index 0)
                                                                 enqueues two CPT instructions. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](WO) A 64-byte LMTST to this address (that starts writing at index 0) enqueues one CPT
                                                                 instruction. A 128-byte LMTST to this address (that starts writing at index 0)
                                                                 enqueues two CPT instructions. */
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_lf_nqx_s cn; */
};
typedef union bdk_cptx_lf_nqx bdk_cptx_lf_nqx_t;

static inline uint64_t BDK_CPTX_LF_NQX(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_LF_NQX(unsigned long a, unsigned long b)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && ((a==0) && (b<=15)))
        return 0x840200a00400ll + 0x100000ll * ((a) & 0x0) + 8ll * ((b) & 0xf);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && ((a<=1) && (b<=15)))
        return 0x840200a00400ll + 0x100000ll * ((a) & 0x1) + 8ll * ((b) & 0xf);
    if (bdk_is_model(OCTEONTX_CN98XX) && ((a<=1) && (b<=15)))
        return 0x840200a00400ll + 0x100000ll * ((a) & 0x1) + 8ll * ((b) & 0xf);
    __bdk_csr_fatal("CPTX_LF_NQX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_LF_NQX(a,b) bdk_cptx_lf_nqx_t
#define bustype_BDK_CPTX_LF_NQX(a,b) BDK_CSR_TYPE_RVU_PFVF_BAR2
#define basename_BDK_CPTX_LF_NQX(a,b) "CPTX_LF_NQX"
#define device_bar_BDK_CPTX_LF_NQX(a,b) 0x2 /* RVU_BAR2 */
#define busnum_BDK_CPTX_LF_NQX(a,b) (a)
#define arguments_BDK_CPTX_LF_NQX(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PFVF_BAR2) cpt#_lf_q_base
 *
 * CPT Instruction Queue Base Registers
 * CPT initializes these CSR fields to these values on any CPT_LF_Q_BASE write:
 * _ CPT_LF_Q_INST_PTR[XQ_XOR]=0.
 * _ CPT_LF_Q_INST_PTR[NQ_PTR]=2.
 * _ CPT_LF_Q_INST_PTR[DQ_PTR]=2.
 * _ CPT_LF_Q_GRP_PTR[XQ_XOR]=0.
 * _ CPT_LF_Q_GRP_PTR[NQ_PTR]=1.
 * _ CPT_LF_Q_GRP_PTR[DQ_PTR]=1.
 */
union bdk_cptx_lf_q_base
{
    uint64_t u;
    struct bdk_cptx_lf_q_base_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_53_63        : 11;
        uint64_t addr                  : 46; /**< [ 52:  7](R/W) LF IOVA base address for the instruction memory queue. See CPT_LF_CTL[ENA].
                                                                 The instruction memory queue includes the CPT_INST_S memory queue (see
                                                                 CPT_LF_Q_INST_PTR), the corresponding CPT_INST_S[EGRP] memory queue
                                                                 (see CPT_LF_Q_GRP_PTR), and the flow control location (see
                                                                 CPT_LF_CTL[FC_ENA]).

                                                                 CPT may set CPT_LF_MISC_INT[IRDE] and [STOPPED,FAULT] on memory errors detected
                                                                 from [ADDR]. */
        uint64_t reserved_2_6          : 5;
        uint64_t stopped               : 1;  /**< [  1:  1](RO/H) CPT detected an error when reading the CPT_INST_S[EGRP] memory queue (see
                                                                 CPT_LF_Q_GRP_PTR). The LF/queue is hung, and [STOPPED] can only be cleared
                                                                 by a reset (e.g. CPT_AF_LF_RST).

                                                                 When CPT sets [STOPPED], it also sets CPT_LF_MISC_INT[IRDE]. */
        uint64_t fault                 : 1;  /**< [  0:  0](R/W/H) When set, CPT forces the CPT_RES_S[COMPCODE] of all instructions executed in the
                                                                 queue/LF to CPT_COMP_E::FAULT (except when the higher-priority CPT_COMP_E::HWERR
                                                                 occurs).

                                                                 CPT sets [FAULT] whenever it would set CPT_LF_MISC_INT[IRDE]. */
#else /* Word 0 - Little Endian */
        uint64_t fault                 : 1;  /**< [  0:  0](R/W/H) When set, CPT forces the CPT_RES_S[COMPCODE] of all instructions executed in the
                                                                 queue/LF to CPT_COMP_E::FAULT (except when the higher-priority CPT_COMP_E::HWERR
                                                                 occurs).

                                                                 CPT sets [FAULT] whenever it would set CPT_LF_MISC_INT[IRDE]. */
        uint64_t stopped               : 1;  /**< [  1:  1](RO/H) CPT detected an error when reading the CPT_INST_S[EGRP] memory queue (see
                                                                 CPT_LF_Q_GRP_PTR). The LF/queue is hung, and [STOPPED] can only be cleared
                                                                 by a reset (e.g. CPT_AF_LF_RST).

                                                                 When CPT sets [STOPPED], it also sets CPT_LF_MISC_INT[IRDE]. */
        uint64_t reserved_2_6          : 5;
        uint64_t addr                  : 46; /**< [ 52:  7](R/W) LF IOVA base address for the instruction memory queue. See CPT_LF_CTL[ENA].
                                                                 The instruction memory queue includes the CPT_INST_S memory queue (see
                                                                 CPT_LF_Q_INST_PTR), the corresponding CPT_INST_S[EGRP] memory queue
                                                                 (see CPT_LF_Q_GRP_PTR), and the flow control location (see
                                                                 CPT_LF_CTL[FC_ENA]).

                                                                 CPT may set CPT_LF_MISC_INT[IRDE] and [STOPPED,FAULT] on memory errors detected
                                                                 from [ADDR]. */
        uint64_t reserved_53_63        : 11;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_lf_q_base_s cn; */
};
typedef union bdk_cptx_lf_q_base bdk_cptx_lf_q_base_t;

static inline uint64_t BDK_CPTX_LF_Q_BASE(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_LF_Q_BASE(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && (a==0))
        return 0x840200a000f0ll + 0x100000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && (a<=1))
        return 0x840200a000f0ll + 0x100000ll * ((a) & 0x1);
    if (bdk_is_model(OCTEONTX_CN98XX) && (a<=1))
        return 0x840200a000f0ll + 0x100000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_LF_Q_BASE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_LF_Q_BASE(a) bdk_cptx_lf_q_base_t
#define bustype_BDK_CPTX_LF_Q_BASE(a) BDK_CSR_TYPE_RVU_PFVF_BAR2
#define basename_BDK_CPTX_LF_Q_BASE(a) "CPTX_LF_Q_BASE"
#define device_bar_BDK_CPTX_LF_Q_BASE(a) 0x2 /* RVU_BAR2 */
#define busnum_BDK_CPTX_LF_Q_BASE(a) (a)
#define arguments_BDK_CPTX_LF_Q_BASE(a) (a),-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) cpt#_lf_q_grp_ptr
 *
 * CPT Instruction Group Pointer Registers
 * CPT_INST_S[EGRP] memory queue state.
 */
union bdk_cptx_lf_q_grp_ptr
{
    uint64_t u;
    struct bdk_cptx_lf_q_grp_ptr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t xq_xor                : 1;  /**< [ 63: 63](R/W/H) Set when [NQ_PTR] is smaller than [DQ_PTR]. The current CPT_INST_S[EGRP]
                                                                 memory queue size (in 128-bit forty CPT_INST_S[EGRP] chunks) is
                                                                 ([XQ_XOR] * CPT_LF_Q_SIZE[SIZE_DIV40]) + [NQ_PTR] - [DQ_PTR].

                                                                 [XQ_XOR] must be zero when CPT_LF_CTL[ENA] transitions 0-\>1.

                                                                 CPT sets [XQ_XOR]=0 on any write to CPT_LF_Q_BASE or CPT_LF_Q_SIZE. */
        uint64_t reserved_47_62        : 16;
        uint64_t nq_ptr                : 15; /**< [ 46: 32](R/W/H) Indicates memory location where CPT will add the next 128-bit forty
                                                                 CPT_INST_S[EGRP] chunk to the memory queue. The corresponding memory
                                                                 address is (CPT_LF_Q_BASE[ADDR] \<\< 7) - ([NQ_PTR]*16).

                                                                 [NQ_PTR] must be in the range 1..CPT_LF_Q_SIZE[SIZE_DIV40] when the queue
                                                                 is used. [NQ_PTR] must be 1 when CPT_LF_CTL[ENA] transitions 0-\>1.

                                                                 CPT sets [NQ_PTR]=1 on any write to CPT_LF_Q_BASE or CPT_LF_Q_SIZE. */
        uint64_t reserved_15_31        : 17;
        uint64_t dq_ptr                : 15; /**< [ 14:  0](R/W/H) Indicates memory location where CPT will dequeue the next 128-bit forty
                                                                 CPT_INST_S[EGRP] chunk from the memory queue. The corresponding memory
                                                                 address is (CPT_LF_Q_BASE[ADDR] \<\< 7) - ([DQ_PTR]*16).

                                                                 [DQ_PTR] must be in the range 1..CPT_LF_Q_SIZE[SIZE_DIV40] when the queue
                                                                 is used. [DQ_PTR] must be 1 when CPT_LF_CTL[ENA] transitions 0-\>1.

                                                                 CPT sets [DQ_PTR]=1 on any write to CPT_LF_Q_BASE or CPT_LF_Q_SIZE. */
#else /* Word 0 - Little Endian */
        uint64_t dq_ptr                : 15; /**< [ 14:  0](R/W/H) Indicates memory location where CPT will dequeue the next 128-bit forty
                                                                 CPT_INST_S[EGRP] chunk from the memory queue. The corresponding memory
                                                                 address is (CPT_LF_Q_BASE[ADDR] \<\< 7) - ([DQ_PTR]*16).

                                                                 [DQ_PTR] must be in the range 1..CPT_LF_Q_SIZE[SIZE_DIV40] when the queue
                                                                 is used. [DQ_PTR] must be 1 when CPT_LF_CTL[ENA] transitions 0-\>1.

                                                                 CPT sets [DQ_PTR]=1 on any write to CPT_LF_Q_BASE or CPT_LF_Q_SIZE. */
        uint64_t reserved_15_31        : 17;
        uint64_t nq_ptr                : 15; /**< [ 46: 32](R/W/H) Indicates memory location where CPT will add the next 128-bit forty
                                                                 CPT_INST_S[EGRP] chunk to the memory queue. The corresponding memory
                                                                 address is (CPT_LF_Q_BASE[ADDR] \<\< 7) - ([NQ_PTR]*16).

                                                                 [NQ_PTR] must be in the range 1..CPT_LF_Q_SIZE[SIZE_DIV40] when the queue
                                                                 is used. [NQ_PTR] must be 1 when CPT_LF_CTL[ENA] transitions 0-\>1.

                                                                 CPT sets [NQ_PTR]=1 on any write to CPT_LF_Q_BASE or CPT_LF_Q_SIZE. */
        uint64_t reserved_47_62        : 16;
        uint64_t xq_xor                : 1;  /**< [ 63: 63](R/W/H) Set when [NQ_PTR] is smaller than [DQ_PTR]. The current CPT_INST_S[EGRP]
                                                                 memory queue size (in 128-bit forty CPT_INST_S[EGRP] chunks) is
                                                                 ([XQ_XOR] * CPT_LF_Q_SIZE[SIZE_DIV40]) + [NQ_PTR] - [DQ_PTR].

                                                                 [XQ_XOR] must be zero when CPT_LF_CTL[ENA] transitions 0-\>1.

                                                                 CPT sets [XQ_XOR]=0 on any write to CPT_LF_Q_BASE or CPT_LF_Q_SIZE. */
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_lf_q_grp_ptr_s cn; */
};
typedef union bdk_cptx_lf_q_grp_ptr bdk_cptx_lf_q_grp_ptr_t;

static inline uint64_t BDK_CPTX_LF_Q_GRP_PTR(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_LF_Q_GRP_PTR(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && (a==0))
        return 0x840200a00120ll + 0x100000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && (a<=1))
        return 0x840200a00120ll + 0x100000ll * ((a) & 0x1);
    if (bdk_is_model(OCTEONTX_CN98XX) && (a<=1))
        return 0x840200a00120ll + 0x100000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_LF_Q_GRP_PTR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_LF_Q_GRP_PTR(a) bdk_cptx_lf_q_grp_ptr_t
#define bustype_BDK_CPTX_LF_Q_GRP_PTR(a) BDK_CSR_TYPE_RVU_PFVF_BAR2
#define basename_BDK_CPTX_LF_Q_GRP_PTR(a) "CPTX_LF_Q_GRP_PTR"
#define device_bar_BDK_CPTX_LF_Q_GRP_PTR(a) 0x2 /* RVU_BAR2 */
#define busnum_BDK_CPTX_LF_Q_GRP_PTR(a) (a)
#define arguments_BDK_CPTX_LF_Q_GRP_PTR(a) (a),-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) cpt#_lf_q_inst_ptr
 *
 * CPT Instruction Queue Pointer Registers
 * CPT_INST_S memory queue state.
 */
union bdk_cptx_lf_q_inst_ptr
{
    uint64_t u;
    struct bdk_cptx_lf_q_inst_ptr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t xq_xor                : 1;  /**< [ 63: 63](R/W/H) Set when [NQ_PTR] is smaller than [DQ_PTR]. The current CPT_INST_S memory
                                                                 queue size (in CPT_INST_S's) is:
                                                                    ([XQ_XOR] * CPT_LF_Q_SIZE[SIZE_DIV40] * 40) + [NQ_PTR] - [DQ_PTR].

                                                                 [XQ_XOR] must be zero when CPT_LF_CTL[ENA] transitions 0-\>1.

                                                                 CPT sets [XQ_XOR]=0 on any write to CPT_LF_Q_BASE or CPT_LF_Q_SIZE. */
        uint64_t reserved_52_62        : 11;
        uint64_t nq_ptr                : 20; /**< [ 51: 32](R/W/H) Indicates memory location where CPT will add the next CPT_INST_S
                                                                 to the memory queue. The corresponding memory address is
                                                                 (CPT_LF_Q_BASE[ADDR] \<\< 7) + ([NQ_PTR]*64).

                                                                 [NQ_PTR] must be in the range 2..(CPT_LF_Q_SIZE[SIZE_DIV40]*40)+1 when the queue
                                                                 is used. [NQ_PTR] must be 2 when CPT_LF_CTL[ENA] transitions 0-\>1.

                                                                 CPT sets [NQ_PTR]=2 on any write to CPT_LF_Q_BASE or CPT_LF_Q_SIZE. */
        uint64_t reserved_20_31        : 12;
        uint64_t dq_ptr                : 20; /**< [ 19:  0](R/W/H) Indicates memory location where CPT will dequeue the next CPT_INST_S
                                                                 from the memory queue. The corresponding memory address is
                                                                 (CPT_LF_Q_BASE[ADDR] \<\< 7) + ([DQ_PTR]*64).

                                                                 [DQ_PTR] must be in the range 2..(CPT_LF_Q_SIZE[SIZE_DIV40]*40)+1 when the queue
                                                                 is used. [DQ_PTR] must be 2 when CPT_LF_CTL[ENA] transitions 0-\>1.

                                                                 CPT sets [DQ_PTR]=2 on any write to CPT_LF_Q_BASE or CPT_LF_Q_SIZE. */
#else /* Word 0 - Little Endian */
        uint64_t dq_ptr                : 20; /**< [ 19:  0](R/W/H) Indicates memory location where CPT will dequeue the next CPT_INST_S
                                                                 from the memory queue. The corresponding memory address is
                                                                 (CPT_LF_Q_BASE[ADDR] \<\< 7) + ([DQ_PTR]*64).

                                                                 [DQ_PTR] must be in the range 2..(CPT_LF_Q_SIZE[SIZE_DIV40]*40)+1 when the queue
                                                                 is used. [DQ_PTR] must be 2 when CPT_LF_CTL[ENA] transitions 0-\>1.

                                                                 CPT sets [DQ_PTR]=2 on any write to CPT_LF_Q_BASE or CPT_LF_Q_SIZE. */
        uint64_t reserved_20_31        : 12;
        uint64_t nq_ptr                : 20; /**< [ 51: 32](R/W/H) Indicates memory location where CPT will add the next CPT_INST_S
                                                                 to the memory queue. The corresponding memory address is
                                                                 (CPT_LF_Q_BASE[ADDR] \<\< 7) + ([NQ_PTR]*64).

                                                                 [NQ_PTR] must be in the range 2..(CPT_LF_Q_SIZE[SIZE_DIV40]*40)+1 when the queue
                                                                 is used. [NQ_PTR] must be 2 when CPT_LF_CTL[ENA] transitions 0-\>1.

                                                                 CPT sets [NQ_PTR]=2 on any write to CPT_LF_Q_BASE or CPT_LF_Q_SIZE. */
        uint64_t reserved_52_62        : 11;
        uint64_t xq_xor                : 1;  /**< [ 63: 63](R/W/H) Set when [NQ_PTR] is smaller than [DQ_PTR]. The current CPT_INST_S memory
                                                                 queue size (in CPT_INST_S's) is:
                                                                    ([XQ_XOR] * CPT_LF_Q_SIZE[SIZE_DIV40] * 40) + [NQ_PTR] - [DQ_PTR].

                                                                 [XQ_XOR] must be zero when CPT_LF_CTL[ENA] transitions 0-\>1.

                                                                 CPT sets [XQ_XOR]=0 on any write to CPT_LF_Q_BASE or CPT_LF_Q_SIZE. */
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_lf_q_inst_ptr_s cn; */
};
typedef union bdk_cptx_lf_q_inst_ptr bdk_cptx_lf_q_inst_ptr_t;

static inline uint64_t BDK_CPTX_LF_Q_INST_PTR(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_LF_Q_INST_PTR(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && (a==0))
        return 0x840200a00110ll + 0x100000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && (a<=1))
        return 0x840200a00110ll + 0x100000ll * ((a) & 0x1);
    if (bdk_is_model(OCTEONTX_CN98XX) && (a<=1))
        return 0x840200a00110ll + 0x100000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_LF_Q_INST_PTR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_LF_Q_INST_PTR(a) bdk_cptx_lf_q_inst_ptr_t
#define bustype_BDK_CPTX_LF_Q_INST_PTR(a) BDK_CSR_TYPE_RVU_PFVF_BAR2
#define basename_BDK_CPTX_LF_Q_INST_PTR(a) "CPTX_LF_Q_INST_PTR"
#define device_bar_BDK_CPTX_LF_Q_INST_PTR(a) 0x2 /* RVU_BAR2 */
#define busnum_BDK_CPTX_LF_Q_INST_PTR(a) (a)
#define arguments_BDK_CPTX_LF_Q_INST_PTR(a) (a),-1,-1,-1

/**
 * Register (RVU_PFVF_BAR2) cpt#_lf_q_size
 *
 * CPT Instruction Queue Size Registers
 * CPT initializes these CSR fields to these values on any CPT_LF_Q_SIZE write:
 * _ CPT_LF_Q_INST_PTR[XQ_XOR]=0.
 * _ CPT_LF_Q_INST_PTR[NQ_PTR]=2.
 * _ CPT_LF_Q_INST_PTR[DQ_PTR]=2.
 * _ CPT_LF_Q_GRP_PTR[XQ_XOR]=0.
 * _ CPT_LF_Q_GRP_PTR[NQ_PTR]=1.
 * _ CPT_LF_Q_GRP_PTR[DQ_PTR]=1.
 */
union bdk_cptx_lf_q_size
{
    uint64_t u;
    struct bdk_cptx_lf_q_size_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_15_63        : 49;
        uint64_t size_div40            : 15; /**< [ 14:  0](R/W) Determines the size of the queue allocated in memory and its smaller effective
                                                                 size. [SIZE_DIV40] must be at least 2 during operation.

                                                                 The allocated queue in memory is at offsets of CPT_LF_Q_BASE[ADDR] and includes
                                                                 space for [SIZE_DIV40]*40 CPT_INST_S's, the corresponding CPT_INST_S[EGRP]'s,
                                                                 plus the FC cache line.

                                                                 The effective queue size to software is ([SIZE_DIV40]-1)*40 CPT_INST_S's, as
                                                                 CPT may discard a received CPT_INST_S whenever it would need to queue more
                                                                 instructions. CPT always asserts CPT_LF_MISC_INT[NQERR] when it discards a
                                                                 CPT_INST_S due queue overflow. */
#else /* Word 0 - Little Endian */
        uint64_t size_div40            : 15; /**< [ 14:  0](R/W) Determines the size of the queue allocated in memory and its smaller effective
                                                                 size. [SIZE_DIV40] must be at least 2 during operation.

                                                                 The allocated queue in memory is at offsets of CPT_LF_Q_BASE[ADDR] and includes
                                                                 space for [SIZE_DIV40]*40 CPT_INST_S's, the corresponding CPT_INST_S[EGRP]'s,
                                                                 plus the FC cache line.

                                                                 The effective queue size to software is ([SIZE_DIV40]-1)*40 CPT_INST_S's, as
                                                                 CPT may discard a received CPT_INST_S whenever it would need to queue more
                                                                 instructions. CPT always asserts CPT_LF_MISC_INT[NQERR] when it discards a
                                                                 CPT_INST_S due queue overflow. */
        uint64_t reserved_15_63        : 49;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_lf_q_size_s cn; */
};
typedef union bdk_cptx_lf_q_size bdk_cptx_lf_q_size_t;

static inline uint64_t BDK_CPTX_LF_Q_SIZE(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_LF_Q_SIZE(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && (a==0))
        return 0x840200a00100ll + 0x100000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && (a<=1))
        return 0x840200a00100ll + 0x100000ll * ((a) & 0x1);
    if (bdk_is_model(OCTEONTX_CN98XX) && (a<=1))
        return 0x840200a00100ll + 0x100000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_LF_Q_SIZE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_LF_Q_SIZE(a) bdk_cptx_lf_q_size_t
#define bustype_BDK_CPTX_LF_Q_SIZE(a) BDK_CSR_TYPE_RVU_PFVF_BAR2
#define basename_BDK_CPTX_LF_Q_SIZE(a) "CPTX_LF_Q_SIZE"
#define device_bar_BDK_CPTX_LF_Q_SIZE(a) 0x2 /* RVU_BAR2 */
#define busnum_BDK_CPTX_LF_Q_SIZE(a) (a)
#define arguments_BDK_CPTX_LF_Q_SIZE(a) (a),-1,-1,-1

/**
 * Register (NCB) cpt#_ncbi_obs
 *
 * INTERNAL: CPT NCBI Observability Debug Register
 */
union bdk_cptx_ncbi_obs
{
    uint64_t u;
    struct bdk_cptx_ncbi_obs_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_40_63        : 24;
        uint64_t datfif_cnt            : 8;  /**< [ 39: 32](RO/H) Number of pending data cycles to be sent to NCBI. */
        uint64_t cmdfif_cnt            : 8;  /**< [ 31: 24](RO/H) Number of pending commands to be sent to NCBI. */
        uint64_t reserved_22_23        : 2;
        uint64_t csr_rsp_dat           : 1;  /**< [ 21: 21](RO/H) CSR Response data available to be sent to NCBI.                                            . */
        uint64_t csr_rsp_val           : 1;  /**< [ 20: 20](RO/H) CSR Response available to be sent to NCBI. */
        uint64_t csr_cc_req            : 4;  /**< [ 19: 16](RO/H) Transfer cycles requested for CSR responses. */
        uint64_t res_cc_req            : 4;  /**< [ 15: 12](RO/H) Transfer cycles requested for result structure stores. */
        uint64_t ifc_cc_req            : 4;  /**< [ 11:  8](RO/H) Transfer cycles requested for instruction fetches. */
        uint64_t eng_cc_req            : 4;  /**< [  7:  4](RO/H) Transfer cycles requested from the engines. */
        uint64_t cdei_cc_left          : 4;  /**< [  3:  0](RO/H) Transfer cycles remaining to complete receiving transaction from CPT_NCBI input. */
#else /* Word 0 - Little Endian */
        uint64_t cdei_cc_left          : 4;  /**< [  3:  0](RO/H) Transfer cycles remaining to complete receiving transaction from CPT_NCBI input. */
        uint64_t eng_cc_req            : 4;  /**< [  7:  4](RO/H) Transfer cycles requested from the engines. */
        uint64_t ifc_cc_req            : 4;  /**< [ 11:  8](RO/H) Transfer cycles requested for instruction fetches. */
        uint64_t res_cc_req            : 4;  /**< [ 15: 12](RO/H) Transfer cycles requested for result structure stores. */
        uint64_t csr_cc_req            : 4;  /**< [ 19: 16](RO/H) Transfer cycles requested for CSR responses. */
        uint64_t csr_rsp_val           : 1;  /**< [ 20: 20](RO/H) CSR Response available to be sent to NCBI. */
        uint64_t csr_rsp_dat           : 1;  /**< [ 21: 21](RO/H) CSR Response data available to be sent to NCBI.                                            . */
        uint64_t reserved_22_23        : 2;
        uint64_t cmdfif_cnt            : 8;  /**< [ 31: 24](RO/H) Number of pending commands to be sent to NCBI. */
        uint64_t datfif_cnt            : 8;  /**< [ 39: 32](RO/H) Number of pending data cycles to be sent to NCBI. */
        uint64_t reserved_40_63        : 24;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_ncbi_obs_s cn; */
};
typedef union bdk_cptx_ncbi_obs bdk_cptx_ncbi_obs_t;

static inline uint64_t BDK_CPTX_NCBI_OBS(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_NCBI_OBS(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && (a==0))
        return 0x872000000190ll + 0x1000000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN83XX) && (a<=1))
        return 0x872000000190ll + 0x1000000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_NCBI_OBS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_NCBI_OBS(a) bdk_cptx_ncbi_obs_t
#define bustype_BDK_CPTX_NCBI_OBS(a) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_NCBI_OBS(a) "CPTX_NCBI_OBS"
#define device_bar_BDK_CPTX_NCBI_OBS(a) 0x0 /* PF_BAR0 */
#define busnum_BDK_CPTX_NCBI_OBS(a) (a)
#define arguments_BDK_CPTX_NCBI_OBS(a) (a),-1,-1,-1

/**
 * Register (NCB) cpt#_pf_active_cycles_pc
 *
 * CPT PF Active Cycles Register
 */
union bdk_cptx_pf_active_cycles_pc
{
    uint64_t u;
    struct bdk_cptx_pf_active_cycles_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t act_cyc               : 64; /**< [ 63:  0](RO/H) Counts every coprocessor-clock cycle that the conditional clocks are active.
                                                                 Internal:
                                                                 Includes CDE internal or any engine clock being enabled. */
#else /* Word 0 - Little Endian */
        uint64_t act_cyc               : 64; /**< [ 63:  0](RO/H) Counts every coprocessor-clock cycle that the conditional clocks are active.
                                                                 Internal:
                                                                 Includes CDE internal or any engine clock being enabled. */
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_pf_active_cycles_pc_s cn; */
};
typedef union bdk_cptx_pf_active_cycles_pc bdk_cptx_pf_active_cycles_pc_t;

static inline uint64_t BDK_CPTX_PF_ACTIVE_CYCLES_PC(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_PF_ACTIVE_CYCLES_PC(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && (a==0))
        return 0x872000010100ll + 0x1000000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN83XX) && (a<=1))
        return 0x872000010100ll + 0x1000000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_PF_ACTIVE_CYCLES_PC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_PF_ACTIVE_CYCLES_PC(a) bdk_cptx_pf_active_cycles_pc_t
#define bustype_BDK_CPTX_PF_ACTIVE_CYCLES_PC(a) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_PF_ACTIVE_CYCLES_PC(a) "CPTX_PF_ACTIVE_CYCLES_PC"
#define device_bar_BDK_CPTX_PF_ACTIVE_CYCLES_PC(a) 0x0 /* PF_BAR0 */
#define busnum_BDK_CPTX_PF_ACTIVE_CYCLES_PC(a) (a)
#define arguments_BDK_CPTX_PF_ACTIVE_CYCLES_PC(a) (a),-1,-1,-1

/**
 * Register (NCB) cpt#_pf_active_vf#
 *
 * CPT PF Active VF Register
 * This register will be nonzero if the engine is allocated to a VF. In the
 * event of a UCERR, this register can be consulted to determine whether any
 * action is required for the VF. This register should be cleared by software
 * before reenabling an engine.
 */
union bdk_cptx_pf_active_vfx
{
    uint64_t u;
    struct bdk_cptx_pf_active_vfx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t vfnum                 : 7;  /**< [  6:  0](R/W/H) VF number. 0x0 unless the engine has been allocated to a VF. */
#else /* Word 0 - Little Endian */
        uint64_t vfnum                 : 7;  /**< [  6:  0](R/W/H) VF number. 0x0 unless the engine has been allocated to a VF. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_pf_active_vfx_s cn; */
};
typedef union bdk_cptx_pf_active_vfx bdk_cptx_pf_active_vfx_t;

static inline uint64_t BDK_CPTX_PF_ACTIVE_VFX(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_PF_ACTIVE_VFX(unsigned long a, unsigned long b)
{
    if (bdk_is_model(OCTEONTX_CN83XX) && ((a<=1) && (b<=47)))
        return 0x872000001000ll + 0x1000000000ll * ((a) & 0x1) + 8ll * ((b) & 0x3f);
    __bdk_csr_fatal("CPTX_PF_ACTIVE_VFX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_PF_ACTIVE_VFX(a,b) bdk_cptx_pf_active_vfx_t
#define bustype_BDK_CPTX_PF_ACTIVE_VFX(a,b) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_PF_ACTIVE_VFX(a,b) "CPTX_PF_ACTIVE_VFX"
#define device_bar_BDK_CPTX_PF_ACTIVE_VFX(a,b) 0x0 /* PF_BAR0 */
#define busnum_BDK_CPTX_PF_ACTIVE_VFX(a,b) (a)
#define arguments_BDK_CPTX_PF_ACTIVE_VFX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) cpt#_pf_bist_status
 *
 * CPT PF Control Bist Status Register
 * This register has the BIST status of memories. Each bit is the BIST result of an
 * individual memory (per bit, 0 = pass and 1 = fail).
 */
union bdk_cptx_pf_bist_status
{
    uint64_t u;
    struct bdk_cptx_pf_bist_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_30_63        : 34;
        uint64_t bstatus               : 30; /**< [ 29:  0](RO/H) BIST status. One bit per memory, enumerated by CPT_RAMS_E. */
#else /* Word 0 - Little Endian */
        uint64_t bstatus               : 30; /**< [ 29:  0](RO/H) BIST status. One bit per memory, enumerated by CPT_RAMS_E. */
        uint64_t reserved_30_63        : 34;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_pf_bist_status_s cn; */
};
typedef union bdk_cptx_pf_bist_status bdk_cptx_pf_bist_status_t;

static inline uint64_t BDK_CPTX_PF_BIST_STATUS(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_PF_BIST_STATUS(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && (a==0))
        return 0x872000000160ll + 0x1000000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN83XX) && (a<=1))
        return 0x872000000160ll + 0x1000000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_PF_BIST_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_PF_BIST_STATUS(a) bdk_cptx_pf_bist_status_t
#define bustype_BDK_CPTX_PF_BIST_STATUS(a) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_PF_BIST_STATUS(a) "CPTX_PF_BIST_STATUS"
#define device_bar_BDK_CPTX_PF_BIST_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_BDK_CPTX_PF_BIST_STATUS(a) (a)
#define arguments_BDK_CPTX_PF_BIST_STATUS(a) (a),-1,-1,-1

/**
 * Register (NCB) cpt#_pf_bp_test
 *
 * INTERNAL: CPT PF Backpressure Test Register
 */
union bdk_cptx_pf_bp_test
{
    uint64_t u;
    struct bdk_cptx_pf_bp_test_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t enable                : 4;  /**< [ 63: 60](R/W) Enable test mode. For diagnostic use only.
                                                                 Internal:
                                                                 Once a bit is set, random backpressure is generated
                                                                 at the corresponding point to allow for more frequent backpressure.
                                                                 \<63\> = NCBI requests.
                                                                 \<62\> = Instruction prefetching.
                                                                 \<61\> = GMID RAM access arbitration.
                                                                 \<60\> = Reserved. */
        uint64_t reserved_24_59        : 36;
        uint64_t bp_cfg                : 8;  /**< [ 23: 16](R/W) Backpressure weight. For diagnostic use only.
                                                                 Internal:
                                                                 There are 2 backpressure configuration bits per enable, with the two bits
                                                                 defined as 0x0=100% of the time, 0x1=75% of the time, 0x2=50% of the time,
                                                                 0x3=25% of the time.
                                                                   \<23:22\> = BP_CFG3.
                                                                   \<21:20\> = BP_CFG2.
                                                                   \<19:18\> = BP_CFG1.
                                                                   \<17:16\> = BP_CFG0. */
        uint64_t reserved_12_15        : 4;
        uint64_t lfsr_freq             : 12; /**< [ 11:  0](R/W) Test LFSR update frequency in coprocessor-clocks minus one. */
#else /* Word 0 - Little Endian */
        uint64_t lfsr_freq             : 12; /**< [ 11:  0](R/W) Test LFSR update frequency in coprocessor-clocks minus one. */
        uint64_t reserved_12_15        : 4;
        uint64_t bp_cfg                : 8;  /**< [ 23: 16](R/W) Backpressure weight. For diagnostic use only.
                                                                 Internal:
                                                                 There are 2 backpressure configuration bits per enable, with the two bits
                                                                 defined as 0x0=100% of the time, 0x1=75% of the time, 0x2=50% of the time,
                                                                 0x3=25% of the time.
                                                                   \<23:22\> = BP_CFG3.
                                                                   \<21:20\> = BP_CFG2.
                                                                   \<19:18\> = BP_CFG1.
                                                                   \<17:16\> = BP_CFG0. */
        uint64_t reserved_24_59        : 36;
        uint64_t enable                : 4;  /**< [ 63: 60](R/W) Enable test mode. For diagnostic use only.
                                                                 Internal:
                                                                 Once a bit is set, random backpressure is generated
                                                                 at the corresponding point to allow for more frequent backpressure.
                                                                 \<63\> = NCBI requests.
                                                                 \<62\> = Instruction prefetching.
                                                                 \<61\> = GMID RAM access arbitration.
                                                                 \<60\> = Reserved. */
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_pf_bp_test_s cn; */
};
typedef union bdk_cptx_pf_bp_test bdk_cptx_pf_bp_test_t;

static inline uint64_t BDK_CPTX_PF_BP_TEST(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_PF_BP_TEST(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && (a==0))
        return 0x872000000180ll + 0x1000000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN83XX) && (a<=1))
        return 0x872000000180ll + 0x1000000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_PF_BP_TEST", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_PF_BP_TEST(a) bdk_cptx_pf_bp_test_t
#define bustype_BDK_CPTX_PF_BP_TEST(a) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_PF_BP_TEST(a) "CPTX_PF_BP_TEST"
#define device_bar_BDK_CPTX_PF_BP_TEST(a) 0x0 /* PF_BAR0 */
#define busnum_BDK_CPTX_PF_BP_TEST(a) (a)
#define arguments_BDK_CPTX_PF_BP_TEST(a) (a),-1,-1,-1

/**
 * Register (NCB) cpt#_pf_constants
 *
 * CPT PF Constants Register
 * This register contains implementation-related parameters of CPT in CNXXXX.
 */
union bdk_cptx_pf_constants
{
    uint64_t u;
    struct bdk_cptx_pf_constants_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_41_63        : 23;
        uint64_t ucerr                 : 1;  /**< [ 40: 40](RO) Set if CPT()_PF_UCERR_INT exits.
                                                                 0 = CPT_PF_INT_VEC_E::EXEC is immediately followed by CPT_PF_INT_VEC_E::MBOX().
                                                                 1 = CPT_PF_INT_VEC_E::EXEC is immediately followed by CPT_PF_INT_VEC_E::UCERR,
                                                                 which is immediately followed by CPT_PF_INT_VEC_E::MBOX(). */
        uint64_t epcis                 : 8;  /**< [ 39: 32](RO) Number of EPCI busses. */
        uint64_t grps                  : 8;  /**< [ 31: 24](RO) Number of engine groups implemented. */
        uint64_t ae                    : 8;  /**< [ 23: 16](RO/H) Number of AEs. In CNXXXX, returns 0x6 or less if there are fuse-disables. */
        uint64_t se                    : 8;  /**< [ 15:  8](RO/H) Number of SEs. In CNXXXX, returns 0xA, or less if there are fuse-disables. */
        uint64_t vq                    : 8;  /**< [  7:  0](RO) Number of VQs. */
#else /* Word 0 - Little Endian */
        uint64_t vq                    : 8;  /**< [  7:  0](RO) Number of VQs. */
        uint64_t se                    : 8;  /**< [ 15:  8](RO/H) Number of SEs. In CNXXXX, returns 0xA, or less if there are fuse-disables. */
        uint64_t ae                    : 8;  /**< [ 23: 16](RO/H) Number of AEs. In CNXXXX, returns 0x6 or less if there are fuse-disables. */
        uint64_t grps                  : 8;  /**< [ 31: 24](RO) Number of engine groups implemented. */
        uint64_t epcis                 : 8;  /**< [ 39: 32](RO) Number of EPCI busses. */
        uint64_t ucerr                 : 1;  /**< [ 40: 40](RO) Set if CPT()_PF_UCERR_INT exits.
                                                                 0 = CPT_PF_INT_VEC_E::EXEC is immediately followed by CPT_PF_INT_VEC_E::MBOX().
                                                                 1 = CPT_PF_INT_VEC_E::EXEC is immediately followed by CPT_PF_INT_VEC_E::UCERR,
                                                                 which is immediately followed by CPT_PF_INT_VEC_E::MBOX(). */
        uint64_t reserved_41_63        : 23;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_pf_constants_s cn8; */
    /* struct bdk_cptx_pf_constants_s cn81xx; */
    struct bdk_cptx_pf_constants_cn83xx
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_41_63        : 23;
        uint64_t ucerr                 : 1;  /**< [ 40: 40](RO) Set if CPT()_PF_UCERR_INT exits.
                                                                 0 = CPT_PF_INT_VEC_E::EXEC is immediately followed by CPT_PF_INT_VEC_E::MBOX().
                                                                 1 = CPT_PF_INT_VEC_E::EXEC is immediately followed by CPT_PF_INT_VEC_E::UCERR,
                                                                 which is immediately followed by CPT_PF_INT_VEC_E::MBOX(). */
        uint64_t epcis                 : 8;  /**< [ 39: 32](RO) Number of EPCI busses. */
        uint64_t grps                  : 8;  /**< [ 31: 24](RO) Number of engine groups implemented. */
        uint64_t ae                    : 8;  /**< [ 23: 16](RO/H) Number of AEs. In CNXXXX, for CPT0 returns 0x0, for CPT1 returns 0x18, or less
                                                                 if there are fuse-disables. */
        uint64_t se                    : 8;  /**< [ 15:  8](RO/H) Number of SEs. In CNXXXX, for CPT0 returns 0x30, or less if there are
                                                                 fuse-disables, for CPT1 returns 0x0. */
        uint64_t vq                    : 8;  /**< [  7:  0](RO) Number of VQs. */
#else /* Word 0 - Little Endian */
        uint64_t vq                    : 8;  /**< [  7:  0](RO) Number of VQs. */
        uint64_t se                    : 8;  /**< [ 15:  8](RO/H) Number of SEs. In CNXXXX, for CPT0 returns 0x30, or less if there are
                                                                 fuse-disables, for CPT1 returns 0x0. */
        uint64_t ae                    : 8;  /**< [ 23: 16](RO/H) Number of AEs. In CNXXXX, for CPT0 returns 0x0, for CPT1 returns 0x18, or less
                                                                 if there are fuse-disables. */
        uint64_t grps                  : 8;  /**< [ 31: 24](RO) Number of engine groups implemented. */
        uint64_t epcis                 : 8;  /**< [ 39: 32](RO) Number of EPCI busses. */
        uint64_t ucerr                 : 1;  /**< [ 40: 40](RO) Set if CPT()_PF_UCERR_INT exits.
                                                                 0 = CPT_PF_INT_VEC_E::EXEC is immediately followed by CPT_PF_INT_VEC_E::MBOX().
                                                                 1 = CPT_PF_INT_VEC_E::EXEC is immediately followed by CPT_PF_INT_VEC_E::UCERR,
                                                                 which is immediately followed by CPT_PF_INT_VEC_E::MBOX(). */
        uint64_t reserved_41_63        : 23;
#endif /* Word 0 - End */
    } cn83xx;
};
typedef union bdk_cptx_pf_constants bdk_cptx_pf_constants_t;

static inline uint64_t BDK_CPTX_PF_CONSTANTS(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_PF_CONSTANTS(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && (a==0))
        return 0x872000000000ll + 0x1000000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN83XX) && (a<=1))
        return 0x872000000000ll + 0x1000000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_PF_CONSTANTS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_PF_CONSTANTS(a) bdk_cptx_pf_constants_t
#define bustype_BDK_CPTX_PF_CONSTANTS(a) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_PF_CONSTANTS(a) "CPTX_PF_CONSTANTS"
#define device_bar_BDK_CPTX_PF_CONSTANTS(a) 0x0 /* PF_BAR0 */
#define busnum_BDK_CPTX_PF_CONSTANTS(a) (a)
#define arguments_BDK_CPTX_PF_CONSTANTS(a) (a),-1,-1,-1

/**
 * Register (NCB) cpt#_pf_diag
 *
 * CPT PF Diagnostic Control Register
 * This register controls diagnostic features.
 */
union bdk_cptx_pf_diag
{
    uint64_t u;
    struct bdk_cptx_pf_diag_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_9_63         : 55;
        uint64_t forceclk              : 1;  /**< [  8:  8](R/W) When this bit is set to 1, it forces CPT clocks on. For diagnostic use only. */
        uint64_t ld_infl               : 8;  /**< [  7:  0](R/W) Maximum number of in-flight data fetch transactions on the NCB. Larger values
                                                                 may improve CPT performance but may starve other devices on the same NCB. Values
                                                                 \> 64 are treated as 64. */
#else /* Word 0 - Little Endian */
        uint64_t ld_infl               : 8;  /**< [  7:  0](R/W) Maximum number of in-flight data fetch transactions on the NCB. Larger values
                                                                 may improve CPT performance but may starve other devices on the same NCB. Values
                                                                 \> 64 are treated as 64. */
        uint64_t forceclk              : 1;  /**< [  8:  8](R/W) When this bit is set to 1, it forces CPT clocks on. For diagnostic use only. */
        uint64_t reserved_9_63         : 55;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_pf_diag_s cn; */
};
typedef union bdk_cptx_pf_diag bdk_cptx_pf_diag_t;

static inline uint64_t BDK_CPTX_PF_DIAG(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_PF_DIAG(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && (a==0))
        return 0x872000000120ll + 0x1000000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN83XX) && (a<=1))
        return 0x872000000120ll + 0x1000000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_PF_DIAG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_PF_DIAG(a) bdk_cptx_pf_diag_t
#define bustype_BDK_CPTX_PF_DIAG(a) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_PF_DIAG(a) "CPTX_PF_DIAG"
#define device_bar_BDK_CPTX_PF_DIAG(a) 0x0 /* PF_BAR0 */
#define busnum_BDK_CPTX_PF_DIAG(a) (a)
#define arguments_BDK_CPTX_PF_DIAG(a) (a),-1,-1,-1

/**
 * Register (NCB) cpt#_pf_ecc0_ctl
 *
 * CPT PF ECC Control Register
 * This register enables ECC for each individual internal memory that requires ECC. For debug
 * purposes, it can also flip one or two bits in the ECC data.
 */
union bdk_cptx_pf_ecc0_ctl
{
    uint64_t u;
    struct bdk_cptx_pf_ecc0_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t cdis                  : 32; /**< [ 31:  0](R/W) Disables ECC correction on each RAM.  Bit positions enumerated with CPT_RAMS_E. */
#else /* Word 0 - Little Endian */
        uint64_t cdis                  : 32; /**< [ 31:  0](R/W) Disables ECC correction on each RAM.  Bit positions enumerated with CPT_RAMS_E. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_pf_ecc0_ctl_s cn; */
};
typedef union bdk_cptx_pf_ecc0_ctl bdk_cptx_pf_ecc0_ctl_t;

static inline uint64_t BDK_CPTX_PF_ECC0_CTL(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_PF_ECC0_CTL(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && (a==0))
        return 0x872000000200ll + 0x1000000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN83XX) && (a<=1))
        return 0x872000000200ll + 0x1000000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_PF_ECC0_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_PF_ECC0_CTL(a) bdk_cptx_pf_ecc0_ctl_t
#define bustype_BDK_CPTX_PF_ECC0_CTL(a) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_PF_ECC0_CTL(a) "CPTX_PF_ECC0_CTL"
#define device_bar_BDK_CPTX_PF_ECC0_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_BDK_CPTX_PF_ECC0_CTL(a) (a)
#define arguments_BDK_CPTX_PF_ECC0_CTL(a) (a),-1,-1,-1

/**
 * Register (NCB) cpt#_pf_ecc0_ena_w1c
 *
 * CPT ECC Enable Clear Register
 * This register clears interrupt enable bits.
 */
union bdk_cptx_pf_ecc0_ena_w1c
{
    uint64_t u;
    struct bdk_cptx_pf_ecc0_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t dbe                   : 32; /**< [ 63: 32](R/W1C/H) Reads or clears enable for CPT(0)_PF_ECC0_INT[DBE]. */
        uint64_t sbe                   : 32; /**< [ 31:  0](R/W1C/H) Reads or clears enable for CPT(0)_PF_ECC0_INT[SBE]. */
#else /* Word 0 - Little Endian */
        uint64_t sbe                   : 32; /**< [ 31:  0](R/W1C/H) Reads or clears enable for CPT(0)_PF_ECC0_INT[SBE]. */
        uint64_t dbe                   : 32; /**< [ 63: 32](R/W1C/H) Reads or clears enable for CPT(0)_PF_ECC0_INT[DBE]. */
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_pf_ecc0_ena_w1c_s cn8; */
    /* struct bdk_cptx_pf_ecc0_ena_w1c_s cn81xx; */
    struct bdk_cptx_pf_ecc0_ena_w1c_cn83xx
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t dbe                   : 32; /**< [ 63: 32](R/W1C/H) Reads or clears enable for CPT(0..1)_PF_ECC0_INT[DBE]. */
        uint64_t sbe                   : 32; /**< [ 31:  0](R/W1C/H) Reads or clears enable for CPT(0..1)_PF_ECC0_INT[SBE]. */
#else /* Word 0 - Little Endian */
        uint64_t sbe                   : 32; /**< [ 31:  0](R/W1C/H) Reads or clears enable for CPT(0..1)_PF_ECC0_INT[SBE]. */
        uint64_t dbe                   : 32; /**< [ 63: 32](R/W1C/H) Reads or clears enable for CPT(0..1)_PF_ECC0_INT[DBE]. */
#endif /* Word 0 - End */
    } cn83xx;
};
typedef union bdk_cptx_pf_ecc0_ena_w1c bdk_cptx_pf_ecc0_ena_w1c_t;

static inline uint64_t BDK_CPTX_PF_ECC0_ENA_W1C(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_PF_ECC0_ENA_W1C(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && (a==0))
        return 0x872000000250ll + 0x1000000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN83XX) && (a<=1))
        return 0x872000000250ll + 0x1000000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_PF_ECC0_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_PF_ECC0_ENA_W1C(a) bdk_cptx_pf_ecc0_ena_w1c_t
#define bustype_BDK_CPTX_PF_ECC0_ENA_W1C(a) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_PF_ECC0_ENA_W1C(a) "CPTX_PF_ECC0_ENA_W1C"
#define device_bar_BDK_CPTX_PF_ECC0_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_BDK_CPTX_PF_ECC0_ENA_W1C(a) (a)
#define arguments_BDK_CPTX_PF_ECC0_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (NCB) cpt#_pf_ecc0_ena_w1s
 *
 * CPT ECC Enable Set Register
 * This register sets interrupt enable bits.
 */
union bdk_cptx_pf_ecc0_ena_w1s
{
    uint64_t u;
    struct bdk_cptx_pf_ecc0_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t dbe                   : 32; /**< [ 63: 32](R/W1S/H) Reads or sets enable for CPT(0)_PF_ECC0_INT[DBE]. */
        uint64_t sbe                   : 32; /**< [ 31:  0](R/W1S/H) Reads or sets enable for CPT(0)_PF_ECC0_INT[SBE]. */
#else /* Word 0 - Little Endian */
        uint64_t sbe                   : 32; /**< [ 31:  0](R/W1S/H) Reads or sets enable for CPT(0)_PF_ECC0_INT[SBE]. */
        uint64_t dbe                   : 32; /**< [ 63: 32](R/W1S/H) Reads or sets enable for CPT(0)_PF_ECC0_INT[DBE]. */
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_pf_ecc0_ena_w1s_s cn8; */
    /* struct bdk_cptx_pf_ecc0_ena_w1s_s cn81xx; */
    struct bdk_cptx_pf_ecc0_ena_w1s_cn83xx
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t dbe                   : 32; /**< [ 63: 32](R/W1S/H) Reads or sets enable for CPT(0..1)_PF_ECC0_INT[DBE]. */
        uint64_t sbe                   : 32; /**< [ 31:  0](R/W1S/H) Reads or sets enable for CPT(0..1)_PF_ECC0_INT[SBE]. */
#else /* Word 0 - Little Endian */
        uint64_t sbe                   : 32; /**< [ 31:  0](R/W1S/H) Reads or sets enable for CPT(0..1)_PF_ECC0_INT[SBE]. */
        uint64_t dbe                   : 32; /**< [ 63: 32](R/W1S/H) Reads or sets enable for CPT(0..1)_PF_ECC0_INT[DBE]. */
#endif /* Word 0 - End */
    } cn83xx;
};
typedef union bdk_cptx_pf_ecc0_ena_w1s bdk_cptx_pf_ecc0_ena_w1s_t;

static inline uint64_t BDK_CPTX_PF_ECC0_ENA_W1S(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_PF_ECC0_ENA_W1S(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && (a==0))
        return 0x872000000240ll + 0x1000000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN83XX) && (a<=1))
        return 0x872000000240ll + 0x1000000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_PF_ECC0_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_PF_ECC0_ENA_W1S(a) bdk_cptx_pf_ecc0_ena_w1s_t
#define bustype_BDK_CPTX_PF_ECC0_ENA_W1S(a) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_PF_ECC0_ENA_W1S(a) "CPTX_PF_ECC0_ENA_W1S"
#define device_bar_BDK_CPTX_PF_ECC0_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_BDK_CPTX_PF_ECC0_ENA_W1S(a) (a)
#define arguments_BDK_CPTX_PF_ECC0_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) cpt#_pf_ecc0_flip
 *
 * CPT PF ECC Flip Syndrome Register
 * This register enables ECC for each individual internal memory that requires ECC. For debug
 * purposes, it can also flip one or two bits in the ECC data.
 */
union bdk_cptx_pf_ecc0_flip
{
    uint64_t u;
    struct bdk_cptx_pf_ecc0_flip_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t flip1                 : 32; /**< [ 63: 32](R/W) Flips syndrome bit 1 on writes.  Bit positions enumerated with CPT_RAMS_E. */
        uint64_t flip0                 : 32; /**< [ 31:  0](R/W) Flips syndrome bit 0 on writes.  Bit positions enumerated with CPT_RAMS_E. */
#else /* Word 0 - Little Endian */
        uint64_t flip0                 : 32; /**< [ 31:  0](R/W) Flips syndrome bit 0 on writes.  Bit positions enumerated with CPT_RAMS_E. */
        uint64_t flip1                 : 32; /**< [ 63: 32](R/W) Flips syndrome bit 1 on writes.  Bit positions enumerated with CPT_RAMS_E. */
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_pf_ecc0_flip_s cn; */
};
typedef union bdk_cptx_pf_ecc0_flip bdk_cptx_pf_ecc0_flip_t;

static inline uint64_t BDK_CPTX_PF_ECC0_FLIP(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_PF_ECC0_FLIP(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && (a==0))
        return 0x872000000210ll + 0x1000000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN83XX) && (a<=1))
        return 0x872000000210ll + 0x1000000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_PF_ECC0_FLIP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_PF_ECC0_FLIP(a) bdk_cptx_pf_ecc0_flip_t
#define bustype_BDK_CPTX_PF_ECC0_FLIP(a) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_PF_ECC0_FLIP(a) "CPTX_PF_ECC0_FLIP"
#define device_bar_BDK_CPTX_PF_ECC0_FLIP(a) 0x0 /* PF_BAR0 */
#define busnum_BDK_CPTX_PF_ECC0_FLIP(a) (a)
#define arguments_BDK_CPTX_PF_ECC0_FLIP(a) (a),-1,-1,-1

/**
 * Register (NCB) cpt#_pf_ecc0_int
 *
 * CPT ECC Interrupt Status Register
 * This register contains the status of the ECC interrupt sources.
 */
union bdk_cptx_pf_ecc0_int
{
    uint64_t u;
    struct bdk_cptx_pf_ecc0_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t dbe                   : 32; /**< [ 63: 32](R/W1C/H) Double-bit error detected in internal RAM. One bit per memory, enumerated by
                                                                 CPT_RAMS_E. */
        uint64_t sbe                   : 32; /**< [ 31:  0](R/W1C/H) Single-bit error detected in internal RAM. One bit per memory, enumerated by
                                                                 CPT_RAMS_E. */
#else /* Word 0 - Little Endian */
        uint64_t sbe                   : 32; /**< [ 31:  0](R/W1C/H) Single-bit error detected in internal RAM. One bit per memory, enumerated by
                                                                 CPT_RAMS_E. */
        uint64_t dbe                   : 32; /**< [ 63: 32](R/W1C/H) Double-bit error detected in internal RAM. One bit per memory, enumerated by
                                                                 CPT_RAMS_E. */
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_pf_ecc0_int_s cn; */
};
typedef union bdk_cptx_pf_ecc0_int bdk_cptx_pf_ecc0_int_t;

static inline uint64_t BDK_CPTX_PF_ECC0_INT(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_PF_ECC0_INT(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && (a==0))
        return 0x872000000220ll + 0x1000000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN83XX) && (a<=1))
        return 0x872000000220ll + 0x1000000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_PF_ECC0_INT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_PF_ECC0_INT(a) bdk_cptx_pf_ecc0_int_t
#define bustype_BDK_CPTX_PF_ECC0_INT(a) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_PF_ECC0_INT(a) "CPTX_PF_ECC0_INT"
#define device_bar_BDK_CPTX_PF_ECC0_INT(a) 0x0 /* PF_BAR0 */
#define busnum_BDK_CPTX_PF_ECC0_INT(a) (a)
#define arguments_BDK_CPTX_PF_ECC0_INT(a) (a),-1,-1,-1

/**
 * Register (NCB) cpt#_pf_ecc0_int_w1s
 *
 * CPT ECC Interrupt Set Register
 * This register sets interrupt bits.
 */
union bdk_cptx_pf_ecc0_int_w1s
{
    uint64_t u;
    struct bdk_cptx_pf_ecc0_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t dbe                   : 32; /**< [ 63: 32](R/W1S/H) Reads or sets CPT(0)_PF_ECC0_INT[DBE]. */
        uint64_t sbe                   : 32; /**< [ 31:  0](R/W1S/H) Reads or sets CPT(0)_PF_ECC0_INT[SBE]. */
#else /* Word 0 - Little Endian */
        uint64_t sbe                   : 32; /**< [ 31:  0](R/W1S/H) Reads or sets CPT(0)_PF_ECC0_INT[SBE]. */
        uint64_t dbe                   : 32; /**< [ 63: 32](R/W1S/H) Reads or sets CPT(0)_PF_ECC0_INT[DBE]. */
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_pf_ecc0_int_w1s_s cn8; */
    /* struct bdk_cptx_pf_ecc0_int_w1s_s cn81xx; */
    struct bdk_cptx_pf_ecc0_int_w1s_cn83xx
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t dbe                   : 32; /**< [ 63: 32](R/W1S/H) Reads or sets CPT(0..1)_PF_ECC0_INT[DBE]. */
        uint64_t sbe                   : 32; /**< [ 31:  0](R/W1S/H) Reads or sets CPT(0..1)_PF_ECC0_INT[SBE]. */
#else /* Word 0 - Little Endian */
        uint64_t sbe                   : 32; /**< [ 31:  0](R/W1S/H) Reads or sets CPT(0..1)_PF_ECC0_INT[SBE]. */
        uint64_t dbe                   : 32; /**< [ 63: 32](R/W1S/H) Reads or sets CPT(0..1)_PF_ECC0_INT[DBE]. */
#endif /* Word 0 - End */
    } cn83xx;
};
typedef union bdk_cptx_pf_ecc0_int_w1s bdk_cptx_pf_ecc0_int_w1s_t;

static inline uint64_t BDK_CPTX_PF_ECC0_INT_W1S(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_PF_ECC0_INT_W1S(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && (a==0))
        return 0x872000000230ll + 0x1000000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN83XX) && (a<=1))
        return 0x872000000230ll + 0x1000000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_PF_ECC0_INT_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_PF_ECC0_INT_W1S(a) bdk_cptx_pf_ecc0_int_w1s_t
#define bustype_BDK_CPTX_PF_ECC0_INT_W1S(a) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_PF_ECC0_INT_W1S(a) "CPTX_PF_ECC0_INT_W1S"
#define device_bar_BDK_CPTX_PF_ECC0_INT_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_BDK_CPTX_PF_ECC0_INT_W1S(a) (a)
#define arguments_BDK_CPTX_PF_ECC0_INT_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) cpt#_pf_eco
 *
 * INTERNAL: CPT PF ECO Register
 */
union bdk_cptx_pf_eco
{
    uint64_t u;
    struct bdk_cptx_pf_eco_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t eco_rw                : 32; /**< [ 31:  0](R/W) Internal:
                                                                 Reserved for ECO usage. */
#else /* Word 0 - Little Endian */
        uint64_t eco_rw                : 32; /**< [ 31:  0](R/W) Internal:
                                                                 Reserved for ECO usage. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_pf_eco_s cn; */
};
typedef union bdk_cptx_pf_eco bdk_cptx_pf_eco_t;

static inline uint64_t BDK_CPTX_PF_ECO(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_PF_ECO(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && (a==0))
        return 0x872000000140ll + 0x1000000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN83XX) && (a<=1))
        return 0x872000000140ll + 0x1000000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_PF_ECO", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_PF_ECO(a) bdk_cptx_pf_eco_t
#define bustype_BDK_CPTX_PF_ECO(a) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_PF_ECO(a) "CPTX_PF_ECO"
#define device_bar_BDK_CPTX_PF_ECO(a) 0x0 /* PF_BAR0 */
#define busnum_BDK_CPTX_PF_ECO(a) (a)
#define arguments_BDK_CPTX_PF_ECO(a) (a),-1,-1,-1

/**
 * Register (NCB) cpt#_pf_eng#_ucode_base
 *
 * CPT PF Engine Microcode Base Address Register
 * This register configures engine microcode fetches.
 *
 * Only indicies 0x0 to (CPT(0)_PF_CONSTANTS[AE] + CPT(0)_PF_CONSTANTS[SE] - 1) are
 * supported.
 */
union bdk_cptx_pf_engx_ucode_base
{
    uint64_t u;
    struct bdk_cptx_pf_engx_ucode_base_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_49_63        : 15;
        uint64_t addr                  : 42; /**< [ 48:  7](R/W) Base IOVA for this engine's microcode image. */
        uint64_t reserved_0_6          : 7;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_6          : 7;
        uint64_t addr                  : 42; /**< [ 48:  7](R/W) Base IOVA for this engine's microcode image. */
        uint64_t reserved_49_63        : 15;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_pf_engx_ucode_base_s cn; */
};
typedef union bdk_cptx_pf_engx_ucode_base bdk_cptx_pf_engx_ucode_base_t;

static inline uint64_t BDK_CPTX_PF_ENGX_UCODE_BASE(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_PF_ENGX_UCODE_BASE(unsigned long a, unsigned long b)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && ((a==0) && (b<=47)))
        return 0x872004002000ll + 0x1000000000ll * ((a) & 0x0) + 8ll * ((b) & 0x3f);
    if (bdk_is_model(OCTEONTX_CN83XX) && ((a<=1) && (b<=47)))
        return 0x872004002000ll + 0x1000000000ll * ((a) & 0x1) + 8ll * ((b) & 0x3f);
    __bdk_csr_fatal("CPTX_PF_ENGX_UCODE_BASE", 2, a, b, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_PF_ENGX_UCODE_BASE(a,b) bdk_cptx_pf_engx_ucode_base_t
#define bustype_BDK_CPTX_PF_ENGX_UCODE_BASE(a,b) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_PF_ENGX_UCODE_BASE(a,b) "CPTX_PF_ENGX_UCODE_BASE"
#define device_bar_BDK_CPTX_PF_ENGX_UCODE_BASE(a,b) 0x0 /* PF_BAR0 */
#define busnum_BDK_CPTX_PF_ENGX_UCODE_BASE(a,b) (a)
#define arguments_BDK_CPTX_PF_ENGX_UCODE_BASE(a,b) (a),(b),-1,-1

/**
 * Register (NCB) cpt#_pf_exe_bist_status
 *
 * CPT PF Engine Bist Status Register
 * This register has the BIST status of each engine.  Each bit is the BIST result of an
 * individual engine (per bit, 0 = pass and 1 = fail).
 */
union bdk_cptx_pf_exe_bist_status
{
    uint64_t u;
    struct bdk_cptx_pf_exe_bist_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t bstatus               : 48; /**< [ 47:  0](RO/H) BIST status. One bit per engine. */
#else /* Word 0 - Little Endian */
        uint64_t bstatus               : 48; /**< [ 47:  0](RO/H) BIST status. One bit per engine. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_pf_exe_bist_status_s cn8; */
    struct bdk_cptx_pf_exe_bist_status_cn81xx
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t bstatus               : 16; /**< [ 15:  0](RO/H) BIST status. One bit per engine. */
#else /* Word 0 - Little Endian */
        uint64_t bstatus               : 16; /**< [ 15:  0](RO/H) BIST status. One bit per engine. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } cn81xx;
    /* struct bdk_cptx_pf_exe_bist_status_s cn83xx; */
};
typedef union bdk_cptx_pf_exe_bist_status bdk_cptx_pf_exe_bist_status_t;

static inline uint64_t BDK_CPTX_PF_EXE_BIST_STATUS(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_PF_EXE_BIST_STATUS(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && (a==0))
        return 0x872004000028ll + 0x1000000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN83XX) && (a<=1))
        return 0x872004000028ll + 0x1000000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_PF_EXE_BIST_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_PF_EXE_BIST_STATUS(a) bdk_cptx_pf_exe_bist_status_t
#define bustype_BDK_CPTX_PF_EXE_BIST_STATUS(a) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_PF_EXE_BIST_STATUS(a) "CPTX_PF_EXE_BIST_STATUS"
#define device_bar_BDK_CPTX_PF_EXE_BIST_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_BDK_CPTX_PF_EXE_BIST_STATUS(a) (a)
#define arguments_BDK_CPTX_PF_EXE_BIST_STATUS(a) (a),-1,-1,-1

/**
 * Register (NCB) cpt#_pf_exe_clk
 *
 * CPT PF Engine Clock Register
 * This register forces engine clocks on.
 */
union bdk_cptx_pf_exe_clk
{
    uint64_t u;
    struct bdk_cptx_pf_exe_clk_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t forceclk              : 64; /**< [ 63:  0](R/W) Clock override, one bit per engine. When set, force clocks to always run. When
                                                                 clear, allow automatic powerdown for idle engines. */
#else /* Word 0 - Little Endian */
        uint64_t forceclk              : 64; /**< [ 63:  0](R/W) Clock override, one bit per engine. When set, force clocks to always run. When
                                                                 clear, allow automatic powerdown for idle engines. */
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_pf_exe_clk_s cn; */
};
typedef union bdk_cptx_pf_exe_clk bdk_cptx_pf_exe_clk_t;

static inline uint64_t BDK_CPTX_PF_EXE_CLK(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_PF_EXE_CLK(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && (a==0))
        return 0x872004000010ll + 0x1000000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN83XX) && (a<=1))
        return 0x872004000010ll + 0x1000000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_PF_EXE_CLK", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_PF_EXE_CLK(a) bdk_cptx_pf_exe_clk_t
#define bustype_BDK_CPTX_PF_EXE_CLK(a) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_PF_EXE_CLK(a) "CPTX_PF_EXE_CLK"
#define device_bar_BDK_CPTX_PF_EXE_CLK(a) 0x0 /* PF_BAR0 */
#define busnum_BDK_CPTX_PF_EXE_CLK(a) (a)
#define arguments_BDK_CPTX_PF_EXE_CLK(a) (a),-1,-1,-1

/**
 * Register (NCB) cpt#_pf_exe_ctl
 *
 * CPT PF Engine Control Register
 * This register enables the engines.
 */
union bdk_cptx_pf_exe_ctl
{
    uint64_t u;
    struct bdk_cptx_pf_exe_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t enable                : 64; /**< [ 63:  0](R/W) Individual enables for each of the engines. */
#else /* Word 0 - Little Endian */
        uint64_t enable                : 64; /**< [ 63:  0](R/W) Individual enables for each of the engines. */
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_pf_exe_ctl_s cn; */
};
typedef union bdk_cptx_pf_exe_ctl bdk_cptx_pf_exe_ctl_t;

static inline uint64_t BDK_CPTX_PF_EXE_CTL(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_PF_EXE_CTL(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && (a==0))
        return 0x872004000000ll + 0x1000000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN83XX) && (a<=1))
        return 0x872004000000ll + 0x1000000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_PF_EXE_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_PF_EXE_CTL(a) bdk_cptx_pf_exe_ctl_t
#define bustype_BDK_CPTX_PF_EXE_CTL(a) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_PF_EXE_CTL(a) "CPTX_PF_EXE_CTL"
#define device_bar_BDK_CPTX_PF_EXE_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_BDK_CPTX_PF_EXE_CTL(a) (a)
#define arguments_BDK_CPTX_PF_EXE_CTL(a) (a),-1,-1,-1

/**
 * Register (NCB) cpt#_pf_exe_dbg_cnt#
 *
 * CPT PF Debug Bus Counter Register
 */
union bdk_cptx_pf_exe_dbg_cntx
{
    uint64_t u;
    struct bdk_cptx_pf_exe_dbg_cntx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t counter               : 48; /**< [ 47:  0](R/W1C/H) Counts events on the debug bus. */
#else /* Word 0 - Little Endian */
        uint64_t counter               : 48; /**< [ 47:  0](R/W1C/H) Counts events on the debug bus. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_pf_exe_dbg_cntx_s cn; */
};
typedef union bdk_cptx_pf_exe_dbg_cntx bdk_cptx_pf_exe_dbg_cntx_t;

static inline uint64_t BDK_CPTX_PF_EXE_DBG_CNTX(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_PF_EXE_DBG_CNTX(unsigned long a, unsigned long b)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && ((a==0) && (b<=15)))
        return 0x872004001100ll + 0x1000000000ll * ((a) & 0x0) + 8ll * ((b) & 0xf);
    if (bdk_is_model(OCTEONTX_CN83XX) && ((a<=1) && (b<=15)))
        return 0x872004001100ll + 0x1000000000ll * ((a) & 0x1) + 8ll * ((b) & 0xf);
    __bdk_csr_fatal("CPTX_PF_EXE_DBG_CNTX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_PF_EXE_DBG_CNTX(a,b) bdk_cptx_pf_exe_dbg_cntx_t
#define bustype_BDK_CPTX_PF_EXE_DBG_CNTX(a,b) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_PF_EXE_DBG_CNTX(a,b) "CPTX_PF_EXE_DBG_CNTX"
#define device_bar_BDK_CPTX_PF_EXE_DBG_CNTX(a,b) 0x0 /* PF_BAR0 */
#define busnum_BDK_CPTX_PF_EXE_DBG_CNTX(a,b) (a)
#define arguments_BDK_CPTX_PF_EXE_DBG_CNTX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) cpt#_pf_exe_dbg_ctl
 *
 * CPT PF Engine Debug Control Register
 * This register controls engine diagnostic features.
 */
union bdk_cptx_pf_exe_dbg_ctl
{
    uint64_t u;
    struct bdk_cptx_pf_exe_dbg_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t eng_sel               : 8;  /**< [ 23: 16](R/W) Engine select. */
        uint64_t reserved_9_15         : 7;
        uint64_t reg_sel               : 9;  /**< [  8:  0](R/W) Debug register select. Setting to all ones returns 0x0 on the debug bus. */
#else /* Word 0 - Little Endian */
        uint64_t reg_sel               : 9;  /**< [  8:  0](R/W) Debug register select. Setting to all ones returns 0x0 on the debug bus. */
        uint64_t reserved_9_15         : 7;
        uint64_t eng_sel               : 8;  /**< [ 23: 16](R/W) Engine select. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_pf_exe_dbg_ctl_s cn; */
};
typedef union bdk_cptx_pf_exe_dbg_ctl bdk_cptx_pf_exe_dbg_ctl_t;

static inline uint64_t BDK_CPTX_PF_EXE_DBG_CTL(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_PF_EXE_DBG_CTL(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && (a==0))
        return 0x872004000018ll + 0x1000000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN83XX) && (a<=1))
        return 0x872004000018ll + 0x1000000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_PF_EXE_DBG_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_PF_EXE_DBG_CTL(a) bdk_cptx_pf_exe_dbg_ctl_t
#define bustype_BDK_CPTX_PF_EXE_DBG_CTL(a) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_PF_EXE_DBG_CTL(a) "CPTX_PF_EXE_DBG_CTL"
#define device_bar_BDK_CPTX_PF_EXE_DBG_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_BDK_CPTX_PF_EXE_DBG_CTL(a) (a)
#define arguments_BDK_CPTX_PF_EXE_DBG_CTL(a) (a),-1,-1,-1

/**
 * Register (NCB) cpt#_pf_exe_dbg_data
 *
 * CPT PF Engine Debug Data Register
 * This register returns engine debug data as selected by CPT()_PF_EXE_DBG_CTL.
 */
union bdk_cptx_pf_exe_dbg_data
{
    uint64_t u;
    struct bdk_cptx_pf_exe_dbg_data_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t data                  : 16; /**< [ 15:  0](RO/H) Debug data. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 16; /**< [ 15:  0](RO/H) Debug data. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_pf_exe_dbg_data_s cn; */
};
typedef union bdk_cptx_pf_exe_dbg_data bdk_cptx_pf_exe_dbg_data_t;

static inline uint64_t BDK_CPTX_PF_EXE_DBG_DATA(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_PF_EXE_DBG_DATA(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && (a==0))
        return 0x872004000020ll + 0x1000000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN83XX) && (a<=1))
        return 0x872004000020ll + 0x1000000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_PF_EXE_DBG_DATA", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_PF_EXE_DBG_DATA(a) bdk_cptx_pf_exe_dbg_data_t
#define bustype_BDK_CPTX_PF_EXE_DBG_DATA(a) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_PF_EXE_DBG_DATA(a) "CPTX_PF_EXE_DBG_DATA"
#define device_bar_BDK_CPTX_PF_EXE_DBG_DATA(a) 0x0 /* PF_BAR0 */
#define busnum_BDK_CPTX_PF_EXE_DBG_DATA(a) (a)
#define arguments_BDK_CPTX_PF_EXE_DBG_DATA(a) (a),-1,-1,-1

/**
 * Register (NCB) cpt#_pf_exe_epci_inb#_cnt
 *
 * CPT PF EPCI Inbound Counter Register
 */
union bdk_cptx_pf_exe_epci_inbx_cnt
{
    uint64_t u;
    struct bdk_cptx_pf_exe_epci_inbx_cnt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t counter               : 48; /**< [ 47:  0](R/W1C/H) Counts the number of valid inbound cycles in EPCI bus. */
#else /* Word 0 - Little Endian */
        uint64_t counter               : 48; /**< [ 47:  0](R/W1C/H) Counts the number of valid inbound cycles in EPCI bus. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_pf_exe_epci_inbx_cnt_s cn; */
};
typedef union bdk_cptx_pf_exe_epci_inbx_cnt bdk_cptx_pf_exe_epci_inbx_cnt_t;

static inline uint64_t BDK_CPTX_PF_EXE_EPCI_INBX_CNT(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_PF_EXE_EPCI_INBX_CNT(unsigned long a, unsigned long b)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && ((a==0) && (b==0)))
        return 0x872004001200ll + 0x1000000000ll * ((a) & 0x0) + 8ll * ((b) & 0x0);
    if (bdk_is_model(OCTEONTX_CN83XX) && ((a<=1) && (b<=1)))
        return 0x872004001200ll + 0x1000000000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    __bdk_csr_fatal("CPTX_PF_EXE_EPCI_INBX_CNT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_PF_EXE_EPCI_INBX_CNT(a,b) bdk_cptx_pf_exe_epci_inbx_cnt_t
#define bustype_BDK_CPTX_PF_EXE_EPCI_INBX_CNT(a,b) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_PF_EXE_EPCI_INBX_CNT(a,b) "CPTX_PF_EXE_EPCI_INBX_CNT"
#define device_bar_BDK_CPTX_PF_EXE_EPCI_INBX_CNT(a,b) 0x0 /* PF_BAR0 */
#define busnum_BDK_CPTX_PF_EXE_EPCI_INBX_CNT(a,b) (a)
#define arguments_BDK_CPTX_PF_EXE_EPCI_INBX_CNT(a,b) (a),(b),-1,-1

/**
 * Register (NCB) cpt#_pf_exe_epci_outb#_cnt
 *
 * CPT PF EPCI Outbound Counter Register
 */
union bdk_cptx_pf_exe_epci_outbx_cnt
{
    uint64_t u;
    struct bdk_cptx_pf_exe_epci_outbx_cnt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t counter               : 48; /**< [ 47:  0](R/W1C/H) Counts the number of valid outbound cycles in EPCI bus. */
#else /* Word 0 - Little Endian */
        uint64_t counter               : 48; /**< [ 47:  0](R/W1C/H) Counts the number of valid outbound cycles in EPCI bus. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_pf_exe_epci_outbx_cnt_s cn; */
};
typedef union bdk_cptx_pf_exe_epci_outbx_cnt bdk_cptx_pf_exe_epci_outbx_cnt_t;

static inline uint64_t BDK_CPTX_PF_EXE_EPCI_OUTBX_CNT(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_PF_EXE_EPCI_OUTBX_CNT(unsigned long a, unsigned long b)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && ((a==0) && (b==0)))
        return 0x872004001240ll + 0x1000000000ll * ((a) & 0x0) + 8ll * ((b) & 0x0);
    if (bdk_is_model(OCTEONTX_CN83XX) && ((a<=1) && (b<=1)))
        return 0x872004001240ll + 0x1000000000ll * ((a) & 0x1) + 8ll * ((b) & 0x1);
    __bdk_csr_fatal("CPTX_PF_EXE_EPCI_OUTBX_CNT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_PF_EXE_EPCI_OUTBX_CNT(a,b) bdk_cptx_pf_exe_epci_outbx_cnt_t
#define bustype_BDK_CPTX_PF_EXE_EPCI_OUTBX_CNT(a,b) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_PF_EXE_EPCI_OUTBX_CNT(a,b) "CPTX_PF_EXE_EPCI_OUTBX_CNT"
#define device_bar_BDK_CPTX_PF_EXE_EPCI_OUTBX_CNT(a,b) 0x0 /* PF_BAR0 */
#define busnum_BDK_CPTX_PF_EXE_EPCI_OUTBX_CNT(a,b) (a)
#define arguments_BDK_CPTX_PF_EXE_EPCI_OUTBX_CNT(a,b) (a),(b),-1,-1

/**
 * Register (NCB) cpt#_pf_exe_mem_ctl
 *
 * CPT PF Engine ECC Control Register
 * This register enables per-Engine ECC for each individual internal memory that requires ECC.
 * For debug
 * purposes, it can also flip one or two bits in the ECC data.
 */
union bdk_cptx_pf_exe_mem_ctl
{
    uint64_t u;
    struct bdk_cptx_pf_exe_mem_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t emu_sel               : 8;  /**< [ 23: 16](R/W) Engine select. */
        uint64_t reserved_4_15         : 12;
        uint64_t pflip                 : 1;  /**< [  3:  3](R/W) Flip the parity bit in the icache memories. */
        uint64_t flip1                 : 1;  /**< [  2:  2](R/W) Flip syndrome bit 1 in register file memories. */
        uint64_t flip0                 : 1;  /**< [  1:  1](R/W) Flip syndrome bit 0 in register file memories. */
        uint64_t cdis                  : 1;  /**< [  0:  0](R/W) Disable correction for register file memories. */
#else /* Word 0 - Little Endian */
        uint64_t cdis                  : 1;  /**< [  0:  0](R/W) Disable correction for register file memories. */
        uint64_t flip0                 : 1;  /**< [  1:  1](R/W) Flip syndrome bit 0 in register file memories. */
        uint64_t flip1                 : 1;  /**< [  2:  2](R/W) Flip syndrome bit 1 in register file memories. */
        uint64_t pflip                 : 1;  /**< [  3:  3](R/W) Flip the parity bit in the icache memories. */
        uint64_t reserved_4_15         : 12;
        uint64_t emu_sel               : 8;  /**< [ 23: 16](R/W) Engine select. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_pf_exe_mem_ctl_s cn; */
};
typedef union bdk_cptx_pf_exe_mem_ctl bdk_cptx_pf_exe_mem_ctl_t;

static inline uint64_t BDK_CPTX_PF_EXE_MEM_CTL(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_PF_EXE_MEM_CTL(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && (a==0))
        return 0x872004000038ll + 0x1000000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN83XX) && (a<=1))
        return 0x872004000038ll + 0x1000000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_PF_EXE_MEM_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_PF_EXE_MEM_CTL(a) bdk_cptx_pf_exe_mem_ctl_t
#define bustype_BDK_CPTX_PF_EXE_MEM_CTL(a) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_PF_EXE_MEM_CTL(a) "CPTX_PF_EXE_MEM_CTL"
#define device_bar_BDK_CPTX_PF_EXE_MEM_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_BDK_CPTX_PF_EXE_MEM_CTL(a) (a)
#define arguments_BDK_CPTX_PF_EXE_MEM_CTL(a) (a),-1,-1,-1

/**
 * Register (NCB) cpt#_pf_exe_perf_ctl
 *
 * CPT PF Engine Performance Control Register
 * This register controls engine performance counters.
 */
union bdk_cptx_pf_exe_perf_ctl
{
    uint64_t u;
    struct bdk_cptx_pf_exe_perf_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_21_63        : 43;
        uint64_t epci_inb_cnt_en       : 2;  /**< [ 20: 19](R/W) Enable EPCI inbound counters. */
        uint64_t epci_outb_cnt_en      : 2;  /**< [ 18: 17](R/W) Enable EPCI outbound counters. */
        uint64_t event_cnt_en          : 1;  /**< [ 16: 16](R/W) Enable single event counter. */
        uint64_t dbg_cnt_en            : 16; /**< [ 15:  0](R/W) Enable counters on debug bus. */
#else /* Word 0 - Little Endian */
        uint64_t dbg_cnt_en            : 16; /**< [ 15:  0](R/W) Enable counters on debug bus. */
        uint64_t event_cnt_en          : 1;  /**< [ 16: 16](R/W) Enable single event counter. */
        uint64_t epci_outb_cnt_en      : 2;  /**< [ 18: 17](R/W) Enable EPCI outbound counters. */
        uint64_t epci_inb_cnt_en       : 2;  /**< [ 20: 19](R/W) Enable EPCI inbound counters. */
        uint64_t reserved_21_63        : 43;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_pf_exe_perf_ctl_s cn; */
};
typedef union bdk_cptx_pf_exe_perf_ctl bdk_cptx_pf_exe_perf_ctl_t;

static inline uint64_t BDK_CPTX_PF_EXE_PERF_CTL(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_PF_EXE_PERF_CTL(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && (a==0))
        return 0x872004001000ll + 0x1000000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN83XX) && (a<=1))
        return 0x872004001000ll + 0x1000000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_PF_EXE_PERF_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_PF_EXE_PERF_CTL(a) bdk_cptx_pf_exe_perf_ctl_t
#define bustype_BDK_CPTX_PF_EXE_PERF_CTL(a) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_PF_EXE_PERF_CTL(a) "CPTX_PF_EXE_PERF_CTL"
#define device_bar_BDK_CPTX_PF_EXE_PERF_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_BDK_CPTX_PF_EXE_PERF_CTL(a) (a)
#define arguments_BDK_CPTX_PF_EXE_PERF_CTL(a) (a),-1,-1,-1

/**
 * Register (NCB) cpt#_pf_exe_perf_event_cnt
 *
 * CPT PF Engine Performance Event Counter Register
 */
union bdk_cptx_pf_exe_perf_event_cnt
{
    uint64_t u;
    struct bdk_cptx_pf_exe_perf_event_cnt_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t counter               : 48; /**< [ 47:  0](R/W1C/H) Counts the performance events in an engine. The event is selected by setting
                                                                 the lower 3 bits of CPT()_PF_EXE_DBG_CTL[REG_SEL].
                                                                 0x0 = Undefined.
                                                                 0x1 = The number of cycles the exec is waiting for the exec is waiting for
                                                                 inbound bus data.
                                                                 0x2 = The number of cycles the execution queue is busy.
                                                                 0x3 = The number of cycles the execution queue cannot issue instructions because
                                                                 of a datapath stall. */
#else /* Word 0 - Little Endian */
        uint64_t counter               : 48; /**< [ 47:  0](R/W1C/H) Counts the performance events in an engine. The event is selected by setting
                                                                 the lower 3 bits of CPT()_PF_EXE_DBG_CTL[REG_SEL].
                                                                 0x0 = Undefined.
                                                                 0x1 = The number of cycles the exec is waiting for the exec is waiting for
                                                                 inbound bus data.
                                                                 0x2 = The number of cycles the execution queue is busy.
                                                                 0x3 = The number of cycles the execution queue cannot issue instructions because
                                                                 of a datapath stall. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_pf_exe_perf_event_cnt_s cn; */
};
typedef union bdk_cptx_pf_exe_perf_event_cnt bdk_cptx_pf_exe_perf_event_cnt_t;

static inline uint64_t BDK_CPTX_PF_EXE_PERF_EVENT_CNT(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_PF_EXE_PERF_EVENT_CNT(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && (a==0))
        return 0x872004001180ll + 0x1000000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN83XX) && (a<=1))
        return 0x872004001180ll + 0x1000000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_PF_EXE_PERF_EVENT_CNT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_PF_EXE_PERF_EVENT_CNT(a) bdk_cptx_pf_exe_perf_event_cnt_t
#define bustype_BDK_CPTX_PF_EXE_PERF_EVENT_CNT(a) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_PF_EXE_PERF_EVENT_CNT(a) "CPTX_PF_EXE_PERF_EVENT_CNT"
#define device_bar_BDK_CPTX_PF_EXE_PERF_EVENT_CNT(a) 0x0 /* PF_BAR0 */
#define busnum_BDK_CPTX_PF_EXE_PERF_EVENT_CNT(a) (a)
#define arguments_BDK_CPTX_PF_EXE_PERF_EVENT_CNT(a) (a),-1,-1,-1

/**
 * Register (NCB) cpt#_pf_exe_req_timer
 *
 * CPT PF Engine Arbiter Control Register
 */
union bdk_cptx_pf_exe_req_timer
{
    uint64_t u;
    struct bdk_cptx_pf_exe_req_timer_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t cnt                   : 8;  /**< [  7:  0](R/W) Interval to promote starving low priority requests to high priorty. After
                                                                 between one and two times this interval a pending low priority request will be
                                                                 elevated to high priority status.
                                                                 0x0 = Disabled.
                                                                 0x1 = Timeout between 256 and 511 cycles.
                                                                 0x2 = Timeout between 512 and 1023 cycles.
                                                                 0x3 = Timeout between 768 and 1535 cycles.
                                                                 _ etc. */
#else /* Word 0 - Little Endian */
        uint64_t cnt                   : 8;  /**< [  7:  0](R/W) Interval to promote starving low priority requests to high priorty. After
                                                                 between one and two times this interval a pending low priority request will be
                                                                 elevated to high priority status.
                                                                 0x0 = Disabled.
                                                                 0x1 = Timeout between 256 and 511 cycles.
                                                                 0x2 = Timeout between 512 and 1023 cycles.
                                                                 0x3 = Timeout between 768 and 1535 cycles.
                                                                 _ etc. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_pf_exe_req_timer_s cn; */
};
typedef union bdk_cptx_pf_exe_req_timer bdk_cptx_pf_exe_req_timer_t;

static inline uint64_t BDK_CPTX_PF_EXE_REQ_TIMER(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_PF_EXE_REQ_TIMER(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && (a==0))
        return 0x872004000030ll + 0x1000000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN83XX) && (a<=1))
        return 0x872004000030ll + 0x1000000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_PF_EXE_REQ_TIMER", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_PF_EXE_REQ_TIMER(a) bdk_cptx_pf_exe_req_timer_t
#define bustype_BDK_CPTX_PF_EXE_REQ_TIMER(a) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_PF_EXE_REQ_TIMER(a) "CPTX_PF_EXE_REQ_TIMER"
#define device_bar_BDK_CPTX_PF_EXE_REQ_TIMER(a) 0x0 /* PF_BAR0 */
#define busnum_BDK_CPTX_PF_EXE_REQ_TIMER(a) (a)
#define arguments_BDK_CPTX_PF_EXE_REQ_TIMER(a) (a),-1,-1,-1

/**
 * Register (NCB) cpt#_pf_exe_status
 *
 * CPT PF Engine Control Register
 * This register indicates whether the engine can be shutdown.
 */
union bdk_cptx_pf_exe_status
{
    uint64_t u;
    struct bdk_cptx_pf_exe_status_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t active                : 64; /**< [ 63:  0](RO/H) Engine is enabled and not idle. */
#else /* Word 0 - Little Endian */
        uint64_t active                : 64; /**< [ 63:  0](RO/H) Engine is enabled and not idle. */
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_pf_exe_status_s cn; */
};
typedef union bdk_cptx_pf_exe_status bdk_cptx_pf_exe_status_t;

static inline uint64_t BDK_CPTX_PF_EXE_STATUS(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_PF_EXE_STATUS(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && (a==0))
        return 0x872004000008ll + 0x1000000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN83XX) && (a<=1))
        return 0x872004000008ll + 0x1000000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_PF_EXE_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_PF_EXE_STATUS(a) bdk_cptx_pf_exe_status_t
#define bustype_BDK_CPTX_PF_EXE_STATUS(a) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_PF_EXE_STATUS(a) "CPTX_PF_EXE_STATUS"
#define device_bar_BDK_CPTX_PF_EXE_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_BDK_CPTX_PF_EXE_STATUS(a) (a)
#define arguments_BDK_CPTX_PF_EXE_STATUS(a) (a),-1,-1,-1

/**
 * Register (NCB) cpt#_pf_exec_busy
 *
 * CPT Engine Info Register
 * This contains the busy status of the execs.
 */
union bdk_cptx_pf_exec_busy
{
    uint64_t u;
    struct bdk_cptx_pf_exec_busy_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t busy                  : 64; /**< [ 63:  0](RO/H) Current state of the engine, one bit per engine.  Before
                                                                 disabling an engine via the PF_EXE_CTL register, the
                                                                 corresponding bit in this register must be clear. */
#else /* Word 0 - Little Endian */
        uint64_t busy                  : 64; /**< [ 63:  0](RO/H) Current state of the engine, one bit per engine.  Before
                                                                 disabling an engine via the PF_EXE_CTL register, the
                                                                 corresponding bit in this register must be clear. */
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_pf_exec_busy_s cn; */
};
typedef union bdk_cptx_pf_exec_busy bdk_cptx_pf_exec_busy_t;

static inline uint64_t BDK_CPTX_PF_EXEC_BUSY(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_PF_EXEC_BUSY(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && (a==0))
        return 0x872000000800ll + 0x1000000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN83XX) && (a<=1))
        return 0x872000000800ll + 0x1000000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_PF_EXEC_BUSY", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_PF_EXEC_BUSY(a) bdk_cptx_pf_exec_busy_t
#define bustype_BDK_CPTX_PF_EXEC_BUSY(a) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_PF_EXEC_BUSY(a) "CPTX_PF_EXEC_BUSY"
#define device_bar_BDK_CPTX_PF_EXEC_BUSY(a) 0x0 /* PF_BAR0 */
#define busnum_BDK_CPTX_PF_EXEC_BUSY(a) (a)
#define arguments_BDK_CPTX_PF_EXEC_BUSY(a) (a),-1,-1,-1

/**
 * Register (NCB) cpt#_pf_exec_ena_w1c
 *
 * CPT PF Exec Unit Interrupt Enable Clear Registers
 * This register clears interrupt enable bits.
 */
union bdk_cptx_pf_exec_ena_w1c
{
    uint64_t u;
    struct bdk_cptx_pf_exec_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t exec                  : 64; /**< [ 63:  0](R/W1C/H) Reads or clears enable for CPT(0)_PF_EXEC_INT[EXEC]. */
#else /* Word 0 - Little Endian */
        uint64_t exec                  : 64; /**< [ 63:  0](R/W1C/H) Reads or clears enable for CPT(0)_PF_EXEC_INT[EXEC]. */
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_pf_exec_ena_w1c_s cn8; */
    /* struct bdk_cptx_pf_exec_ena_w1c_s cn81xx; */
    struct bdk_cptx_pf_exec_ena_w1c_cn83xx
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t exec                  : 64; /**< [ 63:  0](R/W1C/H) Reads or clears enable for CPT(0..1)_PF_EXEC_INT[EXEC]. */
#else /* Word 0 - Little Endian */
        uint64_t exec                  : 64; /**< [ 63:  0](R/W1C/H) Reads or clears enable for CPT(0..1)_PF_EXEC_INT[EXEC]. */
#endif /* Word 0 - End */
    } cn83xx;
};
typedef union bdk_cptx_pf_exec_ena_w1c bdk_cptx_pf_exec_ena_w1c_t;

static inline uint64_t BDK_CPTX_PF_EXEC_ENA_W1C(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_PF_EXEC_ENA_W1C(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && (a==0))
        return 0x872000000540ll + 0x1000000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN83XX) && (a<=1))
        return 0x872000000540ll + 0x1000000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_PF_EXEC_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_PF_EXEC_ENA_W1C(a) bdk_cptx_pf_exec_ena_w1c_t
#define bustype_BDK_CPTX_PF_EXEC_ENA_W1C(a) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_PF_EXEC_ENA_W1C(a) "CPTX_PF_EXEC_ENA_W1C"
#define device_bar_BDK_CPTX_PF_EXEC_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_BDK_CPTX_PF_EXEC_ENA_W1C(a) (a)
#define arguments_BDK_CPTX_PF_EXEC_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (NCB) cpt#_pf_exec_ena_w1s
 *
 * CPT PF Exec Unit Interrupt Enable Set Registers
 * This register sets interrupt enable bits.
 */
union bdk_cptx_pf_exec_ena_w1s
{
    uint64_t u;
    struct bdk_cptx_pf_exec_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t exec                  : 64; /**< [ 63:  0](R/W1S/H) Reads or sets enable for CPT(0)_PF_EXEC_INT[EXEC]. */
#else /* Word 0 - Little Endian */
        uint64_t exec                  : 64; /**< [ 63:  0](R/W1S/H) Reads or sets enable for CPT(0)_PF_EXEC_INT[EXEC]. */
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_pf_exec_ena_w1s_s cn8; */
    /* struct bdk_cptx_pf_exec_ena_w1s_s cn81xx; */
    struct bdk_cptx_pf_exec_ena_w1s_cn83xx
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t exec                  : 64; /**< [ 63:  0](R/W1S/H) Reads or sets enable for CPT(0..1)_PF_EXEC_INT[EXEC]. */
#else /* Word 0 - Little Endian */
        uint64_t exec                  : 64; /**< [ 63:  0](R/W1S/H) Reads or sets enable for CPT(0..1)_PF_EXEC_INT[EXEC]. */
#endif /* Word 0 - End */
    } cn83xx;
};
typedef union bdk_cptx_pf_exec_ena_w1s bdk_cptx_pf_exec_ena_w1s_t;

static inline uint64_t BDK_CPTX_PF_EXEC_ENA_W1S(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_PF_EXEC_ENA_W1S(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && (a==0))
        return 0x872000000560ll + 0x1000000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN83XX) && (a<=1))
        return 0x872000000560ll + 0x1000000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_PF_EXEC_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_PF_EXEC_ENA_W1S(a) bdk_cptx_pf_exec_ena_w1s_t
#define bustype_BDK_CPTX_PF_EXEC_ENA_W1S(a) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_PF_EXEC_ENA_W1S(a) "CPTX_PF_EXEC_ENA_W1S"
#define device_bar_BDK_CPTX_PF_EXEC_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_BDK_CPTX_PF_EXEC_ENA_W1S(a) (a)
#define arguments_BDK_CPTX_PF_EXEC_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) cpt#_pf_exec_info
 *
 * CPT Engine Info Register
 * This contains the error code and PC for the most recent ERR_REQUEST.
 */
union bdk_cptx_pf_exec_info
{
    uint64_t u;
    struct bdk_cptx_pf_exec_info_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_32_63        : 32;
        uint64_t errcode               : 8;  /**< [ 31: 24](R/W/H) Error type.  Defined by the CPT_ENGINE_ERR_TYPE_E enum. */
        uint64_t reserved_23           : 1;
        uint64_t errpc                 : 15; /**< [ 22:  8](R/W/H) MicroPC of the instruction that caused the error. */
        uint64_t eid                   : 8;  /**< [  7:  0](R/W/H) Engine number of the most recent engine to issue an
                                                                  ERR_REQUEST. */
#else /* Word 0 - Little Endian */
        uint64_t eid                   : 8;  /**< [  7:  0](R/W/H) Engine number of the most recent engine to issue an
                                                                  ERR_REQUEST. */
        uint64_t errpc                 : 15; /**< [ 22:  8](R/W/H) MicroPC of the instruction that caused the error. */
        uint64_t reserved_23           : 1;
        uint64_t errcode               : 8;  /**< [ 31: 24](R/W/H) Error type.  Defined by the CPT_ENGINE_ERR_TYPE_E enum. */
        uint64_t reserved_32_63        : 32;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_pf_exec_info_s cn; */
};
typedef union bdk_cptx_pf_exec_info bdk_cptx_pf_exec_info_t;

static inline uint64_t BDK_CPTX_PF_EXEC_INFO(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_PF_EXEC_INFO(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && (a==0))
        return 0x872000000700ll + 0x1000000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN83XX) && (a<=1))
        return 0x872000000700ll + 0x1000000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_PF_EXEC_INFO", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_PF_EXEC_INFO(a) bdk_cptx_pf_exec_info_t
#define bustype_BDK_CPTX_PF_EXEC_INFO(a) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_PF_EXEC_INFO(a) "CPTX_PF_EXEC_INFO"
#define device_bar_BDK_CPTX_PF_EXEC_INFO(a) 0x0 /* PF_BAR0 */
#define busnum_BDK_CPTX_PF_EXEC_INFO(a) (a)
#define arguments_BDK_CPTX_PF_EXEC_INFO(a) (a),-1,-1,-1

/**
 * Register (NCB) cpt#_pf_exec_info0
 *
 * CPT RF_SBE Register
 * This register is for diagnostic purposes.
 */
union bdk_cptx_pf_exec_info0
{
    uint64_t u;
    struct bdk_cptx_pf_exec_info0_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t rf_sbe                : 48; /**< [ 47:  0](R/W1C/H) Set if an engine detects a SBE in the register file. */
#else /* Word 0 - Little Endian */
        uint64_t rf_sbe                : 48; /**< [ 47:  0](R/W1C/H) Set if an engine detects a SBE in the register file. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_pf_exec_info0_s cn8; */
    struct bdk_cptx_pf_exec_info0_cn81xx
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t rf_sbe                : 16; /**< [ 15:  0](R/W1C/H) Set if an engine detects a SBE in the register file. */
#else /* Word 0 - Little Endian */
        uint64_t rf_sbe                : 16; /**< [ 15:  0](R/W1C/H) Set if an engine detects a SBE in the register file. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } cn81xx;
    /* struct bdk_cptx_pf_exec_info0_s cn83xx; */
};
typedef union bdk_cptx_pf_exec_info0 bdk_cptx_pf_exec_info0_t;

static inline uint64_t BDK_CPTX_PF_EXEC_INFO0(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_PF_EXEC_INFO0(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && (a==0))
        return 0x872000000900ll + 0x1000000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN83XX) && (a<=1))
        return 0x872000000900ll + 0x1000000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_PF_EXEC_INFO0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_PF_EXEC_INFO0(a) bdk_cptx_pf_exec_info0_t
#define bustype_BDK_CPTX_PF_EXEC_INFO0(a) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_PF_EXEC_INFO0(a) "CPTX_PF_EXEC_INFO0"
#define device_bar_BDK_CPTX_PF_EXEC_INFO0(a) 0x0 /* PF_BAR0 */
#define busnum_BDK_CPTX_PF_EXEC_INFO0(a) (a)
#define arguments_BDK_CPTX_PF_EXEC_INFO0(a) (a),-1,-1,-1

/**
 * Register (NCB) cpt#_pf_exec_info1
 *
 * CPT UC_ERR Register
 * This register is for diagnostic purposes.
 */
union bdk_cptx_pf_exec_info1
{
    uint64_t u;
    struct bdk_cptx_pf_exec_info1_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t uc_err                : 48; /**< [ 47:  0](R/W1C/H) Microcode cache error detected and corrected by an engine. */
#else /* Word 0 - Little Endian */
        uint64_t uc_err                : 48; /**< [ 47:  0](R/W1C/H) Microcode cache error detected and corrected by an engine. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_pf_exec_info1_s cn8; */
    struct bdk_cptx_pf_exec_info1_cn81xx
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_16_63        : 48;
        uint64_t uc_err                : 16; /**< [ 15:  0](R/W1C/H) Microcode cache error detected and corrected by an engine. */
#else /* Word 0 - Little Endian */
        uint64_t uc_err                : 16; /**< [ 15:  0](R/W1C/H) Microcode cache error detected and corrected by an engine. */
        uint64_t reserved_16_63        : 48;
#endif /* Word 0 - End */
    } cn81xx;
    /* struct bdk_cptx_pf_exec_info1_s cn83xx; */
};
typedef union bdk_cptx_pf_exec_info1 bdk_cptx_pf_exec_info1_t;

static inline uint64_t BDK_CPTX_PF_EXEC_INFO1(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_PF_EXEC_INFO1(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && (a==0))
        return 0x872000000910ll + 0x1000000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN83XX) && (a<=1))
        return 0x872000000910ll + 0x1000000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_PF_EXEC_INFO1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_PF_EXEC_INFO1(a) bdk_cptx_pf_exec_info1_t
#define bustype_BDK_CPTX_PF_EXEC_INFO1(a) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_PF_EXEC_INFO1(a) "CPTX_PF_EXEC_INFO1"
#define device_bar_BDK_CPTX_PF_EXEC_INFO1(a) 0x0 /* PF_BAR0 */
#define busnum_BDK_CPTX_PF_EXEC_INFO1(a) (a)
#define arguments_BDK_CPTX_PF_EXEC_INFO1(a) (a),-1,-1,-1

/**
 * Register (NCB) cpt#_pf_exec_int
 *
 * CPT Exec Unit Interrupt Registers
 */
union bdk_cptx_pf_exec_int
{
    uint64_t u;
    struct bdk_cptx_pf_exec_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t exec                  : 64; /**< [ 63:  0](R/W1C/H) One interrupt bit per engine. Each bit is set
                                                                  when the associated engine issues an error
                                                                  request.  The most recent error information
                                                                  can be found in CPT()_PF_EXEC_INFO. */
#else /* Word 0 - Little Endian */
        uint64_t exec                  : 64; /**< [ 63:  0](R/W1C/H) One interrupt bit per engine. Each bit is set
                                                                  when the associated engine issues an error
                                                                  request.  The most recent error information
                                                                  can be found in CPT()_PF_EXEC_INFO. */
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_pf_exec_int_s cn8; */
    /* struct bdk_cptx_pf_exec_int_s cn81xx; */
    struct bdk_cptx_pf_exec_int_cn83xx
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t exec                  : 64; /**< [ 63:  0](R/W1C/H) One interrupt bit per engine. Each bit is set when the associated engine
                                                                 receives an error indication (fault) during a microcode fetch.

                                                                 If CPT()_PF_ACTIVE_VF()[VFNUM] is nonzero, indicates that the engine was active
                                                                 for a queue and software must reset that queue. */
#else /* Word 0 - Little Endian */
        uint64_t exec                  : 64; /**< [ 63:  0](R/W1C/H) One interrupt bit per engine. Each bit is set when the associated engine
                                                                 receives an error indication (fault) during a microcode fetch.

                                                                 If CPT()_PF_ACTIVE_VF()[VFNUM] is nonzero, indicates that the engine was active
                                                                 for a queue and software must reset that queue. */
#endif /* Word 0 - End */
    } cn83xx;
};
typedef union bdk_cptx_pf_exec_int bdk_cptx_pf_exec_int_t;

static inline uint64_t BDK_CPTX_PF_EXEC_INT(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_PF_EXEC_INT(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && (a==0))
        return 0x872000000500ll + 0x1000000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN83XX) && (a<=1))
        return 0x872000000500ll + 0x1000000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_PF_EXEC_INT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_PF_EXEC_INT(a) bdk_cptx_pf_exec_int_t
#define bustype_BDK_CPTX_PF_EXEC_INT(a) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_PF_EXEC_INT(a) "CPTX_PF_EXEC_INT"
#define device_bar_BDK_CPTX_PF_EXEC_INT(a) 0x0 /* PF_BAR0 */
#define busnum_BDK_CPTX_PF_EXEC_INT(a) (a)
#define arguments_BDK_CPTX_PF_EXEC_INT(a) (a),-1,-1,-1

/**
 * Register (NCB) cpt#_pf_exec_int_w1s
 *
 * CPT PF Exec Unit Interrupt Set Registers
 * This register sets interrupt bits.
 */
union bdk_cptx_pf_exec_int_w1s
{
    uint64_t u;
    struct bdk_cptx_pf_exec_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t exec                  : 64; /**< [ 63:  0](R/W1S/H) Reads or sets CPT(0)_PF_EXEC_INT[EXEC]. */
#else /* Word 0 - Little Endian */
        uint64_t exec                  : 64; /**< [ 63:  0](R/W1S/H) Reads or sets CPT(0)_PF_EXEC_INT[EXEC]. */
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_pf_exec_int_w1s_s cn8; */
    /* struct bdk_cptx_pf_exec_int_w1s_s cn81xx; */
    struct bdk_cptx_pf_exec_int_w1s_cn83xx
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t exec                  : 64; /**< [ 63:  0](R/W1S/H) Reads or sets CPT(0..1)_PF_EXEC_INT[EXEC]. */
#else /* Word 0 - Little Endian */
        uint64_t exec                  : 64; /**< [ 63:  0](R/W1S/H) Reads or sets CPT(0..1)_PF_EXEC_INT[EXEC]. */
#endif /* Word 0 - End */
    } cn83xx;
};
typedef union bdk_cptx_pf_exec_int_w1s bdk_cptx_pf_exec_int_w1s_t;

static inline uint64_t BDK_CPTX_PF_EXEC_INT_W1S(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_PF_EXEC_INT_W1S(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && (a==0))
        return 0x872000000520ll + 0x1000000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN83XX) && (a<=1))
        return 0x872000000520ll + 0x1000000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_PF_EXEC_INT_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_PF_EXEC_INT_W1S(a) bdk_cptx_pf_exec_int_w1s_t
#define bustype_BDK_CPTX_PF_EXEC_INT_W1S(a) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_PF_EXEC_INT_W1S(a) "CPTX_PF_EXEC_INT_W1S"
#define device_bar_BDK_CPTX_PF_EXEC_INT_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_BDK_CPTX_PF_EXEC_INT_W1S(a) (a)
#define arguments_BDK_CPTX_PF_EXEC_INT_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) cpt#_pf_g#_en
 *
 * CPT PF Group Control Register
 * This register configures engine groups.
 */
union bdk_cptx_pf_gx_en
{
    uint64_t u;
    struct bdk_cptx_pf_gx_en_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t en                    : 64; /**< [ 63:  0](R/W/H) Engine group enable. One bit corresponds to each engine, with the bit set to
                                                                 indicate this engine can service this group.

                                                                 Bits corresponding to unimplemented engines read as zero, i.e. only bit numbers
                                                                 less than CPT()_PF_CONSTANTS[AE] + CPT()_PF_CONSTANTS[SE] are writable.  AE
                                                                 engine bits follow SE engine bits. E.g. if CPT()_PF_CONSTANTS[AE] = 0x1, and
                                                                 CPT()_PF_CONSTANTS[SE] = 0x2, then bits \<2:0\> are read/writable with bit \<2\>
                                                                 corresponding to AE\<0\>, and bit \<1\> to SE\<1\>, and bit\<0\> to SE\<0\>.

                                                                 Before disabling an engine, the corresponding bit in each group must be cleared.
                                                                 CPT()_PF_EXEC_BUSY can then be polled to determine when the engine becomes
                                                                 idle.  At the point, the engine can be disabled. */
#else /* Word 0 - Little Endian */
        uint64_t en                    : 64; /**< [ 63:  0](R/W/H) Engine group enable. One bit corresponds to each engine, with the bit set to
                                                                 indicate this engine can service this group.

                                                                 Bits corresponding to unimplemented engines read as zero, i.e. only bit numbers
                                                                 less than CPT()_PF_CONSTANTS[AE] + CPT()_PF_CONSTANTS[SE] are writable.  AE
                                                                 engine bits follow SE engine bits. E.g. if CPT()_PF_CONSTANTS[AE] = 0x1, and
                                                                 CPT()_PF_CONSTANTS[SE] = 0x2, then bits \<2:0\> are read/writable with bit \<2\>
                                                                 corresponding to AE\<0\>, and bit \<1\> to SE\<1\>, and bit\<0\> to SE\<0\>.

                                                                 Before disabling an engine, the corresponding bit in each group must be cleared.
                                                                 CPT()_PF_EXEC_BUSY can then be polled to determine when the engine becomes
                                                                 idle.  At the point, the engine can be disabled. */
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_pf_gx_en_s cn; */
};
typedef union bdk_cptx_pf_gx_en bdk_cptx_pf_gx_en_t;

static inline uint64_t BDK_CPTX_PF_GX_EN(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_PF_GX_EN(unsigned long a, unsigned long b)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && ((a==0) && (b<=7)))
        return 0x872000000600ll + 0x1000000000ll * ((a) & 0x0) + 8ll * ((b) & 0x7);
    if (bdk_is_model(OCTEONTX_CN83XX) && ((a<=1) && (b<=7)))
        return 0x872000000600ll + 0x1000000000ll * ((a) & 0x1) + 8ll * ((b) & 0x7);
    __bdk_csr_fatal("CPTX_PF_GX_EN", 2, a, b, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_PF_GX_EN(a,b) bdk_cptx_pf_gx_en_t
#define bustype_BDK_CPTX_PF_GX_EN(a,b) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_PF_GX_EN(a,b) "CPTX_PF_GX_EN"
#define device_bar_BDK_CPTX_PF_GX_EN(a,b) 0x0 /* PF_BAR0 */
#define busnum_BDK_CPTX_PF_GX_EN(a,b) (a)
#define arguments_BDK_CPTX_PF_GX_EN(a,b) (a),(b),-1,-1

/**
 * Register (NCB) cpt#_pf_inst_latency_pc
 *
 * CPT PF Instruction Latency Counter Register
 */
union bdk_cptx_pf_inst_latency_pc
{
    uint64_t u;
    struct bdk_cptx_pf_inst_latency_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Number of cycles waiting for an instruction to complete (have the store of
                                                                 CPT_RES_S reach the commit point). Incremented every coprocessor-clock by the
                                                                 number of instructions active in that cycle. This may be divided by
                                                                 CPT()_PF_RD_REQ_PC to determine the average hardware instruction latency. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Number of cycles waiting for an instruction to complete (have the store of
                                                                 CPT_RES_S reach the commit point). Incremented every coprocessor-clock by the
                                                                 number of instructions active in that cycle. This may be divided by
                                                                 CPT()_PF_RD_REQ_PC to determine the average hardware instruction latency. */
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_pf_inst_latency_pc_s cn; */
};
typedef union bdk_cptx_pf_inst_latency_pc bdk_cptx_pf_inst_latency_pc_t;

static inline uint64_t BDK_CPTX_PF_INST_LATENCY_PC(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_PF_INST_LATENCY_PC(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && (a==0))
        return 0x872000010020ll + 0x1000000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN83XX) && (a<=1))
        return 0x872000010020ll + 0x1000000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_PF_INST_LATENCY_PC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_PF_INST_LATENCY_PC(a) bdk_cptx_pf_inst_latency_pc_t
#define bustype_BDK_CPTX_PF_INST_LATENCY_PC(a) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_PF_INST_LATENCY_PC(a) "CPTX_PF_INST_LATENCY_PC"
#define device_bar_BDK_CPTX_PF_INST_LATENCY_PC(a) 0x0 /* PF_BAR0 */
#define busnum_BDK_CPTX_PF_INST_LATENCY_PC(a) (a)
#define arguments_BDK_CPTX_PF_INST_LATENCY_PC(a) (a),-1,-1,-1

/**
 * Register (NCB) cpt#_pf_inst_req_pc
 *
 * CPT PF Instruction Request Performance Counter Register
 */
union bdk_cptx_pf_inst_req_pc
{
    uint64_t u;
    struct bdk_cptx_pf_inst_req_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Number of instructions that have started processing. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Number of instructions that have started processing. */
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_pf_inst_req_pc_s cn; */
};
typedef union bdk_cptx_pf_inst_req_pc bdk_cptx_pf_inst_req_pc_t;

static inline uint64_t BDK_CPTX_PF_INST_REQ_PC(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_PF_INST_REQ_PC(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && (a==0))
        return 0x872000010000ll + 0x1000000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN83XX) && (a<=1))
        return 0x872000010000ll + 0x1000000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_PF_INST_REQ_PC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_PF_INST_REQ_PC(a) bdk_cptx_pf_inst_req_pc_t
#define bustype_BDK_CPTX_PF_INST_REQ_PC(a) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_PF_INST_REQ_PC(a) "CPTX_PF_INST_REQ_PC"
#define device_bar_BDK_CPTX_PF_INST_REQ_PC(a) 0x0 /* PF_BAR0 */
#define busnum_BDK_CPTX_PF_INST_REQ_PC(a) (a)
#define arguments_BDK_CPTX_PF_INST_REQ_PC(a) (a),-1,-1,-1

/**
 * Register (NCB) cpt#_pf_mbox_ena_w1c#
 *
 * CPT PF Mailbox Enable Clear Registers
 * This register clears interrupt enable bits.
 */
union bdk_cptx_pf_mbox_ena_w1cx
{
    uint64_t u;
    struct bdk_cptx_pf_mbox_ena_w1cx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t mbox                  : 64; /**< [ 63:  0](R/W1C/H) Reads or clears enable for CPT(0)_PF_MBOX_INT(0)[MBOX]. */
#else /* Word 0 - Little Endian */
        uint64_t mbox                  : 64; /**< [ 63:  0](R/W1C/H) Reads or clears enable for CPT(0)_PF_MBOX_INT(0)[MBOX]. */
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_pf_mbox_ena_w1cx_s cn8; */
    /* struct bdk_cptx_pf_mbox_ena_w1cx_s cn81xx; */
    struct bdk_cptx_pf_mbox_ena_w1cx_cn83xx
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t mbox                  : 64; /**< [ 63:  0](R/W1C/H) Reads or clears enable for CPT(0..1)_PF_MBOX_INT(0)[MBOX]. */
#else /* Word 0 - Little Endian */
        uint64_t mbox                  : 64; /**< [ 63:  0](R/W1C/H) Reads or clears enable for CPT(0..1)_PF_MBOX_INT(0)[MBOX]. */
#endif /* Word 0 - End */
    } cn83xx;
};
typedef union bdk_cptx_pf_mbox_ena_w1cx bdk_cptx_pf_mbox_ena_w1cx_t;

static inline uint64_t BDK_CPTX_PF_MBOX_ENA_W1CX(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_PF_MBOX_ENA_W1CX(unsigned long a, unsigned long b)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && ((a==0) && (b==0)))
        return 0x872000000440ll + 0x1000000000ll * ((a) & 0x0) + 8ll * ((b) & 0x0);
    if (bdk_is_model(OCTEONTX_CN83XX) && ((a<=1) && (b==0)))
        return 0x872000000440ll + 0x1000000000ll * ((a) & 0x1) + 8ll * ((b) & 0x0);
    __bdk_csr_fatal("CPTX_PF_MBOX_ENA_W1CX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_PF_MBOX_ENA_W1CX(a,b) bdk_cptx_pf_mbox_ena_w1cx_t
#define bustype_BDK_CPTX_PF_MBOX_ENA_W1CX(a,b) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_PF_MBOX_ENA_W1CX(a,b) "CPTX_PF_MBOX_ENA_W1CX"
#define device_bar_BDK_CPTX_PF_MBOX_ENA_W1CX(a,b) 0x0 /* PF_BAR0 */
#define busnum_BDK_CPTX_PF_MBOX_ENA_W1CX(a,b) (a)
#define arguments_BDK_CPTX_PF_MBOX_ENA_W1CX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) cpt#_pf_mbox_ena_w1s#
 *
 * CPT PF Mailbox Enable Set Registers
 * This register sets interrupt enable bits.
 */
union bdk_cptx_pf_mbox_ena_w1sx
{
    uint64_t u;
    struct bdk_cptx_pf_mbox_ena_w1sx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t mbox                  : 64; /**< [ 63:  0](R/W1S/H) Reads or sets enable for CPT(0)_PF_MBOX_INT(0)[MBOX]. */
#else /* Word 0 - Little Endian */
        uint64_t mbox                  : 64; /**< [ 63:  0](R/W1S/H) Reads or sets enable for CPT(0)_PF_MBOX_INT(0)[MBOX]. */
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_pf_mbox_ena_w1sx_s cn8; */
    /* struct bdk_cptx_pf_mbox_ena_w1sx_s cn81xx; */
    struct bdk_cptx_pf_mbox_ena_w1sx_cn83xx
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t mbox                  : 64; /**< [ 63:  0](R/W1S/H) Reads or sets enable for CPT(0..1)_PF_MBOX_INT(0)[MBOX]. */
#else /* Word 0 - Little Endian */
        uint64_t mbox                  : 64; /**< [ 63:  0](R/W1S/H) Reads or sets enable for CPT(0..1)_PF_MBOX_INT(0)[MBOX]. */
#endif /* Word 0 - End */
    } cn83xx;
};
typedef union bdk_cptx_pf_mbox_ena_w1sx bdk_cptx_pf_mbox_ena_w1sx_t;

static inline uint64_t BDK_CPTX_PF_MBOX_ENA_W1SX(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_PF_MBOX_ENA_W1SX(unsigned long a, unsigned long b)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && ((a==0) && (b==0)))
        return 0x872000000460ll + 0x1000000000ll * ((a) & 0x0) + 8ll * ((b) & 0x0);
    if (bdk_is_model(OCTEONTX_CN83XX) && ((a<=1) && (b==0)))
        return 0x872000000460ll + 0x1000000000ll * ((a) & 0x1) + 8ll * ((b) & 0x0);
    __bdk_csr_fatal("CPTX_PF_MBOX_ENA_W1SX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_PF_MBOX_ENA_W1SX(a,b) bdk_cptx_pf_mbox_ena_w1sx_t
#define bustype_BDK_CPTX_PF_MBOX_ENA_W1SX(a,b) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_PF_MBOX_ENA_W1SX(a,b) "CPTX_PF_MBOX_ENA_W1SX"
#define device_bar_BDK_CPTX_PF_MBOX_ENA_W1SX(a,b) 0x0 /* PF_BAR0 */
#define busnum_BDK_CPTX_PF_MBOX_ENA_W1SX(a,b) (a)
#define arguments_BDK_CPTX_PF_MBOX_ENA_W1SX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) cpt#_pf_mbox_int#
 *
 * CPT PF Mailbox Interrupt Registers
 */
union bdk_cptx_pf_mbox_intx
{
    uint64_t u;
    struct bdk_cptx_pf_mbox_intx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t mbox                  : 64; /**< [ 63:  0](R/W1C/H) One interrupt bit per VF. Each bit is set when the associated
                                                                 CPT()_VF()_PF_MBOX(1) is written. */
#else /* Word 0 - Little Endian */
        uint64_t mbox                  : 64; /**< [ 63:  0](R/W1C/H) One interrupt bit per VF. Each bit is set when the associated
                                                                 CPT()_VF()_PF_MBOX(1) is written. */
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_pf_mbox_intx_s cn; */
};
typedef union bdk_cptx_pf_mbox_intx bdk_cptx_pf_mbox_intx_t;

static inline uint64_t BDK_CPTX_PF_MBOX_INTX(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_PF_MBOX_INTX(unsigned long a, unsigned long b)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && ((a==0) && (b==0)))
        return 0x872000000400ll + 0x1000000000ll * ((a) & 0x0) + 8ll * ((b) & 0x0);
    if (bdk_is_model(OCTEONTX_CN83XX) && ((a<=1) && (b==0)))
        return 0x872000000400ll + 0x1000000000ll * ((a) & 0x1) + 8ll * ((b) & 0x0);
    __bdk_csr_fatal("CPTX_PF_MBOX_INTX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_PF_MBOX_INTX(a,b) bdk_cptx_pf_mbox_intx_t
#define bustype_BDK_CPTX_PF_MBOX_INTX(a,b) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_PF_MBOX_INTX(a,b) "CPTX_PF_MBOX_INTX"
#define device_bar_BDK_CPTX_PF_MBOX_INTX(a,b) 0x0 /* PF_BAR0 */
#define busnum_BDK_CPTX_PF_MBOX_INTX(a,b) (a)
#define arguments_BDK_CPTX_PF_MBOX_INTX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) cpt#_pf_mbox_int_w1s#
 *
 * CPT PF Mailbox Interrupt Set Registers
 * This register sets interrupt bits.
 */
union bdk_cptx_pf_mbox_int_w1sx
{
    uint64_t u;
    struct bdk_cptx_pf_mbox_int_w1sx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t mbox                  : 64; /**< [ 63:  0](R/W1S/H) Reads or sets CPT(0)_PF_MBOX_INT(0)[MBOX]. */
#else /* Word 0 - Little Endian */
        uint64_t mbox                  : 64; /**< [ 63:  0](R/W1S/H) Reads or sets CPT(0)_PF_MBOX_INT(0)[MBOX]. */
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_pf_mbox_int_w1sx_s cn8; */
    /* struct bdk_cptx_pf_mbox_int_w1sx_s cn81xx; */
    struct bdk_cptx_pf_mbox_int_w1sx_cn83xx
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t mbox                  : 64; /**< [ 63:  0](R/W1S/H) Reads or sets CPT(0..1)_PF_MBOX_INT(0)[MBOX]. */
#else /* Word 0 - Little Endian */
        uint64_t mbox                  : 64; /**< [ 63:  0](R/W1S/H) Reads or sets CPT(0..1)_PF_MBOX_INT(0)[MBOX]. */
#endif /* Word 0 - End */
    } cn83xx;
};
typedef union bdk_cptx_pf_mbox_int_w1sx bdk_cptx_pf_mbox_int_w1sx_t;

static inline uint64_t BDK_CPTX_PF_MBOX_INT_W1SX(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_PF_MBOX_INT_W1SX(unsigned long a, unsigned long b)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && ((a==0) && (b==0)))
        return 0x872000000420ll + 0x1000000000ll * ((a) & 0x0) + 8ll * ((b) & 0x0);
    if (bdk_is_model(OCTEONTX_CN83XX) && ((a<=1) && (b==0)))
        return 0x872000000420ll + 0x1000000000ll * ((a) & 0x1) + 8ll * ((b) & 0x0);
    __bdk_csr_fatal("CPTX_PF_MBOX_INT_W1SX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_PF_MBOX_INT_W1SX(a,b) bdk_cptx_pf_mbox_int_w1sx_t
#define bustype_BDK_CPTX_PF_MBOX_INT_W1SX(a,b) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_PF_MBOX_INT_W1SX(a,b) "CPTX_PF_MBOX_INT_W1SX"
#define device_bar_BDK_CPTX_PF_MBOX_INT_W1SX(a,b) 0x0 /* PF_BAR0 */
#define busnum_BDK_CPTX_PF_MBOX_INT_W1SX(a,b) (a)
#define arguments_BDK_CPTX_PF_MBOX_INT_W1SX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) cpt#_pf_msix_pba#
 *
 * CPT PF MSI-X Pending-Bit-Array Registers
 * This register is the MSI-X PBA table, the bit number is indexed by the
 * CPT_PF_INT_VEC_E enumeration.
 */
union bdk_cptx_pf_msix_pbax
{
    uint64_t u;
    struct bdk_cptx_pf_msix_pbax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated CPT()_PF_MSIX_VEC()_CTL, enumerated by
                                                                 CPT_PF_INT_VEC_E. Bits that have no associated CPT_PF_INT_VEC_E are zero. */
#else /* Word 0 - Little Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated CPT()_PF_MSIX_VEC()_CTL, enumerated by
                                                                 CPT_PF_INT_VEC_E. Bits that have no associated CPT_PF_INT_VEC_E are zero. */
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_pf_msix_pbax_s cn; */
};
typedef union bdk_cptx_pf_msix_pbax bdk_cptx_pf_msix_pbax_t;

static inline uint64_t BDK_CPTX_PF_MSIX_PBAX(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_PF_MSIX_PBAX(unsigned long a, unsigned long b)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && ((a==0) && (b==0)))
        return 0x8720100f0000ll + 0x1000000000ll * ((a) & 0x0) + 8ll * ((b) & 0x0);
    if (bdk_is_model(OCTEONTX_CN83XX) && ((a<=1) && (b==0)))
        return 0x8720100f0000ll + 0x1000000000ll * ((a) & 0x1) + 8ll * ((b) & 0x0);
    __bdk_csr_fatal("CPTX_PF_MSIX_PBAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_PF_MSIX_PBAX(a,b) bdk_cptx_pf_msix_pbax_t
#define bustype_BDK_CPTX_PF_MSIX_PBAX(a,b) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_PF_MSIX_PBAX(a,b) "CPTX_PF_MSIX_PBAX"
#define device_bar_BDK_CPTX_PF_MSIX_PBAX(a,b) 0x4 /* PF_BAR4 */
#define busnum_BDK_CPTX_PF_MSIX_PBAX(a,b) (a)
#define arguments_BDK_CPTX_PF_MSIX_PBAX(a,b) (a),(b),-1,-1

/**
 * Register (NCB) cpt#_pf_msix_vec#_addr
 *
 * CPT PF MSI-X Vector-Table Address Registers
 * This register is the MSI-X vector table, indexed by the CPT_PF_INT_VEC_E enumeration.
 */
union bdk_cptx_pf_msix_vecx_addr
{
    uint64_t u;
    struct bdk_cptx_pf_msix_vecx_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_49_63        : 15;
        uint64_t addr                  : 47; /**< [ 48:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_1            : 1;
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 1 = This vector's CPT()_PF_MSIX_VEC()_ADDR, CPT()_PF_MSIX_VEC()_CTL, and corresponding
                                                                 bit of CPT()_PF_MSIX_PBA() are RAZ/WI and does not cause a fault when accessed
                                                                 by the nonsecure world.

                                                                 If PCCPF_CPT_VSEC_SCTL[MSIX_SEC] (for documentation, see PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is
                                                                 set, all vectors are secure and function as if [SECVEC] was set. */
#else /* Word 0 - Little Endian */
        uint64_t secvec                : 1;  /**< [  0:  0](SR/W) Secure vector.
                                                                 0 = This vector may be read or written by either secure or nonsecure states.
                                                                 1 = This vector's CPT()_PF_MSIX_VEC()_ADDR, CPT()_PF_MSIX_VEC()_CTL, and corresponding
                                                                 bit of CPT()_PF_MSIX_PBA() are RAZ/WI and does not cause a fault when accessed
                                                                 by the nonsecure world.

                                                                 If PCCPF_CPT_VSEC_SCTL[MSIX_SEC] (for documentation, see PCCPF_XXX_VSEC_SCTL[MSIX_SEC]) is
                                                                 set, all vectors are secure and function as if [SECVEC] was set. */
        uint64_t reserved_1            : 1;
        uint64_t addr                  : 47; /**< [ 48:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_49_63        : 15;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_pf_msix_vecx_addr_s cn; */
};
typedef union bdk_cptx_pf_msix_vecx_addr bdk_cptx_pf_msix_vecx_addr_t;

static inline uint64_t BDK_CPTX_PF_MSIX_VECX_ADDR(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_PF_MSIX_VECX_ADDR(unsigned long a, unsigned long b)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && ((a==0) && (b<=2)))
        return 0x872010000000ll + 0x1000000000ll * ((a) & 0x0) + 0x10ll * ((b) & 0x3);
    if (bdk_is_model(OCTEONTX_CN83XX) && ((a<=1) && (b<=3)))
        return 0x872010000000ll + 0x1000000000ll * ((a) & 0x1) + 0x10ll * ((b) & 0x3);
    __bdk_csr_fatal("CPTX_PF_MSIX_VECX_ADDR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_PF_MSIX_VECX_ADDR(a,b) bdk_cptx_pf_msix_vecx_addr_t
#define bustype_BDK_CPTX_PF_MSIX_VECX_ADDR(a,b) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_PF_MSIX_VECX_ADDR(a,b) "CPTX_PF_MSIX_VECX_ADDR"
#define device_bar_BDK_CPTX_PF_MSIX_VECX_ADDR(a,b) 0x4 /* PF_BAR4 */
#define busnum_BDK_CPTX_PF_MSIX_VECX_ADDR(a,b) (a)
#define arguments_BDK_CPTX_PF_MSIX_VECX_ADDR(a,b) (a),(b),-1,-1

/**
 * Register (NCB) cpt#_pf_msix_vec#_ctl
 *
 * CPT PF MSI-X Vector-Table Control and Data Registers
 * This register is the MSI-X vector table, indexed by the CPT_PF_INT_VEC_E enumeration.
 */
union bdk_cptx_pf_msix_vecx_ctl
{
    uint64_t u;
    struct bdk_cptx_pf_msix_vecx_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_33_63        : 31;
        uint64_t mask                  : 1;  /**< [ 32: 32](R/W) When set, no MSI-X interrupts are sent to this vector. */
        uint64_t reserved_20_31        : 12;
        uint64_t data                  : 20; /**< [ 19:  0](R/W) Data to use for MSI-X delivery of this vector. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 20; /**< [ 19:  0](R/W) Data to use for MSI-X delivery of this vector. */
        uint64_t reserved_20_31        : 12;
        uint64_t mask                  : 1;  /**< [ 32: 32](R/W) When set, no MSI-X interrupts are sent to this vector. */
        uint64_t reserved_33_63        : 31;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_pf_msix_vecx_ctl_s cn; */
};
typedef union bdk_cptx_pf_msix_vecx_ctl bdk_cptx_pf_msix_vecx_ctl_t;

static inline uint64_t BDK_CPTX_PF_MSIX_VECX_CTL(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_PF_MSIX_VECX_CTL(unsigned long a, unsigned long b)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && ((a==0) && (b<=2)))
        return 0x872010000008ll + 0x1000000000ll * ((a) & 0x0) + 0x10ll * ((b) & 0x3);
    if (bdk_is_model(OCTEONTX_CN83XX) && ((a<=1) && (b<=3)))
        return 0x872010000008ll + 0x1000000000ll * ((a) & 0x1) + 0x10ll * ((b) & 0x3);
    __bdk_csr_fatal("CPTX_PF_MSIX_VECX_CTL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_PF_MSIX_VECX_CTL(a,b) bdk_cptx_pf_msix_vecx_ctl_t
#define bustype_BDK_CPTX_PF_MSIX_VECX_CTL(a,b) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_PF_MSIX_VECX_CTL(a,b) "CPTX_PF_MSIX_VECX_CTL"
#define device_bar_BDK_CPTX_PF_MSIX_VECX_CTL(a,b) 0x4 /* PF_BAR4 */
#define busnum_BDK_CPTX_PF_MSIX_VECX_CTL(a,b) (a)
#define arguments_BDK_CPTX_PF_MSIX_VECX_CTL(a,b) (a),(b),-1,-1

/**
 * Register (NCB) cpt#_pf_q#_ctl
 *
 * CPT PF Queue Control Register
 * This register configures queues. This register should be changed only when quiescent
 * (see CPT()_VQ()_INPROG[INFLIGHT]).
 */
union bdk_cptx_pf_qx_ctl
{
    uint64_t u;
    struct bdk_cptx_pf_qx_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_60_63        : 4;
        uint64_t aura                  : 12; /**< [ 59: 48](R/W) Guest-aura for returning this queue's instruction-chunk buffers to FPA.
                                                                 Only used when [INST_FREE] is set.
                                                                 For the FPA to not discard the request, FPA_PF_MAP() must map
                                                                 [AURA] and CPT()_PF_Q()_GMCTL[GMID] as valid. */
        uint64_t reserved_45_47        : 3;
        uint64_t size                  : 13; /**< [ 44: 32](R/W) Command-buffer size, in number of 64-bit words per command buffer segment.
                                                                 Must be 8*n + 1, where n is the number of instructions per buffer segment. */
        uint64_t reserved_11_31        : 21;
        uint64_t cont_err              : 1;  /**< [ 10: 10](R/W) Continue on error.

                                                                 0 = When CPT()_VQ()_MISC_INT[SWERR], CPT()_VQ()_MISC_INT[NWRP],
                                                                 CPT()_VQ()_MISC_INT[IRDE] or CPT()_VQ()_MISC_INT[DOVF] are set by hardware
                                                                 or software via CPT()_VQ()_MISC_INT_W1S, then CPT()_VQ()_CTL[ENA] is cleared.
                                                                 Due to pipelining, additional instructions may have been processed between the
                                                                 instruction causing the error and the next instruction in the disabled queue
                                                                 (the instruction at CPT()_VQ()_SADDR).

                                                                 1 = Ignore errors and continue processing instructions. For diagnostic use only. */
        uint64_t inst_free             : 1;  /**< [  9:  9](R/W) Instruction FPA free. When set, when CPT reaches the end of an instruction
                                                                 chunk, that chunk will be freed to the FPA. */
        uint64_t inst_be               : 1;  /**< [  8:  8](R/W) Instruction big-endian control. When set, instructions, instruction next chunk
                                                                 pointers, and result structures are stored in big-endian format in memory. */
        uint64_t iqb_ldwb              : 1;  /**< [  7:  7](R/W) Instruction load don't write back.

                                                                 0 = The hardware issues NCB transient load (LDT) towards the cache, which if the
                                                                 line hits and is is dirty will cause the line to be written back before being
                                                                 replaced.

                                                                 1 = The hardware issues NCB LDWB read-and-invalidate command towards the cache
                                                                 when fetching the last word of instructions; as a result the line will not be
                                                                 written back when replaced.  This improves performance, but software must not
                                                                 read the instructions after they are posted to the hardware.

                                                                 Reads that do not consume the last word of a cache line always use LDI. */
        uint64_t reserved_4_6          : 3;
        uint64_t grp                   : 3;  /**< [  3:  1](R/W) Engine group. */
        uint64_t pri                   : 1;  /**< [  0:  0](R/W) Queue priority.
                                                                 1 = This queue has higher priority. Round-robin between higher priority queues.
                                                                 0 = This queue has lower priority. Round-robin between lower priority queues. */
#else /* Word 0 - Little Endian */
        uint64_t pri                   : 1;  /**< [  0:  0](R/W) Queue priority.
                                                                 1 = This queue has higher priority. Round-robin between higher priority queues.
                                                                 0 = This queue has lower priority. Round-robin between lower priority queues. */
        uint64_t grp                   : 3;  /**< [  3:  1](R/W) Engine group. */
        uint64_t reserved_4_6          : 3;
        uint64_t iqb_ldwb              : 1;  /**< [  7:  7](R/W) Instruction load don't write back.

                                                                 0 = The hardware issues NCB transient load (LDT) towards the cache, which if the
                                                                 line hits and is is dirty will cause the line to be written back before being
                                                                 replaced.

                                                                 1 = The hardware issues NCB LDWB read-and-invalidate command towards the cache
                                                                 when fetching the last word of instructions; as a result the line will not be
                                                                 written back when replaced.  This improves performance, but software must not
                                                                 read the instructions after they are posted to the hardware.

                                                                 Reads that do not consume the last word of a cache line always use LDI. */
        uint64_t inst_be               : 1;  /**< [  8:  8](R/W) Instruction big-endian control. When set, instructions, instruction next chunk
                                                                 pointers, and result structures are stored in big-endian format in memory. */
        uint64_t inst_free             : 1;  /**< [  9:  9](R/W) Instruction FPA free. When set, when CPT reaches the end of an instruction
                                                                 chunk, that chunk will be freed to the FPA. */
        uint64_t cont_err              : 1;  /**< [ 10: 10](R/W) Continue on error.

                                                                 0 = When CPT()_VQ()_MISC_INT[SWERR], CPT()_VQ()_MISC_INT[NWRP],
                                                                 CPT()_VQ()_MISC_INT[IRDE] or CPT()_VQ()_MISC_INT[DOVF] are set by hardware
                                                                 or software via CPT()_VQ()_MISC_INT_W1S, then CPT()_VQ()_CTL[ENA] is cleared.
                                                                 Due to pipelining, additional instructions may have been processed between the
                                                                 instruction causing the error and the next instruction in the disabled queue
                                                                 (the instruction at CPT()_VQ()_SADDR).

                                                                 1 = Ignore errors and continue processing instructions. For diagnostic use only. */
        uint64_t reserved_11_31        : 21;
        uint64_t size                  : 13; /**< [ 44: 32](R/W) Command-buffer size, in number of 64-bit words per command buffer segment.
                                                                 Must be 8*n + 1, where n is the number of instructions per buffer segment. */
        uint64_t reserved_45_47        : 3;
        uint64_t aura                  : 12; /**< [ 59: 48](R/W) Guest-aura for returning this queue's instruction-chunk buffers to FPA.
                                                                 Only used when [INST_FREE] is set.
                                                                 For the FPA to not discard the request, FPA_PF_MAP() must map
                                                                 [AURA] and CPT()_PF_Q()_GMCTL[GMID] as valid. */
        uint64_t reserved_60_63        : 4;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_pf_qx_ctl_s cn8; */
    /* struct bdk_cptx_pf_qx_ctl_s cn81xx; */
    struct bdk_cptx_pf_qx_ctl_cn83xx
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_60_63        : 4;
        uint64_t aura                  : 12; /**< [ 59: 48](R/W) Guest-aura for returning this queue's instruction-chunk buffers to FPA.
                                                                 Only used when [INST_FREE] is set.
                                                                 For the FPA to not discard the request, FPA_PF_MAP() must map
                                                                 [AURA] and CPT()_PF_Q()_GMCTL[GMID] as valid. */
        uint64_t reserved_45_47        : 3;
        uint64_t size                  : 13; /**< [ 44: 32](R/W) Command-buffer size, in number of 64-bit words per command buffer segment.
                                                                 Must be 8*n + 1, where n is the number of instructions per buffer segment. */
        uint64_t reserved_11_31        : 21;
        uint64_t cont_err              : 1;  /**< [ 10: 10](R/W) Continue on error.

                                                                 0 = When CPT()_VQ()_MISC_INT[HWERR], CPT()_VQ()_MISC_INT[SWERR],
                                                                 CPT()_VQ()_MISC_INT[NWRP], CPT()_VQ()_MISC_INT[IRDE],
                                                                 CPT()_VQ()_MISC_INT[FAULT] or
                                                                 CPT()_VQ()_MISC_INT[DOVF] are set by hardware or software via
                                                                 CPT()_VQ()_MISC_INT_W1S, then CPT()_VQ()_CTL[ENA] is cleared.  Due to
                                                                 pipelining, additional instructions may have been processed between the
                                                                 instruction causing the error and the next instruction in the disabled queue
                                                                 (the instruction at CPT()_VQ()_SADDR).

                                                                 1 = Ignore errors and continue processing instructions. For diagnostic use only. */
        uint64_t inst_free             : 1;  /**< [  9:  9](R/W) Instruction FPA free. When set, when CPT reaches the end of an instruction
                                                                 chunk, that chunk will be freed to the FPA. */
        uint64_t inst_be               : 1;  /**< [  8:  8](R/W) Instruction big-endian control. When set, instructions, instruction next chunk
                                                                 pointers, and result structures are stored in big-endian format in memory. */
        uint64_t iqb_ldwb              : 1;  /**< [  7:  7](R/W) Instruction load don't write back.

                                                                 0 = The hardware issues NCB transient load (LDT) towards the cache, which if the
                                                                 line hits and is is dirty will cause the line to be written back before being
                                                                 replaced.

                                                                 1 = The hardware issues NCB LDWB read-and-invalidate command towards the cache
                                                                 when fetching the last word of instructions; as a result the line will not be
                                                                 written back when replaced.  This improves performance, but software must not
                                                                 read the instructions after they are posted to the hardware.

                                                                 Reads that do not consume the last word of a cache line always use LDI. */
        uint64_t reserved_4_6          : 3;
        uint64_t grp                   : 3;  /**< [  3:  1](R/W) Engine group. */
        uint64_t pri                   : 1;  /**< [  0:  0](R/W) Queue priority.
                                                                 1 = This queue has higher priority. Round-robin between higher priority queues.
                                                                 0 = This queue has lower priority. Round-robin between lower priority queues. */
#else /* Word 0 - Little Endian */
        uint64_t pri                   : 1;  /**< [  0:  0](R/W) Queue priority.
                                                                 1 = This queue has higher priority. Round-robin between higher priority queues.
                                                                 0 = This queue has lower priority. Round-robin between lower priority queues. */
        uint64_t grp                   : 3;  /**< [  3:  1](R/W) Engine group. */
        uint64_t reserved_4_6          : 3;
        uint64_t iqb_ldwb              : 1;  /**< [  7:  7](R/W) Instruction load don't write back.

                                                                 0 = The hardware issues NCB transient load (LDT) towards the cache, which if the
                                                                 line hits and is is dirty will cause the line to be written back before being
                                                                 replaced.

                                                                 1 = The hardware issues NCB LDWB read-and-invalidate command towards the cache
                                                                 when fetching the last word of instructions; as a result the line will not be
                                                                 written back when replaced.  This improves performance, but software must not
                                                                 read the instructions after they are posted to the hardware.

                                                                 Reads that do not consume the last word of a cache line always use LDI. */
        uint64_t inst_be               : 1;  /**< [  8:  8](R/W) Instruction big-endian control. When set, instructions, instruction next chunk
                                                                 pointers, and result structures are stored in big-endian format in memory. */
        uint64_t inst_free             : 1;  /**< [  9:  9](R/W) Instruction FPA free. When set, when CPT reaches the end of an instruction
                                                                 chunk, that chunk will be freed to the FPA. */
        uint64_t cont_err              : 1;  /**< [ 10: 10](R/W) Continue on error.

                                                                 0 = When CPT()_VQ()_MISC_INT[HWERR], CPT()_VQ()_MISC_INT[SWERR],
                                                                 CPT()_VQ()_MISC_INT[NWRP], CPT()_VQ()_MISC_INT[IRDE],
                                                                 CPT()_VQ()_MISC_INT[FAULT] or
                                                                 CPT()_VQ()_MISC_INT[DOVF] are set by hardware or software via
                                                                 CPT()_VQ()_MISC_INT_W1S, then CPT()_VQ()_CTL[ENA] is cleared.  Due to
                                                                 pipelining, additional instructions may have been processed between the
                                                                 instruction causing the error and the next instruction in the disabled queue
                                                                 (the instruction at CPT()_VQ()_SADDR).

                                                                 1 = Ignore errors and continue processing instructions. For diagnostic use only. */
        uint64_t reserved_11_31        : 21;
        uint64_t size                  : 13; /**< [ 44: 32](R/W) Command-buffer size, in number of 64-bit words per command buffer segment.
                                                                 Must be 8*n + 1, where n is the number of instructions per buffer segment. */
        uint64_t reserved_45_47        : 3;
        uint64_t aura                  : 12; /**< [ 59: 48](R/W) Guest-aura for returning this queue's instruction-chunk buffers to FPA.
                                                                 Only used when [INST_FREE] is set.
                                                                 For the FPA to not discard the request, FPA_PF_MAP() must map
                                                                 [AURA] and CPT()_PF_Q()_GMCTL[GMID] as valid. */
        uint64_t reserved_60_63        : 4;
#endif /* Word 0 - End */
    } cn83xx;
};
typedef union bdk_cptx_pf_qx_ctl bdk_cptx_pf_qx_ctl_t;

static inline uint64_t BDK_CPTX_PF_QX_CTL(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_PF_QX_CTL(unsigned long a, unsigned long b)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && ((a==0) && (b<=15)))
        return 0x872008000000ll + 0x1000000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0xf);
    if (bdk_is_model(OCTEONTX_CN83XX) && ((a<=1) && (b<=63)))
        return 0x872008000000ll + 0x1000000000ll * ((a) & 0x1) + 0x100000ll * ((b) & 0x3f);
    __bdk_csr_fatal("CPTX_PF_QX_CTL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_PF_QX_CTL(a,b) bdk_cptx_pf_qx_ctl_t
#define bustype_BDK_CPTX_PF_QX_CTL(a,b) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_PF_QX_CTL(a,b) "CPTX_PF_QX_CTL"
#define device_bar_BDK_CPTX_PF_QX_CTL(a,b) 0x0 /* PF_BAR0 */
#define busnum_BDK_CPTX_PF_QX_CTL(a,b) (a)
#define arguments_BDK_CPTX_PF_QX_CTL(a,b) (a),(b),-1,-1

/**
 * Register (NCB) cpt#_pf_q#_ctl2
 *
 * CPT Queue Control 2 Register
 * This register configures queues. This register should be changed only when quiescent
 * (see CPT()_VQ()_INPROG[INFLIGHT]).
 */
union bdk_cptx_pf_qx_ctl2
{
    uint64_t u;
    struct bdk_cptx_pf_qx_ctl2_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_2_63         : 62;
        uint64_t exe_ldwb              : 1;  /**< [  1:  1](R/W) Execution engine load-don't-write-back.

                                                                 0 = An execution engine request to LDWB will be converted to NCB transient
                                                                 loads (LDT) towards the cache, which if the line hits and is is dirty will cause
                                                                 the line to be written back before being replaced.

                                                                 1 = An execution engine may request a NCB LDWB read-and-invalidate command
                                                                 towards the cache; as a result the line will not be written back when replaced.
                                                                 This improves performance, but software must not read the instructions after
                                                                 they are posted to the hardware. */
        uint64_t exe_no_swap           : 1;  /**< [  0:  0](R/W) Execution units no byte swap. See the HRM endian section.
                                                                 0 = Execution unit read/writes have a byte-swap applied when accessing NCB.
                                                                 1 = Execution unit read/writes do not byte-swap. */
#else /* Word 0 - Little Endian */
        uint64_t exe_no_swap           : 1;  /**< [  0:  0](R/W) Execution units no byte swap. See the HRM endian section.
                                                                 0 = Execution unit read/writes have a byte-swap applied when accessing NCB.
                                                                 1 = Execution unit read/writes do not byte-swap. */
        uint64_t exe_ldwb              : 1;  /**< [  1:  1](R/W) Execution engine load-don't-write-back.

                                                                 0 = An execution engine request to LDWB will be converted to NCB transient
                                                                 loads (LDT) towards the cache, which if the line hits and is is dirty will cause
                                                                 the line to be written back before being replaced.

                                                                 1 = An execution engine may request a NCB LDWB read-and-invalidate command
                                                                 towards the cache; as a result the line will not be written back when replaced.
                                                                 This improves performance, but software must not read the instructions after
                                                                 they are posted to the hardware. */
        uint64_t reserved_2_63         : 62;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_pf_qx_ctl2_s cn; */
};
typedef union bdk_cptx_pf_qx_ctl2 bdk_cptx_pf_qx_ctl2_t;

static inline uint64_t BDK_CPTX_PF_QX_CTL2(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_PF_QX_CTL2(unsigned long a, unsigned long b)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && ((a==0) && (b<=15)))
        return 0x872008000100ll + 0x1000000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0xf);
    if (bdk_is_model(OCTEONTX_CN83XX) && ((a<=1) && (b<=63)))
        return 0x872008000100ll + 0x1000000000ll * ((a) & 0x1) + 0x100000ll * ((b) & 0x3f);
    __bdk_csr_fatal("CPTX_PF_QX_CTL2", 2, a, b, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_PF_QX_CTL2(a,b) bdk_cptx_pf_qx_ctl2_t
#define bustype_BDK_CPTX_PF_QX_CTL2(a,b) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_PF_QX_CTL2(a,b) "CPTX_PF_QX_CTL2"
#define device_bar_BDK_CPTX_PF_QX_CTL2(a,b) 0x0 /* PF_BAR0 */
#define busnum_BDK_CPTX_PF_QX_CTL2(a,b) (a)
#define arguments_BDK_CPTX_PF_QX_CTL2(a,b) (a),(b),-1,-1

/**
 * Register (NCB) cpt#_pf_q#_gmctl
 *
 * CPT PF Queue Guest Machine Control Register
 * This register configures queues. This register should be changed only when quiescent
 * (see CPT()_VQ()_INPROG[INFLIGHT]).
 */
union bdk_cptx_pf_qx_gmctl
{
    uint64_t u;
    struct bdk_cptx_pf_qx_gmctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t strm                  : 8;  /**< [ 23: 16](R/W) Low 8 bits of the SMMU stream identifier to use when issuing requests.

                                                                 Stream 0x0 corresponds to the PF, and VFs start at 0x1.

                                                                 Reset such that VF0/index 0 is 0x1, VF1/index 1 is 0x2, etc. */
        uint64_t gmid                  : 16; /**< [ 15:  0](RO) Reserved.
                                                                 Internal:
                                                                 Guest machine identifier. The GMID to send to FPA for all
                                                                 buffer free, or to SSO for all submit work operations initiated by this queue.
                                                                 Must be nonzero or FPA/SSO will drop requests; see FPA_PF_MAP() and SSO_PF_MAP(). */
#else /* Word 0 - Little Endian */
        uint64_t gmid                  : 16; /**< [ 15:  0](RO) Reserved.
                                                                 Internal:
                                                                 Guest machine identifier. The GMID to send to FPA for all
                                                                 buffer free, or to SSO for all submit work operations initiated by this queue.
                                                                 Must be nonzero or FPA/SSO will drop requests; see FPA_PF_MAP() and SSO_PF_MAP(). */
        uint64_t strm                  : 8;  /**< [ 23: 16](R/W) Low 8 bits of the SMMU stream identifier to use when issuing requests.

                                                                 Stream 0x0 corresponds to the PF, and VFs start at 0x1.

                                                                 Reset such that VF0/index 0 is 0x1, VF1/index 1 is 0x2, etc. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_pf_qx_gmctl_s cn8; */
    /* struct bdk_cptx_pf_qx_gmctl_s cn81xx; */
    struct bdk_cptx_pf_qx_gmctl_cn83xx
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_24_63        : 40;
        uint64_t strm                  : 8;  /**< [ 23: 16](R/W) Low 8 bits of the SMMU stream identifier to use when issuing requests.

                                                                 Stream 0x0 corresponds to the PF, and VFs start at 0x1.

                                                                 Reset such that VF0/index 0 is 0x1, VF1/index 1 is 0x2, etc.

                                                                 Maximum legal value is 64. */
        uint64_t gmid                  : 16; /**< [ 15:  0](R/W) Guest machine identifier. The GMID to send to FPA for all
                                                                 buffer free, or to SSO for all submit work operations initiated by this queue.
                                                                 Must be nonzero or FPA/SSO will drop requests; see FPA_PF_MAP() and SSO_PF_MAP(). */
#else /* Word 0 - Little Endian */
        uint64_t gmid                  : 16; /**< [ 15:  0](R/W) Guest machine identifier. The GMID to send to FPA for all
                                                                 buffer free, or to SSO for all submit work operations initiated by this queue.
                                                                 Must be nonzero or FPA/SSO will drop requests; see FPA_PF_MAP() and SSO_PF_MAP(). */
        uint64_t strm                  : 8;  /**< [ 23: 16](R/W) Low 8 bits of the SMMU stream identifier to use when issuing requests.

                                                                 Stream 0x0 corresponds to the PF, and VFs start at 0x1.

                                                                 Reset such that VF0/index 0 is 0x1, VF1/index 1 is 0x2, etc.

                                                                 Maximum legal value is 64. */
        uint64_t reserved_24_63        : 40;
#endif /* Word 0 - End */
    } cn83xx;
};
typedef union bdk_cptx_pf_qx_gmctl bdk_cptx_pf_qx_gmctl_t;

static inline uint64_t BDK_CPTX_PF_QX_GMCTL(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_PF_QX_GMCTL(unsigned long a, unsigned long b)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && ((a==0) && (b<=15)))
        return 0x872008000020ll + 0x1000000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0xf);
    if (bdk_is_model(OCTEONTX_CN83XX) && ((a<=1) && (b<=63)))
        return 0x872008000020ll + 0x1000000000ll * ((a) & 0x1) + 0x100000ll * ((b) & 0x3f);
    __bdk_csr_fatal("CPTX_PF_QX_GMCTL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_PF_QX_GMCTL(a,b) bdk_cptx_pf_qx_gmctl_t
#define bustype_BDK_CPTX_PF_QX_GMCTL(a,b) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_PF_QX_GMCTL(a,b) "CPTX_PF_QX_GMCTL"
#define device_bar_BDK_CPTX_PF_QX_GMCTL(a,b) 0x0 /* PF_BAR0 */
#define busnum_BDK_CPTX_PF_QX_GMCTL(a,b) (a)
#define arguments_BDK_CPTX_PF_QX_GMCTL(a,b) (a),(b),-1,-1

/**
 * Register (NCB) cpt#_pf_rd_latency_pc
 *
 * CPT PF Read Latency Counter Register
 */
union bdk_cptx_pf_rd_latency_pc
{
    uint64_t u;
    struct bdk_cptx_pf_rd_latency_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Number of cycles waiting for L2C read returns. Incremented every
                                                                 coprocessor-clock by the number of transactions outstanding in that cycle. This
                                                                 may be divided by CPT()_PF_RD_REQ_PC to determine the average read latency. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Number of cycles waiting for L2C read returns. Incremented every
                                                                 coprocessor-clock by the number of transactions outstanding in that cycle. This
                                                                 may be divided by CPT()_PF_RD_REQ_PC to determine the average read latency. */
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_pf_rd_latency_pc_s cn; */
};
typedef union bdk_cptx_pf_rd_latency_pc bdk_cptx_pf_rd_latency_pc_t;

static inline uint64_t BDK_CPTX_PF_RD_LATENCY_PC(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_PF_RD_LATENCY_PC(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && (a==0))
        return 0x872000010060ll + 0x1000000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN83XX) && (a<=1))
        return 0x872000010060ll + 0x1000000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_PF_RD_LATENCY_PC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_PF_RD_LATENCY_PC(a) bdk_cptx_pf_rd_latency_pc_t
#define bustype_BDK_CPTX_PF_RD_LATENCY_PC(a) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_PF_RD_LATENCY_PC(a) "CPTX_PF_RD_LATENCY_PC"
#define device_bar_BDK_CPTX_PF_RD_LATENCY_PC(a) 0x0 /* PF_BAR0 */
#define busnum_BDK_CPTX_PF_RD_LATENCY_PC(a) (a)
#define arguments_BDK_CPTX_PF_RD_LATENCY_PC(a) (a),-1,-1,-1

/**
 * Register (NCB) cpt#_pf_rd_req_pc
 *
 * CPT PF Read Request Performance Counter Register
 */
union bdk_cptx_pf_rd_req_pc
{
    uint64_t u;
    struct bdk_cptx_pf_rd_req_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Number of L2C read requests. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Number of L2C read requests. */
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_pf_rd_req_pc_s cn; */
};
typedef union bdk_cptx_pf_rd_req_pc bdk_cptx_pf_rd_req_pc_t;

static inline uint64_t BDK_CPTX_PF_RD_REQ_PC(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_PF_RD_REQ_PC(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && (a==0))
        return 0x872000010040ll + 0x1000000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN83XX) && (a<=1))
        return 0x872000010040ll + 0x1000000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_PF_RD_REQ_PC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_PF_RD_REQ_PC(a) bdk_cptx_pf_rd_req_pc_t
#define bustype_BDK_CPTX_PF_RD_REQ_PC(a) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_PF_RD_REQ_PC(a) "CPTX_PF_RD_REQ_PC"
#define device_bar_BDK_CPTX_PF_RD_REQ_PC(a) 0x0 /* PF_BAR0 */
#define busnum_BDK_CPTX_PF_RD_REQ_PC(a) (a)
#define arguments_BDK_CPTX_PF_RD_REQ_PC(a) (a),-1,-1,-1

/**
 * Register (NCB) cpt#_pf_rd_uc_pc
 *
 * CPT PF Read Microcode Performance Counter Register
 */
union bdk_cptx_pf_rd_uc_pc
{
    uint64_t u;
    struct bdk_cptx_pf_rd_uc_pc_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Number of L2C read requests caused by are microcode fills. Microcode fills also
                                                                 increment CPT()_PF_RD_REQ_PC and CPT()_PF_RD_LATENCY_PC. */
#else /* Word 0 - Little Endian */
        uint64_t count                 : 64; /**< [ 63:  0](R/W/H) Number of L2C read requests caused by are microcode fills. Microcode fills also
                                                                 increment CPT()_PF_RD_REQ_PC and CPT()_PF_RD_LATENCY_PC. */
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_pf_rd_uc_pc_s cn; */
};
typedef union bdk_cptx_pf_rd_uc_pc bdk_cptx_pf_rd_uc_pc_t;

static inline uint64_t BDK_CPTX_PF_RD_UC_PC(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_PF_RD_UC_PC(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && (a==0))
        return 0x872000010080ll + 0x1000000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN83XX) && (a<=1))
        return 0x872000010080ll + 0x1000000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_PF_RD_UC_PC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_PF_RD_UC_PC(a) bdk_cptx_pf_rd_uc_pc_t
#define bustype_BDK_CPTX_PF_RD_UC_PC(a) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_PF_RD_UC_PC(a) "CPTX_PF_RD_UC_PC"
#define device_bar_BDK_CPTX_PF_RD_UC_PC(a) 0x0 /* PF_BAR0 */
#define busnum_BDK_CPTX_PF_RD_UC_PC(a) (a)
#define arguments_BDK_CPTX_PF_RD_UC_PC(a) (a),-1,-1,-1

/**
 * Register (NCB) cpt#_pf_reset
 *
 * CPT PF Reset Register
 * This register controls clock and reset.
 */
union bdk_cptx_pf_reset
{
    uint64_t u;
    struct bdk_cptx_pf_reset_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t reset                 : 1;  /**< [  0:  0](R/W1) Reset one-shot pulse to reset CPT subsystem. */
#else /* Word 0 - Little Endian */
        uint64_t reset                 : 1;  /**< [  0:  0](R/W1) Reset one-shot pulse to reset CPT subsystem. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_pf_reset_s cn; */
};
typedef union bdk_cptx_pf_reset bdk_cptx_pf_reset_t;

static inline uint64_t BDK_CPTX_PF_RESET(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_PF_RESET(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && (a==0))
        return 0x872000000100ll + 0x1000000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN83XX) && (a<=1))
        return 0x872000000100ll + 0x1000000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_PF_RESET", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_PF_RESET(a) bdk_cptx_pf_reset_t
#define bustype_BDK_CPTX_PF_RESET(a) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_PF_RESET(a) "CPTX_PF_RESET"
#define device_bar_BDK_CPTX_PF_RESET(a) 0x0 /* PF_BAR0 */
#define busnum_BDK_CPTX_PF_RESET(a) (a)
#define arguments_BDK_CPTX_PF_RESET(a) (a),-1,-1,-1

/**
 * Register (NCB) cpt#_pf_ucerr_ena_w1c
 *
 * CPT PF UC Error Interrupt Enable Clear Registers
 * This register clears interrupt enable bits.
 */
union bdk_cptx_pf_ucerr_ena_w1c
{
    uint64_t u;
    struct bdk_cptx_pf_ucerr_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ucerr                 : 64; /**< [ 63:  0](R/W1C/H) Reads or clears enable for CPT(0..1)_PF_UCERR_INT[UCERR]. */
#else /* Word 0 - Little Endian */
        uint64_t ucerr                 : 64; /**< [ 63:  0](R/W1C/H) Reads or clears enable for CPT(0..1)_PF_UCERR_INT[UCERR]. */
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_pf_ucerr_ena_w1c_s cn; */
};
typedef union bdk_cptx_pf_ucerr_ena_w1c bdk_cptx_pf_ucerr_ena_w1c_t;

static inline uint64_t BDK_CPTX_PF_UCERR_ENA_W1C(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_PF_UCERR_ENA_W1C(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN83XX) && (a<=1))
        return 0x8720000005c0ll + 0x1000000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_PF_UCERR_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_PF_UCERR_ENA_W1C(a) bdk_cptx_pf_ucerr_ena_w1c_t
#define bustype_BDK_CPTX_PF_UCERR_ENA_W1C(a) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_PF_UCERR_ENA_W1C(a) "CPTX_PF_UCERR_ENA_W1C"
#define device_bar_BDK_CPTX_PF_UCERR_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_BDK_CPTX_PF_UCERR_ENA_W1C(a) (a)
#define arguments_BDK_CPTX_PF_UCERR_ENA_W1C(a) (a),-1,-1,-1

/**
 * Register (NCB) cpt#_pf_ucerr_ena_w1s
 *
 * CPT PF UC Error Interrupt Enable Set Registers
 * This register sets interrupt enable bits.
 */
union bdk_cptx_pf_ucerr_ena_w1s
{
    uint64_t u;
    struct bdk_cptx_pf_ucerr_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ucerr                 : 64; /**< [ 63:  0](R/W1S/H) Reads or sets enable for CPT(0..1)_PF_UCERR_INT[UCERR]. */
#else /* Word 0 - Little Endian */
        uint64_t ucerr                 : 64; /**< [ 63:  0](R/W1S/H) Reads or sets enable for CPT(0..1)_PF_UCERR_INT[UCERR]. */
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_pf_ucerr_ena_w1s_s cn; */
};
typedef union bdk_cptx_pf_ucerr_ena_w1s bdk_cptx_pf_ucerr_ena_w1s_t;

static inline uint64_t BDK_CPTX_PF_UCERR_ENA_W1S(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_PF_UCERR_ENA_W1S(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN83XX) && (a<=1))
        return 0x8720000005e0ll + 0x1000000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_PF_UCERR_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_PF_UCERR_ENA_W1S(a) bdk_cptx_pf_ucerr_ena_w1s_t
#define bustype_BDK_CPTX_PF_UCERR_ENA_W1S(a) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_PF_UCERR_ENA_W1S(a) "CPTX_PF_UCERR_ENA_W1S"
#define device_bar_BDK_CPTX_PF_UCERR_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_BDK_CPTX_PF_UCERR_ENA_W1S(a) (a)
#define arguments_BDK_CPTX_PF_UCERR_ENA_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) cpt#_pf_ucerr_int
 *
 * CPT PF UC Error Interrupt Registers
 */
union bdk_cptx_pf_ucerr_int
{
    uint64_t u;
    struct bdk_cptx_pf_ucerr_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ucerr                 : 64; /**< [ 63:  0](R/W1C/H) One interrupt bit per engine. Each bit is set
                                                                  when the associated engine receives an error
                                                                  indication (fault) during a microcode fetch.
                                                                 If CPT(0..1)_PF_ACTIVE_VF(ENG) indicates that
                                                                  the engine was active for a queue (non-zero),
                                                                  software must reset that queue. */
#else /* Word 0 - Little Endian */
        uint64_t ucerr                 : 64; /**< [ 63:  0](R/W1C/H) One interrupt bit per engine. Each bit is set
                                                                  when the associated engine receives an error
                                                                  indication (fault) during a microcode fetch.
                                                                 If CPT(0..1)_PF_ACTIVE_VF(ENG) indicates that
                                                                  the engine was active for a queue (non-zero),
                                                                  software must reset that queue. */
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_pf_ucerr_int_s cn; */
};
typedef union bdk_cptx_pf_ucerr_int bdk_cptx_pf_ucerr_int_t;

static inline uint64_t BDK_CPTX_PF_UCERR_INT(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_PF_UCERR_INT(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN83XX) && (a<=1))
        return 0x872000000580ll + 0x1000000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_PF_UCERR_INT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_PF_UCERR_INT(a) bdk_cptx_pf_ucerr_int_t
#define bustype_BDK_CPTX_PF_UCERR_INT(a) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_PF_UCERR_INT(a) "CPTX_PF_UCERR_INT"
#define device_bar_BDK_CPTX_PF_UCERR_INT(a) 0x0 /* PF_BAR0 */
#define busnum_BDK_CPTX_PF_UCERR_INT(a) (a)
#define arguments_BDK_CPTX_PF_UCERR_INT(a) (a),-1,-1,-1

/**
 * Register (NCB) cpt#_pf_ucerr_int_w1s
 *
 * CPT PF UC Error Interrupt Set Registers
 * This register sets interrupt bits.
 */
union bdk_cptx_pf_ucerr_int_w1s
{
    uint64_t u;
    struct bdk_cptx_pf_ucerr_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ucerr                 : 64; /**< [ 63:  0](R/W1S/H) Reads or sets CPT(0..1)_PF_UCERR_INT[UCERR]. */
#else /* Word 0 - Little Endian */
        uint64_t ucerr                 : 64; /**< [ 63:  0](R/W1S/H) Reads or sets CPT(0..1)_PF_UCERR_INT[UCERR]. */
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_pf_ucerr_int_w1s_s cn; */
};
typedef union bdk_cptx_pf_ucerr_int_w1s bdk_cptx_pf_ucerr_int_w1s_t;

static inline uint64_t BDK_CPTX_PF_UCERR_INT_W1S(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_PF_UCERR_INT_W1S(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN83XX) && (a<=1))
        return 0x8720000005a0ll + 0x1000000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_PF_UCERR_INT_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_PF_UCERR_INT_W1S(a) bdk_cptx_pf_ucerr_int_w1s_t
#define bustype_BDK_CPTX_PF_UCERR_INT_W1S(a) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_PF_UCERR_INT_W1S(a) "CPTX_PF_UCERR_INT_W1S"
#define device_bar_BDK_CPTX_PF_UCERR_INT_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_BDK_CPTX_PF_UCERR_INT_W1S(a) (a)
#define arguments_BDK_CPTX_PF_UCERR_INT_W1S(a) (a),-1,-1,-1

/**
 * Register (NCB) cpt#_pf_vf#_mbox#
 *
 * CPT PF/VF Mailbox Registers
 */
union bdk_cptx_pf_vfx_mboxx
{
    uint64_t u;
    struct bdk_cptx_pf_vfx_mboxx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W/H) Mailbox data. These PF registers access the 16-byte-per-VF VF/PF mailbox
                                                                 RAM. Each corresponding VF may access the same storage using
                                                                 CPT()_VF()_PF_MBOX(). MBOX(0) is typically used for PF to VF signaling, MBOX(1)
                                                                 for VF to PF. Writing CPT()_PF_VF()_MBOX(0) (but not
                                                                 CPT()_VF()_PF_MBOX(0)) will set the corresponding
                                                                 CPT()_VQ()_MISC_INT[MBOX] which if appropriately enabled will send an interrupt
                                                                 to the VF. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W/H) Mailbox data. These PF registers access the 16-byte-per-VF VF/PF mailbox
                                                                 RAM. Each corresponding VF may access the same storage using
                                                                 CPT()_VF()_PF_MBOX(). MBOX(0) is typically used for PF to VF signaling, MBOX(1)
                                                                 for VF to PF. Writing CPT()_PF_VF()_MBOX(0) (but not
                                                                 CPT()_VF()_PF_MBOX(0)) will set the corresponding
                                                                 CPT()_VQ()_MISC_INT[MBOX] which if appropriately enabled will send an interrupt
                                                                 to the VF. */
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_pf_vfx_mboxx_s cn; */
};
typedef union bdk_cptx_pf_vfx_mboxx bdk_cptx_pf_vfx_mboxx_t;

static inline uint64_t BDK_CPTX_PF_VFX_MBOXX(unsigned long a, unsigned long b, unsigned long c) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_PF_VFX_MBOXX(unsigned long a, unsigned long b, unsigned long c)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && ((a==0) && (b<=15) && (c<=1)))
        return 0x872008001000ll + 0x1000000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0xf) + 0x100ll * ((c) & 0x1);
    if (bdk_is_model(OCTEONTX_CN83XX) && ((a<=1) && (b<=63) && (c<=1)))
        return 0x872008001000ll + 0x1000000000ll * ((a) & 0x1) + 0x100000ll * ((b) & 0x3f) + 0x100ll * ((c) & 0x1);
    __bdk_csr_fatal("CPTX_PF_VFX_MBOXX", 3, a, b, c, 0, 0, 0);
}

#define typedef_BDK_CPTX_PF_VFX_MBOXX(a,b,c) bdk_cptx_pf_vfx_mboxx_t
#define bustype_BDK_CPTX_PF_VFX_MBOXX(a,b,c) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_PF_VFX_MBOXX(a,b,c) "CPTX_PF_VFX_MBOXX"
#define device_bar_BDK_CPTX_PF_VFX_MBOXX(a,b,c) 0x0 /* PF_BAR0 */
#define busnum_BDK_CPTX_PF_VFX_MBOXX(a,b,c) (a)
#define arguments_BDK_CPTX_PF_VFX_MBOXX(a,b,c) (a),(b),(c),-1

/**
 * Register (RVU_PF_BAR0) cpt#_priv_af_int_cfg
 *
 * CPT Privileged AF Interrupt Configuration Registers
 */
union bdk_cptx_priv_af_int_cfg
{
    uint64_t u;
    struct bdk_cptx_priv_af_int_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_20_63        : 44;
        uint64_t msix_size             : 8;  /**< [ 19: 12](RO) Number of interrupt vectors enumerated by CPT_AF_INT_VEC_E. */
        uint64_t reserved_11           : 1;
        uint64_t msix_offset           : 11; /**< [ 10:  0](R/W) MSI-X offset. Offset of AF interrupt vectors enumerated by
                                                                 CPT_AF_INT_VEC_E in RVU PF(0)'s MSI-X table. This offset is added to each
                                                                 enumerated value to obtain the corresponding MSI-X vector index. The
                                                                 highest enumerated value plus [MSIX_OFFSET] must be less than or equal to
                                                                 RVU_PRIV_PF(0)_MSIX_CFG[PF_MSIXT_SIZEM1]. */
#else /* Word 0 - Little Endian */
        uint64_t msix_offset           : 11; /**< [ 10:  0](R/W) MSI-X offset. Offset of AF interrupt vectors enumerated by
                                                                 CPT_AF_INT_VEC_E in RVU PF(0)'s MSI-X table. This offset is added to each
                                                                 enumerated value to obtain the corresponding MSI-X vector index. The
                                                                 highest enumerated value plus [MSIX_OFFSET] must be less than or equal to
                                                                 RVU_PRIV_PF(0)_MSIX_CFG[PF_MSIXT_SIZEM1]. */
        uint64_t reserved_11           : 1;
        uint64_t msix_size             : 8;  /**< [ 19: 12](RO) Number of interrupt vectors enumerated by CPT_AF_INT_VEC_E. */
        uint64_t reserved_20_63        : 44;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_priv_af_int_cfg_s cn; */
};
typedef union bdk_cptx_priv_af_int_cfg bdk_cptx_priv_af_int_cfg_t;

static inline uint64_t BDK_CPTX_PRIV_AF_INT_CFG(unsigned long a) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_PRIV_AF_INT_CFG(unsigned long a)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && (a==0))
        return 0x8400a0042000ll + 0x10000000ll * ((a) & 0x0);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && (a<=1))
        return 0x8400a0042000ll + 0x10000000ll * ((a) & 0x1);
    if (bdk_is_model(OCTEONTX_CN98XX) && (a<=1))
        return 0x8400a0042000ll + 0x10000000ll * ((a) & 0x1);
    __bdk_csr_fatal("CPTX_PRIV_AF_INT_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_PRIV_AF_INT_CFG(a) bdk_cptx_priv_af_int_cfg_t
#define bustype_BDK_CPTX_PRIV_AF_INT_CFG(a) BDK_CSR_TYPE_RVU_PF_BAR0
#define basename_BDK_CPTX_PRIV_AF_INT_CFG(a) "CPTX_PRIV_AF_INT_CFG"
#define device_bar_BDK_CPTX_PRIV_AF_INT_CFG(a) 0x0 /* RVU_BAR0 */
#define busnum_BDK_CPTX_PRIV_AF_INT_CFG(a) (a)
#define arguments_BDK_CPTX_PRIV_AF_INT_CFG(a) (a),-1,-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_priv_lf#_cfg
 *
 * CPT Privileged LF Configuration Registers
 */
union bdk_cptx_priv_lfx_cfg
{
    uint64_t u;
    struct bdk_cptx_priv_lfx_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t ena                   : 1;  /**< [ 63: 63](R/W) Enable. When set, the LF is enabled and provisioned to the VF/PF slot
                                                                 selected by [PF_FUNC] and [SLOT]. When clear, the LF is not provisioned.

                                                                 LF to slot mapping must be 1-to-1. Thus, each enabled LF must be provisioned
                                                                 to a unique {[PF_FUNC], [SLOT]} combination. */
        uint64_t reserved_24_62        : 39;
        uint64_t pf_func               : 16; /**< [ 23:  8](R/W) RVU VF/PF to which the LF is provisioned. Format defined by RVU_PF_FUNC_S.
                                                                 Interrupts from the LF are delivered to the selected PF/VF. */
        uint64_t slot                  : 8;  /**< [  7:  0](R/W) Slot within the VF/PF selected by [PF_FUNC] to which the LF is
                                                                 provisioned. */
#else /* Word 0 - Little Endian */
        uint64_t slot                  : 8;  /**< [  7:  0](R/W) Slot within the VF/PF selected by [PF_FUNC] to which the LF is
                                                                 provisioned. */
        uint64_t pf_func               : 16; /**< [ 23:  8](R/W) RVU VF/PF to which the LF is provisioned. Format defined by RVU_PF_FUNC_S.
                                                                 Interrupts from the LF are delivered to the selected PF/VF. */
        uint64_t reserved_24_62        : 39;
        uint64_t ena                   : 1;  /**< [ 63: 63](R/W) Enable. When set, the LF is enabled and provisioned to the VF/PF slot
                                                                 selected by [PF_FUNC] and [SLOT]. When clear, the LF is not provisioned.

                                                                 LF to slot mapping must be 1-to-1. Thus, each enabled LF must be provisioned
                                                                 to a unique {[PF_FUNC], [SLOT]} combination. */
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_priv_lfx_cfg_s cn; */
};
typedef union bdk_cptx_priv_lfx_cfg bdk_cptx_priv_lfx_cfg_t;

static inline uint64_t BDK_CPTX_PRIV_LFX_CFG(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_PRIV_LFX_CFG(unsigned long a, unsigned long b)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && ((a==0) && (b<=63)))
        return 0x8400a0041000ll + 0x10000000ll * ((a) & 0x0) + 8ll * ((b) & 0x3f);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && ((a<=1) && (b<=63)))
        return 0x8400a0041000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x3f);
    if (bdk_is_model(OCTEONTX_CN98XX) && ((a<=1) && (b<=63)))
        return 0x8400a0041000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x3f);
    __bdk_csr_fatal("CPTX_PRIV_LFX_CFG", 2, a, b, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_PRIV_LFX_CFG(a,b) bdk_cptx_priv_lfx_cfg_t
#define bustype_BDK_CPTX_PRIV_LFX_CFG(a,b) BDK_CSR_TYPE_RVU_PF_BAR0
#define basename_BDK_CPTX_PRIV_LFX_CFG(a,b) "CPTX_PRIV_LFX_CFG"
#define device_bar_BDK_CPTX_PRIV_LFX_CFG(a,b) 0x0 /* RVU_BAR0 */
#define busnum_BDK_CPTX_PRIV_LFX_CFG(a,b) (a)
#define arguments_BDK_CPTX_PRIV_LFX_CFG(a,b) (a),(b),-1,-1

/**
 * Register (RVU_PF_BAR0) cpt#_priv_lf#_int_cfg
 *
 * CPT Privileged LF Interrupt Configuration Registers
 */
union bdk_cptx_priv_lfx_int_cfg
{
    uint64_t u;
    struct bdk_cptx_priv_lfx_int_cfg_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_20_63        : 44;
        uint64_t msix_size             : 8;  /**< [ 19: 12](RO) Number of interrupt vectors enumerated by CPT_LF_INT_VEC_E. */
        uint64_t reserved_11           : 1;
        uint64_t msix_offset           : 11; /**< [ 10:  0](R/W) MSI-X offset. Offset of LF interrupt vectors enumerated by the block's
                                                                 CPT_LF_INT_VEC_E in the MSI-X table of the corresponding RVU VF/PF (see
                                                                 CPT_PRIV_LF()_CFG[PF_FUNC]). This offset is added to each enumerated value
                                                                 to obtain the corresponding MSI-X vector index. The highest enumerated
                                                                 value plus [MSIX_OFFSET] must be less than or equal to
                                                                 RVU_PRIV_PF()_MSIX_CFG[PF_MSIXT_SIZEM1,VF_MSIXT_SIZEM1]. */
#else /* Word 0 - Little Endian */
        uint64_t msix_offset           : 11; /**< [ 10:  0](R/W) MSI-X offset. Offset of LF interrupt vectors enumerated by the block's
                                                                 CPT_LF_INT_VEC_E in the MSI-X table of the corresponding RVU VF/PF (see
                                                                 CPT_PRIV_LF()_CFG[PF_FUNC]). This offset is added to each enumerated value
                                                                 to obtain the corresponding MSI-X vector index. The highest enumerated
                                                                 value plus [MSIX_OFFSET] must be less than or equal to
                                                                 RVU_PRIV_PF()_MSIX_CFG[PF_MSIXT_SIZEM1,VF_MSIXT_SIZEM1]. */
        uint64_t reserved_11           : 1;
        uint64_t msix_size             : 8;  /**< [ 19: 12](RO) Number of interrupt vectors enumerated by CPT_LF_INT_VEC_E. */
        uint64_t reserved_20_63        : 44;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_priv_lfx_int_cfg_s cn; */
};
typedef union bdk_cptx_priv_lfx_int_cfg bdk_cptx_priv_lfx_int_cfg_t;

static inline uint64_t BDK_CPTX_PRIV_LFX_INT_CFG(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_PRIV_LFX_INT_CFG(unsigned long a, unsigned long b)
{
    if (bdk_is_model(OCTEONTX_CN96XX_PASS1_X) && ((a==0) && (b<=63)))
        return 0x8400a0043000ll + 0x10000000ll * ((a) & 0x0) + 8ll * ((b) & 0x3f);
    if (bdk_is_model(OCTEONTX_CN96XX_PASS3_X) && ((a<=1) && (b<=63)))
        return 0x8400a0043000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x3f);
    if (bdk_is_model(OCTEONTX_CN98XX) && ((a<=1) && (b<=63)))
        return 0x8400a0043000ll + 0x10000000ll * ((a) & 0x1) + 8ll * ((b) & 0x3f);
    __bdk_csr_fatal("CPTX_PRIV_LFX_INT_CFG", 2, a, b, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_PRIV_LFX_INT_CFG(a,b) bdk_cptx_priv_lfx_int_cfg_t
#define bustype_BDK_CPTX_PRIV_LFX_INT_CFG(a,b) BDK_CSR_TYPE_RVU_PF_BAR0
#define basename_BDK_CPTX_PRIV_LFX_INT_CFG(a,b) "CPTX_PRIV_LFX_INT_CFG"
#define device_bar_BDK_CPTX_PRIV_LFX_INT_CFG(a,b) 0x0 /* RVU_BAR0 */
#define busnum_BDK_CPTX_PRIV_LFX_INT_CFG(a,b) (a)
#define arguments_BDK_CPTX_PRIV_LFX_INT_CFG(a,b) (a),(b),-1,-1

/**
 * Register (NCB) cpt#_vf#_msix_pba#
 *
 * CPT VF MSI-X Pending-Bit-Array Registers
 * This register is the MSI-X PBA table, the bit number is indexed by the CPT_VF_INT_VEC_E
 * enumeration.
 */
union bdk_cptx_vfx_msix_pbax
{
    uint64_t u;
    struct bdk_cptx_vfx_msix_pbax_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated CPT()_PF_MSIX_VEC()_CTL, enumerated by
                                                                 CPT_PF_INT_VEC_E. Bits that have no associated CPT_PF_INT_VEC_E are zero. */
#else /* Word 0 - Little Endian */
        uint64_t pend                  : 64; /**< [ 63:  0](RO/H) Pending message for the associated CPT()_PF_MSIX_VEC()_CTL, enumerated by
                                                                 CPT_PF_INT_VEC_E. Bits that have no associated CPT_PF_INT_VEC_E are zero. */
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_vfx_msix_pbax_s cn; */
};
typedef union bdk_cptx_vfx_msix_pbax bdk_cptx_vfx_msix_pbax_t;

static inline uint64_t BDK_CPTX_VFX_MSIX_PBAX(unsigned long a, unsigned long b, unsigned long c) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_VFX_MSIX_PBAX(unsigned long a, unsigned long b, unsigned long c)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && ((a==0) && (b<=15) && (c==0)))
        return 0x8720300f0000ll + 0x1000000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0xf) + 8ll * ((c) & 0x0);
    if (bdk_is_model(OCTEONTX_CN83XX) && ((a<=1) && (b<=63) && (c==0)))
        return 0x8720300f0000ll + 0x1000000000ll * ((a) & 0x1) + 0x100000ll * ((b) & 0x3f) + 8ll * ((c) & 0x0);
    __bdk_csr_fatal("CPTX_VFX_MSIX_PBAX", 3, a, b, c, 0, 0, 0);
}

#define typedef_BDK_CPTX_VFX_MSIX_PBAX(a,b,c) bdk_cptx_vfx_msix_pbax_t
#define bustype_BDK_CPTX_VFX_MSIX_PBAX(a,b,c) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_VFX_MSIX_PBAX(a,b,c) "CPTX_VFX_MSIX_PBAX"
#define device_bar_BDK_CPTX_VFX_MSIX_PBAX(a,b,c) 0x4 /* VF_BAR4 */
#define busnum_BDK_CPTX_VFX_MSIX_PBAX(a,b,c) (a)
#define arguments_BDK_CPTX_VFX_MSIX_PBAX(a,b,c) (a),(b),(c),-1

/**
 * Register (NCB) cpt#_vf#_msix_vec#_addr
 *
 * CPT VF MSI-X Vector-Table Address Registers
 * This register is the MSI-X vector table, indexed by the CPT_VF_INT_VEC_E enumeration.
 */
union bdk_cptx_vfx_msix_vecx_addr
{
    uint64_t u;
    struct bdk_cptx_vfx_msix_vecx_addr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_49_63        : 15;
        uint64_t addr                  : 47; /**< [ 48:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_1            : 1;
        uint64_t secvec                : 1;  /**< [  0:  0](RAZ) Secure vector. Zero as not supported on a per-vector basis for VFs; use
                                                                 PCCPF_CPT_VSEC_SCTL[MSIX_SEC] instead (for documentation, see
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC]). */
#else /* Word 0 - Little Endian */
        uint64_t secvec                : 1;  /**< [  0:  0](RAZ) Secure vector. Zero as not supported on a per-vector basis for VFs; use
                                                                 PCCPF_CPT_VSEC_SCTL[MSIX_SEC] instead (for documentation, see
                                                                 PCCPF_XXX_VSEC_SCTL[MSIX_SEC]). */
        uint64_t reserved_1            : 1;
        uint64_t addr                  : 47; /**< [ 48:  2](R/W) IOVA to use for MSI-X delivery of this vector. */
        uint64_t reserved_49_63        : 15;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_vfx_msix_vecx_addr_s cn; */
};
typedef union bdk_cptx_vfx_msix_vecx_addr bdk_cptx_vfx_msix_vecx_addr_t;

static inline uint64_t BDK_CPTX_VFX_MSIX_VECX_ADDR(unsigned long a, unsigned long b, unsigned long c) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_VFX_MSIX_VECX_ADDR(unsigned long a, unsigned long b, unsigned long c)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && ((a==0) && (b<=15) && (c<=1)))
        return 0x872030000000ll + 0x1000000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0xf) + 0x10ll * ((c) & 0x1);
    if (bdk_is_model(OCTEONTX_CN83XX) && ((a<=1) && (b<=63) && (c<=1)))
        return 0x872030000000ll + 0x1000000000ll * ((a) & 0x1) + 0x100000ll * ((b) & 0x3f) + 0x10ll * ((c) & 0x1);
    __bdk_csr_fatal("CPTX_VFX_MSIX_VECX_ADDR", 3, a, b, c, 0, 0, 0);
}

#define typedef_BDK_CPTX_VFX_MSIX_VECX_ADDR(a,b,c) bdk_cptx_vfx_msix_vecx_addr_t
#define bustype_BDK_CPTX_VFX_MSIX_VECX_ADDR(a,b,c) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_VFX_MSIX_VECX_ADDR(a,b,c) "CPTX_VFX_MSIX_VECX_ADDR"
#define device_bar_BDK_CPTX_VFX_MSIX_VECX_ADDR(a,b,c) 0x4 /* VF_BAR4 */
#define busnum_BDK_CPTX_VFX_MSIX_VECX_ADDR(a,b,c) (a)
#define arguments_BDK_CPTX_VFX_MSIX_VECX_ADDR(a,b,c) (a),(b),(c),-1

/**
 * Register (NCB) cpt#_vf#_msix_vec#_ctl
 *
 * CPT VF MSI-X Vector-Table Control and Data Registers
 * This register is the MSI-X vector table, indexed by the CPT_VF_INT_VEC_E enumeration.
 */
union bdk_cptx_vfx_msix_vecx_ctl
{
    uint64_t u;
    struct bdk_cptx_vfx_msix_vecx_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_33_63        : 31;
        uint64_t mask                  : 1;  /**< [ 32: 32](R/W) When set, no MSI-X interrupts are sent to this vector. */
        uint64_t reserved_20_31        : 12;
        uint64_t data                  : 20; /**< [ 19:  0](R/W) Data to use for MSI-X delivery of this vector. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 20; /**< [ 19:  0](R/W) Data to use for MSI-X delivery of this vector. */
        uint64_t reserved_20_31        : 12;
        uint64_t mask                  : 1;  /**< [ 32: 32](R/W) When set, no MSI-X interrupts are sent to this vector. */
        uint64_t reserved_33_63        : 31;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_vfx_msix_vecx_ctl_s cn; */
};
typedef union bdk_cptx_vfx_msix_vecx_ctl bdk_cptx_vfx_msix_vecx_ctl_t;

static inline uint64_t BDK_CPTX_VFX_MSIX_VECX_CTL(unsigned long a, unsigned long b, unsigned long c) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_VFX_MSIX_VECX_CTL(unsigned long a, unsigned long b, unsigned long c)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && ((a==0) && (b<=15) && (c<=1)))
        return 0x872030000008ll + 0x1000000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0xf) + 0x10ll * ((c) & 0x1);
    if (bdk_is_model(OCTEONTX_CN83XX) && ((a<=1) && (b<=63) && (c<=1)))
        return 0x872030000008ll + 0x1000000000ll * ((a) & 0x1) + 0x100000ll * ((b) & 0x3f) + 0x10ll * ((c) & 0x1);
    __bdk_csr_fatal("CPTX_VFX_MSIX_VECX_CTL", 3, a, b, c, 0, 0, 0);
}

#define typedef_BDK_CPTX_VFX_MSIX_VECX_CTL(a,b,c) bdk_cptx_vfx_msix_vecx_ctl_t
#define bustype_BDK_CPTX_VFX_MSIX_VECX_CTL(a,b,c) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_VFX_MSIX_VECX_CTL(a,b,c) "CPTX_VFX_MSIX_VECX_CTL"
#define device_bar_BDK_CPTX_VFX_MSIX_VECX_CTL(a,b,c) 0x4 /* VF_BAR4 */
#define busnum_BDK_CPTX_VFX_MSIX_VECX_CTL(a,b,c) (a)
#define arguments_BDK_CPTX_VFX_MSIX_VECX_CTL(a,b,c) (a),(b),(c),-1

/**
 * Register (NCB) cpt#_vf#_pf_mbox#
 *
 * CPT VF/PF Mailbox Registers
 */
union bdk_cptx_vfx_pf_mboxx
{
    uint64_t u;
    struct bdk_cptx_vfx_pf_mboxx_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W/H) Mailbox data. These VF registers access the 16-byte-per-VF VF/PF mailbox
                                                                 RAM. The PF may access the same storage using CPT()_PF_VF()_MBOX(). MBOX(0) is
                                                                 typically used for PF to VF signaling, MBOX(1) for VF to PF. Writing
                                                                 CPT()_VF()_PF_MBOX(1) (but not CPT()_PF_VF()_MBOX(1)) will set the
                                                                 corresponding CPT()_PF_MBOX_INT() bit, which if appropriately enabled will send an
                                                                 interrupt to the PF. */
#else /* Word 0 - Little Endian */
        uint64_t data                  : 64; /**< [ 63:  0](R/W/H) Mailbox data. These VF registers access the 16-byte-per-VF VF/PF mailbox
                                                                 RAM. The PF may access the same storage using CPT()_PF_VF()_MBOX(). MBOX(0) is
                                                                 typically used for PF to VF signaling, MBOX(1) for VF to PF. Writing
                                                                 CPT()_VF()_PF_MBOX(1) (but not CPT()_PF_VF()_MBOX(1)) will set the
                                                                 corresponding CPT()_PF_MBOX_INT() bit, which if appropriately enabled will send an
                                                                 interrupt to the PF. */
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_vfx_pf_mboxx_s cn; */
};
typedef union bdk_cptx_vfx_pf_mboxx bdk_cptx_vfx_pf_mboxx_t;

static inline uint64_t BDK_CPTX_VFX_PF_MBOXX(unsigned long a, unsigned long b, unsigned long c) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_VFX_PF_MBOXX(unsigned long a, unsigned long b, unsigned long c)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && ((a==0) && (b<=15) && (c<=1)))
        return 0x872020001000ll + 0x1000000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0xf) + 8ll * ((c) & 0x1);
    if (bdk_is_model(OCTEONTX_CN83XX) && ((a<=1) && (b<=63) && (c<=1)))
        return 0x872020001000ll + 0x1000000000ll * ((a) & 0x1) + 0x100000ll * ((b) & 0x3f) + 8ll * ((c) & 0x1);
    __bdk_csr_fatal("CPTX_VFX_PF_MBOXX", 3, a, b, c, 0, 0, 0);
}

#define typedef_BDK_CPTX_VFX_PF_MBOXX(a,b,c) bdk_cptx_vfx_pf_mboxx_t
#define bustype_BDK_CPTX_VFX_PF_MBOXX(a,b,c) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_VFX_PF_MBOXX(a,b,c) "CPTX_VFX_PF_MBOXX"
#define device_bar_BDK_CPTX_VFX_PF_MBOXX(a,b,c) 0x0 /* VF_BAR0 */
#define busnum_BDK_CPTX_VFX_PF_MBOXX(a,b,c) (a)
#define arguments_BDK_CPTX_VFX_PF_MBOXX(a,b,c) (a),(b),(c),-1

/**
 * Register (NCB) cpt#_vq#_ctl
 *
 * CPT VF Queue Control Registers
 * This register configures queues. This register should be changed (other than
 * clearing [ENA]) only when quiescent (see CPT()_VQ()_INPROG[INFLIGHT]).
 */
union bdk_cptx_vqx_ctl
{
    uint64_t u;
    struct bdk_cptx_vqx_ctl_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t ena                   : 1;  /**< [  0:  0](R/W/H) Enables the logical instruction queue. See also CPT()_PF_Q()_CTL[CONT_ERR] and
                                                                 CPT()_VQ()_INPROG[INFLIGHT].
                                                                 1 = Queue is enabled.
                                                                 0 = Queue is disabled. */
#else /* Word 0 - Little Endian */
        uint64_t ena                   : 1;  /**< [  0:  0](R/W/H) Enables the logical instruction queue. See also CPT()_PF_Q()_CTL[CONT_ERR] and
                                                                 CPT()_VQ()_INPROG[INFLIGHT].
                                                                 1 = Queue is enabled.
                                                                 0 = Queue is disabled. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_vqx_ctl_s cn; */
};
typedef union bdk_cptx_vqx_ctl bdk_cptx_vqx_ctl_t;

static inline uint64_t BDK_CPTX_VQX_CTL(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_VQX_CTL(unsigned long a, unsigned long b)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && ((a==0) && (b<=15)))
        return 0x872020000100ll + 0x1000000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0xf);
    if (bdk_is_model(OCTEONTX_CN83XX) && ((a<=1) && (b<=63)))
        return 0x872020000100ll + 0x1000000000ll * ((a) & 0x1) + 0x100000ll * ((b) & 0x3f);
    __bdk_csr_fatal("CPTX_VQX_CTL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_VQX_CTL(a,b) bdk_cptx_vqx_ctl_t
#define bustype_BDK_CPTX_VQX_CTL(a,b) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_VQX_CTL(a,b) "CPTX_VQX_CTL"
#define device_bar_BDK_CPTX_VQX_CTL(a,b) 0x0 /* VF_BAR0 */
#define busnum_BDK_CPTX_VQX_CTL(a,b) (a)
#define arguments_BDK_CPTX_VQX_CTL(a,b) (a),(b),-1,-1

/**
 * Register (NCB) cpt#_vq#_done
 *
 * CPT Queue Done Count Registers
 * These registers contain the per-queue instruction done count.
 */
union bdk_cptx_vqx_done
{
    uint64_t u;
    struct bdk_cptx_vqx_done_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_20_63        : 44;
        uint64_t done                  : 20; /**< [ 19:  0](R/W/H) Done count. When CPT_INST_S[DONEINT] set and that instruction completes,
                                                                 CPT()_VQ()_DONE[DONE] is incremented when the instruction finishes. Write to
                                                                 this field are for diagnostic use only; instead software writes
                                                                 CPT()_VQ()_DONE_ACK with the number of decrements for this field.

                                                                 Interrupts are sent as follows:

                                                                 * When CPT()_VQ()_DONE[DONE] = 0, then no results are pending, the interrupt
                                                                 coalescing timer is held to zero, and an interrupt is not sent.

                                                                 * When CPT()_VQ()_DONE[DONE] != 0, then the interrupt coalescing timer
                                                                 counts. If the counter is \>= CPT()_VQ()_DONE_WAIT[TIME_WAIT]*1024, or
                                                                 CPT()_VQ()_DONE[DONE] \>= CPT()_VQ()_DONE_WAIT[NUM_WAIT], i.e. enough time has
                                                                 passed or enough results have arrived, then the interrupt is sent.  Otherwise,
                                                                 it is not sent due to coalescing.

                                                                 * When CPT()_VQ()_DONE_ACK is written (or CPT()_VQ()_DONE is written but this is
                                                                 not typical), the interrupt coalescing timer restarts.  Note after decrementing
                                                                 this interrupt equation is recomputed, for example if CPT()_VQ()_DONE[DONE] \>=
                                                                 CPT()_VQ()_DONE_WAIT[NUM_WAIT] and because the timer is zero, the interrupt will
                                                                 be resent immediately.  (This covers the race case between software
                                                                 acknowledging an interrupt and a result returning.)

                                                                 * When CPT()_VQ()_DONE_ENA_W1S[DONE] = 0, interrupts are not sent, but the
                                                                 counting described above still occurs.

                                                                 Since CPT instructions complete out-of-order, if software is using completion
                                                                 interrupts the suggested scheme is to request a DONEINT on each request, and
                                                                 when an interrupt arrives perform a "greedy" scan for completions; even if a
                                                                 later command is acknowledged first this will not result in missing a
                                                                 completion.

                                                                 Software is responsible for making sure [DONE] does not overflow; for example by
                                                                 insuring there are not more than 2^20-1 instructions in flight that may request
                                                                 interrupts. */
#else /* Word 0 - Little Endian */
        uint64_t done                  : 20; /**< [ 19:  0](R/W/H) Done count. When CPT_INST_S[DONEINT] set and that instruction completes,
                                                                 CPT()_VQ()_DONE[DONE] is incremented when the instruction finishes. Write to
                                                                 this field are for diagnostic use only; instead software writes
                                                                 CPT()_VQ()_DONE_ACK with the number of decrements for this field.

                                                                 Interrupts are sent as follows:

                                                                 * When CPT()_VQ()_DONE[DONE] = 0, then no results are pending, the interrupt
                                                                 coalescing timer is held to zero, and an interrupt is not sent.

                                                                 * When CPT()_VQ()_DONE[DONE] != 0, then the interrupt coalescing timer
                                                                 counts. If the counter is \>= CPT()_VQ()_DONE_WAIT[TIME_WAIT]*1024, or
                                                                 CPT()_VQ()_DONE[DONE] \>= CPT()_VQ()_DONE_WAIT[NUM_WAIT], i.e. enough time has
                                                                 passed or enough results have arrived, then the interrupt is sent.  Otherwise,
                                                                 it is not sent due to coalescing.

                                                                 * When CPT()_VQ()_DONE_ACK is written (or CPT()_VQ()_DONE is written but this is
                                                                 not typical), the interrupt coalescing timer restarts.  Note after decrementing
                                                                 this interrupt equation is recomputed, for example if CPT()_VQ()_DONE[DONE] \>=
                                                                 CPT()_VQ()_DONE_WAIT[NUM_WAIT] and because the timer is zero, the interrupt will
                                                                 be resent immediately.  (This covers the race case between software
                                                                 acknowledging an interrupt and a result returning.)

                                                                 * When CPT()_VQ()_DONE_ENA_W1S[DONE] = 0, interrupts are not sent, but the
                                                                 counting described above still occurs.

                                                                 Since CPT instructions complete out-of-order, if software is using completion
                                                                 interrupts the suggested scheme is to request a DONEINT on each request, and
                                                                 when an interrupt arrives perform a "greedy" scan for completions; even if a
                                                                 later command is acknowledged first this will not result in missing a
                                                                 completion.

                                                                 Software is responsible for making sure [DONE] does not overflow; for example by
                                                                 insuring there are not more than 2^20-1 instructions in flight that may request
                                                                 interrupts. */
        uint64_t reserved_20_63        : 44;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_vqx_done_s cn; */
};
typedef union bdk_cptx_vqx_done bdk_cptx_vqx_done_t;

static inline uint64_t BDK_CPTX_VQX_DONE(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_VQX_DONE(unsigned long a, unsigned long b)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && ((a==0) && (b<=15)))
        return 0x872020000420ll + 0x1000000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0xf);
    if (bdk_is_model(OCTEONTX_CN83XX) && ((a<=1) && (b<=63)))
        return 0x872020000420ll + 0x1000000000ll * ((a) & 0x1) + 0x100000ll * ((b) & 0x3f);
    __bdk_csr_fatal("CPTX_VQX_DONE", 2, a, b, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_VQX_DONE(a,b) bdk_cptx_vqx_done_t
#define bustype_BDK_CPTX_VQX_DONE(a,b) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_VQX_DONE(a,b) "CPTX_VQX_DONE"
#define device_bar_BDK_CPTX_VQX_DONE(a,b) 0x0 /* VF_BAR0 */
#define busnum_BDK_CPTX_VQX_DONE(a,b) (a)
#define arguments_BDK_CPTX_VQX_DONE(a,b) (a),(b),-1,-1

/**
 * Register (NCB) cpt#_vq#_done_ack
 *
 * CPT Queue Done Count Ack Registers
 * This register is written by software to acknowledge interrupts.
 */
union bdk_cptx_vqx_done_ack
{
    uint64_t u;
    struct bdk_cptx_vqx_done_ack_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_20_63        : 44;
        uint64_t done_ack              : 20; /**< [ 19:  0](R/W/H) Number of decrements to CPT()_VQ()_DONE[DONE]. Reads CPT()_VQ()_DONE[DONE].

                                                                 Written by software to acknowledge interrupts. If CPT()_VQ()_DONE[DONE] is still
                                                                 nonzero the interrupt will be re-sent if the conditions described in
                                                                 CPT()_VQ()_DONE[DONE] are satisfied. */
#else /* Word 0 - Little Endian */
        uint64_t done_ack              : 20; /**< [ 19:  0](R/W/H) Number of decrements to CPT()_VQ()_DONE[DONE]. Reads CPT()_VQ()_DONE[DONE].

                                                                 Written by software to acknowledge interrupts. If CPT()_VQ()_DONE[DONE] is still
                                                                 nonzero the interrupt will be re-sent if the conditions described in
                                                                 CPT()_VQ()_DONE[DONE] are satisfied. */
        uint64_t reserved_20_63        : 44;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_vqx_done_ack_s cn; */
};
typedef union bdk_cptx_vqx_done_ack bdk_cptx_vqx_done_ack_t;

static inline uint64_t BDK_CPTX_VQX_DONE_ACK(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_VQX_DONE_ACK(unsigned long a, unsigned long b)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && ((a==0) && (b<=15)))
        return 0x872020000440ll + 0x1000000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0xf);
    if (bdk_is_model(OCTEONTX_CN83XX) && ((a<=1) && (b<=63)))
        return 0x872020000440ll + 0x1000000000ll * ((a) & 0x1) + 0x100000ll * ((b) & 0x3f);
    __bdk_csr_fatal("CPTX_VQX_DONE_ACK", 2, a, b, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_VQX_DONE_ACK(a,b) bdk_cptx_vqx_done_ack_t
#define bustype_BDK_CPTX_VQX_DONE_ACK(a,b) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_VQX_DONE_ACK(a,b) "CPTX_VQX_DONE_ACK"
#define device_bar_BDK_CPTX_VQX_DONE_ACK(a,b) 0x0 /* VF_BAR0 */
#define busnum_BDK_CPTX_VQX_DONE_ACK(a,b) (a)
#define arguments_BDK_CPTX_VQX_DONE_ACK(a,b) (a),(b),-1,-1

/**
 * Register (NCB) cpt#_vq#_done_ena_w1c
 *
 * CPT Queue Done Interrupt Enable Clear Registers
 */
union bdk_cptx_vqx_done_ena_w1c
{
    uint64_t u;
    struct bdk_cptx_vqx_done_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t done                  : 1;  /**< [  0:  0](R/W1C/H) Read or clears CPT()_VQ()_DONE_ENA_W1S[DONE]. */
#else /* Word 0 - Little Endian */
        uint64_t done                  : 1;  /**< [  0:  0](R/W1C/H) Read or clears CPT()_VQ()_DONE_ENA_W1S[DONE]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_vqx_done_ena_w1c_s cn; */
};
typedef union bdk_cptx_vqx_done_ena_w1c bdk_cptx_vqx_done_ena_w1c_t;

static inline uint64_t BDK_CPTX_VQX_DONE_ENA_W1C(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_VQX_DONE_ENA_W1C(unsigned long a, unsigned long b)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && ((a==0) && (b<=15)))
        return 0x872020000478ll + 0x1000000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0xf);
    if (bdk_is_model(OCTEONTX_CN83XX) && ((a<=1) && (b<=63)))
        return 0x872020000478ll + 0x1000000000ll * ((a) & 0x1) + 0x100000ll * ((b) & 0x3f);
    __bdk_csr_fatal("CPTX_VQX_DONE_ENA_W1C", 2, a, b, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_VQX_DONE_ENA_W1C(a,b) bdk_cptx_vqx_done_ena_w1c_t
#define bustype_BDK_CPTX_VQX_DONE_ENA_W1C(a,b) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_VQX_DONE_ENA_W1C(a,b) "CPTX_VQX_DONE_ENA_W1C"
#define device_bar_BDK_CPTX_VQX_DONE_ENA_W1C(a,b) 0x0 /* VF_BAR0 */
#define busnum_BDK_CPTX_VQX_DONE_ENA_W1C(a,b) (a)
#define arguments_BDK_CPTX_VQX_DONE_ENA_W1C(a,b) (a),(b),-1,-1

/**
 * Register (NCB) cpt#_vq#_done_ena_w1s
 *
 * CPT Queue Done Interrupt Enable Set Registers
 * Write 1 to these registers will enable the DONEINT interrupt for the queue.
 */
union bdk_cptx_vqx_done_ena_w1s
{
    uint64_t u;
    struct bdk_cptx_vqx_done_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t done                  : 1;  /**< [  0:  0](R/W1S/H) Write 1 will enable DONEINT for this queue. Write 0 has no effect.
                                                                 Read will return the enable bit. */
#else /* Word 0 - Little Endian */
        uint64_t done                  : 1;  /**< [  0:  0](R/W1S/H) Write 1 will enable DONEINT for this queue. Write 0 has no effect.
                                                                 Read will return the enable bit. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_vqx_done_ena_w1s_s cn; */
};
typedef union bdk_cptx_vqx_done_ena_w1s bdk_cptx_vqx_done_ena_w1s_t;

static inline uint64_t BDK_CPTX_VQX_DONE_ENA_W1S(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_VQX_DONE_ENA_W1S(unsigned long a, unsigned long b)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && ((a==0) && (b<=15)))
        return 0x872020000470ll + 0x1000000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0xf);
    if (bdk_is_model(OCTEONTX_CN83XX) && ((a<=1) && (b<=63)))
        return 0x872020000470ll + 0x1000000000ll * ((a) & 0x1) + 0x100000ll * ((b) & 0x3f);
    __bdk_csr_fatal("CPTX_VQX_DONE_ENA_W1S", 2, a, b, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_VQX_DONE_ENA_W1S(a,b) bdk_cptx_vqx_done_ena_w1s_t
#define bustype_BDK_CPTX_VQX_DONE_ENA_W1S(a,b) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_VQX_DONE_ENA_W1S(a,b) "CPTX_VQX_DONE_ENA_W1S"
#define device_bar_BDK_CPTX_VQX_DONE_ENA_W1S(a,b) 0x0 /* VF_BAR0 */
#define busnum_BDK_CPTX_VQX_DONE_ENA_W1S(a,b) (a)
#define arguments_BDK_CPTX_VQX_DONE_ENA_W1S(a,b) (a),(b),-1,-1

/**
 * Register (NCB) cpt#_vq#_done_int_w1c
 *
 * CPT Queue Done Interrupt Clear Registers
 */
union bdk_cptx_vqx_done_int_w1c
{
    uint64_t u;
    struct bdk_cptx_vqx_done_int_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t done                  : 1;  /**< [  0:  0](RO/H) Done interrupt. See CPT()_VQ()_DONE[DONE].  Note this bit is read-only, to acknowledge
                                                                 interrupts use CPT()_VQ()_DONE_ACK. To test interrupts, write nonzero to
                                                                 CPT()_VQ()_DONE[DONE]. */
#else /* Word 0 - Little Endian */
        uint64_t done                  : 1;  /**< [  0:  0](RO/H) Done interrupt. See CPT()_VQ()_DONE[DONE].  Note this bit is read-only, to acknowledge
                                                                 interrupts use CPT()_VQ()_DONE_ACK. To test interrupts, write nonzero to
                                                                 CPT()_VQ()_DONE[DONE]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_vqx_done_int_w1c_s cn; */
};
typedef union bdk_cptx_vqx_done_int_w1c bdk_cptx_vqx_done_int_w1c_t;

static inline uint64_t BDK_CPTX_VQX_DONE_INT_W1C(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_VQX_DONE_INT_W1C(unsigned long a, unsigned long b)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && ((a==0) && (b<=15)))
        return 0x872020000468ll + 0x1000000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0xf);
    if (bdk_is_model(OCTEONTX_CN83XX) && ((a<=1) && (b<=63)))
        return 0x872020000468ll + 0x1000000000ll * ((a) & 0x1) + 0x100000ll * ((b) & 0x3f);
    __bdk_csr_fatal("CPTX_VQX_DONE_INT_W1C", 2, a, b, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_VQX_DONE_INT_W1C(a,b) bdk_cptx_vqx_done_int_w1c_t
#define bustype_BDK_CPTX_VQX_DONE_INT_W1C(a,b) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_VQX_DONE_INT_W1C(a,b) "CPTX_VQX_DONE_INT_W1C"
#define device_bar_BDK_CPTX_VQX_DONE_INT_W1C(a,b) 0x0 /* VF_BAR0 */
#define busnum_BDK_CPTX_VQX_DONE_INT_W1C(a,b) (a)
#define arguments_BDK_CPTX_VQX_DONE_INT_W1C(a,b) (a),(b),-1,-1

/**
 * Register (NCB) cpt#_vq#_done_int_w1s
 *
 * CPT Queue Done Interrupt Set Registers
 */
union bdk_cptx_vqx_done_int_w1s
{
    uint64_t u;
    struct bdk_cptx_vqx_done_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_1_63         : 63;
        uint64_t done                  : 1;  /**< [  0:  0](RO/H) Done interrupt. See CPT()_VQ()_DONE[DONE].  Note this bit is read-only, to acknowledge
                                                                 interrupts use CPT()_VQ()_DONE_ACK. To test interrupts, write nonzero to
                                                                 CPT()_VQ()_DONE[DONE]. */
#else /* Word 0 - Little Endian */
        uint64_t done                  : 1;  /**< [  0:  0](RO/H) Done interrupt. See CPT()_VQ()_DONE[DONE].  Note this bit is read-only, to acknowledge
                                                                 interrupts use CPT()_VQ()_DONE_ACK. To test interrupts, write nonzero to
                                                                 CPT()_VQ()_DONE[DONE]. */
        uint64_t reserved_1_63         : 63;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_vqx_done_int_w1s_s cn; */
};
typedef union bdk_cptx_vqx_done_int_w1s bdk_cptx_vqx_done_int_w1s_t;

static inline uint64_t BDK_CPTX_VQX_DONE_INT_W1S(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_VQX_DONE_INT_W1S(unsigned long a, unsigned long b)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && ((a==0) && (b<=15)))
        return 0x872020000460ll + 0x1000000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0xf);
    if (bdk_is_model(OCTEONTX_CN83XX) && ((a<=1) && (b<=63)))
        return 0x872020000460ll + 0x1000000000ll * ((a) & 0x1) + 0x100000ll * ((b) & 0x3f);
    __bdk_csr_fatal("CPTX_VQX_DONE_INT_W1S", 2, a, b, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_VQX_DONE_INT_W1S(a,b) bdk_cptx_vqx_done_int_w1s_t
#define bustype_BDK_CPTX_VQX_DONE_INT_W1S(a,b) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_VQX_DONE_INT_W1S(a,b) "CPTX_VQX_DONE_INT_W1S"
#define device_bar_BDK_CPTX_VQX_DONE_INT_W1S(a,b) 0x0 /* VF_BAR0 */
#define busnum_BDK_CPTX_VQX_DONE_INT_W1S(a,b) (a)
#define arguments_BDK_CPTX_VQX_DONE_INT_W1S(a,b) (a),(b),-1,-1

/**
 * Register (NCB) cpt#_vq#_done_wait
 *
 * CPT Queue Done Interrupt Coalescing Wait Registers
 * Specifies the per queue interrupt coalescing settings.
 */
union bdk_cptx_vqx_done_wait
{
    uint64_t u;
    struct bdk_cptx_vqx_done_wait_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_48_63        : 16;
        uint64_t time_wait             : 16; /**< [ 47: 32](R/W) Time hold-off. When CPT()_VQ()_DONE[DONE] = 0, or CPT()_VQ()_DONE_ACK is written
                                                                 a timer is cleared. When the timer reaches [TIME_WAIT]*1024 then interrupt
                                                                 coalescing ends; see CPT()_VQ()_DONE[DONE]. If 0x0, time coalescing is disabled. */
        uint64_t reserved_20_31        : 12;
        uint64_t num_wait              : 20; /**< [ 19:  0](R/W) Number of messages hold-off. When CPT()_VQ()_DONE[DONE] \>= [NUM_WAIT] then
                                                                 interrupt coalescing ends; see CPT()_VQ()_DONE[DONE]. If 0x0, same behavior as
                                                                 0x1. */
#else /* Word 0 - Little Endian */
        uint64_t num_wait              : 20; /**< [ 19:  0](R/W) Number of messages hold-off. When CPT()_VQ()_DONE[DONE] \>= [NUM_WAIT] then
                                                                 interrupt coalescing ends; see CPT()_VQ()_DONE[DONE]. If 0x0, same behavior as
                                                                 0x1. */
        uint64_t reserved_20_31        : 12;
        uint64_t time_wait             : 16; /**< [ 47: 32](R/W) Time hold-off. When CPT()_VQ()_DONE[DONE] = 0, or CPT()_VQ()_DONE_ACK is written
                                                                 a timer is cleared. When the timer reaches [TIME_WAIT]*1024 then interrupt
                                                                 coalescing ends; see CPT()_VQ()_DONE[DONE]. If 0x0, time coalescing is disabled. */
        uint64_t reserved_48_63        : 16;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_vqx_done_wait_s cn; */
};
typedef union bdk_cptx_vqx_done_wait bdk_cptx_vqx_done_wait_t;

static inline uint64_t BDK_CPTX_VQX_DONE_WAIT(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_VQX_DONE_WAIT(unsigned long a, unsigned long b)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && ((a==0) && (b<=15)))
        return 0x872020000400ll + 0x1000000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0xf);
    if (bdk_is_model(OCTEONTX_CN83XX) && ((a<=1) && (b<=63)))
        return 0x872020000400ll + 0x1000000000ll * ((a) & 0x1) + 0x100000ll * ((b) & 0x3f);
    __bdk_csr_fatal("CPTX_VQX_DONE_WAIT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_VQX_DONE_WAIT(a,b) bdk_cptx_vqx_done_wait_t
#define bustype_BDK_CPTX_VQX_DONE_WAIT(a,b) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_VQX_DONE_WAIT(a,b) "CPTX_VQX_DONE_WAIT"
#define device_bar_BDK_CPTX_VQX_DONE_WAIT(a,b) 0x0 /* VF_BAR0 */
#define busnum_BDK_CPTX_VQX_DONE_WAIT(a,b) (a)
#define arguments_BDK_CPTX_VQX_DONE_WAIT(a,b) (a),(b),-1,-1

/**
 * Register (NCB) cpt#_vq#_doorbell
 *
 * CPT Queue Doorbell Registers
 * Doorbells for the CPT instruction queues.
 */
union bdk_cptx_vqx_doorbell
{
    uint64_t u;
    struct bdk_cptx_vqx_doorbell_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_20_63        : 44;
        uint64_t dbell_cnt             : 20; /**< [ 19:  0](R/W/H) Number of instruction queue 64-bit words to add to the CPT instruction doorbell
                                                                 count. Readback value is the current number of pending doorbell requests.

                                                                 If counter overflows CPT()_VQ()_MISC_INT[DOVF] is set.

                                                                 To reset the count back to zero, write one to clear
                                                                 CPT()_VQ()_MISC_ENA_W1C[DOVF], then write a value of 2^20 minus the
                                                                 read [DBELL_CNT], then write one to CPT()_VQ()_MISC_ENA_W1C[DOVF] and
                                                                 CPT()_VQ()_MISC_ENA_W1S[DOVF].

                                                                 Must be a multiple of 8.  All CPT instructions are 8 words and require a
                                                                 doorbell count of multiple of 8. */
#else /* Word 0 - Little Endian */
        uint64_t dbell_cnt             : 20; /**< [ 19:  0](R/W/H) Number of instruction queue 64-bit words to add to the CPT instruction doorbell
                                                                 count. Readback value is the current number of pending doorbell requests.

                                                                 If counter overflows CPT()_VQ()_MISC_INT[DOVF] is set.

                                                                 To reset the count back to zero, write one to clear
                                                                 CPT()_VQ()_MISC_ENA_W1C[DOVF], then write a value of 2^20 minus the
                                                                 read [DBELL_CNT], then write one to CPT()_VQ()_MISC_ENA_W1C[DOVF] and
                                                                 CPT()_VQ()_MISC_ENA_W1S[DOVF].

                                                                 Must be a multiple of 8.  All CPT instructions are 8 words and require a
                                                                 doorbell count of multiple of 8. */
        uint64_t reserved_20_63        : 44;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_vqx_doorbell_s cn; */
};
typedef union bdk_cptx_vqx_doorbell bdk_cptx_vqx_doorbell_t;

static inline uint64_t BDK_CPTX_VQX_DOORBELL(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_VQX_DOORBELL(unsigned long a, unsigned long b)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && ((a==0) && (b<=15)))
        return 0x872020000600ll + 0x1000000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0xf);
    if (bdk_is_model(OCTEONTX_CN83XX) && ((a<=1) && (b<=63)))
        return 0x872020000600ll + 0x1000000000ll * ((a) & 0x1) + 0x100000ll * ((b) & 0x3f);
    __bdk_csr_fatal("CPTX_VQX_DOORBELL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_VQX_DOORBELL(a,b) bdk_cptx_vqx_doorbell_t
#define bustype_BDK_CPTX_VQX_DOORBELL(a,b) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_VQX_DOORBELL(a,b) "CPTX_VQX_DOORBELL"
#define device_bar_BDK_CPTX_VQX_DOORBELL(a,b) 0x0 /* VF_BAR0 */
#define busnum_BDK_CPTX_VQX_DOORBELL(a,b) (a)
#define arguments_BDK_CPTX_VQX_DOORBELL(a,b) (a),(b),-1,-1

/**
 * Register (NCB) cpt#_vq#_inprog
 *
 * CPT Queue In Progress Count Registers
 * These registers contain the per-queue instruction in flight registers.
 */
union bdk_cptx_vqx_inprog
{
    uint64_t u;
    struct bdk_cptx_vqx_inprog_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_8_63         : 56;
        uint64_t inflight              : 8;  /**< [  7:  0](RO/H) Inflight count. Counts the number of instructions for the VF for which CPT is
                                                                 fetching, executing or responding to instructions. However this does not include
                                                                 any interrupts that are awaiting software handling (CPT()_VQ()_DONE[DONE] !=
                                                                 0x0).

                                                                 A queue may not be reconfigured until:
                                                                   1. CPT()_VQ()_CTL[ENA] is cleared by software.
                                                                   2. [INFLIGHT] is polled until equals to zero. */
#else /* Word 0 - Little Endian */
        uint64_t inflight              : 8;  /**< [  7:  0](RO/H) Inflight count. Counts the number of instructions for the VF for which CPT is
                                                                 fetching, executing or responding to instructions. However this does not include
                                                                 any interrupts that are awaiting software handling (CPT()_VQ()_DONE[DONE] !=
                                                                 0x0).

                                                                 A queue may not be reconfigured until:
                                                                   1. CPT()_VQ()_CTL[ENA] is cleared by software.
                                                                   2. [INFLIGHT] is polled until equals to zero. */
        uint64_t reserved_8_63         : 56;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_vqx_inprog_s cn; */
};
typedef union bdk_cptx_vqx_inprog bdk_cptx_vqx_inprog_t;

static inline uint64_t BDK_CPTX_VQX_INPROG(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_VQX_INPROG(unsigned long a, unsigned long b)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && ((a==0) && (b<=15)))
        return 0x872020000410ll + 0x1000000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0xf);
    if (bdk_is_model(OCTEONTX_CN83XX) && ((a<=1) && (b<=63)))
        return 0x872020000410ll + 0x1000000000ll * ((a) & 0x1) + 0x100000ll * ((b) & 0x3f);
    __bdk_csr_fatal("CPTX_VQX_INPROG", 2, a, b, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_VQX_INPROG(a,b) bdk_cptx_vqx_inprog_t
#define bustype_BDK_CPTX_VQX_INPROG(a,b) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_VQX_INPROG(a,b) "CPTX_VQX_INPROG"
#define device_bar_BDK_CPTX_VQX_INPROG(a,b) 0x0 /* VF_BAR0 */
#define busnum_BDK_CPTX_VQX_INPROG(a,b) (a)
#define arguments_BDK_CPTX_VQX_INPROG(a,b) (a),(b),-1,-1

/**
 * Register (NCB) cpt#_vq#_misc_ena_w1c
 *
 * CPT Queue Misc Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union bdk_cptx_vqx_misc_ena_w1c
{
    uint64_t u;
    struct bdk_cptx_vqx_misc_ena_w1c_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t fault                 : 1;  /**< [  6:  6](R/W1C/H) Reads or clears enable for CPT(0..1)_VQ(0..63)_MISC_INT[FAULT]. */
        uint64_t hwerr                 : 1;  /**< [  5:  5](R/W1C/H) Reads or clears enable for CPT(0..1)_VQ(0..63)_MISC_INT[HWERR]. */
        uint64_t swerr                 : 1;  /**< [  4:  4](R/W1C/H) Reads or clears enable for CPT(0)_VQ(0..15)_MISC_INT[SWERR]. */
        uint64_t nwrp                  : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for CPT(0)_VQ(0..15)_MISC_INT[NWRP]. */
        uint64_t irde                  : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for CPT(0)_VQ(0..15)_MISC_INT[IRDE]. */
        uint64_t dovf                  : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for CPT(0)_VQ(0..15)_MISC_INT[DOVF]. */
        uint64_t mbox                  : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for CPT(0)_VQ(0..15)_MISC_INT[MBOX]. */
#else /* Word 0 - Little Endian */
        uint64_t mbox                  : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for CPT(0)_VQ(0..15)_MISC_INT[MBOX]. */
        uint64_t dovf                  : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for CPT(0)_VQ(0..15)_MISC_INT[DOVF]. */
        uint64_t irde                  : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for CPT(0)_VQ(0..15)_MISC_INT[IRDE]. */
        uint64_t nwrp                  : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for CPT(0)_VQ(0..15)_MISC_INT[NWRP]. */
        uint64_t swerr                 : 1;  /**< [  4:  4](R/W1C/H) Reads or clears enable for CPT(0)_VQ(0..15)_MISC_INT[SWERR]. */
        uint64_t hwerr                 : 1;  /**< [  5:  5](R/W1C/H) Reads or clears enable for CPT(0..1)_VQ(0..63)_MISC_INT[HWERR]. */
        uint64_t fault                 : 1;  /**< [  6:  6](R/W1C/H) Reads or clears enable for CPT(0..1)_VQ(0..63)_MISC_INT[FAULT]. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_vqx_misc_ena_w1c_s cn8; */
    struct bdk_cptx_vqx_misc_ena_w1c_cn81xx
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t swerr                 : 1;  /**< [  4:  4](R/W1C/H) Reads or clears enable for CPT(0)_VQ(0..15)_MISC_INT[SWERR]. */
        uint64_t nwrp                  : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for CPT(0)_VQ(0..15)_MISC_INT[NWRP]. */
        uint64_t irde                  : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for CPT(0)_VQ(0..15)_MISC_INT[IRDE]. */
        uint64_t dovf                  : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for CPT(0)_VQ(0..15)_MISC_INT[DOVF]. */
        uint64_t mbox                  : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for CPT(0)_VQ(0..15)_MISC_INT[MBOX]. */
#else /* Word 0 - Little Endian */
        uint64_t mbox                  : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for CPT(0)_VQ(0..15)_MISC_INT[MBOX]. */
        uint64_t dovf                  : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for CPT(0)_VQ(0..15)_MISC_INT[DOVF]. */
        uint64_t irde                  : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for CPT(0)_VQ(0..15)_MISC_INT[IRDE]. */
        uint64_t nwrp                  : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for CPT(0)_VQ(0..15)_MISC_INT[NWRP]. */
        uint64_t swerr                 : 1;  /**< [  4:  4](R/W1C/H) Reads or clears enable for CPT(0)_VQ(0..15)_MISC_INT[SWERR]. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } cn81xx;
    struct bdk_cptx_vqx_misc_ena_w1c_cn83xx
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t fault                 : 1;  /**< [  6:  6](R/W1C/H) Reads or clears enable for CPT(0..1)_VQ(0..63)_MISC_INT[FAULT]. */
        uint64_t hwerr                 : 1;  /**< [  5:  5](R/W1C/H) Reads or clears enable for CPT(0..1)_VQ(0..63)_MISC_INT[HWERR]. */
        uint64_t swerr                 : 1;  /**< [  4:  4](R/W1C/H) Reads or clears enable for CPT(0..1)_VQ(0..63)_MISC_INT[SWERR]. */
        uint64_t nwrp                  : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for CPT(0..1)_VQ(0..63)_MISC_INT[NWRP]. */
        uint64_t irde                  : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for CPT(0..1)_VQ(0..63)_MISC_INT[IRDE]. */
        uint64_t dovf                  : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for CPT(0..1)_VQ(0..63)_MISC_INT[DOVF]. */
        uint64_t mbox                  : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for CPT(0..1)_VQ(0..63)_MISC_INT[MBOX]. */
#else /* Word 0 - Little Endian */
        uint64_t mbox                  : 1;  /**< [  0:  0](R/W1C/H) Reads or clears enable for CPT(0..1)_VQ(0..63)_MISC_INT[MBOX]. */
        uint64_t dovf                  : 1;  /**< [  1:  1](R/W1C/H) Reads or clears enable for CPT(0..1)_VQ(0..63)_MISC_INT[DOVF]. */
        uint64_t irde                  : 1;  /**< [  2:  2](R/W1C/H) Reads or clears enable for CPT(0..1)_VQ(0..63)_MISC_INT[IRDE]. */
        uint64_t nwrp                  : 1;  /**< [  3:  3](R/W1C/H) Reads or clears enable for CPT(0..1)_VQ(0..63)_MISC_INT[NWRP]. */
        uint64_t swerr                 : 1;  /**< [  4:  4](R/W1C/H) Reads or clears enable for CPT(0..1)_VQ(0..63)_MISC_INT[SWERR]. */
        uint64_t hwerr                 : 1;  /**< [  5:  5](R/W1C/H) Reads or clears enable for CPT(0..1)_VQ(0..63)_MISC_INT[HWERR]. */
        uint64_t fault                 : 1;  /**< [  6:  6](R/W1C/H) Reads or clears enable for CPT(0..1)_VQ(0..63)_MISC_INT[FAULT]. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } cn83xx;
};
typedef union bdk_cptx_vqx_misc_ena_w1c bdk_cptx_vqx_misc_ena_w1c_t;

static inline uint64_t BDK_CPTX_VQX_MISC_ENA_W1C(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_VQX_MISC_ENA_W1C(unsigned long a, unsigned long b)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && ((a==0) && (b<=15)))
        return 0x872020000518ll + 0x1000000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0xf);
    if (bdk_is_model(OCTEONTX_CN83XX) && ((a<=1) && (b<=63)))
        return 0x872020000518ll + 0x1000000000ll * ((a) & 0x1) + 0x100000ll * ((b) & 0x3f);
    __bdk_csr_fatal("CPTX_VQX_MISC_ENA_W1C", 2, a, b, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_VQX_MISC_ENA_W1C(a,b) bdk_cptx_vqx_misc_ena_w1c_t
#define bustype_BDK_CPTX_VQX_MISC_ENA_W1C(a,b) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_VQX_MISC_ENA_W1C(a,b) "CPTX_VQX_MISC_ENA_W1C"
#define device_bar_BDK_CPTX_VQX_MISC_ENA_W1C(a,b) 0x0 /* VF_BAR0 */
#define busnum_BDK_CPTX_VQX_MISC_ENA_W1C(a,b) (a)
#define arguments_BDK_CPTX_VQX_MISC_ENA_W1C(a,b) (a),(b),-1,-1

/**
 * Register (NCB) cpt#_vq#_misc_ena_w1s
 *
 * CPT Queue Misc Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union bdk_cptx_vqx_misc_ena_w1s
{
    uint64_t u;
    struct bdk_cptx_vqx_misc_ena_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t fault                 : 1;  /**< [  6:  6](R/W1S/H) Reads or sets enable for CPT(0..1)_VQ(0..63)_MISC_INT[FAULT]. */
        uint64_t hwerr                 : 1;  /**< [  5:  5](R/W1S/H) Reads or sets enable for CPT(0..1)_VQ(0..63)_MISC_INT[HWERR]. */
        uint64_t swerr                 : 1;  /**< [  4:  4](R/W1S/H) Reads or sets enable for CPT(0)_VQ(0..15)_MISC_INT[SWERR]. */
        uint64_t nwrp                  : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for CPT(0)_VQ(0..15)_MISC_INT[NWRP]. */
        uint64_t irde                  : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for CPT(0)_VQ(0..15)_MISC_INT[IRDE]. */
        uint64_t dovf                  : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for CPT(0)_VQ(0..15)_MISC_INT[DOVF]. */
        uint64_t mbox                  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for CPT(0)_VQ(0..15)_MISC_INT[MBOX]. */
#else /* Word 0 - Little Endian */
        uint64_t mbox                  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for CPT(0)_VQ(0..15)_MISC_INT[MBOX]. */
        uint64_t dovf                  : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for CPT(0)_VQ(0..15)_MISC_INT[DOVF]. */
        uint64_t irde                  : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for CPT(0)_VQ(0..15)_MISC_INT[IRDE]. */
        uint64_t nwrp                  : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for CPT(0)_VQ(0..15)_MISC_INT[NWRP]. */
        uint64_t swerr                 : 1;  /**< [  4:  4](R/W1S/H) Reads or sets enable for CPT(0)_VQ(0..15)_MISC_INT[SWERR]. */
        uint64_t hwerr                 : 1;  /**< [  5:  5](R/W1S/H) Reads or sets enable for CPT(0..1)_VQ(0..63)_MISC_INT[HWERR]. */
        uint64_t fault                 : 1;  /**< [  6:  6](R/W1S/H) Reads or sets enable for CPT(0..1)_VQ(0..63)_MISC_INT[FAULT]. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_vqx_misc_ena_w1s_s cn8; */
    struct bdk_cptx_vqx_misc_ena_w1s_cn81xx
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t swerr                 : 1;  /**< [  4:  4](R/W1S/H) Reads or sets enable for CPT(0)_VQ(0..15)_MISC_INT[SWERR]. */
        uint64_t nwrp                  : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for CPT(0)_VQ(0..15)_MISC_INT[NWRP]. */
        uint64_t irde                  : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for CPT(0)_VQ(0..15)_MISC_INT[IRDE]. */
        uint64_t dovf                  : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for CPT(0)_VQ(0..15)_MISC_INT[DOVF]. */
        uint64_t mbox                  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for CPT(0)_VQ(0..15)_MISC_INT[MBOX]. */
#else /* Word 0 - Little Endian */
        uint64_t mbox                  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for CPT(0)_VQ(0..15)_MISC_INT[MBOX]. */
        uint64_t dovf                  : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for CPT(0)_VQ(0..15)_MISC_INT[DOVF]. */
        uint64_t irde                  : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for CPT(0)_VQ(0..15)_MISC_INT[IRDE]. */
        uint64_t nwrp                  : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for CPT(0)_VQ(0..15)_MISC_INT[NWRP]. */
        uint64_t swerr                 : 1;  /**< [  4:  4](R/W1S/H) Reads or sets enable for CPT(0)_VQ(0..15)_MISC_INT[SWERR]. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } cn81xx;
    struct bdk_cptx_vqx_misc_ena_w1s_cn83xx
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t fault                 : 1;  /**< [  6:  6](R/W1S/H) Reads or sets enable for CPT(0..1)_VQ(0..63)_MISC_INT[FAULT]. */
        uint64_t hwerr                 : 1;  /**< [  5:  5](R/W1S/H) Reads or sets enable for CPT(0..1)_VQ(0..63)_MISC_INT[HWERR]. */
        uint64_t swerr                 : 1;  /**< [  4:  4](R/W1S/H) Reads or sets enable for CPT(0..1)_VQ(0..63)_MISC_INT[SWERR]. */
        uint64_t nwrp                  : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for CPT(0..1)_VQ(0..63)_MISC_INT[NWRP]. */
        uint64_t irde                  : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for CPT(0..1)_VQ(0..63)_MISC_INT[IRDE]. */
        uint64_t dovf                  : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for CPT(0..1)_VQ(0..63)_MISC_INT[DOVF]. */
        uint64_t mbox                  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for CPT(0..1)_VQ(0..63)_MISC_INT[MBOX]. */
#else /* Word 0 - Little Endian */
        uint64_t mbox                  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets enable for CPT(0..1)_VQ(0..63)_MISC_INT[MBOX]. */
        uint64_t dovf                  : 1;  /**< [  1:  1](R/W1S/H) Reads or sets enable for CPT(0..1)_VQ(0..63)_MISC_INT[DOVF]. */
        uint64_t irde                  : 1;  /**< [  2:  2](R/W1S/H) Reads or sets enable for CPT(0..1)_VQ(0..63)_MISC_INT[IRDE]. */
        uint64_t nwrp                  : 1;  /**< [  3:  3](R/W1S/H) Reads or sets enable for CPT(0..1)_VQ(0..63)_MISC_INT[NWRP]. */
        uint64_t swerr                 : 1;  /**< [  4:  4](R/W1S/H) Reads or sets enable for CPT(0..1)_VQ(0..63)_MISC_INT[SWERR]. */
        uint64_t hwerr                 : 1;  /**< [  5:  5](R/W1S/H) Reads or sets enable for CPT(0..1)_VQ(0..63)_MISC_INT[HWERR]. */
        uint64_t fault                 : 1;  /**< [  6:  6](R/W1S/H) Reads or sets enable for CPT(0..1)_VQ(0..63)_MISC_INT[FAULT]. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } cn83xx;
};
typedef union bdk_cptx_vqx_misc_ena_w1s bdk_cptx_vqx_misc_ena_w1s_t;

static inline uint64_t BDK_CPTX_VQX_MISC_ENA_W1S(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_VQX_MISC_ENA_W1S(unsigned long a, unsigned long b)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && ((a==0) && (b<=15)))
        return 0x872020000510ll + 0x1000000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0xf);
    if (bdk_is_model(OCTEONTX_CN83XX) && ((a<=1) && (b<=63)))
        return 0x872020000510ll + 0x1000000000ll * ((a) & 0x1) + 0x100000ll * ((b) & 0x3f);
    __bdk_csr_fatal("CPTX_VQX_MISC_ENA_W1S", 2, a, b, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_VQX_MISC_ENA_W1S(a,b) bdk_cptx_vqx_misc_ena_w1s_t
#define bustype_BDK_CPTX_VQX_MISC_ENA_W1S(a,b) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_VQX_MISC_ENA_W1S(a,b) "CPTX_VQX_MISC_ENA_W1S"
#define device_bar_BDK_CPTX_VQX_MISC_ENA_W1S(a,b) 0x0 /* VF_BAR0 */
#define busnum_BDK_CPTX_VQX_MISC_ENA_W1S(a,b) (a)
#define arguments_BDK_CPTX_VQX_MISC_ENA_W1S(a,b) (a),(b),-1,-1

/**
 * Register (NCB) cpt#_vq#_misc_int
 *
 * CPT Queue Misc Interrupt Register
 * These registers contain the per-queue miscellaneous interrupts.
 */
union bdk_cptx_vqx_misc_int
{
    uint64_t u;
    struct bdk_cptx_vqx_misc_int_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t fault                 : 1;  /**< [  6:  6](R/W1C/H) Translation fault detected. */
        uint64_t hwerr                 : 1;  /**< [  5:  5](R/W1C/H) Hardware error from engines. */
        uint64_t swerr                 : 1;  /**< [  4:  4](R/W1C/H) Software error from engines. */
        uint64_t nwrp                  : 1;  /**< [  3:  3](R/W1C/H) NCB result write response error. */
        uint64_t irde                  : 1;  /**< [  2:  2](R/W1C/H) Instruction NCB read response error. */
        uint64_t dovf                  : 1;  /**< [  1:  1](R/W1C/H) Doorbell overflow. */
        uint64_t mbox                  : 1;  /**< [  0:  0](R/W1C/H) PF to VF mailbox interrupt. Set when CPT()_VF()_PF_MBOX(0)
                                                                 is written. */
#else /* Word 0 - Little Endian */
        uint64_t mbox                  : 1;  /**< [  0:  0](R/W1C/H) PF to VF mailbox interrupt. Set when CPT()_VF()_PF_MBOX(0)
                                                                 is written. */
        uint64_t dovf                  : 1;  /**< [  1:  1](R/W1C/H) Doorbell overflow. */
        uint64_t irde                  : 1;  /**< [  2:  2](R/W1C/H) Instruction NCB read response error. */
        uint64_t nwrp                  : 1;  /**< [  3:  3](R/W1C/H) NCB result write response error. */
        uint64_t swerr                 : 1;  /**< [  4:  4](R/W1C/H) Software error from engines. */
        uint64_t hwerr                 : 1;  /**< [  5:  5](R/W1C/H) Hardware error from engines. */
        uint64_t fault                 : 1;  /**< [  6:  6](R/W1C/H) Translation fault detected. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_vqx_misc_int_s cn8; */
    struct bdk_cptx_vqx_misc_int_cn81xx
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t swerr                 : 1;  /**< [  4:  4](R/W1C/H) Software error from engines. */
        uint64_t nwrp                  : 1;  /**< [  3:  3](R/W1C/H) NCB result write response error. */
        uint64_t irde                  : 1;  /**< [  2:  2](R/W1C/H) Instruction NCB read response error. */
        uint64_t dovf                  : 1;  /**< [  1:  1](R/W1C/H) Doorbell overflow. */
        uint64_t mbox                  : 1;  /**< [  0:  0](R/W1C/H) PF to VF mailbox interrupt. Set when CPT()_VF()_PF_MBOX(0)
                                                                 is written. */
#else /* Word 0 - Little Endian */
        uint64_t mbox                  : 1;  /**< [  0:  0](R/W1C/H) PF to VF mailbox interrupt. Set when CPT()_VF()_PF_MBOX(0)
                                                                 is written. */
        uint64_t dovf                  : 1;  /**< [  1:  1](R/W1C/H) Doorbell overflow. */
        uint64_t irde                  : 1;  /**< [  2:  2](R/W1C/H) Instruction NCB read response error. */
        uint64_t nwrp                  : 1;  /**< [  3:  3](R/W1C/H) NCB result write response error. */
        uint64_t swerr                 : 1;  /**< [  4:  4](R/W1C/H) Software error from engines. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } cn81xx;
    /* struct bdk_cptx_vqx_misc_int_s cn83xx; */
};
typedef union bdk_cptx_vqx_misc_int bdk_cptx_vqx_misc_int_t;

static inline uint64_t BDK_CPTX_VQX_MISC_INT(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_VQX_MISC_INT(unsigned long a, unsigned long b)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && ((a==0) && (b<=15)))
        return 0x872020000500ll + 0x1000000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0xf);
    if (bdk_is_model(OCTEONTX_CN83XX) && ((a<=1) && (b<=63)))
        return 0x872020000500ll + 0x1000000000ll * ((a) & 0x1) + 0x100000ll * ((b) & 0x3f);
    __bdk_csr_fatal("CPTX_VQX_MISC_INT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_VQX_MISC_INT(a,b) bdk_cptx_vqx_misc_int_t
#define bustype_BDK_CPTX_VQX_MISC_INT(a,b) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_VQX_MISC_INT(a,b) "CPTX_VQX_MISC_INT"
#define device_bar_BDK_CPTX_VQX_MISC_INT(a,b) 0x0 /* VF_BAR0 */
#define busnum_BDK_CPTX_VQX_MISC_INT(a,b) (a)
#define arguments_BDK_CPTX_VQX_MISC_INT(a,b) (a),(b),-1,-1

/**
 * Register (NCB) cpt#_vq#_misc_int_w1s
 *
 * CPT Queue Misc Interrupt Set Register
 * This register sets interrupt bits.
 */
union bdk_cptx_vqx_misc_int_w1s
{
    uint64_t u;
    struct bdk_cptx_vqx_misc_int_w1s_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t fault                 : 1;  /**< [  6:  6](R/W1S/H) Reads or sets CPT(0..1)_VQ(0..63)_MISC_INT[FAULT]. */
        uint64_t hwerr                 : 1;  /**< [  5:  5](R/W1S/H) Reads or sets CPT(0..1)_VQ(0..63)_MISC_INT[HWERR]. */
        uint64_t swerr                 : 1;  /**< [  4:  4](R/W1S/H) Reads or sets CPT(0)_VQ(0..15)_MISC_INT[SWERR]. */
        uint64_t nwrp                  : 1;  /**< [  3:  3](R/W1S/H) Reads or sets CPT(0)_VQ(0..15)_MISC_INT[NWRP]. */
        uint64_t irde                  : 1;  /**< [  2:  2](R/W1S/H) Reads or sets CPT(0)_VQ(0..15)_MISC_INT[IRDE]. */
        uint64_t dovf                  : 1;  /**< [  1:  1](R/W1S/H) Reads or sets CPT(0)_VQ(0..15)_MISC_INT[DOVF]. */
        uint64_t mbox                  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets CPT(0)_VQ(0..15)_MISC_INT[MBOX]. */
#else /* Word 0 - Little Endian */
        uint64_t mbox                  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets CPT(0)_VQ(0..15)_MISC_INT[MBOX]. */
        uint64_t dovf                  : 1;  /**< [  1:  1](R/W1S/H) Reads or sets CPT(0)_VQ(0..15)_MISC_INT[DOVF]. */
        uint64_t irde                  : 1;  /**< [  2:  2](R/W1S/H) Reads or sets CPT(0)_VQ(0..15)_MISC_INT[IRDE]. */
        uint64_t nwrp                  : 1;  /**< [  3:  3](R/W1S/H) Reads or sets CPT(0)_VQ(0..15)_MISC_INT[NWRP]. */
        uint64_t swerr                 : 1;  /**< [  4:  4](R/W1S/H) Reads or sets CPT(0)_VQ(0..15)_MISC_INT[SWERR]. */
        uint64_t hwerr                 : 1;  /**< [  5:  5](R/W1S/H) Reads or sets CPT(0..1)_VQ(0..63)_MISC_INT[HWERR]. */
        uint64_t fault                 : 1;  /**< [  6:  6](R/W1S/H) Reads or sets CPT(0..1)_VQ(0..63)_MISC_INT[FAULT]. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_vqx_misc_int_w1s_s cn8; */
    struct bdk_cptx_vqx_misc_int_w1s_cn81xx
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_5_63         : 59;
        uint64_t swerr                 : 1;  /**< [  4:  4](R/W1S/H) Reads or sets CPT(0)_VQ(0..15)_MISC_INT[SWERR]. */
        uint64_t nwrp                  : 1;  /**< [  3:  3](R/W1S/H) Reads or sets CPT(0)_VQ(0..15)_MISC_INT[NWRP]. */
        uint64_t irde                  : 1;  /**< [  2:  2](R/W1S/H) Reads or sets CPT(0)_VQ(0..15)_MISC_INT[IRDE]. */
        uint64_t dovf                  : 1;  /**< [  1:  1](R/W1S/H) Reads or sets CPT(0)_VQ(0..15)_MISC_INT[DOVF]. */
        uint64_t mbox                  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets CPT(0)_VQ(0..15)_MISC_INT[MBOX]. */
#else /* Word 0 - Little Endian */
        uint64_t mbox                  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets CPT(0)_VQ(0..15)_MISC_INT[MBOX]. */
        uint64_t dovf                  : 1;  /**< [  1:  1](R/W1S/H) Reads or sets CPT(0)_VQ(0..15)_MISC_INT[DOVF]. */
        uint64_t irde                  : 1;  /**< [  2:  2](R/W1S/H) Reads or sets CPT(0)_VQ(0..15)_MISC_INT[IRDE]. */
        uint64_t nwrp                  : 1;  /**< [  3:  3](R/W1S/H) Reads or sets CPT(0)_VQ(0..15)_MISC_INT[NWRP]. */
        uint64_t swerr                 : 1;  /**< [  4:  4](R/W1S/H) Reads or sets CPT(0)_VQ(0..15)_MISC_INT[SWERR]. */
        uint64_t reserved_5_63         : 59;
#endif /* Word 0 - End */
    } cn81xx;
    struct bdk_cptx_vqx_misc_int_w1s_cn83xx
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_7_63         : 57;
        uint64_t fault                 : 1;  /**< [  6:  6](R/W1S/H) Reads or sets CPT(0..1)_VQ(0..63)_MISC_INT[FAULT]. */
        uint64_t hwerr                 : 1;  /**< [  5:  5](R/W1S/H) Reads or sets CPT(0..1)_VQ(0..63)_MISC_INT[HWERR]. */
        uint64_t swerr                 : 1;  /**< [  4:  4](R/W1S/H) Reads or sets CPT(0..1)_VQ(0..63)_MISC_INT[SWERR]. */
        uint64_t nwrp                  : 1;  /**< [  3:  3](R/W1S/H) Reads or sets CPT(0..1)_VQ(0..63)_MISC_INT[NWRP]. */
        uint64_t irde                  : 1;  /**< [  2:  2](R/W1S/H) Reads or sets CPT(0..1)_VQ(0..63)_MISC_INT[IRDE]. */
        uint64_t dovf                  : 1;  /**< [  1:  1](R/W1S/H) Reads or sets CPT(0..1)_VQ(0..63)_MISC_INT[DOVF]. */
        uint64_t mbox                  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets CPT(0..1)_VQ(0..63)_MISC_INT[MBOX]. */
#else /* Word 0 - Little Endian */
        uint64_t mbox                  : 1;  /**< [  0:  0](R/W1S/H) Reads or sets CPT(0..1)_VQ(0..63)_MISC_INT[MBOX]. */
        uint64_t dovf                  : 1;  /**< [  1:  1](R/W1S/H) Reads or sets CPT(0..1)_VQ(0..63)_MISC_INT[DOVF]. */
        uint64_t irde                  : 1;  /**< [  2:  2](R/W1S/H) Reads or sets CPT(0..1)_VQ(0..63)_MISC_INT[IRDE]. */
        uint64_t nwrp                  : 1;  /**< [  3:  3](R/W1S/H) Reads or sets CPT(0..1)_VQ(0..63)_MISC_INT[NWRP]. */
        uint64_t swerr                 : 1;  /**< [  4:  4](R/W1S/H) Reads or sets CPT(0..1)_VQ(0..63)_MISC_INT[SWERR]. */
        uint64_t hwerr                 : 1;  /**< [  5:  5](R/W1S/H) Reads or sets CPT(0..1)_VQ(0..63)_MISC_INT[HWERR]. */
        uint64_t fault                 : 1;  /**< [  6:  6](R/W1S/H) Reads or sets CPT(0..1)_VQ(0..63)_MISC_INT[FAULT]. */
        uint64_t reserved_7_63         : 57;
#endif /* Word 0 - End */
    } cn83xx;
};
typedef union bdk_cptx_vqx_misc_int_w1s bdk_cptx_vqx_misc_int_w1s_t;

static inline uint64_t BDK_CPTX_VQX_MISC_INT_W1S(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_VQX_MISC_INT_W1S(unsigned long a, unsigned long b)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && ((a==0) && (b<=15)))
        return 0x872020000508ll + 0x1000000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0xf);
    if (bdk_is_model(OCTEONTX_CN83XX) && ((a<=1) && (b<=63)))
        return 0x872020000508ll + 0x1000000000ll * ((a) & 0x1) + 0x100000ll * ((b) & 0x3f);
    __bdk_csr_fatal("CPTX_VQX_MISC_INT_W1S", 2, a, b, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_VQX_MISC_INT_W1S(a,b) bdk_cptx_vqx_misc_int_w1s_t
#define bustype_BDK_CPTX_VQX_MISC_INT_W1S(a,b) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_VQX_MISC_INT_W1S(a,b) "CPTX_VQX_MISC_INT_W1S"
#define device_bar_BDK_CPTX_VQX_MISC_INT_W1S(a,b) 0x0 /* VF_BAR0 */
#define busnum_BDK_CPTX_VQX_MISC_INT_W1S(a,b) (a)
#define arguments_BDK_CPTX_VQX_MISC_INT_W1S(a,b) (a),(b),-1,-1

/**
 * Register (NCB) cpt#_vq#_saddr
 *
 * CPT Queue Starting Buffer Address Registers
 * These registers set the instruction buffer starting address.
 */
union bdk_cptx_vqx_saddr
{
    uint64_t u;
    struct bdk_cptx_vqx_saddr_s
    {
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
        uint64_t reserved_49_63        : 15;
        uint64_t ptr                   : 43; /**< [ 48:  6](R/W/H) Instruction buffer IOVA \<48:6\> (64-byte aligned). When written, it is the initial
                                                                 buffer starting address; when read, it is the next read pointer to be requested from L2C.
                                                                 The PTR field is overwritten with the next pointer each time that the command buffer
                                                                 segment is exhausted. New commands will then be read from the newly specified command
                                                                 buffer pointer. */
        uint64_t reserved_0_5          : 6;
#else /* Word 0 - Little Endian */
        uint64_t reserved_0_5          : 6;
        uint64_t ptr                   : 43; /**< [ 48:  6](R/W/H) Instruction buffer IOVA \<48:6\> (64-byte aligned). When written, it is the initial
                                                                 buffer starting address; when read, it is the next read pointer to be requested from L2C.
                                                                 The PTR field is overwritten with the next pointer each time that the command buffer
                                                                 segment is exhausted. New commands will then be read from the newly specified command
                                                                 buffer pointer. */
        uint64_t reserved_49_63        : 15;
#endif /* Word 0 - End */
    } s;
    /* struct bdk_cptx_vqx_saddr_s cn; */
};
typedef union bdk_cptx_vqx_saddr bdk_cptx_vqx_saddr_t;

static inline uint64_t BDK_CPTX_VQX_SADDR(unsigned long a, unsigned long b) __attribute__ ((pure, always_inline));
static inline uint64_t BDK_CPTX_VQX_SADDR(unsigned long a, unsigned long b)
{
    if (bdk_is_model(OCTEONTX_CN81XX) && ((a==0) && (b<=15)))
        return 0x872020000200ll + 0x1000000000ll * ((a) & 0x0) + 0x100000ll * ((b) & 0xf);
    if (bdk_is_model(OCTEONTX_CN83XX) && ((a<=1) && (b<=63)))
        return 0x872020000200ll + 0x1000000000ll * ((a) & 0x1) + 0x100000ll * ((b) & 0x3f);
    __bdk_csr_fatal("CPTX_VQX_SADDR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_BDK_CPTX_VQX_SADDR(a,b) bdk_cptx_vqx_saddr_t
#define bustype_BDK_CPTX_VQX_SADDR(a,b) BDK_CSR_TYPE_NCB
#define basename_BDK_CPTX_VQX_SADDR(a,b) "CPTX_VQX_SADDR"
#define device_bar_BDK_CPTX_VQX_SADDR(a,b) 0x0 /* VF_BAR0 */
#define busnum_BDK_CPTX_VQX_SADDR(a,b) (a)
#define arguments_BDK_CPTX_VQX_SADDR(a,b) (a),(b),-1,-1

#endif /* __BDK_CSRS_CPT_H__ */
