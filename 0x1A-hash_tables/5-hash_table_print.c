#include "hash_tables.h"

/**
 * hash_table_print - prints all hash table elements
 * @ht: hash table entry
 * Return: Nothing
*/

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int i;
	int comma;

	comma = 0;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (comma != 0)
			printf(", ");
		tmp = ht->array[i];
		if (tmp)
			while (tmp)
			{
				printf("'%s': '%s'", tmp->key, tmp->value);
				tmp = tmp->next;
				if (tmp)
					printf(", ");
			}
	}
	printf("}\n");
}
