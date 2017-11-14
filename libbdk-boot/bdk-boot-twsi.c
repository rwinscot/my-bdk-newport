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

/**
 * Configure TWSI on all nodes as part of booting
 */
void bdk_boot_twsi(void)
{
    int blob_length = 0;
    const char *blob = bdk_config_get_blob(&blob_length, BDK_CONFIG_TWSI_WRITE);
    if (!blob)
        return;
    const char *done = blob + blob_length;
    const char *str = blob;
    while (str < done)
    {
        /* Check for the special case of a sleep line specifying a delay (ms) */
        if (strncmp(str, "sleep,", 6) == 0)
        {
            int delay = 0;
            int count = sscanf(str, "sleep,%i", &delay);
            if (count != 1)
            {
                bdk_error("Parsing TWSI sleep failed: %s\n", str);
                break;
            }
            bdk_wait_usec(delay * 1000);
        }
        /* Check for the special case of a gpio line specifying a new
           gpio state */
        else if (strncmp(str, "gpio,", 5) == 0)
        {
            int node = 0;
            int gpio = 0;
            int state = 0;
            int count = sscanf(str, "gpio,%i,%i,%i", &node, &gpio, &state);
            if (count != 3)
            {
                bdk_error("Parsing TWSI gpio failed: %s\n", str);
                break;
            }
            bdk_gpio_initialize(node, gpio, 1, state);
        }
        else
        {
            /* Read the parameters from the write */
            int node = 0;
            int twsi_id = 0;
            int dev_addr = 0;
            int internal_addr = 0;
            int num_bytes = 0;
            int ia_width_bytes = 0;
            uint64_t data = 0;
            int count = sscanf(str, "%i,%i,%i,%i,%i,%i,%li", &node, &twsi_id, &dev_addr, &internal_addr, &num_bytes, &ia_width_bytes, &data);
            if (count != 7)
            {
                bdk_error("Parsing TWSI write failed: %s\n", str);
                break;
            }
            if (node == -1)
                node = bdk_numa_local();
            /* Perform the write */
            if (bdk_twsix_write_ia(node, twsi_id, dev_addr, internal_addr, num_bytes, ia_width_bytes, data))
            {
                bdk_error("TWSI write failed: %s\n", str);
                break;
            }
        }

        /* Move to the next string */
        str += strlen(str) + 1;
    }
}
