#include "lists.h"

/**
 *add_node_end - Adds a new node
 *@head: Head of the linked list
 *@str: String to be placed in the memory space
 *Return: Pointer to the new head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i;
	list_t *new_node;
	list_t *tmp;

	i = 0;
	new_node = (list_t *) malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	tmp = *head;
	new_node->str = strdup(str);
	while (str[i])
		i++;
	new_node->len = i;
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
