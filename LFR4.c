/*
 * GccApplication6.c
 *
 * Created: 3/16/2016 9:57:28 AM
 *  Author: Anurag Saraswat
 */ 


#include<avr/io.h>
#include<util/delay.h>
#define F_CPU 1000000
void main()
{
	DDRC=0b00000000;
	DDRB=0b00011110;
	int n=0;
	while(1)
	{
		n=PINC&0b00001111;
		if(n==0)
		{
			PORTB=0b00001000; //+right
		}			
		else if(n==15)
		{
			PORTB=0b00001010; //forward
		}			
		else if(n==11)
		{
			PORTB=0b00000010; //left
		}			
		else if(n==13)
		{
			PORTB=0b00001000; //right
		}
		else if(n==3)
		{
			PORTB=0b00000010; //90* left
			_delay_ms(1500);
		}			
		else if(n==12)
		{
				
			PORTB=0b00001000; //90*right
			_delay_ms(1500);
		}
		else if(n==7)
		{
			PORTB=0b00000010;//90*+ left
			_delay_ms(1500);
		}
		else if(n==14)
		{
			PORTB=0b00001000; //90*+ right
			_delay_ms(1500);
		}
	    else if(n==9)
		{
			PORTB=0b00000010; //circle left
			_delay_ms(1500);
		}
		else
		{
	        PORTB=0b00001010;			
		}	     
   }	
}



//sensor at a0 a1 a2 a3
//motor at b1 b2 b3 b4
//program in lfr4