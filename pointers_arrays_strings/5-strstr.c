#include "main.h"

#define NULL ((void *)0)

/**
 * _strstr - Locates a substring.
 *
 * @haystack: String to search coincidences.
 * @needle: Substring to find.
 *
 * Return: Return the pointer to the beging of the located substring
 * or NULL if there's no coincidences.
 */

char *_strstr(char *haystack, char *needle)
{
	char *aux;
	int i;

	if (*needle == '\0')
		return (haystack);

	while (*haystack)
	{
		if (*haystack == *needle)
		{
			aux = haystack;
			for (i = 0; needle[i] != '\0'; i++)
			{
				if (aux[i] != needle[i])
					break;
			}
			if (needle[i] == '\0')
				return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
