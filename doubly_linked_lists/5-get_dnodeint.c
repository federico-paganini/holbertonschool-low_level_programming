#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * get_dnodeint_at_index - Returns the nth node.
 *
 * @head: First node of the list.
 * @index: Node posicion to return.
 *
 * Return: The Memory adress of the node. NULL if there's no node.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}

	return (NULL);
}
