#include "main.h"
/**
 * _puts_recursion - Entrypoint to print a string
 * @s: String to be printed
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_puts_recursion(s - 1);
		_putchar(*s);
	}
}
