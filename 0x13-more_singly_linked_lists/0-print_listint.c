#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * print_listint - prints all the elements in the list
 * @h: pointer
 * Return: Number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
