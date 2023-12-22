
/* #include section */
#include "buzz.h"

/* Global variables */
uint8_t beep_state = 0;
uint8_t beep_time = 0;


void Beep_On_Time(uint8_t time)
{
	if (time == BEEP_STATE_ON_ALWAYS)
	{
		Beep_Set_State(BEEP_STATE_ON_ALWAYS);
		Beep_Set_Time(0);
		BEEP_ON();

	}
	else if (time == BEEP_STATE_OFF)
	{

	}
	else if (time >= 10)
	{

	}

}

void Beep_Set_State(uint8_t state)
{
	beep_state = state;

}

void Beep_Set_Time(uint8_t time)
{
	beep_time = time;
}




