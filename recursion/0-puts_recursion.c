#include "main.h"

/**
 * _puts_recursion - Prints a string.
 * 
 * @s: Char to print.
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;

	if (*s != '\0')
		_puts_recursion(s);

	if (*(s + 1) == '\0')
		_putchar('\n');	
}
