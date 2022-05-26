#include "lists.h"
/**
 * free_listint - This function frees the list
 * @head: pointer to a list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}

}
