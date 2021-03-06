/*
 * Copyright 2018 NXP
 *
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "fsl_device_registers.h"

////////////////////////////////////////////////////////////////////////////////
// Definitions
////////////////////////////////////////////////////////////////////////////////
#ifndef IOMUXC_SW_PAD_CTL_PAD_APC
#define IOMUXC_SW_PAD_CTL_PAD_APC_MASK  (0xF0000000U)
#define IOMUXC_SW_PAD_CTL_PAD_APC_SHIFT (28U)
#define IOMUXC_SW_PAD_CTL_PAD_APC(x)    (((uint32_t)(((uint32_t)(x)) << IOMUXC_SW_PAD_CTL_PAD_APC_SHIFT)) & IOMUXC_SW_PAD_CTL_PAD_APC_MASK)
#endif

/*====================== LPUART IOMUXC Definitions ===========================*/
//! peripheral enable configurations
#define BL_ENABLE_PINMUX_UART1 (BL_CONFIG_LPUART_1)

#define UART1_RX_IOMUXC_MUX_FUNC IOMUXC_GPIO_AD_25_LPUART1_RXD
#define UART1_RX_IOMUXC_MUX_GPIO IOMUXC_GPIO_AD_25_GPIO_MUX3_IO24
#define UART1_RX_IOMUXC_MUX_CM4_GPIO IOMUXC_GPIO_AD_25_GPIO_MUX3_IO24
#define UART1_RX_IOMUXC_PAD_DEFAULT 0x00000002
#define UART1_RX_GPIO_BASE GPIO3
#define UART1_RX_GPIO_CM4_BASE GPIO3
#define UART1_RX_GPIO_PIN_NUM 24 // GPIO_AD_25/GPIO3[24]
#define UART1_RX_GPIO_IRQn GPIO3_Combined_16_31_IRQn
#define UART1_RX_GPIO_IRQHandler GPIO3_Combined_16_31_IRQHandler

#define UART1_TX_IOMUXC_MUX_FUNC IOMUXC_GPIO_AD_24_LPUART1_TXD
#define UART1_TX_IOMUXC_PAD_DEFAULT 0x00000002
#define UART1_TX_GPIO_PIN_NUM 23 // GPIO_AD_24/GPIO3[23]

#define LPUART1_PAD_CTRL \
    (IOMUXC_SW_PAD_CTL_PAD_DSE(1) | IOMUXC_SW_PAD_CTL_PAD_PUE(1) | IOMUXC_SW_PAD_CTL_PAD_PUS(1))
#define UART1_PULLUP_PAD_CTRL (IOMUXC_SW_PAD_CTL_PAD_PUE(1) | IOMUXC_SW_PAD_CTL_PAD_PUS(1))
#define UART1_PULLUP_DISABLE_PAD_CTRL (IOMUXC_SW_PAD_CTL_PAD_PUE(1))

/*====================== SDIO SLAVE IOMUXC Definitions ===========================*/
#define BL_ENABLE_PINMUX_SDIO_SLAVE0 (BL_CONFIG_SDIO_SLAVE_0)

#define SDIO0_CMD_IOMUXC_MUX_FUNC IOMUXC_GPIO_SD_B1_00_SDIO_CMD
#define SDIO0_CMD_IOMUXC_PAD_DEFAULT 0x00000008
#define SDIO0_CLK_IOMUXC_MUX_FUNC IOMUXC_GPIO_SD_B1_01_SDIO_CLK
#define SDIO0_CLK_IOMUXC_PAD_DEFAULT 0x00000008
#define SDIO0_DATA0_IOMUXC_MUX_FUNC IOMUXC_GPIO_SD_B1_02_SDIO_DATA0
#define SDIO0_DATA0_IOMUXC_PAD_DEFAULT 0x00000008
#define SDIO0_DATA1_IOMUXC_MUX_FUNC IOMUXC_GPIO_SD_B1_03_SDIO_DATA1
#define SDIO0_DATA1_IOMUXC_PAD_DEFAULT 0x00000008
#define SDIO0_DATA2_IOMUXC_MUX_FUNC IOMUXC_GPIO_SD_B1_04_SDIO_DATA2
#define SDIO0_DATA2_IOMUXC_PAD_DEFAULT 0x00000008
#define SDIO0_DATA3_IOMUXC_MUX_FUNC IOMUXC_GPIO_SD_B1_05_SDIO_DATA3
#define SDIO0_DATA3_IOMUXC_PAD_DEFAULT 0x00000008

