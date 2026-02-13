#include <stdio.h>

/**
 * main - Entry point, prints the alphabet in lowercase and then in uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
		putchar(c++);

	c = 'A';

	while (c <= 'Z')
		putchar(c++);

	putchar('\n');

	return (0);
}
