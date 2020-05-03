#include "lists.h"

/**
 * insert_dnodeint_at_index - Function that inserts a new_node node in a index.
 * @h: Pointer of a linked list.
 * @idx: Index to add new_node node
 * @n: Integer to save
 * Return: Pointer of new_node node added
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *tmp = *h;
	unsigned int i = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0 || *h == NULL)
	{
		free(new_node);
		return (add_dnodeint(h, n));
	}
	while (tmp && i < idx - 1)
	{
		if (tmp->next == NULL)
		{
			free(new_node);
			return (NULL);
		}
		else if (tmp->next== NULL)
		{
			free(new_node);
			return (add_dnodeint_end(h, n));
		}
		tmp = tmp->next;
		i++;
	}
	new_node->prev = tmp;
	new_node->next = tmp->next;
	tmp->prev = new_node;
	tmp->next = new_node;
	return (new_node);
}
