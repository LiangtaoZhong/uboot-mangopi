/*
 * Configuration settings for new Allwinner F-series (suniv) CPU
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#ifndef __CONFIG_H
#define __CONFIG_H

#define CONFIG_SUNXI_USB_PHYS 1

/*
 * Include common sunxi configuration where most the settings are
 */
#include <configs/sunxi-common.h>

#define CONFIG_VIDEO_LOGO
#define CONFIG_VIDEO_BMP_LOGO
/*
*#define CONFIG_BOOTCOMMAND   "sf probe 0 60000000; "                           \
*                     "sf read 0x80C00000 0x100000 0x4000; "  \
*                     "sf read 0x80008000 0x110000 0x400000; " \
*                     "bootz 0x80008000 - 0x80C00000"
*/

#define CONFIG_BOOTCOMMAND   "load mmc 0:1 0x80c00000 suniv-f1c100s-mangopi.dtb; \
                                load mmc 0:1 0x80008000 zImage; \
                                bootz 0x80008000 - 0x80c00000"

#endif /* __CONFIG_H */
