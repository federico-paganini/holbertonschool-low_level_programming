#include <stdio.h>

/**
 * main - Prints the largest prime factor of the number 612852475143.
 *
 * Return: Returns 0 (Exit without errrors).
 */

int main(void)
{
	long int n = 612852475143;
	int i = 2;

	while (n > 1)
	{
		if (n % i == 0)
		{
			n = n / i;
		}
		else
		{
			i++;
		}
	}

	printf("%d\n", i);
	return (0);
}
