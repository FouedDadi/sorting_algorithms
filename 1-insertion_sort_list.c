#include "sort.h"
/**
 *bubble_sort - function that sorts an array of integers in ascending order
 *@size: size of the array
 *@array: the array that will be sorted
 */
void insertion_sort_list(listint_t **list)
{
listint_t *tmp, *pr, *ne;
int x;
if (list != NULL && (*list)->next != NULL)
{
    tmp = (*list)->next;
    pr = tmp->prev;
    ne = tmp->next;
    while (tmp != NULL)
    {
        if (tmp->n >= pr->n)
        {
            tmp = ne;
            pr = tmp->prev;
            ne = tmp->next;
        }
        else
        {
            x = tmp->n;
            tmp->n = pr->n;
            pr->n = x;
            tmp = ne;
            pr = tmp->prev;
            ne = tmp->next;
            print_list(const listint_t *list);
        }
    }
}
}