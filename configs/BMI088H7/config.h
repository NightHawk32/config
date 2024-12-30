/*
 * This file is part of Betaflight.
 *
 * Betaflight is free software. You can redistribute this software
 * and/or modify this software under the terms of the GNU General
 * Public License as published by the Free Software Foundation,
 * either version 3 of the License, or (at your option) any later
 * version.
 *
 * Betaflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define FC_TARGET_MCU     STM32H743

#define BOARD_NAME        BMI088H7
#define MANUFACTURER_ID   NHNH

#define USE_ACC
#define USE_GYRO
#define USE_ACCGYRO_SPI_BMI088
//#define USE_BARO
//#define USE_BARO_BMP280
//#define USE_BARO_DPS310
//#define USE_MAX7456
//#define USE_SDCARD

#define BMI088_CS_A_PIN         PE4
#define BMI088_CS_G_PIN         PE3
#define BMI088_INT_G_PIN        PE5
#define BMI088_INT_A_PIN        PC13

#define BMI320_CS_PIN           PC0
#define BMI320_INT_PIN          PA4

#define LED0_PIN                PC4
#define LED1_PIN                PC5

#define MOTOR1_PIN           PB0
#define MOTOR2_PIN           PB1
#define MOTOR3_PIN           PA3
#define MOTOR4_PIN           PA2
#define LED_STRIP_PIN        PA1

#define UART1_TX_PIN            PA9
#define UART1_RX_PIN            PA10

#define UART3_TX_PIN            PB10
#define UART3_RX_PIN            PB11

#define UART6_TX_PIN            PC6
#define UART6_RX_PIN            PC7

#define UART7_TX_PIN            PE8
#define UART7_RX_PIN            PE7

#define I2C1_SCL                PB6
#define I2C1_SDA                PB7


#define ADC_VBAT_PIN         PC1

#define GYRO_1_EXTI_PIN         BMI088_INT_G_PIN
#define GYRO_1_CS_PIN           BMI088_CS_G_PIN
#define GYRO_1_ACC_CS_PIN       BMI088_CS_A_PIN
#define GYRO_1_ALIGN            CW180_DEG

#define SPI1_SCK_PIN         PA5
#define SPI1_SDI_PIN         PA6
#define SPI1_SDO_PIN         PA7

#define USE_FLASH
#define USE_FLASH_M25P16
#define USE_FLASH_W25Q128FV
#define USE_FLASH_W25N01G

#define FLASH_CS_PIN            PB3
#define FLASH_SPI_INSTANCE      SPI3
#define SPI3_SCK_PIN            PC10
#define SPI3_SDI_PIN            PC11
#define SPI3_SDO_PIN             PC12

#define LED_STRIP_PIN        PA8

/* CS1/CS2 pads for SPI3 connection:
 *
 * CS1 PD4
 * CS2 PE2
 */

#define TIMER_PIN_MAPPING \
    TIMER_PIN_MAP( 0, PB0 , 2,  0) \
    TIMER_PIN_MAP( 1, PB1 , 2,  0) \
    TIMER_PIN_MAP( 2, PA0 , 2,  0) \
    TIMER_PIN_MAP( 3, PA1 , 4,  0) \
    TIMER_PIN_MAP( 4, PA2 , 2,  0) \
    TIMER_PIN_MAP( 5, PA3 , 2,  0) \
    TIMER_PIN_MAP( 8, PE5 , 4, -1) \
    TIMER_PIN_MAP( 9, PE6 , 4, -1) \
    TIMER_PIN_MAP(10, PA8 , 1,  0) \
    TIMER_PIN_MAP(11, PA15, 1, -1) \
    TIMER_PIN_MAP(12, PC7 , 3, -1) 



#define ADC1_DMA_OPT        8
#define ADC3_DMA_OPT        9
#define TIMUP1_DMA_OPT      0
#define TIMUP2_DMA_OPT      0
#define TIMUP3_DMA_OPT      2
#define TIMUP4_DMA_OPT      1
#define TIMUP5_DMA_OPT      0
#define TIMUP8_DMA_OPT      0

#define BARO_I2C_INSTANCE I2CDEV_2
#define MAG_I2C_INSTANCE I2CDEV_1

#define DEFAULT_RX_FEATURE FEATURE_RX_SERIAL
#define SERIALRX_UART SERIAL_PORT_USART6

#define DEFAULT_BLACKBOX_DEVICE     BLACKBOX_DEVICE_FLASH
#define DEFAULT_VOLTAGE_METER_SOURCE VOLTAGE_METER_ADC
#define DEFAULT_VOLTAGE_METER_SCALE_DEFAULT 110

#define GYRO_1_SPI_INSTANCE SPI1
//#define GYRO_1_ALIGN CW0_DEG_FLIP
//#define GYRO_1_ALIGN_PITCH 1800
//#define GYRO_2_SPI_INSTANCE SPI4
//#define GYRO_2_ALIGN CW0_DEG_FLIP
//#define GYRO_2_ALIGN_PITCH 1800
//#define DEFAULT_GYRO_TO_USE GYRO_CONFIG_USE_GYRO_1

#define ENSURE_MPU_DATA_READY_IS_LOW
