#include "lists.h"
/**
 * add_nodeint - adds a node to the beginning of a linked list
 * @head: double pointer to a linked list
 * @n: integer to add to the new node
 *
 * Return: pointer to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;

	*head = new;
	return (new);
}
