/*
 * GccApplication1.c
 *
 * Created: 3/14/2016 10:16:34 PM
 *  Author: Anurag Saraswat
 */ 


#include <avr/io.h>

void main()
{
	DDRC=0b00000000;
	DDRB=0b00011110;
	int n=0;
    while(1)
    {
       n=PINC&0b00001001;
	   if(n==9)
	   PORTB=0b00001010;//forward
	   if(n==1)
	   PORTB=0b00000010;//left
	   if(n==8)
	   PORTB=0b00001000;//right
	   if(n==0)
	   PORTB=0b00000000;//stop
	   
	   
    }
}



//sensor at a0 a3
//motor at b1 b2 b3 b4
//program in gcc application 1
