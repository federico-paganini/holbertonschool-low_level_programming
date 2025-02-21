#include <stdio.h>

/**
 * main - Prints the first 50 fibonacci numbers.
 *
 * Return: Returns 0 (Exit without errors).
 */

int main(void)
{
	int i;
	long int prev = 1;
	long int numb = 2;

	printf("%ld, %ld, ", prev, numb);

	for (i = 3; i <= 50; i++)
	{
		long int sum = (prev + numb);

		if (i != 50)
		{
			printf("%ld, ", sum);
		}
		else
		{
			printf("%ld\n", sum);
		}


		prev = numb;
		numb = sum;
	}

	return (0);
}
