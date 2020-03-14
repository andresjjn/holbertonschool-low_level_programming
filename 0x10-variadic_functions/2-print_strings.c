#include "variadic_functions.h"

/**
 * print_strings - Function that strings or (nill) if string = NULL.
 * @separator: String to be printed between numbers.
 * @n: Number of integers passed to the function.
 * Return: -
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	char *s;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(arg, char*);
		if (s != NULL)
			printf("%s", s);
		else
			printf("(nil)");
		if ((separator != NULL) && (i != n - 1))
			printf("%s", separator);
	}
	va_end(arg);
	printf("\n");
}
