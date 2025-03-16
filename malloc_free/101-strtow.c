#include "main.h"
#include <stdlib.h>

/**
 * strtow - Splits a string into words.
 *
 * @str: String to split.
 * 
 * Return: NULL if str = NULL or str = "", if the function fails NULL.
 * Exit case, pointer to the new array.
 */

int _wcount(char *);
int _charcount(char *);

char **strtow(char *str)
{
	char **strarr;
	unsigned int i, j, wcount, ccount;
	
	if (str == NULL || *str == '\0')
		return (NULL);
	wcount = _wcount(str);
	strarr = malloc(sizeof(char *) * (wcount + 1));
	if (strarr == NULL)
		return (NULL);
	for (i = 0; i < wcount; i++)
	{
		while (*str == ' ')
			str++;
		ccount = _charcount(str);
		strarr[i] = malloc(sizeof(char) * (ccount + 1));
		if (strarr[i] == NULL)
		{
			while (i > 0)
			{
				free(strarr[i - 1]);
				i--;
			}
			free(strarr);
			return (NULL);
		}
		ccount = _charcount(str);
		for (j = 0; j <= ccount; j++)
		{
			strarr[i][j] = *str;
			str++;
		}
		strarr[i][j] = '\0';
	}
	strarr[wcount] = NULL;
	return (strarr);
}

/**
 * _wcount - Counts words in a string.
 *
 * @str: String to count words.
 *
 * Return: Number of words in the string.
 */

int _wcount(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		while (*str == ' ')
			str++;
		
		if (*str != '\0')
		{
			i++;
			while (*str != ' ' && *str != '\0')
				str++;
		}
	}
	return (i);
}

/**
 * _charcount - Counts the letters of the first word in a string.
 * 
 * @str: String to count letters.
 *
 * Return: The number of letters.
 */

int _charcount(char *str)
{
	int i = 0;

	while (*str != '\0' && *str != ' ')
	{
		if (*str > 32 && *str < 127)
			i++;
		str++;
	}
	return (i);
}
