#include "sort.h"
/**
 * cocktail_sort_list - a function that uses the cocktail sort algo
 * @list: list to be sorted
 * Return: void returns nothing
*/
void cocktail_sort_list(listint_t **list)
{
	bool swapped;
	listint_t *tail;

	swapped = true;
	tail = *list;
	while (swapped)
	{
		swapped = false;
		while (tail->next)
		{
			if (tail->n > tail->next->n)
			{
				_swap(list, tail->next);
				swapped = true;
				print_list(*list);
			}
			tail = tail->next;
		}
		if (!swapped)
			break;

		swapped = false;
		while (tail->prev)
		{
			if (tail->n < tail->prev->n)
			{
				_swap(list, tail);
				swapped = true;
				print_list(*list);
			}
			else
			{
				tail = tail->prev;
			}
		}
	}
}
/**
 * _swap - a function that swaps two nodes
 * @head: the list to be swapped
 * @node1: the node to swap
 * Return: returns the current swapped node
*/
listint_t *_swap(listint_t **head, listint_t *node1)
{
	listint_t *backward, *current;

	backward = node1->prev;
	current = node1;
	backward->next = current->next;

	if (current->next)
	{
		current->next->prev = backward;
	}
	current->next = backward;
	current->prev = backward->prev;
	backward->prev = current;

	if (current->prev)
	{
		current->prev->next = current;
	}
	else
	{
		*head = current;
	}
	return (current);
}