/*====================== LPSPI IOMUXC Definitions ===========================*/
/* LPSPI1 PINMUX Info  */
#define SW_MUX_CTL_PAD_LPSPI1_PCS0_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_AD_29
#define SW_MUX_CTL_PAD_LPSPI1_SCK_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_AD_28
#define SW_MUX_CTL_PAD_LPSPI1_SIN_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_AD_31
#define SW_MUX_CTL_PAD_LPSPI1_SOUT_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_AD_30

#define SW_PAD_CTL_PAD_LPSPI1_PCS0_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_AD_29
#define SW_PAD_CTL_PAD_LPSPI1_SCK_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_AD_28
#define SW_PAD_CTL_PAD_LPSPI1_SIN_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_AD_31
#define SW_PAD_CTL_PAD_LPSPI1_SOUT_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_AD_30

#define SELECT_INPUT_LPSPI1_SDI_IDX kIOMUXC_LPSPI1_LPSPI_SDI_SELECT_INPUT

#define LPSPI1_MUX_VAL IOMUXC_SW_MUX_CTL_PAD_MUX_MODE(0)
#define GPIO_MUX_VAL IOMUXC_SW_MUX_CTL_PAD_MUX_MODE(5)
#define LPSPI1_PCS_GPIO GPIO3
#define LPSPI1_PCS_GPIO_NUM 28

/* LPSPI2 PINMUX Info */
#define SW_MUX_CTL_PAD_LPSPI2_PCS0_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_08
#define SW_MUX_CTL_PAD_LPSPI2_SCK_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_07
#define SW_MUX_CTL_PAD_LPSPI2_SIN_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_10
#define SW_MUX_CTL_PAD_LPSPI2_SOUT_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_09

#define SW_PAD_CTL_PAD_LPSPI2_PCS0_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_SD_B2_08
#define SW_PAD_CTL_PAD_LPSPI2_SCK_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_SD_B2_07
#define SW_PAD_CTL_PAD_LPSPI2_SIN_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_SD_B2_10
#define SW_PAD_CTL_PAD_LPSPI2_SOUT_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_SD_B2_09

#define SELECT_INPUT_LPSPI2_SDI_IDX kIOMUXC_LPSPI2_LPSPI_SDI_SELECT_INPUT

#define LPSPI2_MUX_VAL IOMUXC_SW_MUX_CTL_PAD_MUX_MODE(6)
#define LPSPI2_PCS_GPIO GPIO4
#define LPSPI2_PCS_GPIO_NUM 17

/* LPSPI3 PINMUX Info */
#define SW_MUX_CTL_PAD_LPSPI3_PCS0_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_07
#define SW_MUX_CTL_PAD_LPSPI3_SCK_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_04
#define SW_MUX_CTL_PAD_LPSPI3_SIN_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_05
#define SW_MUX_CTL_PAD_LPSPI3_SOUT_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B1_06

#define SW_PAD_CTL_PAD_LPSPI3_PCS0_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_DISP_B1_07
#define SW_PAD_CTL_PAD_LPSPI3_SCK_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_DISP_B1_04
#define SW_PAD_CTL_PAD_LPSPI3_SIN_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_DISP_B1_05
#define SW_PAD_CTL_PAD_LPSPI3_SOUT_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_DISP_B1_06

#define SELECT_INPUT_LPSPI3_SDI_IDX kIOMUXC_LPSPI3_LPSPI_SDI_SELECT_INPUT

#define LPSPI3_MUX_VAL IOMUXC_SW_MUX_CTL_PAD_MUX_MODE(9)
#define LPSPI3_PCS_GPIO GPIO4
#define LPSPI3_PCS_GPIO_NUM 28

/* LPSPI4 PINMUX Info */
#define SW_MUX_CTL_PAD_LPSPI4_PCS0_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_15
#define SW_MUX_CTL_PAD_LPSPI4_SCK_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_12
#define SW_MUX_CTL_PAD_LPSPI4_SIN_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_13
#define SW_MUX_CTL_PAD_LPSPI4_SOUT_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_DISP_B2_14

#define SW_PAD_CTL_PAD_LPSPI4_PCS0_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_DISP_B2_15
#define SW_PAD_CTL_PAD_LPSPI4_SCK_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_DISP_B2_12
#define SW_PAD_CTL_PAD_LPSPI4_SIN_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_DISP_B2_13
#define SW_PAD_CTL_PAD_LPSPI4_SOUT_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_DISP_B2_14

#define SELECT_INPUT_LPSPI4_SDI_IDX kIOMUXC_LPSPI4_LPSPI_SDI_SELECT_INPUT

#define LPSPI4_MUX_VAL IOMUXC_SW_MUX_CTL_PAD_MUX_MODE(9)
#define LPSPI4_PCS_GPIO GPIO5
#define LPSPI4_PCS_GPIO_NUM 16

