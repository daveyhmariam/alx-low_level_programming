#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted list of integers
 *              using the Jump search algorithm.
 * @list: a pointer to the head of the list to search in
 * @size: number of elements in array
 * @value: value to check
 * Return: return a pointer to the first node where value is located
 *          NULL if head is NULL or no match is found
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	int step, frwd;
	listint_t *tmp = list, *tmp2 = list;

	if (list == NULL)
		return (NULL);
	step = (int) sqrt(size);

	while (tmp2->next)
	{
		tmp = tmp2;
		for (frwd = 0; frwd < step && tmp2->next; frwd++)
			tmp2 = tmp2->next;
		printf("Value checked at index [%d] = [%d]\n", (int) tmp2->index, tmp2->n);
		if (tmp2 && tmp2->n == value)
			return (tmp2);
		if (tmp2 && tmp2->n > value)
			break;


	}
	printf("Value found between indexes [%d] and [%d]\n",
			(int) tmp->index, (int) tmp2->index);
	while (tmp)
	{
		printf("Value checked at index [%d] = [%d]\n", (int) tmp->index, tmp->n);
		if (tmp->n == value)
			return (tmp);
		tmp = tmp->next;
	}
	return (NULL);
}
