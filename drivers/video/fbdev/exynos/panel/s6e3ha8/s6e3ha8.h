/*
 * linux/drivers/video/fbdev/exynos/panel/s6e3ha8/s6e3ha8.h
 *
 * Header file for S6E3HA8 Dimming Driver
 *
 * Copyright (c) 2016 Samsung Electronics
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __S6E3HA8_H__
#define __S6E3HA8_H__

#include <linux/types.h>
#include <linux/kernel.h>
#include "../panel_poc.h"

/*
 * OFFSET ==> OFS means N-param - 1
 * <example>
 * XXX 1st param => S6E3HA8_XXX_OFS (0)
 * XXX 2nd param => S6E3HA8_XXX_OFS (1)
 * XXX 36th param => S6E3HA8_XXX_OFS (35)
 */

#define AID_INTERPOLATION
#define S6E3HA8_GAMMA_CMD_CNT (35)

#define S6E3HA8_IRC_ONOFF_OFS	(0)
#define S6E3HA8_IRC_VALUE_OFS	(18)
#define S6E3HA8_IRC_VALUE_LEN	(17)

#define S6E3HA8_ADDR_OFS	(0)
#define S6E3HA8_ADDR_LEN	(1)
#define S6E3HA8_DATA_OFS	(S6E3HA8_ADDR_OFS + S6E3HA8_ADDR_LEN)

#define S6E3HA8_MTP_REG				0xC8
#define S6E3HA8_MTP_OFS				0
#define S6E3HA8_MTP_LEN				34

#define S6E3HA8_DATE_REG			0xA1
#define S6E3HA8_DATE_OFS			4
#define S6E3HA8_DATE_LEN			(PANEL_DATE_LEN)

#define S6E3HA8_COORDINATE_REG		0xA1
#define S6E3HA8_COORDINATE_OFS		0
#define S6E3HA8_COORDINATE_LEN		(PANEL_COORD_LEN)

#define S6E3HA8_HBM_GAMMA_REG		0xB3
#define S6E3HA8_HBM_GAMMA_OFS		2
#define S6E3HA8_HBM_GAMMA_LEN		34

#define S6E3HA8_ID_REG				0x04
#define S6E3HA8_ID_OFS				0
#define S6E3HA8_ID_LEN				(PANEL_ID_LEN)

#define S6E3HA8_CODE_REG			0xD6
#define S6E3HA8_CODE_OFS			0
#define S6E3HA8_CODE_LEN			(PANEL_CODE_LEN)

#define S6E3HA8_ELVSS_REG			0xB5
#define S6E3HA8_ELVSS_OFS			0
#define S6E3HA8_ELVSS_LEN			23

#define S6E3HA8_ELVSS_TEMP_0_REG		0xB5
#define S6E3HA8_ELVSS_TEMP_0_OFS		22
#define S6E3HA8_ELVSS_TEMP_0_LEN		1

#define S6E3HA8_ELVSS_TEMP_1_REG		0xB5
#define S6E3HA8_ELVSS_TEMP_1_OFS		23
#define S6E3HA8_ELVSS_TEMP_1_LEN		1

#define S6E3HA8_OCTA_ID_REG			0xC9
#define S6E3HA8_OCTA_ID_OFS			1
#define S6E3HA8_OCTA_ID_LEN			(PANEL_OCTA_ID_LEN)

#define S6E3HA8_COPR_REG			0x5A
#define S6E3HA8_COPR_OFS			0
#define S6E3HA8_COPR_LEN			9

#define S6E3HA8_COPR_SPI_REG			0x5A
#define S6E3HA8_COPR_SPI_OFS			0
#define S6E3HA8_COPR_SPI_LEN			9

#define S6E3HA8_COPR_DSI_REG			0x5A
#define S6E3HA8_COPR_DSI_OFS			0
#define S6E3HA8_COPR_DSI_LEN			12

#define S6E3HA8_CHIP_ID_REG			0xD6
#define S6E3HA8_CHIP_ID_OFS			0
#define S6E3HA8_CHIP_ID_LEN			5

/* for brightness debugging */
#define S6E3HA8_GAMMA_REG			0xCA
#define S6E3HA8_GAMMA_OFS			0
#define S6E3HA8_GAMMA_LEN			34

#define S6E3HA8_AOR_REG			0xB1
#define S6E3HA8_AOR_OFS			0
#define S6E3HA8_AOR_LEN			2

#define S6E3HA8_VINT_REG			0xF4
#define S6E3HA8_VINT_OFS			1
#define S6E3HA8_VINT_LEN			1

#define S6E3HA8_ELVSS_T_REG			0xB5
#define S6E3HA8_ELVSS_T_OFS			2
#define S6E3HA8_ELVSS_T_LEN			1

#define S6E3HA8_IRC_REG			0xB8
#define S6E3HA8_IRC_OFS			18
#define S6E3HA8_IRC_LEN			17

/* for panel dump */
#define S6E3HA8_RDDPM_REG			0x0A
#define S6E3HA8_RDDPM_OFS			0
#define S6E3HA8_RDDPM_LEN			3

#define S6E3HA8_RDDSM_REG			0x0E
#define S6E3HA8_RDDSM_OFS			0
#define S6E3HA8_RDDSM_LEN			3

#define S6E3HA8_ERR_REG				0xEA
#define S6E3HA8_ERR_OFS				0
#define S6E3HA8_ERR_LEN				5

#define S6E3HA8_ERR_FG_REG			0xEE
#define S6E3HA8_ERR_FG_OFS			0
#define S6E3HA8_ERR_FG_LEN			1

