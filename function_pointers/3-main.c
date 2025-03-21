#include "3-calc.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Performs simple operations.
 *
 * @argc: Arguments count.
 * @argv: Arguments.
 *
 * Return: 0.
 */

int main(int argc, char **argv)
{
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));

	printf("%d\n", result);

	return (0);
}
