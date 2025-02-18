#include "main.h"

/**
 * print_alphabet - Calls the function to print alphabet.
 *
 * Return: Returns 0 (Exit without errors).
 */

void print_alphabet(void)
{
	int ascii;

	for (ascii = 97; ascii <= 122; ascii++)
	{
		_putchar(ascii);
	}
	_putchar('\n');
}
