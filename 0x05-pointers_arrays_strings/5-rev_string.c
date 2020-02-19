#include "holberton.h"

/**
 * rev_string - Prints a string in reverse followed by a new line
 * @s: String to print.
 * _putchar - Write characters
 * Return: 0
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char m[10];

	while (s[i] != '\0')
	{
		m[i] = s[i];
		i++;
	}
	for (; j <= i; j++)
	{	
		s[j] = m[i - j];
	}
}
