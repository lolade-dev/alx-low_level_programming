#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Return: Void
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
}
