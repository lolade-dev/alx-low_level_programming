#include "lists.h"
/**
 * insert_dnodeint_at_index - function that inserts a new node
 * @h: list
 * @idx: index of the list where the node should be added
 * @n: element to be added
 * Return: the address of the new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count;
	dlistint_t *tmp, *new, *tmp_prev;

	if (head == NULL && idx > 0)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n, new->prev = new->next = NULL;

	if (idx == 0)
	{
		if (*head)
		{
			new->next = *head;
			(*head)->prev = new, *head = new;
		}
		else
			*head = new;
		return (new);
	}
	count = 1, tmp = (*head)->next;
	while (tmp)
	{
		if (idx == count)
		{
			tmp->prev->next = new, new->prev = tmp->prev;
			new->next = tmp, tmp->prev = new;
			return (new);
		}
		count++;
		tmp_prev = tmp;
		tmp = tmp->next;
	}
	if (tmp == NULL && count == idx)
	{
		tmp_prev->next = new, new->prev = tmp_prev;
		return (new);
	}
	free(new);
	return (NULL);
}
