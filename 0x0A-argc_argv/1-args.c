#include "holberton.h"

/**
 * main - Prints of arguments passed into it.
 * @argc: Number of command line arguments.
 * @argv: Array containing the program command line arguments.
 * Return: 0.
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", (argc - 1));
	return (0);
}
