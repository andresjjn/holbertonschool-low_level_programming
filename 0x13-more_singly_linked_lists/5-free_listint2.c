#include "lists.h"

/**
 *free_listint2 - Free the memory from linked list with double pointer
 *@head: head of the linked list
 *Return: -
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		tmp = *head;
		*head = tmp->next;
		free(tmp);
	}
	*head = NULL;
}
