#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Sum of all its parameters.
 *
 * @n: Number of parameters.
 *
 * Return: Sum of the parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list arglst;

	if (n == 0)
		return (0);

	va_start(arglst, n);

	for (i = 0; i < n; i++)
		sum += va_arg(arglst, int);

	va_end(arglst);

	return (sum);
}
