#include "main.h"
#include "_putchar.c"
#include "_printf.c"

int main(void) {

	int number1 = 12;
	int number2 = 23;
	
	/*printing only string without '%' sign*/
	_printf("Hello, World!\n");
	
	/*printing only one character*/
	_printf("A\n");
	
	/*printing with one '%' sign. It will print nothing.*/
	_printf("%\n");
	
	/*printing with double '%' sign. It will print only one %*/
	_printf("%%");
	
	return 0;
}
