/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2021 MediaTek Inc.
 */

#ifndef __CONN_HOST_CSR_TOP_REGS_H__
#define __CONN_HOST_CSR_TOP_REGS_H__

#include "hal_common.h"

#ifdef __cplusplus
extern "C" {
#endif

#define CONN_HOST_CSR_TOP_BASE \
	(0x18060000 + CONN_INFRA_REMAPPING_OFFSET)

#define CONN_HOST_CSR_TOP_CONN_INFRA_WAKEPU_TOP_ADDR \
	(CONN_HOST_CSR_TOP_BASE + 0x1A0)
#define CONN_HOST_CSR_TOP_WF_ON_MONFLG_EN_FR_HIF_ADDR \
	(CONN_HOST_CSR_TOP_BASE + 0xB00)
#define CONN_HOST_CSR_TOP_WF_ON_MONFLG_SEL_FR_HIF_ADDR \
	(CONN_HOST_CSR_TOP_BASE + 0xB04)
#define CONN_HOST_CSR_TOP_WF_ON_MONFLG_OUT_ADDR \
	(CONN_HOST_CSR_TOP_BASE + 0xB10)
#define CONN_HOST_CSR_TOP_ADDR_WF_VON_MONFLG_EN_FR_HIF_ADDR \
	(CONN_HOST_CSR_TOP_BASE + 0xB18)
#define CONN_HOST_CSR_TOP_ADDR_WF_VON_MONFLG_SEL_FR_HIF_ADDR \
	(CONN_HOST_CSR_TOP_BASE + 0xB1C)


#define CONN_HOST_CSR_TOP_CONN_INFRA_WAKEPU_TOP_CONN_INFRA_WAKEPU_TOP_ADDR \
	CONN_HOST_CSR_TOP_CONN_INFRA_WAKEPU_TOP_ADDR
#define CONN_HOST_CSR_TOP_CONN_INFRA_WAKEPU_TOP_CONN_INFRA_WAKEPU_TOP_MASK \
	0x00000001
#define CONN_HOST_CSR_TOP_CONN_INFRA_WAKEPU_TOP_CONN_INFRA_WAKEPU_TOP_SHFT \
	0

#define CONN_HOST_CSR_TOP_WF_ON_MONFLG_EN_FR_HIF_WF_ON_MONFLG_EN_FR_HIF_ADDR \
	CONN_HOST_CSR_TOP_WF_ON_MONFLG_EN_FR_HIF_ADDR
#define CONN_HOST_CSR_TOP_WF_ON_MONFLG_EN_FR_HIF_WF_ON_MONFLG_EN_FR_HIF_MASK \
	0x00000001
#define CONN_HOST_CSR_TOP_WF_ON_MONFLG_EN_FR_HIF_WF_ON_MONFLG_EN_FR_HIF_SHFT \
	0

#define CONN_HOST_CSR_TOP_WF_ON_MONFLG_SEL_FR_HIF_WF_ON_MONFLG_SEL_FR_HIF_ADDR \
	CONN_HOST_CSR_TOP_WF_ON_MONFLG_SEL_FR_HIF_ADDR
#define CONN_HOST_CSR_TOP_WF_ON_MONFLG_SEL_FR_HIF_WF_ON_MONFLG_SEL_FR_HIF_MASK \
	0x0000001F
#define CONN_HOST_CSR_TOP_WF_ON_MONFLG_SEL_FR_HIF_WF_ON_MONFLG_SEL_FR_HIF_SHFT \
	0

#define CONN_HOST_CSR_TOP_WF_ON_MONFLG_OUT_WF_ON_MONFLG_OUT_ADDR \
	CONN_HOST_CSR_TOP_WF_ON_MONFLG_OUT_ADDR
#define CONN_HOST_CSR_TOP_WF_ON_MONFLG_OUT_WF_ON_MONFLG_OUT_MASK \
	0xFFFFFFFF
#define CONN_HOST_CSR_TOP_WF_ON_MONFLG_OUT_WF_ON_MONFLG_OUT_SHFT \
	0

#define CONN_HOST_CSR_TOP_ADDR_WF_VON_MONFLG_EN_FR_HIF_ADDR_WF_VON_MONFLG_EN_FR_HIF_ADDR \
	CONN_HOST_CSR_TOP_ADDR_WF_VON_MONFLG_EN_FR_HIF_ADDR
#define CONN_HOST_CSR_TOP_ADDR_WF_VON_MONFLG_EN_FR_HIF_ADDR_WF_VON_MONFLG_EN_FR_HIF_MASK \
	0x00000001
#define CONN_HOST_CSR_TOP_ADDR_WF_VON_MONFLG_EN_FR_HIF_ADDR_WF_VON_MONFLG_EN_FR_HIF_SHFT \
	0

#define CONN_HOST_CSR_TOP_ADDR_WF_VON_MONFLG_SEL_FR_HIF_ADDR_WF_VON_MONFLG_SEL_FR_HIF_ADDR \
	CONN_HOST_CSR_TOP_ADDR_WF_VON_MONFLG_SEL_FR_HIF_ADDR
#define CONN_HOST_CSR_TOP_ADDR_WF_VON_MONFLG_SEL_FR_HIF_ADDR_WF_VON_MONFLG_SEL_FR_HIF_MASK \
	0x0000001F
#define CONN_HOST_CSR_TOP_ADDR_WF_VON_MONFLG_SEL_FR_HIF_ADDR_WF_VON_MONFLG_SEL_FR_HIF_SHFT \
	0

#ifdef __cplusplus
}
#endif

#endif