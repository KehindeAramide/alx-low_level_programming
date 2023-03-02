#include "main.h"
/**
 * _strcmp - function to compare two strings
 * @s1: the first character to be compared
 * @s2: the second character to be compared
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}

	i++;
	}
	return (0);
}
