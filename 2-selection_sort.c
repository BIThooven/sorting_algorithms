#include "sort.h"
/**
 * selection_sort - a function that swaps values in an array
 * @array: the array to swap it's values
 * @size: size of the array
 * Return: void returns nothing
*/
void selection_sort(int *array, size_t size)
{
	size_t i, j, tmp;

	if (*array == NULL || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			if (array[i] > array[j])
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
			}
		}
		print_array(array, size);
	}
}
