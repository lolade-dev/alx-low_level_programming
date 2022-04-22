#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * keyGen - Function to randomly generates password
 * Return: 0
 */
int keyGen(void)
{
	int sum;
	char c;

	srand(time(NULL));
	while (sum <= 2645)
	{
		c = rand() % 128;
		sum += c;
		putchar(c);
	}
	putchar(2772 - sum);
	return (0);
}
