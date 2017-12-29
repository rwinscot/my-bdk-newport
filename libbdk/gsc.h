#ifndef _GSC_H_
#define _GSC_H_

#include <bdk.h>
#include <newport.h>

/* i2c slave addresses */
#define GSC_SC_ADDR		0x20
#define GSC_RTC_ADDR		0x68
#define GSC_HWMON_ADDR		0x29
#define GSC_EEPROM_ADDR		0x51

extern struct newport_board_info board_info;

int gsc_init(bdk_node_t node);
int gsc_read_eeprom(bdk_node_t node, struct newport_board_info*);
int gsc_eeprom_update(bdk_node_t node);
int gsc_program(bdk_node_t node);
int gsc_watchdog_config(bdk_node_t node, int timeout);
int gsc_sleep(bdk_node_t node, unsigned long secs);
int gsc_boot_wd_disable(bdk_node_t node, bool leave_enabled);
int gsc_hwmon_info(bdk_node_t node, int model);
const char *gsc_get_dtb_name(bdk_node_t node, int level);
void menu_gsc(bdk_menu_t *parent, char key, void *arg);
void hexdump(unsigned char *buf, int size);

#endif