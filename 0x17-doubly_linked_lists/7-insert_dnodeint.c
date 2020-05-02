#include "lists.h"

/**
 * insert_dnodeint_at_index - Function that inserts a new node in a index.
 * @h: Pointer of a linked list.
 * @idx: Index to add new node
 * @n: Integer to save
 * Return: Pointer of new node added
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		if (*h != NULL)
		{
			h[0]->prev = new, new->next = *h;
		}
		else
			new->next = NULL;
		new->prev = NULL;
		*h = new;
		return (new);
	}
	if (*h == NULL)
		return (NULL);
	tmp = *h;
	while (tmp->prev)
		tmp = tmp->prev;
	while (tmp != NULL)
	{
		if (idx == 0)
		{
			tmp->prev->next = new, new->prev = tmp->prev, tmp->prev = new;
			new->next = tmp;
			return (new);
		}
		new->prev = tmp;
		tmp = tmp->next, idx--;
	}
	if (!idx)
	{
		new->prev->next = new, new->next = NULL;
		return (new);
	}
	return (NULL);
}
