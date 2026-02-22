#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string
 *
 * Return: the converted integer
 */

int _atoi(char *s)
{
	int sign = 1;
	int num = 0;
	int found = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;

		else if (*s >= '0' && *s <= '9')
		{
			found = 1;

			if (sign == -1)
				num = num * 10 - (*s - '0');
			else
				num = num * 10 + (*s - '0');
		}
		else if (found)
			break;

		s++;
	}

	return (num);
}
