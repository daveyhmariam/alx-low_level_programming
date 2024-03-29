#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 *                          using the Interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to check
 * Return: the index where value is located
 *          -1 if array is NULL or no match is found
 */

int interpolation_search(int *array, size_t size, int value)
{
	int high = size - 1, low = 0, pos;

	if (array == NULL || size == 0)
		return (-1);
	while (low < high && low != high)
	{
		pos = (double) (high - low) / (array[high] - array[low])
		* (value - array[low]);
		pos = (int) (low + pos);

		if (pos >= (int) size)
		{
			printf("Value checked array[%d] is out of range\n", (int)pos);
			return (-1);
		}
		printf("Value checked array[%d] = [%d]\n", (int)pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			low = pos + 1;
		else if (array[pos] > value)
			high = pos - 1;
	}
	return (-1);
}
