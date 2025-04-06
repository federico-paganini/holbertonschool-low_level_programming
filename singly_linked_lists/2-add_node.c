#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Adds a node to the start of a list.
 *
 * @head: Pointer to the first list item.
 * @str: String to add to the list.
 *
 * Return: The adress to the new element or NULL.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));

	if (!newNode)
		return (NULL);

	newNode->str = strdup(str);

	if (!(newNode->str)
	{
		free(newNode);
		return (NULL);
	}

	newNode->len = _strlen(newNode->str);
	newNode->next = *head;
	*head = newNode;

	return (*head);
}

/**
 * _strlen - Calculates the length of a string.
 *
 * @str: String to calculate length.
 *
 * Return: The length of the string.
 */

int _strlen(char *str)
{
	int length = 0;

	while (str[length] != '\0')
		length++;

	return (length);
}
