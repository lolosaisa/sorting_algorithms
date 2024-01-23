#include "sort.h"

int lomuto(int *array, size_t size, int left, int right);
void swap_ints(int *a, int *b);
void quick_sort(int *array, size_t size);
void lomuto_sort(int *array, size_t size, int left, int right);
/**
 * lomuto - Function that partitions an array into sub arrays according
 * to the lomuto partition scheme (last element as pivot)
 * @array: The arry to be partitioned
 * @size: The size of the array
 * @left: the starting index of the array(lower bound)
 * @right: the ending index(upperbound)
 *
 * Return: the final partion index
 */
int lomuto(int *array, size_t size, int left, int right)
{
	int *pivot, start, end;

	pivot = array + right;
	for (start = end = left; end < right; end++)
	{
		if (array[end] < *pivot)
		{
			if (start < end)
			{
				swap_ints(array + end, array + start);
				print_array(array, size);
			}
			start++;
		}
	}
	if (array[start] != *pivot)
	{
		swap_ints(array + start, pivot);
		print_array(array, size);
	}
	return (start);
}

/**
 * swap_ints - Function swaps two integers in an array
 * @a: the first integer to swap
 * @b: the second integer to swap
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * quick_sort - sort an array of integers in ascending order
 * @array: the name of the array to sort
 * @size: The size of the array
 *
 * Description: uses the lomuto cheme . prints the array after every swap
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	lomuto(array, size, 0, size - 1);
}

/**
 * lomuto_sort - Implements the recursion after the first partition
 * @array: an array of integers to sort
 * @size: the size of the array
 * @left: the starting index of the array partition order
 * @right: the ending index
 *
 * Description: uses lomuto
 */
void lomuto_sort(int *array, size_t size, int left, int right)
{
	int part;

	if (right - left > 0)
	{
		part = lomuto(array, size, left, right);
		lomuto_sort(array, size, left, part - 1);
		lomuto_sort(array, size, part + 1, right);
	}
}
