#include "lists.h"

/**
 * listint_len - returns the number of nodes of a list
 * @h: pointer
 * Return: Number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	int i;

	temp = h;

	for (i = 0; temp; i++)
	{
		temp = temp->next;
	}
	return (i);
}

