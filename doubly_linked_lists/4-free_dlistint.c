#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_dlistint - Frees a double linked list.
 *
 * @head: Element of the list.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;



	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
