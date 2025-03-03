#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer - Prints a buffer.
 * @b: Buffer to print.
 * @size: Size to print.
 */

void print_buffer(char *b, int size)
{
	int i, j, bytes;

	if (size <= 0)
	{
		putchar('\n');
		return;
	}
	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
				printf("%02x", b[i + j] & 0xFF);
			else
				putchar(' ');

			if (j % 2 == 1)
				putchar(' ');
		}
		bytes = size - i;
		if (bytes < 10)
		{
			for (j = bytes; j < 10; j++)
			{
				printf(" ");
			}
		}
		for (j = 0; j < (bytes < 10 ? bytes : 10); j++)
		{
			if (i + j < size)
				printf("%c", (isprint(b[i + j])) ? b[i + j] : '.');
		}
		putchar('\n');
	}
}
