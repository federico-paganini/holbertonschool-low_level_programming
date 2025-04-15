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
	int fd1 = open_file_from(filename1);
	int fd2 = open_file_to(filename2);
	char buffer[1024];
	ssize_t rbytes, wbytes;

	while ((rbytes = read(fd1, buffer, (sizeof(buffer)))) > 0)
	{
		wbytes = write(fd2, buffer, rbytes);
		if (wbytes != rbytes)
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
 * open_file_from - Opens the source file to copy.
 *
 * @filename: The name of the file.
 *
 * Return: The file descriptor number.
 */

int open_file_from(char *filename)
{
	int fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}

	return (fd);
}

/**
 * open_file_to - Opens the file to copy or creates it.
 *
 * @filename: The name of the file.
 *
 * Return: The file descriptor number.
 */

int open_file_to(char *filename)
{
	int fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}

	return (fd);
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