// Fast Slew rate
// High Drive
#define LPSPI1_SW_PAD_CTL_VAL                                                                              \
    (IOMUXC_SW_PAD_CTL_PAD_SRE(1) | IOMUXC_SW_PAD_CTL_PAD_DSE(1) | IOMUXC_SW_PAD_CTL_PAD_PUE(0) | \
     IOMUXC_SW_PAD_CTL_PAD_PUS(1))
#define LPSPI2_SW_PAD_CTL_VAL (IOMUXC_SW_PAD_CTL_PAD_PDRV(0) | IOMUXC_SW_PAD_CTL_PAD_PULL(3))
#define LPSPI3_SW_PAD_CTL_VAL (IOMUXC_SW_PAD_CTL_PAD_PDRV(0) | IOMUXC_SW_PAD_CTL_PAD_PULL(3))
#define LPSPI4_SW_PAD_CTL_VAL (IOMUXC_SW_PAD_CTL_PAD_PDRV(0) | IOMUXC_SW_PAD_CTL_PAD_PULL(3))
// Fast Slew rate
// High Drive
#define GPIO_SW_PAD_CTL_VAL (IOMUXC_SW_PAD_CTL_PAD_SRE(1) | IOMUXC_SW_PAD_CTL_PAD_DSE(1))

#define LPSPI1_SDI_SELECT_INPUT_VAL IOMUXC_SELECT_INPUT_DAISY(1) // SELECT_GPIO_AD_31_ALT0
#define LPSPI2_SDI_SELECT_INPUT_VAL IOMUXC_SELECT_INPUT_DAISY(1) // SELECT_GPIO_SD_B2_07_ALT6
#define LPSPI3_SDI_SELECT_INPUT_VAL IOMUXC_SELECT_INPUT_DAISY(1) // SELECT_GPIO_DISP_B1_05_ALT9
#define LPSPI4_SDI_SELECT_INPUT_VAL IOMUXC_SELECT_INPUT_DAISY(1) // SELECT_GPIO_DISP_B2_13_ALT9

/*====================== FLEXSPI1 IOMUXC Definitions ===========================*/
#define SW_MUX_CTL_PAD_FLEXSPI1B_DQS_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_05
#define SW_MUX_CTL_PAD_FLEXSPI1B_DATA3_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_00
#define SW_MUX_CTL_PAD_FLEXSPI1B_DATA2_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_01
#define SW_MUX_CTL_PAD_FLEXSPI1B_DATA1_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_02
#define SW_MUX_CTL_PAD_FLEXSPI1B_DATA0_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_03
#define SW_MUX_CTL_PAD_FLEXSPI1B_SS0_B_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_04
#define SW_MUX_CTL_PAD_FLEXSPI1B_SS1_B_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_03
#define SW_MUX_CTL_PAD_FLEXSPI1B_SCLK_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_04

#define SW_MUX_CTL_PAD_FLEXSPI1A_DQS_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_05
#define SW_MUX_CTL_PAD_FLEXSPI1A_SS0_B_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_06
#define SW_MUX_CTL_PAD_FLEXSPI1A_SS1_B_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_02
#define SW_MUX_CTL_PAD_FLEXSPI1A_SCLK_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_07
#define SW_MUX_CTL_PAD_FLEXSPI1A_DATA0_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_08
#define SW_MUX_CTL_PAD_FLEXSPI1A_DATA1_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_09
#define SW_MUX_CTL_PAD_FLEXSPI1A_DATA2_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_10
#define SW_MUX_CTL_PAD_FLEXSPI1A_DATA3_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_11
#define SW_MUX_CTL_PAD_FLEXSPI1A_SCLK_B_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_04

#define SW_PAD_CTL_PAD_FLEXSPI1B_DQS_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_05
#define SW_PAD_CTL_PAD_FLEXSPI1B_DATA3_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_00
#define SW_PAD_CTL_PAD_FLEXSPI1B_DATA2_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_01
#define SW_PAD_CTL_PAD_FLEXSPI1B_DATA1_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_02
#define SW_PAD_CTL_PAD_FLEXSPI1B_DATA0_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_03
#define SW_PAD_CTL_PAD_FLEXSPI1B_SS0_B_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_04
#define SW_PAD_CTL_PAD_FLEXSPI1B_SS1_B_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_03
#define SW_PAD_CTL_PAD_FLEXSPI1B_SCLK_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_04

