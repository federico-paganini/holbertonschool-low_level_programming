#include <stdio.h>

/**
 * main - Function that prints the alphabet in lowercase
 * without q and e
 * Return: Returns 0 (Exit without errors)
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'q' && alphabet != 'w')
		{
			putchar(alphabet);
		}
	}

	putchar('\n');

	return (0);
}
