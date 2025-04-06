#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Adds a node at the end of the list.
 *
 * @head: List element passed to function.
 * @str: String to save in the new element.
 *
 * Return: The addres of the new element. NULL if fails.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));
	list_t *temp;

	if (!newNode)
		return (NULL);

	newNode->str = strdup(str);

	if (!newNode->str)
	{
		free(newNode);
		return (NULL);
	}

	newNode->len = _strlen(newNode->str);
	newNode->next = NULL;

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
