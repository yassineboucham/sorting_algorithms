#include <stdio.h>
#include "sort.h"
/**
* selection_sort - selection sort
* @array: int
* @size: size
*/
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int swap;

	if (!array || !size)
		return;

	for (i = 0; i < size; i++)
	{
		for (j = i; j < size; j++)
		{
			if (array[i] > array[j])
			{
				swap = array[i];
				array[i] = array[j];
				array[j] = swap;
				print_array(array, size);
			}
		}
	}
}
