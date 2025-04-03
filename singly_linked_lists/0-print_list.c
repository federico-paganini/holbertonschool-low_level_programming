#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_list - Prints the elements of a list.
 *
 * @h: List recived to print the content.
 *
 * Return: Number of nodes.
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}

	return (count);
}
