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
	hash_node_t *hash_node, *tmp;
	unsigned long int idx;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);

	tmp = ht->array[idx];
	if (tmp)
		while (tmp)
		{
			if (strcmp(tmp->key, key) == 0)
			{
				free(tmp->value);
				tmp->value = strdup(value);
				if (tmp->value == NULL)
					return (0);
				return (1);
			}
			tmp = tmp->next;
		}

	hash_node = (hash_node_t *) malloc(sizeof(hash_node_t));
	if (hash_node == NULL)
		return (0);

	hash_node->key = strdup(key);

	if (hash_node->key == NULL)
	{
		free(hash_node);
		return (0);
	}
	hash_node->value = strdup(value);
	if (hash_node->value == NULL)
	{
		free(hash_node->key);
		free(hash_node);
		return (0);
	}

	hash_node->next = ht->array[idx];
	ht->array[idx] = hash_node;
	return (1);
}
