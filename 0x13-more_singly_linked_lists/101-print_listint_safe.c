#include "lists.h"

/**
 * print_listint_safe - printing list
 *
 * @head: head of a list
 *
 * Return: list size
 *
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *fast = head, *slow = head;
	size_t count = 0;

	if (head == NULL)
	return (0);

	

	while (head != NULL)
	{
		if (slow != NULL && fast != NULL && fast->next != NULL)
		{
			fast = fast->next->next;
			slow = slow->next;

			if (slow == fast)
			{
				exit(98);
			}
		}
		printf("[%p] %d\n", (void *)(&(head->n)), head->n);
		head = head->next;
		count++;
	}
	return (count);
}
