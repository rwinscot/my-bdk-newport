/***********************license start***********************************
* Copyright (c) 2003-2017  Cavium Inc. (support@cavium.com). All rights
* reserved.
*
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions are
* met:
*
*   * Redistributions of source code must retain the above copyright
*     notice, this list of conditions and the following disclaimer.
*
*   * Redistributions in binary form must reproduce the above
*     copyright notice, this list of conditions and the following
*     disclaimer in the documentation and/or other materials provided
*     with the distribution.
*
*   * Neither the name of Cavium Inc. nor the names of
*     its contributors may be used to endorse or promote products
*     derived from this software without specific prior written
*     permission.
*
* This Software, including technical data, may be subject to U.S. export
* control laws, including the U.S. Export Administration Act and its
* associated regulations, and may be subject to export or import
* regulations in other countries.
*
* TO THE MAXIMUM EXTENT PERMITTED BY LAW, THE SOFTWARE IS PROVIDED "AS IS"
* AND WITH ALL FAULTS AND CAVIUM INC. MAKES NO PROMISES, REPRESENTATIONS OR
* WARRANTIES, EITHER EXPRESS, IMPLIED, STATUTORY, OR OTHERWISE, WITH RESPECT
* TO THE SOFTWARE, INCLUDING ITS CONDITION, ITS CONFORMITY TO ANY
* REPRESENTATION OR DESCRIPTION, OR THE EXISTENCE OF ANY LATENT OR PATENT
* DEFECTS, AND CAVIUM SPECIFICALLY DISCLAIMS ALL IMPLIED (IF ANY) WARRANTIES
* OF TITLE, MERCHANTABILITY, NONINFRINGEMENT, FITNESS FOR A PARTICULAR
* PURPOSE, LACK OF VIRUSES, ACCURACY OR COMPLETENESS, QUIET ENJOYMENT,
* QUIET POSSESSION OR CORRESPONDENCE TO DESCRIPTION. THE ENTIRE  RISK
* ARISING OUT OF USE OR PERFORMANCE OF THE SOFTWARE LIES WITH YOU.
***********************license end**************************************/
#include <bdk.h>
#include <gsc.h>
#include <unistd.h>

/**
 * This function is not defined by the BDK libraries. It must be
 * defined by all BDK applications. It should be empty except for
 * containing BDK_REQUIRE() lines. The bdk-init code has a strong
 * reference to bdk_requires_depends() which then contains strong
 * references to all needed components.
 */
void __bdk_require_depends(void)
{
    BDK_REQUIRE(DRAM_CONFIG);
    BDK_REQUIRE(DRAM_TEST);
    BDK_REQUIRE(FS_BOOT);
    BDK_REQUIRE(FS_FATFS);
    BDK_REQUIRE(FS_MMC);
    BDK_REQUIRE(FS_MPI);
    BDK_REQUIRE(FS_XMODEM);
    BDK_REQUIRE(MPI);
}

extern void menu_board(bdk_menu_t *menu, char key, void *arg);
extern void menu_chip(bdk_menu_t *menu, char key, void *arg);
extern void menu_dram(bdk_menu_t *menu, char key, void *arg);
extern void menu_qlm(bdk_menu_t *menu, char key, void *arg);
extern void menu_power(bdk_menu_t *menu, char key, void *arg);

void item_factory(bdk_menu_t *menu, char key, void *arg)
{
    printf("Restoring factory defaults\n");
    unlink("/fatfs/default.dtb");
    printf("Rebooting\n");
    bdk_reset_chip(bdk_numa_master());
}


void item_save(bdk_menu_t *menu, char key, void *arg)
{
    printf("Saving settings\n");
    if (bdk_config_save())
        return;
    printf("Rebooting\n");
    bdk_reset_chip(bdk_numa_master());
}

void item_reboot(bdk_menu_t *menu, char key, void *arg)
{
    printf("Rebooting\n");
    bdk_reset_chip(bdk_numa_master());
}

void menu_i2c(bdk_menu_t *menu, char key, void *arg);

/**
 * Main entry point
 *
 * @return exit code
 */
int main(int argc, const char **argv)
{
    bdk_watchdog_disable();
    bdk_menu_t menu;

    /* If we started without knowing the board type, for the user into the
       board menu so they can fix it. After the board menu, restore factory
       defaults and reset in case a bad config was saved */
    const char *model = bdk_config_get_str(BDK_CONFIG_BOARD_MODEL);
    if (strcmp(model, "unknown") == 0)
    {
#if 0
        menu_board(&menu, 'B', NULL);
        item_factory(&menu, 'F', NULL);
#else
        menu_gsc(&menu, 'P', NULL);
        item_reboot(&menu, 'X', NULL);
#endif
    }

    while (1)
    {
        bdk_menu_init(&menu, "Setup");
        bdk_menu_item(&menu, 'B', "Board Manufacturing Data", menu_board, NULL);
        if (bdk_trust_get_level() == BDK_TRUST_LEVEL_NONE)
        {
            bdk_menu_item(&menu, 'I', "I2C Transfer", menu_i2c, NULL);
            bdk_menu_item(&menu, 'G', "Gateworks System Controller", menu_gsc, NULL);
            bdk_menu_item(&menu, 'C', "Chip Features", menu_chip, NULL);
            bdk_menu_item(&menu, 'D', "DRAM Options", menu_dram, NULL);
            bdk_menu_item(&menu, 'Q', "QLM Options", menu_qlm, NULL);
            bdk_menu_item(&menu, 'P', "Power Options", menu_power, NULL);
        }
        bdk_menu_item(&menu, 'F', "Restore factory defaults", item_factory, NULL);
        if (bdk_trust_get_level() == BDK_TRUST_LEVEL_NONE)
            bdk_menu_item(&menu, 'S', "Save Settings and Exit", item_save, NULL);
        bdk_menu_item(&menu, 'X', "Exit Setup, discarding changes", item_reboot, NULL);
        bdk_menu_display(&menu);
    }
    return 0;
}
