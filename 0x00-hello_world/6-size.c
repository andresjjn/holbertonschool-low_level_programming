#include <stdio.h>

/**
 * main -  Prints the size of various types on the computer it is compiled and run on
 * Return: 0
 */
int main(void)
{
	char ch;
	int in;
	long lo;
	long long lolo;
	float fl;

	printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(ch));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(in));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(lo));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(lolo));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(fl));
	return (0);
}
