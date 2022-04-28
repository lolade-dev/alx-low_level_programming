#include "main.h"
#include "stdio.h"
/**
 * _sqrt_recursion - Entry point
 * @n: argument
 * Return: The square root of n
 */
int _sqrt_recursion(int n)
{
	int i = 1;

	return (wrapper(n, i));
}
/**
 * wrapper - Entry recurs
 * @n: main input
 * @guess: increment input
 * Return: sqrt
 */
int wrapper(int n, int guess)
{
	int num = guess * guess;

	if (num == n)
		return (guess);
	if (num > n)
		return (-1);
	return (wrapper(n, (guess + 1)));
}
