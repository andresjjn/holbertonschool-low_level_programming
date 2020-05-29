#include "hash_tables.h"

/**
 * hash_table_print - Function that prints a hash table.
 * @ht: The hash table you want to look into
 * Return: Value associated or NULL if key couldn’t be found.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, a = 0;
	const hash_node_t *tmp;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		if(!tmp)
			continue;
		if (a == 0)
		{
			printf("'%s': ", tmp->key);
			a++;
		}
		else
			printf(", '%s': ", tmp->key);
		while (tmp)
		{
			printf("'%s'", tmp->value);
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
