/**
 * @file traffic_main.c
 * @author anusha patil (anushapatil@domain.com)
 * @brief density based traffic control system
 * @version 0.1
 * @date 2022-03-07
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "main.h"
int main(void)
{
    PORTB = 0x00;
    PORTD = 0x00;

    PORTB |= (1 << G1);
    PORTB |= (1 << Y2);
    PORTD |= (1 << R3);
    PORTD |= (1 << R4);
    _delay_ms(30000);

    PORTB = 0x00;
    PORTD = 0x00;

    PORTB |= (1 << R1);
    PORTB |= (1 << G2);
    PORTD |= (1 << Y3);
    PORTD |= (1 << R4);
    _delay_ms(30000);

    PORTB = 0x00;
    PORTD = 0x00;

    PORTB |= (1 << R1);
    PORTB |= (1 << R2);
    PORTD |= (1 << G3);
    PORTD |= (1 << Y4);
    _delay_ms(30000);

    PORTB = 0x00;
    PORTD = 0x00;
    PORTB |= (1 << Y1);
    PORTB |= (1 << R2);
    PORTD |= (1 << R3);
    PORTD |= (1 << G4);
    _delay_ms(30000);
    PORTB = 0x00;
    PORTD = 0x00;
}