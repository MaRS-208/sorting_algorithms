#include "sort.h"

/**
 * swap - swaps two elements from a doubly linked list
 * @n1: node 1
 * @n2: node 2
 * Return: 0
 */

void swap(listint_t *n1, listint_t *n2)
{
	listint_t *bck_1, *bck_2, *frth_1, *frth_2;

	if (!n1 || !n2)
		return;
	bck_1 = n1->prev;
	bck_2 = n2->prev;
	frth_1 = n1->next;
	frth_2 = n2->next;
	if (frth_1 == n2)
		frth_1 = n1;
	else if (frth_2 == n1)
		frth_2 = n2;
	n1->next = frth_2;
	n2->next = frth_1;
	n1->prev = bck_2;
	n2->prev = bck_1;
	if (n1->next)
		(n1->next)->prev = n1;
	if (n2->next)
		(n2->next)->prev = n2;
	if (n1->prev)
		(n1->prev)->next = n1;
	if (n2->prev)
		(n2->prev)->next = n2;
}

/**
 * insertion_sort_list - sorts a doubly linked list of\
 integers in ascending order using the Insertion sort algorithm
 * @list: list
 * Return: 0
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *c, *s;

	if (!list)
		return;
	for (c = *list; c; c = c->next)
	{
		s = c;
		while (s)
		{
			if (!s->prev)
				break;
			if (s->prev->n > s->n)
			{
				swap(s->prev, s);
				if (!s->prev)
					*list = s;
				print_list(*list);
			}
			else
				break;
		}
	}
}