#define S6E3HA8_DSI_ERR_REG			0x05
#define S6E3HA8_DSI_ERR_OFS			0
#define S6E3HA8_DSI_ERR_LEN			1

#define S6E3HA8_SELF_DIAG_REG			0x0F
#define S6E3HA8_SELF_DIAG_OFS			0
#define S6E3HA8_SELF_DIAG_LEN			1

#ifdef CONFIG_SUPPORT_DDI_FLASH
#define S6E3HA8_POC_CHKSUM_REG		0xEC
#define S6E3HA8_POC_CHKSUM_OFS		0
#define S6E3HA8_POC_CHKSUM_LEN		(PANEL_POC_CHKSUM_LEN)

#define S6E3HA8_POC_CTRL_REG		0xEB
#define S6E3HA8_POC_CTRL_OFS		0
#define S6E3HA8_POC_CTRL_LEN		(PANEL_POC_CTRL_LEN)

#define S6E3HA8_POC_DATA_REG		0xEC
#define S6E3HA8_POC_DATA_OFS		(13)
#define S6E3HA8_POC_DATA_LEN		(1)
#endif

#ifdef CONFIG_SUPPORT_GRAM_CHECKSUM
#define S6E3HA8_GRAM_IMG_SIZE	(1440 * 2960 * 3 / 3)	/* W * H * BPP / COMP_RATIO */
#define S6E3HA8_GRAM_CHECKSUM_REG	0xAF
#define S6E3HA8_GRAM_CHECKSUM_OFS	0
#define S6E3HA8_GRAM_CHECKSUM_LEN	1
#define S6E3HA8_GRAM_CHECKSUM_VALID	0x66
#endif

#define S6E3HA8_MCD_RESISTANCE_REG			0xCD
#define S6E3HA8_MCD_RESISTANCE_OFS			2
#define S6E3HA8_MCD_RESISTANCE_LEN			1

#ifdef CONFIG_SUPPORT_DDI_FLASH
/* MCD */
#define S6E3HA8_FLASH_MCD_ADDR	(POC_MCD_PARTITION)
#define S6E3HA8_FLASH_MCD1_R_OFS	(0)
#define S6E3HA8_FLASH_MCD1_R_LEN	(1)
#define S6E3HA8_FLASH_MCD2_R_OFS	(S6E3HA8_FLASH_MCD1_R_OFS + S6E3HA8_FLASH_MCD1_R_LEN)
#define S6E3HA8_FLASH_MCD2_R_LEN	(1)
/* DUMMY 2byte */
#define S6E3HA8_FLASH_MCD1_L_OFS	(S6E3HA8_FLASH_MCD2_R_OFS + S6E3HA8_FLASH_MCD2_R_LEN + 2)
#define S6E3HA8_FLASH_MCD1_L_LEN	(1)
#define S6E3HA8_FLASH_MCD2_L_OFS	(S6E3HA8_FLASH_MCD1_L_OFS + S6E3HA8_FLASH_MCD1_L_LEN)
#define S6E3HA8_FLASH_MCD2_L_LEN	(1)
#define S6E3HA8_FLASH_MCD_LEN	(S6E3HA8_FLASH_MCD2_L_OFS + S6E3HA8_FLASH_MCD2_L_LEN)
#endif /* CONFIG_SUPPORT_DDI_FLASH */

#ifdef CONFIG_SUPPORT_POC_FLASH
#define S6E3HA8_POC_MCA_CHKSUM_REG		(0xEC)
#define S6E3HA8_POC_MCA_CHKSUM_OFS		(0)
#define S6E3HA8_POC_MCA_CHKSUM_LEN		(15)
#endif

#ifdef CONFIG_EXYNOS_DECON_MDNIE_LITE
#define NR_S6E3HA8_MDNIE_REG	(3)

#define S6E3HA8_MDNIE_0_REG		(0xDF)
#define S6E3HA8_MDNIE_0_OFS		(0)
#define S6E3HA8_MDNIE_0_LEN		(55)

#define S6E3HA8_MDNIE_1_REG		(0xDE)
#define S6E3HA8_MDNIE_1_OFS		(S6E3HA8_MDNIE_0_OFS + S6E3HA8_MDNIE_0_LEN)
#define S6E3HA8_MDNIE_1_LEN		(187)

#define S6E3HA8_MDNIE_2_REG		(0xDD)
#define S6E3HA8_MDNIE_2_OFS		(S6E3HA8_MDNIE_1_OFS + S6E3HA8_MDNIE_1_LEN)
#define S6E3HA8_MDNIE_2_LEN		(19)
#define S6E3HA8_MDNIE_LEN		(S6E3HA8_MDNIE_0_LEN + S6E3HA8_MDNIE_1_LEN + S6E3HA8_MDNIE_2_LEN)

#ifdef CONFIG_SUPPORT_AFC
#define S6E3HA8_AFC_REG			(0xE2)
#define S6E3HA8_AFC_OFS			(0)
#define S6E3HA8_AFC_LEN			(44)
#define S6E3HA8_AFC_ROI_OFS		(32)
#define S6E3HA8_AFC_ROI_LEN		(12)
#endif

#define S6E3HA8_SCR_CR_OFS	(31)
#define S6E3HA8_SCR_WR_OFS	(49)
#define S6E3HA8_SCR_WG_OFS	(51)
#define S6E3HA8_SCR_WB_OFS	(53)
#define S6E3HA8_NIGHT_MODE_OFS	(S6E3HA8_SCR_CR_OFS)
#define S6E3HA8_NIGHT_MODE_LEN	(24)
#define S6E3HA8_COLOR_LENS_OFS	(S6E3HA8_SCR_CR_OFS)
#define S6E3HA8_COLOR_LENS_LEN	(24)

