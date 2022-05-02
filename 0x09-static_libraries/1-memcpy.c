#include "main.h"
/**
 * _memcpy - declared function
 * @dest: memory where it is stored
 * @src: memory where it is copied to
 * @n: number of bytes
 * Return: a pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int ind;
	int i = n;

	for (ind = 0; ind < i; ind++)
	{
		dest[ind] = src[ind];
		n--;
	}
	return (dest);
}
