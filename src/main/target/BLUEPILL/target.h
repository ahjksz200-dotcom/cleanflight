#pragma once

#define TARGET_BOARD_IDENTIFIER "BPF1"

// ================= SPI MPU6500 =================
#define USE_SPI
#define USE_SPI_DEVICE_1

#define GYRO_1_SPI_INSTANCE SPI1
#define GYRO_1_CS_PIN       PA4

#define SPI1_SCK_PIN   PA5
#define SPI1_MISO_PIN  PA6
#define SPI1_MOSI_PIN  PA7

#define USE_GYRO
#define USE_ACC

#define USE_GYRO_SPI_MPU6500
#define USE_ACC_SPI_MPU6500

#define GYRO_1_ALIGN CW0_DEG

// ================= UART / SBUS =================
#define USE_UART1
#define UART1_TX_PIN PA9
#define UART1_RX_PIN PA10

#define SERIAL_PORT_COUNT 1
#define SERIALRX_PROVIDER SERIALRX_SBUS

// ================= PWM OUTPUT =================
#define USABLE_TIMER_CHANNEL_COUNT 8

#define USED_TIMERS ( TIM_N(1) | TIM_N(2) | TIM_N(3) )

// ================= ADC =================
#define USE_ADC
#define VBAT_ADC_PIN PA1

// ================= LED + BEEPER =================
#define LED0_PIN PC13

#define USE_BEEPER
#define BEEPER_PIN PB12

// ================= TẮT NHỮNG THỨ KHÔNG CẦN =================
#undef USE_BARO
#undef USE_MAG
#undef USE_FLASHFS
#undef USE_SOFTSERIAL1
#undef USE_SOFTSERIAL2
#undef USE_I2C

// ================= RX =================
#define DEFAULT_RX_FEATURE FEATURE_RX_SERIAL
