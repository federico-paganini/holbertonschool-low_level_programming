#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints a struct dog.
 *
 * @d: Struct to print.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
