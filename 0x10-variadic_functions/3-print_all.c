#include "variadic_functions.h"

/**
 * print_all - Function that prints anything.
 * @format: String of data type argument.
 * Return: -
 */
void print_all(const char * const format, ...)
{
	va_list arg;
	int j, h = 0, t = 0, v;
	float f;
	char *s, c;

	if (format == NULL)
		return;
	while (format[h])
	{
		t++;
		h++;
	}
	h = 0;
	va_start(arg, format);
	while (format[h])
	{
		v = 0;
		switch (format[h])
		{
			case 'c':
				c = (char) va_arg(arg, int);
				printf("%c", c);
				v = 1;
			break;
			case 'i':
				j = va_arg(arg, int);
				printf("%d", j);
				v = 1;
			break;
			case 'f':
				f = va_arg(arg, double);
				printf("%f", f);
				v = 1;
			break;
			case 's':
				s = va_arg(arg, char *);
				printf("%s", s ? s : "(nil)");
				v = 1;
			break;
		}
		h++;
		if (h != t && v == 1)
			printf(", ");
	}
	printf("\n");
	va_end(arg);
}
