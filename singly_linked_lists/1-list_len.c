#include "lists.h"
#include <stddef.h>

/**
 * list_len - Returns the number of elements in a linked list.
 *
 * @h: List to count the elements.
 *
 * Return: The number of elements.
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
