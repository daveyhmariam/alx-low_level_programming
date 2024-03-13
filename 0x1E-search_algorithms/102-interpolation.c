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
	size_t high = size - 1, low = 0;
	int pos = 0;

	if (array == NULL)
		return (-1);
	while (low < high && low !=high)
	{
		pos = cal_pos(array, high, low, value);

		if (pos < (int) size)
			printf("Value checked array[%d] = [%d]\n", (int)pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
		if (low == high)
			break;
	}
	if (pos >= (int) size)
	{
		printf("Value checked array[%d] is out of range\n", (int)pos);
	}
	return (-1);
}

/**
 * cal_pos - calculate prob position for interpolation search
 * @array: pointer to the first element of the array to search in
 * @high: upper index
 * @low: lower index
 * Return: the prob position
 **/
int cal_pos(int *array, size_t high, size_t low, int value)
{
	size_t pos = ((high - low) / (array[high] - array[low]))
				* (value - array[low]);
	pos += low;
	return ((int) pos);
}
