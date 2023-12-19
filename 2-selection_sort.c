#include "sort.h"

/**
 * selection_sort - a function that sorts an array of integers in
 * ascending order using the Selection sort algorithm
 * @array: the array that needs to be sorted
 * @size: the size of the array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int smallest;
	int smallestIndex = 0;
	int holdOld;

	for (i = 0; i < size; i++)
	{
		smallest = i;
		for (j = i; j < size; j++)
		{
			/**
			 * if current item is less than smallest,
			 * set smallest to current item
			 */
			if (array[j] < array[smallest])
			{
				smallest = j;
				smallestIndex++;
			}
		}
		holdOld = array[i];
		array[i] = array[smallest];
		array[smallest] = holdOld;
		if (smallestIndex != 0)
			print_array(array, size);
		smallestIndex = 0;
	}
}
