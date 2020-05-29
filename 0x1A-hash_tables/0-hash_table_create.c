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

	hashtable = malloc(sizeof(hash_table_t));
	hashtable->array = malloc(sizeof(char *) * size);
	printf("Tamaño = %li\n", sizeof(hash_node_t));
	for (i = 0; i < size; i++)
		hashtable->array[i] = NULL;
	return (hashtable);
}
