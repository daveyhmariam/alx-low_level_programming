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
	unsigned long int idx;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);

	hash_node = (hash_node_t *) malloc(sizeof(hash_node_t));
	if (hash_node == NULL)
		return (0);

	hash_node->key = strdup(key);

	hash_node->value = strdup(value);

	if (hash_node->key == NULL || hash_node->value == NULL)
		{
			free(0);
			return (0);
		}
	hash_node->next = ht->array[idx];
	ht->array[idx] = hash_node;
	return (1);
}
