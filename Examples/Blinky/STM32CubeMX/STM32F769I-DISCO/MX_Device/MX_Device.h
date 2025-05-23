/******************************************************************************
 * File Name   : MX_Device.h
 * Date        : 27/09/2024 15:05:47
 * Description : STM32Cube MX parameter definitions
 * Note        : This file is generated with a generator out of the
 *               STM32CubeMX project and its generated files (DO NOT EDIT!)
 ******************************************************************************/

#ifndef MX_DEVICE_H__
#define MX_DEVICE_H__

/* MX_Device.h version */
#define MX_DEVICE_VERSION                       0x01000000


/*------------------------------ ETH            -----------------------------*/
#define MX_ETH                                  1

/* Pins */

/* ETH_CRS_DV */
#define MX_ETH_CRS_DV_Pin                       PA7
#define MX_ETH_CRS_DV_GPIO_Pin                  GPIO_PIN_7
#define MX_ETH_CRS_DV_GPIOx                     GPIOA
#define MX_ETH_CRS_DV_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_ETH_CRS_DV_GPIO_PuPd                 GPIO_NOPULL
#define MX_ETH_CRS_DV_GPIO_Speed                GPIO_SPEED_FREQ_VERY_HIGH
#define MX_ETH_CRS_DV_GPIO_AF                   GPIO_AF11_ETH

/* ETH_MDC */
#define MX_ETH_MDC_Pin                          PC1
#define MX_ETH_MDC_GPIO_Pin                     GPIO_PIN_1
#define MX_ETH_MDC_GPIOx                        GPIOC
#define MX_ETH_MDC_GPIO_Mode                    GPIO_MODE_AF_PP
#define MX_ETH_MDC_GPIO_PuPd                    GPIO_NOPULL
#define MX_ETH_MDC_GPIO_Speed                   GPIO_SPEED_FREQ_VERY_HIGH
#define MX_ETH_MDC_GPIO_AF                      GPIO_AF11_ETH

/* ETH_MDIO */
#define MX_ETH_MDIO_Pin                         PA2
#define MX_ETH_MDIO_GPIO_Pin                    GPIO_PIN_2
#define MX_ETH_MDIO_GPIOx                       GPIOA
#define MX_ETH_MDIO_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_ETH_MDIO_GPIO_PuPd                   GPIO_NOPULL
#define MX_ETH_MDIO_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_ETH_MDIO_GPIO_AF                     GPIO_AF11_ETH

/* ETH_REF_CLK */
#define MX_ETH_REF_CLK_Pin                      PA1
#define MX_ETH_REF_CLK_GPIO_Pin                 GPIO_PIN_1
#define MX_ETH_REF_CLK_GPIOx                    GPIOA
#define MX_ETH_REF_CLK_GPIO_Mode                GPIO_MODE_AF_PP
#define MX_ETH_REF_CLK_GPIO_PuPd                GPIO_NOPULL
#define MX_ETH_REF_CLK_GPIO_Speed               GPIO_SPEED_FREQ_VERY_HIGH
#define MX_ETH_REF_CLK_GPIO_AF                  GPIO_AF11_ETH

/* ETH_RXD0 */
#define MX_ETH_RXD0_Pin                         PC4
#define MX_ETH_RXD0_GPIO_Pin                    GPIO_PIN_4
#define MX_ETH_RXD0_GPIOx                       GPIOC
#define MX_ETH_RXD0_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_ETH_RXD0_GPIO_PuPd                   GPIO_NOPULL
#define MX_ETH_RXD0_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_ETH_RXD0_GPIO_AF                     GPIO_AF11_ETH

/* ETH_RXD1 */
#define MX_ETH_RXD1_Pin                         PC5
#define MX_ETH_RXD1_GPIO_Pin                    GPIO_PIN_5
#define MX_ETH_RXD1_GPIOx                       GPIOC
#define MX_ETH_RXD1_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_ETH_RXD1_GPIO_PuPd                   GPIO_NOPULL
#define MX_ETH_RXD1_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_ETH_RXD1_GPIO_AF                     GPIO_AF11_ETH

/* ETH_TXD0 */
#define MX_ETH_TXD0_Pin                         PG13
#define MX_ETH_TXD0_GPIO_Pin                    GPIO_PIN_13
#define MX_ETH_TXD0_GPIOx                       GPIOG
#define MX_ETH_TXD0_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_ETH_TXD0_GPIO_PuPd                   GPIO_NOPULL
#define MX_ETH_TXD0_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_ETH_TXD0_GPIO_AF                     GPIO_AF11_ETH

