#include "lists.h"
/**
 * add_dnodeint - Function that adds a new node at the beginning of a list.
 * @head: Poiter to first node of list
 * @n: Integer to store in the new node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *tmp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	tmp = *head;
	new->n = n;
	if (tmp != NULL)
		tmp->prev = new;
	new->prev = NULL;
	new->next = *head;
	*head = new;
	return (*head);
}
