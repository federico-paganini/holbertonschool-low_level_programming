#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

/**
 * append_text_to_file - Appends text at the end of a file.
 *
 * @filename: The name of the file to create.
 * @text_content: Text to write in the file.
 *
 * Return: 1 on success. -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t wbytes = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
		wbytes += write(fd, text_content, _strlen(text_content));

	if (wbytes == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);

	return (1);
}

/**
 * _strlen - Returns the lenght of a string.
 *
 * @s: String to evaluate.
 *
 * Return: Returns the length.
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}
