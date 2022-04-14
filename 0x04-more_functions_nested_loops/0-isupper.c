#include "main.h"
/**
 * _isupper - entry point
 * @c: input
 * Return: 1(Success) and 0 (Otherwise)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