#define S6E3HA8_TRANS_MODE_OFS	(16)
#define S6E3HA8_TRANS_MODE_LEN	(1)
#endif /* CONFIG_EXYNOS_DECON_MDNIE_LITE */

enum {
	GAMMA_MAPTBL,
	AOR_MAPTBL,
	MPS_MAPTBL,
	TSET_MAPTBL,
	ELVSS_MAPTBL,
	ELVSS_TEMP_MAPTBL,
#ifdef CONFIG_SUPPORT_XTALK_MODE
	VGH_MAPTBL,
#endif
	VINT_MAPTBL,
	ACL_ONOFF_MAPTBL,
	ACL_FRAME_AVG_MAPTBL,
	ACL_START_POINT_MAPTBL,
	ACL_OPR_MAPTBL,
	IRC_MAPTBL,
	IRC_MODE_MAPTBL,
#ifdef CONFIG_SUPPORT_HMD
	/* HMD MAPTBL */
	HMD_GAMMA_MAPTBL,
	HMD_AOR_MAPTBL,
	HMD_ELVSS_MAPTBL,
#endif /* CONFIG_SUPPORT_HMD */
	DSC_MAPTBL,
	PPS_MAPTBL,
	SCALER_MAPTBL,
	CASET_MAPTBL,
	PASET_MAPTBL,
	LPM_NIT_MAPTBL,
	LPM_MODE_MAPTBL,
	LPM_DYN_VLIN_MAPTBL,
	LPM_OFF_MAPTBL,
	LPM_AOR_OFF_MAPTBL,
#ifdef CONFIG_ACTIVE_CLOCK
	ACTIVE_CLK_CTRL_MAPTBL,
	ACTIVE_CLK_SELF_DRAWER,
	ACTIVE_CLK_CTRL_UPDATE_MAPTBL,
#endif
#ifdef CONFIG_SUPPORT_DDI_FLASH
	POC_ON_MAPTBL,
	POC_WR_ADDR_MAPTBL,
	POC_RD_ADDR_MAPTBL,
	POC_WR_DATA_MAPTBL,
#endif
#ifdef CONFIG_SUPPORT_POC_FLASH
	POC_ER_ADDR_MAPTBL,
#endif
#ifdef CONFIG_SUPPORT_GRAM_CHECKSUM
	VDDM_MAPTBL,
	GRAM_IMG_MAPTBL,
	GRAM_INV_IMG_MAPTBL,
#endif
	POC_ONOFF_MAPTBL,
#ifdef CONFIG_SUPPORT_TDMB_TUNE
	TDMB_TUNE_MAPTBL,
#endif
	MCD_RESISTANCE_MAPTBL,
	POC_COMP_MAPTBL,
	MAX_MAPTBL,
};

enum {
#ifdef CONFIG_EXYNOS_DECON_LCD_COPR
	READ_COPR,
	READ_COPR_SPI,
	READ_COPR_DSI,
#endif
	READ_ID,
	READ_COORDINATE,
	READ_CODE,
	READ_ELVSS,
	READ_ELVSS_TEMP_0,
	READ_ELVSS_TEMP_1,
	READ_MTP,
	READ_DATE,
	READ_HBM_GAMMA,
	READ_OCTA_ID,
	READ_CHIP_ID,
	/* for brightness debugging */
	READ_GAMMA,
	READ_AOR,
	READ_VINT,
	READ_ELVSS_T,
	READ_IRC,

	READ_RDDPM,
	READ_RDDSM,
	READ_ERR,
	READ_ERR_FG,
	READ_DSI_ERR,
	READ_SELF_DIAG,
#ifdef CONFIG_SUPPORT_DDI_FLASH
	READ_POC_CHKSUM,
	READ_POC_CTRL,
	READ_POC_DATA,
	READ_FLASH_MCD,
#endif
#ifdef CONFIG_SUPPORT_POC_FLASH
	READ_POC_MCA_CHKSUM,
#endif
#ifdef CONFIG_SUPPORT_GRAM_CHECKSUM
	READ_GRAM_CHECKSUM,
#endif
	READ_MCD_RESISTANCE,
};

enum {
#ifdef CONFIG_EXYNOS_DECON_LCD_COPR
	RES_COPR,
	RES_COPR_SPI,
	RES_COPR_DSI,
#endif
	RES_ID,
	RES_COORDINATE,
	RES_CODE,
	RES_ELVSS,
	RES_ELVSS_TEMP_0,
	RES_ELVSS_TEMP_1,
	RES_MTP,
	RES_DATE,
	RES_HBM_GAMMA,
	RES_OCTA_ID,
	RES_CHIP_ID,
	/* for brightness debugging */
	RES_GAMMA,
	RES_AOR,
	RES_VINT,
	RES_ELVSS_T,
	RES_IRC,

	RES_RDDPM,
	RES_RDDSM,
	RES_ERR,
	RES_ERR_FG,
	RES_DSI_ERR,
	RES_SELF_DIAG,
#ifdef CONFIG_SUPPORT_DDI_FLASH
	RES_POC_CHKSUM,
	RES_POC_CTRL,
	RES_POC_DATA,
	RES_FLASH_MCD,
#endif
#ifdef CONFIG_SUPPORT_POC_FLASH
	RES_POC_MCA_CHKSUM,
#endif
#ifdef CONFIG_SUPPORT_GRAM_CHECKSUM
	RES_GRAM_CHECKSUM,
#endif
	RES_MCD_RESISTANCE,
};

