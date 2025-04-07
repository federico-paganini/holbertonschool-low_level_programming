#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * sum_dlistint -  Sum of all the data (n) of the list.
 *
 * @head: The fist element.
 *
 * Return: Sum of n. 0 if list is empty.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
