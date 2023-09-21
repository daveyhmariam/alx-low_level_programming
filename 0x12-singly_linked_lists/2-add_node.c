#include "lists.h"

/**
 * add_node - adding new node
 *
 * @head: head of the list
 * @str: value of the new node
 *
 * Return: new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	int j = 0;

	if (new == NULL)
	return (NULL);

	while (str[j] != '\0')
	j++;

	new->str = strdup(str);
	new->len = j;

	new->next = *head;

	*head = new;
	return (*head);
}
