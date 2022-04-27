#include "main.h"

/**
 * print_diagsums - Entry point
 *
 * @a: Array
 * @size: size of the array
 */
void print_diagsums(int *a, int size)
{
	int i, j, k;

	for (i = 0; i < size; i++)
	{
		j += a[i];
		k += a[size - i - 1];
		a += size;
	}
	printf("%d, ", j);
	printf("%d\n", k);
}
