#include <stdlib.h>

/**
 * string_nconcat - Concatenate two strings with n bytes from second string
 * @s1: First string (NULL treated as empty string)
 * @s2: Second string (NULL treated as empty string)
 * @n: Number of bytes from s2 to concatenate
 *
 * Return: Pointer to newly allocated concatenated string, NULL if malloc fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int len1, len2, total_len;
	unsigned int i, j;

	len1 = 0;
	if (s1 != NULL)
		while (s1[len1] != '\0')
			len1++;

	len2 = 0;
	if (s2 != NULL)
		while (s2[len2] != '\0')
			len2++;

	if (n >= len2)
		n = len2;

	total_len = len1 + n;

	new_str = malloc(total_len + 1);
	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		new_str[i] = s1[i];

	for (j = 0; j < n; j++)
		new_str[i + j] = s2[j];

	new_str[i + j] = '\0';

	return (new_str);
}
