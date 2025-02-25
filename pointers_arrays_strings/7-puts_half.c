#include "main.h"

/**
 * puts_half - Prints a half o a string.
 *
 * @str: String to print.
 */

void puts_half(char *str)
{
	int n, length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	for (n = ((length - 1) / 2); n < length; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}

