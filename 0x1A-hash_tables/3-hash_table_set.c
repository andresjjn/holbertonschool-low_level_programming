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
	hash_node_t *new_node;

	if (key[0] == '\0' || ht == NULL || value == NULL || key == NULL)
		return (0);
	k = key_index((unsigned char *)key, ht->size);
	if (ht->array[k] == NULL)
	{
		new_node = calloc(1, sizeof(hash_node_t));
		if (new_node == NULL)
			return (0);
		new_node->key = strdup(key);
		new_node->value = strdup(value);
		new_node->next = NULL;
		ht->array[k] = new_node;
		return (1);
	}
	else
	{
		new_node = malloc(sizeof(hash_node_t));
		if (new_node == NULL)
			return (NULL);
		new_node->key = strdup(key);
		new_node->value = strdup(value);
		new->next = ht->array[k];
		ht->array[k] = new_node;
		return (1);
	}
}
