#include "dog.h"

/**
 * free_dog - Frees dogs.
 *
 * @d: Struct to free.
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
