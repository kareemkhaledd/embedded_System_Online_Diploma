#include "uart.h"
uint8_t string_buffer[100]="learn-in-depth:Kareem Khaled";
const uint8_t string_buffer2[100]="learn-in-depth:Kareem Khaled";
void main(void){
	Uart_Send_String(string_buffer);
}