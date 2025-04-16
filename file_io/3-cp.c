#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: pointer to an array of pointers
 *
 * Return: 1 if succes -1 if not
 */

int main(int argc, char *argv[])
{
	int file_to = 0, file_from = 0, cls = 0, cls2 = 0, rid = 0;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((rid = read(file_from, buf, 1024)) > 0)
	{
		if (file_to == -1 || write(file_to, buf, rid) != rid)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (rid == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	cls = close(file_to);
	cls2 = close(file_from);
	if (cls == -1 || cls2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", -1);
		exit(100);
	}
	return (0);
}
