#include "holberton.h"

/**
 * create_file - Creates a file.
 * @filename: Name of file to read and print.
 * @text_content: String to write to the file.
 * Return: Number of letters it could read and print or 0 if fail.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i;
	ssize_t _write;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		i = strlen(text_content);
		_write = write(fd, text_content, i);
		if (_write == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
