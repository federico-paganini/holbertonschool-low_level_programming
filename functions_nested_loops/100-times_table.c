#include "main.h"

/**
 * print_times_table - Prints the n times table.
 *
 *@n: Times to print tables.
 */

void print_times_table(int n)
{
	int i;
	int j;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			int result = (i * j);
			if (result >= 1000)
			{
				_putchar('0' + (result / 1000));
				_putchar('0' + ((result / 100) % 10));
				_putchar('0' + ((result / 10) % 10));
				_putchar('0' + (result % 10));
			}
			else
			{
				if (result >= 100)
				{	_putchar(' ');
					_putchar('0' + (result / 100));
					_putchar('0' + ((result / 10) % 10));
					_putchar('0' + (result % 10));
				}
				else
				{
					if (result >= 10)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + (result / 10));
						_putchar('0' + (result % 10));
					}
					else
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + result);
					}
				}
			}
			if (j == n) 
			{
				_putchar('\n');
			}
			else
			{
				_putchar(',');
			}
		}
	}

}
