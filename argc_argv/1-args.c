#include <stdio.h>

/**
 * main - Prints the number of arguments passed into the program.
 *
 * @argc: Number of arguments.
 * @argv: Arguments.
 *
 * Return: Returns 0 (Exit without errors).
 */

int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", (argc - 1));

	return (0);
}
