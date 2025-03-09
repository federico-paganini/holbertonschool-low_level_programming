#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins to make change
 *	  for an amount of money.
 *
 * @argc: Number of arguments.
 * @argv: Arguments.
 *
 * Return: 1 if the arguments is more than 1.
 * 0 in other cases (Exit without errors).
 */

int main(int argc, char **argv)
{
	int i;
	int cents, ccount = 0;
	int coins[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		cents = atoi(argv[1]);
		if (cents < 0)
		{

			printf("0\n");
			return (0);
		}
	}

	for (i = 0; i < 5; i++)
	{
		ccount += cents / coins[i];
		cents -= (coins[i] * (cents / coins[i]));
		if (cents == 0)
		{
			break;
		}
	}

	printf("%u\n", ccount);
	return (0);
}
