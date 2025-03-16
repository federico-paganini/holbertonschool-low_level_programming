#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct dog - Init dog data struct.
 *
 * @name: Name of dog.
 * @owner: Oner of dog.
 * @age: Age of dog.
 *
 * Description: Struct to handle the dogs data.
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

/**
 * new_dog - Instance to save new dog data.
 *
 * @name: New dog name.
 * @owner: New dog owner name.
 * @age: New dog age.
 *
 * Return: Struct with new dog data.
 */

struct dog *new_dog(char *name, char *owner, float age)
{
	struct dog *ndog;

	ndog = malloc(sizeof(struct dog));

	if (ndog == NULL)
		return (NULL);

	ndog->name = name;
	ndog->owner = owner;
	ndog->age = age;

	return (ndog);
}

#endif
