#include "lists.h"

/**
 * add_node_end - adding new node
 *
 * @head: head of the list
 * @str: value of the new node
 *
 * Return: new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t)), *endnode = *head;
	int j = 0;

	if (new == NULL)
	return (NULL);

	while (str[j] != '\0')
	j++;

	new->str = strdup(str);
	new->len = j;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	while (endnode->next != NULL)
	endnode = endnode->next;

	endnode->next = new;

	endnode = new;

	return (endnode);
}
