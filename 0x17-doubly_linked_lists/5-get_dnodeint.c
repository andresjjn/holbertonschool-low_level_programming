#include "lists.h"

/**
 * get_dnodeint_at_index - Function that returns the nth node of a linked list.
 * @head: Poiter to first node of list
 * @index: Node index
 * Return: Pointer of node or NULL if doesn´t exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *tmp;

	tmp = head;
	if (head == NULL)
		return (NULL);
	for (i = 0; i < index && index > 0; i++)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
	}
	return (tmp);
}
