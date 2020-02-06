#include <stdio.h>

/**
 * main - Alphabet in lowercase
 * putchar - Writes a character to the standard output
 * Return: 0
 */
int main(void)
{
	int c = 48;
	int b = 97;

	while (c <= 57)
	{
		putchar (c);
		c = c + 1;
	}
	while (b <= 102)
	{
		putchar (b);
		b = b + 1;
	}
	putchar('\n');
	return (0);
}
