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
	int first, second, mul;

	if (argc == 3)
	{
		first = atoi(argv[1]);
		second = atoi(argv[2]);
		mul = first * second;
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
