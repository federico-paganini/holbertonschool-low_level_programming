#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 * Return: Returns 0 (Exit without errors)
 */

int main(void)
{
	int dig;

	for (dig = 0; dig < 10; dig++)
	{
		putchar(dig+ '0');
		if (dig != 9)
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar('\n');
		}
	}

	return (0);
}
