#include "lists.h"
/**
 * print_dlistint - function that prints all the elements of a list
 * @h: input list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
    size_t sum = 0;

    if (h == NULL)
    {
        return (sum);
    }

    while (h)
    {
        printf("%d\n", h->n);
        sum++;
        h = h->next;
    }
    return (sum);  
    
}