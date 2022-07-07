#include "lists.h"
/**
 * dlistint_len - function that returns the number of elements of a list
 * @h: input list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t sum = 0;

	if (h == NULL)
		return (sum);

	while (h)
	{
		sum++;
		h = h->next;
	}
	return (sum);
}
