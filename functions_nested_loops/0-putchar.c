#include <stdio.h>
#include "main.h"

/**
 * main - Prints exactly _putchar.
 *
 * Return: Returns 0 (Exit without errors).
 */

int main(void)
{
	char text[] = "_putchar";
	size_t length = sizeof(text) / sizeof(text[0];

	for (int i = 0; i < length; i++)
	{
		_putchar(text[i]);
	}

	return (0);
}
