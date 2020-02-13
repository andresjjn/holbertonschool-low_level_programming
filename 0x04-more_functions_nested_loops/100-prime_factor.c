#include <stdio.h>

/**
 * main - Prints a prime factors of a number
 * printf - Write character
 * Return: 0
 */
void main(void)
{
	long i, j, n = 612852475143, p, z = 0;

	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			p = 1;
			for (j = 2; j <= i / 2; j++)
			{
				if (i % j == 0)
				{
					p = 0;
					break;
				}
			}
			if (p == 1)
				z = i;
		}
	}
	printf("%ld\n", z);
}
