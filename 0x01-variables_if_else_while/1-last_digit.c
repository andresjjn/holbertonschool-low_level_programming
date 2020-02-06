#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -  Ramdom number, last digit <5, >5, =0.
 * srand - Pseudo-random number generator with seed
 * rand - Generate random numbers
 * printf - Print a messege
 * Return: 0
 */
int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (last > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last);
	}
	else if (n < 6 && n != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
	}
	return (0);
}
