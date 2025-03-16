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

void init_dog(struct dog *d, char *, float, char *);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
char *_strdup(char *);
void free_dog(dog_t *d);

#endif
