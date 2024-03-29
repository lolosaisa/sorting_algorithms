#include "sort.h"

/**
 * bubble_sort - a sorting algorithm function
 * @array: array to be sorted
 * @size: the size input of the array
 * Return: nothing
*/

void bubble_sort(int *array, size_t size)
{
	unsigned int i, j, temp;
	bool bubbly;

	if (array == NULL || size < 2)
	{
		return;
	}

	do {
		bubbly = false;
		for (i = 0; i < size - 1; i++)
		{
			for (j = 0; j < size - i - 1; j++)
			{
				if (array[j] > array[j + 1])
				{
					temp = array[j];
					array[j] = array[j + 1];
					array[j + 1] = temp;
					print_array(array, size);
					bubbly = true;
				}
			}
		}
		size--;
	} while (bubbly);

	while (bubbly && i--)
	;
}
