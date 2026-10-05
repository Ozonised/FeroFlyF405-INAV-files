/*
 * This file is part of INAV.
 *
 * INAV is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * INAV is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with INAV.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdint.h>
#include <platform.h>

#include "drivers/bus.h"
#include "drivers/io.h"
#include "drivers/pwm_mapping.h"
#include "drivers/timer.h"

timerHardware_t timerHardware[] = {
    DEF_TIM(TIM1, CH2, PA9,  TIM_USE_OUTPUT_AUTO, 0, 0),    //s1 D(2, 6, 0)
    DEF_TIM(TIM4, CH3, PB8,  TIM_USE_OUTPUT_AUTO, 0, 0),    //s2 D(1, 7, 2)
    DEF_TIM(TIM1, CH3, PA10, TIM_USE_OUTPUT_AUTO, 0, 1),    //s3 D(2, 6, 6)
    DEF_TIM(TIM1, CH1, PA8,  TIM_USE_OUTPUT_AUTO, 0, 1),    //s4 D(2, 1, 6)
    DEF_TIM(TIM3, CH4, PC9,  TIM_USE_OUTPUT_AUTO, 0, 0),    //s5 D(1, 2, 5)
    DEF_TIM(TIM3, CH3, PC8,  TIM_USE_OUTPUT_AUTO, 0, 0),    //s6 D(1, 7, 5)
    DEF_TIM(TIM8, CH2, PC7,  TIM_USE_OUTPUT_AUTO, 0, 0),    //s7 D(2, 2, 0)
    DEF_TIM(TIM8, CH1, PC6,  TIM_USE_OUTPUT_AUTO, 0, 1),    //s8 D(2, 2, 7)
    DEF_TIM(TIM2, CH1, PA0,  TIM_USE_OUTPUT_AUTO, 0, 0),    //s9 D(1, 5, 3)
    DEF_TIM(TIM12, CH2, PB15,  TIM_USE_SERVO, 0, 0),        //s10 DMA NONE
    DEF_TIM(TIM12, CH1, PB14,  TIM_USE_SERVO, 0, 0),        //s11 DMA NONE
    DEF_TIM(TIM5, CH2, PA1,  TIM_USE_LED, 0, 0),            //ws2811 Led Strip D(1, 4, 6)
};

const int timerHardwareCount = sizeof(timerHardware) / sizeof(timerHardware[0]);
