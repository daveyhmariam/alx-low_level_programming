#include "hash_tables.h"

/**
 * shash_table_create - creates ordered hash table
 * @size: size of bucket array
 * Return: pointer to ordered hash table
*/
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *sht;
	unsigned long int i;

	sht = (shash_table_t *) malloc(sizeof(shash_table_t));
	if (!sht)
		return (NULL);
	sht->size = size;
	sht->array = (shash_node_t **) malloc(sizeof(shash_node_t *) * size);

	sht->shead = NULL;
	sht->stail = NULL;

	if (sht->array == NULL)
	{
		free(sht);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		sht->array[i] = NULL;
	}
	return (sht);
}

/**
 * shash_table_set - adds node to the table in ordered manner
 * @ht: hash table
 * @key: key of the value
 * @value: value
 * Return: 1 on success 0 on failure
*/

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new, *tmp, *order;
	unsigned long int idx;

	if (!ht || !key || *key == '\0')
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[idx];
	new = NULL;
	if (tmp == NULL)
	{
		new = (shash_node_t *) malloc(sizeof(shash_node_t));
		if (!new)
			return (0);
		new->key = strdup(key);
		if (new->key == NULL)
		{
			free(new);
			return (0);
		}
		new->value = strdup(value);
		if (new->value == NULL)
		{
			free(new->key);
			free(new);
			return (0);
		}
		new->next = NULL;
		new->snext = NULL;
		new->sprev = NULL;
		new->next = ht->array[idx];
		ht->array[idx] = new;


	}
	if (tmp)
	{
		while (tmp)
		{
			if (strcmp(tmp->key, key) == 0)
			{
				free(tmp->value);
				tmp->value = strdup(value);
				if (tmp->value == NULL)
					return (0);
			}
			tmp = tmp->next;
		}

	}

	if (new)
	{
		if (ht->shead == NULL && ht->stail == NULL)
		{
			ht->shead = new;
			ht->stail = new;
		}
		else if (ht->shead && ht->stail)
		{
			order = ht->shead;
			while (order)
			{
				if (strcmp(new->key, order->key) < 0)
				{
					new->sprev = order->sprev;
					new->snext = order;
					order->sprev = new;
					if (new->sprev)
						new->sprev->snext = new;
					if (new->sprev == NULL)
						ht->shead = new;
					break;
				}
				if (order->snext == NULL && strcmp(new->key, order->key) > 0)
				{
					new->sprev = order;
					order->snext = new;
					ht->stail = new;
					break;
				}
				order = order->snext;
			}

		}
	}
	return (1);
}

/**
 * shash_table_get - get value with key
 * @ht: hash table
 * @key: searching key
 * Return: value or NULL of not found
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int idx;
	shash_node_t *tmp;


	if (ht == NULL)
		return (NULL);
	if (key == NULL)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	if (idx  >= ht->size)
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

/**
 * shash_table_print - prints all hash table elements in sorted order
 * @ht: hash table entry
 * Return: Nothing
*/

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp;
	int comma;

	comma = 0;

	if (!ht)
		return;

	printf("{");

	tmp = ht->shead;
	while (tmp)
	{
		if (comma != 0)
			printf(", ");
		printf("'%s': '%s'", tmp->key, tmp->value);
		comma = 1;
		tmp = tmp->snext;
	}
	printf("}\n");

}

/**
 * shash_table_print_rev - prints all hash table
 * elements in reverse sorted order
 * @ht: hash table entry
 * Return: Nothing
*/

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp;
	int comma;

	comma = 0;

	if (!ht)
		return;

	printf("{");

	tmp = ht->stail;
	while (tmp)
	{
		if (comma != 0)
			printf(", ");
		printf("'%s': '%s'", tmp->key, tmp->value);
		comma = 1;
		tmp = tmp->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - free hash table
 * @ht: hash table entry
 * Return: Nothing
*/
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *tmp, *back;

	if (!ht)
		return;
	if (!ht->shead)
		return;
	tmp = ht->shead;
	while (tmp)
	{
		free(tmp->key);
		free(tmp->value);
		back = tmp;
		tmp = tmp->snext;
		free(back);
	}
	free(ht->array);
	free(ht);
}
