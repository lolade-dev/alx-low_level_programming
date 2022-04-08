#include <stdio.h>
/**
 * main - This function is printing numbers with space and commas
 *
 * Return: Always 0
 */
int main(void)
{
	int ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
		putchar(',');
		putchar(' ');
	}
	putchat('\n');
	return (0);
}
