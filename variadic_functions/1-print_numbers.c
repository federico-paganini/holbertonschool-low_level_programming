#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Print numbers.
 *
 * @n: Number of integers to print.
 * @separator: String to print between numbers.
 *
 * Return: Sum of the parameters.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (n == 0)
		return;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (separator && i != (n - 1))
			putchar(*separator);

		if (i != (n - 1))
			putchar(' ');
	}
		putchar('\n');
}
