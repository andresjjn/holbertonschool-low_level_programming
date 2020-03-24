#include "lists.h"

/**
 *sum_listint - Sum all int into linked list
 *@head: Head of the linked list.
 *Return: int of sum.
 */
int sum_listint(listint_t *head)
{
	int i = 0;
	listint_t *tmp;

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
