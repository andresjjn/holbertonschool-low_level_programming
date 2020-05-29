#include "hash_tables.h"

/**
 * hash_table_get - Function that retrieves a value associated with a key
 * @ht: The hash table you want to look into
 * @key: The key you are looking for
 * Return: Value associated or NULL if key couldn’t be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int k = 0;
	const hash_node_t *tmp;

	if (!ht || !key)
		return (0);
	k = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[k];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
