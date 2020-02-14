#include <stdio.h>

/**
 * main - Prints a prime factors of a number
 * printf - Write character
 * Return: 0
 */
int main(void)
{
	int i = 2, p = 0;
	int long n = 612852475143;

	while (i <= n)
	{
		if (n % i == 0)
		{
			if (i > p)
			{
				p = i;
			}
			n = n / i;
			}
	i++;
	} 
	printf("%d\n", p);
	return(0);
}
