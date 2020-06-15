#include "sort.h"
/**
 *bubble_sort - function that sorts an array of integers in ascending order
 *@size: size of the array
 *@array: the array that will be sorted
 */
void bubble_sort(int *array, size_t size)
{
size_t i, j;
int tmp, pass;
for (i = 1; i < size; i++)
{
if (size < 2)
break;
pass = 0;
for (j = 0; j < size - i; j++)
{
if (array[j] > array[j + 1])
{
tmp = array[j];
array[j] = array[j + 1];
array[j + 1] = tmp;
print_array(array, size);
pass = 1;
}
}
if (pass == 0)
break;
}
}
