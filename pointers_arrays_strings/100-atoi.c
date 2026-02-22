#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string
 *
 * Return: the integer converted from the string
 */
int _atoi(char *s)
{
	int sign = 1;
	int num = 0;
	int found_digit = 0;

	while (*s != '\0')
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
		{
			found_digit = 1;
			num = num * 10 + (*s - '0');
		}
		else if (found_digit)
			break;

		s++;
	}

	return (num * sign);
}
