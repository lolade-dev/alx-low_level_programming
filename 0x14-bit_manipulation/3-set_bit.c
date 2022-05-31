#include "main.h"

/**
 * set_bit - function that sets a value of bit to 1 at a given index
 * @n: integers
 * @index: index
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	max = 1 << index;
	*n |= max;
	return (1);
}
