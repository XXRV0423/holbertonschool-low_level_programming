#include "main.h"

/**
 * print_most_numbers - prints the number from 0 to 9, excluding 2 and 4
 *
 * You can only use _putchar twice
 */

void print_most_numbers(void)
{
	char c = '0';

	while (c <= '9')
	{
		if (c != '2' && c != '4')
			_putchar(c);
		c++;
	}
	_putchar('\n');
}
