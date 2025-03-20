#include "3-calc.h"
#include <stddef.h>
#include <string.h>

/**
 * get_op_func - Selects the correct function to perform operations.
 *
 * @s: Character who indicates the operation to perform.
 *
 * Return: A pointer to the function to perform the operation.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
