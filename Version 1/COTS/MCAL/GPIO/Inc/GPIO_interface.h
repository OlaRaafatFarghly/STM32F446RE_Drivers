#ifndef GPIO_INTERFACE_H
#define GPIO_INTERFACE_H


/*************
 *@Port_t enum
 */
typedef enum
{
	PORTA=0,
	PORTB,
	PORTC,
	PORTD,
	PORTE,
	PORTF,
	PORTG,
	PORTH,
	INVALID_PORT
}Port_t;

/*************
 * @pin_t enum
 */
typedef enum
{
	PIN0=0,
	PIN1,
	PIN2,
	PIN3,
	PIN4,
	PIN5,
	PIN6,
	PIN7,
	PIN8,
	PIN9,
	PIN10,
	PIN11,
	PIN12,
	PIN13,
	PIN14,
	PIN15,
	INVALID_PIN,
}Pin_t;

/*************
 * @Mode_t enum
 */
typedef enum
{
	INPUT=0,
	OUTPUT,
	ALTERNATE_FUNCTION,
	ANALOG
}Mode_t;

/*************
 * @OutputSpeed_t enum
 */
typedef enum
{
	LOW=0,
	MEDIUM,
	FAST,
	HIGH
}OutputSpeed_t;

/*************
 * @OutputType_t enum
 */
typedef enum
{
	PUSH_PULL=0,
	OPEN_DRAIN
}OutputType_t;

/*************
 * @PullUpDown_t enum
 */
typedef enum
{
	NOPULL=0,
	PULLUP,
	PULLDOWN
}PullUpDown_t;

/*************
 * @PinVal enum
 */
typedef enum
{
	PIN_LOW=0,
	PIN_HIGH
}PinVal_t;

/*************
 * @AltFunc_t enum
 */
typedef enum
{
	AF0=0,
	AF1,
	AF2,
	AF3,
	AF4,
	AF5,
	AF6,
	AF7,
	AF8,
	AF9,
	AF10,
	AF11,
	AF12,
	AF13,
	AF14,
	AF15,
}AltFunc_t;

/*************
 * @PinConfig_t enum
 */
typedef struct
{
	Port_t        Port;
	Pin_t         PinNum;
	Mode_t        Mode;
	OutputSpeed_t Speed;
	OutputType_t  OutputType;
	PullUpDown_t  PullType;
	AltFunc_t     AltFunc;
}PinConfig_t;


uint8_t GPIO_u8PinInit(const PinConfig_t* PinConfig);

uint8_t GPIO_u8SetPinValue(Port_t Port,Pin_t PinNum,PinVal_t PinVal);

uint8_t GPIO_u8TogglePinValue(Port_t Port,Pin_t PinNum);

uint8_t GPIO_u8ReadPinValue(Port_t Port,Pin_t PinNum,PinVal_t* PinVal);

#endif
