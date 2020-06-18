#include "sort.h"
/**
 *selection_sort - function that sorts an array of integers in ascending order
 *@size: size of the array
 *@array: the array that will be sorted
 */
void selection_sort(int *array, size_t size)
{
unsigned int i, j, min;
int tmp;
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
    if (min != i)
    {
        tmp = array[i];
        array[i] = array[min];
        array[min] = tmp;
        print_array(array, size);
    }
}
}