#define SW_PAD_CTL_PAD_FLEXSPI1A_DQS_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_05
#define SW_PAD_CTL_PAD_FLEXSPI1A_SS0_B_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_06
#define SW_PAD_CTL_PAD_FLEXSPI1A_SS1_B_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_02
#define SW_PAD_CTL_PAD_FLEXSPI1A_SCLK_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_07
#define SW_PAD_CTL_PAD_FLEXSPI1A_DATA0_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_08
#define SW_PAD_CTL_PAD_FLEXSPI1A_DATA1_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_09
#define SW_PAD_CTL_PAD_FLEXSPI1A_DATA2_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_10
#define SW_PAD_CTL_PAD_FLEXSPI1A_DATA3_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_11
#define SW_PAD_CTL_PAD_FLEXSPI1A_SCLK_B_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B2_04

#define FLEXSPI1A_MUX_VAL IOMUXC_SW_MUX_CTL_PAD_MUX_MODE(1)
#define FLEXSPI1B_MUX_VAL IOMUXC_SW_MUX_CTL_PAD_MUX_MODE(1)
#define FLEXSPI1A_SS1_MUX_VAL IOMUXC_SW_MUX_CTL_PAD_MUX_MODE(9)
#define FLEXSPI1B_SS1_MUX_VAL IOMUXC_SW_MUX_CTL_PAD_MUX_MODE(9)
#define FLEXSPI1B_SS0_MUX_VAL IOMUXC_SW_MUX_CTL_PAD_MUX_MODE(8)
#define FLEXSPI1B_DQS_MUX_VAL IOMUXC_SW_MUX_CTL_PAD_MUX_MODE(8)

// Fast Slew Rate
#define FLEXSPI_SW_PAD_CTL_VAL (IOMUXC_SW_PAD_CTL_PAD_SRE(1))

// Pull-down
#define FLEXSPI_DQS_SW_PAD_CTL_VAL (IOMUXC_SW_PAD_CTL_PAD_PULL(2))

// Fast Slew Rate
// Drive
// Pulldown
#define FLEXSPI_DQS_SW_PAD_AD_CTL_VAL \
    (IOMUXC_SW_PAD_CTL_PAD_SRE(1) | IOMUXC_SW_PAD_CTL_PAD_PUE(1) | IOMUXC_SW_PAD_CTL_PAD_PUS(0))

/*====================== FLEXSPI1 Secondary IOMUXC Definitions ===========================*/
#define SW_MUX_CTL_PAD_FLEXSPI1A_SEC_SS0_B_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_AD_18
#define SW_MUX_CTL_PAD_FLEXSPI1A_SEC_SCLK_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_AD_19
#define SW_MUX_CTL_PAD_FLEXSPI1A_SEC_DATA0_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_AD_20
#define SW_MUX_CTL_PAD_FLEXSPI1A_SEC_DATA1_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_AD_21
#define SW_MUX_CTL_PAD_FLEXSPI1A_SEC_DATA2_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_AD_22
#define SW_MUX_CTL_PAD_FLEXSPI1A_SEC_DATA3_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_AD_23
#define SW_MUX_CTL_PAD_FLEXSPI1A_SEC_DQS_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_AD_17

#define SW_PAD_CTL_PAD_FLEXSPI1A_SEC_SS0_B_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_AD_18
#define SW_PAD_CTL_PAD_FLEXSPI1A_SEC_SCLK_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_AD_19
#define SELECT_INPUT_FLEXSPI1A_SEC_SCLK_IDX kIOMUXC_FLEXSPIA_SCK_SELECT_INPUT
#define SW_PAD_CTL_PAD_FLEXSPI1A_SEC_DATA0_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_AD_20
#define SELECT_INPUT_FLEXSPI1A_SEC_DATA0_IDX kIOMUXC_FLEXSPIA_DATA0_SELECT_INPUT
#define SW_PAD_CTL_PAD_FLEXSPI1A_SEC_DATA1_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_AD_21
#define SELECT_INPUT_FLEXSPI1A_SEC_DATA1_IDX kIOMUXC_FLEXSPIA_DATA1_SELECT_INPUT
#define SW_PAD_CTL_PAD_FLEXSPI1A_SEC_DATA2_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_AD_22
#define SELECT_INPUT_FLEXSPI1A_SEC_DATA2_IDX kIOMUXC_FLEXSPIA_DATA2_SELECT_INPUT
#define SW_PAD_CTL_PAD_FLEXSPI1A_SEC_DATA3_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_AD_23
#define SELECT_INPUT_FLEXSPI1A_SEC_DATA3_IDX kIOMUXC_FLEXSPIA_DATA3_SELECT_INPUT

