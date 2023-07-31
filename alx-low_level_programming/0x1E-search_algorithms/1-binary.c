#include "search_algos.h"

/**
 * binary_search - function searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return:  return the index where value is located
 * if value is not present in array or if array is NULL, return -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t middle, start_index, end_index, index;

	if (array == NULL)
	{
		return (-1);
	}

	start_index = 0;
	end_index = size - 1;
	middle = start_index + (end_index - start_index) / 2;
	while (start_index <= end_index)
	{
		printf("Searching in array: ");
		for (index = start_index; index <= end_index; index++)
		{
			if (index != end_index)
			{
				printf("%d, ", array[index]);
			}
			else
			{
				printf("%d", array[index]);
			}
		}
		printf("\n");
		if (array[middle] == value)
		{
			return (middle);
		}
		else if (array[middle] < value)
		{
			start_index = middle + 1;
		}
		else
		{
			end_index = middle - 1;
		}
		middle = start_index + (end_index - start_index) / 2;
	}
	return (-1);
}
