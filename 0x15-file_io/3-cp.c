#include "holberton.h"

/**
 *copy_file - Copy a file in other
 *@file_from: Original file.
 *@file_to: Destination file.
 */
void copy_file(const char *file_from, const char *file_to)
{
	int fd_file, fd_to;
	ssize_t _read;
	char *buffer[1024];

	fd_file = open(file_from, O_RDONLY);
	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((_read = read(fd_file, buffer, 1024)) > 0)
	{
		if (write(fd_to, buffer, _read) != _read || fd_to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	if (_read == -1 || fd_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	if (close(fd_file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd_file);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd_to);
		exit(100);
	}
}

/**
 * main -  Copies the content of a file to another file.
 *@ac: Number of arguments.
 *@av: Array of arguments
 *Return: 0.
 */
int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_file(av[1], av[2]);
	return (0);
}
