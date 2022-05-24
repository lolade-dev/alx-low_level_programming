#include "lists.h"

/**
 * print_list - prints all the elements in the list
 * @h: pointer
 * Return: Number of noodes in the list
 */
size_t print_list(const list_t *h)
{
	const list_t *temp;
	int i;

	temp = h;

	for (i = 0; temp; i++)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", temp->len, temp->str);
		}
		temp = temp->next;
	}
	return (i);
}
