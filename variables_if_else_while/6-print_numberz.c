#include <stdio.h>

/**
 * main - Entry point, prints all single digit numbers
 * of base 10 starting from 0 but without using char command
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(n + '0');
		n++;
	}

	putchar('\n');

	return (0);

}
