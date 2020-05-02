#include "lists.h"
/**
 * printint - Function that prints integers.
 * @n: Integer to print.
 */
void printint(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10 != 0)
		printint(n / 10);
	_putchar((n % 10) + '0');
}

/**
 * print_dlistint - Function that prints all the elements of a dlistint_t list.
 * @h: Header pointer of list.
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t j = 0;

	while (h != NULL)
	{
		printint(h->n);
		_putchar('\n');
		h = h->next;
		j++;
	}
	return (j);
}
