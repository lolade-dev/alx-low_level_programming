#include <stdio.h>
/**
 * main - This function prints numbers using int
 *
 * Return: Always 0
 */
int main(void)
{
	int ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
