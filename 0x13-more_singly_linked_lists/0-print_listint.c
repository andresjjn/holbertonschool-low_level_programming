#include "lists.h"

/**
 *print_listint - prints a given singly linked list
 *@h: head of the singly linked list
 *Return: the number of nodes of the list
 */

size_t print_listint(const listint_t *h)
{
	int j = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		j++;
	}
	return (j);
}