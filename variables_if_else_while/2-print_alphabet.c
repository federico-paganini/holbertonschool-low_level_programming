#include <stdio.h>

/**
 * main - Function that prints the alphabet in lowercase
 * Return: Returns 0 (Exit without errors)
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');

	return (0);
}
