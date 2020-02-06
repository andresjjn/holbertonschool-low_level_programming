#include <stdio.h>

/**
 * main - Alphabet in lowercase
 * putchar - Writes a character to the standard output
 * Return: 0
 */
int main(void)
{
	char c = 122;

	while (c >= 97)
	{
		putchar (c);
		c = c - 1;
	}
	putchar('\n');
	return (0);
}
