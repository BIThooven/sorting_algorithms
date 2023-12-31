#include "sort.h"
/**
 * shell_sort - the shell sort algorithm function
 * @array: the array to be sorted
 * @size: the array size
 * Return: void returns nothing
*/
void shell_sort(int *array, size_t size)
{
	size_t interval, j, i;
	int temp;

	if (array == NULL || size < 2)
		return;

	interval = 1;
	while (interval <= size / 3)
	{
		interval = interval * 3 + 1;
	}
	while (interval > 0)
	{
		for (i = interval; i < size; i++)
		{
			temp = array[i];
			j = i;
			while (j >= interval && array[j - interval] > temp)
			{
				array[j] = array[j - interval];
				j -= interval;
			}
			array[j] = temp;
		}
		interval = (interval - 1) / 3;
		print_array(array, size);
	}
}
