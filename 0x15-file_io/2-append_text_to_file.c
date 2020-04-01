#include "holberton.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: Name of file to read and print.
 * @text_content: String to add at the end of the file
 * Return: Number of letters it could read and print or 0 if fail.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i;
	ssize_t _write;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		i = strlen(text_content);
		_write = write(fd, text_content, i);
		if (_write == -1)
			return (-1);
	}
	close(fd);Add 
	return (1);
}
