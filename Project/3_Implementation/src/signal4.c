/**
 * @file signal4.c
 * @author anusha patil (anushapatil@domain.com)
 * @brief perform this function when the traffic density is high at road 4
 * @version 0.1
 * @date 2022-03-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "signal4.h"
void traffic_signal4()
{
	PORTB |= (1 << Y1);  //give yellow signal at road 1
	PORTB |= (1 << R2);  //give red signal at road 2
	PORTD |= (1 << R3);  //give red signal at road 3 
	PORTD |= (1 << G4);  //give green signal at road 4 
}