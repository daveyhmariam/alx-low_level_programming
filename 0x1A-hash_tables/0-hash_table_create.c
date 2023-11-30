#include "hash_tables.h"


/**
 * hash_table_create - creates hash table
 * @size: size of hash table array
 * Return: pointer to hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i;

	ht = (hash_table_t *) malloc(sizeof(hash_table_t));

	if (!ht)
		return (NULL);
	ht->size = size;
	ht->array = (hash_node_t **) malloc(sizeof(hash_node_t *) * size);

	if (!ht->array)
	{
		free(ht);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ht->array[i] = NULL;
	}

	return (ht);
}
