#include "search_algos.h"

/**
 * exponential_search - searches for a value in a sorted array of
 *                      integers using the Exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to check
 * Return: the index where value is located
 *          -1 if array is NULL or no match is found
 */

int exponential_search(int *array, size_t size, int value)
{
	int e = 1, i, mid, j;

	while (e < (int) size - 1 && array[e] < value)
	{
		printf("Value checked array[%d] = [%d]\n", e, array[e]);
		if (array[e] == value)
			return (e);
		e *= 2;
	}
	i = e / 2;
	e = (e < (int) size ? e : (int) size - 1);
	printf("Value found between indexes [%d] and [%d]\n", i, e);

	while (i <= e)
	{
		printf("Searching in array:");
		for (j = i; j <= e; j++)
			printf("%s%d", j == i ? " ": ", ", array[j]);
		printf("\n");
		mid = (e + i) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			i = mid + 1;
		if (array[mid] > value)
			e = mid - 1;
	}
	return (-1);
}
