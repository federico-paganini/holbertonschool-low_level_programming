#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Instance to save new dog data.
 *
 * @name: New dog name.
 * @owner: New dog owner name.
 * @age: New dog age.
 *
 * Return: Struct with new dog data.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;

	ndog = malloc(sizeof(dog_t));

	if (ndog == NULL)
		return (NULL);

	ndog->name = name;
	ndog->owner = owner;
	ndog->age = age;

	return (ndog);
}
