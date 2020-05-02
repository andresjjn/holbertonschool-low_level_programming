#include "lists.h"
/**
 * print_dlistint - Function that prints all the elements of a dlistint_t list.
 * @h: Header pointer of list.
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int j = 0;

	while (h != NULL)
	{
		_putchar('0' + h->n);
		_putchar('\n');
		h = h->next;
		j++;
	}
	return (j);
}
