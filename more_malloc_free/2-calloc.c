#include <stdlib.h>

/**
 * _calloc - Allocate memory for an array and initialize to zero
 * @nmemb: Number of array elements
 * @size: Size of each element in bytes
 *
 * Return: Pointer to allocated zeroed memory, NULL if malloc fails or
 * if nmemb or size is 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size;
	unsigned int i;
	char *byte_ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;

	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);

	byte_ptr = (char *)ptr;
	for (i = 0; i < total_size; i++)
		byte_ptr[i] = 0;

	return (ptr);
}
