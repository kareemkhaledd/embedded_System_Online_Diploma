#include "uart.h"
#define UART0_DR *((vuint32_t *)((uint32_t)(0x101f1000)))
void Uart_Send_String(uint8_t* tx){
	while(*tx !='\0'){
		UART0_DR=*tx;
		tx++;
	}
}