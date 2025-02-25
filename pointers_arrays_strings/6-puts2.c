#include "main.h"

/**
 * puts2 - Prints every other characters of a string.
 *
 * @str: String to print.
 */

void puts2(char *str)
{
	int n, length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	for (n = 0; n < length; n += 2)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
