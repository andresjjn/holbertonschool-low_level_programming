#include "lists.h"
/**
 * free_dlistint - Function that free a dlistint_t list.
 * @head: Poiter to first node of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	free(head);
}
