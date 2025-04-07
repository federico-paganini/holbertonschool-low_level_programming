#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_dnodeint - Adds a node at the beginning of the list.
 *
 * @head: Element passed to function.
 * @n: Int to save in node.
 *
 * Return: The memory adress of the new element. NULL if fails.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->prev = NULL;

	if (!*head)
	{
		newNode->next = NULL;
		*head = newNode;
	}
	else
	{
		newNode->next = *head;
		*head = newNode;
	}

	return (newNode);
}
