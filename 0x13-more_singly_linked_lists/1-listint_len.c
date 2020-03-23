#include "lists.h"

/**
 *listint_len - Funtion that retunr nodes in a linked list
 *@h: head of the singly linked list
 *Return: the number of nodes of the list
 */
size_t listint_len(const listint_t *h)
{
	int j = 0;

	while (h != NULL)
	{
		h = h->next;
		j++;
	}
	return (j);
}
