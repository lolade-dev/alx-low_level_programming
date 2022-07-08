#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node of a linked list
 * @head: the pointer to the head of the list
 * @index: the index of the node 
 * Return: the node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    unsigned int sum;
    dlistint_t *temp;

    if (head == NULL)
        return (NULL);
    temp = head;
    while (temp)
    {
        if (index == sum)
            return (temp);
        sum++;
        temp = temp->next;
    }
    return (NULL);
}