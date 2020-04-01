#include "holberton.h"

/**
 * read_textfile - Reads a text file and prints it.
 * @filename: Name of file to read and print.
 * @letters: Number of letters it should read and print.
 * Return: Number of letters it could read and print or 0 if fail.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t _read, _write;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY, 600);
	if (fd == -1)
		return (0);
	buffer = (char *)malloc(letters * sizeof(char));
	if (buffer == NULL)
		return (0);
	_read = read(fd, buffer, letters);
	if (_read == -1)
		return (0);
	buffer[letters] = '\0';
	close(fd);
	_write = write(STDOUT_FILENO, buffer, _read);
	if (_write == -1)
		return (0);
	free(buffer);
	return (_read);
}
