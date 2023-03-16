#include "lists.h"

/**
 * add_dnodeint - adds a new dlistint_t to the top of the list
 * @head: the first element of the doubly linked list
 * @n: the integer which will be in the new node of the list
 *
 * Return: new_node, the newly initialized node added to the top of the list
 *		   NULL if malloc fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}

	new_node->next = *head;
	(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}
