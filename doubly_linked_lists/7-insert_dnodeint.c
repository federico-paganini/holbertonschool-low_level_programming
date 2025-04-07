#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 *
 * @h: Fist element of the list.
 * @idx: Index for insert new element.
 * @n: Number to save in new node.
 *
 * Return: The memory adress of the new node. NULL if fails.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	dlistint_t *tmp = *h;
	unsigned int i = 0;

	if (!newNode)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (tmp && i < idx - 1)
	{
		tmp = tmp->next;
		i++;
	}

	if (tmp == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = tmp->next;
	newNode->prev = tmp;

	if (tmp->next)
		tmp->next->prev = newNode;

	tmp->next = newNode;

	return (newNode);
}
