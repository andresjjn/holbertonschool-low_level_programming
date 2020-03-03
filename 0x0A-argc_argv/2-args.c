#include "holberton.h"

/**
 * main - Prints all arguments it receives.
 * @argc: Number of command line arguments.
 * @argv: Array containing the program command line arguments.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
