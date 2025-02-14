#include <stdio.h>

/**
 * main - Prints single digit numbers.
 * Return: Returns 0 (Exit without errors)
 */

int main(void)
{
	int numb;

	for (numb = 0; numb < 10; numb++)
	{
		printf("%d", numb);
	}

	putchar('\n');

	return (0);
}
