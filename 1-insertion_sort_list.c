#include "sort.h"

/**
 * swap - Sway-linked list.
 * @r: Aoubly-linkist.
 * @o1: A poin
 * @o2: The
 */
void swap(listint_t **r, listint_t **o1, listint_t *o2)
{
	(*o1)->next = o2->next;
	if (o2->next != NULL)
		o2->next->prev = *o1;
	o2->prev = (*o1)->prev;
	o2->next = *o1;
	if ((*o1)->prev != NULL)
		(*o1)->prev->next = o2;
	else
		*r = o2;
	(*o1)->prev = o2;
	*o1 = o2->prev;
}

/**
 * insertion_sort_list - Sortlgorithm.
 * @list: A pegers.
 * Description: Prinp.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *it;
	listint_t *in;
	listint_t *t;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	for (it = (*list)->next; it != NULL; it = t)
	{
		t = it->next;
		in = it->prev;
		while (in != NULL && it->n < in->n)
		{
			swap(list, &in, it);
			print_list((const listint_t *)*list);
		}
	}
}
