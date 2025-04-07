#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * add_dnodeint_end - Adds a new node at the end of the list.
 *
 * @head: Element of the list.
 * @n: Number to save in the new node.
 *
 * Return: The memory adress of the new node. NULL if fails.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}

	while ((*head)->next)
			*head = (*head)->next;

	(*head)->next = newNode;
	newNode->prev = *head;

	return (newNode);
}
