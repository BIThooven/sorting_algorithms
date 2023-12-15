#include "sort.h"
/**
 * swap_nodes- a function that swapes two elems in a doubly linked list
 * @head: the list to be swapped in
 * @node1: node to be swapped
 * @node2: node to be swapped
 * Return: returns nothing
*/
void swap_nodes(listint_t **head, listint_t *node1, listint_t *node2)
{
	listint_t *prev1, *next1, *prev2, *next2, *temp_prev, *temp_next;

	if (*head == NULL || node1 == NULL || node2 == NULL)
		return;
	if (node1 == node2)
		return;
	prev1 = node1->prev;
	next1 = node1->next;
	prev2 = node2->prev;
	next2 = node2->next;
	if (prev1 != NULL)
		prev1->next = node2;
	else
	{
		*head = node2;
	}
	if (next1 != NULL)
		next1->prev = node2;
	if (prev2 != NULL)
		prev2->next = node1;
	else
	{
		*head = node1;
	}
	if (next2 != NULL)
	{
		next2->prev = node1;
	}
	temp_prev = node1->prev;
	temp_next = node1->next;
	node1->prev = node2->prev;
	node1->next = node2->next;
	node2->prev = temp_prev;
	node2->next = temp_next;
}
/**
 * insertion_sort_list - a function that sort and isert a/in a list
 * @list: the list to be sorted and insert to
 * Return: returns nothing
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *i;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (i = (*list)->next; i != NULL; i = i->next)
	{
		while (i->prev != NULL && i->n < i->prev->n)
		{
			swap_nodes(list, i, i->prev);
			print_list((const listint_t *) *list);
		}
	}
}
