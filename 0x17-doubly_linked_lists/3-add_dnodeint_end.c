#include "lists.h"
/**
 * add_dnodeint_end - Function that adds a new node at the end of a list.
 * @head: Poiter to first node of list
 * @n: Integer to store in the new node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *tmp;

	new_node = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	tmp = *head;
	if (*head == NULL)
		new_node->prev = NULL;
	else
		while (tmp->next != NULL)
			tmp = tmp->next;
	new_node->prev = tmp;
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
