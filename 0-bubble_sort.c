#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * swap-int - Function used to swapt two integers
 * @a: integer one
 * @b: the second integer to swap
 *
 */
void swap_int(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * bubble_sort - a sorting algorithm function
 * @array: array to be sorted
 * @size: the size input of the array
 * Return: nothing
*/

void bubble_sort(int *array, size_t size)
{
	size_t x; 
	bool bubbly;
	size_t len;

	len = size;
	bubbly = false;

	if (array == NULL || size < 2)
		return;

	while (bubbly == false)
	{
		bubbly = true;
		for (x = 0; x < len - 1; x++)
		{
			if (array[x] > array[x + 1])
			{
				swap_int(array + x, array + x + 1);
				print_array(array, size);
			}
		}
		len--;
	}
}
