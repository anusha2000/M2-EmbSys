/**
 * @file signal1.c
 * @author anusha patil (anushapatil@domain.com)
 * @brief perform this function when the traffic density is high at road 1
 * @version 0.1
 * @date 2022-03-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "signal1.h"
void traffic_signal1()
{
	PORTB |= (1 << G1);  //give green signal at road 1
	PORTB |= (1 << Y2);  //give yellow signal at road 2
	PORTD |= (1 << R3);  //give red signal at road 3 
	PORTD |= (1 << R4);	 //give red signal at road 4
}