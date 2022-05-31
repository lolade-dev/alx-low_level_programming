#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at an index
 * @index: index
 * @n: bit
 * Return: the value of the bit at an index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
