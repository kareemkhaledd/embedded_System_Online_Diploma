/*
 * GccApplication1.c
 *
 * Created: 3/7/2024 9:28:26 PM
 * Author : user
 */ 

#define F_CPU 8000000ul
#include <util/delay.h>
#include <avr/io.h>
#include <avr/interrupt.h>

#define SET_BIT(ADDRESS, BIT)	ADDRESS |= (1<<BIT)
#define RESET_BIT(ADDRESS, BIT)		ADDRESS &= ~(1<<BIT)
#define TOGGLE_BIT(ADDRESS, BIT)	ADDRESS ^= (1<<BIT)

void INT_init(void){
	//(INT0) set to any logical change
	SET_BIT(MCUCR,0);
	RESET_BIT(MCUCR,1);
	//(INT1) rising edge 
	SET_BIT(MCUCR,3);
	SET_BIT(MCUCR,2);
	//(INT2) falling edge 
	RESET_BIT(MCUCSR,6);
	
	//enable interrupt 0 1 2
	SET_BIT(GICR,5);
	SET_BIT(GICR,6);
	SET_BIT(GICR,7);
	
	//Enable global interrupt
	sei();
	
}

void GPIO_init(void){
	SET_BIT(DDRD,5);
	SET_BIT(DDRD,6);
	SET_BIT(DDRD,7);
}

int main(void)
{
	GPIO_init();
	INT_init();
	while(1)
	{
		RESET_BIT(PORTD,5);
		RESET_BIT(PORTD,6);
		RESET_BIT(PORTD,7);
	}
}
ISR(INT0_vect){
	SET_BIT(PORTD,5);
	_delay_ms(1000);
}
ISR(INT1_vect){
	SET_BIT(PORTD,6);
	_delay_ms(1000);
}
ISR(INT2_vect){
	SET_BIT(PORTD,7);
	_delay_ms(1000);
}

