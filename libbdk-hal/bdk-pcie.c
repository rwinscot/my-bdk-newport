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

/* This code is an optional part of the BDK. It is only linked in
    if BDK_REQUIRE() needs it */
BDK_REQUIRE_DEFINE(PCIE);

extern const __bdk_pcie_ops_t pcie_ops_cn8xxx;
extern const __bdk_pcie_ops_t pcie_ops_cn9xxx;

static const __bdk_pcie_ops_t* get_ops()
{
    static const __bdk_pcie_ops_t *ops = NULL;
    if (ops == NULL)
    {
        if (CAVIUM_IS_MODEL(CAVIUM_CN8XXX))
            ops = &pcie_ops_cn8xxx;
        else
            ops = &pcie_ops_cn9xxx;
    }
    return ops;
}

/**
 * Return the number of possible PCIe ports on a node. The actual number
 * of configured ports may be less and may also be disjoint.
 *
 * @param node   Node to query
 *
 * @return Number of PCIe ports that are possible
 */
int bdk_pcie_get_num_ports(bdk_node_t node)
{
    return get_ops()->get_num_ports(node);
}

/**
 * Return the Core physical base address for PCIe MEM access. Memory is
 * read/written as an offset from this address.
 *
 * @param node      Node to use in a Numa setup
 * @param pcie_port PCIe port the memory is on
 * @param mem_type  Type of memory
 *
 * @return 64bit physical address for read/write
 */
uint64_t bdk_pcie_get_base_address(bdk_node_t node, int pcie_port, bdk_pcie_mem_t mem_type)
{
    return get_ops()->get_base_address(node, pcie_port, mem_type);
}

/**
 * Size of the Mem address region returned at address
 * bdk_pcie_get_base_address()
 *
 * @param node      Node to use in a Numa setup
 * @param pcie_port PCIe port the IO is for
 * @param mem_type  Type of memory
 *
 * @return Size of the Mem window
 */
uint64_t bdk_pcie_get_base_size(bdk_node_t node, int pcie_port, bdk_pcie_mem_t mem_type)
{
    return get_ops()->get_base_size(node, pcie_port, mem_type);
}

/**
 * Initialize a PCIe port for use in host(RC) mode. It doesn't
 * enumerate the bus.
 *
 * @param pcie_port PCIe port to initialize
 *
 * @return Zero on success
 */
int bdk_pcie_rc_initialize(bdk_node_t node, int pcie_port)
{
    return get_ops()->rc_initialize(node, pcie_port);
}

/**
 * Shutdown a PCIe port and put it in reset
 *
 * @param pcie_port PCIe port to shutdown
 *
 * @return Zero on success
 */
int bdk_pcie_rc_shutdown(bdk_node_t node, int pcie_port)
{
    return get_ops()->rc_shutdown(node, pcie_port);
}

/**
 * Read 8bits from a Device's config space
 *
 * @param pcie_port PCIe port the device is on
 * @param bus       Sub bus
 * @param dev       Device ID
 * @param fn        Device sub function
 * @param reg       Register to access
 *
 * @return Result of the read
 */
uint8_t bdk_pcie_config_read8(bdk_node_t node, int pcie_port, int bus, int dev, int fn, int reg)
{
    uint64_t address = get_ops()->build_config_addr(node, pcie_port, bus, dev, fn, reg);
    BDK_TRACE(PCIE_CONFIG, "N%d.PCIe%d: Config Read8(bus=%d, dev=%d, fn=%d, reg=0x%x, internal=0x%lx)\n",
        node, pcie_port, bus, dev, fn, reg, address);
    uint8_t result;
    if (address)
        result = bdk_read64_uint8(address);
    else
        result = 0xff;
    BDK_TRACE(PCIE_CONFIG, "N%d.PCIe%d:     Result=0x%02x\n", node, pcie_port, result);
    return result;
}


/**
 * Read 16bits from a Device's config space
 *
 * @param pcie_port PCIe port the device is on
 * @param bus       Sub bus
 * @param dev       Device ID
 * @param fn        Device sub function
 * @param reg       Register to access
 *
 * @return Result of the read
 */
uint16_t bdk_pcie_config_read16(bdk_node_t node, int pcie_port, int bus, int dev, int fn, int reg)
{
    uint64_t address = get_ops()->build_config_addr(node, pcie_port, bus, dev, fn, reg);
    BDK_TRACE(PCIE_CONFIG, "N%d.PCIe%d: Config Read16(bus=%d, dev=%d, fn=%d, reg=0x%x, internal=0x%lx)\n",
        node, pcie_port, bus, dev, fn, reg, address);
    uint16_t result;
    if (address)
        result = bdk_le16_to_cpu(bdk_read64_uint16(address));
    else
        result = 0xffff;
    BDK_TRACE(PCIE_CONFIG, "N%d.PCIe%d:     Result=0x%04x\n", node, pcie_port, result);
    return result;
}


