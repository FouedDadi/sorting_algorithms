#include "sort.h"
/**
 *bubble_sort - function that sorts an array of integers in ascending order
 *@size: size of the array
 *@array: the array that will be sorted
 */
void bubble_sort(int *array, size_t size)
{
size_t i, j;
int tmp;
for (i = 1; i < size; i++)
{
for (j = 0; j < size - i; j++)
{
if (array[j] > array[j + 1])
{
tmp = array[j];
array[j] = array[j + 1];
array[j + 1] = tmp;
print_array(array, size);
}
}
}
}
