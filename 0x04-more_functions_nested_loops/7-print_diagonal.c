#include "main.h"
/**
 * print_diagonal - print lines
 * @n: number of lines
 */
void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('\\');
		}
	}
	_putchar('\n');
}
