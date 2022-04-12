#include "main.h"
/**
 * _abs - Entry point
 * @n: input integer
 * Return: the absolute value of input integer
 */
int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