/* ETH_TXD1 */
#define MX_ETH_TXD1_Pin                         PG14
#define MX_ETH_TXD1_GPIO_Pin                    GPIO_PIN_14
#define MX_ETH_TXD1_GPIOx                       GPIOG
#define MX_ETH_TXD1_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_ETH_TXD1_GPIO_PuPd                   GPIO_NOPULL
#define MX_ETH_TXD1_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_ETH_TXD1_GPIO_AF                     GPIO_AF11_ETH

/* ETH_TX_EN */
#define MX_ETH_TX_EN_Pin                        PG11
#define MX_ETH_TX_EN_GPIO_Pin                   GPIO_PIN_11
#define MX_ETH_TX_EN_GPIOx                      GPIOG
#define MX_ETH_TX_EN_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_ETH_TX_EN_GPIO_PuPd                  GPIO_NOPULL
#define MX_ETH_TX_EN_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_ETH_TX_EN_GPIO_AF                    GPIO_AF11_ETH

/*------------------------------ I2C1           -----------------------------*/
#define MX_I2C1                                 1

/* Filter Settings */
#define MX_I2C1_ANF_ENABLE                      1
#define MX_I2C1_DNF                             0

/* Peripheral Clock Frequency */
#define MX_I2C1_PERIPH_CLOCK_FREQ               54000000

/* Pins */

/* I2C1_SCL */
#define MX_I2C1_SCL_Pin                         PB8
#define MX_I2C1_SCL_GPIO_Pin                    GPIO_PIN_8
#define MX_I2C1_SCL_GPIOx                       GPIOB
#define MX_I2C1_SCL_GPIO_Mode                   GPIO_MODE_AF_OD
#define MX_I2C1_SCL_GPIO_PuPd                   GPIO_PULLUP
#define MX_I2C1_SCL_GPIO_Speed                  GPIO_SPEED_FREQ_LOW
#define MX_I2C1_SCL_GPIO_AF                     GPIO_AF4_I2C1

/* I2C1_SDA */
#define MX_I2C1_SDA_Pin                         PB9
#define MX_I2C1_SDA_GPIO_Pin                    GPIO_PIN_9
#define MX_I2C1_SDA_GPIOx                       GPIOB
#define MX_I2C1_SDA_GPIO_Mode                   GPIO_MODE_AF_OD
#define MX_I2C1_SDA_GPIO_PuPd                   GPIO_PULLUP
#define MX_I2C1_SDA_GPIO_Speed                  GPIO_SPEED_FREQ_LOW
#define MX_I2C1_SDA_GPIO_AF                     GPIO_AF4_I2C1

/*------------------------------ I2C4           -----------------------------*/
#define MX_I2C4                                 1

/* Filter Settings */
#define MX_I2C4_ANF_ENABLE                      1
#define MX_I2C4_DNF                             0

/* Peripheral Clock Frequency */
#define MX_I2C4_PERIPH_CLOCK_FREQ               54000000

/* Pins */

/* I2C4_SCL */
#define MX_I2C4_SCL_Pin                         PD12
#define MX_I2C4_SCL_GPIO_Pin                    GPIO_PIN_12
#define MX_I2C4_SCL_GPIOx                       GPIOD
#define MX_I2C4_SCL_GPIO_Mode                   GPIO_MODE_AF_OD
#define MX_I2C4_SCL_GPIO_PuPd                   GPIO_PULLUP
#define MX_I2C4_SCL_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_I2C4_SCL_GPIO_AF                     GPIO_AF4_I2C4

/* I2C4_SDA */
#define MX_I2C4_SDA_Pin                         PB7
#define MX_I2C4_SDA_GPIO_Pin                    GPIO_PIN_7
#define MX_I2C4_SDA_GPIOx                       GPIOB
#define MX_I2C4_SDA_GPIO_Mode                   GPIO_MODE_AF_OD
#define MX_I2C4_SDA_GPIO_PuPd                   GPIO_PULLUP
#define MX_I2C4_SDA_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_I2C4_SDA_GPIO_AF                     GPIO_AF11_I2C4

/*------------------------------ SDMMC2         -----------------------------*/
#define MX_SDMMC2                               1

/* Mode */
#define MX_SDMMC2_MODE_MMC                      1

/* Peripheral Clock Frequency */
#define MX_SDMMC2_PERIPH_CLOCK_FREQ             48000000

/* Pins */

