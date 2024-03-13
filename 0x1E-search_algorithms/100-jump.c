#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted
 *              array of integers using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to check
 * Return: the index where value is located
 *          -1 if array is NULL or no match is found
 */
int jump_search(int *array, size_t size, int value)
{
	int l, h, rt;

	if (array == NULL || size == 0)
		return (-1);
	rt = (int) sqrt((double)size);
	l = 0;
	h = 0;
	while (h < (int) size && array[h] < value)
	{
		printf("Value checked array[%d] = [%d]\n", h, array[h]);
		l = h;
		h += rt;
	}
	printf("Value found between indexes [%d] and [%d]\n", l, h);
	while (array[l] <= value && l <= (h < (int)(size - 1) ? h : (int)(size - 1)))
	{
		printf("Value checked array[%d] = [%d]\n", l, array[l]);
		if (array[l] == value)
			return (l);
		l = l + 1;
	}
	return (-1);
}
