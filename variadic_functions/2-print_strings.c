#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_string - Prints strings followed by a new line
 * @separator: String to be printed between strings
 * @n: Number of strings passed to the function
 *
 * Description: Prints n strings separated by a separator.
 * If separator is NULL, it is not printed.
 * If a string is NULL, "(nil)" is printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);

}
