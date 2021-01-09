/*
 * GccApplication1.c
 *
 * Created: 8/1/2019 12:47:44 AM
 * Author : Akash Tiwari
 */ 
#define F_CPU 800000 UL
#include <avr/io.h>


int main(void)
{
	DDRB=0xFF;
    /* Replace with your application code */
    while (1) 
    {
		int i;
		for(i=0;i<8)
		{
			PORTB|=(1<<i);
		
			for(i=7;i<0)
			{
			PORTB|=(1<<i);
			PORTB&=~(1<<i);
			}
		}
		
    }
}

