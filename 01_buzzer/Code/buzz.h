
#ifndef BUZZ_H_
#define BUZZ_H_

/* #define section */
#define LED_TOGGLE()  HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin)

/* function declarations */
void Bsp_Init(void);
void Bsp_Loop(void);
void Bsp_Led_Show_State_Handle(void);


#endif /* BUZZ_H_ */
