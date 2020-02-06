#include <stdio.h>

/**
 * main - Alphabet in lowercase
 * putchar - Writes a character to the standard output
 * Return: 0
 */
int main(void)
{
	int c = 48;

	while (c <= 57)
	{
		putchar (c);
		if (c != 57)
		{
			putchar (44);
			putchar (32);
		}
		c = c + 1;
	}
	putchar('\n');
	return (0);
}
