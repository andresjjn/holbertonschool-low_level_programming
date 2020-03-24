#include "lists.h"

/**
 *pop_listint - Delete the first node and return n value
 *@head: head of the linked list
 *Return: Value erased into first node;
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int i;

	if (*head == NULL)
		return (0);
	tmp = *head;
	*head = tmp->next;
	i = tmp->n;
	free(tmp);
	return (i);
}