static u8 S6E3HA8_ID[S6E3HA8_ID_LEN];
static u8 S6E3HA8_COORDINATE[S6E3HA8_COORDINATE_LEN];
static u8 S6E3HA8_CODE[S6E3HA8_CODE_LEN];
static u8 S6E3HA8_ELVSS[S6E3HA8_ELVSS_LEN];
static u8 S6E3HA8_ELVSS_TEMP_0[S6E3HA8_ELVSS_TEMP_0_LEN];
static u8 S6E3HA8_ELVSS_TEMP_1[S6E3HA8_ELVSS_TEMP_1_LEN];
static u8 S6E3HA8_MTP[S6E3HA8_MTP_LEN];
static u8 S6E3HA8_DATE[S6E3HA8_DATE_LEN];
static u8 S6E3HA8_HBM_GAMMA[S6E3HA8_HBM_GAMMA_LEN];
static u8 S6E3HA8_OCTA_ID[S6E3HA8_OCTA_ID_LEN];
/* for brightness debugging */
static u8 S6E3HA8_GAMMA[S6E3HA8_GAMMA_LEN];
static u8 S6E3HA8_AOR[S6E3HA8_AOR_LEN];
static u8 S6E3HA8_VINT[S6E3HA8_VINT_LEN];
static u8 S6E3HA8_ELVSS_T[S6E3HA8_ELVSS_T_LEN];
static u8 S6E3HA8_IRC[S6E3HA8_IRC_LEN];

#ifdef CONFIG_EXYNOS_DECON_LCD_COPR
static u8 S6E3HA8_COPR[S6E3HA8_COPR_LEN];
static u8 S6E3HA8_COPR_SPI[S6E3HA8_COPR_SPI_LEN];
static u8 S6E3HA8_COPR_DSI[S6E3HA8_COPR_DSI_LEN];
#endif

static u8 S6E3HA8_CHIP_ID[S6E3HA8_CHIP_ID_LEN];
static u8 S6E3HA8_RDDPM[S6E3HA8_RDDPM_LEN];
static u8 S6E3HA8_RDDSM[S6E3HA8_RDDSM_LEN];
static u8 S6E3HA8_ERR[S6E3HA8_ERR_LEN];
static u8 S6E3HA8_ERR_FG[S6E3HA8_ERR_FG_LEN];
static u8 S6E3HA8_DSI_ERR[S6E3HA8_DSI_ERR_LEN];
static u8 S6E3HA8_SELF_DIAG[S6E3HA8_SELF_DIAG_LEN];
#ifdef CONFIG_SUPPORT_DDI_FLASH
static u8 S6E3HA8_POC_CHKSUM[S6E3HA8_POC_CHKSUM_LEN];
static u8 S6E3HA8_POC_CTRL[S6E3HA8_POC_CTRL_LEN];
static u8 S6E3HA8_POC_DATA[S6E3HA8_POC_DATA_LEN];
static u8 S6E3HA8_FLASH_MCD[S6E3HA8_FLASH_MCD_LEN];
#endif
#ifdef CONFIG_SUPPORT_POC_FLASH
static u8 S6E3HA8_POC_MCA_CHKSUM[S6E3HA8_POC_MCA_CHKSUM_LEN];
#endif
#ifdef CONFIG_SUPPORT_GRAM_CHECKSUM
static u8 S6E3HA8_GRAM_CHECKSUM[S6E3HA8_GRAM_CHECKSUM_LEN];
#endif
static u8 S6E3HA8_MCD_RESISTANCE[S6E3HA8_MCD_RESISTANCE_LEN];

