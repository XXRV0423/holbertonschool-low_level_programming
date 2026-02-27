#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * is_positive_number - checks if a string contains only digits
 * @s: string to check
 *
 * Return: 1 if string contains only digits, 0 otherwise
 */

int is_positive_number(char *s)
{
	int i = 0;

	if (s[0] == '\0')
		return (0);

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * main - adds positive numbers
 * @argc: number of arguments passed to the program
 * @argv: array of pointers to the arguments
 *
 * Return: 0 if success, 1 if error
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!is_positive_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
