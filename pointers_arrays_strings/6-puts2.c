#include "main.h"

/**
 * puts2 - Prints every other characters of a string.
 *
 * @str: String to print.
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}
