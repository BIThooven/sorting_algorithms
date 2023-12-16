#include "sort.h"
/**
 * selection_sort - a function that swaps values in an array
 * @array: the array to swap it's values
 * @size: size of the array
 * Return: void returns nothing
*/
void selection_sort(int *array, size_t size)
{
	size_t i, j, min;

	if (!array || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		swap(&array[min], &array[i]);
		print_array(array, size);
	}
}
/**
 * swap - a function that swaps values in an array
 * @a: a pointer to the value to be swapped
 * @b: a pointer to the value to be swapped
 * Return: void returns nothing
*/
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
