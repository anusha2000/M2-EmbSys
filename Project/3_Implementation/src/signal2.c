/**
 * @file signal2.c
 * @author anusha patil (anushapatil@domain.com)
 * @brief perform this function when the traffic density is high at road 2
 * @version 0.1
 * @date 2022-03-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "main.h"
void traffic_signal2()
{
	PORTB |= (1 << R1);
	PORTB |= (1 << G2);
	PORTD |= (1 << Y3);
	PORTD |= (1 << R4);
}