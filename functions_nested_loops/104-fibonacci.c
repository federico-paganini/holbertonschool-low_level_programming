#include <stdio.h>

/**
 * main - Prints the first 50 fibonacci numbers.
 *
 * Return: Returns 0 (Exit without errors).
 */

int main(void)
{
	int i;
	unsigned long prev = 1;
	unsigned long numb = 2;

	printf("%ld, %ld, ", prev, numb);

	for (i = 3; i <= 98; i++)
	{
		unsigned long sum = (prev + numb);

		if (i != 98)
		{
			printf("%lu, ", sum);
		}
		else
		{
			printf("%lu\n", sum);
		}

		prev = numb;
		numb = sum;
	}

	return (0);
}