/* SDMMC2_CK */
#define MX_SDMMC2_CK_Pin                        PD6
#define MX_SDMMC2_CK_GPIO_Pin                   GPIO_PIN_6
#define MX_SDMMC2_CK_GPIOx                      GPIOD
#define MX_SDMMC2_CK_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SDMMC2_CK_GPIO_PuPd                  GPIO_NOPULL
#define MX_SDMMC2_CK_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC2_CK_GPIO_AF                    GPIO_AF11_SDMMC2

/* SDMMC2_CMD */
#define MX_SDMMC2_CMD_Pin                       PD7
#define MX_SDMMC2_CMD_GPIO_Pin                  GPIO_PIN_7
#define MX_SDMMC2_CMD_GPIOx                     GPIOD
#define MX_SDMMC2_CMD_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_SDMMC2_CMD_GPIO_PuPd                 GPIO_NOPULL
#define MX_SDMMC2_CMD_GPIO_Speed                GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC2_CMD_GPIO_AF                   GPIO_AF11_SDMMC2

/* SDMMC2_D0 */
#define MX_SDMMC2_D0_Pin                        PG9
#define MX_SDMMC2_D0_GPIO_Pin                   GPIO_PIN_9
#define MX_SDMMC2_D0_GPIOx                      GPIOG
#define MX_SDMMC2_D0_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SDMMC2_D0_GPIO_PuPd                  GPIO_NOPULL
#define MX_SDMMC2_D0_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC2_D0_GPIO_AF                    GPIO_AF11_SDMMC2

/* SDMMC2_D1 */
#define MX_SDMMC2_D1_Pin                        PG10
#define MX_SDMMC2_D1_GPIO_Pin                   GPIO_PIN_10
#define MX_SDMMC2_D1_GPIOx                      GPIOG
#define MX_SDMMC2_D1_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SDMMC2_D1_GPIO_PuPd                  GPIO_NOPULL
#define MX_SDMMC2_D1_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC2_D1_GPIO_AF                    GPIO_AF11_SDMMC2

/* SDMMC2_D2 */
#define MX_SDMMC2_D2_Pin                        PB3
#define MX_SDMMC2_D2_GPIO_Pin                   GPIO_PIN_3
#define MX_SDMMC2_D2_GPIOx                      GPIOB
#define MX_SDMMC2_D2_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SDMMC2_D2_GPIO_PuPd                  GPIO_NOPULL
#define MX_SDMMC2_D2_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC2_D2_GPIO_AF                    GPIO_AF10_SDMMC2

/* SDMMC2_D3 */
#define MX_SDMMC2_D3_Pin                        PB4
#define MX_SDMMC2_D3_GPIO_Pin                   GPIO_PIN_4
#define MX_SDMMC2_D3_GPIOx                      GPIOB
#define MX_SDMMC2_D3_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SDMMC2_D3_GPIO_PuPd                  GPIO_NOPULL
#define MX_SDMMC2_D3_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC2_D3_GPIO_AF                    GPIO_AF10_SDMMC2

/*------------------------------ SPI2           -----------------------------*/
#define MX_SPI2                                 1

/* Peripheral Clock Frequency */
#define MX_SPI2_PERIPH_CLOCK_FREQ               54000000

/* Pins */

/* SPI2_MISO */
#define MX_SPI2_MISO_Pin                        PB14
#define MX_SPI2_MISO_GPIO_Pin                   GPIO_PIN_14
#define MX_SPI2_MISO_GPIOx                      GPIOB
#define MX_SPI2_MISO_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SPI2_MISO_GPIO_PuPd                  GPIO_NOPULL
#define MX_SPI2_MISO_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_SPI2_MISO_GPIO_AF                    GPIO_AF5_SPI2

/* SPI2_MOSI */
#define MX_SPI2_MOSI_Pin                        PB15
#define MX_SPI2_MOSI_GPIO_Pin                   GPIO_PIN_15
#define MX_SPI2_MOSI_GPIOx                      GPIOB
#define MX_SPI2_MOSI_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SPI2_MOSI_GPIO_PuPd                  GPIO_NOPULL
#define MX_SPI2_MOSI_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_SPI2_MOSI_GPIO_AF                    GPIO_AF5_SPI2

/* SPI2_NSS */
#define MX_SPI2_NSS_Pin                         PA11
#define MX_SPI2_NSS_GPIO_Pin                    GPIO_PIN_11
#define MX_SPI2_NSS_GPIOx                       GPIOA
#define MX_SPI2_NSS_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_SPI2_NSS_GPIO_PuPd                   GPIO_NOPULL
#define MX_SPI2_NSS_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SPI2_NSS_GPIO_AF                     GPIO_AF5_SPI2

