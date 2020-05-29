#include "hash_tables.h"

/**
 * hash_table_set - Function that adds an element to the hash table.
 * @ht: The hash table to add or update the key/value
 * @key: Key of hash table.
 * @value: Is the value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int k = 0;

	if (key == NULL || key[0] == '\0' || ht == NULL)
		return (0);
	k = key_index((unsigned char *)key, ht->size);
	ht->array[k] = add_node(&ht->array[k], (char *)key, (char *)value);
	if (ht->array[k] == NULL)
		return (0);
	return (1);
}


/**
 *add_node - adds a new node to the begging of a given linked list
 *@array: head of the linked list
 *@key: Key of hash table.
 *@value: string to be placed in the memory space
 *Return: a pointer to the new head
 */
hash_node_t *add_node(hash_node_t **array, char *key, char *value)
{
	hash_node_t *new_node;

	new_node = (hash_node_t *) malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);
	new_node->key = key;
	new_node->value = strdup(value);
	new_node->next = *array;
	*array = new_node;
	return (*array);
}
