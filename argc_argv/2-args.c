#include <stdio.h>

/**
 * main - Prints all arguments that the program recives.
 *
 * @argc: Number of arguments.
 * @argv: Arguments.
 *
 * Return: Returns 0 (Exit without errors).
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
