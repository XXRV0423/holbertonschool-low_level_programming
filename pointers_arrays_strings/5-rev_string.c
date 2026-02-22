#include "main.h"

/**
 * rev_string - reverse a string
 * @s: pointer for string
 *
 */

void rev_string(char *s)
{
	int beginning = 0;
	int end = 0;
	char temp;

	while (s[end] != '\0')
	{
		end++;
	}

	end--;

	while (beginning < end)
	{
		temp = s[beginning];
		s[beginning] = s[end];
		s[end] = temp;

		beginning++;
		end--;
	}
}
