# ***********************license start***********************************
# Copyright (c) 2003-2017  Cavium Inc. (support@cavium.com). All rights
# reserved.
#
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions are
# met:
#
#   * Redistributions of source code must retain the above copyright
#     notice, this list of conditions and the following disclaimer.
#
#   * Redistributions in binary form must reproduce the above
#     copyright notice, this list of conditions and the following
#     disclaimer in the documentation and/or other materials provided
#     with the distribution.
#
#   * Neither the name of Cavium Inc. nor the names of
#     its contributors may be used to endorse or promote products
#     derived from this software without specific prior written
#     permission.
#
# This Software, including technical data, may be subject to U.S. export
# control laws, including the U.S. Export Administration Act and its
# associated regulations, and may be subject to export or import
# regulations in other countries.
#
# TO THE MAXIMUM EXTENT PERMITTED BY LAW, THE SOFTWARE IS PROVIDED "AS IS"
# AND WITH ALL FAULTS AND CAVIUM INC. MAKES NO PROMISES, REPRESENTATIONS OR
# WARRANTIES, EITHER EXPRESS, IMPLIED, STATUTORY, OR OTHERWISE, WITH RESPECT
# TO THE SOFTWARE, INCLUDING ITS CONDITION, ITS CONFORMITY TO ANY
# REPRESENTATION OR DESCRIPTION, OR THE EXISTENCE OF ANY LATENT OR PATENT
# DEFECTS, AND CAVIUM SPECIFICALLY DISCLAIMS ALL IMPLIED (IF ANY) WARRANTIES
# OF TITLE, MERCHANTABILITY, NONINFRINGEMENT, FITNESS FOR A PARTICULAR
# PURPOSE, LACK OF VIRUSES, ACCURACY OR COMPLETENESS, QUIET ENJOYMENT,
# QUIET POSSESSION OR CORRESPONDENCE TO DESCRIPTION. THE ENTIRE  RISK
# ARISING OUT OF USE OR PERFORMANCE OF THE SOFTWARE LIES WITH YOU.
# **********************license end**************************************
import boards
import connection
import test_dram

