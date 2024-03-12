#include "search_algos.h"

/**
 * linear_search- searches for a value in an array of
 *                  integers using the Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to return
 * Return: the index where value is located
 *          -1 if array is NULL or no match is found
 */
int linear_search(int *array, size_t size, int value)
{
	int indx = 0;

	if (array == NULL)
		return (-1);
	for (; indx < (int) size; indx++)
	{
		printf("Value checked array[%d] = [%d]\n", indx, array[indx]);
		if (array[indx] == value)
			return (indx);
	}
	return (-1);
}
