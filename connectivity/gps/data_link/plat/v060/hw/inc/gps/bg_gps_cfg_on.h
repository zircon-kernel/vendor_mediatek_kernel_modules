/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2020 MediaTek Inc.
 */
#ifndef __BG_GPS_CFG_ON_REGS_H__
#define __BG_GPS_CFG_ON_REGS_H__

#define BG_GPS_CFG_ON_BASE                                     0x81021000


#define BG_GPS_CFG_ON_GPS_L1_SLP_CTL_ADDR                      (BG_GPS_CFG_ON_BASE + 0x020)
#define BG_GPS_CFG_ON_GPS_L5_SLP_CTL_ADDR                      (BG_GPS_CFG_ON_BASE + 0x024)
#define BG_GPS_CFG_ON_GPS_TOP_OFF_PWR_CTL_ADDR                 (BG_GPS_CFG_ON_BASE + 0x02c)
#define BG_GPS_CFG_ON_GPS_BUS_SLP_PROT_CTL2_ADDR               (BG_GPS_CFG_ON_BASE + 0x03C)

#define BG_GPS_CFG_ON_GPS_L1_SLP_CTL_GPS_L1_SLP_HWCTL_CR_ADDR  BG_GPS_CFG_ON_GPS_L1_SLP_CTL_ADDR
#define BG_GPS_CFG_ON_GPS_L1_SLP_CTL_GPS_L1_SLP_HWCTL_CR_MASK  0x00000100
#define BG_GPS_CFG_ON_GPS_L1_SLP_CTL_GPS_L1_SLP_HWCTL_CR_SHFT  8
#define BG_GPS_CFG_ON_GPS_L1_SLP_CTL_GPS_L1_SLP_PWR_CTL_CS_ADDR BG_GPS_CFG_ON_GPS_L1_SLP_CTL_ADDR
#define BG_GPS_CFG_ON_GPS_L1_SLP_CTL_GPS_L1_SLP_PWR_CTL_CS_MASK 0x0000000F
#define BG_GPS_CFG_ON_GPS_L1_SLP_CTL_GPS_L1_SLP_PWR_CTL_CS_SHFT 0

#define BG_GPS_CFG_ON_GPS_L5_SLP_CTL_GPS_L5_SLP_HWCTL_ADDR     BG_GPS_CFG_ON_GPS_L5_SLP_CTL_ADDR
#define BG_GPS_CFG_ON_GPS_L5_SLP_CTL_GPS_L5_SLP_HWCTL_MASK     0x00000100
#define BG_GPS_CFG_ON_GPS_L5_SLP_CTL_GPS_L5_SLP_HWCTL_SHFT     8
#define BG_GPS_CFG_ON_GPS_L5_SLP_CTL_GPS_L5_SLP_PWR_CTL_CS_ADDR BG_GPS_CFG_ON_GPS_L5_SLP_CTL_ADDR
#define BG_GPS_CFG_ON_GPS_L5_SLP_CTL_GPS_L5_SLP_PWR_CTL_CS_MASK 0x0000000F
#define BG_GPS_CFG_ON_GPS_L5_SLP_CTL_GPS_L5_SLP_PWR_CTL_CS_SHFT 0

#define BG_GPS_CFG_ON_GPS_TOP_OFF_PWR_CTL_GPS_TOP_OFF_PWR_CTL_CS_ADDR \
	BG_GPS_CFG_ON_GPS_TOP_OFF_PWR_CTL_ADDR
#define BG_GPS_CFG_ON_GPS_TOP_OFF_PWR_CTL_GPS_TOP_OFF_PWR_CTL_CS_MASK 0x0000000F
#define BG_GPS_CFG_ON_GPS_TOP_OFF_PWR_CTL_GPS_TOP_OFF_PWR_CTL_CS_SHFT 0

#define BG_GPS_CFG_ON_GPS_BUS_SLP_PROT_CTL2_BG_SW_GPS2MCU_SLP_PROT_REQ_EN_ADDR \
	BG_GPS_CFG_ON_GPS_BUS_SLP_PROT_CTL2_ADDR
#define BG_GPS_CFG_ON_GPS_BUS_SLP_PROT_CTL2_BG_SW_GPS2MCU_SLP_PROT_REQ_EN_MASK 0x00000003
#define BG_GPS_CFG_ON_GPS_BUS_SLP_PROT_CTL2_BG_SW_GPS2MCU_SLP_PROT_REQ_EN_SHFT 0

#endif /* __BG_GPS_CFG_ON_REGS_H__*/
