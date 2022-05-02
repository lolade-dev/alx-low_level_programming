#include "stdio.h"
/**
 * main - Entry point
 * @argc: counter
 * @argv: array of strings
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
