#include "sort.h"
/**
 * quick_sort - sorts an array of integers using the Quick
 * sort algorithm in ascending order
 * @array: array to sort
 * @size: array size
*/
void quick_sort(int *array, size_t size)
{
	int pi;

	if (array == NULL || size < 2)
		return;

	if (size > 1)
	{
		pi = lomuto(array, 0, size - 1);
		quick_sort(array, pi);
		print_array(array, size);
		quick_sort(array + pi + 1, size - pi - 1);
	}
}
/**
 * lomuto - array partition
 * @array: array to sort
 * @high: first position
 * @low: last position
 * Return: int pivot index
 */
int lomuto(int *array, int low, int high)
{
	int pivot, i, j;

	pivot = array[high];
	i = low - 1;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			swap(&array[i], &array[j]);
		}
	}
	swap(&array[i + 1], &array[high]);
	return (i + 1);
}
/**
 * swap - a function that swaps values in an array
 * @a: a pointer to the value to be swapped
 * @b: a pointer to the value to be swapped
 * Return: void returns nothing
*/
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
