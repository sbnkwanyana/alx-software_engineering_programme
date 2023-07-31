#include "sort.h"

/**
 * bubble_sort - implementation of the bubble sort algorithm
 * thats sorts an array of integers
 * @array: unsorted array to sort
 * @size: iterations to pass through the array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int swap;
	int tmp;

	if (size == 0 || array == NULL)
		return;

	swap = 1;
	while (swap)
	{
		swap = 0;

		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = tmp;
				swap = 1;
				print_array(array, size);
			}
		}
	}
}
