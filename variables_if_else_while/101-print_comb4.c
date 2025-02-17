#include <stdio.h>

/**
 * main - prints all possible different combinations
 * of three digits.
 *
 * Return: Returns 0 (Exit without errors).
 */

int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 9; j++)
		{
			for (k = 0; k < 10; k++)
			{

				if (i < j && j < k)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					if (i == 7 && j == 8 && k == 9)
					{
						putchar('\n');
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
}

	return (0);
}
