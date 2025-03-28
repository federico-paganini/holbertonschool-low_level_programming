#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all arguments of the program.
 *
 * @ac: Argument count.
 * @av: Arguments passed to program.
 *
 * Return: A pointer to the new string.
 * If any parameter is NULL return NULL.
 * NULL if malloc fails.
 */

char *argstostr(int ac, char **av)
{
	int i, j, k = 0;
	int tlength = 0;
	char *concav;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		tlength += _strlen(av[i]) + 1;
	}
	tlength++;

	concav = malloc(sizeof(char) * tlength);

	if (concav == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			concav[k++] = av[i][j];
		}
		concav[k++] = '\n';
	}
	concav[k] = '\0';
	return (concav);
}

/**
 * _strlen - Gives the length of a string.
 *
 * @str: String to count the length.
 *
 * Return: The length of the string.
 */

int _strlen(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}
