#include "lists.h"

/**
 * print_listint - prints all the elements in the list
 * @h: pointer
 * Return: Number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	int i;

	temp = h;

	for (i = 0; temp; i++)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (i);
}
