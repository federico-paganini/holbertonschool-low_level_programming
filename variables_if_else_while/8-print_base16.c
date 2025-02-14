#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase
 * Return: Returns 0 (Exit without errors)
 */

int main(void)
{
	char hexd;

	for (hexd = 0; hexd < 16; hexd++)
	{
		if (hexd < 10)
		{
			putchar(hexd + '0');
		}
		else
		{
			putchar(hexd - 10 + 'a');
		}
	}

	putchar('\n');

	return (0);
}
