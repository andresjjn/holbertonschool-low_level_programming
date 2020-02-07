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
	int a = 50;

	while (c <= 57)
	{
		while (b <= 57)
		{
			while (a <= 57)
			{
				putchar (c);
				putchar (b);
				putchar (a);
				if (c == 55 && b == 56 && a == 57)
				{
				}
				else
				{
					putchar (44);
					putchar (32);
				}
				a = a + 1;
			}
			b = b + 1;
			a = b + 1;
		}
		c = c + 1;
		b = c + 1;
	}
	putchar('\n');
	return (0);
}
