#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * dlistint_len - Counts elements of a double linked list.
 *
 * @h: Element passed to function.
 *
 * Return: The number of nodes.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
