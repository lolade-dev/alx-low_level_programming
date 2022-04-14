#include "main.h"
/**
 * more_numbers - Entry point to print numbers from 0 - 9 ten times
 */
void more_numbers(void)
{
	int b;
	char c;

	for (b = 1; b <= 10; b++)
	{
		for (c = '0'; c <= '9'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
