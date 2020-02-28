#include "holberton.h"

/**
 * main - Multiplies two numbers.
 * @argc: Number of command line arguments.
 * @argv: Array containing the program command line arguments.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int n, x, y;

	if (argc == 3)
	{
		x = atoi(argv[2]);
		y = atoi(argv[1]);
		n = (x * y);
		printf("%d\n", n);
	}
	else
		printf("Error\n");
	return (0);
}
