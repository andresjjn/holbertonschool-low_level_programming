#include "hash_tables.h"

/**
 * hash_table_create - Function that creates a hash table.
 * @size: Size of array.
 * Return:  Pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtable = NULL;
	unsigned long int i;

	if (size == 0)
		return (NULL);
	hashtable = calloc(1, sizeof(hash_table_t));
	if (hashtable == NULL)
		return (NULL);
	hashtable->array = calloc(size, sizeof(hash_node_t *));
	if (hashtable->array == NULL)
	{
		free(hashtable);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		hashtable->array[i] = NULL;
	return (hashtable);
}
