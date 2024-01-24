#include "sort.h"

int hoare_partition(int *array, size_t size, int left, int right);
void hoare_sort(int *array, size_t size, int left, int right);
void quick_sort_hoare(int *array, size_t size;

		
/**
 * hoare_partition - Function orders a subset of array using hoare partition
 * scheme
 * @array: name of the array
 * @size: size of the array
 * @left: the lowerbound of the array
 * @right: the upperbound of the array
 *
 * Description: Uses the last element of the partition as the pivot.
 * Prints the array after each swap of two elements.
 */
int hoare_partition(int *array, size_t size, int left, int right)
{
}
/**
 * hoare_sort - Function that implement quick sort through recursion
 * @array: the name of the array
 * @size: the size of the array
 * @left: the starting index/pointer in partioning
 * @right the ending index
 *
 * Description: uses hoare partion scheme
 */
void hoare_sort(int *array, size_t size, int left, int right)
{
	int x;

	if (right - left > 0)
	{
		x = hoare_partition(array, size, left, right);
		hoare_sort(array, size, left, part - 1);
		hoare_sort(array, size, part, right);
	}
}
/**
 * quick_sort_hoare - Function that sorts an array of integers using quick
 * sort/hoarse partion scheme in ascending order
 *
 * @array: the name of the array
 * @size: size of the array
 */

void quick_sort_hoare(int *array, size_t size)
