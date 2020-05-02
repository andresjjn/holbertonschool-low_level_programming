#include "lists.h"

/**
 *sum_dlistint - Sum all int into linked list
 *@head: Head of the linked list.
 *Return: Integer of sum.
 */
int sum_dlistint(dlistint_t *head)
{
	int i = 0;
	dlistint_t *tmp;

	if (head == NULL)
		return (0);
	tmp = head;
	while (tmp != NULL)
	{
		i = i + tmp->n;
		tmp = tmp->next;
	}
	return (i);
}
