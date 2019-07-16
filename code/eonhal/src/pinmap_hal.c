/**
 ******************************************************************************
 * @file    pinmap_hal.c
 * @authors Pablo Fuentes, Joseph Peñafiel
 * @version V1.0.1
 * @date    2019
 * @brief
 ******************************************************************************
 */

/* Includes ------------------------------------------------------------------*/
#include <stddef.h>
#include "stm32g0xx_ll_gpio.h"
#include "stm32g0xx_ll_tim.h"
#include "stm32g0xx_ll_adc.h"
#include "pinmap_hal.h"
#include "pinmap_impl.h"

#if defined(STM32G070RB) || defined(STM32G071RB)
#define TOTAL_PINS 58
#endif

#if !defined(STM32G070RB) || defined(STM32G071RB)
#error "Se debe elegir el STM32G070RB o STM32G071RB"
#endif

/* Private typedef -----------------------------------------------------------*/

STM32_Pin_Info __PIN_MAP[TOTAL_PINS] =
    {
/*
 * GPIOx
 * pin (0-15)
 * adcCh
 * TIMx 
 * timCh
 * timAF
 * spiAF
 * i2cAF
 * uartAF
 */

#if defined(STM32G070RB)
        /* PA0 - 0*/ {GPIOA, LL_GPIO_PIN_0, LL_ADC_CHANNEL_0, NULL, TIM_CHANNEL_NONE, AF_NONE, AF_0, AF_NONE, AF_4},
        /* PA1 - 1*/ {GPIOA, LL_GPIO_PIN_1, LL_ADC_CHANNEL_1, NULL, TIM_CHANNEL_NONE, AF_NONE, AF_0, AF_NONE, AF_4},
        /* PA2 - 2*/ {GPIOA, LL_GPIO_PIN_2, LL_ADC_CHANNEL_2, TIM15, LL_TIM_CHANNEL_CH1, AF_5, AF_0, AF_NONE, AF_1},
        /* PA3 - 3*/ {GPIOA, LL_GPIO_PIN_3, LL_ADC_CHANNEL_3, TIM15, LL_TIM_CHANNEL_CH2, AF_5, AF_3, AF_NONE, AF_1},
        /* PA4 - 4*/ {GPIOA, LL_GPIO_PIN_4, LL_ADC_CHANNEL_4, TIM14, LL_TIM_CHANNEL_CH1, AF_4, AF_1, AF_NONE, AF_NONE},
        /* PA5 - 5*/ {GPIOA, LL_GPIO_PIN_5, LL_ADC_CHANNEL_5, NULL, TIM_CHANNEL_NONE, AF_NONE, AF_0, AF_NONE, AF_4},
        /* PA6 - 6*/ {GPIOA, LL_GPIO_PIN_6, LL_ADC_CHANNEL_6, TIM16, LL_TIM_CHANNEL_CH1, AF_5, AF_0, AF_NONE, AF_NONE},
        /* PA7 - 7*/ {GPIOA, LL_GPIO_PIN_7, LL_ADC_CHANNEL_7, TIM17, LL_TIM_CHANNEL_CH1, AF_5, AF_0, AF_NONE, AF_NONE},
        /* PA8 - 8*/ {GPIOA, LL_GPIO_PIN_8, ADC_CHANNEL_NONE, TIM1, LL_TIM_CHANNEL_CH1, AF_2, AF_1, AF_NONE, AF_NONE},
        /* PA9 - 9*/ {GPIOA, LL_GPIO_PIN_9, ADC_CHANNEL_NONE, TIM1, LL_TIM_CHANNEL_CH2, AF_2, AF_NONE, AF_6, AF_1},
        /* PA10 - 10*/ {GPIOA, LL_GPIO_PIN_10, ADC_CHANNEL_NONE, TIM1, LL_TIM_CHANNEL_CH3, AF_2, AF_0, AF_6, AF_1},
        /* PA11 - 11*/ {GPIOA, LL_GPIO_PIN_11, ADC_CHANNEL_NONE, TIM1, LL_TIM_CHANNEL_CH4, AF_2, AF_0, AF_6, AF_NONE},
        /* PA12 - 12*/ {GPIOA, LL_GPIO_PIN_12, ADC_CHANNEL_NONE, NULL, TIM_CHANNEL_NONE, AF_NONE, AF_0, AF_6, AF_NONE},
        /* PA13 - 13*/ {GPIOA, LL_GPIO_PIN_13, ADC_CHANNEL_NONE, NULL, TIM_CHANNEL_NONE, AF_NONE, AF_NONE, AF_NONE, AF_NONE},
        /* PA15 - 15*/ {GPIOA, LL_GPIO_PIN_15, ADC_CHANNEL_NONE, NULL, TIM_CHANNEL_NONE, AF_NONE, AF_0, AF_NONE, AF_1},

        /* PB0 - 15*/ {GPIOB, LL_GPIO_PIN_0, LL_ADC_CHANNEL_8, TIM3, LL_TIM_CHANNEL_CH3, AF_1, AF_0, AF_NONE, AF_4},
        /* PB1 - 16*/ {GPIOB, LL_GPIO_PIN_1, LL_ADC_CHANNEL_9, TIM3, LL_TIM_CHANNEL_CH4, AF_1, AF_NONE, AF_NONE, AF_NONE},
        /* PB2 - 17*/ {GPIOB, LL_GPIO_PIN_2, LL_ADC_CHANNEL_10, NULL, TIM_CHANNEL_NONE, AF_NONE, AF_1, AF_NONE, AF_4},
        /* PB3 - 18*/ {GPIOB, LL_GPIO_PIN_3, ADC_CHANNEL_NONE, TIM1, LL_TIM_CHANNEL_CH2, AF_1, AF_0, AF_NONE, AF_NONE},
        /* PB4 - 19*/ {GPIOB, LL_GPIO_PIN_4, ADC_CHANNEL_NONE, TIM3, LL_TIM_CHANNEL_CH1, AF_1, AF_0, AF_NONE, AF_NONE},
        /* PB5 - 20*/ {GPIOB, LL_GPIO_PIN_5, ADC_CHANNEL_NONE, TIM3, LL_TIM_CHANNEL_CH2, AF_1, AF_0, AF_NONE, AF_NONE},
        /* PB6 - 21*/ {GPIOB, LL_GPIO_PIN_6, ADC_CHANNEL_NONE, TIM3, LL_TIM_CHANNEL_CH3, AF_1, AF_4, AF_6, AF_0},
        /* PB7 - 22*/ {GPIOB, LL_GPIO_PIN_7, ADC_CHANNEL_NONE, NULL, TIM_CHANNEL_NONE, AF_NONE, AF_1, AF_6, AF_0},
        /* PB8 - 23*/ {GPIOB, LL_GPIO_PIN_8, ADC_CHANNEL_NONE, TIM16, LL_TIM_CHANNEL_CH1, AF_2, AF_1, AF_6, AF_4},
        /* PB9 - 24*/ {GPIOB, LL_GPIO_PIN_9, ADC_CHANNEL_NONE, TIM17, LL_TIM_CHANNEL_CH1, AF_2, AF_5, AF_6, AF_4},
        /* PB10 - 25*/ {GPIOB, LL_GPIO_PIN_10, LL_ADC_CHANNEL_11, NULL, TIM_CHANNEL_NONE, AF_NONE, AF_5, AF_6, AF_4},
        /* PB11 - 26*/ {GPIOB, LL_GPIO_PIN_11, LL_ADC_CHANNEL_15, NULL, TIM_CHANNEL_NONE, AF_NONE, AF_0, AF_6, AF_4},
        /* PB12 - 27*/ {GPIOB, LL_GPIO_PIN_12, LL_ADC_CHANNEL_16, NULL, TIM_CHANNEL_NONE, AF_NONE, AF_0, AF_NONE, AF_NONE},
        /* PB13 - 28*/ {GPIOB, LL_GPIO_PIN_13, ADC_CHANNEL_NONE, NULL, TIM_CHANNEL_NONE, AF_NONE, AF_0, AF6, AF_NONE},
        /* PB14 - 29*/ {GPIOB, LL_GPIO_PIN_14, ADC_CHANNEL_NONE, TIM15, LL_TIM_CHANNEL_CH1, AF_5, AF_0, AF_6, AF_NONE},
        /* PB15 - 30*/ {GPIOB, LL_GPIO_PIN_15, ADC_CHANNEL_NONE, TIM15, LL_TIM_CHANNEL_CH2, AF_5, AF_0, AF_NONE, AF_NONE},

        /* PC0 - 31*/ {GPIOC, LL_GPIO_PIN_0, ADC_CHANNEL_NONE, NULL, TIM_CHANNEL_NONE, AF_NONE, AF_NONE, AF_NONE, AF_NONE},
        /* PC1 - 32*/ {GPIOC, LL_GPIO_PIN_1, ADC_CHANNEL_NONE, TIM15, LL_TIM_CHANNEL_CH1, AF_2, AF_NONE, AF_NONE, AF_NONE},
        /* PC2 - 33*/ {GPIOC, LL_GPIO_PIN_2, ADC_CHANNEL_NONE, TIM15, LL_TIM_CHANNEL_CH2, AF_2, AF_1, AF_NONE, AF_NONE},
        /* PC3 - 34*/ {GPIOC, LL_GPIO_PIN_3, ADC_CHANNEL_NONE, NULL, TIM_CHANNEL_NONE, AF_NONE, AF_1, AF_NONE, AF_NONE},
        /* PC4 - 35*/ {GPIOC, LL_GPIO_PIN_4, LL_ADC_CHANNEL_17, NULL, TIM_CHANNEL_NONE, AF_NONE, AF_NONE, AF_NONE, AF_1},
        /* PC5 - 36*/ {GPIOC, LL_GPIO_PIN_5, LL_ADC_CHANNEL_18, NULL, TIM_CHANNEL_NONE, AF_NONE, AF_NONE, AF_NONE, AF_1},
        /* PC6 - 37*/ {GPIOC, LL_GPIO_PIN_6, ADC_CHANNEL_NONE, TIM3, LL_TIM_CHANNEL_CH1, AF_1, AF_NONE, AF_NONE, AF_NONE},
        /* PC7 - 38*/ {GPIOC, LL_GPIO_PIN_7, ADC_CHANNEL_NONE, TIM3, LL_TIM_CHANNEL_CH2, AF_1, AF_NONE, AF_NONE, AF_NONE},
        /* PC8 - 39*/ {GPIOC, LL_GPIO_PIN_8, ADC_CHANNEL_NONE, TIM1, LL_TIM_CHANNEL_CH1, AF_2, AF_NONE, AF_NONE, AF_NONE},
        /* PC9 - 40*/ {GPIOC, LL_GPIO_PIN_9, ADC_CHANNEL_NONE, TIM1, LL_TIM_CHANNEL_CH2, AF_2, AF_NONE, AF_NONE, AF_NONE},
        /* PC10 - 41*/ {GPIOC, LL_GPIO_PIN_10, ADC_CHANNEL_NONE, TIM1, LL_TIM_CHANNEL_CH3, AF_2, AF_NONE, AF_NONE, AF_0},
        /* PC11 - 42*/ {GPIOC, LL_GPIO_PIN_11, ADC_CHANNEL_NONE, TIM1, LL_TIM_CHANNEL_CH4, AF_2, AF_NONE, AF_NONE, AF_0},
        /* PC12 - 43*/ {GPIOC, LL_GPIO_PIN_12, ADC_CHANNEL_NONE, TIM14, LL_TIM_CHANNEL_CH1, AF_2, AF_NONE, AF_NONE, AF_NONE},
        /* PC13 - 44*/ {GPIOC, LL_GPIO_PIN_13, ADC_CHANNEL_NONE, NULL, TIM_CHANNEL_NONE, AF_NONE, AF_NONE, AF_NONE, AF_NONE},
        /* PC14 - 45*/ {GPIOC, LL_GPIO_PIN_14, ADC_CHANNEL_NONE, NULL, TIM_CHANNEL_NONE, AF_NONE, AF_NONE, AF_NONE, AF_NONE},
        /* PC15 - 46*/ {GPIOC, LL_GPIO_PIN_15, ADC_CHANNEL_NONE, NULL, TIM_CHANNEL_NONE, AF_NONE, AF_NONE, AF_NONE, AF_NONE},

        /* PD0 - 47*/ {GPIOD, LL_GPIO_PIN_0, ADC_CHANNEL_NONE, TIM16, LL_TIM_CHANNEL_CH1, AF_2, AF_1, AF_NONE, AF_NONE},
        /* PD1 - 48*/ {GPIOD, LL_GPIO_PIN_1, ADC_CHANNEL_NONE, TIM17, LL_TIM_CHANNEL_CH1, AF_2, AF_1, AF_NONE, AF_NONE},
        /* PD2 - 49*/ {GPIOD, LL_GPIO_PIN_2, ADC_CHANNEL_NONE, NULL, TIM_CHANNEL_NONE, AF_NONE, AF_NONE, AF_NONE, AF_NONE},
        /* PD3 - 50*/ {GPIOD, LL_GPIO_PIN_3, ADC_CHANNEL_NONE, NULL, TIM_CHANNEL_NONE, AF_NONE, AF_1, AF_NONE, AF_NONE},
        /* PD4 - 51*/ {GPIOD, LL_GPIO_PIN_4, ADC_CHANNEL_NONE, NULL, TIM_CHANNEL_NONE, AF_NONE, AF_1, AF_NONE, AF_NONE},
        /* PD5 - 52*/ {GPIOD, LL_GPIO_PIN_5, ADC_CHANNEL_NONE, NULL, TIM_CHANNEL_NONE, AF_NONE, AF_1, AF_NONE, AF_0},
        /* PD6 - 53*/ {GPIOD, LL_GPIO_PIN_6, ADC_CHANNEL_NONE, NULL, TIM_CHANNEL_NONE, AF_NONE, AF_1, AF_NONE, AF_0},
        /* PD8 - 54*/ {GPIOD, LL_GPIO_PIN_8, ADC_CHANNEL_NONE, NULL, TIM_CHANNEL_NONE, AF_NONE, AF_1, AF_NONE, AF_0},
        /* PD9 - 55*/ {GPIOD, LL_GPIO_PIN_9, ADC_CHANNEL_NONE, NULL, TIM_CHANNEL_NONE, AF_NONE, AF_1, AF_NONE, AF_0},

        /* PF0 - 56*/ {GPIOF, LL_GPIO_PIN_0, ADC_CHANNEL_NONE, TIM14, LL_TIM_CHANNEL_CH1, AF_2, AF_NONE, AF_NONE, AF_NONE},
        /* PF1 - 57*/ {GPIOF, LL_GPIO_PIN_1, ADC_CHANNEL_NONE, NULL, TIM_CHANNEL_NONE, AF_NONE, AF_NONE, AF_NONE, AF_NONE},

#endif

#if defined(STM32G071RB)
        /* PA0 - 0*/ {GPIOA, LL_GPIO_PIN_0, LL_ADC_CHANNEL_0, NULL, TIM_CHANNEL_NONE, AF_NONE, AF_0, AF_NONE, AF_4},
        /* PA1 - 1*/ {GPIOA, LL_GPIO_PIN_1, LL_ADC_CHANNEL_1, TIM2, LL_TIM_CHANNEL_CH2, AF_2, AF_0, AF_NONE, AF_4},
        /* PA2 - 2*/ {GPIOA, LL_GPIO_PIN_2, LL_ADC_CHANNEL_2, TIM2, LL_TIM_CHANNEL_CH3, AF_2, AF_0, AF_NONE, AF_2},
        /* PA3 - 3*/ {GPIOA, LL_GPIO_PIN_3, LL_ADC_CHANNEL_3, TIM2, LL_TIM_CHANNEL_CH4, AF_2, AF_0, AF_NONE, AF_1},
        /* PA4 - 4*/ {GPIOA, LL_GPIO_PIN_4, LL_ADC_CHANNEL_4, TIM14, LL_TIM_CHANNEL_CH1, AF_4, AF_1, AF_NONE, AF_NONE},
        /* PA5 - 5*/ {GPIOA, LL_GPIO_PIN_5, LL_ADC_CHANNEL_5, NULL, TIM_CHANNEL_NONE, AF_NONE, AF_0, AF_NONE, AF_4},
        /* PA6 - 6*/ {GPIOA, LL_GPIO_PIN_6, LL_ADC_CHANNEL_6, TIM3, LL_TIM_CHANNEL_CH1, AF_1, AF_0, AF_NONE, AF_NONE},
        /* PA7 - 7*/ {GPIOA, LL_GPIO_PIN_7, LL_ADC_CHANNEL_7, TIM3, LL_TIM_CHANNEL_CH2, AF_1, AF_0, AF_NONE, AF_NONE},
        /* PA8 - 8*/ {GPIOA, LL_GPIO_PIN_8, ADC_CHANNEL_NONE, TIM1, LL_TIM_CHANNEL_CH1, AF_2, AF_1, AF_NONE, AF_NONE},
        /* PA9 - 9*/ {GPIOA, LL_GPIO_PIN_9, ADC_CHANNEL_NONE, TIM1, LL_TIM_CHANNEL_CH2, AF_2, AF_4, AF_6, AF_1},
        /* PA10 - 10*/ {GPIOA, LL_GPIO_PIN_10, ADC_CHANNEL_NONE, TIM1, LL_TIM_CHANNEL_CH3, AF_2, AF_0, AF_6, AF_1},
        /* PA11 - 11*/ {GPIOA, LL_GPIO_PIN_11, ADC_CHANNEL_NONE, TIM1, LL_TIM_CHANNEL_CH4, AF_2, AF_0, AF_6, AF_NONE},
        /* PA12 - 12*/ {GPIOA, LL_GPIO_PIN_12, ADC_CHANNEL_NONE, NULL, TIM_CHANNEL_NONE, AF_NONE, AF_0, AF_6, AF_NONE},
        /* PA13 - 13*/ {GPIOA, LL_GPIO_PIN_13, ADC_CHANNEL_NONE, NULL, TIM_CHANNEL_NONE, AF_NONE, AF_NONE, AF_NONE, AF_NONE},
        /* PA15 - 14*/ {GPIOA, LL_GPIO_PIN_15, ADC_CHANNEL_NONE, NULL, TIM_CHANNEL_NONE, AF_NONE, AF_0, AF_NONE, AF_1},

        /* PB0 - 15*/ {GPIOB, LL_GPIO_PIN_0, LL_ADC_CHANNEL_8, TIM3, LL_TIM_CHANNEL_CH3, AF_1, AF_0, AF_NONE, AF_4},
        /* PB1 - 16*/ {GPIOB, LL_GPIO_PIN_1, LL_ADC_CHANNEL_9, TIM3, LL_TIM_CHANNEL_CH4, AF_1, AF_NONE, AF_NONE, AF_NONE},
        /* PB2 - 17*/ {GPIOB, LL_GPIO_PIN_2, LL_ADC_CHANNEL_10, NULL, TIM_CHANNEL_NONE, AF_NONE, AF_1, AF_NONE, AF_4},
        /* PB3 - 18*/ {GPIOB, LL_GPIO_PIN_3, ADC_CHANNEL_NONE, TIM1, LL_TIM_CHANNEL_CH2, AF_1, AF_0, AF_NONE, AF_NONE},
        /* PB4 - 19*/ {GPIOB, LL_GPIO_PIN_4, ADC_CHANNEL_NONE, TIM3, LL_TIM_CHANNEL_CH1, AF_1, AF_0, AF_NONE, AF_NONE},
        /* PB5 - 20*/ {GPIOB, LL_GPIO_PIN_5, ADC_CHANNEL_NONE, TIM3, LL_TIM_CHANNEL_CH2, AF_1, AF_0, AF_NONE, AF_NONE},
        /* PB6 - 21*/ {GPIOB, LL_GPIO_PIN_6, ADC_CHANNEL_NONE, TIM1, LL_TIM_CHANNEL_CH3, AF_1, AF_4, AF_6, AF_0},
        /* PB7 - 22*/ {GPIOB, LL_GPIO_PIN_7, ADC_CHANNEL_NONE, NULL, TIM_CHANNEL_NONE, AF_NONE, AF_1, AF_6, AF_0},
        /* PB8 - 23*/ {GPIOB, LL_GPIO_PIN_8, ADC_CHANNEL_NONE, TIM16, LL_TIM_CHANNEL_CH1, AF_2, AF_1, AF_6, AF_4},
        /* PB9 - 24*/ {GPIOB, LL_GPIO_PIN_9, ADC_CHANNEL_NONE, TIM17, LL_TIM_CHANNEL_CH1, AF_2, AF_5, AF_6, AF_4},
        /* PB10 - 25*/ {GPIOB, LL_GPIO_PIN_10, LL_ADC_CHANNEL_11, TIM2, LL_TIM_CHANNEL_CH3, AF_2, AF_5, AF_6, AF_4},
        /* PB11 - 26*/ {GPIOB, LL_GPIO_PIN_11, LL_ADC_CHANNEL_15, TIM2, LL_TIM_CHANNEL_CH4, AF_2, AF_0, AF_6, AF_4},
        /* PB12 - 27*/ {GPIOB, LL_GPIO_PIN_12, LL_ADC_CHANNEL_16, NULL, TIM_CHANNEL_NONE, AF_NONE, AF_0, AF_NONE, AF_NONE},
        /* PB13 - 28*/ {GPIOB, LL_GPIO_PIN_13, ADC_CHANNEL_NONE, NULL, TIM_CHANNEL_NONE, AF_NONE, AF_0, AF6, AF_NONE},
        /* PB14 - 29*/ {GPIOB, LL_GPIO_PIN_14, ADC_CHANNEL_NONE, TIM15, LL_TIM_CHANNEL_CH1, AF_5, AF_0, AF_6, AF_NONE},
        /* PB15 - 30*/ {GPIOB, LL_GPIO_PIN_15, ADC_CHANNEL_NONE, TIM15, LL_TIM_CHANNEL_CH2, AF_5, AF_0, AF_NONE, AF_NONE},

        /* PC0 - 31*/ {GPIOC, LL_GPIO_PIN_0, ADC_CHANNEL_NONE, NULL, TIM_CHANNEL_NONE, AF_NONE, AF_NONE, AF_NONE, AF_NONE},
        /* PC1 - 32*/ {GPIOC, LL_GPIO_PIN_1, ADC_CHANNEL_NONE, TIM15, LL_TIM_CHANNEL_CH1, AF_2, AF_NONE, AF_NONE, AF_NONE},
        /* PC2 - 33*/ {GPIOC, LL_GPIO_PIN_2, ADC_CHANNEL_NONE, TIM15, LL_TIM_CHANNEL_CH2, AF_2, AF_1, AF_NONE, AF_NONE},
        /* PC3 - 34*/ {GPIOC, LL_GPIO_PIN_3, ADC_CHANNEL_NONE, NULL, TIM_CHANNEL_NONE, AF_NONE, AF_1, AF_NONE, AF_NONE},
        /* PC4 - 35*/ {GPIOC, LL_GPIO_PIN_4, LL_ADC_CHANNEL_17, NULL, TIM_CHANNEL_NONE, AF_NONE, AF_NONE, AF_NONE, AF_1},
        /* PC5 - 36*/ {GPIOC, LL_GPIO_PIN_5, LL_ADC_CHANNEL_18, TIM2, LL_TIM_CHANNEL_CH2, AF_2, AF_NONE, AF_NONE, AF_1},
        /* PC6 - 37*/ {GPIOC, LL_GPIO_PIN_6, ADC_CHANNEL_NONE, TIM3, LL_TIM_CHANNEL_CH1, AF_1, AF_NONE, AF_NONE, AF_NONE},
        /* PC7 - 38*/ {GPIOC, LL_GPIO_PIN_7, ADC_CHANNEL_NONE, TIM3, LL_TIM_CHANNEL_CH2, AF_1, AF_NONE, AF_NONE, AF_NONE},
        /* PC8 - 39*/ {GPIOC, LL_GPIO_PIN_8, ADC_CHANNEL_NONE, TIM3, LL_TIM_CHANNEL_CH3, AF_1, AF_NONE, AF_NONE, AF_NONE},
        /* PC9 - 40*/ {GPIOC, LL_GPIO_PIN_9, ADC_CHANNEL_NONE, TIM3, LL_TIM_CHANNEL_CH4, AF_1, AF_NONE, AF_NONE, AF_NONE},
        /* PC10 - 41*/ {GPIOC, LL_GPIO_PIN_10, ADC_CHANNEL_NONE, TIM1, LL_TIM_CHANNEL_CH3, AF_2, AF_NONE, AF_NONE, AF_0},
        /* PC11 - 42*/ {GPIOC, LL_GPIO_PIN_11, ADC_CHANNEL_NONE, TIM1, LL_TIM_CHANNEL_CH4, AF_2, AF_NONE, AF_NONE, AF_0},
        /* PC12 - 43*/ {GPIOC, LL_GPIO_PIN_12, ADC_CHANNEL_NONE, TIM14, LL_TIM_CHANNEL_CH1, AF_2, AF_NONE, AF_NONE, AF_NONE},
        /* PC13 - 44*/ {GPIOC, LL_GPIO_PIN_13, ADC_CHANNEL_NONE, NULL, TIM_CHANNEL_NONE, AF_NONE, AF_NONE, AF_NONE, AF_NONE},
        /* PC14 - 45*/ {GPIOC, LL_GPIO_PIN_14, ADC_CHANNEL_NONE, NULL, TIM_CHANNEL_NONE, AF_NONE, AF_NONE, AF_NONE, AF_NONE},
        /* PC15 - 46*/ {GPIOC, LL_GPIO_PIN_15, ADC_CHANNEL_NONE, NULL, TIM_CHANNEL_NONE, AF_NONE, AF_NONE, AF_NONE, AF_NONE},

        /* PD0 - 47*/ {GPIOD, LL_GPIO_PIN_0, ADC_CHANNEL_NONE, TIM16, LL_TIM_CHANNEL_CH1, AF_2, AF_1, AF_NONE, AF_NONE},
        /* PD1 - 48*/ {GPIOD, LL_GPIO_PIN_1, ADC_CHANNEL_NONE, TIM17, LL_TIM_CHANNEL_CH1, AF_2, AF_1, AF_NONE, AF_NONE},
        /* PD2 - 49*/ {GPIOD, LL_GPIO_PIN_2, ADC_CHANNEL_NONE, NULL, TIM_CHANNEL_NONE, AF_NONE, AF_NONE, AF_NONE, AF_NONE},
        /* PD3 - 50*/ {GPIOD, LL_GPIO_PIN_3, ADC_CHANNEL_NONE, NULL, TIM_CHANNEL_NONE, AF_NONE, AF_1, AF_NONE, AF_NONE},
        /* PD4 - 51*/ {GPIOD, LL_GPIO_PIN_4, ADC_CHANNEL_NONE, NULL, TIM_CHANNEL_NONE, AF_NONE, AF_1, AF_NONE, AF_NONE},
        /* PD5 - 52*/ {GPIOD, LL_GPIO_PIN_5, ADC_CHANNEL_NONE, NULL, TIM_CHANNEL_NONE, AF_NONE, AF_1, AF_NONE, AF_0},
        /* PD6 - 53*/ {GPIOD, LL_GPIO_PIN_6, ADC_CHANNEL_NONE, NULL, TIM_CHANNEL_NONE, AF_NONE, AF_1, AF_NONE, AF_0},
        /* PD8 - 54*/ {GPIOD, LL_GPIO_PIN_8, ADC_CHANNEL_NONE, NULL, TIM_CHANNEL_NONE, AF_NONE, AF_1, AF_NONE, AF_0},
        /* PD9 - 55*/ {GPIOD, LL_GPIO_PIN_9, ADC_CHANNEL_NONE, NULL, TIM_CHANNEL_NONE, AF_NONE, AF_1, AF_NONE, AF_0},

        /* PF0 - 56*/ {GPIOF, LL_GPIO_PIN_0, ADC_CHANNEL_NONE, TIM14, LL_TIM_CHANNEL_CH1, AF_2, AF_NONE, AF_NONE, AF_NONE},
        /* PF1 - 57*/ {GPIOF, LL_GPIO_PIN_1, ADC_CHANNEL_NONE, NULL, TIM_CHANNEL_NONE, AF_NONE, AF_NONE, AF_NONE, AF_NONE},

#endif
};

STM32_Pin_Info *HAL_Pin_Map()
{
        return __PIN_MAP;
}
