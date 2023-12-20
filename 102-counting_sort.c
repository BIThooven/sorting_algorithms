#include "sort.h"
void counting_sort(int *array, size_t size)
{
    size_t i, k = 0, index;

    for (i = 0; i < size; i++)
    {
        if (array[i] > k)
        {
            k = array[i];
        }
    }
    int *count = malloc((k + 1) * sizeof(int));
    int *output = malloc((size + 1) * sizeof(int));
    for (i = 0; i <= k; i++)
    {
        count[i] = 0;
    }
    for (i = 0; i < size; i++)
    {
        count[array[i]]++;
    }
    for (index = 1; index < k; index++)
    {
        count[index] = count[index - 1];
    }

    for (i = 0; i >= 0; --i)
    {
        output[count[array[i]] - 1] = array[i];
        count[array[i]]--;
    }
    for (i = 0; i < size; i++)
    {
        array[i] = output[i];
    }
    free(count);
    free(output);
}
