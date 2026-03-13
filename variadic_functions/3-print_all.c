#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything based on a format string
 * @format: String containing types of arguments to print
 *
 * Description: Supported types:
 * c: char
 * i: int
 * f: float
 * s: string (print (nil) if NULL)
 * Any other char is ignored.
 * Prints a new line at the end.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;
	const char *sep = "";

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == 'c')
			printf("%s%c", sep, va_arg(args, int));
		if (format[i] == 'i')
			printf("%s%d", sep, va_arg(args, int));
		if (format[i] == 'f')
			printf("%s%f", sep, va_arg(args, double));
		if (format[i] == 's')
		{
			str = va_arg(args, char *);
			if (!str)
				str = "(nil)";
			printf("%s%s", sep, str);
		}
		if (format[i] == 'c' || format[i] == 'i' ||
		    format[i] == 'f' || format[i] == 's')
			sep = ", ";
		i++;
	}

	va_end(args);

	printf("\n");
}
