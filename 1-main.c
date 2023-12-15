/**
 * insertion_sort_list - a function that sort and isert a/in a list
 * @list: the list to be sorted and insert to
 * Return: returns nothing
*/
// void insertion_sort_list(listint_t **list)
// {
// 	listint_t *swap, *_next;

// 	if (!list)
// 	{
// 		return;
// 	}
// 	swap = (*list)->next;
// 	while (swap != NULL)
// 	{
// 		_next = swap->next;
// 		while (swap->prev != NULL && swap->prev->n > swap->n)
// 		{
// 			swap->prev->next = swap->next;
// 			if (swap->next != NULL)
// 			{
// 				swap->next->prev = swap->prev;
// 			}
// 			swap->next = swap->prev;
// 			swap->prev = swap->next->prev;
// 			swap->next->prev = swap;
// 			if (swap->prev == NULL)
// 			{
// 				*list = swap;
// 			}
// 			else
// 			{
// 				swap->prev->next = swap;
// 			}
// 			print_list(*list);
// 		}
// 		swap = _next;
// 	}
// }
