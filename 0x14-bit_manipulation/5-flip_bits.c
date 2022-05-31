#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to flip
 *  to get from one number to another
 *  @n: number to flip
 *  @m: the number to set n to after flipping
 *  Return: the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flips = 0, i;
	unsigned long int xor = (n ^ m);
	unsigned long int max = 1;

	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (max == (xor & max))
			flips++;
		max <<= 1;
	}
	return (flips);
}
