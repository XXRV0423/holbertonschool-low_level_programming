#include "main.h"

/**
 * _puts - is going to print a string followed by a new line
 * @str: pointer to the string point
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
