/*
 * interrupt.c
 *
 * Created: 6/28/2022 11:22:46
 *  Author: Jahongir
 */ 
#include <interrupt.h>
#include <avr/io.h>   


void initInterrupt0(void) {
	EIMSK |= (0 << INT0);  /* enable INT0 */
	EICRA |=(0<<ISC01)|(0<<ISC00);  /* it detects only ground */ 
    PORTD |=(1<<2);                    
	sei();                 /* set (global) interrupt enable bit */
}
void initInterrupt1(void) {
	EIMSK |= (1 << INT1);   /* enable INT1 */
	EICRA |=(0<<ISC11)|(0<<ISC10);/* it detects only ground */
	PORTD |=(1<<3);                                    
	sei();                  /* set (global) interrupt enable bit */
}