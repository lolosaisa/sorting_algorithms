#include "sort.h"

/**
 * swap_nodes - Swap two nodes in a listint_t doubly-linked list.
 * @h: A pointer to the head of the doubly-linked list.
 * @n1: A pointer to the first node to swap.
 * @n2: The second node to swap.
 */
void swap_nodes(listint_t **h, listint_t **n1, listint_t *n2)
{
	(*n1)->next = n2->next;
	if (n2->next != NULL)
		n2->next->prev = *n1;
	n2->prev = (*n1)->prev;
	n2->next = *n1;
	if ((*n1)->prev != NULL)
		(*n1)->prev->next = n2;
	else
		*h = n2;
	(*n1)->prev = n2;
	*n1 = n2->prev;
}

/**
 * insertion_sort_list - using insertion sort algorithm to sort
 * a list
 * @list: list to be sorted
 * Return: Nothing
*/

void insertion_sort_list(listint_t **list)
{
	/*
	 * i is used for iteration, j for comparing and inserting current element
	 * in the correct position, and tmp is for holding the element temporarily
	 */
	listint_t *i, *j, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	for (i = (*list)->next; i != NULL; i = temp)
	{
		temp = i->next;
		j = i->prev;
		while (j != NULL && i->n < j->n)
		{
			swap_nodes(list, &j, i);
			print_list((const listint_t *)*list);
			j = i->prev;
		}
	}
}