def wait_for_bootstub_messages(cnx, powerCycle):
    if powerCycle:
        cnx.powerCycle()
    cnx.waitfor("Cavium SOC", timeout=20)
    cnx.match("Locking L2 cache")
    cnx.match("PASS: CRC32 verification")
    cnx.match("Transferring to thread scheduler")
    cnx.match("================")
    cnx.match("Cavium Boot Stub")
    cnx.match("================")
    cnx.matchRE("Firmware Version: .+\n")
    cnx.matchRE("BDK Version: .+\n")
    cnx.matchRE("Board Model:    .+\n")
    cnx.matchRE("Board Revision: .+\n")
    cnx.matchRE("Board Serial:   .+\n")
    if cnx.chip_model == "CN88XX":
        cnx.match("Node:  0")
        try:
            cnx.match("(Fixed)")
        except:
            pass
    try:
        cnx.matchRE("Chip:  0xa[1-9] Pass [1-7]\\.[0-7] [(]alt pkg[)]")
    except:
        cnx.matchRE("Chip:  0xa[1-9] Pass [1-7]\\.[0-7]")
    cnx.matchRE("SKU:   CN[0-9]+-[0-9]+BG[0-9]+-[A-Z]+(-PR)?(-[PYZ][0-8]*)?-G")
    cnx.matchRE("L2:    [0-9]+ KB")
    cnx.matchRE("RCLK:  [0-9]+ Mhz")
    cnx.matchRE("SCLK:  [0-9]+ Mhz")
    cnx.match("Boot:  SPI24")
    try:
        cnx.match("VRM:   Disabled")
    except:
        cnx.match("VRM:   Enabled")
    cnx.match("Trust: Disabled, Non-secure Boot")
    if cnx.chip_model == "CN88XX":
        cnx.matchRE("CCPI: .+\n")
    cnx.match("Press 'B' within 10 seconds for boot menu")
    cnx.write("B")

    cnx.match("=================================")
    cnx.match("Boot Options")
    cnx.match("=================================")
    cnx.match("N) Boot Normally")
    cnx.match("S) Enter Setup")
    cnx.match("D) Enter Diagnostics")
    if cnx.chip_model != "CN81XX":
        cnx.match("E) Enter Diagnostics, skipping Setup")
    cnx.match("W) Burn boot flash using Xmodem")
    cnx.match("U) Change baud rate and flow control")
    cnx.match("R) Reboot")
    cnx.match("Choice:")
    cnx.write("D")
    cnx.match("D")
    cnx.match("Loading image file '/fatfs/init.bin'")
    cnx.match("---")
    # Escape sequence here, hence wait below
    cnx.waitfor("Cavium SOC")
    cnx.match("Locking L2 cache")
    cnx.match("PASS: CRC32 verification")
    cnx.match("Transferring to thread scheduler")
    cnx.match("Using configuration from previous image")
    cnx.match("===========")
    cnx.match("Cavium Init")
    cnx.match("===========")
    cnx.matchRE("BDK Version: .+\n")
    cnx.matchRE("N0.LMC0.DIMM0: .+\n")
    try:
        cnx.matchRE("N0.LMC0.DIMM1: .+\n")
    except:
        pass
    cnx.matchRE("N0.LMC0 Configuration Completed: [0-9]+ MB", timeout=30)
    if cnx.chip_model in ["CN88XX", "CN83XX"]:
        try:
            cnx.matchRE("N0.LMC1.DIMM0: .+\n")
            cnx.matchRE("N0.LMC1.DIMM1: .+\n")
        except:
            pass
        cnx.matchRE("N0.LMC1 Configuration Completed: [0-9]+ MB")
    if cnx.chip_model == "CN88XX":
        try:
            cnx.matchRE("N0.LMC2.DIMM0: .+\n")
            cnx.matchRE("N0.LMC2.DIMM1: .+\n")
        except:
            pass
        cnx.matchRE("N0.LMC2 Configuration Completed: [0-9]+ MB")
        try:
            cnx.matchRE("N0.LMC3.DIMM0: .+\n")
            cnx.matchRE("N0.LMC3.DIMM1: .+\n")
        except:
            pass
        cnx.matchRE("N0.LMC3 Configuration Completed: [0-9]+ MB")
    cnx.matchRE("Node 0: DRAM: [0-9]+ MB, [0-9]+ MT/s, DDR[34] [UR]DIMM", timeout=60)
    try:
        cnx.match("Starting CCPI links")
        try:
            # This only shows up on boards using lane reversal
            cnx.match("N0.CCPI: Applying lane reversal")
        except:
            pass # Case for boards not using lane reversal
    except:
        pass
    if cnx.multinode:
        cnx.match("N0.CCPI Lanes([] is good):[0][1][2][3][4][5][6][7][8][9][10][11][12][13][14][15][16][17][18][19][20][21][22][23]", timeout=30)
        cnx.match("N1.CCPI Lanes([] is good):[0][1][2][3][4][5][6][7][8][9][10][11][12][13][14][15][16][17][18][19][20][21][22][23]")
        cnx.match("Node:  1")
        try:
            cnx.match("(Fixed)")
        except:
            pass
        cnx.matchRE("Chip:  0xa[1-9] Pass [1-2]\\.[0-1]")
        cnx.matchRE("SKU:   CN[0-9]+-[0-9]+BG[0-9]+-[A-Z]+(-PR)?(-[PYZ][0-8]*)?-G")
        cnx.matchRE("L2:    [0-9]+ KB")
        cnx.matchRE("RCLK:  [0-9]+ Mhz")
        cnx.matchRE("SCLK:  [0-9]+ Mhz")
        cnx.match("Boot:  SPI24")
        try:
            cnx.match("VRM:   Disabled")
        except:
            cnx.match("VRM:   Enabled")
        cnx.match("Trust: Disabled")
        cnx.matchRE("CCPI: .+\n")
        cnx.matchRE("BDK Version: .+\n")
        cnx.matchRE("N1.LMC0.DIMM0: .+\n")
        try:
            cnx.matchRE("N1.LMC0.DIMM1: .+\n")
        except:
            pass
        cnx.matchRE("N1.LMC0 Configuration Completed: [0-9]+ MB")
        try:
            cnx.matchRE("N1.LMC1.DIMM0: .+\n")
            cnx.matchRE("N1.LMC1.DIMM1: .+\n")
        except:
            pass
        cnx.matchRE("N1.LMC1 Configuration Completed: [0-9]+ MB")
        try:
            cnx.matchRE("N1.LMC2.DIMM0: .+\n")
            cnx.matchRE("N1.LMC2.DIMM1: .+\n")
        except:
            pass
        cnx.matchRE("N1.LMC2 Configuration Completed: [0-9]+ MB")
        try:
            cnx.matchRE("N1.LMC3.DIMM0: .+\n")
            cnx.matchRE("N1.LMC3.DIMM1: .+\n")
        except:
            pass
        cnx.matchRE("N1.LMC3 Configuration Completed: [0-9]+ MB")
        cnx.matchRE("Node 1: DRAM: [0-9]+ MB, [0-9]+ MT/s, DDR[34] [UR]DIMM", timeout=60)
    for pcie in range(2*5):
        try:
            cnx.matchRE("N[01]\\.PCIe[0-9]: .+\n", timeout=5)
        except:
            break
    cnx.match("Loading image file '/fatfs/diagnostics.bin.lzma'")
    cnx.match("---")