static struct rdinfo s6e3ha8_rditbl[] = {
	[READ_ID] = RDINFO_INIT(id, DSI_PKT_TYPE_RD, S6E3HA8_ID_REG, S6E3HA8_ID_OFS, S6E3HA8_ID_LEN),
	[READ_COORDINATE] = RDINFO_INIT(coordinate, DSI_PKT_TYPE_RD, S6E3HA8_COORDINATE_REG, S6E3HA8_COORDINATE_OFS, S6E3HA8_COORDINATE_LEN),
	[READ_CODE] = RDINFO_INIT(code, DSI_PKT_TYPE_RD, S6E3HA8_CODE_REG, S6E3HA8_CODE_OFS, S6E3HA8_CODE_LEN),
	[READ_ELVSS] = RDINFO_INIT(elvss, DSI_PKT_TYPE_RD, S6E3HA8_ELVSS_REG, S6E3HA8_ELVSS_OFS, S6E3HA8_ELVSS_LEN),
	[READ_ELVSS_TEMP_0] = RDINFO_INIT(elvss_temp_0, DSI_PKT_TYPE_RD, S6E3HA8_ELVSS_TEMP_0_REG, S6E3HA8_ELVSS_TEMP_0_OFS, S6E3HA8_ELVSS_TEMP_0_LEN),
	[READ_ELVSS_TEMP_1] = RDINFO_INIT(elvss_temp_1, DSI_PKT_TYPE_RD, S6E3HA8_ELVSS_TEMP_1_REG, S6E3HA8_ELVSS_TEMP_1_OFS, S6E3HA8_ELVSS_TEMP_1_LEN),
	[READ_MTP] = RDINFO_INIT(mtp, DSI_PKT_TYPE_RD, S6E3HA8_MTP_REG, S6E3HA8_MTP_OFS, S6E3HA8_MTP_LEN),
	[READ_DATE] = RDINFO_INIT(date, DSI_PKT_TYPE_RD, S6E3HA8_DATE_REG, S6E3HA8_DATE_OFS, S6E3HA8_DATE_LEN),
	[READ_HBM_GAMMA] = RDINFO_INIT(hbm_gamma, DSI_PKT_TYPE_RD, S6E3HA8_HBM_GAMMA_REG, S6E3HA8_HBM_GAMMA_OFS, S6E3HA8_HBM_GAMMA_LEN),
	[READ_OCTA_ID] = RDINFO_INIT(octa_id, DSI_PKT_TYPE_RD, S6E3HA8_OCTA_ID_REG, S6E3HA8_OCTA_ID_OFS, S6E3HA8_OCTA_ID_LEN),
	/* for brightness debugging */
	[READ_GAMMA] = RDINFO_INIT(gamma, DSI_PKT_TYPE_RD, S6E3HA8_GAMMA_REG, S6E3HA8_GAMMA_OFS, S6E3HA8_GAMMA_LEN),
	[READ_AOR] = RDINFO_INIT(aor, DSI_PKT_TYPE_RD, S6E3HA8_AOR_REG, S6E3HA8_AOR_OFS, S6E3HA8_AOR_LEN),
	[READ_VINT] = RDINFO_INIT(vint, DSI_PKT_TYPE_RD, S6E3HA8_VINT_REG, S6E3HA8_VINT_OFS, S6E3HA8_VINT_LEN),
	[READ_ELVSS_T] = RDINFO_INIT(elvss_t, DSI_PKT_TYPE_RD, S6E3HA8_ELVSS_T_REG, S6E3HA8_ELVSS_T_OFS, S6E3HA8_ELVSS_T_LEN),
	[READ_IRC] = RDINFO_INIT(irc, DSI_PKT_TYPE_RD, S6E3HA8_IRC_REG, S6E3HA8_IRC_OFS, S6E3HA8_IRC_LEN),
#ifdef CONFIG_EXYNOS_DECON_LCD_COPR
	[READ_COPR] = RDINFO_INIT(copr, SPI_PKT_TYPE_RD, S6E3HA8_COPR_REG, S6E3HA8_COPR_OFS, S6E3HA8_COPR_LEN),
	[READ_COPR_SPI] = RDINFO_INIT(copr_spi, SPI_PKT_TYPE_RD, S6E3HA8_COPR_SPI_REG, S6E3HA8_COPR_SPI_OFS, S6E3HA8_COPR_SPI_LEN),
	[READ_COPR_DSI] = RDINFO_INIT(copr_dsi, DSI_PKT_TYPE_RD, S6E3HA8_COPR_DSI_REG, S6E3HA8_COPR_DSI_OFS, S6E3HA8_COPR_DSI_LEN),
#endif
	[READ_CHIP_ID] = RDINFO_INIT(chip_id, DSI_PKT_TYPE_RD, S6E3HA8_CHIP_ID_REG, S6E3HA8_CHIP_ID_OFS, S6E3HA8_CHIP_ID_LEN),
	[READ_RDDPM] = RDINFO_INIT(rddpm, DSI_PKT_TYPE_RD, S6E3HA8_RDDPM_REG, S6E3HA8_RDDPM_OFS, S6E3HA8_RDDPM_LEN),
	[READ_RDDSM] = RDINFO_INIT(rddsm, DSI_PKT_TYPE_RD, S6E3HA8_RDDSM_REG, S6E3HA8_RDDSM_OFS, S6E3HA8_RDDSM_LEN),
	[READ_ERR] = RDINFO_INIT(err, DSI_PKT_TYPE_RD, S6E3HA8_ERR_REG, S6E3HA8_ERR_OFS, S6E3HA8_ERR_LEN),
	[READ_ERR_FG] = RDINFO_INIT(err_fg, DSI_PKT_TYPE_RD, S6E3HA8_ERR_FG_REG, S6E3HA8_ERR_FG_OFS, S6E3HA8_ERR_FG_LEN),
	[READ_DSI_ERR] = RDINFO_INIT(dsi_err, DSI_PKT_TYPE_RD, S6E3HA8_DSI_ERR_REG, S6E3HA8_DSI_ERR_OFS, S6E3HA8_DSI_ERR_LEN),
	[READ_SELF_DIAG] = RDINFO_INIT(self_diag, DSI_PKT_TYPE_RD, S6E3HA8_SELF_DIAG_REG, S6E3HA8_SELF_DIAG_OFS, S6E3HA8_SELF_DIAG_LEN),
#ifdef CONFIG_SUPPORT_DDI_FLASH
	[READ_POC_CHKSUM] = RDINFO_INIT(poc_chksum, DSI_PKT_TYPE_RD, S6E3HA8_POC_CHKSUM_REG, S6E3HA8_POC_CHKSUM_OFS, S6E3HA8_POC_CHKSUM_LEN),
	[READ_POC_CTRL] = RDINFO_INIT(poc_ctrl, DSI_PKT_TYPE_RD, S6E3HA8_POC_CTRL_REG, S6E3HA8_POC_CTRL_OFS, S6E3HA8_POC_CTRL_LEN),
	[READ_POC_DATA] = RDINFO_INIT(poc_data, DSI_PKT_TYPE_RD, S6E3HA8_POC_DATA_REG, S6E3HA8_POC_DATA_OFS, S6E3HA8_POC_DATA_LEN),
	[READ_FLASH_MCD] = RDINFO_INIT(flash_mcd, DSI_PKT_TYPE_RD_POC, S6E3HA8_FLASH_MCD_ADDR, S6E3HA8_FLASH_MCD1_R_OFS, S6E3HA8_FLASH_MCD_LEN),
#endif
#ifdef CONFIG_SUPPORT_POC_FLASH
	[READ_POC_MCA_CHKSUM] = RDINFO_INIT(poc_mca_chksum, DSI_PKT_TYPE_RD, S6E3HA8_POC_MCA_CHKSUM_REG, S6E3HA8_POC_MCA_CHKSUM_OFS, S6E3HA8_POC_MCA_CHKSUM_LEN),
#endif
#ifdef CONFIG_SUPPORT_GRAM_CHECKSUM
	[READ_GRAM_CHECKSUM] = RDINFO_INIT(gram_checksum, DSI_PKT_TYPE_RD, S6E3HA8_GRAM_CHECKSUM_REG, S6E3HA8_GRAM_CHECKSUM_OFS, S6E3HA8_GRAM_CHECKSUM_LEN),
#endif
	[READ_MCD_RESISTANCE] = RDINFO_INIT(mcd_resistance, DSI_PKT_TYPE_RD, S6E3HA8_MCD_RESISTANCE_REG, S6E3HA8_MCD_RESISTANCE_OFS, S6E3HA8_MCD_RESISTANCE_LEN),
};

