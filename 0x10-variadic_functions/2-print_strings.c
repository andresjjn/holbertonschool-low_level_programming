#include "variadic_functions.h"

/**
 * print_numbers - Function that prints numbers, followed by a new line.
 * @separator: String to be printed between numbers.
 * @n: Number of integers passed to the function.
 * Return: -
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	char *s;

	if (n == 0)
		return;
	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(arg, char*);
		printf("%s", s);
		if ((separator != NULL) && (i != n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
