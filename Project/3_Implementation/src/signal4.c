/**
 * @file signal4.c
 * @author anusha patil (anushapatil@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-03-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "main.h"
void traffic_signal4()
{
	PORTB |= (1 << Y1);
	PORTB |= (1 << R2);
	PORTD |= (1 << R3);
	PORTD |= (1 << G4);
}