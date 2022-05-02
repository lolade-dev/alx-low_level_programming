#include "stdio.h"
#include "stdlib.h"
/**
 * main - Entry point
 * @argc: counter
 * @argv: array
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int cents, change;

	if (argc == 2)
	{
		cents = atoi(*(argv + 1));
		change = 0;
		while (cents > 0)
		{
			if (cents % 25 < cents)
			{
				cents -= 25;
				change++;
			}
			else if (cents % 10 < cents)
			{
				cents -= 10;
				change++;
			}
			else if (cents % 5 < cents)
			{
				cents -= 5;
				change++;
			}
			else if (cents % 2 < cents)
			{
				cents -= 2;
				change++;
			}
			else
			{
				cents -= 1;
				change++;
			}
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", change);
	return (0);
}
