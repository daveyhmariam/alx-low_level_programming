#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: hash table
 * @key: key value
 * @value: value associated
 * Return: 1 on success
 *			0 on failure
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *hash_node;
	int idx;
	hash_node_t *tmp;

	if (ht == NULL)
		return (0);
	if (key == NULL)
		return (0);
	if (key_index((const unsigned char *)key, ht->size) >= ht->size)
		return (0);
	hash_node = (hash_node_t *) malloc(sizeof(hash_node_t));
	if (hash_node == NULL)
		return (0);
	hash_node->key = (char *) malloc(sizeof(key));
	hash_node->value = (char *) malloc(sizeof(value));
	if (!hash_node->key || !hash_node->value)
		return (0);
	hash_node->key = strdup(key);
	hash_node->value = strdup(value);
	hash_node->next = NULL;

	idx = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[idx];
	if (ht->array[idx] == NULL)
	{
		ht->array[idx] = hash_node;
	}

	else if (ht->array[idx] != NULL)
	{
		while (tmp && tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = hash_node;
	}
	return (1);
}
