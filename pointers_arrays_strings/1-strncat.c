#include "main.h"

/**
 * _strncat - Concatenates two strings.
 *
 * @dest: String to concatenate.
 * @src: String to paste dest.
 * @n: Ammount of bytes to be copyed from src.
 *
 * Return: Returns the pointer dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	char *temp = dest;

	if (sizeof(*src) == 0)
	{
		return(dest);
	}

        while (*dest != '\0')
        {
                dest++;
        }

        dest--;
	if (*dest == '\0')
	{
        *dest = ' ';
	}
        dest++;

        while (n-- > 0 && *src != '\0')
        {
                *dest = *src;
                src++;
                dest++;

        }

        *dest = '\0';
        return (temp);
}
