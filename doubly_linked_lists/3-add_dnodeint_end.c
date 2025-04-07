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
	dlistint_t *temp;

	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = *head;

	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;

		temp->next = newNode;
	}

	return (newNode);
}
