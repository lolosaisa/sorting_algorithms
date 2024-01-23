#include "sort.h"

/**
 * swap_elements - swaps different elements in an array
 * @x: pointer to x index
 * @y: pointer to y index
 * Return: Nothing
*/
void swap_elements(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

/**
 * selection_sort - sorts an array using selection sort
 * algorithm
 * @array: the array to be sorted
 * @size: size of the array to sort
 * Return: Nothing
*/
void selection_sort(int *array, size_t size)
{
	unsigned int i, j, min_idx;
	bool swapper;

	for (i = 0; i < size -  1; i++)
	{
		min_idx = i;
		swapper = false;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
			{
				min_idx = j;
				swapper = true;
			}
		}
		if (swapper && min_idx != i)
		{
			swap_elements(&array[min_idx], &array[i]);
			print_array(array, size);
		}
	}
}
