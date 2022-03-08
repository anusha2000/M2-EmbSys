/**
 * @file main.h
 * @author anusha patil (anushapatil@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-03-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef __AVR_ATmega8__
#define __AVR_ATmega8__
#endif

#define F_CPU 8000000UL
#include <avr/io.h>
#include <util/delay.h>
#include "signal1.h"
#include "signal2.h"
#include "signal3.h"
#include "signal4.h"


#define R1 PB0
#define Y1 PB1
#define G1 PB2

#define R2 PB3
#define Y2 PB4
#define G2 PB5

#define R3 PD0
#define Y3 PD1
#define G3 PD2

#define R4 PD3
#define Y4 PD4
#define G4 PD5

/**
 * @brief if the traffic density is high at road 1, then give green signal road 1, yellow signal to road 2 and red signal to remaining roads 3 & 4.this process is continue till the traffic is cleared in that particular path.
 * 
 */
void traffic_signal1();

/**
 * @brief if the traffic density is high at road 2, then give green signal road 2, yellow signal to road 3 and red signal to remaining roads 4 & 1.this process is continue till the traffic is cleared in that particular path..
 * 
 */
void traffic_signal2();

/**
 * @brief if the traffic density is high at road 3, then give green signal road 3, yellow signal to road 4 and red signal to remaining roads 1 & 2.this process is continue till the traffic is cleared in that particular path.
 * 
 */
void traffic_signal3();

/**
 * @brief if the traffic density is high at road 4, then give green signal road 4, yellow signal to road 1 and red signal to remaining roads 2 & 3.this process is continue till the traffic is cleared in that particular path.
 * 
 */
void traffic_signal4();