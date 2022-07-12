#include "main.h"
/**
 * _isalpha - Checks alphabet
 * @c : is input
 * Return: 1 if success and 0 if failed
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
