#include <unistd.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - own printf function it will work like printf function
 * @format: type specifier. ex: _printf("%d") will print decimal
 								_printf("%c") will print character
 								_printf("%s") will print string
 * Return: number of character printed
*/
int _printf(const char* format, ...) {
	va_list argumentList;
	int length = 0;
	int i;
	
	va_start(argumentList, format);
	
	for (i = 0; format[i] != '\0'; i++) {
		//We check cases here
		
		/*If there is no '%' sign print string or character*/
		if (format[i] != '%') {
			_putchar(format[i]);
		}
		
		/*If there is only one % print nothing*/
		else if (format[i] == '%' && format[i + 1] == '\0') {
			_putchar(' ');
		}
		
		/*If there double % it will print one %*/
		else if (format[i] == '%' && format[i + 1] == '%') {
			_putchar('%');
		}
		
		/*If there is c after % print character*/
		else if (format[i] == '%' && format[i + 1] == 'c') {
			_putchar(va_arg(argumentList, int));
			i++;
		}
		
		/*If there is s after % print string*/
		else if (format[i] == '%' && format[i + 1] == 's') {
			_puts(va_arg(argumentList, char *));
			i++;
		}
	}
	
	va_end(argumentList);
	return length;
}
