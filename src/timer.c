/*
 * timer.c
 *
 * Created: 6/28/2022 15:41:24
 *  Author: Jahongir
 */ 
 
#include <timer.h>

void timer0_config(){
	
	TCCR0A =(1<<WGM01);//CTC mode ni yoqish
	TCCR0B =(5<<CS00);
	OCR0A =255;  // taymer sanagan qiymatlarni sanash uchun ishlatiladi 
	TIMSK0 =1<<OCIE0A; // compare A ni yoqish
	
}
