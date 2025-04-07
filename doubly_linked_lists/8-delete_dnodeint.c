#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Inserts a new node at a given position.
 *
 * @head: Fist element of the list.
 * @index: Index for insert new element.
 *
 * Return: 1 if succeed, -1 if fails.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = tmp->next;

		if (*head)
			(*head)->prev = NULL;

		free(tmp);
		return (1);
	}

	while (tmp && i < index)
	{
		tmp = tmp->next;
		i++;
	}

	if (tmp == NULL)
		return (-1);

	if (tmp->prev)
		tmp->prev->next = tmp->next;

	if (tmp->next)
		tmp->next->prev = tmp->prev;

	free(tmp);
	return (1);
}
