#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile -  Reads a text file and prints it
 *                  to the POSIX standard output.
 *
 * @filename: Path of the file.
 * @letters: Number of letters to read and print.
 *
 * Return: The actual number of letters it could read and print.
 *         If the file can not be opened or read 0.
 *         Filename is NULL 0.
 *         If write fails or does not write the expected amount of bytes, 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rbytes, wbytes;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	rbytes = read(fd, buffer, letters);
	if (rbytes == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	wbytes = write(STDOUT_FILENO, buffer, rbytes);
	if (wbytes == -1 || rbytes != wbytes)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);
	return (wbytes);
}
