#include "sort.h"
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
/**
 * bubble_sort - a function to sort values in an array
 * @array: array of the value to be swapped
 * @size: size of the array
 * Return: void returns nothing
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	bool swapped;

	for (i = 0; i < size - 1; i++)
	{
		swapped = false;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
				swapped = true;
			}
		}
		if (swapped == false)
		{
			break;
		}
	}
}
