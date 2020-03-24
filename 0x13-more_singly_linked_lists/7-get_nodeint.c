#include "lists.h"

/**
 *get_nodeint_at_index - Get data form specific position
 *@head: Head of the linked list.
 *@index: Position to return.
 *Return: Pointer of specific position.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp;

	tmp = head;
	for (i = 0; i < index && index > 0; i++)
	{
		if (head == NULL)
			return (NULL);
		tmp = tmp->next;
	}
	return (tmp);
}
