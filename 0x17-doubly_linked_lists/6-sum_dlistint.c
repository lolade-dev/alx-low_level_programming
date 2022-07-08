#include "lists.h"
/**
 * sum_dlistint - fumction that returns the sum of all the data of a list
 * @head: pointer to the head of the list
 * Return: sum or 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp;

	if (head == NULL)
		return (0);
	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