static DEFINE_RESUI(id, &s6e3ha8_rditbl[READ_ID], 0);
static DEFINE_RESUI(coordinate, &s6e3ha8_rditbl[READ_COORDINATE], 0);
static DEFINE_RESUI(code, &s6e3ha8_rditbl[READ_CODE], 0);
static DEFINE_RESUI(elvss, &s6e3ha8_rditbl[READ_ELVSS], 0);
static DEFINE_RESUI(elvss_temp_0, &s6e3ha8_rditbl[READ_ELVSS_TEMP_0], 0);
static DEFINE_RESUI(elvss_temp_1, &s6e3ha8_rditbl[READ_ELVSS_TEMP_1], 0);
static DEFINE_RESUI(mtp, &s6e3ha8_rditbl[READ_MTP], 0);
static DEFINE_RESUI(hbm_gamma, &s6e3ha8_rditbl[READ_HBM_GAMMA], 0);
static DEFINE_RESUI(date, &s6e3ha8_rditbl[READ_DATE], 0);
static DEFINE_RESUI(octa_id, &s6e3ha8_rditbl[READ_OCTA_ID], 0);
/* for brightness debugging */
static DEFINE_RESUI(gamma, &s6e3ha8_rditbl[READ_GAMMA], 0);
static DEFINE_RESUI(aor, &s6e3ha8_rditbl[READ_AOR], 0);
static DEFINE_RESUI(vint, &s6e3ha8_rditbl[READ_VINT], 0);
static DEFINE_RESUI(elvss_t, &s6e3ha8_rditbl[READ_ELVSS_T], 0);
static DEFINE_RESUI(irc, &s6e3ha8_rditbl[READ_IRC], 0);
#ifdef CONFIG_EXYNOS_DECON_LCD_COPR
static DEFINE_RESUI(copr, &s6e3ha8_rditbl[READ_COPR], 0);
static DEFINE_RESUI(copr_spi, &s6e3ha8_rditbl[READ_COPR_SPI], 0);
static DEFINE_RESUI(copr_dsi, &s6e3ha8_rditbl[READ_COPR_DSI], 0);
#endif
static DEFINE_RESUI(chip_id, &s6e3ha8_rditbl[READ_CHIP_ID], 0);
static DEFINE_RESUI(rddpm, &s6e3ha8_rditbl[READ_RDDPM], 0);
static DEFINE_RESUI(rddsm, &s6e3ha8_rditbl[READ_RDDSM], 0);
static DEFINE_RESUI(err, &s6e3ha8_rditbl[READ_ERR], 0);
static DEFINE_RESUI(err_fg, &s6e3ha8_rditbl[READ_ERR_FG], 0);
static DEFINE_RESUI(dsi_err, &s6e3ha8_rditbl[READ_DSI_ERR], 0);
static DEFINE_RESUI(self_diag, &s6e3ha8_rditbl[READ_SELF_DIAG], 0);
#ifdef CONFIG_SUPPORT_DDI_FLASH
static DEFINE_RESUI(poc_chksum, &s6e3ha8_rditbl[READ_POC_CHKSUM], 0);
static DEFINE_RESUI(poc_ctrl, &s6e3ha8_rditbl[READ_POC_CTRL], 0);
static DEFINE_RESUI(poc_data, &s6e3ha8_rditbl[READ_POC_DATA], 0);
static DEFINE_RESUI(flash_mcd, &s6e3ha8_rditbl[READ_FLASH_MCD], 0);
#endif
#ifdef CONFIG_SUPPORT_POC_FLASH
static DEFINE_RESUI(poc_mca_chksum, &s6e3ha8_rditbl[READ_POC_MCA_CHKSUM], 0);
#endif
#ifdef CONFIG_SUPPORT_GRAM_CHECKSUM
static DEFINE_RESUI(gram_checksum, &s6e3ha8_rditbl[READ_GRAM_CHECKSUM], 0);
#endif
static DEFINE_RESUI(mcd_resistance, &s6e3ha8_rditbl[READ_MCD_RESISTANCE], 0);

