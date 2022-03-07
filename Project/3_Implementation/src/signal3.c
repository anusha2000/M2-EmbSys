/**
 * @file signal3.c
 * @author anusha patil (anushapatil@domain.com)
 * @brief perform this function when the traffic density is high at road 3
 * @version 0.1
 * @date 2022-03-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "main.h"
void traffic_signal3()
{
	PORTB |= (1 << R1);
	PORTB |= (1 << R2);
	PORTD |= (1 << G3);
	PORTD |= (1 << Y4);
}