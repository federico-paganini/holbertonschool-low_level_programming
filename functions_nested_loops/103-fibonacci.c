#include <stdio.h>

/**
 * main - Prints the addition of the pair therms of Fibonacci under 4.000.000
 *
 * Return: Returns 0 (Exit without errors).
 */

int main(void)
{
	int i;
	long long int prev = 1;
	long long int numb = 2;
	long long int pairsum = 2;
	long long int sum = 0;

	do {
		sum = (prev + numb);

		if ((sum % 2) == 0)
		{
			pairsum += sum;
		}

		prev = numb;
		numb = sum;
	} while (sum < 4000000);

	printf("%lld\n", pairsum);
	return (0);
}
