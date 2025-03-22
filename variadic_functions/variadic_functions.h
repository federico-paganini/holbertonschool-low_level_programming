#ifndef V_FUNC_H
#define V_FUNC_H

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * get_op_func - Selects the correct function to print.
 *
 * @s: Char to select option.
 *
 * Return: The selected print function or NULL.
 */

void (*get_op_func(char s))(va_list *)
{
	options_f opt[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	int i = 0;

	while (opt[i].op != '\0' && opt[i].op != s)
		i++;

	return (opt[i].f);
}

void print_char(va_list *arg);
void print_int(va_list *arg);
void print_float(va_list *arg);
void print_string(va_list *arg);

/**
 * struct options - Struct options.
 *
 * @op: The operator
 * @f: The function associated
 */

typedef struct options
{
	char op;
	void (*f)(va_list *arg);
} options_f;

#endif
