#include <stdio.h>

/**
 * main - Numbers 0-9 with putchar
 * putchar - Writes a character to the standard output
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	putchar(n);
	putchar('\n');
	return (0);
}
