#include <stdio.h>

/**
 * main - Alphabet in lowercase
 * putchar - Writes a character to the standard output
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q')
		{
			putchar (c);
		}
	}
	putchar('\n');
	return (0);
}
