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
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		head = head->next;
	}

	if (!head)
		return (NULL);

	return (head);
}
