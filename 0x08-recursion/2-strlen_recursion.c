#include "main.h"
/**
 * _strlen_recursion - Entry point
 * @s: input
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	return (count_letters(0, s));
}
/**
 * count_letters - Counting function
 * @i: indexes
 * @s: string
 * Return: the count of string
 */
int count_letters(int i, char *s)
{
	if (s[i] != '\0')
		return (count_letters(i + 1, s));
	return (i);
}