/* SPI2_SCK */
#define MX_SPI2_SCK_Pin                         PA12
#define MX_SPI2_SCK_GPIO_Pin                    GPIO_PIN_12
#define MX_SPI2_SCK_GPIOx                       GPIOA
#define MX_SPI2_SCK_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_SPI2_SCK_GPIO_PuPd                   GPIO_NOPULL
#define MX_SPI2_SCK_GPIO_Speed                  GPIO_SPEED_FREQ_LOW
#define MX_SPI2_SCK_GPIO_AF                     GPIO_AF5_SPI2

/*------------------------------ UART5          -----------------------------*/
#define MX_UART5                                1

/* Pins */

/* UART5_RX */
#define MX_UART5_RX_Pin                         PD2
#define MX_UART5_RX_GPIO_Pin                    GPIO_PIN_2
#define MX_UART5_RX_GPIOx                       GPIOD
#define MX_UART5_RX_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_UART5_RX_GPIO_PuPd                   GPIO_NOPULL
#define MX_UART5_RX_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_UART5_RX_GPIO_AF                     GPIO_AF8_UART5

/* UART5_TX */
#define MX_UART5_TX_Pin                         PC12
#define MX_UART5_TX_GPIO_Pin                    GPIO_PIN_12
#define MX_UART5_TX_GPIOx                       GPIOC
#define MX_UART5_TX_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_UART5_TX_GPIO_PuPd                   GPIO_NOPULL
#define MX_UART5_TX_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_UART5_TX_GPIO_AF                     GPIO_AF8_UART5

/*------------------------------ USART1         -----------------------------*/
#define MX_USART1                               1

/* Virtual mode */
#define MX_USART1_VM                            VM_ASYNC
#define MX_USART1_VM_ASYNC                      1

/* Pins */

/* USART1_RX */
#define MX_USART1_RX_Pin                        PA10
#define MX_USART1_RX_GPIO_Pin                   GPIO_PIN_10
#define MX_USART1_RX_GPIOx                      GPIOA
#define MX_USART1_RX_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_USART1_RX_GPIO_PuPd                  GPIO_NOPULL
#define MX_USART1_RX_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USART1_RX_GPIO_AF                    GPIO_AF7_USART1

/* USART1_TX */
#define MX_USART1_TX_Pin                        PA9
#define MX_USART1_TX_GPIO_Pin                   GPIO_PIN_9
#define MX_USART1_TX_GPIOx                      GPIOA
#define MX_USART1_TX_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_USART1_TX_GPIO_PuPd                  GPIO_NOPULL
#define MX_USART1_TX_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_USART1_TX_GPIO_AF                    GPIO_AF7_USART1

/*------------------------------ USART6         -----------------------------*/
#define MX_USART6                               1

/* Virtual mode */
#define MX_USART6_VM                            VM_ASYNC
#define MX_USART6_VM_ASYNC                      1

/* Pins */

/* USART6_RX */
#define MX_USART6_RX_Pin                        PC7
#define MX_USART6_RX_GPIO_Pin                   GPIO_PIN_7
#define MX_USART6_RX_GPIOx                      GPIOC
#define MX_USART6_RX_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_USART6_RX_GPIO_PuPd                  GPIO_NOPULL
#define MX_USART6_RX_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USART6_RX_GPIO_AF                    GPIO_AF8_USART6

/* USART6_TX */
#define MX_USART6_TX_Pin                        PC6
#define MX_USART6_TX_GPIO_Pin                   GPIO_PIN_6
#define MX_USART6_TX_GPIOx                      GPIOC
#define MX_USART6_TX_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_USART6_TX_GPIO_PuPd                  GPIO_NOPULL
#define MX_USART6_TX_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USART6_TX_GPIO_AF                    GPIO_AF8_USART6

/*------------------------------ USB_OTG_HS     -----------------------------*/
#define MX_USB_OTG_HS                           1

/* Handle */
#define MX_USB_OTG_HS_HANDLE                    hpcd_USB_OTG_HS

/* Virtual mode */
#define MX_USB_OTG_HS_VM                        Device_HS
#define MX_USB_OTG_HS_Device_HS                 1

/* Pins */

