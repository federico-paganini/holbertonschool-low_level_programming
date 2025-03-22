#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of its own main function.
 *
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: 0 succes, 1 error.
 */

int main(int argc, char **argv)
{
	int i, bytes;
	unsigned char *byte;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	byte = (unsigned char *) main;

	for (i = 0; i < bytes; i++)
	{
		printf("%02x", byte[i]);
		if (i < bytes - 1)
			putchar(' ');
	}

	putchar('\n');
	return (0);
}
