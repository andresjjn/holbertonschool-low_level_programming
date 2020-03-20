#include "lists.h"

/**
 *add_node_end - Add new node to the end
 *@head: head of the linked list
 *@str: string to be placed in the memory space
 *Return: A pointer with the new head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int j;
	list_t *new_node;
	list_t *tmp;

	i = 0;
	new_node = (list_t *) malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	tmp = *head;
	new_node->str = strdup(str);
	while (str[j])
		j++;
	new_node->len = j;
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
