#pragma once

#include_next <mcuconf.h>

#undef STM32_PWM_USE_TIM15
#define STM32_PWM_USE_TIM15 TRUE

#define STM32_TIM15_SUPPRESS_ISR