static struct resinfo s6e3ha8_restbl[] = {
	[RES_ID] = RESINFO_INIT(id, S6E3HA8_ID, RESUI(id)),
	[RES_COORDINATE] = RESINFO_INIT(coordinate, S6E3HA8_COORDINATE, RESUI(coordinate)),
	[RES_CODE] = RESINFO_INIT(code, S6E3HA8_CODE, RESUI(code)),
	[RES_ELVSS] = RESINFO_INIT(elvss, S6E3HA8_ELVSS, RESUI(elvss)),
	[RES_ELVSS_TEMP_0] = RESINFO_INIT(elvss_temp_0, S6E3HA8_ELVSS_TEMP_0, RESUI(elvss_temp_0)),
	[RES_ELVSS_TEMP_1] = RESINFO_INIT(elvss_temp_1, S6E3HA8_ELVSS_TEMP_1, RESUI(elvss_temp_1)),
	[RES_MTP] = RESINFO_INIT(mtp, S6E3HA8_MTP, RESUI(mtp)),
	[RES_DATE] = RESINFO_INIT(date, S6E3HA8_DATE, RESUI(date)),
	[RES_HBM_GAMMA] = RESINFO_INIT(hbm_gamma, S6E3HA8_HBM_GAMMA, RESUI(hbm_gamma)),
	[RES_OCTA_ID] = RESINFO_INIT(octa_id, S6E3HA8_OCTA_ID, RESUI(octa_id)),
	/* for brightness debugging */
	[RES_GAMMA] = RESINFO_INIT(gamma, S6E3HA8_GAMMA, RESUI(gamma)),
	[RES_AOR] = RESINFO_INIT(aor, S6E3HA8_AOR, RESUI(aor)),
	[RES_VINT] = RESINFO_INIT(vint, S6E3HA8_VINT, RESUI(vint)),
	[RES_ELVSS_T] = RESINFO_INIT(elvss_t, S6E3HA8_ELVSS_T, RESUI(elvss_t)),
	[RES_IRC] = RESINFO_INIT(irc, S6E3HA8_IRC, RESUI(irc)),
#ifdef CONFIG_EXYNOS_DECON_LCD_COPR
	[RES_COPR] = RESINFO_INIT(copr, S6E3HA8_COPR, RESUI(copr)),
	[RES_COPR_SPI] = RESINFO_INIT(copr_spi, S6E3HA8_COPR_SPI, RESUI(copr_spi)),
	[RES_COPR_DSI] = RESINFO_INIT(copr_dsi, S6E3HA8_COPR_DSI, RESUI(copr_dsi)),
#endif
	[RES_CHIP_ID] = RESINFO_INIT(chip_id, S6E3HA8_CHIP_ID, RESUI(chip_id)),
	[RES_RDDPM] = RESINFO_INIT(rddpm, S6E3HA8_RDDPM, RESUI(rddpm)),
	[RES_RDDSM] = RESINFO_INIT(rddsm, S6E3HA8_RDDSM, RESUI(rddsm)),
	[RES_ERR] = RESINFO_INIT(err, S6E3HA8_ERR, RESUI(err)),
	[RES_ERR_FG] = RESINFO_INIT(err_fg, S6E3HA8_ERR_FG, RESUI(err_fg)),
	[RES_DSI_ERR] = RESINFO_INIT(dsi_err, S6E3HA8_DSI_ERR, RESUI(dsi_err)),
	[RES_SELF_DIAG] = RESINFO_INIT(self_diag, S6E3HA8_SELF_DIAG, RESUI(self_diag)),
#ifdef CONFIG_SUPPORT_DDI_FLASH
	[RES_POC_CHKSUM] = RESINFO_INIT(poc_chksum, S6E3HA8_POC_CHKSUM, RESUI(poc_chksum)),
	[RES_POC_CTRL] = RESINFO_INIT(poc_ctrl, S6E3HA8_POC_CTRL, RESUI(poc_ctrl)),
	[RES_POC_DATA] = RESINFO_INIT(poc_data, S6E3HA8_POC_DATA, RESUI(poc_data)),
	[RES_FLASH_MCD] = RESINFO_INIT(flash_mcd, S6E3HA8_FLASH_MCD, RESUI(flash_mcd)),
#endif
#ifdef CONFIG_SUPPORT_POC_FLASH
	[RES_POC_MCA_CHKSUM] = RESINFO_INIT(poc_mca_chksum, S6E3HA8_POC_MCA_CHKSUM, RESUI(poc_mca_chksum)),
#endif
#ifdef CONFIG_SUPPORT_GRAM_CHECKSUM
	[RES_GRAM_CHECKSUM] = RESINFO_INIT(gram_checksum, S6E3HA8_GRAM_CHECKSUM, RESUI(gram_checksum)),
#endif
	[RES_MCD_RESISTANCE] = RESINFO_INIT(mcd_resistance, S6E3HA8_MCD_RESISTANCE, RESUI(mcd_resistance)),
};

enum {
	DUMP_RDDPM = 0,
	DUMP_RDDSM,
	DUMP_ERR,
	DUMP_ERR_FG,
	DUMP_DSI_ERR,
	DUMP_SELF_DIAG,
};

static void show_rddpm(struct dumpinfo *info);
static void show_rddsm(struct dumpinfo *info);
static void show_err(struct dumpinfo *info);
static void show_err_fg(struct dumpinfo *info);
static void show_dsi_err(struct dumpinfo *info);
static void show_self_diag(struct dumpinfo *info);

static struct dumpinfo s6e3ha8_dmptbl[] = {
	[DUMP_RDDPM] = DUMPINFO_INIT(rddpm, &s6e3ha8_restbl[RES_RDDPM], show_rddpm),
	[DUMP_RDDSM] = DUMPINFO_INIT(rddsm, &s6e3ha8_restbl[RES_RDDSM], show_rddsm),
	[DUMP_ERR] = DUMPINFO_INIT(err, &s6e3ha8_restbl[RES_ERR], show_err),
	[DUMP_ERR_FG] = DUMPINFO_INIT(err_fg, &s6e3ha8_restbl[RES_ERR_FG], show_err_fg),
	[DUMP_DSI_ERR] = DUMPINFO_INIT(dsi_err, &s6e3ha8_restbl[RES_DSI_ERR], show_dsi_err),
	[DUMP_SELF_DIAG] = DUMPINFO_INIT(self_diag, &s6e3ha8_restbl[RES_SELF_DIAG], show_self_diag),
};

