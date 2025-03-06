#include "main.h"

/**
 * _print_rev_recursions - Prints a string in reverse.
 *
 * @s: Char to print.
 */

void _print_rev_recursions(char *s)
{
	if (s[0] == '\0')
	{
		return;
	}

	_print_rev_recursions(s + 1);
	_putchar(s[0]);
}
