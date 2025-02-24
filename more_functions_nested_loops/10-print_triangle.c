#include "main.h"

/**
 * print_triangle - Prints a triangle.
 *
 * @size: Size of the triangle.
 */

void print_triangle(int size)
{
	int i, j, h;
	int nn = (size < 0) ? 0 : size;

	if (nn == 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < nn; i++)
	{
		for (j = 0; j < (nn - i); j++)
		{
			_putchar(' ');
		}

		for (h = 0; h <= i; h++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
