#include "main.h"

/**
 * clear_bit - function that sets a value of bit to 0 at a given index
 * @n: integers
 * @index: index
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max = 0x01;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	max = ~(1 << index);
	*n &= max;
	return (1);
}
