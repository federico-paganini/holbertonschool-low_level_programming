#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

/**
 * main - Copies the content of a file to another file.
 *
 * @argc: Arguments count.
 * @argv: Arguments passed to function.
 *
 * Return: 0, exit without errors.
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file_content(argv[1], argv[2]);

	return (0);
}

/**
 * copy_file_content - Copyes the content of one file to other.
 *
 * @filename1: Source file.
 * @filename2: Destination file.
 */

void copy_file_content(char *filename1, char *filename2)
{
	int fd1 = open(filename1, O_RDONLY);
	int fd2 = open(filename2, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	char buffer[1024];
	ssize_t rbytes;

	while ((rbytes = read(fd1, buffer, 1024)) > 0)
	{
		if (write(fd2, buffer, rbytes) != rbytes || fd1 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename2);
			close_fd(fd1);
			close_fd(fd2);
			exit(99);
		}
	}

	if (rbytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename1);
		close_fd(fd1);
		close_fd(fd2);
		exit(98);
	}

	close_fd(fd1);
	close_fd(fd2);
}

/**
 * close_fd - Closes a file.
 *
 * @fd: File descriptor.
 */

void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd);
		exit(100);
	}
}
