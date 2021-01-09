/*
 * Project4LedonOff_reverse.c
 *
 * Created: 8/2/2019 8:46:52 PM
 * Author : Akash Tiwari
 */ 
#define F_CPU 1000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	int i;
	DDRB=0xff;
    /* Replace with your application code */
    while (1) 
    {
		
		for(i=0;i<8;i++)
		{
			PORTB |=(1<<i);
			_delay_ms(1000);
		}
			for(i=7;i>0;i--)
			{
			PORTB &=~(1<<i);
			_delay_ms(1000);
			}
			
		
    }
}

