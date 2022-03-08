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
// LED's are connected to PORTB AND PORTD
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
int main(void)
{
    DDRB = 0xff; // PORTB is set as output by setting 0xff to this register
    DDRD = 0xff; // PORTD is set as output by setting 0xff to this register
    DDRC = 0x00; // PORTC is set as input by setting 0x00 this register

    PORTB = 0x00; // PORTB is initialised as 0
    PORTD = 0x00; // PORTD is initialised as 0

    while (1)
    {
        if ((PINC & 0x01) == 0x01) // if PINC is equal to 0x01
        {
            traffic_signal1(); // call trffic_signal1 function
        }
        else if ((PINC & 0x02) == 0x02) // if PINC is equal to 0x02
        {
            traffic_signal2(); // call trffic_signal2 function
        }

        else if ((PINC & 0x04) == 0x04) // if PINC is equal to 0x04
        {
            traffic_signal3(); // call trffic_signal3 function
        }

        else if ((PINC & 0x08) == 0x08) // if PINC is equal to 0x08
        {
            traffic_signal4(); // call trffic_signal4 function
        }
        // if the above conditions are not true then the traffic signals should work on the time basis
        else
        {
            //working of traffic signal during normal condition
            PORTB = 0x00; // PORTB is initialised as 0
            PORTD = 0x00; // PORTD is initialised as 0

            PORTB |= (1 << G1);
            PORTB |= (1 << Y2);
            PORTD |= (1 << R3);
            PORTD |= (1 << R4);
            _delay_ms(30000); // delay

            PORTB = 0x00; // PORTB is initialised as 0
            PORTD = 0x00; // PORTD is initialised as 0

            PORTB |= (1 << R1);
            PORTB |= (1 << G2);
            PORTD |= (1 << Y3);
            PORTD |= (1 << R4);
            _delay_ms(30000);  //delay

            PORTB = 0x00;   // PORTB is initialised as 0
            PORTD = 0x00;   // PORTD is initialised as 0
            
            PORTB |= (1 << R1);
            PORTB |= (1 << R2);
            PORTD |= (1 << G3);
            PORTD |= (1 << Y4);
            _delay_ms(30000);  //delay

            PORTB = 0x00;  // PORTB is initialised as 0
            PORTD = 0x00;  // PORTD is initialised as 0
            
            PORTB |= (1 << Y1);
            PORTB |= (1 << R2);
            PORTD |= (1 << R3);
            PORTD |= (1 << G4);
            _delay_ms(30000);  //delay
            PORTB = 0x00;
            PORTD = 0x00;
        }
    }
}