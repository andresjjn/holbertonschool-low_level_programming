#include "lists.h"

/**
 *get_nodeint_at_index - Get data form specific position
 *@head: Head of the linked list.
 *@index: Position to return.
 *Return: Pointer of specific position.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp;

	if (head == NULL)
		return (NULL);
	tmp = head;
	while (tmp)
	{
		if (i == index)
			return (HEAD);
		tmp = tmp->next;
		i++;
	}
	return (NULL);
}
