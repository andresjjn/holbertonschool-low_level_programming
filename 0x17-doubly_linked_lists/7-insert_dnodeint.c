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


/**
 * insert_dnodeint_at_index - Function that inserts a new_node node in a index.
 * @h: Pointer of a linked list.
 * @idx: Index to add new_node node
 * @n: Integer to save
 * Return: Pointer of new_node node added
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	size_t l, i;
	dlistint_t *tmp, *tmp2;

	l = dlistint_len(*h);
	tmp = *h;

	if (l < idx)
		return (NULL);
	else if (idx == 0)
		return (add_dnodeint(h, n));
	else if (idx == l)
		return (add_dnodeint_end(h, n));
	else if (idx != 0 && idx != l)
	{
		tmp2 = malloc(sizeof(dlistint_t));
		if (tmp2 != NULL)
		{
			tmp2->n = n;
			for (i = 0; tmp; tmp = tmp->next, i++)
				if (i + 1 == idx)
				{
					tmp2->next = tmp->next;
					tmp2->prev = tmp;
					tmp->next->prev = tmp2;
					tmp->next = tmp2;
					return (tmp2);
				}
		}
	}
	return (0);
}
