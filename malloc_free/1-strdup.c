#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a new string
 * which is a duplicate of the string str
 *
 * @str: string to duplicate
 *
 * Return: duplicated string
 */

char *_strdup(char *str)
{
	char *duplicate;
	int len;
	int i;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (str[len])
		len++;

	duplicate = malloc((len + 1) * sizeof(char));
	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		duplicate[i] = str[i];

	return (duplicate);
}
