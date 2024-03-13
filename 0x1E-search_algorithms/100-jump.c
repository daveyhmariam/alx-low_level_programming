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
#include "search_algos.h"

int linear(int *array, int left, int right, int value);

/**
 * jump_search - searches a value one by one in the array
 *
 * @array: the array to be searched from
 * @size: the size of the array
 * @value: the value needed
 *
 * Return: -1 if it is not found else index of the value
*/

int jump_search(int *array, size_t size, int value)
{
	int left = 0, right, val_index = -1, jump = sqrt(size);

    right = jump;

	if (!array)
	return (-1);

    for (; left < (int) size; right += jump, left += jump)
    {
        if (right < (int) size)
        {
            if (array[right] == value)
            {
                printf("Value found between indexes [%d] and [%d]\n", left, right);
                val_index = right;
                break;
            }
            else if (array[right] > value)
            {
                printf("Value found between indexes [%d] and [%d]\n", left, right);
                val_index = linear(array, left, right, value);
                break;
            }
        }
        else
        {
            printf("Value found between indexes [%d] and [%d]\n", left, right);
            val_index = linear(array, left, (int)size, value);
        }
        printf("Value checked array[%d] = [%d]\n", left, array[left]);
        printf("Value checked array[%d] = [%d]\n", right, array[right]);
    }

	return (val_index);
}


int linear(int *array, int left, int right, int value)
{
    for (; left < right; left++)
    {
        printf("Value checked array[%d] = [%d]\n", left, array[left]);
        if (array[left] == value)
        {
            return (left);
        }
    }
    return (-1);
}