/* USB_OTG_HS_ULPI_CK */
#define MX_USB_OTG_HS_ULPI_CK_Pin               PA5
#define MX_USB_OTG_HS_ULPI_CK_GPIO_Pin          GPIO_PIN_5
#define MX_USB_OTG_HS_ULPI_CK_GPIOx             GPIOA
#define MX_USB_OTG_HS_ULPI_CK_GPIO_Mode         GPIO_MODE_AF_PP
#define MX_USB_OTG_HS_ULPI_CK_GPIO_PuPd         GPIO_NOPULL
#define MX_USB_OTG_HS_ULPI_CK_GPIO_Speed        GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USB_OTG_HS_ULPI_CK_GPIO_AF           GPIO_AF10_OTG_HS

/* USB_OTG_HS_ULPI_D0 */
#define MX_USB_OTG_HS_ULPI_D0_Pin               PA3
#define MX_USB_OTG_HS_ULPI_D0_GPIO_Pin          GPIO_PIN_3
#define MX_USB_OTG_HS_ULPI_D0_GPIOx             GPIOA
#define MX_USB_OTG_HS_ULPI_D0_GPIO_Mode         GPIO_MODE_AF_PP
#define MX_USB_OTG_HS_ULPI_D0_GPIO_PuPd         GPIO_NOPULL
#define MX_USB_OTG_HS_ULPI_D0_GPIO_Speed        GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USB_OTG_HS_ULPI_D0_GPIO_AF           GPIO_AF10_OTG_HS

/* USB_OTG_HS_ULPI_D1 */
#define MX_USB_OTG_HS_ULPI_D1_Pin               PB0
#define MX_USB_OTG_HS_ULPI_D1_GPIO_Pin          GPIO_PIN_0
#define MX_USB_OTG_HS_ULPI_D1_GPIOx             GPIOB
#define MX_USB_OTG_HS_ULPI_D1_GPIO_Mode         GPIO_MODE_AF_PP
#define MX_USB_OTG_HS_ULPI_D1_GPIO_PuPd         GPIO_NOPULL
#define MX_USB_OTG_HS_ULPI_D1_GPIO_Speed        GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USB_OTG_HS_ULPI_D1_GPIO_AF           GPIO_AF10_OTG_HS

/* USB_OTG_HS_ULPI_D2 */
#define MX_USB_OTG_HS_ULPI_D2_Pin               PB1
#define MX_USB_OTG_HS_ULPI_D2_GPIO_Pin          GPIO_PIN_1
#define MX_USB_OTG_HS_ULPI_D2_GPIOx             GPIOB
#define MX_USB_OTG_HS_ULPI_D2_GPIO_Mode         GPIO_MODE_AF_PP
#define MX_USB_OTG_HS_ULPI_D2_GPIO_PuPd         GPIO_NOPULL
#define MX_USB_OTG_HS_ULPI_D2_GPIO_Speed        GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USB_OTG_HS_ULPI_D2_GPIO_AF           GPIO_AF10_OTG_HS

/* USB_OTG_HS_ULPI_D3 */
#define MX_USB_OTG_HS_ULPI_D3_Pin               PB10
#define MX_USB_OTG_HS_ULPI_D3_GPIO_Pin          GPIO_PIN_10
#define MX_USB_OTG_HS_ULPI_D3_GPIOx             GPIOB
#define MX_USB_OTG_HS_ULPI_D3_GPIO_Mode         GPIO_MODE_AF_PP
#define MX_USB_OTG_HS_ULPI_D3_GPIO_PuPd         GPIO_NOPULL
#define MX_USB_OTG_HS_ULPI_D3_GPIO_Speed        GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USB_OTG_HS_ULPI_D3_GPIO_AF           GPIO_AF10_OTG_HS

/* USB_OTG_HS_ULPI_D4 */
#define MX_USB_OTG_HS_ULPI_D4_Pin               PB11
#define MX_USB_OTG_HS_ULPI_D4_GPIO_Pin          GPIO_PIN_11
#define MX_USB_OTG_HS_ULPI_D4_GPIOx             GPIOB
#define MX_USB_OTG_HS_ULPI_D4_GPIO_Mode         GPIO_MODE_AF_PP
#define MX_USB_OTG_HS_ULPI_D4_GPIO_PuPd         GPIO_NOPULL
#define MX_USB_OTG_HS_ULPI_D4_GPIO_Speed        GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USB_OTG_HS_ULPI_D4_GPIO_AF           GPIO_AF10_OTG_HS

