#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - Entry point
 * @name: Input
 * @f: is pointer
 */
void print_name(char *name, void (*f)(char *name))
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
