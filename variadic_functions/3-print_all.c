#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything.
 *
 * @format: Format of arguments.
 */

void print_all(const char * const format, ...)
{
	int i = 0, valid = 0;
	va_list args;

	va_start(args, format);
	while (format && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				putchar(va_arg(args, int));
				valid = 1;
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				valid = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				valid = 1;
				break;
			case 's':
				print_string(&args);
				valid = 1;
				break;
			default:
				valid = 0;
				break;
		}
		if (format[i + 1] != '\0' && valid)
			printf(", ");
		i++;
	}
	putchar('\n');
}

/**
 * print_string - Prints a string.
 *
 * @arg: String recived.
 */

void print_string(va_list *arg)
{
	char *str = va_arg(*arg, char *);

	if (str == NULL)
		str = "(nil)";

	printf("%s", str);
}
