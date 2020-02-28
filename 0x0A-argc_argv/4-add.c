#include "holberton.h"

/**
 * main - Adds positive numbers.
 * @argc: Number of command line arguments.
 * @argv: Array containing the program command line arguments.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int i, tem = 0;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (isalpha(*argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			else if (isdigit(*argv[i]))
				tem += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	printf("%d\n", tem);
	}
	return (0);
}
