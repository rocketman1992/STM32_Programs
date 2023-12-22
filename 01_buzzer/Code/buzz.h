
#ifndef BUZZ_H_
#define BUZZ_H_

/* #include section */
#include "stdint.h"
#include "main.h"

/* #define section */
#define BEEP_STATE_OFF          0
#define BEEP_STATE_ON_ALWAYS    1
#define BEEP_STATE_ON_DELAY     2
#define LED_TOGGLE()            HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin)
#define BEEP_ON()               HAL_GPIO_WritePin(BEEP_GPIO_Port, BEEP_Pin, SET)

/* function declarations */
void Bsp_Init(void);
void Bsp_Loop(void);
void Bsp_Led_Show_State_Handle(void);
void Beep_On_Time(uint8_t time);
void Beep_Set_State(uint8_t state);
void Beep_Set_Time(uint8_t time);



#endif /* BUZZ_H_ */
