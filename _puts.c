#include "main.h"

/**
 * _puts - It will print string
 * @str: string
 * Return: length
*/
int _puts(char *str) {
	int length = 0;
	
	if (str == NULL) {
		str = "(null)";
	}
	
	if (str) {
		for (length = 0; str[length] != '\0'; length++) {
			_putchar(str[length]);
		}
	}
	
	return length;
}
