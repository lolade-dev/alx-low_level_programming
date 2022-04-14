#include "main.h"
/**
 * print_most_numbers - Entry point to print u=numbers from 0 - 9 except 2, 4
 */
void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c == '2' || c == '4')
			continue;
		_putchar(c);
	}
	_putchar('\n');
}
