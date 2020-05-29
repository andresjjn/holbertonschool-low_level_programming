#include "hash_tables.h"

/**
 * hash_table_print - Function that prints a hash table.
 * @ht: The hash table you want to look into
 * Return: Value associated or NULL if key couldn’t be found.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, a = 0;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (!ht->array[i])
			continue;
		if (a == 0)
		{
			printf("'%s': ", ht->array[i]->key);
			a++;
		}
		else
			printf(", '%s': ", ht->array[i]->key);
		while (ht->array[i])
		{
			printf(" '%s'", ht->array[i]->value);
			ht->array[i] = ht->array[i]->next;
		}
	}
	printf("}\n");
}
