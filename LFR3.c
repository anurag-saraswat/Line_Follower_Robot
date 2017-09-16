/*
 * GccApplication2.c
 *
 * Created: 3/17/2016 1:34:03 PM
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
      n=PINC&0b00001011;
	  if(n==0)
	  {
		PORTB=0b00000000;  
	  }
	  else if(n==3)
	  {
		  PORTB=0b00000010; //left
	  }
	  else if(n==10)
	  {
		  PORTB=0b00001000; //right
	  }
	  else if(n==9)	
	  {
		  PORTB=0b00001010; //forward
	  }
	  else if(n==1)
	  {
		  PORTB=0b00000010; //90* left
		  _delay_ms(1000);
	  }
	  else if(n==8)	
	  {
	  PORTB=0b00001000; //90*right
	  _delay_ms(1000);
	  }
	  else if(n==11)
	  {
		PORTB=0b00001010; //forward    
	  }				  	  		  	  
    }
}





//sensor at a0 a1 a3
//motor at b1 b2 b3 b4
//program in gcc application 2
