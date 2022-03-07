/**
 * @file signal1.c
 * @author anusha patil (anushapatil@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-03-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "main.h"
void traffic_signal1()
{
	PORTB |= (1 << G1);
	PORTB |= (1 << Y2);
	PORTD |= (1 << R3);
	PORTD |= (1 << R4);
}