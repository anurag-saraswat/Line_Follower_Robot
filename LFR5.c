/*
 * GccApplication8.c
 *
 * Created: 3/19/2016 2:27:22 PM
 *  Author: Anurag Saraswat
 */ 


#include <avr/io.h>
#include<util/delay.h>
#define F_CPU 1000000

void main()
{
	DDRC=0b00000000;
	DDRB=0b00011110;
	int n=0;
    while(1)
    {
      n=PINC&0b00011111;
	  if(n==0)
	  {
		 PORTB=0b00000000; //stop 
	  } 
	  if(n==27)
	  {
		 PORTB=0b00001010; //forward
	  } 
	  if(n==31)
	  {
		 PORTB=0b00010100; //reverse
	  }
	  if(n==29)
	  {
		 PORTB=0b00001000; //+right 
	  }
	  if(n==23)
	  {
		 PORTB=0b00000010; //left 
	  }
	  if(n==7)
	  {
		  PORTB=0b00001000; //90*right
		  _delay_ms(1500);
	  }
	  if(n==28)
	  {
		 PORTB=0b00000010; //90* left
		 _delay_ms(1500); 
	  }
	  if(n==26)
	  {
		 PORTB=0b00001000; //90*+ right
		 _delay_ms(1600); 
	  }
	  if(n==11)
	  {
		 PORTB=0b00000010;//90*+ left
		_delay_ms(1600);  
	  }
    }
}



//sensor at a0 a1 a2 a3 a4
//motor at b1 b2 b3 b4
//program in GccApplication8.c