#define SW_MUX_CTL_PAD_FLEXSPI1B_SEC_SCLK_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_AD_16
#define SW_MUX_CTL_PAD_FLEXSPI1B_SEC_DATA0_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_AD_15
#define SW_MUX_CTL_PAD_FLEXSPI1B_SEC_DATA1_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_AD_14
#define SW_MUX_CTL_PAD_FLEXSPI1B_SEC_DATA2_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_AD_13
#define SW_MUX_CTL_PAD_FLEXSPI1B_SEC_DATA3_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_AD_12

#define SW_PAD_CTL_PAD_FLEXSPI1B_SEC_SCLK_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_AD_16
#define SELECT_INPUT_FLEXSPI1B_SEC_SCLK_IDX kIOMUXC_FLEXSPIB_SCK_SELECT_INPUT
#define SW_PAD_CTL_PAD_FLEXSPI1B_SEC_DATA0_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_AD_15
#define SELECT_INPUT_FLEXSPI1B_SEC_DATA0_IDX kIOMUXC_FLEXSPIB_DATA0_SELECT_INPUT
#define SW_PAD_CTL_PAD_FLEXSPI1B_SEC_DATA1_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_AD_14
#define SELECT_INPUT_FLEXSPI1B_SEC_DATA1_IDX kIOMUXC_FLEXSPIB_DATA1_SELECT_INPUT
#define SW_PAD_CTL_PAD_FLEXSPI1B_SEC_DATA2_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_AD_13
#define SELECT_INPUT_FLEXSPI1B_SEC_DATA2_IDX kIOMUXC_FLEXSPIB_DATA2_SELECT_INPUT
#define SW_PAD_CTL_PAD_FLEXSPI1B_SEC_DATA3_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_AD_12
#define SELECT_INPUT_FLEXSPI1B_SEC_DATA3_IDX kIOMUXC_FLEXSPIB_DATA3_SELECT_INPUT

#define SW_PAD_CTL_PAD_FLEXSPI1A_SEC_DQS_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_AD_24
#define SELECT_INPUT_FLEXSPI1A_SEC_DQS_IDX kIOMUXC_FLEXSPIA_DQS_SELECT_INPUT

#define FLEXSPI1A_SEC_MUX_VAL IOMUXC_SW_MUX_CTL_PAD_MUX_MODE(3)

/*====================== FLEXSPI2 IOMUXC Definitions ===========================*/
#define SW_MUX_CTL_PAD_FLEXSPI2B_DATA7_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_41
#define SW_MUX_CTL_PAD_FLEXSPI2B_DATA6_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_00
#define SW_MUX_CTL_PAD_FLEXSPI2B_DATA5_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_01
#define SW_MUX_CTL_PAD_FLEXSPI2B_DATA4_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_02
#define SW_MUX_CTL_PAD_FLEXSPI2B_DATA3_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_03
#define SW_MUX_CTL_PAD_FLEXSPI2B_DATA2_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_04
#define SW_MUX_CTL_PAD_FLEXSPI2B_DATA1_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_05
#define SW_MUX_CTL_PAD_FLEXSPI2B_DATA0_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_06
#define SW_MUX_CTL_PAD_FLEXSPI2B_DQS_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_07
#define SW_MUX_CTL_PAD_FLEXSPI2B_SS0_B_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_08
#define SW_MUX_CTL_PAD_FLEXSPI2B_SCLK_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_09

#define SW_MUX_CTL_PAD_FLEXSPI2A_SCLK_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_10
#define SW_MUX_CTL_PAD_FLEXSPI2A_SS0_B_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_11
#define SW_MUX_CTL_PAD_FLEXSPI2A_DQS_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_12
#define SW_MUX_CTL_PAD_FLEXSPI2A_DATA0_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_13
#define SW_MUX_CTL_PAD_FLEXSPI2A_DATA1_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_14
#define SW_MUX_CTL_PAD_FLEXSPI2A_DATA2_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_15
#define SW_MUX_CTL_PAD_FLEXSPI2A_DATA3_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_16
#define SW_MUX_CTL_PAD_FLEXSPI2A_DATA4_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_17
#define SW_MUX_CTL_PAD_FLEXSPI2A_DATA5_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_18
#define SW_MUX_CTL_PAD_FLEXSPI2A_DATA6_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_19
#define SW_MUX_CTL_PAD_FLEXSPI2A_DATA7_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_20
#define SW_MUX_CTL_PAD_FLEXSPI2A_SCLK_B_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_09

