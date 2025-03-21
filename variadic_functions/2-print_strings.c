#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Print numbers.
 *
 * @n: Number of string chains to print.
 * @separator: String to print between numbers.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *current;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		current = va_arg(args, char *);

		if (current == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", current);
		}

		if (separator && i != (n - 1))
			printf("%s", separator);
	}
		putchar('\n');
}
