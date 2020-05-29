#include "hash_tables.h"

/**
 * key_index - Function that gives you the index of a key
 * @key: Key of hash table
 * @size: Size of the array of the hash table.
 * Return: Index of key/value pair should be stored in the array of hasta table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int k = 0;

	if (key == NULL)
		return (0);
	k = hash_djb2(key);
	k = k % size;
	return (k);
}
