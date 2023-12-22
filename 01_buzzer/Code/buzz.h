
#ifndef BUZZ_H_
#define BUZZ_H_

/* #include section */
#include "stdint.h"
#include "main.h"

/* Global variables */
uint8_t first_time = 0;

/* #define section */
#define BEEP_STATE_OFF          0
#define BEEP_STATE_ON           1
#define BEEP_ON()               HAL_GPIO_WritePin(BEEP_GPIO_Port, BEEP_Pin, SET)
#define BEEP_OFF()              HAL_GPIO_WritePin(BEEP_GPIO_Port, BEEP_Pin, RESET)

/* function declarations */
void Bsp_Loop(void);
void Beep(uint8_t state);

void Beep(uint8_t state)
{
	if (state == BEEP_STATE_ON)
	{
		BEEP_ON();
	}
	else if (state == BEEP_STATE_OFF)
	{
		BEEP_OFF();
	}
	else
	{

	}

}

#endif /* BUZZ_H_ */
