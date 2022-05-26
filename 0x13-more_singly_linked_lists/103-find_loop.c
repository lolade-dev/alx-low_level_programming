#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the beginning of the list
 *
 * Return: address of the node where the loop starts or NULL if there's no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *temp1, *temp2;

	temp1 = temp2 = head;
	while (temp1 && temp2 && temp2->next)
	{
		temp1 = temp1->next;
		temp2 = temp2->next->next;
		if (temp1 == temp2)
		{
			temp1 = head;
			break;
		}
	}
	if (!temp1 || !temp2 || !temp2->next)
		return (NULL);
	while (temp1 != temp2)
	{
		temp1 = temp1->next;
		temp2 = temp2->next;
	}
	return (temp2);
}
