#include <stdio.h>
#include "sort.h"
/**
 * swap - swapping the valuse
 * @xp: value 1
 * @yp: value 2
*/
void swap(int *xp, int *yp)
{
	int tmp = *xp;
	*xp = *yp;
	*yp = tmp;
}
/**
 * bubble_sort - sorts an array of integers using Bubble sort
 * @array: array
 * @size: size
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int swapped;

	if (!array || !size)
		return;

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				swapped = 1;
				print_array(array, size);
			}
		}
		if (swapped == 0)
			break;
	}
}
