#include "main.h"

/**
 * print_square - Draws a diagonal line on the terminal.
 *
 * @size: Size of the square.
 */

void print_square(int size)
{
	int i, j;
	int nn = (size < 0) ? 0 : size;

	if (nn == 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < nn; i++)
	{
		for (j = 0; j < nn; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

