#include <stdio.h>

/**
 * main -  Prints the size of variables
 * printf - Print a variable or messege
 * Return: 0
 */
int main(void)
{
	char ch;
	int in;
	long lo;
	long long lolo;
	float fl;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(ch));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(in));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(lo));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(lolo));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(fl));
	return (0);
}
