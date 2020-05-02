#include "lists.h"

/**
 * dlistint_len - Function that returns the number of element in a list.
 * @h: Header pointer of list.
 * Return: The number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t j = 0;

	while (h != NULL)
	{
		h = h->next;
		j++;
	}
	return (j);
}
