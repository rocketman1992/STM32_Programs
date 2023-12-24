

/* #include section */
#include "buzz.h"

/* function definitions */

void Bsp_Loop(void)
{
	if (Key1_is_Pressed() == BEEP_STATE_ON)
	{
		Beep(BEEP_STATE_ON);
	}

}


void Beep(uint8_t state)
{
	if (state == BEEP_STATE_ON)
	{
		BEEP_ON();
		HAL_Delay(1000);
		BEEP_OFF();

	}
	else if (state == BEEP_STATE_OFF)
	{
		BEEP_OFF();
	}

}


uint8_t Key1_is_Pressed(void)
{
	if (!KEY1_STATE())
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
