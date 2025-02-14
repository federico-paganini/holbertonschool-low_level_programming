#include <stdio.h>

/**
 * main - Function that prints the alphabet in lowercase
 * Return: Returns 0 (Exit without errors)
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	{
		putchar(alphabet);
	}
	putchar('\n');

	return (0);
}
