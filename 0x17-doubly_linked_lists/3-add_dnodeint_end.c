#include "lists.h"

/**
 * add_dnodeint_end - adds node at the end of the doubly linked list with the
 * head of the list @head
 * @head: first item of the doubly linked list
 * @n: n value of the newly added item in the list
 *
 * Return: address of new list, NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *head_copy = *head;

	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (!(*head))
	{
		*head = new_node;
		return (new_node);
	}
	while (head_copy->next)
		head_copy = head_copy->next;

	head_copy->next = new_node;
	new_node->prev = head_copy;
	return (new_node);

}
