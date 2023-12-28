
#ifndef BSP_UART_H_
#define BSP_UART_H_

void USART1_Init(void);
void USART1_Send_U8(uint8_t ch);
void USART1_Send_ArrayU8(uint8_t *BufferPtr, unit16_t Length);



#endif
