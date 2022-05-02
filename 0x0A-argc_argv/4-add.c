#include "stdio.h"
#include "stdlib.h"
#include "ctype.h"
/**
 * main - Entry point
 * @argc: counter
 * @argv: array
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int i, res, count;

	count = 1;
	res = 0;
	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		while (count < argc)
		{
			for (i = 0; argv[count][i] != '\0'; i++)
			{
				if (!(isdigit(argv[count][i])))
				{
					printf("Error\n");
					return (1);
				}
			}
			res += atoi(argv[count]);
			count++;
		}
		printf("%d\n", res);
	}

	return (0);
}
