#include <stdio.h>


/**
 * main - Prints the alphabet in lowercase, and then in uppercase
 * Return: Returns 0 (Exit without errors)
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
	{
		putchar(alphabet);
	}

	putchar('\n');

	return (0);
}
