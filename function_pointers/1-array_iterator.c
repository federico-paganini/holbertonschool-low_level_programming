#include <stddef.h>

/**
 * array_iterator -  Executes a function given as a parameter
 * on each element of an array.
 *
 * @array: Array to apply te function.
 * @size: Size of the array.
 * @action: Function to apply in array.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
