#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/**
 * enum bool - Enumerating boolean values
 * @false: Equals 0
 * @true: Equals 1
*/
typedef enum bool
{
	false = 0,
	true = 1
} bool;

void print_list(const listint_t *list);
void print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void swap_nodes(listint_t **h, listint_t **n1, listint_t *n2);
void selection_sort(int *array, size_t size);
int lomuto(int *array, size_t size, int left, int right);
void swap_ints(int *a, int *b);
void quick_sort(int *array, size_t size);
void lomuto_sort(int *array, size_t size, int left, int right);
void shell_sort(int *array, size_t size);

#endif
