#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Gets a random number, prints it, and prints the last digit
 * with a message
 *
 * Return: Returns 0 (Exit without errors)
 */
int main(void)
{
	int n;
	int ldigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ldigit = n % 10;
	printf("Last digit of %d is %d ", n, ldigit);
	if (ldigit == 0)
	{
		printf("and is 0\n");
	}
	else if (ldigit > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (ldigit < 6)
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
