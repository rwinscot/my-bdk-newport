#ifndef _NEWPORT_H_
#define _NEWPORT_H_

#include <bdk.h>
#include <gsc.h>

struct newport_board_info {
	uint8_t mac[6];		/* 0x00: MAC base */
	uint8_t res0[18];	/* 0x06: reserved */
	uint32_t serial;	/* 0x18: Serial Number */
	uint8_t res1[4];	/* 0x1C: reserved */
	uint8_t mfgdate[4];	/* 0x20: MFG date */
	uint8_t macno;		/* 0x24: number of mac addrs */
	uint8_t res2[6];	/* 0x25 */
	/* sdram config */
	uint8_t sdram_size;	/* 0x2B: (16 << n) MB */
	uint8_t sdram_speed;	/* 0x2C: (33.333 * n) MHz */
	uint8_t sdram_width;	/* 0x2D: (8 << n) bit */
	uint8_t res3[2];	/* 0x2E */
	char model[16];		/* 0x30: model string */
	uint8_t res4[2];	/* 0x40 */

	/* Config: SoC Peripherals */
	uint8_t qlm[4];		/* 0x42: QLM default configs */
	uint8_t config[4];	/* 0x46: loading options */

	uint8_t res5[4];	/* 0x4A */

	uint8_t chksum[2];	/* 0x4E */
};

enum qlm_mode {
	QLM_MODE_DISABLED,	/* QLM is disabled */
	QLM_MODE_PCIE_1X1,	/* 1 PCIe, 1 lane */
	QLM_MODE_PCIE_1X2,	/* 1 PCIe, 2 lanes */
	QLM_MODE_PCIE_1X4,	/* 1 PCIe, 4 lanes */
	QLM_MODE_SATA_2X1,	/* SATA, each lane independent */
	QLM_MODE_SGMII_1X1,	/* SGMII, single lane */
	QLM_MODE_SGMII_2X1,	/* SGMII, each lane independent */
	QLM_MODE_XFI_1X1,	/* 1 XFI, single lane */
	QLM_MODE_XFI_2X1,	/* 2 XFI, 1 lane each */
	QLM_MODE_10G_KR_1X1,	/* 1 10GBASE-KR, single lane */
	QLM_MODE_QSGMII_4X1,	/* QSGMII is 4 SGMII on one lane */
};

enum qlm_clockref
{
	QLM_CLK_COMMON_0,
	QLM_CLK_COMMON_1,
	QLM_CLK_COMMON_2,
	QLM_CLK_EXTERNAL,
};

/* config bits */
enum {
	EECONFIG_RGM,
	EECONFIG_USB0,
	EECONFIG_USB1,
	EECONFIG_UART0,
	EECONFIG_UART1,
	EECONFIG_UART2,
	EECONFIG_UART3,
	EECONFIG_MMC0,
	EECONFIG_MMC1,
	EECONFIG_MMC2,
	EECONFIG_GPS,
};

extern struct newport_board_info board_info;

enum baseboard {
	GW630x,
	GW_UNKNOWN,
};

int newport_config(void);
int newport_devtree_fixups(void *fdt);

#endif // _NEWPORT_H_