def wait_for_bdk_boot(cnx):
    # Escape sequence here, hence wait below
    cnx.waitfor("Cavium SOC")
    cnx.match("PASS: CRC32 verification")
    cnx.match("Transferring to thread scheduler")
    cnx.match("Using configuration from previous image")
    cnx.match("Lua 5.2.0  Copyright (C) 1994-2011 Lua.org, PUC-Rio")
    cnx.match("Cavium Diagnostics")
    cnx.match("Copyright (C) 2010-2017 Cavium Inc.")
    cnx.matchRE("BDK Version: .+\n")
    cnx.match("=================================")
    cnx.match("Main Menu")
    cnx.match("=================================")
    # Extra output allowed here
    cnx.waitfor("(INS)Menu choice []:")
    cnx.sendEcho("keys")

def wait_for_main_menu(cnx):
    cnx.waitfor("=================================")
    cnx.match("Main Menu")
    cnx.match("=================================")
    cnx.match("cfg) Display current configuration")
    cnx.match("qlm) SERDES configuration")
    cnx.match("file) File options")
    cnx.match("ddr) DDR options")
    cnx.match("pcie) PCIe options")
    cnx.match("twsi) TWSI options")
    cnx.match("smi) SMI/MDIO options")
    cnx.match("mpi) SPI/MPI options")
    cnx.match("emmc) eMMC/SD options")
    cnx.match("sata) SATA options")
    cnx.match("gpio) GPIO options")
    cnx.match("sgpio) SGPIO options")
    cnx.match("usb) USB options")
    cnx.match("ilua) Interactive Lua prompt")
    cnx.match("tg) Traffic Generator")
    cnx.match("burn) Power Burn options")
    if cnx.chip_model == "CN88XX":
        cnx.match("ccpi) CCPI options")
    # Extra output allowed here
    cnx.waitfor("rbt) Reboot")
    cnx.match("(INS)Menu choice []:")

def boot_normal(cnx, powerCycle = True):
    wait_for_bootstub_messages(cnx, powerCycle)
    wait_for_bdk_boot(cnx)
    wait_for_main_menu(cnx)
