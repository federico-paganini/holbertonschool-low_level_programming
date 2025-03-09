#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers.
 *
 * @argc: Number of arguments.
 * @argv: Arguments.
 *
 * Return: If one argument is not number return 1.
 * In other cases return 0 (Exit without errors).
 */

int main(int argc, char **argv)
{
	int i, j;
	unsigned int result = 0;

	if (argc < 2)
	{
		putchar('\n');
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[i]);
	}

	printf("%u\n", result);
	return (0);
}

