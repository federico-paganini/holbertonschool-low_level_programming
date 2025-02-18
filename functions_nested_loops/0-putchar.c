#include <stdio.h>
#include "main.h"

/**
 * main - Prints exactly _putchar.
 *
 * Return: Returns 0 (Exit without errors).
 */

int main(void)
{
	char text[9] = "_putchar\n";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(text[i]);
	}

	return (0);
}
