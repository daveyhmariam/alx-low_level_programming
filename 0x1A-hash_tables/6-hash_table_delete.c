#include "hash_tables.h"

/**
 * hash_table_delete - free hash table
 * @ht: hash table entry
 * Return: Nothing
*/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp, *tmp1;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			tmp = ht->array[i];
			while (tmp)
			{
				tmp1 = tmp;
				tmp = tmp->next;
				free(tmp1->key);
				free(tmp1->value);
				free(tmp1);
			}
		}
	}
	free(ht->array);
	free(ht);
}
