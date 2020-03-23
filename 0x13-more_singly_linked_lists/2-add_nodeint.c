#include "lists.h"

/**
 *add_nodeint - Add node at he start of chain.
 *@head: Double pointer to an address of previous node.
 *@n: Input int to save in new node.
 *Return: Pointer of new node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
