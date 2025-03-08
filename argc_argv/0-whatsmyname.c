#include <stdio.h>

/**
 * main - Prints the name of the program.
 *
 * @argv: Number of arguments passed to the function.
 * @argc: Arguments passed to the function.
 *
 * Return: Returns 0 (Exit without errors).
 */

int main(int argv, char **argc)
{
	(void)argv;
	printf("%s\n", argc[0]);

	return (0);
}
