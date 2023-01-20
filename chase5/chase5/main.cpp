/*
 * Construct a micro-controller based system  to chase 5 LEDs one after another  from left  to right,
 repeatedly.
 * 
 * Created: 1/20/2023 8:16:40 PM
 * Author : minol
 */ 

#include <avr/io.h> // include I0 definitions
#define F_CPU 16000000UL // define CPU clock speed for delay.h
#include <util/delay.h> // include definition of _delay ms( )


int main(void)
{
	DDRC=0b00011111;
	PORTC = 0b00000000;
	
    while (1) 
    {
		PORTC = 0b00000001;

		for(int i=1;i<6;i++){
		_delay_ms(1000);
		PORTC=PORTC*2;

		}

		//PORTC = 0b000000001; _delay_ms(500);
		//PORTC = 0b00000010;_delay_ms(500);
		//PORTC = 0b00000100;_delay_ms(500);
		//PORTC = 0b00001000;_delay_ms(500);
		//PORTC = 0b00010000;_delay_ms(500);
		
    }
}

