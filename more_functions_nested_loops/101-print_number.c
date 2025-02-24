#include "main.h"

/**
 * print_number - Prints an integer.
 *
 * @n: Number to print.
 */

void print_number(int n)
{
	unsigned int nn;

	if (n < 0)
	{
		_putchar('-');
		nn = -n;
	}
	else
	{
		nn = n;
	}

	if (nn / 10 == 0)
	{
		_putchar(nn + '0');
		return;
	}

	print_number(nn / 10);

	_putchar((nn % 10) + '0');
}
