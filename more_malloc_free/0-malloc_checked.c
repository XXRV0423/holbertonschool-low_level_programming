#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocate memory with error checking
 * @b: Number of bytes to allocate
 *
 * Return: Pointer to allocated memory
 * Exit with status 98 if malloc fails
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
