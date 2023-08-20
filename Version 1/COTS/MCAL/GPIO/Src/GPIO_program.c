#include"../../Library/BIT_Math.h"
#include"../../Library/Stm32F446xx.h"
#include"../Inc/GPIO_interface.h"

uint8_t GPIO_u8PinInit(const PinConfig_t* PinConfig)
{
	SET_BIT(Port_t->Port,Pin_t->PinNum);
	GPIO_RegDef_t -> MODER &= ~Mode;
	GPIO_RegDef_t -> MODER |= Mode;
	OutputSpeed_t -> OSPEEDR &=~ Speed;
	OutputSpeed_t -> OSPEEDR |= Speed;
}

uint8_t GPIO_u8SetPinValue(Port_t Port,Pin_t PinNum,PinVal_t PinVal)
{
	switch(PinVal)
	{
		case PIN_LOW:
			CLR_BIT(Port , PinNum);
			break;
		case PIN_HIGH:
			SET_BIT(Port , PinNum);
			break;
		default:
			break;
	}
}

uint8_t GPIO_u8TogglePinValue(Port_t Port,Pin_t PinNum)
{
	return TOGGLE_BIT(Port , PinNum);
}

uint8_t GPIO_u8ReadPinValue(Port_t Port,Pin_t PinNum,PinVal_t* PinVal)
{
	uint8_t pinValue = GET_BIT(Port , PinNum);
	return pinValue;
}