/* USB_OTG_HS_ULPI_D5 */
#define MX_USB_OTG_HS_ULPI_D5_Pin               PB12
#define MX_USB_OTG_HS_ULPI_D5_GPIO_Pin          GPIO_PIN_12
#define MX_USB_OTG_HS_ULPI_D5_GPIOx             GPIOB
#define MX_USB_OTG_HS_ULPI_D5_GPIO_Mode         GPIO_MODE_AF_PP
#define MX_USB_OTG_HS_ULPI_D5_GPIO_PuPd         GPIO_NOPULL
#define MX_USB_OTG_HS_ULPI_D5_GPIO_Speed        GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USB_OTG_HS_ULPI_D5_GPIO_AF           GPIO_AF10_OTG_HS

/* USB_OTG_HS_ULPI_D6 */
#define MX_USB_OTG_HS_ULPI_D6_Pin               PB13
#define MX_USB_OTG_HS_ULPI_D6_GPIO_Pin          GPIO_PIN_13
#define MX_USB_OTG_HS_ULPI_D6_GPIOx             GPIOB
#define MX_USB_OTG_HS_ULPI_D6_GPIO_Mode         GPIO_MODE_AF_PP
#define MX_USB_OTG_HS_ULPI_D6_GPIO_PuPd         GPIO_NOPULL
#define MX_USB_OTG_HS_ULPI_D6_GPIO_Speed        GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USB_OTG_HS_ULPI_D6_GPIO_AF           GPIO_AF10_OTG_HS

/* USB_OTG_HS_ULPI_D7 */
#define MX_USB_OTG_HS_ULPI_D7_Pin               PB5
#define MX_USB_OTG_HS_ULPI_D7_GPIO_Pin          GPIO_PIN_5
#define MX_USB_OTG_HS_ULPI_D7_GPIOx             GPIOB
#define MX_USB_OTG_HS_ULPI_D7_GPIO_Mode         GPIO_MODE_AF_PP
#define MX_USB_OTG_HS_ULPI_D7_GPIO_PuPd         GPIO_NOPULL
#define MX_USB_OTG_HS_ULPI_D7_GPIO_Speed        GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USB_OTG_HS_ULPI_D7_GPIO_AF           GPIO_AF10_OTG_HS

/* USB_OTG_HS_ULPI_DIR */
#define MX_USB_OTG_HS_ULPI_DIR_Pin              PI11
#define MX_USB_OTG_HS_ULPI_DIR_GPIO_Pin         GPIO_PIN_11
#define MX_USB_OTG_HS_ULPI_DIR_GPIOx            GPIOI
#define MX_USB_OTG_HS_ULPI_DIR_GPIO_Mode        GPIO_MODE_AF_PP
#define MX_USB_OTG_HS_ULPI_DIR_GPIO_PuPd        GPIO_NOPULL
#define MX_USB_OTG_HS_ULPI_DIR_GPIO_Speed       GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USB_OTG_HS_ULPI_DIR_GPIO_AF          GPIO_AF10_OTG_HS

/* USB_OTG_HS_ULPI_NXT */
#define MX_USB_OTG_HS_ULPI_NXT_Pin              PH4
#define MX_USB_OTG_HS_ULPI_NXT_GPIO_Pin         GPIO_PIN_4
#define MX_USB_OTG_HS_ULPI_NXT_GPIOx            GPIOH
#define MX_USB_OTG_HS_ULPI_NXT_GPIO_Mode        GPIO_MODE_AF_PP
#define MX_USB_OTG_HS_ULPI_NXT_GPIO_PuPd        GPIO_NOPULL
#define MX_USB_OTG_HS_ULPI_NXT_GPIO_Speed       GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USB_OTG_HS_ULPI_NXT_GPIO_AF          GPIO_AF10_OTG_HS

/* USB_OTG_HS_ULPI_STP */
#define MX_USB_OTG_HS_ULPI_STP_Pin              PC0
#define MX_USB_OTG_HS_ULPI_STP_GPIO_Pin         GPIO_PIN_0
#define MX_USB_OTG_HS_ULPI_STP_GPIOx            GPIOC
#define MX_USB_OTG_HS_ULPI_STP_GPIO_Mode        GPIO_MODE_AF_PP
#define MX_USB_OTG_HS_ULPI_STP_GPIO_PuPd        GPIO_NOPULL
#define MX_USB_OTG_HS_ULPI_STP_GPIO_Speed       GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USB_OTG_HS_ULPI_STP_GPIO_AF          GPIO_AF10_OTG_HS

#endif  /* MX_DEVICE_H__ */
