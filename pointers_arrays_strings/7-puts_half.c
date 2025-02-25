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

	n = (length % 2 == 0) ? length / 2 : (length + 1) / 2;

	for (; n < length; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
