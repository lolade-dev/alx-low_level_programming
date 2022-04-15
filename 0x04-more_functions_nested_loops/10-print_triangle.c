#include "main.h"
/**
 * print_triangle - print hash in a triangle form
 * @size: number of hashes
 */
void print_triangle(int size)
{
	int i, j, k, l;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				k = size - 1;
				if (j == k - i)
				{
					for (l = 0; l <= i; l++)
					{
						_putchar('#');
					}
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
