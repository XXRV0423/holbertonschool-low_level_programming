#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and initializes
 * it with a specific char
 *
 * @size: The number of elements in an array
 * @c: The char to initialize each elemet with
 *
 * Return: A pointer to the created array,
 * or NULL if size is 0 or allocation fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
