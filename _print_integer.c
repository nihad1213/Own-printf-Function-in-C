#include "main.h"

/**
 * _print_number - convert integer to string
 * @length: length of number
 * @s: number to be converted
 * Return: void
*/
int _print_number(unsigned int length, int s) {
	int mod = 0, c = 0;
	unsigned int number;
	char buffer[11];
	
	/*For negative numbers*/
	if (s < 0) {
		_putchar('-');
		length++;
		number = -1 * s;
	} else {
		number = s;
	}
	
	if (number == 0) {
		_putchar(48);
		return (length + 1);
	}
	
	while (number > 0) {
		mod = number % 10;
		buffer[c] = mod + 48;
		number = number / 10;
		c++;
	}
	
	length = length + c;
	c = c - 1;
	
	while (c >= 0) {
		_putchar(buffer[c]);
		c--;
	}
	
	return (length);
} 
