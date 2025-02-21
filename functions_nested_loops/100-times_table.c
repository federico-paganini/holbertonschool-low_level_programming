#include "main.h"

/**
 * print_times_table - Prints the n times table.
 *
 *@n: Times to print tables.
 */

void print_times_table(int n)
{
	int i, j, result;

	if (n < 0 || n > 15)
		return;
	for (i = 0; i <= n; i++)
		for (j = 0, result = 0; j <= n; j++, result = i * j)
		{
			if (result >= 100)
			{
				_putchar(' ');
				_putchar('0' + (result / 100));
				_putchar('0' + ((result / 10) % 10));
				_putchar('0' + (result % 10));
			}
			else
				if (result >= 10)
				{
					_putchar(' '), _putchar(' ');
					_putchar('0' + (result / 10));
					_putchar('0' + (result % 10));
				}
				else
					if (j == 0)
						_putchar('0' + result);
					else
					{
						_putchar(' '), _putchar(' ');
						_putchar(' ');
						_putchar('0' + result);
					}
			_putchar(j == n ? '\n' : ',');
		}

}
