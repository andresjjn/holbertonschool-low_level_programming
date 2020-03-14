#include "variadic_functions.h"

/**
 * print_numbers - Function that prints numbers, followed by a new line.
 * @separator: String to be printed between numbers.
 * @n: Number of integers passed to the function.
 * Return: Sum of arguments.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;

	if (n == 0)
		return;
	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg, int));
		if ((separator != NULL) && (i < n - 1))
			printf("%s", separator);
	}
	va_end(arg);
	printf("\n");
}
