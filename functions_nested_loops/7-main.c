#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0
 */
int main(void)
{
	int r;

	print_last_digit(98);   /* prints 8 */
	print_last_digit(0);    /* prints 0 */
	r = print_last_digit(-1024);  /* prints 4 */
	_putchar('0' + r);
	_putchar('\n');

	return (0);
}
