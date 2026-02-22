#include "main.h"

/**
 * print_rev - prints the string in reverse
 * @s: pointer for the string
 *
 * Return: reversed string
 */

void print_rev(char *s)
{
	int lenght = 0;

	while (s[lenght] != '\0')
	{
		lenght++;
	}

	lenght--;

	while (lenght >= 0)
	{
		_putchar(s[lenght]);
		lenght--;
	}

	_putchar('\n');
}
