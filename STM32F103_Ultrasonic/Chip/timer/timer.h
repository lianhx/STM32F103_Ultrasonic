#ifndef __TIMER_H
#define __TIMER_H

#include "stm32f10x.h"

extern volatile unsigned long  SystemCurrentTime;

#define millis() SystemCurrentTime 	 //millis（）获取机器运行的时间长度。

void TIM2_Int_Init(uint16_t arr,uint16_t psc);
void TIM3_Int_Init(uint16_t arr,uint16_t psc);
void TIM4_Int_Init(uint16_t arr,uint16_t psc);
//void TIM5_Int_Init(uint16_t arr,uint16_t psc);

#endif  //__TIMER_H

