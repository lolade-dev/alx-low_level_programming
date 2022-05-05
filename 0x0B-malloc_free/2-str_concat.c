#include "main.h"
#include <stdlib.h>
/**
 * str_concat - Entry point
 * @s1: first string
 * @s2: second string
 * Return: Null or concatenation of the two strings
 */
char *str_concat(char *s1, char *s2)
{
	char *sumStr;
	unsigned int len1, len2, i, j, k;

	len1 = 0;
	if (s1 == NULL)
		s1 = "";
	else
		while (s1[len1] != '\0')
		{
			len1++;
		}

	len2 = 0;
	if (s2 == NULL)
		s2 = "";
	else
		while (s2[len2] != '\0')
		{
			len2++;
		}
	k = len1 + len2;
	sumStr = malloc(sizeof(char) * (k + 1));
	if (sumStr == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		sumStr[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		sumStr[i] = s2[j];
		i++;
	}

	sumStr[k] = '\0';
	return (sumStr);
}
