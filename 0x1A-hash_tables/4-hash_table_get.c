#include "hash_tables.h"

/**
 * hash_table_get - get value with key
 * @ht: hash table
 * @key: searching key
 * Return: value or NULL of not found
*/


char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int idx;
	hash_node_t *tmp;


	if (ht == NULL)
		return (NULL);
	if (key == NULL)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	if (idx  >= (int)ht->size)
		return (NULL);
	tmp = ht->array[idx];
	while (tmp)
	{
		if (strcmp(key, tmp->key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);

}
