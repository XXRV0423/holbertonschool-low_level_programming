#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: pointer of the string
 */
void puts2(char *str)
{
	int i = 0;

	while (str[1] != '\0')
	{
		_putchar(str[1]);
		i += 2;
	}

	_putchar('\n');
}
