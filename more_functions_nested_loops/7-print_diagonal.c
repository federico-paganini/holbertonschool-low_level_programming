#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal.
 *
 * @n: Length of the diagonal.
 */

void print_diagonal(int n)
{
	int i, j;
	int nn = (n < 0) ? 0 : n;

	if (nn == 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < nn; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('/');
		_putchar('\n');
	}
}

