/*---------------------------------------------------------------------------
 * Copyright (c) 2024 Arm Limited (or its affiliates).
 * All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *---------------------------------------------------------------------------*/

#ifndef STM32F769I_DISCO_H_
#define STM32F769I_DISCO_H_

#include "GPIO_STM32.h"
#include "Driver_ETH_MAC.h"
#include "Driver_ETH_PHY.h"
#include "Driver_I2C.h"
#include "Driver_MCI.h"
#include "Driver_USART.h"
#include "Driver_USBD.h"

// STM32F769I-DISCO (Rev.B-02) Arduino Connector Pin Defintions
#define ARDUINO_UNO_D0  GPIO_PIN_ID_PORTC(7U)  // USART6: RX
#define ARDUINO_UNO_D1  GPIO_PIN_ID_PORTC(6U)  // USART6: TX
#define ARDUINO_UNO_D2  GPIO_PIN_ID_PORTJ(1U)
#define ARDUINO_UNO_D3  GPIO_PIN_ID_PORTF(6U)
#define ARDUINO_UNO_D4  GPIO_PIN_ID_PORTJ(0U)
#define ARDUINO_UNO_D5  GPIO_PIN_ID_PORTC(8U)
#define ARDUINO_UNO_D6  GPIO_PIN_ID_PORTF(7U)
#define ARDUINO_UNO_D7  GPIO_PIN_ID_PORTJ(3U)
#define ARDUINO_UNO_D8  GPIO_PIN_ID_PORTJ(4U)
#define ARDUINO_UNO_D9  GPIO_PIN_ID_PORTH(6U)
#define ARDUINO_UNO_D10 GPIO_PIN_ID_PORTA(11U)
#define ARDUINO_UNO_D11 GPIO_PIN_ID_PORTB(15U)
#define ARDUINO_UNO_D12 GPIO_PIN_ID_PORTB(14U)
#define ARDUINO_UNO_D13 GPIO_PIN_ID_PORTA(12U)
#define ARDUINO_UNO_D14 GPIO_PIN_ID_PORTA(6U)
#define ARDUINO_UNO_D15 GPIO_PIN_ID_PORTA(4U)
#define ARDUINO_UNO_D16 GPIO_PIN_ID_PORTC(2U)
#define ARDUINO_UNO_D17 GPIO_PIN_ID_PORTF(10U)
#define ARDUINO_UNO_D18 GPIO_PIN_ID_PORTF(8U)
#define ARDUINO_UNO_D19 GPIO_PIN_ID_PORTF(9U)
#define ARDUINO_UNO_D20 GPIO_PIN_ID_PORTB(9U)  // I2C1: SDA
#define ARDUINO_UNO_D21 GPIO_PIN_ID_PORTB(8U)  // I2C1: SCL

// CMSIS Driver instances on Arduino connector
#define ARDUINO_UNO_I2C     1
#define ARDUINO_UNO_UART    6

// CMSIS Driver instances of Board peripherals
#define CMSIS_DRIVER_ETH    0 // CMSIS-Driver ETH instance number
#define CMSIS_DRIVER_MCI    2 // CMSIS-Driver MCI instance number
#define CMSIS_DRIVER_USART  5 // CMSIS-Driver USART instance number
#define CMSIS_DRIVER_USBD   1 // CMSIS-Driver USB Device instance number

// Retarget stdio to CMSIS UART
#define RETARGET_STDIO_UART 1

// CMSIS Drivers
extern ARM_DRIVER_ETH_MAC ARM_Driver_ETH_MAC_(CMSIS_DRIVER_ETH);  // ETH MAC
extern ARM_DRIVER_ETH_PHY ARM_Driver_ETH_PHY_(CMSIS_DRIVER_ETH);  // ETH PHY
extern ARM_DRIVER_I2C     ARM_Driver_I2C_(ARDUINO_UNO_I2C);       // Arduino I2C
extern ARM_DRIVER_MCI     ARM_Driver_MCI_(CMSIS_DRIVER_MCI);      // MCI
extern ARM_DRIVER_USART   ARM_Driver_USART_(ARDUINO_UNO_UART);    // Arduino UART
extern ARM_DRIVER_USART   ARM_Driver_USART_(CMSIS_DRIVER_USART);  // Extension UART
extern ARM_DRIVER_USART   ARM_Driver_USART_(RETARGET_STDIO_UART); // ST-Link
extern ARM_DRIVER_USBD    ARM_Driver_USBD_(CMSIS_DRIVER_USBD);    // USB Device

#ifdef CMSIS_shield_header
#include CMSIS_shield_header
#endif

#endif /* STM32F769I_DISCO_H_ */
