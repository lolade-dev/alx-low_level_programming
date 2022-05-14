#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - Entry point
 * @name: Input
 * @f: is pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	else
	{
		f(name);
	}
}
