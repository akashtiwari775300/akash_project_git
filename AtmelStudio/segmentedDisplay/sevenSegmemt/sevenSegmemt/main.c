/*
 * sevenSegmemt.c
 *
 * Created: 8/2/2019 11:27:55 PM
 * Author : Akash Tiwari
 */ 

#define F_CPU 8000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    /* Replace with your application code */
	DDRC=0x0E;
	DDRD=0xFC;
	DDRB=0x07;
	PORTC=0x00;
	
	PORTD=0x00;
	PORTB=0x00;
    while (1) 
    {
		//PORTB|=(1<<1); //SegA
		_delay_ms(1000);
		
		//PORTB|=(1<<2);  //SegB
		
		//PORTD|=(1<<5);  //SegC
		
		//PORTD|=(1<<4);  //SegD
		
		//PORTD|=(1<<3);  //SegE
		
		//PORTD|=(1<<7);  //SegF
		
		//PORTB|=(1<<0);  //SegG
		
		//PORTD|=(1<<6);  //SegH
		
    }
}