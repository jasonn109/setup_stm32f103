/*
 * uart.h
 *
 *  Created on: Aug 25, 2025
 *      Author: JASON PEREIRA
 */

#ifndef UART_H_
#define UART_H_
#include "stm32f1xx.h"
#include "stm32f103xb.h"
#include "stdio.h"

#define SYSTEM_CLK	8000000
#define PCLK1		SYSTEM_CLK
#define Baudrate	9600


int __io_putchar(int ch);

void uart1_init();

void uart_write(USART_TypeDef * USARTx, uint8_t data);



#endif /* UART_H_ */
