#include "main.h"
#include "_putchar.c"
#include "_printf.c"
#include "_puts.c"

int main(void) {

	int number1 = 12;
	int number2 = 23;
	char character = 'A';
	char string[100] = "Own printf function in C";

	/*printing only string without '%' sign*/
	_printf("Hello, World!\n");

	/*printing only one character*/
	_printf("A\n");

	/*printing with one '%' sign. It will print nothing.*/
	_printf("%\n");

	/*printing with double '%' sign. It will print only one %*/
	_printf("%%\n");

	/*printing character with %c*/
	_printf("Character: %c\n", character);
	
	/*printing string with %s*/
	_printf("String: %s", string);
	return 0;
}
