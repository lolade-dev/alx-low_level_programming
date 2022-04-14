#include <stdio.h>
/**
 * main - This replaces multiples of 3 with fizz and 5 with buzz
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			if (i > 9)
				printf("%d", (i / 10));
			printf("%d", (i % 10));
		}
		if (i < 100)
			printf(' ');
	}
}
