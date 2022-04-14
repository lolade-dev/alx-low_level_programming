#include "main.h"
/**
 * more_numbers - Entry point to print numbers from 0 - 9 ten times
 */
void more_numbers(void)
{
	int b, c;

	for (b = 1; b <= 10; b++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
			{
				_putchar((c / 10) + '0');
			}
			_putchar((c % 10) + '0');
		}
		_putchar('\n');
	}
}