#define SW_PAD_CTL_PAD_FLEXSPI2B_DATA7_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_41
#define SW_PAD_CTL_PAD_FLEXSPI2B_DATA6_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B2_00
#define SW_PAD_CTL_PAD_FLEXSPI2B_DATA5_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B2_01
#define SW_PAD_CTL_PAD_FLEXSPI2B_DATA4_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B2_02
#define SW_PAD_CTL_PAD_FLEXSPI2B_DATA3_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B2_03
#define SW_PAD_CTL_PAD_FLEXSPI2B_DATA2_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B2_04
#define SW_PAD_CTL_PAD_FLEXSPI2B_DATA1_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B2_05
#define SW_PAD_CTL_PAD_FLEXSPI2B_DATA0_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B2_06
#define SW_PAD_CTL_PAD_FLEXSPI2B_DQS_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B2_07
#define SW_PAD_CTL_PAD_FLEXSPI2B_SS0_B_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B2_08
#define SW_PAD_CTL_PAD_FLEXSPI2B_SCLK_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B2_09

#define SW_PAD_CTL_PAD_FLEXSPI2A_SCLK_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B2_10
#define SW_PAD_CTL_PAD_FLEXSPI2A_SS0_B_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B2_11
#define SW_PAD_CTL_PAD_FLEXSPI2A_DQS_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B2_12
#define SW_PAD_CTL_PAD_FLEXSPI2A_DATA0_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B2_13
#define SW_PAD_CTL_PAD_FLEXSPI2A_DATA1_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B2_14
#define SW_PAD_CTL_PAD_FLEXSPI2A_DATA2_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B2_15
#define SW_PAD_CTL_PAD_FLEXSPI2A_DATA3_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B2_16
#define SW_PAD_CTL_PAD_FLEXSPI2A_DATA4_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B2_17
#define SW_PAD_CTL_PAD_FLEXSPI2A_DATA5_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B2_18
#define SW_PAD_CTL_PAD_FLEXSPI2A_DATA6_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B2_19
#define SW_PAD_CTL_PAD_FLEXSPI2A_DATA7_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B2_20
#define SW_PAD_CTL_PAD_FLEXSPI2A_SCLK_B_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B2_09

#define FLEXSPI2A_MUX_VAL IOMUXC_SW_MUX_CTL_PAD_MUX_MODE(4)
#define FLEXSPI2B_MUX_VAL IOMUXC_SW_MUX_CTL_PAD_MUX_MODE(4)
#define FLEXSPI2B_SS0_MUX_VAL IOMUXC_SW_MUX_CTL_PAD_MUX_MODE(4)
#define FLEXSPI2B_DQS_MUX_VAL IOMUXC_SW_MUX_CTL_PAD_MUX_MODE(4)

/*====================== FLEXSPI2 Second IOMUXC Definitions ===========================*/
#define SW_MUX_CTL_PAD_FLEXSPI2A_SEC_SS0_B_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_00
#define SW_MUX_CTL_PAD_FLEXSPI2A_SEC_SCLK_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_01
#define SW_MUX_CTL_PAD_FLEXSPI2A_SEC_DATA0_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_02
#define SW_MUX_CTL_PAD_FLEXSPI2A_SEC_DATA1_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_03
#define SW_MUX_CTL_PAD_FLEXSPI2A_SEC_DATA2_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_04
#define SW_MUX_CTL_PAD_FLEXSPI2A_SEC_DATA3_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_05

#define SW_PAD_CTL_PAD_FLEXSPI2A_SEC_SS0_B_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_SD_B1_00
#define SW_PAD_CTL_PAD_FLEXSPI2A_SEC_SCLK_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_SD_B1_01
#define SELECT_INPUT_FLEXSPI2A_SEC_SCLK_IDX kIOMUXC_FLEXSP2A_SCK_SELECT_INPUT
#define SW_PAD_CTL_PAD_FLEXSPI2A_SEC_DATA0_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_SD_B1_02
#define SELECT_INPUT_FLEXSPI2A_SEC_DATA0_IDX kIOMUXC_FLEXSP2A_DATA0_SELECT_INPUT
#define SW_PAD_CTL_PAD_FLEXSPI2A_SEC_DATA1_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_SD_B1_03
#define SELECT_INPUT_FLEXSPI2A_SEC_DATA1_IDX kIOMUXC_FLEXSP2A_DATA1_SELECT_INPUT
#define SW_PAD_CTL_PAD_FLEXSPI2A_SEC_DATA2_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_SD_B1_04
#define SELECT_INPUT_FLEXSPI2A_SEC_DATA2_IDX kIOMUXC_FLEXSPI2A_DATA2_SELECT_INPUT
#define SW_PAD_CTL_PAD_FLEXSPI2A_SEC_DATA3_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_SD_B1_05
#define SELECT_INPUT_FLEXSPI2A_SEC_DATA3_IDX kIOMUXC_FLEXSPI2A_DATA3_SELECT_INPUT

