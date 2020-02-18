#include "holberton.h"

/**
 * _strlen - Swaps the values of two integers.
 * @s: String variable input.
 * Return: a (length of string)
 */
int _strlen(char *s)
{
	int a = 0;

	while (*s != '\0') 
	{
		a++;
		s++;
	}
	return (a);
}
