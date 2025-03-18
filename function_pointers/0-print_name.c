#include "function_pointers.h"

/**
 * print_name - Prints a name.
 *
 * @name: Name to print.
 * @f: Function to format the name output.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
