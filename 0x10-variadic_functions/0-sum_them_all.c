#include "variadic_functions.h"

/**
 * sum_them_all - Function that returns the sum of all its parameters.
 * @n: First argument.
 * Return: Sum of arguments.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int i, sum = 0;

	va_start(arg, n);
	for (i = 0; i < n; i++)
		sum = sum + va_arg(arg, int);
	va_end(arg);
	return (sum);
}
