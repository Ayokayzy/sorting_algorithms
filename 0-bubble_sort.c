#include "sort.h"

/**
 * bubble_sort - a function that sorts an array of integers
 * in ascending order using the Bubble sort algorithm
 * @array: the array to be sorted
 * @size: the array size
 */

void bubble_sort(int* array, size_t size)
{
	size_t i, j;
	int next = 1;
	int sorted;
	int holdCurrent;

	for (i = 0; i < size; i++)
	{
		sorted = 0;
		for (j = 0; j < size - next; j++)
		{
			if (array[j] > array[j + 1])
			{
				holdCurrent = array[j];
				array[j] = array[j + 1];
				array[j + 1] = holdCurrent;
				sorted++;
				print_array(array, size);
			}
		}
		next++;

		if (sorted == 0)
			break;
	}
}