/**
 * Read 32bits from a Device's config space
 *
 * @param pcie_port PCIe port the device is on
 * @param bus       Sub bus
 * @param dev       Device ID
 * @param fn        Device sub function
 * @param reg       Register to access
 *
 * @return Result of the read
 */
uint32_t bdk_pcie_config_read32(bdk_node_t node, int pcie_port, int bus, int dev, int fn, int reg)
{
    uint64_t address = get_ops()->build_config_addr(node, pcie_port, bus, dev, fn, reg);
    BDK_TRACE(PCIE_CONFIG, "N%d.PCIe%d: Config Read32(bus=%d, dev=%d, fn=%d, reg=0x%x, internal=0x%lx)\n",
        node, pcie_port, bus, dev, fn, reg, address);
    uint32_t result;
    if (address)
        result = bdk_le32_to_cpu(bdk_read64_uint32(address));
    else
        result = 0xffffffff;
    BDK_TRACE(PCIE_CONFIG, "N%d.PCIe%d:     Result=0x%08x\n", node, pcie_port, result);

    /* Errata ECAM-22630: CN88XX pass 1.x, except pass 1.0, will return zero
       for non-existent devices instead of ones. We look for this special case
       for 32bit reads for reg=0 so we can scan device properly */
    if (CAVIUM_IS_MODEL(CAVIUM_CN88XX_PASS1_X) && (reg == 0) && (result == 0))
        result = 0xffffffff;

    return result;
}


/**
 * Write 8bits to a Device's config space
 *
 * @param pcie_port PCIe port the device is on
 * @param bus       Sub bus
 * @param dev       Device ID
 * @param fn        Device sub function
 * @param reg       Register to access
 * @param val       Value to write
 */
void bdk_pcie_config_write8(bdk_node_t node, int pcie_port, int bus, int dev, int fn, int reg, uint8_t val)
{
    uint64_t address = get_ops()->build_config_addr(node, pcie_port, bus, dev, fn, reg);
    BDK_TRACE(PCIE_CONFIG, "N%d.PCIe%d: Config Write8(bus=%d, dev=%d, fn=%d, reg=0x%x, val=0x%02x, internal=0x%lx)\n",
        node, pcie_port, bus, dev, fn, reg, val, address);
    if (address)
        bdk_write64_uint8(address, val);
}


/**
 * Write 16bits to a Device's config space
 *
 * @param pcie_port PCIe port the device is on
 * @param bus       Sub bus
 * @param dev       Device ID
 * @param fn        Device sub function
 * @param reg       Register to access
 * @param val       Value to write
 */
void bdk_pcie_config_write16(bdk_node_t node, int pcie_port, int bus, int dev, int fn, int reg, uint16_t val)
{
    uint64_t address = get_ops()->build_config_addr(node, pcie_port, bus, dev, fn, reg);
    BDK_TRACE(PCIE_CONFIG, "N%d.PCIe%d: Config Write16(bus=%d, dev=%d, fn=%d, reg=0x%x, val=0x%04x, internal=0x%lx)\n",
        node, pcie_port, bus, dev, fn, reg, val, address);
    if (address)
        bdk_write64_uint16(address, bdk_cpu_to_le16(val));
}


/**
 * Write 32bits to a Device's config space
 *
 * @param pcie_port PCIe port the device is on
 * @param bus       Sub bus
 * @param dev       Device ID
 * @param fn        Device sub function
 * @param reg       Register to access
 * @param val       Value to write
 */
void bdk_pcie_config_write32(bdk_node_t node, int pcie_port, int bus, int dev, int fn, int reg, uint32_t val)
{
    uint64_t address = get_ops()->build_config_addr(node, pcie_port, bus, dev, fn, reg);
    BDK_TRACE(PCIE_CONFIG, "N%d.PCIe%d: Config Write32(bus=%d, dev=%d, fn=%d, reg=0x%x, val=0x%08x, internal=0x%lx)\n",
        node, pcie_port, bus, dev, fn, reg, val, address);
    if (address)
        bdk_write64_uint32(address, bdk_cpu_to_le32(val));
}

/**
 * Read 64bits from PCIe using a memory transaction
 *
 * @param node      Node to read from
 * @param pcie_port PCIe port to read
 * @param address   PCIe address to read
 *
 * @return Result of the read
 */
uint64_t bdk_pcie_mem_read64(bdk_node_t node, int pcie_port, uint64_t address)
{
    uint64_t base_address = get_ops()->get_base_address(node, pcie_port, BDK_PCIE_MEM_NORMAL);
    return bdk_read64_uint64(base_address + address);
}

/**
 * Write 64bits to PCIe memory
 *
 * @param node      Node to write to
 * @param pcie_port PCIe port to use
 * @param address   Address to write
 * @param data      Data to write
 */
void bdk_pcie_mem_write64(bdk_node_t node, int pcie_port, uint64_t address, uint64_t data)
{
    uint64_t base_address = get_ops()->get_base_address(node, pcie_port, BDK_PCIE_MEM_NORMAL);
    bdk_write64_uint64(base_address + address, data);
}

