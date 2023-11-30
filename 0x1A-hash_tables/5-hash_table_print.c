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


		tmp = ht->array[i];
		if (tmp)
		{
			if (comma != 0)
				printf(", ");
			while (tmp != NULL)
			{
				printf("'%s': '%s'", tmp->key, tmp->value);
				tmp = tmp->next;
				if (tmp)
					printf(", ");
			}
			comma = 1;
		}

	}
	printf("}\n");
}
