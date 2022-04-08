#include <stdio.h>
/**
 * main - This function is printing numbers in base 16
 *
 * Return: Always 0
 */
int main(void)
{
	char ch, hex;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	for (hex = 'a'; hex <= 'f'; hex;)
	{
		putchar(hex);
	}
	putchar('\n');
	return (0);
}