/*====================== FLEXSPI Reset IOMUXC Definitions ===========================*/
#define SW_MUX_CTL_PAD_FLEXSPI_RESET_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_SD_B1_00
#define SW_PAD_CTL_PAD_FLEXSPI_RESET_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_SD_B1_00
#define FLEXSPI_RESET_PIN_MUX IOMUXC_SW_MUX_CTL_PAD_MUX_MODE(5)
#define FLEXSPI_RESET_PIN_SW_PAD_CTRL_VAL                                                                    \
    (IOMUXC_SW_PAD_CTL_PAD_PDRV(1) | IOMUXC_SW_PAD_CTL_PAD_PULL(0) | IOMUXC_SW_PAD_CTL_PAD_ODE(0) | \
     IOMUXC_SW_PAD_CTL_PAD_APC(0))
#define FLEXSPI_RESET_PIN_GPIO GPIO4
#define FLEXSPI_RESET_PIN_INDEX 3

#define SW_MUX_CTL_PAD_FLEXSPI_SEC_RESET_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_40
#define SW_PAD_CTL_PAD_FLEXSPI_SEC_RESET_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_40
#define FLEXSPI_RESET_SEC_PIN_MUX IOMUXC_SW_MUX_CTL_PAD_MUX_MODE(5)
#define FLEXSPI_RESET_SEC_PIN_SW_PAD_CTRL_VAL                                                     \
    (IOMUXC_SW_PAD_CTL_PAD_DSE(4) | IOMUXC_SW_PAD_CTL_PAD_PKE(1) | IOMUXC_SW_PAD_CTL_PAD_PUE(0) | \
     IOMUXC_SW_PAD_CTL_PAD_PUS(0))
#define FLEXSPI_RESET_SEC_PIN_GPIO GPIO2
#define FLEXSPI_RESET_SEC_PIN_INDEX 8

/*====================== SEMC IOMUXC Definitions ===========================*/

#define SW_MUX_CTL_PAD_SEMC_DATA0_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_00
#define SW_MUX_CTL_PAD_SEMC_DATA1_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_01
#define SW_MUX_CTL_PAD_SEMC_DATA2_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_02
#define SW_MUX_CTL_PAD_SEMC_DATA3_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_03
#define SW_MUX_CTL_PAD_SEMC_DATA4_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_04
#define SW_MUX_CTL_PAD_SEMC_DATA5_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_05
#define SW_MUX_CTL_PAD_SEMC_DATA6_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_06
#define SW_MUX_CTL_PAD_SEMC_DATA7_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_07
#define SW_MUX_CTL_PAD_SEMC_DATA8_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_30
#define SW_MUX_CTL_PAD_SEMC_DATA9_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_31
#define SW_MUX_CTL_PAD_SEMC_DATA10_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_32
#define SW_MUX_CTL_PAD_SEMC_DATA11_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_33
#define SW_MUX_CTL_PAD_SEMC_DATA12_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_34
#define SW_MUX_CTL_PAD_SEMC_DATA13_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_35
#define SW_MUX_CTL_PAD_SEMC_DATA14_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_36
#define SW_MUX_CTL_PAD_SEMC_DATA15_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_37
#define SW_MUX_CTL_PAD_SEMC_ADDR0_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_09
#define SW_MUX_CTL_PAD_SEMC_ADDR1_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_10
#define SW_MUX_CTL_PAD_SEMC_ADDR2_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_11
#define SW_MUX_CTL_PAD_SEMC_ADDR3_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_12
#define SW_MUX_CTL_PAD_SEMC_ADDR4_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_13
#define SW_MUX_CTL_PAD_SEMC_ADDR5_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_14
#define SW_MUX_CTL_PAD_SEMC_ADDR6_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_15
#define SW_MUX_CTL_PAD_SEMC_ADDR7_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_16
#define SW_MUX_CTL_PAD_SEMC_ADDR8_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_17
#define SW_MUX_CTL_PAD_SEMC_ADDR9_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_18
#define SW_MUX_CTL_PAD_SEMC_ADDR10_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_23
#define SW_MUX_CTL_PAD_SEMC_ADDR11_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_19
#define SW_MUX_CTL_PAD_SEMC_ADDR12_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_20
#define SW_MUX_CTL_PAD_SEMC_BA0_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_21
#define SW_MUX_CTL_PAD_SEMC_BA1_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_22
#define SW_MUX_CTL_PAD_SEMC_DQS_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_39
#define SW_MUX_CTL_PAD_SEMC_RDY_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_40
#define SW_MUX_CTL_PAD_SEMC_CSX0_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B1_41
#define SW_MUX_CTL_PAD_SEMC_CSX1_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_AD_26
#define SW_MUX_CTL_PAD_SEMC_CSX2_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_AD_27
#define SW_MUX_CTL_PAD_SEMC_CSX3_IDX kIOMUXC_SW_MUX_CTL_PAD_GPIO_AD_28

