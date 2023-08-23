#include "lists.h"

/**
 * add_node - add a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: string to add in the node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int length = 0;

	while (str[length])
		length++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = length;
	new_node->next = (*head);
	(*head) = new_node;

	return (*head); }