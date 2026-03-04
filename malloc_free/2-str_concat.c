#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: first string (can be NULL, treated as empty)
 * @s2: second string (can be NULL, treated as empty)
 *
 * Return: pointer to new allocated string concatenated
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	unsigned int len1;
	unsigned int len2;
	unsigned int i;
	unsigned int j;

	len1 = 0;
	if (s1 != NULL)
	{
		while (s1[len1] != '\0')
			len1++;
	}
	len2 = 0;
	if (s2 != NULL)
	{
		while (s2[len2] != '\0')
			len2++;
	}
	result = malloc((len1 + len2 + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		result[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < len2)
	{
		result[i + j] = s2[j];
		j++;
	}
	result[len1 + len2] = '\0';

	return (result);
}
