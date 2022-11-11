/*
 * GPIO.h
 *
 * Created: 11/8/2022 3:46:21 PM
 *  Author: M.Mahmoud
 */ 

#include "../../service layer/STD_TYPES.h"
#ifndef GPIO_H_
#define GPIO_H_
#define DIO_u8_PORTA             0
#define DIO_u8_PORTB             1
#define DIO_u8_PORTC             2
#define DIO_u8_PORTD             3

/* Macros for PINS */
#define DIO_u8_PIN0              0
#define DIO_u8_PIN1              1
#define DIO_u8_PIN2              2
#define DIO_u8_PIN3              3
#define DIO_u8_PIN4              4
#define DIO_u8_PIN5              5
#define DIO_u8_PIN6              6
#define DIO_u8_PIN7              7

/* Macros for Pin Direction */
#define DIO_u8_OUTPUT            1
#define DIO_u8_INPUT             0

/* Macros for Pin Value */
#define DIO_u8_HIGH              1
#define DIO_u8_LOW               0



/*Registers Macros*/
#define DIO_u8_DDRA_REG         *((volatile u8*)0x3A)
#define DIO_u8_PORTA_REG        *((volatile u8*)0x3B)
#define DIO_u8_PINA_REG         *((volatile u8*)0x39)

#define DIO_u8_DDRB_REG         *((volatile u8*)0x37)
#define DIO_u8_PORTB_REG        *((volatile u8*)0x38)
#define DIO_u8_PINB_REG         *((volatile u8*)0x36)

#define DIO_u8_DDRC_REG         *((volatile u8*)0x34)
#define DIO_u8_PORTC_REG        *((volatile u8*)0x35)
#define DIO_u8_PINC_REG         *((volatile u8*)0x33)

#define DIO_u8_DDRD_REG         *((volatile u8*)0x31)
#define DIO_u8_PORTD_REG        *((volatile u8*)0x32)
#define DIO_u8_PIND_REG         *((volatile u8*)0x30)

#define DIO_u8_INITIAL_OUTPUT   1
#define DIO_u8_INITIAL_INPUT	0

#define DIO_u8_OUTPUT_LOW       0
#define DIO_u8_OUTPUT_HIGH      1

#define DIO_u8_INPUT_FLOATING   0
#define DIO_u8_INPUT_PULLUP     1

void DIO_voidInit         (void);

u8 DIO_u8SetPinDirection(u8 Copy_u8PortId, u8 Copy_u8PinId ,u8 Copy_u8PinDirection);

u8  DIO_u8SetPinValue(u8 Copy_u8PortId, u8 Copy_u8PinId ,u8 Copy_u8PinValue);

u8 DIO_u8GetPinValue(u8 Copy_u8PortId, u8 Copy_u8PinId ,u8 * Copy_pu8ReturnedPinValue);

u8 DIO_u8SetPortDirection(u8 Copy_u8PortId, u8 Copy_u8PortDirection);

u8 DIO_u8SetPortValue(u8 Copy_u8PortId, u8 Copy_u8PortValue);

u8  DIO_u8GetPortValue(u8 Copy_u8PortId, u8 * Copy_pu8ReturnedPortValue);




#endif /* GPIO_H_ */