#include "main.h"
/**
 * print_last_digit - Entry point
 * @n: input number
 * Return: last digit of number
 */
int print_last_digit(int n)
{
	int last;

	if (n < 0)
		last = -1 * (n % 10);
	else
		last = n % 10;
	_putchar(last + '0');
	return (last);
}
