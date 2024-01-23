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
 * shell_sort - uses shell sort algorithm to sort elements in
 * an array
 * @array: array to be sorted
 * @size: size of the array
 * Return: Nothing
*/
void shell_sort(int *array, size_t size)
{
	unsigned int k, i;
	int idx, j;

	k = 1;

	/*knuth sequence generating*/
	while (k <= size / 3)
	{
		k = 3 * k + 1;
	}

	while (k > 0)
	{
		for (i = k; i < size; i++)
		{
			idx = array[i];
			j = i - k;
			while (j >= 0 && array[j] > idx)
			{
				array[j + k] = array[j];
				j -= k;
			}
			array[j + k] = idx;
		}
		/*knuth sequence increment*/
		k = (k - 1) / 3;
		print_array(array, size);
	}

}
