#include <stdio.h>
/**
 * main - Entry point to print alphabets in lowercase and uppercase
 *
 * Return: Always 0
 */
int main(void)
{
	char ch, CH;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (CH = 'A'; CH <= 'Z'; CH++)
	{
		putchar(CH);
	}
	putchar('\n');
	return (0);
}
