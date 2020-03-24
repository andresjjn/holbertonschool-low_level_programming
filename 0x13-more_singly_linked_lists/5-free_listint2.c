#include "lists.h"

/**
 *free_listint2 - Free the memory from linked list with double pointer
 *@head: head of the linked list
 */
void free_listint2(listint_t **head)
{
	*head = NULL;
	free(*head); 
}
