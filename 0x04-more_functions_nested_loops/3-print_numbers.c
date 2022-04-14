#include "main.h"
/**
 * print_numbers - Entry point to print u=numbers from 0 - 9
 */
void print_numbers(void)
{
	int i = '0';

	for (; i <= '9'; i++)
		_putchar(i);
	_putchar('\n');
}
