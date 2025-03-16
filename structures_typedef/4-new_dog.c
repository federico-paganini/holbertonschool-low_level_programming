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

	ndog->name = _strdup(name);
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}

	ndog->owner = _strdup(owner);
	if (ndog->owner == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}

	ndog->age = age;
	return (ndog);
}

/**
 * _strlen - Returns the length of a string.
 *
 * @str: String to get the length.
 *
 * Return: String length.
 */

int _strlen(char *str)
{
	int length;

	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}


/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: String to copy.
 *
 * Return: Pointer to a new string which is a duplicate of the string str.
 * If str = NULL returns NULL.
 * NULL if not enought memory.
 */

char *_strdup(char *str)
{
	unsigned int length;
	unsigned int i = 0;
	char *arr;

	if (str == NULL)
		return (NULL);

	length = _strlen(str);
	arr = malloc(sizeof(char) * (length + 1));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
	{
		arr[i] = str[i];
	}
	arr[length] = '\0';

	return (arr);
}
