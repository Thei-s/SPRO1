#define F_CPU 16000000UL //needs to be defined for the delay functions to work.

#include <avr/io.h> //used for pins input/output
#include <util/delay.h> //here the delay functions are found
#include <stdio.h> //used for printf function.
#include "usart.h"//for uart output to pc. Debugging purposes

//Declare global variables etc. here

//Declare function prototypes here

int main(void)
{   	 
	uart_init();//initialize communication with PC - debugging
	io_redirect();//redirect printf function to uart, so text will be shown on PC or Nextion Screen
	while(1)
	{
		//Put code in here
	}
	return 0;
}

//Put in function implementations here
