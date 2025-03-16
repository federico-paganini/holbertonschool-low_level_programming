#include <stdlib.h>
#include <stdio.h>

struct dog
{
	char *name;
	char *owner;
	float age;
};

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
