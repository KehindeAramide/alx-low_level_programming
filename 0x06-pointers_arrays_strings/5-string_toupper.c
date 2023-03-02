#include "main.h"
/**
 * string_toupper - function that changes lowercase of a string to uppercase
 * @n: pointer
 * Return: char
 */

char *string_toupper(char *n)
{
	int i;

	i = 0;

	while (n[i] != '\0')
	{
		if (n[i] >= 'a' &&n[i] <= 'z')
			n[i] = n[i] - n[32];

		i++;
	}
	return (n);
}
