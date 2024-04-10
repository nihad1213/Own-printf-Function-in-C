#include <unistd.h>
#include "main.h"
/**
 * _putchar - print character
 * @c: character
 * Return: only one character
*/

int _putchar(char c) {
	return(write(1, &c, 1));
}
