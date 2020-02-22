#include "holberton.h"

/**
 *rot13 - Change a string to 1337.
 *@s: pointer character.
 *Return: s.
 */
char *rot13(char *s)
{
	int i = 0, j = 0;
	char *ar = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *ar_rot = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; ar[j]; j++)
		{
			if (s[i] == ar[j])
			{
				s[i] = ar_rot[j];
				break;
			}
		}
	}
	return (s);
}
