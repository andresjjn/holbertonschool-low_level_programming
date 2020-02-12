#include "holberton.h"

/**
 * jack_bauer - Print time from 00:00 at 23:00
 * _putchar - writes the time
 * Return: 0
 */
void jack_bauer(void)
{
	char a, b, c, d;

	for (a = '0'; a <= '2'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			for (c = '0'; c < '6'; c++)
			{
				for (d = '0'; d <= '9'; d++)
				{
					if (a != '2' || b != '4' || c != '0' || d != '0')
					{
						_putchar(a);
						_putchar(b);
						_putchar(':');
						_putchar(c);
						_putchar(d);
						_putchar('\n');
					}
					else
					{
						return;
					}
				}
			}
		}
	}
}
