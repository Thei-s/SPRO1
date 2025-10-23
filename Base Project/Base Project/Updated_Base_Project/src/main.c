#define F_CPU 16000000UL //needs to be defined for the delay functions to work.

#include <avr/io.h> //used for pins input/output
#include <util/delay.h> //here the delay functions are found
#include <stdio.h> //used for printf function.
#include "usart.h"//for uart output to pc. Debugging purposes

//Declare global variables etc. here

//Declare function prototypes here
void write_to_screen_int(int value, const char *variable_name);
void write_to_screen_float(float value, const char *variable_name);

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
void write_to_screen_int(int value, const char *variable_name) {
    printf("%s.val=%d\xFF\xFF\xFF", variable_name, value);
}

void write_to_screen_float(float value, const char *variable_name) {
    printf("%s.txt=\"%.2f\"\xFF\xFF\xFF", variable_name, value);
}
