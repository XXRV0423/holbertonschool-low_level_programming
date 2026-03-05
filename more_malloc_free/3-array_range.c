#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integer from min to max
 * @min: Minimum value (included)
 * @max: Maximum value (included)
 *
 * Return: Pointer to newly allocated array containing
 * all integers from min to max
 */
int *array_range(int min, int max)
{
	int *arr;
	unsigned int size;
	unsigned int i;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min + i;

	return (arr);
}
