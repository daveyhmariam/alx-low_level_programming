#include "search_algos.h"


/**
 * binary_search - searches for a value in a sorted array of
 *                  integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to check
 * Return: the index where value is located
 *          -1 if array is NULL or no match is found
 */

int advanced_binary(int *array, size_t size, int value)
{
	int low, high;

	if (array == NULL)
		return (-1);
	low = 0;
	high = (int) size - 1;
	return (split_array(array, high, low, value));	
}

int split_array(int *array, int high, int low, int value)
{
	int mid, i;

	printf("Searching in array:");
	for (i = low; i <= high; i++)
		printf("%s%d", i == low ? " ": ", ", array[i]);
	printf("\n");
	mid = (high + low) / 2;
	if (low <= high)
	{
		if (array[mid - 1] == value)
			return (split_array(array, mid, mid - 1, value));
		if (array[mid] == value && array[mid - 1] != value)
			return (mid);
		if (array[mid] < value && mid < high)
			return (split_array(array, high, mid + 1, value));
		if (array[mid] > value)
			return (split_array(array, mid - 1, low, value));
		if (low == high)
			return (-1);
	}
	return (-1);
}
