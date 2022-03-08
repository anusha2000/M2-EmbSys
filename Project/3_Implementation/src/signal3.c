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

#include "signal3.h"
void traffic_signal3()
{
	PORTB |= (1 << R1);  //give red signal at road 1
	PORTB |= (1 << R2);  //give red signal at road 2
	PORTD |= (1 << G3);  //give green signal at road 3 
	PORTD |= (1 << Y4);  //give yellow signal at road 4
}