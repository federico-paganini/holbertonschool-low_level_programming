#include "main.h"

/**
 * _puts_recursion - Prints a string.
 * 
 * @s: Char to print.
 */

void _puts_recursion(char *s)
{
    if (*s == '\0')
        return;
    
    _putchar(*s);
    _puts_recursion(s + 1);

    if (*(s + 1) == '\0')
        _putchar('\n');
}
