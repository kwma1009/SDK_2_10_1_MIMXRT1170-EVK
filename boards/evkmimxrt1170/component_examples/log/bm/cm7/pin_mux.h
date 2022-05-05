/*
 * Copyright 2020 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_

/*!
 * @addtogroup pin_mux
 * @{
 */

/***********************************************************************************************************************
 * API
 **********************************************************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @brief Calls initialization functions.
 *
 */
void BOARD_InitBootPins(void);

/* GPIO_AD_04 (coord M13), USER_LED */
/* Routed pin properties */
#define BOARD_INITPINS_USER_LED_PERIPHERAL                                 GPIO9   /*!< Peripheral name */
#define BOARD_INITPINS_USER_LED_SIGNAL                                   gpio_io   /*!< Signal name */
#define BOARD_INITPINS_USER_LED_CHANNEL                                       3U   /*!< Signal channel */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_USER_LED_GPIO                                       GPIO9   /*!< GPIO peripheral base pointer */
#define BOARD_INITPINS_USER_LED_GPIO_PIN                                      3U   /*!< GPIO pin number */
#define BOARD_INITPINS_USER_LED_GPIO_PIN_MASK                         (1U << 3U)   /*!< GPIO pin mask */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitPins(void);                    /* Function assigned for the Cortex-M7F */

#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PIN_MUX_H_ */

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
