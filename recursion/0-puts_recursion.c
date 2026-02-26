#include "main.h"

/**
_putchar_recursion - prints a string followed by a new line
@s: pointer to the string to be printed 

Return: nothing
*/

void _putchar_recursion(char *s)
{
    if (*s == '\0')
    {
        _putchar('\n');
        return;
    }
    _putchar(*s);
    _putchar_recursion(s + 1);
}