#define SW_PAD_CTL_PAD_SEMC_DATA0_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_00
#define SW_PAD_CTL_PAD_SEMC_DATA1_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_01
#define SW_PAD_CTL_PAD_SEMC_DATA2_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_02
#define SW_PAD_CTL_PAD_SEMC_DATA3_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_03
#define SW_PAD_CTL_PAD_SEMC_DATA4_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_04
#define SW_PAD_CTL_PAD_SEMC_DATA5_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_05
#define SW_PAD_CTL_PAD_SEMC_DATA6_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_06
#define SW_PAD_CTL_PAD_SEMC_DATA7_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_07
#define SW_PAD_CTL_PAD_SEMC_DATA8_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_30
#define SW_PAD_CTL_PAD_SEMC_DATA9_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_31
#define SW_PAD_CTL_PAD_SEMC_DATA10_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_32
#define SW_PAD_CTL_PAD_SEMC_DATA11_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_33
#define SW_PAD_CTL_PAD_SEMC_DATA12_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_34
#define SW_PAD_CTL_PAD_SEMC_DATA13_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_35
#define SW_PAD_CTL_PAD_SEMC_DATA14_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_36
#define SW_PAD_CTL_PAD_SEMC_DATA15_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_37
#define SW_PAD_CTL_PAD_SEMC_ADDR0_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_09
#define SW_PAD_CTL_PAD_SEMC_ADDR1_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_10
#define SW_PAD_CTL_PAD_SEMC_ADDR2_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_11
#define SW_PAD_CTL_PAD_SEMC_ADDR3_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_12
#define SW_PAD_CTL_PAD_SEMC_ADDR4_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_13
#define SW_PAD_CTL_PAD_SEMC_ADDR5_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_14
#define SW_PAD_CTL_PAD_SEMC_ADDR6_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_15
#define SW_PAD_CTL_PAD_SEMC_ADDR7_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_16
#define SW_PAD_CTL_PAD_SEMC_ADDR8_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_17
#define SW_PAD_CTL_PAD_SEMC_ADDR9_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_18
#define SW_PAD_CTL_PAD_SEMC_ADDR10_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_23
#define SW_PAD_CTL_PAD_SEMC_ADDR11_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_19
#define SW_PAD_CTL_PAD_SEMC_ADDR12_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_20
#define SW_PAD_CTL_PAD_SEMC_BA0_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_21
#define SW_PAD_CTL_PAD_SEMC_BA1_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_22
#define SW_PAD_CTL_PAD_SEMC_DQS_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_39
#define SW_PAD_CTL_PAD_SEMC_RDY_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_40
#define SW_PAD_CTL_PAD_SEMC_CSX0_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_EMC_B1_41
#define SW_PAD_CTL_PAD_SEMC_CSX1_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_AD_26
#define SW_PAD_CTL_PAD_SEMC_CSX2_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_AD_27
#define SW_PAD_CTL_PAD_SEMC_CSX3_IDX kIOMUXC_SW_PAD_CTL_PAD_GPIO_AD_28

#define SEMC_MUX_VAL IOMUXC_SW_MUX_CTL_PAD_MUX_MODE(0)
#define SEMC_CSX0_MUX_VAL IOMUXC_SW_MUX_CTL_PAD_MUX_MODE(0)
#define SEMC_CSX1_MUX_VAL IOMUXC_SW_MUX_CTL_PAD_MUX_MODE(2)// SEMC_CSX1 of instance
#define SEMC_CSX2_MUX_VAL IOMUXC_SW_MUX_CTL_PAD_MUX_MODE(2)// SEMC_CSX2 of instance
#define SEMC_CSX3_MUX_VAL IOMUXC_SW_MUX_CTL_PAD_MUX_MODE(2)// SEMC_CSX3 of instance
#define SEMC_CSX123_MUX_VAL IOMUXC_SW_MUX_CTL_PAD_MUX_MODE(6)

// No-Pull
#define SEMC_SW_PAD_CTL_VAL IOMUXC_SW_PAD_CTL_PAD_PULL(3)

// Pull-up
#define SEMC_RDY_SW_PAD_CTL_VAL IOMUXC_SW_PAD_CTL_PAD_PULL(1)

// Pull-down
#define SEMC_DQS_SW_PAD_CTL_VAL IOMUXC_SW_PAD_CTL_PAD_PULL(2)

////////////////////////////////////////////////////////////////////////////////
// EOF
////////////////////////////////////////////////////////////////////////////////
