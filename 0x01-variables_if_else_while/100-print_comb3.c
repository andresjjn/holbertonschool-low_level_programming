#include <stdio.h>

/**
 * main - while into while
 * putchar - Writes a character to the standard output
 * Return: 0
 */
int main(void)
{
	int c = 48;
	int b = 49;

	while (c <= 57)
	{
		while (b <= 57)
		{
			putchar (c);
			putchar (b);
			if (c == 56 && b == 57)
			{
			}
			else
			{
				putchar (44);
				putchar (32);
			}
			b = b + 1;
		}
		c = c + 1;
		b = c + 1;
	}
	putchar('\n');
	return (0);
}
