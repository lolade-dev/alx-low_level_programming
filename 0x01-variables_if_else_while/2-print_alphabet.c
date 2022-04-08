#include <stdio.h>
/**
 * main - Entry point to print alphabets in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar("%c\n", ch);
	}
	return (0);
}