static int init_common_table(struct maptbl *);
static int getidx_common_maptbl(struct maptbl *);
static int init_gamma_table(struct maptbl *);
static int getidx_dimming_maptbl(struct maptbl *);
#if (PANEL_BACKLIGHT_PAC_STEPS == 512 || PANEL_BACKLIGHT_PAC_STEPS == 256)
static int getidx_brt_tbl(struct maptbl *tbl);
static int getidx_aor_table(struct maptbl *tbl);
static int getidx_irc_table(struct maptbl *tbl);
#endif
static void copy_gamma_maptbl(struct maptbl *tbl, u8 *dst);
static void copy_aor_maptbl(struct maptbl *tbl, u8 *dst);
static void copy_irc_maptbl(struct maptbl *tbl, u8 *dst);
static int getidx_irc_mode_table(struct maptbl *tbl);

static int getidx_mps_table(struct maptbl *);
static int init_elvss_table(struct maptbl *tbl);
static int init_vint_table(struct maptbl *tbl);
static int init_aor_table(struct maptbl *tbl);
static int init_irc_table(struct maptbl *tbl);
static int init_hmd_aor_table(struct maptbl *tbl);
static int init_elvss_temp_table(struct maptbl *);
static int getidx_elvss_temp_table(struct maptbl *);
#ifdef CONFIG_SUPPORT_XTALK_MODE
static int getidx_vgh_table(struct maptbl *);
#endif
static int getidx_hbm_onoff_table(struct maptbl *);
static int getidx_acl_onoff_table(struct maptbl *);
static int getidx_acl_opr_table(struct maptbl *);
static int getidx_dsc_table(struct maptbl *);
static int getidx_resolution_table(struct maptbl *);
static int init_lpm_table(struct maptbl *tbl);
static int getidx_lpm_table(struct maptbl *);
static int getidx_lpm_dyn_vlin_table(struct maptbl *tbl);
static void copy_dummy_maptbl(struct maptbl *tbl, u8 *dst);
static void copy_common_maptbl(struct maptbl *, u8 *);
static void copy_tset_maptbl(struct maptbl *, u8 *);
static void copy_mcd_resistance_maptbl(struct maptbl *tbl, u8 *dst);
#ifdef CONFIG_EXYNOS_DECON_LCD_COPR
static void copy_copr_maptbl(struct maptbl *, u8 *);
#endif
#ifdef CONFIG_ACTIVE_CLOCK
static void copy_self_clk_update_maptbl(struct maptbl *tbl, u8 *dst);
static void copy_self_clk_maptbl(struct maptbl *, u8 *);
static void copy_self_drawer(struct maptbl *tbl, u8 *dst);
#endif
#ifdef CONFIG_SUPPORT_GRAM_CHECKSUM
static int s6e3ha8_getidx_vddm_table(struct maptbl *);
static int s6e3ha8_getidx_gram_img_pattern_table(struct maptbl *tbl);
#endif
#ifdef CONFIG_SUPPORT_TDMB_TUNE
static int s6e3ha8_getidx_tdmb_tune_table(struct maptbl *tbl);
#endif
#ifdef CONFIG_SUPPORT_HMD
static int init_hmd_gamma_table(struct maptbl *);
static int getidx_hmd_dimming_mtptbl(struct maptbl *);
#endif /* CONFIG_SUPPORT_HMD */
#ifdef CONFIG_EXYNOS_DECON_MDNIE_LITE
static int init_color_blind_table(struct maptbl *tbl);
static int getidx_mdnie_scenario_maptbl(struct maptbl *tbl);
static int getidx_mdnie_hmd_maptbl(struct maptbl *tbl);
static int getidx_mdnie_hdr_maptbl(struct maptbl *tbl);
static int getidx_mdnie_trans_mode_maptbl(struct maptbl *tbl);
static int init_mdnie_night_mode_table(struct maptbl *tbl);
static int getidx_mdnie_night_mode_maptbl(struct maptbl *tbl);
int init_mdnie_color_lens_table(struct maptbl *tbl);
int getidx_color_lens_maptbl(struct maptbl *tbl);
static int init_color_coordinate_table(struct maptbl *);
static int init_sensor_rgb_table(struct maptbl *tbl);
static int getidx_adjust_ldu_maptbl(struct maptbl *tbl);
static int getidx_color_coordinate_maptbl(struct maptbl *tbl);
static void copy_color_coordinate_maptbl(struct maptbl *tbl, u8 *dst);
static void copy_scr_white_maptbl(struct maptbl *tbl, u8 *dst);
static void copy_adjust_ldu_maptbl(struct maptbl *tbl, u8 *dst);
static int getidx_trans_maptbl(struct pkt_update_info *pktui);
static int getidx_mdnie_0_maptbl(struct pkt_update_info *pktui);
static int getidx_mdnie_1_maptbl(struct pkt_update_info *pktui);
static int getidx_mdnie_2_maptbl(struct pkt_update_info *pktui);
static int getidx_mdnie_scr_white_maptbl(struct pkt_update_info *pktui);
static void update_current_scr_white(struct maptbl *tbl, u8 *dst);
#ifdef CONFIG_SUPPORT_AFC
static void copy_afc_maptbl(struct maptbl *tbl, u8 *dst);
#endif
#endif /* CONFIG_EXYNOS_DECON_MDNIE_LITE */
#endif /* __S6E3HA8_H__ */
