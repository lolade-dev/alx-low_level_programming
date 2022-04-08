#include <stdio.h>
/**
 * main - This funcction prints the size ofvarious types
 *
 * Return: Always 0
 */
int main(void)
{
	int u;
	long int v;
	long long int w;
	char x;
	float y;

	printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(x));
	printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(y));
	printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(w));
	printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(v));
	printf("size of a int: %lu byte(s)\n", (unsigned long)sizeof(u));
	return (0);
}
