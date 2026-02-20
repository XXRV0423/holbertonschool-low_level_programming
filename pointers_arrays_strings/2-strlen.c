#include "main.h"

/**
 * _strlen - returns the lenght of a string
 * @s: pointer for the string
 *
 * Return: lenght of hte string
 */

int _strlen(char *s)
{
	int lenght = 0;

	while (s[lenght] != '\0')
	{
		lenght++;
	}
	return (lenght);
}
