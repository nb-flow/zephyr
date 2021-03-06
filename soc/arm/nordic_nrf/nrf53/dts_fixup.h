/*
 * Copyright (c) 2019 Nordic Semiconductor ASA
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/* SoC level DTS fixup file */

#define DT_ADC_0_NAME			DT_NORDIC_NRF_SAADC_ADC_0_LABEL

#define DT_UART_0_NAME			DT_NORDIC_NRF_UARTE_UART_0_LABEL
#define DT_UART_1_NAME			DT_NORDIC_NRF_UARTE_UART_1_LABEL

#define DT_FLASH_DEV_NAME		DT_LABEL(DT_INST(0, nordic_nrf53_flash_controller))

#define DT_SPI_0_NAME			DT_NORDIC_NRF_SPIM_SPI_0_LABEL
#define DT_SPI_1_NAME			DT_NORDIC_NRF_SPIM_SPI_1_LABEL
#define DT_SPI_2_NAME			DT_NORDIC_NRF_SPIM_SPI_2_LABEL

#define DT_TIMER_0_NAME			DT_NORDIC_NRF_TIMER_TIMER_0_LABEL
#define DT_TIMER_1_NAME			DT_NORDIC_NRF_TIMER_TIMER_1_LABEL
#define DT_TIMER_2_NAME			DT_NORDIC_NRF_TIMER_TIMER_2_LABEL

#define DT_RTC_0_NAME			DT_NORDIC_NRF_RTC_RTC_0_LABEL
#define DT_RTC_1_NAME			DT_NORDIC_NRF_RTC_RTC_1_LABEL

/* End of SoC Level DTS fixup file */
