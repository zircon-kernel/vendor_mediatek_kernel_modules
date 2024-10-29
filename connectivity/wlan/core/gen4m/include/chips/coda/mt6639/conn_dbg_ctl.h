/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2020 MediaTek Inc.
 */

#ifndef __CONN_DBG_CTL_REGS_H__
#define __CONN_DBG_CTL_REGS_H__

#include "hal_common.h"

#ifdef __cplusplus
extern "C" {
#endif

#define CONN_DBG_CTL_BASE \
	(0x18023000 + CONN_INFRA_REMAPPING_OFFSET)

#define CONN_DBG_CTL_CONN_INFRA_BUS_CLK_DETECT_ADDR \
	(CONN_DBG_CTL_BASE + 0x000)
#define CONN_DBG_CTL_CONN_INFRA_BUS_TIMEOUT_IRQ_ADDR \
	(CONN_DBG_CTL_BASE + 0x400)
#define CONN_DBG_CTL_WF_MCU_DBGOUT_SEL_ADDR \
	(CONN_DBG_CTL_BASE + 0x604)
#define CONN_DBG_CTL_WF_MCU_GPR_BUS_DBGOUT_LOG_ADDR \
	(CONN_DBG_CTL_BASE + 0x608)
#define CONN_DBG_CTL_WF_MCU_DBG_PC_LOG_SEL_ADDR \
	(CONN_DBG_CTL_BASE + 0x60C)
#define CONN_DBG_CTL_WF_MCU_DBG_PC_LOG_ADDR \
	(CONN_DBG_CTL_BASE + 0x610)
#define CONN_DBG_CTL_WF_MCU_DBG_GPR_LOG_SEL_ADDR \
	(CONN_DBG_CTL_BASE + 0x614)
#define CONN_DBG_CTL_WF_CORE_PC_INDEX_FR_HIF_ADDR \
	(CONN_DBG_CTL_BASE + 0x620)
#define CONN_DBG_CTL_WF_MCUSYS_INFRA_VDNR_GEN_DEBUG_CTRL_AO_DEBUGSYS_CTRL_ADDR \
	(CONN_DBG_CTL_BASE + 0x628)
#define CONN_DBG_CTL_WF_MCUSYS_INFRA_VDNR_GEN_DEBUG_CTRL_AO_BUS_TIMEOUT_IRQ_ADDR \
	(CONN_DBG_CTL_BASE + 0x62C)
#define CONN_DBG_CTL_WF_VON_DEBUG_OUT_ADDR \
	(CONN_DBG_CTL_BASE + 0x638)


#define CONN_DBG_CTL_CONN_INFRA_BUS_CLK_DETECT_LP_OSC_CK_DETECT_ADDR \
	CONN_DBG_CTL_CONN_INFRA_BUS_CLK_DETECT_ADDR
#define CONN_DBG_CTL_CONN_INFRA_BUS_CLK_DETECT_LP_OSC_CK_DETECT_MASK \
	0x00000008
#define CONN_DBG_CTL_CONN_INFRA_BUS_CLK_DETECT_LP_OSC_CK_DETECT_SHFT \
	3
#define CONN_DBG_CTL_CONN_INFRA_BUS_CLK_DETECT_OSC_CK_DETECT_ADDR \
	CONN_DBG_CTL_CONN_INFRA_BUS_CLK_DETECT_ADDR
#define CONN_DBG_CTL_CONN_INFRA_BUS_CLK_DETECT_OSC_CK_DETECT_MASK \
	0x00000004
#define CONN_DBG_CTL_CONN_INFRA_BUS_CLK_DETECT_OSC_CK_DETECT_SHFT \
	2
#define CONN_DBG_CTL_CONN_INFRA_BUS_CLK_DETECT_CONN_INFRA_HCLK_FR_DETECT_ADDR \
	CONN_DBG_CTL_CONN_INFRA_BUS_CLK_DETECT_ADDR
#define CONN_DBG_CTL_CONN_INFRA_BUS_CLK_DETECT_CONN_INFRA_HCLK_FR_DETECT_MASK \
	0x00000002
#define CONN_DBG_CTL_CONN_INFRA_BUS_CLK_DETECT_CONN_INFRA_HCLK_FR_DETECT_SHFT \
	1
#define CONN_DBG_CTL_CONN_INFRA_BUS_CLK_DETECT_AP_CLK_DETECT_BUS_CLR_PULSE_ADDR \
	CONN_DBG_CTL_CONN_INFRA_BUS_CLK_DETECT_ADDR
#define CONN_DBG_CTL_CONN_INFRA_BUS_CLK_DETECT_AP_CLK_DETECT_BUS_CLR_PULSE_MASK \
	0x00000001
#define CONN_DBG_CTL_CONN_INFRA_BUS_CLK_DETECT_AP_CLK_DETECT_BUS_CLR_PULSE_SHFT \
	0

#define CONN_DBG_CTL_CONN_INFRA_BUS_TIMEOUT_IRQ_CONN_INFRA_BUS_TIMEOUT_IRQ_ADDR \
	CONN_DBG_CTL_CONN_INFRA_BUS_TIMEOUT_IRQ_ADDR
#define CONN_DBG_CTL_CONN_INFRA_BUS_TIMEOUT_IRQ_CONN_INFRA_BUS_TIMEOUT_IRQ_MASK \
	0xFFFFFFFF
#define CONN_DBG_CTL_CONN_INFRA_BUS_TIMEOUT_IRQ_CONN_INFRA_BUS_TIMEOUT_IRQ_SHFT \
	0

#define CONN_DBG_CTL_WF_MCU_DBGOUT_SEL_WF_MCU_DBGOUT_SEL_ADDR \
	CONN_DBG_CTL_WF_MCU_DBGOUT_SEL_ADDR
#define CONN_DBG_CTL_WF_MCU_DBGOUT_SEL_WF_MCU_DBGOUT_SEL_MASK \
	0x00000007
#define CONN_DBG_CTL_WF_MCU_DBGOUT_SEL_WF_MCU_DBGOUT_SEL_SHFT \
	0

#define CONN_DBG_CTL_WF_MCU_GPR_BUS_DBGOUT_LOG_WF_MCU_GPR_BUS_DBGOUT_LOG_ADDR \
	CONN_DBG_CTL_WF_MCU_GPR_BUS_DBGOUT_LOG_ADDR
#define CONN_DBG_CTL_WF_MCU_GPR_BUS_DBGOUT_LOG_WF_MCU_GPR_BUS_DBGOUT_LOG_MASK \
	0xFFFFFFFF
#define CONN_DBG_CTL_WF_MCU_GPR_BUS_DBGOUT_LOG_WF_MCU_GPR_BUS_DBGOUT_LOG_SHFT \
	0

#define CONN_DBG_CTL_WF_MCU_DBG_PC_LOG_SEL_WF_MCU_DBG_PC_LOG_SEL_ADDR \
	CONN_DBG_CTL_WF_MCU_DBG_PC_LOG_SEL_ADDR
#define CONN_DBG_CTL_WF_MCU_DBG_PC_LOG_SEL_WF_MCU_DBG_PC_LOG_SEL_MASK \
	0x0000003F
#define CONN_DBG_CTL_WF_MCU_DBG_PC_LOG_SEL_WF_MCU_DBG_PC_LOG_SEL_SHFT \
	0

#define CONN_DBG_CTL_WF_MCU_DBG_PC_LOG_WF_MCU_DBG_PC_LOG_ADDR \
	CONN_DBG_CTL_WF_MCU_DBG_PC_LOG_ADDR
#define CONN_DBG_CTL_WF_MCU_DBG_PC_LOG_WF_MCU_DBG_PC_LOG_MASK \
	0xFFFFFFFF
#define CONN_DBG_CTL_WF_MCU_DBG_PC_LOG_WF_MCU_DBG_PC_LOG_SHFT \
	0

#define CONN_DBG_CTL_WF_MCU_DBG_GPR_LOG_SEL_WF_MCU_DBG_GPR_LOG_SEL_ADDR \
	CONN_DBG_CTL_WF_MCU_DBG_GPR_LOG_SEL_ADDR
#define CONN_DBG_CTL_WF_MCU_DBG_GPR_LOG_SEL_WF_MCU_DBG_GPR_LOG_SEL_MASK \
	0x0000003F
#define CONN_DBG_CTL_WF_MCU_DBG_GPR_LOG_SEL_WF_MCU_DBG_GPR_LOG_SEL_SHFT \
	0

#define CONN_DBG_CTL_WF_CORE_PC_INDEX_FR_HIF_WF_CORE_PC_INDEX_FR_HIF_ADDR \
	CONN_DBG_CTL_WF_CORE_PC_INDEX_FR_HIF_ADDR
#define CONN_DBG_CTL_WF_CORE_PC_INDEX_FR_HIF_WF_CORE_PC_INDEX_FR_HIF_MASK \
	0x00001FFF
#define CONN_DBG_CTL_WF_CORE_PC_INDEX_FR_HIF_WF_CORE_PC_INDEX_FR_HIF_SHFT \
	0

#define CONN_DBG_CTL_WF_MCUSYS_INFRA_VDNR_GEN_DEBUG_CTRL_AO_DEBUGSYS_CTRL_WF_MCUSYS_INFRA_VDNR_GEN_DEBUG_CTRL_AO_DEBUGSYS_CTRL_ADDR \
	CONN_DBG_CTL_WF_MCUSYS_INFRA_VDNR_GEN_DEBUG_CTRL_AO_DEBUGSYS_CTRL_ADDR
#define CONN_DBG_CTL_WF_MCUSYS_INFRA_VDNR_GEN_DEBUG_CTRL_AO_DEBUGSYS_CTRL_WF_MCUSYS_INFRA_VDNR_GEN_DEBUG_CTRL_AO_DEBUGSYS_CTRL_MASK \
	0xFFFFFFFF
#define CONN_DBG_CTL_WF_MCUSYS_INFRA_VDNR_GEN_DEBUG_CTRL_AO_DEBUGSYS_CTRL_WF_MCUSYS_INFRA_VDNR_GEN_DEBUG_CTRL_AO_DEBUGSYS_CTRL_SHFT \
	0

#define CONN_DBG_CTL_WF_MCUSYS_INFRA_VDNR_GEN_DEBUG_CTRL_AO_BUS_TIMEOUT_IRQ_WF_MCUSYS_INFRA_VDNR_GEN_DEBUG_CTRL_AO_BUS_TIMEOUT_IRQ_ADDR \
	CONN_DBG_CTL_WF_MCUSYS_INFRA_VDNR_GEN_DEBUG_CTRL_AO_BUS_TIMEOUT_IRQ_ADDR
#define CONN_DBG_CTL_WF_MCUSYS_INFRA_VDNR_GEN_DEBUG_CTRL_AO_BUS_TIMEOUT_IRQ_WF_MCUSYS_INFRA_VDNR_GEN_DEBUG_CTR_AO_BUS_TIMEOUT_IRQ_MASK \
	0x00000001
#define CONN_DBG_CTL_WF_MCUSYS_INFRA_VDNR_GEN_DEBUG_CTRL_AO_BUS_TIMEOUT_IRQ_WF_MCUSYS_INFRA_VDNR_GEN_DEBUG_CTRL_AO_BUS_TIMEOUT_IRQ_SHFT \
	0

#define CONN_DBG_CTL_WF_VON_DEBUG_OUT_WF_VON_DEBUG_OUT_ADDR \
	CONN_DBG_CTL_WF_VON_DEBUG_OUT_ADDR
#define CONN_DBG_CTL_WF_VON_DEBUG_OUT_WF_VON_DEBUG_OUT_MASK \
	0xFFFFFFFF
#define CONN_DBG_CTL_WF_VON_DEBUG_OUT_WF_VON_DEBUG_OUT_SHFT \
	0

#ifdef __cplusplus
}
#endif

#endif