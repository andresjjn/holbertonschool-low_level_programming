#include "lists.h"

/**
 * delete_dnodeint_at_index - Erase a node in a position
 * @head: Pointer to hea
 * @index: Position to delete
 * Return: int
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *tmp2;
	unsigned int i;

	tmp = *head;
	for (i = 0; tmp != 0; i++)
	{
		if (index == 0)
		{
			tmp2 = *head;
			*head = tmp2->next;
			free(tmp2);
			return (1);
		}
		else if ((i + 1) == index)
		{
			tmp2 = tmp->next;
			tmp->next = tmp2->next;
			free(tmp2);
			return (1);
		}
		tmp = tmp->next;
	}
	return (-1);
}
