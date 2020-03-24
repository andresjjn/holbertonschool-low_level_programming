#include "lists.h"

/**
 *insert_nodeint_at_index - Write a function that inserts a new node
 *@head: Head of the linked list
 *@idx: Index of the list where the new node should be added.
 *@n: Value to save in new node.
 *Return: -
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *new;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	tmp = *head;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (i = 0; i < idx - 1; i++)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
	}
	new->n = n;
	new->next = tmp->next;
	tmp->next = new;
	return (new);
}
