#include <stdio.h>
/**
 * main - This function is printing numbers in base 16
 *
 * Return: Always 0
 */
int main(void)
{
	char ch, hex;

	for (ch = '0'; ch < '16'; ch++)
	{
		switch (ch)
		{
			case '10':
				hex = 'a';
				break;
			case '11':
				hex = 'b';
				break;
			case '12':
				hex = 'c';
				break;
			case '13':
				hex = 'd';
				break;
			case '14':
				hex = 'e';
				break;
			case '15':
				hex = 'f';
				break;
			default:
				hex = ch;
		}
		putchar(hex);
	}
	putchar('\n');
	return (0);
}
