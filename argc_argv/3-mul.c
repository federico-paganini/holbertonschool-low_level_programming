#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers.
 *
 * @argc: Number of arguments.
 * @argv: Arguments.
 *
 * Return: Returns 0 (Exit without errors).
 */

int main(int argc, char **argv)
{
	int result;
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	if (argc < 3)
		printf("Error\n");

	result = num1 * num2;
	printf("%d\n", result);

	return (0);
}
