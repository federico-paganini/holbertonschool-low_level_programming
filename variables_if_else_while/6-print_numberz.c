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
		putchar(numb + '0');
	}

	putchar('\n');

	return (0);
}
