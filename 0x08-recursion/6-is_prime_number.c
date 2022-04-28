#include "main.h"
#include "stdio.h"
/**
 * is_prime_number -  Entry point
 * @n: Argument
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (divide_number(n, 2));
}
/**
 * divide_number - Entry point
 * @n: main argument
 * @guess: guessed number
 * Return: 1 or 0
 */
int divide_number(int n, int guess)
{
	if ((n % guess) == 0)
	{
		if (n == guess)
			return (1);
		return (0);
	}

	return (divide_number(n, (guess + 1)));
}
