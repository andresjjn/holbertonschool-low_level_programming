#include "lists.h"

/**
 *add_nodeint_end - Adds a new node at the end
 *@head: Head of the linked list
 *@n: Input data to store
 *Return: Pointer to the new head
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *tmp;

	new_node =  malloc(sizeof(listint_t));
	if (new_node == NULL)
	return (NULL);
	tmp = *head;
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new_node;
	}
	return (*head); 
}
