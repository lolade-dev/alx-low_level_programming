#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at an index
 * @index: index
 * @n: bit
 * Return: the value of the bit at an index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int max = 0x01;

	max <<= index;
	if (max == 0)
		return (-1);

	if ((n & max))
		return (1);
	else
		return (0);
}
