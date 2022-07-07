/*
 * ctc_mode_main.c
 *
 * Created: 04/10/2018 06:10:59 p.m.
 * Author : Laptop
 */ 
//LED FLASH EVERY 50 ms
#define F_CPU 16000000
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#include "timer.h"
#include "interrupt.h"
int flag=0;



void pin_config(){	
	
	DDRB = (1<<PORTB5)|(1<<PORTB0);
}

int main(void)
{
    pin_config();
	timer0_config();
	//initInterrupt1();	
	sei();
    while (1) 
    { 
				
    }
}
ISR(TIMER0_COMPA_vect)
{
    PORTB^=1<<5;
}