
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: pointer to the list_t list
 * @str: string to put in the new node

 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp = *head;
	unsigned int i = 0;

	while (str[i])
		i++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new_node;

	return (new_node);
}