#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dlistint - Prints all the elements of a double linked list.
 *
 * @h: Element passed to function.
 *
 * Return: The number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
