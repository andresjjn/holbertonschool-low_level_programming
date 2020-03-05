#include "holberton.h"

/**
 * argstostr - Concatenates all the arguments of the main.
 * @ac: Number of entries.
 * @av: Array of entries..
 * Return: Pointer of new string.
 */
char *argstostr(int ac, char **av)
{
	int i, j, t;
	char *str;

	if (ac <= 0 && av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			t++;
		t++;
	}
	t++;
	str = malloc(t * sizeof(char));
	if (str == NULL)
		return (NULL);
	t = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[t] = av[i][j];
			t++;
		}
		str[t] = '\n';
		t++;
	}
	str[t] = '\0';
	return (str);
}
