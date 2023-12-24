
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
#define KEY1_STATE()            HAL_GPIO_ReadPin(KEY1_GPIO_Port, KEY1_Pin)

/* function declarations */
void Bsp_Loop(void);
void Beep(uint8_t state);
uint8_t Key1_is_Pressed(void);

#endif /* BUZZ_H_ */
