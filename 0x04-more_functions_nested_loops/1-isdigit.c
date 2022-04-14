#include "main.h"
/**
 * _isdigit - Entry point
 * @c: input number
 * Return: 1(Success) and 0(otherwise)
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
