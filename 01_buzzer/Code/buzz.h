
#ifndef BUZZ_H_
#define BUZZ_H_

/* #include section */
#include "stdint.h"
#include "main.h"

/* #define section */
#define BEEP_STATE_OFF          0
#define BEEP_STATE_ON           1
#define BEEP_ON()               HAL_GPIO_WritePin(BEEP_GPIO_Port, BEEP_Pin, SET)
#define BEEP_OFF()              HAL_GPIO_WritePin(BEEP_GPIO_Port, BEEP_Pin, RESET)

/* function declarations */
void Bsp_Init(void);
void Bsp_Loop(void);
void Beep(uint8_t state);
void Beep_Set_State(uint8_t state);
void Beep_Set_Time(uint8_t time);



#endif /* BUZZ_H_ */
