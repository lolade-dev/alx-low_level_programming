#include "main.h"
/**
 * _islower - Checks lowercase
 * @c : is input
 * Return: 1 if success and 0 if failed
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
