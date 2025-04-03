#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * list_t *add_node(list_t **head, const char *str)
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

	if (!(newNode->str = strdup(str)))
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
