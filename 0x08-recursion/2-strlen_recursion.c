#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: the string to be measured
 * Return: the lenght of the string
 */

int _strlen_recursion(char *s)
{
	int ruleit = 0;

	if (*s)
	{
		ruleit++;
		ruleit += _strlen_recursion(s + 1);
	}
	return (ruleit);
}
