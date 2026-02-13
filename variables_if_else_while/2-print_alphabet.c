#include <stdio.h>

/**
 * main - Entry point, prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
		putchar(c++);

	putchar('\n');

	return (0);
}
