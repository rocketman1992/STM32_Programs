
/* #include section */
#include "buzz.h"

/* Global variables */
uint8_t first_time = 0;


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





