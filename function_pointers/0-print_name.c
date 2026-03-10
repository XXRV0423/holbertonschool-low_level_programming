#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - prints a name using a function pointer
 * @name: pointer to the name string
 * @f: function pointer used to print the name
 *
 * Description: calls the function f with the name of the argument
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
