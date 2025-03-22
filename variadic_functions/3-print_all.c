#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything..
 *
 * @format: Format of arguments.
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	va_list args;

	va_start(args, format);

	while (format[i] != '\0' && format[i + 1] != '\0')
	{
		if (get_op_func(format[i]))
		{
			get_op_func(format[i])(&args);
			printf(", ");
		}
		i++;
	}
	get_op_func(format[i])(&args);
	putchar('\n');
}

/**
 * print_char - Prints a simple char.
 *
 * @arg: Char recived.
 */

void print_char(va_list *arg)
{
	putchar(va_arg(*arg, int));
}

/**
 * print_int - Prints an int.
 *
 * @arg: Int recived.
 */

void print_int(va_list *arg)
{
	printf("%d", va_arg(*arg, int));
}

/**
 * print_float - Prints a float number.
 *
 * @arg: Float recived.
 */

void print_float(va_list *arg)
{
	printf("%f", va_arg(*arg, double));
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
	{
		printf("(nil)");
	}
	else
	{
		printf("%s", str);
	}
}
