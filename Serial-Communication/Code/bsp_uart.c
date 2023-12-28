
#include "stdint.h"
#include "bsp_uart.h"

void USART1_Init(void)
{
	HAL_UART_Receive_IT(&huart1, (uint8_t *)&RxTemp, 1);
}
