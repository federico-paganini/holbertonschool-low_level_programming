#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */

void times_table(void)
{
	int i;
	int j;
	int n = 0;

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 11; j++)
		{
			_putchar('0' + (n + n));

			if (j != 10){
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
		}

		n++;
	}
}
