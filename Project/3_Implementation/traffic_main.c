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
	DDRB = 0xff;
	DDRD = 0xff;
	DDRC = 0x00;

	PORTB = 0x00;
	PORTD = 0x00;

	while (1)
	{
		if ((PINC & 0x01) == 0x01)
		{
			traffic_signal1();
		}
		else if ((PINC & 0x02) == 0x02)
		{
			traffic_signal2();
		}

		else if ((PINC & 0x04) == 0x04)
		{
			traffic_signal3();
		}

		else if ((PINC & 0x08) == 0x08)
		{
			traffic_signal4();
		}

		else
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
	}
}