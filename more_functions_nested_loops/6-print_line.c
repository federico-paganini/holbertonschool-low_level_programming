#include "main.h"

/**
 * print_line - Draws a straight line in the terminal.
 *
 * @n: Length of the line.
 */

void print_line(int n)
{
	int i;
	int nn = ((n < 0) ? 0 : n);

	for (i = 0; i < nn; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
